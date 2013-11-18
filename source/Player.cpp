// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

// Player source code


#include "Debug.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <string>
#include <math.h>
#include <sstream>
#include <fstream>
#include <iomanip>

#include "Moves.h"
#include "Cache.h"
#include "Player.h"
#include "TreeDebug.h"
#include "QPosition.h"
#include "NodeStats.h"
#include "Ticks.h"
#include "Games.h"
#include "MPCStats.h"
#include "Pos2.h"
#include "Book.h"

const bool fBookWLDOnly=true;

//////////////////////////////////////////////////
// CPlayer
//////////////////////////////////////////////////

// game playing

void CPlayer::StartMatch(const COsMatch& match) {
}

CPlayer::TCheatcode CPlayer::Update(COsGame& game, int flags, COsMoveListItem& mli) {
	TCheatcode cheatcode;

	// time the call to GetMove()
	i8 ticksPerSecond=GetTicksPerSecond();
	i8 start=GetTicks();

	cheatcode = GetMove(game, flags, mli);

	i8 end=GetTicks();
	mli.tElapsed = (end-start)/(double)ticksPerSecond;

	return cheatcode;
}

void CPlayer::EndGame(const COsGame& game) {
}

// display

void CPlayer::SetName(const char* newName) {
	m_sName=newName;
}

void CPlayer::SetName(const char* newName, int number) {
	std::ostringstream os;
	os << newName << number;
	m_sName=os.str();
}

std::string CPlayer::Name() const {
	return m_sName.c_str();
}

bool CPlayer::NeedsBoardDisplayed() const {
	return false;
}

//////////////////////////////////////////////////
// CPlayerHuman
//////////////////////////////////////////////////

CPlayerHuman::CPlayerHuman() {
}

bool CPlayerHuman::Save(const COsGame& game) {
	string fn;
	cin >> fn;

	ofstream os(fn.c_str());

	bool fResult = (os << game)!=0;
	cout << (fResult?"Saved ":"Failed to save ") << fn << "\n";

	return fResult;
}

bool CPlayerHuman::Load(COsGame& game) {
	string fn;
	cin >> fn;

	CGame* pGame=dynamic_cast<CGame*>(&game);
	if (pGame) {
		int err=pGame->Load(fn.c_str());
		cout << (err?"Failed to load ":"Loaded ") << fn << "\n";
		if (!err)
			pGame->SetInfo();

		return !err;
	}
	else {
		cerr << "Internal error at " << __FILE__ << " line " << __LINE__ << "\n";
		QSSERT(0);
		return false;
	}
}

CPlayer::TCheatcode CPlayerHuman::GetMove(COsGame& game, int flags, COsMoveListItem& mli) {
	CMoves moves;
	string sInput;
	u4 i;

	while (flags&kMyMove) {

		// input and convert to lowercase
		cout << "Please enter next move: ";
		cin >> sInput;

		// if the parent process has closed stdin, we need to exit
		if (!cin)
			_exit(0);

		for(i=0; i<sInput.length(); i++) {
			sInput[i]=tolower(sInput[i]);
		}

		// make a move?
		if (sInput.length()>=2 && isalpha(sInput[0]) && isdigit(sInput[1])) {
			if (game.GetPos().board.IsMoveLegal(COsMove(sInput))) {
				mli.mv=COsMove(sInput);
				break;
			}
			else
				cout << "'" << sInput << "' is not a valid move.\n";
		}
		// pass?
		else if(!strncmp(sInput.c_str(),"pa",2)) {
			if (!game.GetPos().board.HasLegalMove()) {
				mli.mv.SetPass();
				break;
			}
			else
				cout << "You have a valid move, you can't pass.\n";
		}

		// cheat code ?
		else {
			if (sInput=="save") {
				Save(game);
			}
			else if (flags&kAllowCheats) {
				if (sInput=="ap") {
					return kCheatAutoplay;
				}
				else if (sInput=="load") {
					Load(game);
					return kCheatContinue;
				}
				else if (sInput=="switch") {
					return kCheatSwitch;
				}
				else if (sInput=="name") {
					cin >> m_sName;
					return kCheatContinue;
				}
				else if (sInput=="play") {
					string sLine;
					getline(cin, sLine);
					std::istringstream is(sLine);
					COsMoveListItem mli;
					while ((is >> mli)) {
						if (game.GetPos().board.IsMoveLegal(mli.mv))
							game.Update(mli);
						else {
							cout << "Play sequence terminated at illegal move " << mli.mv << "\n";
							break;
						}
					}
					return kCheatContinue;
				}
				else if (sInput=="quit") {
					std::cout << "quitting" << std::endl;
					_exit(0);
				}
				else if (sInput=="undo") {
					return kCheatUndo;
				}
				else if (sInput=="?"|| sInput=="help") {
					cout << "Current commands:\n"
						<< " save <filename>: save the current position as file\n"
						<< " load <filename>: load the current position from a file\n"
						<< " name <name>: set your name\n"
						/*<< " setgame <GGF game>: reset the game with the given starting position\n"*/
						<< " ap: have opponent autoplay the remainder of the game\n"
						<< " switch: switch sides in game\n"
						<< " play <move>*: force a sequence of moves to be played\n"
						<< " quit: quit the program\n"
						<< " undo: undo your last move\n"
						<< "\n";
				}
			}
			else
				cout << "Your move must consist of a letter followed by a number, e.g. A8\n";
		}
	}

	mli.dEval=0;
	return kCheatNone;
}

// information

bool CPlayerHuman::NeedsBoardDisplayed() const {
	return true;
}

bool CPlayerHuman::IsHuman() const {
	return true;
}

TMoveSignal CPlayerHuman::MoveSignal() const {
	return kSignalStdin;
}

////////////////////////////////////////
// CComputerDefaults
////////////////////////////////////////

CComputerDefaults::CComputerDefaults() : sCalcParams("s12"), cEval('J'), cCoeffSet('A')
, iPruneEndgame(5), iPruneMidgame(4), booklevel(kNegamaxBook), iEdmund(1) {
	vContempts[0]=0;
	vContempts[1]=0;
	nRandShifts[0]=nRandShifts[1]=0;
	fsPrint=5;
	fsPrintOpponent=1;
}

int CComputerDefaults::MinutesOrDepth() const {
	if (sCalcParams.empty())
		return 0;
	else
		return atol(sCalcParams.c_str()+1);
}

CValue CComputerDefaults::FloatToContempt(double fContempt) {
	CValue v=int(fContempt*kStoneValue);
	if (v>kMaxBonus)
		v=kMaxBonus;
	else if (v<-kMaxBonus)
		v=-kMaxBonus;

	return -v;
}

istream& CComputerDefaults::In(istream& isBig) {
	string sLine;
	getline(isBig, sLine);
	std::istringstream is(sLine);

	double fContempt;
	string sCalcParamsTemp;
	bool fUseBook, fCNABook;

	is >> cEval >> cCoeffSet;
	if (is >> sCalcParamsTemp)
		sCalcParams=sCalcParamsTemp;
	if (is >> fContempt)
		vContempts[1]=FloatToContempt(fContempt);
	if (is >> fContempt)
		vContempts[0]=FloatToContempt(fContempt);
	is >> nRandShifts[0] >> nRandShifts[1];
	is >> fUseBook >> fCNABook;
	is >> fsPrint >> fsPrintOpponent;

	if (!fUseBook)
		booklevel=kNoBook;
	else if (fCNABook)
		booklevel=kNegamaxBook;
	else
		booklevel=kBook;

	return isBig;
}

////////////////////////////////////////
// CPlayerComputer
////////////////////////////////////////

CPlayerComputer::CPlayerComputer(const CComputerDefaults& acd) {
	cd=acd;
	pcp=CCalcParams::NewFromString(cd.sCalcParams);

	caches[0]=caches[1]=NULL;
	fHasCachedPos[0]=fHasCachedPos[1]=false;
	std::cout << "status Loading book" << std::endl;
	book=(cd.booklevel!=CComputerDefaults::kNoBook) ? CSmartBook::FindBook(cd.cEval, cd.cCoeffSet, pcp) : NULL;
	eval=CEvaluator::FindEvaluator(cd.cEval, cd.cCoeffSet);
	mpcs=CMPCStats::GetMPCStats(cd.cEval, cd.cCoeffSet, Max(cd.iPruneMidgame, cd.iPruneEndgame));
	fAnalyzingDeferred=false;

	// get saved-game file name
	std::ostringstream os;
	os << fnBaseDir << "results/" << cd.cEval << cd.cCoeffSet << '_' << *pcp << ".ggf";
	m_fnSaveGame=os.str();
	
	toot=false;
	
	// calculate computer's name
	std::ostringstream osName;
	pcp->Name(osName);
	m_sName=osName.str();

	// Set up MPC widths
	if (mpcs) {
		int iPruneMax=cd.iPruneMidgame;
		if (cd.iPruneEndgame>cd.iPruneMidgame)
			iPruneMax=cd.iPruneEndgame;
	}
	else
		cd.iPruneMidgame=cd.iPruneEndgame=0;


	std::cout << "status Negamaxing book" << std::endl;
	SetupBook(cd.booklevel==CComputerDefaults::kNegamaxBook);
	std::cout << "status" << std::endl;
}

CPlayerComputer::~CPlayerComputer() {
	int i;
	for (i=0; i<2; i++)
		if (caches[i])
			delete caches[i];

	delete mpcs;
	delete pcp;
}

u4 CPlayerComputer::LogCacheSize(CCalcParams* pcp, int aPrune) {
	u2 lgCacheSize;
	
	// basic suggestion from the calc params
	lgCacheSize=pcp->LogCacheSize(aPrune);

	// constrain lgCacheSize to be reasonable, due in part to Pentium handling of
	//	shift operators with right operand >= 32
	if (lgCacheSize<2)
		lgCacheSize=2;
	else if (lgCacheSize>30)
		lgCacheSize=30;

	// constrain lgCacheSize to fit within available RAM (from params.txt)
	if (maxCacheMem>sizeof(CCacheData)) {
		while (sizeof(CCacheData) > maxCacheMem>>lgCacheSize)
			lgCacheSize--;
	}

	// lgCacheSize must be at least 2, due to the way cache operates
	if (lgCacheSize<2)
		lgCacheSize=2;

	return lgCacheSize;
}

//! Set the contempt such that draws always go to black or white, depending on fDrawsToBlack
void CPlayerComputer::SetContempt(bool fDrawsToBlack) {
	int vContempt = cd.FloatToContempt(100);
	if (fDrawsToBlack) {
		vContempt = -vContempt;
	}
	cd.vContempts[0]=vContempt; cd.vContempts[1]=-vContempt;
}

CCache* CPlayerComputer::GetCache(int iCache) {
	if (caches[iCache]==NULL)
		caches[iCache]=new CCache(1<<LogCacheSize(pcp, cd.iPruneMidgame && cd.iPruneEndgame));

	if (caches[iCache]==NULL) {
		cerr << "out of memory allocating cache " << iCache << " for computer " << Name() << "\n";
		_ASSERT(0);
		exit(-1);
	}

	return caches[iCache];
}

//! Get my move (if it's my move) or my recommended move (if it's the opponent move) and the time taken
//!
//! \return see CPlayer::TCheatcode for a description of cheat codes.
//!
//! \param[in] flags - combination of CPlayer::kMyMove and CPlayer::Game2
//! \param[in] game - game up to the position to evaluate
//! \param[out] mli - move eval and elapsed time are filled in.
CPlayer::TCheatcode CPlayerComputer::GetMoveAndTime(COsGame& game, int flags, COsMoveListItem& mli) {
	CPlayer::TCheatcode result;
	clock_t t=clock();
	result=GetMove(game, flags, mli);
	mli.tElapsed=double(clock()-t)/CLOCKS_PER_SEC;
	return result;
}

//! Get my move (if it's my move) or my recommended move (if it's the opponent move)
//!
//! \return see CPlayer::TCheatcode for a description of cheat codes.
//!
//! \param[in] flags - combination of CPlayer::kMyMove and CPlayer::Game2
//! \param[in] game - game up to the position to evaluate
//! \param[out] mli - move and eval are filled in; elapsed time calculated by the calling routine.
CPlayer::TCheatcode CPlayerComputer::GetMove(COsGame& game, int flags, COsMoveListItem& mli) {
	CMVK chosen;
	double tRemaining;

	COsPosition pos = game.GetPos();
	tRemaining=pos.cks[!pos.board.IsBlackMove()].tCurrent;
	const bool fMyMove=(flags&kMyMove)!=0;
	const bool fAnalyze=(flags&kAnalyze)!=0;

	CQPosition qpos(game.GetPos().board);
	u4 fNeeds=CSearchInfo::kNeedMove;
	if (flags&CPlayer::kNoAddSoloUnsolvedToBook)
		fNeeds|=CSearchInfo::kNeedNoAddSoloUnsolvedToBook;
	if (game.mt.fRand)
		fNeeds|=CSearchInfo::kNeedRandSearch;
	if (fAnalyze)
		fNeeds|=CSearchInfo::kNeedValue;
	CSearchInfo si=DefaultSearchInfo(game.GetPos().board.IsBlackMove(), fNeeds, tRemaining, (flags&kGame2)?1:0);

	if (fMyMove | fAnalyze) {
		if (!fMyMove)
			si.SetPrintLevel(si.GetPrintLevel()|CSearchInfo::kPrintPondering);
		else
			si.SetPrintLevel(si.GetPrintLevel()&~CSearchInfo::kPrintPondering);
		
		pcp->fInBook=fInBook;
		GetChosen(si, qpos, chosen, !game.mt.fRand);
		fInBook=chosen.fBook;

		extern bool fInTournament;
		if (chosen.fKnown && !fInTournament)
			mli.dEval=chosen.value/(double)kStoneValue;
		else
			mli.dEval=0;

		mli.mv=(std::string)chosen.move;
	}
	else {
		si.SetPrintLevel(cd.fsPrintOpponent);

		if (si.PrintBookLevel() && !(flags&kNoPrint) && book->FindData(qpos.BitBoard())) {
			book->GetAndPrintSubnodes(qpos, 0, si.PrintBookLevel());
		}
	}

	return kCheatNone;
}

//! Display evals for the top nBest moves from a position.
void CPlayerComputer::Hint(const CQPosition& pos, int nBest) {
	CMoves moves;
	bool fHasMove = pos.CalcMoves(moves);

	if (book) {
		std::vector<CMVPS> mvs;
		book->GetSubnodes(pos, 0, mvs);
		book->PrintSubnodes(2, mvs, pos.BlackMove());

		// if mover must pass and there's a book move we're done. Don't continue as
		// the rest of the routine assumes no passes, or 1 unvalued pass.
		if (!fHasMove && !mvs.empty())
			return;

		// remove book moves from move list so we don't do them again
		for (size_t i=0; i<mvs.size(); i++) {
			moves.Delete(mvs[i].move);
		}

		// calculate remaining number of moves to value
		nBest-=mvs.size();
	}
	if (nBest>0) {
		const u4 fNeeds=CSearchInfo::kNeedNoAddSoloUnsolvedToBook
				|CSearchInfo::kNeedMove
				|CSearchInfo::kNeedValue
				|CSearchInfo::kPrintRound
				|CSearchInfo::kPrintPondering;

		CSearchInfo si=DefaultSearchInfo(pos.BlackMove(), fNeeds, 1e6, 0);
		CMVK mvk;
		Initialize(pos.BitBoard(),pos.BlackMove());
		IterativeValue(moves, *pcp, si, mvk, false, nBest);
	}
}

//! Return the computer's default search information
CSearchInfo CPlayerComputer::DefaultSearchInfo(bool fBlackMove, u4 fNeeds, double tRemaining, int iCache) const {
	int rs=DefaultRandomness() + cd.nRandShifts[!fBlackMove];
	return CSearchInfo(cd.iPruneMidgame, cd.iPruneEndgame, rs, cd.vContempts[fBlackMove], fNeeds, tRemaining, iCache, cd.fsPrint);
}

void CPlayerComputer::GetChosen(const CSearchInfo& si, const CQPosition& pos, CMVK& mvk, bool fUseBook) {
	const int hSolve = pos.NEmpty()-hSolverStart;

	SetParameters(pos, fUseBook, si.iCache);
	QSSERT((mpcs==NULL) || cd.iPruneMidgame<=::mpcs->NPrunes());

	Initialize(pos.BitBoard(),pos.BlackMove());
	TimedMVK(*pcp, si, mvk, false);

	// Print the move
	if (si.PrintMove()) {
		cout << (si.PrintPondering()?"Predict: ":"=== ")
			<< mvk
			<< setw(3) << pos.NEmpty() << "e: "
			<< (fTooting?"":" ===") << "\n";
	}
}

void CPlayerComputer::Clear() {
	int i;
	for (i=0; i<2; i++)
		if (caches[i])
			caches[i]->Clear();
	solved=false;
}

void CPlayerComputer::StartMatch(const COsMatch& match) {
	cerr << "s";
}

void CPlayerComputer::EndGame(const COsGame& game) {
	extern bool fInTournament;

	// save the game to the saved game file
	if (!m_fnSaveGame.empty()) {
		ofstream os(m_fnSaveGame.c_str(),ios::app);
		os << game << "\n";
	}

	// if not full strength, add all games to book.
	// if full strength, add non-rand games to book.
	if (!game.mt.fRand) {
		// defer analysis of the game if we're in a tournament
		if (fInTournament) {
			ofstream os((string(Name())+"_deferred.ggf").c_str(),ios::app);
			os << game << "\n";
		}
		else if (book) {	// not deferred
			AnalyzeGame(game);
			// Don't worry about transpositions, takes too long.
			//	Will get recalced next time we start the program anyway
			//CNABook();
		}

		// save the book every so often, even if
		//  we're deferring the analysis (because solved nodes
		//	will be saved in the book)
		if (book)
			book->Mirror();
	}
}

void CPlayerComputer::SetupBook(bool fCNABook) {

	Clear();
	hasBacktracked=false;
	fInBook=true;

	if (book) {
		cerr << "c\n";
		SetParameters(true, 0);
		book->SetComputer(this);
		if (fCNABook) {
			NegamaxAndCorrectBook();
		}
	}
}

//! Negamax (i.e. search for transpositions and update assigned values) and
//! correct (i.e. add deviations if necessary) the computer's book.
void CPlayerComputer::NegamaxAndCorrectBook() {
	if (book==NULL) {
		throw std::string("can't negamax and correct book if no book exists");
	}
	int nSearches=0;
	book->NegamaxAndCorrectAll(nSearches);
}

//! Add game to book and print analysis
//!
//! If book==NULL then does nothing.
//! The game is added to book only if it is not already in book
//! Analysis is printed only if cd.fsPrint&CSearchInfo::kPrintGameAnalysis
//!
//! \return true if game was added to book (i.e. not already there, and book!=NULL)
//! \param game game to add
bool CPlayerComputer::AnalyzeGame(const COsGame& game) {
	bool fAdded = false;
	if (book) {
		::book=book;
		::cache=GetCache(0);
		::cache->Prepare();
		cerr << "a";
		if (!book->IsInBook(game)) {
			fAdded=true;
			std::cout << "\nstatus Learning " << game.pis[1].sName << "/" << game.pis[0].sName << std::endl;
			Backtrack(game);
		}
		if (cd.fsPrint&CSearchInfo::kPrintGameAnalysis)
			PrintAnalysis(game);
		book->Mirror();
	}
	return fAdded;
}

void CPlayerComputer::Backtrack(const COsGame& game) {
	int nSearches=0;
	extern bool fPrintCorrections;

	if(book) {
		book->SetComputer(this);
		book->CorrectGame(game, game.sPlace!="Local", nSearches, cd.iEdmund);
		if (fPrintCorrections)
			cout << "Done correcting game. " << nSearches << " searches done.\n";
	}
}

// preconditions:
//	There is a book
//	There is a cache
//  The game has been backtracked
void CPlayerComputer::PrintAnalysis(const COsGame& game) {
	int iMove, nMoves;
	CQPosition pos(game, 0);
	CMoves moves;
	CMove move;
	double totalTime=0;
	CMVK chosen;
	CNodeStats start, end;

	start.Read();
	nMoves=game.ml.size();

	cout << "----------- Analyzing Game -----------\n";
	for (iMove=0; iMove<nMoves; iMove++) {
		CMove mv(game.ml[iMove].mv);
		if (pos.NEmpty()<=hSolverStart)
			break;
		Initialize(pos.BitBoard(),pos.BlackMove());
		cout << "--------- move " << iMove+1 << "--------------\n";
		Print();
		if (pos.NEmpty()<60 && pos.CalcMoves(moves)) {
			const CBookData* bd=book->FindData(pos.BitBoard());
			if (!bd) {
				cout << "Position not in book\n";
				QSSERT(0);
			}
			else  {
				cout << *bd << "\n";
				book->GetAndPrintSubnodes(pos, 0, -1);
				cout << "\n";
			}
		}
		cout << game.pis[pos.BlackMove()].sName << " played: " << mv << "\n";
		pos.MakeMove(mv);
	}

	// more debug info
	end.Read();
	printf("Analysis complete in %.3lg seconds\n",(end-start).Seconds());
}

void CPlayerComputer::SetParameters(const CQPosition& pos, bool fUseBook, int iCache) {
	// Set up parameters
	::book = fUseBook?book:NULL;
	::cache=GetCache(iCache);

	// we may want to copy the other cache, if the position is a predecessor
	posCached[iCache]=pos;
	fHasCachedPos[iCache]=true;
	if (caches[!iCache] && fHasCachedPos[!iCache] && posCached[!iCache].IsSuccessor(pos)) {
		caches[iCache]->CopyData(*(caches[!iCache]));
		cout << "Cache copy!\n";
	}

	::cache->Prepare();
	//::iPruneMidgame = iPruneMidgame;
	//::iPruneEndgame = iPruneEndgame;
	::mpcs = mpcs;
	eval->Setup();
}

void CPlayerComputer::SetParameters(bool fUseBook, int iCache) {
	// Set up parameters
	::book = fUseBook?book:NULL;
	::cache=GetCache(iCache);

	::cache->Prepare();
	//::iPruneMidgame = iPruneMidgame;
	//::iPruneEndgame = iPruneEndgame;
	::mpcs = mpcs;
	eval->Setup();
}

TMoveSignal CPlayerComputer::MoveSignal() const {
	return kSignalNone;
}

bool CPlayerComputer::IsHuman() const {
	return false;
}

//! Verify that the solves in the cache are correct
//!
//! Simply calls Cache::Verify()
void CPlayerComputer::VerifyCache(int iCache) {
	GetCache(iCache)->Verify(this);
}

// default randomness for computer, dependent upon stone value
int CPlayerComputer::DefaultRandomness() {
	int result, sv;

	for (result=-4, sv=kStoneValue; sv; result++, sv>>=1);
	return result;
}
