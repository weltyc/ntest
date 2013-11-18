// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

#pragma once

#ifndef H_POS2
#define H_POS2

#include "Utils.h"
#include "Moves.h"
#include "MVK.h"
#include "Timing.h"
#include "NodeStats.h"
#include <stdio.h>
#include "Evaluator.h"

class CBitBoard;
class CUndoInfo;

// global variables
extern int nEmpty_,nDiscDiff_;
extern bool fBlackMove_;

// set up a given position. Initialize the global variables nEmpty_, nDiscDiff_, fBlackMove_
// these are updated by most of the 'customer' routines here but are passed as parameters to most internal routines
//	for performance reasons
void Initialize();
void Initialize(const char* sBoard, bool fBlackMove);
void Initialize(const CBitBoard& bb, bool fBlackMove);

// print the position
void Print();
void Print(bool fBlackMove);
void FPrint(FILE* logfile);
void FPrint(FILE* logfile, bool fBlackMove);
void PrintConfigs();

// get the board text
char* GetText(char* sBoard);
i1* GetItems(i1* itemsBoard);

// test functions
void Test();
void Test1();
void TestPos2();
void TestMoveSpeed();

// number of nodes
extern double nKFlips, nBBFlips,nSNodes;

// Moving
void MakeMoveBB(int square);

void PassBase();
void PassBB();

void UndoPassBase();
void UndoPassBB();

int CalcMovesAndPassBB(CMoves& moves); // calc moves, then pass if a pass is needed

// evaluation
void GetIDsJ(u2 ids[nPatternsJ]);
CValue ValueJMobs(TCoeff *const pcoeffs[2] , u4 nMovesPlayer, u4 nMovesOpponent);

// evaluation control schemes
void	TimedMVK(const CCalcParams& cp, const CSearchInfo& si, CMVK& mvk, bool fPassBefore);
void IterativeValue(CMoves moves, const CCalcParams& cp, const CSearchInfo& si, CMVK& mvk, bool fPassBefore, int nBest);

//IterativeValue support routines
double IterativeRound(int height, CValue alpha, CValue beta, const CMoves& moves, int iPrune,
					bool fNeedMove, bool fSubset, const CNodeStats& start, CMVK& mvk);
void SetBookHeights(int height);

// fixed-height evaluators
void ValueBookCacheOrTree(int height, CValue alpha, CValue beta, CMoves& moves, int iPrune, CMoveValue& best);
void ValueCacheOrTree(int height, CValue alpha, CValue beta, CMoves& moves, int iPrune, CMoveValue& best);
void ValueTree(int height, CValue alpha, CValue beta, CMoves& moves, int& iFastestFirst, int iPrune, CMoveValue& best);
CValue ChildValue(int height, CValue alpha, CValue beta, int iPrune);
CValue StaticValue(int iff);
bool MPCCheck(int height, CValue alpha, CValue beta, const CMoves& moves, int& iPrune, CMoveValue& best);
void ValueTreeNoSort(int height, int hChild, CValue alpha, CValue beta, CMoves& moves, int iPrune, CMoveValue& best);
bool ValueMove(int height, int hChild, CValue alpha, CValue beta, CMove& move, CMoves& moves, int iPrune,
								  bool fNegascout, CMoveValue& best);

// position capture
void SetRandomCapture();

// forced openings
void InitForcedOpenings();

#endif // #ifdef H_POS2