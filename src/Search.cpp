#include <algorithm>
#include <cmath>
#include "n64/solve.h"
#include "core/NodeStats.h"
#include "core/CalcParams.h"
#include "core/Book.h"
#include "core/Cache.h"
#include "core/options.h"
#include "core/MPCStats.h"

#include "TreeDebug.h"
#include "Search.h"
#include "Evaluator.h"

// book search depths
const int kBookReadDepth=6;	// maximum depth to read from book
extern int hBookRead, hBookWrite;
const int nAbortCheck=1<<14; // check for aborts every few evals

// search params
extern int hSort;
int hSolveNoParity=6;
extern int hNegascout;

// debugging constants
extern int nEmptyCNAPrint;
extern bool fPrintWLD;
const bool fPrintBookReads=false;
extern int* nBookReads;

u4 holeParity;

// functions only called from Pos2.cpp
void ValueBookCacheOrTree(Pos2& pos2, int height, CValue alpha, CValue beta, CMoves& moves, int iPrune, CMoveValue& best);
void ValueCacheOrTree(Pos2& pos2, int height, CValue alpha, CValue beta, CMoves& moves, int iPrune, CMoveValue& best);
CValue ChildValue(Pos2& pos2, int height, CValue alpha, CValue beta, int iPrune);
bool MPCCheck(Pos2& pos2, int height, CValue alpha, CValue beta, const CMoves& moves, int& iPrune, CMoveValue& best);
void ValueTreeNoSort(Pos2& pos2, int height, int hChild, CValue alpha, CValue beta, CMoves& moves, int iPrune, CMoveValue& best);
bool ValueMove(Pos2& pos2, int height, int hChild, CValue alpha, CValue beta, CMove& move, CMoves& moves, int iPrune,
								  bool fNegascout, CMoveValue& best);

//////////////////////////////////
// position capture info
//////////////////////////////////

const bool fCapturePositions=false;
extern FILE* cpFile;
extern int nCapturedPositions;
int nCaptureWait=0;


// position capture
void SetRandomCapture() {
	nCaptureWait = (rand()*20000)/(RAND_MAX + 1LL);
}

class CInitSearch {
public:
	CInitSearch() {
		// initialize position capture info
		if (fCapturePositions) {
			std::string fn(fnBaseDir);
			fn+="captured.pos";
			cpFile=fopen(fn.c_str(),"a+b");
			if (!cpFile)
				fprintf(stderr, "Can't open cpFile!!!\n");
			SetRandomCapture();
		}
	}
} initSearch;

//////////////////////////////////////
// fastest-first adjustment
//////////////////////////////////////

inline void ValueAdjust(u4 mp, int iff, CValue& result) {
	// standard boring
	result+=CValue(mp<<iff);
}

const bool fTableFF=true;

int ffBonus[NN];

void InitFFBonus() {
	int i;

	ffBonus[0]=0;	// because log(0) doesn't exist
	for (i=1; i<NN;i++) {
			ffBonus[i]=int(20*kStoneValue*log(double(i)));
	}
}

///////////////////////////////////////////////////////////////////////
// Tree Search Routines
// Unless otherwise specified, all value routines have the following
//	inputs, outputs, and preconditions:
// Inputs:
//	height - height of search
//	alpha, beta - bounds of search are (alpha, beta).
//	moves - moves available from the position
//	iPrune - pruning index for MPC cuts, or 0 for no cuts
// Outputs:
//	best - best move and value
// Preconditions:
//	The position must be set
//	hBookRead must be set (to greater than height if no book)
//	There must be a valid move from the position
///////////////////////////////////////////////////////////////////////


CValue StaticValue(Pos2& pos2, int iff) {
	int pass;
	u4 nMovesPlayer, nMovesOpponent;
	CValue result;
	assert(evaluator);
	nEvalsQuick++;

	// check for out-of-time condition
	if (nEvalsQuick>=nAbortCheck) {
		WipeNodeStats();
		if (CheckAbort(fPrintAbort))
			return 0;
	}

	// capture position if we're doing that
	if (fCapturePositions && cpFile && (--nCaptureWait<0)) {
		nCapturedPositions++;
		pos2.GetBB().Write(cpFile);
		SetRandomCapture();
	}

	// calculate mobility
	pass=pos2.CalcMobility(nMovesPlayer, nMovesOpponent);

	// calculate value adjusting for passes
	switch(pass) {
	case 2:
		result=pos2.TerminalValue();
		break;
	case 1:
		pos2.PassBase();
		result=-evaluator->EvalMobs(pos2, nMovesOpponent, nMovesPlayer);
		pos2.PassBase();
		break;
	case 0:
		result=evaluator->EvalMobs(pos2, nMovesPlayer, nMovesOpponent);
	}

	if (false) {
		// Constrain value to be in [-kMaxHeuristic, kMaxHeuristic]
		if (result<-kMaxHeuristic)
			result=-kMaxHeuristic;
		else if (result>kMaxHeuristic)
			result=kMaxHeuristic;
	}

	if (fTableFF) {
		if (iff)
			result+=ffBonus[nMovesPlayer];
	}
	else
		result+=CValue((nMovesPlayer<<iff)-nMovesPlayer);

	return result;
}

///////////////////////////////////////////////////////////////////////
// ValueBookCacheOrTree - Get value from book, or call ValueCacheOrTree()
//	Returns:
//	 the value
//	Outputs:
//	 Does not output best move and value since book won't contain best move
///////////////////////////////////////////////////////////////////////

CValue ValueBookCacheOrTree(Pos2& pos2, int height, CValue alpha, CValue beta, CMoves& moves,
						   int iPrune) {

	CMVK best;

	if (height>=hBookRead) {
		CHeightInfo hi(height, iPrune, false);
		if (book->Load(pos2.GetBB(), hi, alpha, beta, best.value, pos2.NEmpty())) {
			if (fPrintBookReads)
				printf("br%d!",height-hBookRead);
			return best.value;
		}
	}

	ValueCacheOrTree(pos2, height, alpha, beta, moves, iPrune, best);
	assert(abortRound || iPrune || (height+hSolverStart!=pos2.NEmpty()) || (best.value<=64*kStoneValue && best.value>=-64*kStoneValue));

	return best.value;
}

///////////////////////////////////////////////////////////////////////
// ValueCacheOrTree - check the cache for the move. If there, return.
//		If not, call ValueTree and save the result to cache.
///////////////////////////////////////////////////////////////////////

void ValueCacheOrTree(Pos2& pos2, int height, CValue alpha, CValue beta, CMoves& moves,
						   int iPrune, CMoveValue& best) {
	CValue searchAlpha, searchBeta;
	CCacheData* cd;
	u64 hash;
	int iffCache;

	// initialize search values
	searchAlpha=alpha;
	searchBeta=beta;

	if (height<3)
		iPrune=false;

	// Check if the position is in cache
	hash=pos2.GetBB().Hash();

	if ((cd=cache->FindOld(pos2.GetBB(), hash))) {
		// cutoff if we can; otherwise update searchAlpha, searchBeta and set the best move
		if (cd->Load(height, iPrune, pos2.NEmpty(), alpha, beta, best.move, iffCache, searchAlpha, searchBeta, best.value)) {
			TREEDEBUG_CACHE;
			return;
		}
		assert(searchAlpha<searchBeta);
		moves.SetBest(best.move);
		assert(pos2.GetBB()==cd->Board());	// consistency check
	}
	else {
		iffCache=0;
	}


	// Do a tree search
	if (!iPrune || !MPCCheck(pos2, height, searchAlpha, searchBeta, moves, iPrune, best))
		ValueTree(pos2, height, searchAlpha, searchBeta, moves, iffCache, iPrune, best);
	
	// Add to cache if we can
	if (!abortRound) {
		cd=cache->FindNew(pos2.GetBB(),hash,height,iPrune, pos2.NEmpty());
		if (cd) {
			cd->Store(height, iPrune, pos2.NEmpty(), best.move, iffCache, searchAlpha, searchBeta, best.value);
			#ifdef _DEBUG
			assert(cd->Board()==pos2.GetBB());
			pos2.CalcMoves(moves);
			assert(moves.IsValid(best.move));
			#endif
		}
	}
	assert(abortRound || iPrune || (height+hSolverStart!=pos2.NEmpty()) || (best.value<=64*kStoneValue && best.value>=-64*kStoneValue));
}

///////////////////////////////////////////////////////////////////////
// MPCCheck - determine whether we should do forward pruning.
// returns:
//	true if we forward pruned. False otherwise
///////////////////////////////////////////////////////////////////////

inline bool MPCCheck(Pos2& pos2, int height, CValue alpha, CValue beta, const CMoves& moves, int& iPrune, CMoveValue& best) {
	CMoves movesCopy;
	float sd, cr;
	CValue bound;
	int nCut, hCheck;

	if (mpcs->BadCutHeight(height))
		return false;

	for (nCut=0; nCut<2; nCut++) {
		if (!mpcs->GetParams(height, pos2.NEmpty(), nCut, iPrune, hCheck, sd, cr))
			break;

		// check alpha cutoff
		if (alpha>-kInfinity) {
			bound=CValue((alpha-sd)*cr);
			movesCopy=moves;
			ValueCacheOrTree(pos2, hCheck, bound-1, bound, movesCopy, 0, best);
			if (abortRound)
				return false;
			if (best.value<bound) {
				best.value=alpha;
				return true;
			}
		}
		
		// check beta cutoff
		if (beta<kInfinity) {
			bound=CValue((beta+sd)*cr);
			movesCopy=moves;
			ValueCacheOrTree(pos2, hCheck, bound, bound+1, movesCopy, 0, best);
			if (abortRound)
				return false;
			if (best.value>bound) {
				best.value=beta;
				return true;
			}
		}
	}

	return false;
}

///////////////////////////////////////////////////////////////////////
// ValueTreeNoSort - value a move by tree search, with no move sorting
// Inputs:
//	hChild - height of child node
///////////////////////////////////////////////////////////////////////

inline void ValueTreeNoSort(Pos2& pos2, int height, int hChild, CValue alpha, CValue beta, CMoves& moves, int iPrune, CMoveValue& best) {
	CValue vChild, vSearchAlpha;
	CMove	move;
	int nFlipped;
	CUndoInfo ui;

	// alpha-beta search 
	while(moves.GetNext(move)) {
		vSearchAlpha=std::max(best.value, alpha);
		pos2.MakeMoveBB(move.Square(), nFlipped,ui);
		TREEDEBUG_BEFORE;
		vChild=ChildValue(pos2, hChild, vSearchAlpha, beta, iPrune);
		TREEDEBUG_AFTER;
		pos2.UndoMoveBB(move.Square(),nFlipped,ui);
		if (abortRound)
			return;
		if (vChild>best.value) {
			best.move=move;
			best.value=vChild;
			if (best.value>=beta) {
				TREEDEBUG_CUTOFF;
				return;
			}
		}
	}
}

///////////////////////////////////////////////////////////////////////
// ValueMove - value a move.
// Inputs:
//	move - the move
//	best - the best move and value; best.value must be initialized to -kInfinity before calling for the first time
//	fNegascout - true if we should negascout first
// Outputs:
//	best - updated best move and value
// Returns:
//	true if there's a cutoff or the round was aborted
// Comments:
//	This routine uses Max(alpha, best) as the alpha for the following search.
///////////////////////////////////////////////////////////////////////

inline bool ValueMove(Pos2& pos2, int height, int hChild, CValue alpha, CValue beta, CMove& move, CMoves& moves, int iPrune,
									  bool fNegascout, CMoveValue& best) {

	CValue vChild, vNegascout, vSearchAlpha;
	int nFlipped;
	CUndoInfo ui;

	// initialization
	vSearchAlpha=std::max(best.value, alpha);

	// make move
	pos2.MakeMoveBB(move.Square(), nFlipped,ui);

	// get value,possibly using negascout
	if (fNegascout) {
		TREEDEBUG_BEFORE_NEGASCOUT;
		vChild=ChildValue(pos2, hChild, vSearchAlpha, vSearchAlpha+1, iPrune);
		TREEDEBUG_AFTER_NEGASCOUT;
		vNegascout=vChild; // save value for debugging
		if (vChild>vSearchAlpha && vChild<beta) {
			TREEDEBUG_BEFORE;
			vChild=ChildValue(pos2, hChild, vSearchAlpha, beta, iPrune);
			// it may seem illogical but this appears faster than the more usual code
			// vChild=ChildValue(hChild, vChild, beta, iPrune);
			TREEDEBUG_AFTER;
		}
	}
	else {
		TREEDEBUG_BEFORE;
		vChild=ChildValue(pos2, hChild, vSearchAlpha, beta, iPrune);
		TREEDEBUG_AFTER;
	}

	// undo move
	pos2.UndoMoveBB(move.Square(),nFlipped,ui);

	// check for termination conditions
	if (abortRound)
		return true;
	if (vChild>best.value) {
		best.move=move;
		best.value=vChild;
		if (best.value>=beta) {
			TREEDEBUG_CUTOFF;
			return true;
		}
	}
	return false;
}

///////////////////////////////////////////////////////////////////////
// ValueTree - do a tree search to find the best move and value.
///////////////////////////////////////////////////////////////////////

inline void GetSearchParameters(Pos2& pos2, int height, bool fHasBest, int iPrune, int& iff, int iffCache,
							 bool& fSort, bool& fSortQuick, bool& fUseBest, bool&fNegascout) {

	// flags used in computing search parameters
	bool fSolving= height>=pos2.NEmpty()-hSolverStart;
	bool fFWSolve=fSolving && (iPrune==0);

	// search parameters
	fSort=fFWSolve || (height>=3);
	fSortQuick= height<=1;
	iff=9;
	fUseBest=fHasBest && (iffCache>=iff || !fSort);
	fNegascout=height>=hNegascout;
}

inline void ValueTree(Pos2& pos2, int height, CValue alpha, CValue beta, CMoves& moves, int& iffCache,
					  int iPrune, CMoveValue& best) {
	CValue vSubnode;
	CMove	move;
	int nFlipped;
	CUndoInfo ui;
	bool fSort, fSortQuick, fUseBest, fNegascout;
	int iff;

	GetSearchParameters(pos2, height, moves.HasBest(), iPrune, iff, iffCache, fSort, fSortQuick, fUseBest, fNegascout);
	best.value=-kInfinity;

	int hChild=height-1;
	int i, nMoves, nChecked=0;

	// check best move first
	if (fUseBest) {
		moves.GetNext(move);
		bool fCutoff=ValueMove(pos2, height, hChild, alpha, beta, move, moves, iPrune, false, best);
		if (fCutoff) {
			return;
		}
		nChecked++;
	}

	// best move didn't cut off. value remaining moves
	if (fSort) {
		CMoveValue moveValues[64];
		iffCache=iff;
		//cout << "--- sort ---\n";
		assert(moves.Consistent());
		for (nMoves=0; moves.GetNext(move); nMoves++) {
			moveValues[nMoves].move=move;
			pos2.MakeMoveBB(move.Square(), nFlipped,ui);
			if (fSortQuick) {
				// I tried giving a bonus for playing corner squares but it didn't help.
				vSubnode=pos2.GetBB().NMoverMobilities();
			}
			else {
				// Get move values with fastest-first adjustment.
				vSubnode=StaticValue(pos2, iff);

				// Check for ETC (Enhanced Transposition Cutoff). If the move will cause an
				// immediate hash-table cutoff, we want to do it first.
				CCacheData* pcd = cache->FindOld(pos2.GetBB(),pos2.GetBB().Hash());
				if (pcd && pcd->AlphaCutoff(height-1, iPrune, pos2.NEmpty(), -beta)) {
					vSubnode-=50*kStoneValue;
				}
			}
			moveValues[nMoves].value=-vSubnode;
			//Print(m_fBlackMove_);
			//cout << "Value = " << vSubnode << "\n";
			pos2.UndoMoveBB(move.Square(),nFlipped,ui);
		}

		if (abortRound) {
			return;
		}

		std::sort(moveValues, moveValues+nMoves);

		// test remaining moves in order
		for (i=0; i<nMoves; i++) {
			move=moveValues[i].move;
			bool fCutoff=ValueMove(pos2, height, hChild, alpha, beta, move, moves, iPrune, fNegascout && nChecked && best.value>=alpha, best);
			if (fCutoff) {
				return;
			}
			nChecked++;
		}
	}
	else {	// not sorting
		while (moves.GetNext(move)) {
			bool fCutoff=ValueMove(pos2, height, hChild, alpha, beta, move, moves, iPrune, fNegascout && nChecked && best.value>=alpha, best);
			if (fCutoff) {
				return;
			}
			nChecked++;
		}
	}
}

inline int MmxSolve(CBitBoard m_bb, int alpha, int beta) {
	const u64 enemy = m_bb.getEnemy();
	return solveNValue(alpha, beta, m_bb.mover, enemy);
}

inline CValue SolveValue(Pos2& pos2, CValue alpha, CValue beta) {
	if (nSNodesQuick>=(nAbortCheck<<4)) {
		WipeNodeStats();
		if (CheckAbort(fPrintAbort)) {
			return 0;
		}
	}
	const int mmxBeta=int((beta+10099)/100)-100;
	const int mmxAlpha=int((alpha+10000)/100)-100;
	const CValue result=-MmxSolve(pos2.GetBB(), -mmxBeta, -mmxAlpha)*kStoneValue;

	assert(result>-kInfinity);
	TREEDEBUG_CALLSOLVER;
	return result;
}

///////////////////////////////////////////////////////////////////////
// Child value - return the value to the node's mover of a subposition
// inputs:
//	height - height to search subposition to
//	alpha, beta - cutoffs as values to the node's mover
//	iPrune - amount of extensions allowed
// returns:
//	child value of the subposition, or bound if cutoff
//	hBookRead must be set correctly:
//		If no book, set >= height+1.
//		If book, set to minimum height to read from book.
///////////////////////////////////////////////////////////////////////
CValue ChildValue(Pos2& pos2, int height, CValue alpha, CValue beta, int iPrune) {
	CValue result;

	// Solver evaluation if near end
	if (pos2.NEmpty()<=hSolverStart) {
		return SolveValue(pos2, alpha, beta);
	}

	// Static value if no height
	if (height<=0) {
		result=-StaticValue(pos2, 0);
		assert(result>-kInfinity);
	}

	// Tree-search value otherwise
	else {
		CMoves moves;
		int pass;
		cache->Prefetch(pos2.GetBB().Hash());
		pass=pos2.CalcMovesAndPassBB(moves);

		switch(pass) {
		case 0:
			result=-ValueBookCacheOrTree(pos2, height, -beta, -alpha, moves, iPrune);
			assert(result>-kInfinity || abortRound);
			break;
		case 1:
			result=ValueBookCacheOrTree(pos2, height, alpha, beta, moves, iPrune);
			assert(result>-kInfinity || abortRound);
			break;
		case 2:
			result=pos2.TerminalValue();
			assert(result>-kInfinity);
			break;
		}

		if (pass)
			pos2.PassBB();
	}

	return result;
}

//! Output intermediate search results to a stream.
//! <PV> <Value> <NGamesInBook> <Ply>
static void OutputSearchInfo(std::ostream& os, CMoveValue mv, bool fPassBefore, CHeightInfoX hix) {
	os << "search ";
	if (fPassBefore) {
		os << "PA-";
		mv.value=-mv.value;
	}
	os << mv.move;

	const std::streamsize precision=os.precision(2);
	const std::ios_base::fmtflags flags=os.setf(std::ios::showpos);
	os.setf(std::ios::fixed, std::ios::floatfield);
	os << std::setw(7) << " " << double(mv.value)/kStoneValue;
	os.flags(flags);
	os.precision(precision);

	os << " 0 " << hix << "\n";
}

///////////////////////////////////////////////////////////////////////
//! values a set of moves and return the best values.
// Inputs:
//	height, alpha, beta, iPrune - as above
//	nBest - number of moves to be correctly valued (e.g. 2 will make sure the top 2 moves have values calculated correctly)
//	mvs - a vector of CMoveValues. Only moves in this list will be considered. This should
//			be in order (for best performance) so pass the result from the previous height in
//! \param fPrintBestMoves true if the routine should print search updates as it goes through the moves
//! \param fPassBefore if true, updates are printed with a preceding "PA-" and the negative of the value is printed.
//!
//! \note if iPrune==0 the routine will return as soon as nBest moves have been found with value>=beta.
//!
// Outputs:
//	nValued - number of moves that were successfully valued (value was exact or a beta-cutoff)
//			if alpha>-kInfinity, sets nValued to at least nBest (the first nBest were correctly valued
//			according to the alpha-cutoff).
//	mvsEvaluated - a vector of CMoveValues, sorted.
//			First will be the nValued moves that were valued, stably sorted by value,
//			then the remaining moves that suffered alpha-cutoff, in the original order from mvs
//	If we aborted, mvs and nValued will contain only moves and values completed before the abort occurred
///////////////////////////////////////////////////////////////////////

void ValueMulti(Pos2& pos2, int height, CValue alpha, CValue beta, int iPrune, u4 nBest, const std::vector<CMoveValue>& mvs
				, bool fPrintBestMoves, bool fPassBefore, std::vector<CMoveValue>& mvsEvaluated, u4& nValued) {
	CValue vChild, vSearchAlpha;
	CMove	move;
	int hChild,nFlipped;
	CUndoInfo ui;
	std::vector<CMoveValue> mvsLow;
	CMoveValue mv;
	std::vector<CMoveValue>::const_iterator i;
	bool fNegascout=height>=hNegascout;
	const bool fDebugPrint=false;
	const bool fWld=std::max(abs(alpha), abs(beta))<64*kStoneValue;
	const bool fNegascoutRound=(alpha>=0) || (beta<=0);

	if (fDebugPrint) {
		std::cout << "ValueMulti(" <<height<< "," <<alpha<< "," <<beta<< "," <<iPrune<< "," <<nBest<< ")\n";
		//Print();
	}

	hChild=height-1;
	mvsEvaluated.erase(mvsEvaluated.begin(), mvsEvaluated.end());

	// test moves in order
	for (i=mvs.begin(); i!=mvs.end() && !abortRound; i++) {

		// calculate the move and search alpha
		if (mvsEvaluated.size()<nBest)
			vSearchAlpha=alpha;
		else {
			vSearchAlpha=std::max(mvsEvaluated[nBest-1].value, vSearchAlpha);
			if (vSearchAlpha>=beta)
				break;
		}
		move=i->move;

		if (fDebugPrint)
			std::cout << move << ": " ;

		// make move
		pos2.MakeMoveBB(move.Square(), nFlipped,ui);
		// get value,possibly using negascout
		if (fNegascout && vSearchAlpha>-kInfinity) {
			TREEDEBUG_BEFORE_NEGASCOUT;
			vChild=ChildValue(pos2, hChild, vSearchAlpha, vSearchAlpha+1, iPrune);
			assert(vChild>-kInfinity || abortRound);
		TREEDEBUG_AFTER_NEGASCOUT;
			if (vChild>vSearchAlpha && vChild<beta) {
				TREEDEBUG_BEFORE;
				vChild=ChildValue(pos2, hChild, vChild, beta, iPrune);
				assert(vChild>-kInfinity || abortRound);
				TREEDEBUG_AFTER;
			}
		}
		else {				
			TREEDEBUG_BEFORE;
			vChild=ChildValue(pos2, hChild, vSearchAlpha, beta, iPrune);
			assert(vChild>-kInfinity || abortRound);
			TREEDEBUG_AFTER;
		}
		if (fDebugPrint)
			std::cout << vChild << "\t";

		// undo move
		pos2.UndoMoveBB(move.Square(),nFlipped,ui);

		// add to the list of values
		if (!abortRound) {
			mv.move=move;
			mv.value=vChild;

			// beta-clamp the value. If value>=beta then we use max(previous round's value, this round's value)
			// unless beta>=64 stones in which case just use this round's value
			if (vChild>=beta && beta<64*kStoneValue && i->value>vChild) {
				mv.value=i->value;
			}

			// alpha-clamp the value. If value<=alpha then we use min(previous round's value, this round's value)
			// unless alpha<=64 stones in which case just use this round's value
			if (vChild<=alpha && alpha>-64*kStoneValue && i->value<vChild) {
				mv.value=i->value;
			}

			// print out round results, unless this is a 100% negascout round
			// there's no generic output symbol for a 100% negascout round.
			if (fPrintBestMoves && !fNegascoutRound) {
				// print if the move's value is >=alpha (means we have a reasonable value for it)
				// or if it's one of the first nBest moves (means it's a WLD round and we have a WLD value)
				if (vChild>vSearchAlpha || i<mvs.begin()+nBest) {
					OutputSearchInfo(std::cout, mv, fPassBefore, CHeightInfoX(height, iPrune, fWld, pos2.NEmpty()));
				}
			}
			if (vChild>vSearchAlpha) {
				mvsEvaluated.insert(upper_bound(mvsEvaluated.begin(),mvsEvaluated.end(),mv),mv);
				// beta cutoff when iPrune==0, see notes for this routine
				if (iPrune==0 && mvsEvaluated.size()>=nBest && mvsEvaluated[nBest-1].value>=beta)
					break;
			}
			else {
				if (i->value<vChild) {
					mv.value=i->value;
				}
				mvsLow.push_back(mv);
			}
		}
	}

	if (fDebugPrint)
		std::cout << "\nmvsEvaluated: " << mvsEvaluated << "\nmvsLow" << mvsLow << "\n";

	// prepare to return
	nValued = static_cast<u4>(mvsEvaluated.size());
	if (nValued<nBest && !abortRound) {
		if (alpha>-kInfinity)
			nValued=nBest;
		else
			assert(0);
	}
	assert(abortRound || nValued>=nBest || alpha>-kInfinity);
	mvsEvaluated.insert(mvsEvaluated.end(),mvsLow.begin(),mvsLow.end());
	assert(mvsEvaluated.size() || abortRound);
	// If we had a beta cutoff,some moves weren't even tried, put them last.
	mvsEvaluated.insert(mvsEvaluated.end(),i,mvs.end());
}

//! set book read & write heights prior to calling Value()
void SetBookHeights(int height) {

	if(book)
		hBookRead=height-kBookReadDepth;
	else
		hBookRead=height+1;
}

//! Make the cache stale so it doesn't get blocked up
void InitializeCache() {
	cache->SetStale();
}

int iffMidgame=5;

//! Value a position by iterative-deepening search.
//!
//! \param[in] moves moves to check. Can be any subset of the legal moves from the position.
//! \param[in] fPassBefore true if the engine is searching the position after a pass.
//! \param[in] nBest number of moves to value. Normally 1 but when analyzing a game perhaps more.
//! If this is more than the number of legal moves, all legal moves are analyzed.
//! When this is true the search display output always displays the chosen move as "PA"
//!
//! \pre pos2 has been initialized with Initialize().
//!
//! If moves is empty or nBest<=0 this function returns without searching and without returning an mvk.
void IterativeValue(Pos2& pos2, CMoves moves, const CCalcParams& cp, 
					const CSearchInfo& si, CMVK& mvk, bool fPassBefore, int nBest) {

	// If we're at or below the solver start height then we don't prune regardless of hi.iPrune.
	// set hi.iPrune to 0 in this case so it displays nicely.
	int iPrune=pos2.NEmpty()<=hSolverStart+1?0:si.iPruneMidgame;
	CHeightInfo hi(1,iPrune,false, pos2.NEmpty());
	double tElapsed = 0.0;
	CValue alpha, beta;
	CNodeStats nsStart, nsEnd;
	std::vector<CMoveValue> mvsOld, mvsNew;
	u4 nEvalOld, nEvalNew;
	CMoves movesFull;
	bool fFull;	// true if we are checking all subnodes

	pos2.CalcMoves(movesFull);
	fFull= movesFull==moves;
	
	// clamp nBest to number of moves checked
	nBest=std::min(nBest, moves.NMoves());
	if (nBest<=0)
		return;

	//assert(mpcs && mpcs->Valid());

	// print MPC stat static value?
	if (si.NeedMPCStats())
		std::cout << "\t" << StaticValue(pos2, 0);

	// initialize cache and book read height
	InitializeCache();

	// Initialize the move lists
	CMoveValue mv;
	mv.value=0;
	while (moves.GetNext(mv.move))
		mvsOld.push_back(mv);
	nEvalOld=0;

	// Initialize timing info
	nsStart.Read();
	cp.SetAbortTime(nsStart, pos2.NEmpty(), si.tRemaining);
	mvk.Clear();
	mvk.move.Set(-1);
	mvk.fKnown=false;

	// increase search width for rand games in midgame because of weak eval for rand games
	if (pos2.NEmpty()>36 && (si.NeedRandSearch()) && (si.iPruneMidgame>1))
		hi.iPrune--;

	// iterate
	while (!mvk.move.Valid() || cp.RoundOK(hi, pos2.NEmpty(), tElapsed, si.tRemaining) ) {
		if (fPrintTree) TreeDebugStartRound(hi);
		SetBookHeights(hi.height);

		// Set alpha and beta depending on whether this is an WLD search or exact value search.
		if (hi.fWLD) {
			// if we're doing a full-width WLD search do an aspiration WD or DL search first
			if (mvk.fKnown && !hi.iPrune) {
				if (mvk.value<0)
					ValueMulti(pos2, hi.height, -kStoneValue, 0, hi.iPrune, nBest, mvsOld, si.PrintRound(), fPassBefore, mvsNew, nEvalNew);
				else if (mvk.value>0)
					ValueMulti(pos2, hi.height, 0, kStoneValue, hi.iPrune, nBest, mvsOld, si.PrintRound(), fPassBefore, mvsNew, nEvalNew);
				else {
					// aspiration searches don't seem to help if value==0
				}
			}
			alpha=-kStoneValue;
			beta=+kStoneValue;
		}
		else {
			alpha=-kWipeout;
			beta=kWipeout;
		}

		ValueMulti(pos2, hi.height, alpha, beta, hi.iPrune, nBest, mvsOld, si.PrintRound(), fPassBefore, mvsNew, nEvalNew);

		// calc timing info
		nsEnd.Read();
		mvk.ns=nsEnd-nsStart;
		tElapsed=mvk.ns.Seconds();

		// update mvk
		if (nEvalNew){
			mvk.move=mvsNew[0].move;
			mvk.value=mvsNew[0].value;
			mvk.fKnown=true;
			mvk.hiBest=hi;
		}
		if (!abortRound)
			mvk.hiFull=hi;

		// special checks when calculating mpc stats
		if (si.NeedMPCStats())
			printf("\t%d",mvk.value);

		// are we done?
		// don't stop on wipeouts, we could have had an MPC cutoff
		//	and it might not really be a wipeout...
		//if (abortRound || mvsNew[0].value>=kWipeout)
		if (abortRound)
			break;

		// get parameters for next round, break if we've solved
		if(!hi.NextRound(pos2.NEmpty(),si))
			break;

		nEvalOld=nEvalNew;
		mvsOld=mvsNew;
	}

	assert(mvk.move.Valid());
	if (book) {
		bool fStoreUnsolved;
		if (si.NeedNoAddSoloUnsolvedToBook())
			fStoreUnsolved=!abortRound && nBest>1;
		else
			fStoreUnsolved=true;

		book->StoreIterativeResult(pos2.GetBB(), nBest, nEvalOld,nEvalNew,mvsOld,mvsNew,mvk, fFull, fStoreUnsolved);
	}
	if (si.PrintMoveSearchStats()) {
		u4 i;
		if (nEvalNew) {
			std::cout << mvk.hiBest << " (" << pos2.NEmpty() << " empty)\t";
			for (i=0; i<nEvalNew; i++) {
				std::cout << mvsNew[i] << "\t";
			}
		}
		if (abortRound) {
			std::cout << mvk.hiFull << " (" << pos2.NEmpty() << " empty)\t";
			for (i=0; i<nEvalOld; i++) {
				std::cout << mvsOld[i] << "\t";
			}
		}
		std::cout << "\t" << tElapsed << "s elapsed\n";
	}

	// calc timing info
	nsEnd.Read();
	mvk.ns=nsEnd-nsStart;
}

/////////////////////////////////////
// Forced Opening routines
/////////////////////////////////////

#include "odk/OsObjects.h"

typedef std::map<CBitBoard, CBitBoard> TForcedOpeningMap;

TForcedOpeningMap foms[2];

// Find a move based on a forced opening list. Return TRUE if this position is in the list, false otherwise
//	if the position is in the list, put the forced move in move.
bool FindForcedOpening(Pos2& pos2, CMove& move) {
	TForcedOpeningMap::iterator i;
	CBitBoard bbmr=pos2.GetBB().MinimalReflection();
	
	i=foms[pos2.BlackMove()].find(bbmr);
	if (i==foms[pos2.BlackMove()].end())
		return false;

	CMoves moves;
	int nFlipped;
	CUndoInfo ui;
	bool fDone;

	pos2.CalcMoves(moves);

	// Check subnodes in turn to see if they're the one
	for (move.Set(-1); moves.GetNext(move);) {
		pos2.MakeMoveBB(move.Square(), nFlipped, ui);
		fDone=(*i).second==pos2.GetBB().MinimalReflection();
		pos2.UndoMoveBB(move.Square(), nFlipped, ui);
		if (fDone)
			break;
	}
	if (!fDone) {
		assert(0);
		return false;
	}
	return true;
}

//! Create a list of forced openings which will be played when the player is the given color.
void CreateForcedOpeningList(const char* fn, bool fMyColor) {
	int sq;
	bool m_fBlackMove;
	u4 i;
	char sBoard[65];
	TForcedOpeningMap::iterator pfom;
	CBitBoard bbPrev;
	foms[fMyColor].clear();

	std::fstream is(fn);
	COsGame game;
	Pos2 pos2;
	while (is.good() && (is >> game)) {
		game.GetPosStart().board.GetText(sBoard, m_fBlackMove, true);
		pos2.Initialize(sBoard, m_fBlackMove);
		for (i=0; i<game.ml.size(); i++) {
			bbPrev=pos2.GetBB().MinimalReflection();
			sq=Square(game.ml[i].mv.Row(), game.ml[i].mv.Col());
			pos2.MakeMoveBB(sq);
			if (fMyColor!=pos2.BlackMove()) {
				pfom=foms[fMyColor].find(bbPrev);
				if (pfom==foms[fMyColor].end()) {
					foms[fMyColor][bbPrev]=pos2.GetBB().MinimalReflection();
				}
			}
		}
	}
}

void InitForcedOpenings() {
	CreateForcedOpeningList("black.ggf", true);
	CreateForcedOpeningList("white.ggf", false);
	std::cerr << "Map Size: Black: " << foms[1].size() << ", White: " << foms[0].size() << "\n";
}

//! TimedMVK - calculate a move. Inrease height until the game is
//!	solved or (height>=minDepth && time>=minTime).
//!	Special case if move is forced or in book.
//! \param[in]	minDepth - minimum search height.
//! \param[in]	minTime - minimum search time
//! \param[in]	randomShift - amount of book randomness to use
//! \param[in]	iPrune - # of ply for selective extensions (0 or 1)
//! \param[in]	fValueForcedMoves - true if forced moves should be valued
//			(e.g. if adding them to the book)
//! \param[in] fPassBefore true if there was a pass before calling TimedMVK; search output will show the initial move as a pass
//! \param[out]	chosen - chosen move, value, and whether value is known.
//! \pre book and cache must exist; book must be correct.
//! \pre pos2 has been initialized.
//! \param[in] nBest number of moves to value. Normally 1 but may wish to value all moves when analyzing a game.
void TimedMVK(Pos2& pos2, const CCalcParams& cp, const CSearchInfo& si, CMVK& mvk, bool fPassBefore) {
	CMoves moves;
	CNodeStats start, end;
	int nPass;
	bool fIterativeNS=false;
	bool m_fBlackMoveSave=pos2.BlackMove();
	char sTextSave[65];
	pos2.GetText(sTextSave);

	start.Read();

	mvk.Clear();

#ifdef _DEBUG
	mvk.move.Set(-1);
#endif

	if (pos2.NEmpty()==60 && !si.PrintAnalysis()) {
		// beginning - forced move
		mvk.move.Set(C4);
		mvk.fBook=true;
	}
	else if ((nPass=pos2.CalcMovesAndPassBB(moves))) {
		// no moves - return a pass
		mvk.move.Set(-1);
		if (si.NeedValue()) {
			switch(nPass) {
			case 2:
				mvk.value=-pos2.TerminalValue();
				mvk.fKnown=true;
				break;
			case 1:
				TimedMVK(pos2, cp, si, mvk, true);
				mvk.value=-mvk.value;
				mvk.move.Set("PA");
				break;
			default:
				assert(0);
			}
		}
		pos2.PassBB();
	}

	else if (FindForcedOpening(pos2, mvk.move)) {
		mvk.fKnown=false;
		mvk.fBook=true;
		mvk.value=0;
	}
	else if (book && book->GetRandomMove(CQPosition(pos2.GetBB(), pos2.BlackMove()), si, mvk, fPassBefore)) {
		// move in book
		mvk.fKnown=true;
		mvk.fBook=true;
		if (fPassBefore)
			assert(mvk.move.IsPass());
		else
			assert(mvk.move.Valid());
	}

	else {
		pos2.Initialize(sTextSave, m_fBlackMoveSave);
		if (moves.NMoves()==1 && !(si.NeedValue())) {
			// only one move, and not valuing forced moves
			moves.GetNext(mvk.move);
			assert(mvk.move.Valid());
		}
		else {
			// value the move
			if (si.PrintAnalysis())
				std::cout << (si.PrintPondering()?"status Analyzing":"status Thinking") << std::endl;
			IterativeValue(pos2, moves, cp, si, mvk, fPassBefore, 1);		
			assert(mvk.move.Valid());
			fIterativeNS=true;
			if (si.PrintAnalysis())
				std::cout << "status" << std::endl;
		}
	}

	// calculate elapsed time and return
	if (!fIterativeNS) {
		end.Read();
		mvk.ns=end-start;
	}
}
