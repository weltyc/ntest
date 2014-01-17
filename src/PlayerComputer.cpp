#include <algorithm>
#include <cassert>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <fstream>
#include "core/MPCStats.h"
#include "core/Cache.h"
#include "core/options.h"
#include "core/CalcParams.h"

#include "Pos2.h"
#include "SearchParams.h"
#include "SmartBook.h"
#include "Search.h"
#include "Evaluator.h"

#include "PlayerComputer.h"

using namespace std;

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
	mpcs=CMPCStats::GetMPCStats(cd.cEval, cd.cCoeffSet, std::max(cd.iPruneMidgame, cd.iPruneEndgame));
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
		std::cerr << "out of memory allocating cache " << iCache << " for computer " << Name() << "\n";
		assert(0);
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
		Pos2 pos2;
		pos2.Initialize(pos.BitBoard(),pos.BlackMove());
		IterativeValue(pos2, moves, *pcp, si, mvk, false, nBest);
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
	assert((mpcs==NULL) || cd.iPruneMidgame<=::mpcs->NPrunes());

	Pos2 pos2;
	pos2.Initialize(pos.BitBoard(),pos.BlackMove());
	TimedMVK(pos2, *pcp, si, mvk, false);

	// Print the move
	if (si.PrintMove()) {
		cout << (si.PrintPondering()?"Predict: ":"=== ")
			<< mvk
			<< setw(3) << pos.NEmpty() << "e: "
			<< (si.PrintPondering()?"":" ===") << "\n";
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

static void prepareCache() {
	tSetStale=::cache->NBuckets()*1E-7/dGHz;
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
		prepareCache();
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
		Pos2 pos2;
		pos2.Initialize(pos.BitBoard(),pos.BlackMove());
		cout << "--------- move " << iMove+1 << "--------------\n";
		pos2.Print();
		if (pos.NEmpty()<60 && pos.CalcMoves(moves)) {
			const CBookData* bd=book->FindData(pos.BitBoard());
			if (!bd) {
				cout << "Position not in book\n";
				assert(0);
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

	prepareCache();
	//::iPruneMidgame = iPruneMidgame;
	//::iPruneEndgame = iPruneEndgame;
	::mpcs = mpcs;
	::evaluator = eval;
}

void CPlayerComputer::SetParameters(bool fUseBook, int iCache) {
	// Set up parameters
	::book = fUseBook?book:NULL;
	::cache=GetCache(iCache);

	prepareCache();
	//::iPruneMidgame = iPruneMidgame;
	//::iPruneEndgame = iPruneEndgame;
	::mpcs = mpcs;
	::evaluator = eval;
}

bool CPlayerComputer::IsHuman() const {
	return false;
}

// default randomness for computer, dependent upon stone value
int CPlayerComputer::DefaultRandomness() {
	int result, sv;

	for (result=-4, sv=kStoneValue; sv; result++, sv>>=1);
	return result;
}
