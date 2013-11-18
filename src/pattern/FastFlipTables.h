// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

#pragma once

#include "../n64/utils.h"
#include "types.h"
#include "Pattern.h"
#include "RowFlip.h"

// the only function you need
void InitFastFlipBase();

const int knPats=N*6-10;
const int knPatsK=20;
const int knSDCs=1029996;
const int knRFs=1700; // 1700 flip functions and a dummy

// The following tables are needed for program execution (i.e. flipping discs)
// Abbreviations are as follows:
//	ISDC square,direction,config index (one for each square/direction/config combo)
// Since separate code is generated for each square, the routines will know the isdcs.

extern TFlipFunc* flipFuncsBB[1700][2];

extern CRowFlip rfs[knRFs+1];	// extra is dummy function, nFlipped=0

// tables used internally
extern int sdToPattern[NN][4],sdToValue[NN][4],sdToIndex[NN][4],patternToSize[knPats],patternIndexToSquare[knPats][N];
extern CRowFlip** colorsdcToPrf[2][NN][4];
extern CRowFlip* isdcToPrf[knSDCs+1];
extern const int directionToIncrement[4];

void AddCToPrf(CRowFlip** cToPrf, int config, int sq, int dir);
