#include "SmartBook.h"

#include <sstream>
#include "n64/qssert.h"
#include "core/options.h"
#include "core/CalcParams.h"
#include "game/Game.h"

#include "Pos2.h"
#include "Search.h"
#include "PlayerComputer.h"

using namespace std;

bool fPrintCorrections=true;

CSmartBook::CSmartBook(const char* filename, std::ostream& os) : CBook(filename, &os) {};

void CSmartBook::SetComputer(CPlayerComputer* apComputer) {
	m_pComputer=apComputer;
}

void CSmartBook::PlayEdmundGame(const CQPosition& pos, CMoveValue& mv) {
	char sBoard[NN+1];
	CGame game(m_pComputer, m_pComputer, tMatch,"");
	game.Initialize(pos.GetSBoard(sBoard), pos.BlackMove());
	COsMoveListItem mli;
	mli.mv=COsMove(mv.move.Row(), mv.move.Col());
	mli.dEval=mv.value/(double)kStoneValue;
	mli.tElapsed=0;
	game.Update(mli);

	abortOnInput=false;
	if (!game.GameOver()) game.Play();
	abortOnInput=true;
}

void CSmartBook::PlayEdmundGames(int iEdmund) {
	int nEmpty;
	map<CMinimalReflection,CBookData>::iterator i;
	CMoveValue mv;

	for (nEmpty=0; nEmpty<nEmptyBookMax; nEmpty++) {
		bool fBlackMove=!(nEmpty&1);
		for (i=entries[nEmpty].begin(); i!=entries[nEmpty].end(); i++) {
			CQPosition pos((*i).first, fBlackMove);
			if (GetEdmundMove(pos, mv, true, iEdmund)) {
				PlayEdmundGame(pos, mv);
			}
		}
	}
	m_fAltered=true;
}

map<std::string, CSmartBook*> bookList;


CSmartBook* CSmartBook::FindBook(char evalType, char coeffSet, CCalcParams* pcp) {
	CSmartBook* result;
	map<std::string, CSmartBook*>::iterator ptr;

	ostringstream os;
	os << fnBaseDir << "coefficients/" << evalType << coeffSet << "_" << *pcp << ".book";
	std::string fnBook=os.str();
	ptr=bookList.find(fnBook);
	if (ptr==bookList.end()) {
		try {
			result=new CSmartBook(os.str().c_str());
		}
		catch (const std::string& s) {
			// the book constructor only throws an exception if the book is damaged.
			// In this case it's appropriate to terminate the program so the user
			// can restore a backup. (He can't use the book in any case since the constructor failed).
			std::cerr << s;
			_exit(-3);
		}
		bookList[os.str()]=result;
		QSSERT(result);
	}
	else {
		result=(*ptr).second;
	}
	return result;
}

void CSmartBook::Clean() {
	map<std::string, CSmartBook*>::iterator i;
	for (i=bookList.begin(); i!=bookList.end(); i++)
		delete (*i).second;
}

//! Return the minimum search depth for a search in the book from the given number of empties
CHeightInfo CSmartBook::HiMin(int nEmpty) const {
	return m_pComputer->pcp->MinHeight(nEmpty);
}

//! correct the book and assign values to a position
//!
//! Correct means:
//! - Any nodes with height less than the book's computer's min height have their height increased.
//! - Any nodes where the cutoff is greater than the max subnode value need to have a new subnode added.
//!
//! Assign means:
//! - For unsolved leaf nodes, vOpponent and vMover are set to vHeuristic, and the "assigned" flag is set
//! - For solved leaf nodes, vOpponent and vMover are set to vHeuristic+bonus, and the "assigned" flag is set
//! - For branch nodes, vOpponent, vMover, and vHeuristic are set to the max of the subnode values.
//!
//! \param bd [in/out] pointer to the book data that will be updated by this routine.
//! \param nSearches [in/out] incremented by the number of searches done.
void CSmartBook::NegamaxAndCorrectPosition(CQPosition pos, CBookData* bd, int& nSearches) {
	int nEmpty=pos.NEmpty();

	QSSERT(bd->Hi().height!=0);

	// enforce a minimum height for book branch nodes and solved nodes
	// this could potentially result in a branch node being solved.
	bd->CorrectBranchness();
	if (bd->IsBranch() || bd->IsProven()) {
		CHeightInfo hiMin = HiMin(nEmpty);
		if (bd->Hi() < hiMin)
			IncreaseHeight(pos, bd, hiMin, nSearches);
	}

	// For branch nodes, get the max of the subnodes values
	if (bd->IsBranch()) {
		CBookValue bv, bvUleaf;
		CMoves movesNonbook;
		
		while (1) {
			MaxAndCorrectSubnodeValues(pos,bd, bv,bvUleaf, movesNonbook, nSearches);

			if (!movesNonbook.NMoves()) {
				bd->AllSubnodesInBook();
				break;
			}
			else if (bd->Cutoff() <= bvUleaf.vHeuristic)
				break;
			else {
				// need to value a nonbook node to get the cutoff down
				CSearchInfo si(m_pComputer->cd.iPruneMidgame, m_pComputer->cd.iPruneEndgame,
					0, 0, CSearchInfo::kNeedMove +CSearchInfo::kNeedValue, 1e6, 0, 0);

				CCalcParamsFixedHeight cp(bd->Hi());
				CMVK mvk;
				Pos2 pos2;
				pos2.Initialize(pos.BitBoard(), pos.BlackMove());
				if (fPrintCorrections)
					cout << "\nstatus Adding deviation: " << pos.NEmpty() << " empty" << std::endl;
				abortOnInput=false;
				IterativeValue(pos2, movesNonbook, cp, si, mvk, false, 1);
				abortOnInput=true;
				nSearches++;
			}
		}
		bd->AssignBranchValues(bv);
	}
	else {
		bd->values.AssignLeaf(Boni());
	}

	QSSERT(bd->Values().IsSetAndAssigned());
}

//! Add a game to the book and calculate necessary deviations.
//!
//! \param game the game to add
//! \param iGameType is 0 for private games, 1 for public games, -1 to not include the game in the game count
//! \param nSearches will be increased by the number of deviation searches that are done
//! \param iEdmund amount of edmundizatoin after being added to the book. See CBook::GetEdmundMove()
void CSmartBook::CorrectGame(const COsGame& game, int iGameType, int& nSearches, int iEdmund) {
	int iMove, nMoves;
	CMoves moves;
	CBookData *bd;
	CNodeStats nsStart, nsEnd;

	nsStart.Read();

	nMoves=game.ml.size();

	// correct from back to front so changes propagate
	for (iMove=nMoves; iMove>=0; iMove--) {
		CQPosition pos(game, iMove);
		if (pos.NEmpty()>=nEmptyBookMax)
			break;

		// if this is a valid book node
		if (pos.NEmpty()>=NEmptyMin() && pos.CalcMoves(moves)) {
			if (fPrintCorrections) {
				cout<<"------------------------------------\nCorrecting Position from game:\n";
				pos.Print();
			}
			bd=FindNonconstData(pos.BitBoard());

			// The node might not exist because e.g. it was a forced move, or an opponent move in a non-toot
			//	game or wasn't played by this computer at all.
			// For the moment we just calculate the move and deviations using the normal timing routines.
			//	This may be problematic for calcParams that use tRemaining to determine when to cut off, 
			//	I'll just set tRemaining to 15 minutes.
			if (!bd) {
				CMVK mvk;

				if (fPrintCorrections) {
					cout << "OLD: not in book\n";
					cout << "\n" << pos.NEmpty() << " search because node not in book\n";
				}
				Pos2 pos2;
				pos2.Initialize(pos.BitBoard(), pos.BlackMove());
				CSearchInfo si(m_pComputer->cd.iPruneMidgame, m_pComputer->cd.iPruneEndgame,
					0, 0, CSearchInfo::kNeedValue, 15*60, 0, -1);

				abortOnInput=false;
				IterativeValue(pos2, moves, *(m_pComputer->pcp), si, mvk, false, 1);
				abortOnInput=true;
				nSearches++;
				bd=FindNonconstData(pos.BitBoard());
				QSSERT(bd);
			}
			else {
				if (fPrintCorrections)
					cout << "OLD: " << *bd << "\n";
			}
			if (iGameType>=0)
				bd->IncrementGameCount(iGameType);
			NegamaxAndCorrectPosition(pos, bd, nSearches);
			if (iEdmund) {
				CMoveValue mv;
				while (GetEdmundMove(pos, mv, true, iEdmund)) {
					PlayEdmundGame(pos, mv);
					NegamaxAndCorrectPosition(pos,bd,nSearches);
				}
			}
			if (fPrintCorrections)
				cout << "NEW: " << *bd << "\n";
		}
	}
	nsEnd.Read();

	if (fPrintCorrections) {
		cout <<"\nDone correcting game positions! ";
		cout << nSearches << " searches in " << (nsEnd-nsStart).Seconds() << "s\n";
	}
	m_fAltered=true;
}

void CSmartBook::IncreaseHeight(CQPosition pos, CBookData* bd, CHeightInfo hi, int& nSearches){

	// maybe after the height increase we have solved it?
	bool fWLDSolved=hi.WldProven(pos.NEmpty());

	// branch?
	if (!bd->IsLeaf() && !fWLDSolved) {
		QSSERT(hi.Valid());
		bd->IncreaseHeight(CHeightInfoX(hi, pos.NEmpty()));
		NegamaxAndCorrectPosition(pos, bd, nSearches);
	}

	// solved? Ignore for now. This happens when we do a full-width search
	//	on a previously WLD solved position, e.g. when we are recalcing a
	//	book at a higher height.
	else if (bd->IsProven()) {
		QSSERT(hi.height==pos.NEmpty()-hSolverStart);
		QSSERT(fWLDSolved);
		return;
	}

	// Uleaf?
	else {
		CCalcParamsFixedHeight cp(hi);
		CMVK mvk;
		CMoves moves;

		if (!pos.CalcMoves(moves)) {
			QSSERT(0);
		}

		Pos2 pos2;
		pos2.Initialize(pos.BitBoard(), pos.BlackMove());

		// This is a total kludge. IterativeValue() will save the value as a root node,
		//	and we don't want that if we are just increasing the height of a leaf.
		//	so we store the rootness and restore it afterwards.
		bool fRoot=bd->IsRoot();

		if (fPrintCorrections) {
			hi.SetNEmpty(pos.NEmpty());
			cout << "\n" << pos.NEmpty() << " search increased-height leaf node ("
				<< bd->Hi() << "->" << hi << ")\n";
		}
		CSearchInfo si(m_pComputer->cd.iPruneMidgame, m_pComputer->cd.iPruneEndgame,
			0, 0, CSearchInfo::kNeedValue, 1e6, 0, 0);

		abortOnInput=false;
		IterativeValue(pos2, moves, cp, si, mvk, false, 1);
		abortOnInput=true;
		nSearches++;

		bd->SetRoot(fRoot);

		bd->StoreLeaf(CHeightInfoX(hi, pos.NEmpty()), mvk.value, Boni());
		QSSERT(bd->IsProven()==fWLDSolved);
	}
	QSSERT(bd->IsProven()==fWLDSolved);
}

// Find max subnode value, and max unsolved leaf subnode value
// Increase book height for subnodes if required.
// Inputs :
//	pos - position
//	bd - bookdata for position
// Outputs:
//	bv - book value for position
//	bvUleaf - book value of the best "unsolved leaf" node
void CSmartBook::MaxAndCorrectSubnodeValues(const CQPosition& pos, CBookData* bd, CBookValue& bv, CBookValue& bvUleaf, CMoves& movesNonbook, int& nSearches) {
	CMoves moves, submoves;
	CMove move;
	int pass;
	CBookData *sbd;
	CQPosition posSub;

	if (!pos.CalcMoves(moves)) {
		QSSERT(0);
		return;
	}

	// Initialize return values
	movesNonbook=moves;
	bv.MinValues();
	bvUleaf.MinValues();

	while (moves.GetNext(move)) {
		posSub=pos;
		posSub.MakeMove(move);
		pass=posSub.CalcMovesAndPass(submoves);

		// terminal subnode:
		if (pass==2) {
			bv.MergeTerminalValue(pos.TerminalValue(), Boni());
		}

		// nonterminal subnode:
		else {
			sbd=FindNonconstData(posSub.BitBoard());

			// book subnode:
			if (sbd) {

				// Increase height if too low
				if (sbd->Hi() < bd->Hi()-1)
					IncreaseHeight(posSub, sbd, bd->Hi()-1, nSearches);

				// Merge in values
				bv.Merge(sbd->Values(), pass);
				if (sbd->IsUleaf()) {
					bvUleaf.Merge(sbd->Values(), pass);
				}
			}
		}
		if (pass==2 || sbd)
			movesNonbook.Delete(move);
	}
}
//! Check the book for transpositions and assign values to the book. Optionally do searches if they are needed.
//!
//! \param nSearches [in/out] incremented by the number of searches done.
//! \param fCorrect [in] Searches will only be done if this is true.
void CSmartBook::NegamaxAndCorrectAll(int& nSearches) {
	int nEmpty;
	map<CMinimalReflection,CBookData>::iterator i;
	CQPosition pos;

	for (nEmpty=0; nEmpty<nEmptyBookMax; nEmpty++) {
		if (nEmpty<NEmptyMin()) {
			size_t size=entries[nEmpty].size();
			if (size) {
				cerr << "RED ALERT: BOOK MAY BE CORRUPT\nErasing " << size << " entries at " << nEmpty << "empties\n";
				cout << "RED ALERT: BOOK MAY BE CORRUPT\nErasing " << size << " entries at " << nEmpty << "empties\n";
				entries[nEmpty].clear();
			}
		}
		else {
			for (i=entries[nEmpty].begin(); i!=entries[nEmpty].end(); i++) {
				pos.Initialize((*i).first,true);
				NegamaxAndCorrectPosition(pos, &((*i).second), nSearches);
			}
		}
	}
	m_fAltered=true;
}

