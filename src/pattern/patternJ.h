#ifndef _H_PATTERNJ
#define _H_PATTERNJ

#include "Patterns.h"

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

#endif  //_H_PATTERNJ
