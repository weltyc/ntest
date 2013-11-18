// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

#pragma once

#include "Pos2.h"

////////////////////////////////////////////////////
// modify these items to optimize performance
////////////////////////////////////////////////////

typedef u4 TConfig;
// some more debug checking in the empty list is done if this is defined
#define EXTRA_EMPTY_CHECK
// store squares in the empty list?
#define EMPTY_STORE_SQUARE	1
// include generated code for count functions if this is true
#define GENERATED_CODE 0
// call routines to do AB if this is true
#define GENERATED_AB 1
// if EL_SQMY is true the empty list stores my square number (0..63)
#define EL_SQMY 1
// if HASH is true we prepare the tables for incremental hash function updates
#define HASH 1

////////////////////////////////////////////////////
// included files may depend on #defines above
////////////////////////////////////////////////////

#include "Utils.h"
#include "BitBoard.h"

////////////////////////////////////////////////////
// helper classes
////////////////////////////////////////////////////

class CEmList;
class CUndoInfo;

// debug stuff
void FPrintHeader(FILE* fp);
void FPrintRow(FILE* fp, int row, int pattern, int nColors[3]);
void PrintSquareDirectionToPattern();
void PrintSquareDirectionToValue();

// search functions - subroutines
void GetFlips(bool fBlackMove, int square, CUndoInfo& ui);
int Count(bool fBlackMove, int square);
int GetCountAndFlipBB(bool fBlackMove, int square, CUndoInfo& ui);

// generation routines, which output data for input to perl routines which generate the code
void CreateFlipListText();
void CreateABText();

// eval functions
extern CBitBoard bb;
inline int CalcMobility(u4& nMovesPlayer, u4& nMovesOpponent) {
	return bb.CalcMobility(nMovesPlayer,nMovesOpponent);
}

void CheckConsistency();