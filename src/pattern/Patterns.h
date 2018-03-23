// Copyright Chris Welty
//  All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.

// patterns header file

#pragma once

#ifndef _H_PATTERNS_    // MSC sucks
#define _H_PATTERNS_

#include <cassert>

#include "../n64/types.h"
#include "../n64/utils.h"

// Compression class. Call CCompression::Init() to initialize compression.
//    Will be automatically cleaned up at the end of the program.
class CCompression {
public:
    static void Init();
    ~CCompression();
    static bool fInit;
protected:
    static CCompression init;
};

//////////////////////////////////////////
// pattern classes and types
//////////////////////////////////////////

enum TIdType { kBase3, kORID, kCRID, kR25ID, kR33ID, kMobCombo, kNumber };

/**
* Class that converts between configs (i.e. the numerical value in Pos2.m_config) and
* an ID used to determine evaluation coefficient values.
*
* Multiple configs can correspond to the same ID; for instance the row 
*    		O*...... and ......*O
* are reversals of each other and thus should receive the same evaluation coefficient.
*/
struct CMap {
    TIdType	idType;
    u2		size;

    u2	NIDs() const;
    u2	NConfigs() const;
    u2	ConfigToID(u2 config) const;
    u2	IDToConfig(u2 id) const;
    char* IDToString(u2 id) const;
    char* ConfigToString(u2 config) const;
};

// maximum number of identifications for different types of patterns

const u2    nBase3s[]=	{1,3,9,27,81,243,729,2187,6561,3*6561,9*6561};	// just base 3
const u2    nORIDs[]=	{1,3,6,18,45,135,378,1134,3321, 9963, 29646};	// order reversal
const u2    nCRIDs[]=	{0,0,0, 0, 0,  0,405, 0, 0, 0, 9*3321};				// corner reversal

const int maxBase3PatternSize=sizeof(nBase3s)/sizeof(u2);
const int maxORIDPatternSize=sizeof(nORIDs)/sizeof(u2);
const int maxCRIDPatternSize=sizeof(nCRIDs)/sizeof(u2);

//////////////////////////////////////////
// counting discs
//////////////////////////////////////////

void ConfigToTrits(u4 config, int length, int* trits);
u4 TritsToConfig(int* trits, int length);

//////////////////////////////////////////
// potential mobility calculations
//////////////////////////////////////////

void InitConfigToPotMob();
void CleanConfigToPotMob();

extern uint32_t *configToPotMob[2][9];
extern uint32_t *configToPotMobTriangle[2];
const int rowMovesTableSize=6561;

//////////////////////////////////////////
// compression
//////////////////////////////////////////

// size of unreverse table for various pattern sizes
extern uint32_t base2ToBase3Table[256];
extern u2 base3ToBase2Table[6561];
extern u2 *base3ToORIDTable[maxORIDPatternSize];
extern u2 *base3ToCRIDTable[maxCRIDPatternSize];
extern u2 base3ToR33IDTable[3*6561];
extern u2 *oRIDToBase3Table[maxORIDPatternSize];
extern u2 *cRIDToBase3Table[maxCRIDPatternSize];
extern u2 r33IDToBase3Table[14*729];

// CCompression::Init() must be called first before calling any of these routines
// 'base 2' means a representation of the pattern either as two u1s (black, empty)
//    	or as a u2 (black<<8 | empty)
// 'base 3' means a representation of the pattern as a base-3 integer with white=0, empty=1, black=2
// 'ORID' means the id# of a pattern. The IDs of two patterns are the same iff they are order reversals.
// 'ORIDx' means ORID, if size>0, or a base-3 number, if size==0

u2 Base2ToORIDx(u2 config2, u2 size);    // base-2 pattern -> order-reversal ID#. if size=0, base2->base3
u2 ORIDxToBase2(u2 compress, u2 size);    // order-reversal ID# -> base-2 pattern. if size=0, base3->base2
char* PrintORID(u2 orid, u2 size);
char* PrintBase3(u2 config, u2 size);

u2 Base2ToBase3(u1 black, u1 empty);// base-2 pattern -> base-3 pattern
u2 Base2ToBase3(u2 config2);    	// base-2 pattern -> base-3 pattern
u2 Base3ToORID(u2 config, u2 size);    // base-3 pattern -> order-reversal ID#
u2 Base3ToCRID(u2 config, u2 size);    // base-3 pattern -> corner-reversal ID#
u2 Base3ToR33ID(u2 config);    		// base-3 pattern -> 3x3 rect ID#
u2 ORIDToBase3(u2 id, u2 size);    	// order-reversal id -> base-3 pattern
u2 CRIDToBase3(u2 id, u2 size);    	// corner-reversal id -> base-3 pattern
u2 R33IDToBase3(u2 id);    			// 3x3 rect id -> base-3 pattern

inline u2 Base2ToBase3(u1 black, u1 empty) {return (base2ToBase3Table[black]<<1)+base2ToBase3Table[empty]; }
inline u2 Base2ToBase3(u2 config2) {return Base2ToBase3(config2>>8,(u1)config2); }
inline u2 Base3ToORID(u2 config, u2 size) { return base3ToORIDTable[size][config]; }
inline u2 Base3ToCRID(u2 config, u2 size) { return base3ToCRIDTable[size][config]; }
inline u2 Base3ToR33ID(u2 config) { return base3ToR33IDTable[config]; }
inline u2 ORIDToBase3(u2 id, u2 size) {return oRIDToBase3Table[size][id]; }
inline u2 CRIDToBase3(u2 id, u2 size) {return cRIDToBase3Table[size][id]; }
inline u2 R33IDToBase3(u2 id) {return r33IDToBase3Table[id]; }

u2 R33Reverse(u2 config);

u4 TritsToRConfig(int* trits, int length);

// using two row values to create a larger pattern
extern u4    row2To2x4[6561],row1To2x4[6561],row2To2x5[6561],row1To2x5[6561],row2ToXX[6561],row1ToEdge[6561],row2ToEdge[6561];
extern u4    row1To3x3[6561],row2To3x3[6561],row3To3x3[6561];
extern u4    row1ToTriangle[6561],row2ToTriangle[6561],row3ToTriangle[6561],row4ToTriangle[6561];
extern u4    configs2x5To2x4[9*6561];

inline u2 CMap::NIDs() const {
    switch(idType) {
    case kBase3:
    	assert(size<maxBase3PatternSize);
    	return nBase3s[size];
    case kORID:
    	assert(size<maxORIDPatternSize);
    	return nORIDs[size];
    case kCRID:
    	assert(size<maxCRIDPatternSize);
    	return nCRIDs[size];
    case kMobCombo:
    case kNumber:
    	return size;
    case kR33ID:
    	return 14*729;
    default:
    	assert(0);
    	return 0;
    }
}

inline u2 CMap::NConfigs() const {
    switch(idType) {
    case kBase3:
    case kORID:
    case kCRID:
    	assert(size<maxBase3PatternSize);
    	return nBase3s[size];
    case kMobCombo:
    case kNumber:
    	return size;
    case kR25ID:
    	return nBase3s[10];
    case kR33ID:
    	return nBase3s[9];
    default:
    	assert(0);
    	return 0;
    }
}

inline u2 CMap::ConfigToID(u2 config) const {
    switch(idType) {
    case kORID:
    	return Base3ToORID(config, size);
    case kCRID:
    	return Base3ToCRID(config, size);
    case kR33ID:
    	return Base3ToR33ID(config);
    case kBase3:
    case kMobCombo:
    case kNumber:
    case kR25ID:
    	return config;
    }
    assert(0);
    return 0;
}

#endif    // _PATTERNS_H_
