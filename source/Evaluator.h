// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

// CEvaluator header file

#pragma once


#include "Utils.h"
#include "Patterns.h"
#include "FastFlipPatterns.h"
#include "Debug.h"
#include <map>

using namespace std;

class CQPosition;

extern float multiplier;

///////////////////////////////
// pattern info
///////////////////////////////


//////////////////////////////////
// Evaluators
/////////////////////////////////
class CEvaluatorInfo {
public:
	char evaluatorType, coeffSet;
};

inline bool operator<(const CEvaluatorInfo&a, const CEvaluatorInfo&b) {
	if (a.evaluatorType==b.evaluatorType)
		return a.coeffSet<b.coeffSet;
	else return a.evaluatorType<b.evaluatorType;
}

//! Information needed to evaluate a position
class CEvaluator {
public:
	static CEvaluator* FindEvaluator(char evaluatorType, char coeffSet);

	// pos2 evaluators
	virtual CValue EvalMobs(u4 nMovesPlayer, u4 nMovesOpponent) const = 0;

	// is pos2 allowed?
	virtual bool Pos2Enabled() const;

	virtual void Setup();

	virtual ~CEvaluator();

protected:
	static std::string FNBase(char evaluatorType, char coeffSet);
	static char filenameBuffer[200];
};

////////////////////////////////
// Pattern J
/////////////////////////////////

// pattern J mappings
enum { R1J, R2J, R3J, R4J, D8J, D7J, D6J, D5J, C4J, C2x4J, C2x5J, CR1XXJ, M1J, M2J, PM1J, PM2J, PARJ };	// map numbers

const int	patternToMapJ[]={
	// rows & cols
	R1J, R1J, R1J, R1J,
	R2J, R2J, R2J, R2J,
	R3J, R3J, R3J, R3J,
	R4J, R4J, R4J, R4J,
	// diagonals & corners
	D8J, D8J,
	D7J, D7J, D7J, D7J,
	D6J, D6J, D6J, D6J,
	D5J, D5J, D5J, D5J,
	C4J, C4J, C4J, C4J,

	// 2x4, 2x5, edge+2X
	C2x4J, C2x4J, C2x4J, C2x4J, C2x4J, C2x4J, C2x4J, C2x4J, 
	C2x5J, C2x5J, C2x5J, C2x5J, C2x5J, C2x5J, C2x5J, C2x5J, 
	CR1XXJ,CR1XXJ,CR1XXJ,CR1XXJ,

	// mobility and parity
	M1J, M2J,
	PM1J, PM2J,
	PARJ
};	// tells which patterns are valued the same.

const int	nPatternsJ=sizeof(patternToMapJ)/sizeof(int);

// pattern J descriptions
const CMap	mapsJ[]= {
	{kORID,8}, {kORID,8}, {kORID,8}, {kORID,8}, // rows & cols
	{kORID,8}, {kORID,7}, {kORID,6}, {kORID,5},  {kCRID, 10}, // diags
	{kBase3, 8}, {kBase3, 10}, {kORID, 10},		// corner patterns: 2x4, 2x5, edge+2X
	{kNumber, 64}, {kNumber, 64},				// mobility
	{kNumber, 64}, {kNumber, 64},				// pot. mobility
	{kNumber, 2}								//  parity
};

const int	nMapsJ=sizeof(mapsJ)/sizeof(CMap);
extern int coeffStartsJ[nMapsJ];
extern int nCoeffsJ;
extern TCoeff *mobsJ;

class CEvaluatorJ : public CEvaluator{
public:
	CEvaluatorJ(const std::string& fnBase, int nFiles);
	~CEvaluatorJ();

	// pos2 evaluators
	virtual CValue EvalMobs(u4 nMovesPlayer, u4 nMovesOpponent) const;

	// is pos2 allowed?
	virtual bool Pos2Enabled() const;

private:
	TCoeff *coeffs[60][2];
	TCoeff *pcoeffs[60][2];
	int	nEmptyToSet[60];
	u4  fParameters[60];
	int nSets;
};

////////////////////////////////
// Pattern K
// DO NOT DELETE some stuff used for evaluatorJ and L
/////////////////////////////////

// pattern K mappings
enum { R1K, R2K, R3K, R4K, D8K, D7K, D6K, D5K, D4K, D3K, C2x4K, C2x5K, CR1XXK, M1K, M2K, PM1K, PM2K, PARK };	// map numbers

const int	patternToMapK[]={
	// rows
	R1K, R2K, R3K, R4K, R4K, R3K, R2K, R1K,

	// / diagonal
	D3K, D4K, D5K, D6K, D7K, D8K, D7K,D6K, D5K, D4K, D3K,

	// cols
	R1K, R2K, R3K, R4K, R4K, R3K, R2K, R1K,

	// \ diagonal
	D3K, D4K, D5K, D6K, D7K, D8K, D7K,D6K, D5K, D4K, D3K,

	// 2x4, 2x5, edge+2X
	C2x4K, C2x4K, C2x4K, C2x4K, C2x4K, C2x4K, C2x4K, C2x4K, 
	C2x5K, C2x5K, C2x5K, C2x5K, C2x5K, C2x5K, C2x5K, C2x5K, 
	CR1XXK,CR1XXK,CR1XXK,CR1XXK,

	// mobility and parity
	M1K, M2K,
	PM1K, PM2K,
	PARK
};	// tells which patterns are valued the same.

const int	nPatternsK=sizeof(patternToMapK)/sizeof(int);

// pattern K descriptions
const CMap	mapsK[]= {
	{kORID,8}, {kORID,8}, {kORID,8}, {kORID,8}, // rows & cols
	{kORID,8}, {kORID,7}, {kORID,6}, {kORID,5},  {kORID,4},  {kORID,3},  // diags
	{kBase3, 8}, {kBase3, 10}, {kORID, 10},		// corner patterns: 2x4, 2x5, edge+2X
	{kNumber, 64}, {kNumber, 64},				// mobility
	{kNumber, 64}, {kNumber, 64},				// pot. mobility
	{kNumber, 2}								//  parity
};

////////////////////////////////
// Pattern L
/////////////////////////////////

// pattern L mappings
enum { R1L, R2L, R3L, R4L, D8L, D7L, D6L, D5L, C4L, C2x4L, C2x5L, CR1XXL, C3x3L, M1L, M2L, PM1L, PM2L, PARL };	// map numbers

const int	patternToMapL[]={
	// rows & cols
	R1L, R1L, R1L, R1L,
	R2L, R2L, R2L, R2L,
	R3L, R3L, R3L, R3L,
	R4L, R4L, R4L, R4L,
	// diagonals & corners
	D8L, D8L,
	D7L, D7L, D7L, D7L,
	D6L, D6L, D6L, D6L,
	D5L, D5L, D5L, D5L,
	C4L, C4L, C4L, C4L,

	// 2x4, 2x5, edge+2X
	C2x4L, C2x4L, C2x4L, C2x4L, C2x4L, C2x4L, C2x4L, C2x4L, 
	C2x5L, C2x5L, C2x5L, C2x5L, C2x5L, C2x5L, C2x5L, C2x5L, 
	CR1XXL,CR1XXL,CR1XXL,CR1XXL,
	C3x3L, C3x3L, C3x3L, C3x3L,

	// mobility and parity
	M1L, M2L,
	PM1L, PM2L,
	PARL
};	// tells which patterns are valued the same.

const int	nPatternsL=sizeof(patternToMapL)/sizeof(int);

// pattern L descriptions
const CMap	mapsL[]= {
	{kORID,8}, {kORID,8}, {kORID,8}, {kORID,8}, // rows & cols
	{kORID,8}, {kORID,7}, {kORID,6}, {kORID,5},  {kCRID, 10}, // diags
	{kBase3, 8}, {kBase3, 10}, {kORID, 10},	{kR33ID,9},	// corner patterns: 2x4, 2x5, edge+2X, 3x3
	{kNumber, 64}, {kNumber, 64},				// mobility
	{kNumber, 64}, {kNumber, 64},				// pot. mobility
	{kNumber, 2}								//  parity
};

const int	nMapsL=sizeof(mapsL)/sizeof(CMap);
extern int coeffStartsL[nMapsL];
extern int nCoeffsL;
extern TCoeff *mobsL;

