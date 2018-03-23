// Copyright Chris Welty
//  All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.

// tree debugging macros

#pragma once

#include "n64/utils.h"
#include "core/Moves.h"
#include "core/HeightInfo.h"
#include "options.h"

// Newer functions for pos2
void TreeDebugStartRound(CHeightInfo hi);
void TreeDebugBefore(int height, CMove& move, bool fBlackMove, CValue alpha, CValue beta, bool fNegascout=false);
void TreeDebugAfter(int height, CMove& move, bool fBlackMove, CValue alpha, CValue beta, CValue value, bool fNegascout=false);
void TreeDebugCallSolver(int alpha, int beta, bool fBlackMove, int result);
void PrintTreeCutoff(CValue value, CValue beta);
void PrintTreeCache(CValue value, CValue beta, int height);

#define TREEDEBUG_ROOT    	if (fPrintTree) treeNEmpty = NEmpty();
#define TREEDEBUG_BEFORE    if (fPrintTree) { TreeDebugBefore(height, move, pos2.BlackMove(), vSearchAlpha, beta); }
#define TREEDEBUG_AFTER    	if (fPrintTree) { TreeDebugAfter(height, move, pos2.BlackMove(), vSearchAlpha, beta, vChild); }
#define TREEDEBUG_BEFORE_NEGASCOUT    if (fPrintTree) { TreeDebugBefore(height, move, pos2.BlackMove(), vSearchAlpha, vSearchAlpha+1, true); }
#define TREEDEBUG_AFTER_NEGASCOUT    	if (fPrintTree) { TreeDebugAfter(height, move, pos2.BlackMove(), vSearchAlpha, vSearchAlpha+1, vChild, true); }
#define TREEDEBUG_CALLSOLVER if(fPrintTree) { TreeDebugCallSolver(alpha,beta, pos2.BlackMove(),result); }
#define TREEDEBUG_CUTOFF    if (fPrintTree) { PrintTreeCutoff(best.value, beta); }
#define TREEDEBUG_CACHE    	if (fPrintTree) { PrintTreeCache(best.value, beta, height); }
#define TREEDEBUG_DONE    	if (fPrintTree) { printf("\n--------------------------------\n"); }
#define TREEDEBUG_PRESORT    if (fPrintTree) { PrintTreePresort(height, NEmpty()); }
#define TREEDEBUG_POSTSORT    if (fPrintTree) { PrintTreePostsort(height, NEmpty(),moveValues,i); }

// for solver (no heights printed)
#define TREEDEBUG1S    if (fPrintTree) { printf("SLV:"); fPrintTree(depth, move); printf(":\n"); depth++; }
#define TREEDEBUG2S    if (fPrintTree) { depth--; fPrintTree(depth, move); printf(" %hd\n",vChild); }
