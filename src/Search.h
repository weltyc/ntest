#include "core/CalcParams.h"
#include "core/NodeStats.h"
#include "core/MVK.h"

#include "Pos2.h"
#include "SearchParams.h"

// evaluation control schemes
void TimedMVK(Pos2& pos2, const CCalcParams& cp, const CSearchInfo& si, CMVK& mvk, bool fPassBefore);
void IterativeValue(Pos2& pos2, CMoves moves, const CCalcParams& cp, const CSearchInfo& si, CMVK& mvk, bool fPassBefore, int nBest);
void ValueMulti(Pos2& pos2, int height, CValue alpha, CValue beta, int iPrune, u4 nBest, const std::vector<CMoveValue>& mvs
				, bool fPrintBestMoves, bool fPassBefore, std::vector<CMoveValue>& mvsEvaluated, u4& nValued);
//IterativeValue support routines
void SetBookHeights(int height);

// fixed-height evaluators
void ValueTree(Pos2& pos2, int height, CValue alpha, CValue beta, CMoves& moves, int& iFastestFirst, int iPrune, CMoveValue& best);

CValue StaticValue(Pos2& pos2, int iff);

// forced openings
void InitForcedOpenings();

void InitializeCache();

