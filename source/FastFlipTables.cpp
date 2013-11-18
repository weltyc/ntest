// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

#include "FastFlipTables.h"
#include "Utils.h"
#include "Patterns.h"
#include "FastFlipPatterns.h"
#include "BitBoard.h"
#include "Debug.h"
#include <vector>
using namespace std;

CRowFlip rfs[knRFs+1];
CRowFlip* isdcToPrf[knSDCs+1];
int sdToPattern[NN][4],sdToValue[NN][4],sdToIndex[NN][4],patternToSize[knPats],patternIndexToSquare[knPats][N];
TConfig* sdToPConfig[NN][4];
vector<CUpdate> sqToUpdatesK[NN];

const int directionToIncrement[4]={1,7,8,9};
TConfig configs[knPats+1];
CBitBoard bb;

/////////////////////////////////////////////////////////////////////////////////////////////
// The sdToPattern table and sdToValue tables store which pattern is associated with a given
//	square in a given direction and what value to add to it (unused spots have value=0)
// The sdToIndex table tells the index of the square in the pattern (value = 3^index).
// The patternIndexToSquare table goes in reverse.
////////////////////////////////////////////////////////////////////////////////////////////

// The AddPattern function adds one pattern to the tables. It increments pattern when it is done
void AddPatterns(int sqBegin, int nSq, int direction, int& pattern) {
	int value, i, sq, increment;

	value=1;
	increment=directionToIncrement[direction];
	for (sq=sqBegin, i=0; i<nSq; i++, sq+=increment) {
		sdToPattern[sq][direction]=pattern;
		sdToPConfig[sq][direction]=configs+pattern;
		sdToValue[sq][direction]=value;
		sdToIndex[sq][direction]=i;
		patternIndexToSquare[pattern][i]=sq;
		value*=3;
	}
	patternToSize[pattern]=nSq;
	pattern++;
}

void InitSDToPattern() {
	int pattern,row,col,square,dir;

	// initialize values to 0 initially
	pattern=0;
	for (square=0; square<NN; square++) {
		for (dir=0;dir<4; dir++)
			sdToPattern[square][dir]=sdToValue[square][dir]=0;
	}

	// rows
	for (row=0; row<8; row++)
		AddPatterns(N*row, N, 0, pattern);

	// / diagonals
	for (col=2; col<N; col++)
		AddPatterns(col, col+1, 1, pattern);
	for (row=1; row<N-2; row++)
		AddPatterns(row*N+N-1, N-row, 1, pattern);

	// cols
	for (col=0; col<N; col++)
		AddPatterns(col, N, 2, pattern);

	// \ diagonals
	for (col=N-3; col>=0; col--)
		AddPatterns(col, N-col, 3, pattern);
	for (row=1; row<N-2; row++)
		AddPatterns(row*N, N-row, 3, pattern);

	_ASSERT(pattern==knPats);
}


void InitSDToPatternK() {
	int nPatterns;
	
	nPatterns=0;

	patEXX.CalcTables(nPatterns,sqToUpdatesK);
	pat2x5.CalcTables(nPatterns,sqToUpdatesK);
	patE2x4.CalcTables(nPatterns,sqToUpdatesK);
	patTriangle.CalcTables(nPatterns,sqToUpdatesK);

	_ASSERT(nPatterns==knPatsK);
}

////////////////////////////////////////////////////////////////
// The sdlrToPrf table is used to fill in the isdcToPrf table.
// There is one entry for each square, direction, number of discs to the
//	left flipped (i.e. lower squarenumber) and to the right flipped (higher square number)
////////////////////////////////////////////////////////////////

CRowFlip* sdlrToPrf[NN][4][N][N];

void InitSdlrToIrf() {
	int sq,dir,index,left,right,pattern,size,nLeft,nRight;
	CRowFlip *prf;

	prf=rfs;
	for(sq=0;sq<NN;sq++) {
		for (dir=0; dir<4; dir++) {
			if (!sdToValue[sq][dir])
				continue;
			index=sdToIndex[sq][dir];
			pattern=sdToPattern[sq][dir];
			size=patternToSize[pattern];
			nLeft=index?index-1:0;
			nRight=(size-index-1)?(size-index-2):0;
			for (left=0; left<=nLeft; left++) {
				for (right=0; right<=nRight; right++){
					sdlrToPrf[sq][dir][left][right]=prf;
					prf->nFlipped=left+right;
					prf->left=left;
					prf->right=right;
					prf->sq=sq;
					prf->dir=dir;
					prf++;
				}
			}
		}
	}
	// final is a dummy value for when nothing happens (length 1 and 2 diagonals)
	// using this may be quicker than an if statement
	prf->nFlipped=0;
	prf->left=0;
	prf->right=0;
	prf->sq=-1;
	prf->dir=-1;

	_ASSERT((prf-rfs)==knRFs);
}

////////////////////////////////////////////////////////////////
// The colorsdToIsdc table is used internally to these routines,
//	and in the 'count' section of main routines
//	Generated code is used instead in the main routines
////////////////////////////////////////////////////////////////

CRowFlip** colorsdcToPrf[2][NN][4];

int SizeToNConfigs(int size) {
	const int sizeToNConfigs[9]={1,3,9,27,81,3*81,9*81,27*81,81*81};

	return sizeToNConfigs[size];
}

void InitColorSDCToPrf() {
	int square,dir,pattern,size,config,nConfigs;
	CRowFlip ** cToPrf;

	cToPrf=isdcToPrf;
	for (square=0; square<NN; square++) {
		for (dir=0; dir<4; dir++) {
			if (!sdToValue[square][dir]) {
				// no flips in this direction - use dummy flips
				colorsdcToPrf[0][square][dir]=isdcToPrf+knSDCs;
				colorsdcToPrf[1][square][dir]=isdcToPrf+knSDCs;
			}
			else {
				colorsdcToPrf[1][square][dir]=cToPrf;
				pattern=sdToPattern[square][dir];
				size=patternToSize[pattern];
				nConfigs=SizeToNConfigs(size);
				_ASSERT(rfs[0].nFlipped==0);
				for (config=0;config<nConfigs;config++)
					AddCToPrf(cToPrf++,config, square, dir);
				_ASSERT(rfs[0].nFlipped==0);
				colorsdcToPrf[0][square][dir]=cToPrf-1;
			}
		}
	}
	_ASSERT(rfs[0].nFlipped==0);
	// check
	_ASSERT(cToPrf-isdcToPrf==knSDCs);

	_ASSERT(rfs[0].nFlipped==0);
	// final dummy value for directions without configs
	*cToPrf=rfs+knRFs;
	_ASSERT(rfs[0].nFlipped==0);
}

void AddCToPrf(CRowFlip** cToPrf, int config, int sq, int dir){
	// figure out how many squares of config are flipped to the left and right
	int trits[8], pattern, index, i, iGood, left,right,size;

	//_ASSERT(cToPrf-isdcToPrf!=1012580);

	index=sdToIndex[sq][dir];
	pattern=sdToPattern[sq][dir];
	size=patternToSize[pattern];

	ConfigToTrits(config,8,trits);

	// if the square is nonempty store a NULL pointer, so we can catch bugs
	if (trits[index]!=1) {
		*cToPrf=NULL;
		return;
	}

	// square is empty, store a pointer to the proper location.
	// first find how many discs are flipped in each direction.
	//	iGood is index of previous black square, unless we have none or
	//	there was an intervening empty in which case iGood=-1.

	// squares flipped to the left
	iGood=-1;
	for (i=0; i<index; i++){
		switch(trits[i]) {
		case 0: break;
		case 1: iGood=-1; break;
		case 2: iGood=i; break;
		default: _ASSERT(0);
		}
	}
	if (iGood>=0)
		left=index-iGood-1;
	else
		left=0;

	// squares flipped to the right
	iGood=-1;
	for (i=size-1; i>index; i--){
		switch(trits[i]) {
		case 0: break;
		case 1: iGood=-1; break;
		case 2: iGood=i; break;
		default: _ASSERT(0);
		}
	}
	if (iGood>=0)
		right=iGood-index-1;
	else
		right=0;

	// add to table
	*cToPrf=sdlrToPrf[sq][dir][left][right];
}

// initialization function
void InitFastFlipBase() {
	fprintf(stderr,"Init fast flip base...");
	InitSDToPattern();
	InitSDToPatternK();
	InitSdlrToIrf();
	InitColorSDCToPrf();
	fprintf(stderr,"Done\n");
}
