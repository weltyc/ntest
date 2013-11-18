// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

#pragma once


#define INLINE_ABIFPARITY 0

extern int hSolveNoParity;

#include "FastFlip.h"

#define CHECK_VALUES 0

#include "Pos2Internal.h"
#if CHECK_VALUES
#include "endgame.h"
#endif

#include "Debug.h"

/////////////////////////////////
// inline functions
////////////////////////////////

inline int imax(int a, int b) { return a>b?a:b; }

#if CHECK_VALUES
static char sBoardCheck[NN+1];
#endif

inline void PassBase() {
	fBlackMove_=!fBlackMove_;
	nDiscDiff_=-nDiscDiff_;
}

inline void UndoPassBase() {
	fBlackMove_=!fBlackMove_;
	nDiscDiff_=-nDiscDiff_;
}

inline void PassBB() {
	fBlackMove_=!fBlackMove_;
	nDiscDiff_=-nDiscDiff_;
	bb.InvertColors();
}

inline void UndoPassBB() {
	fBlackMove_=!fBlackMove_;
	nDiscDiff_=-nDiscDiff_;
	bb.InvertColors();
}