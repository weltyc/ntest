// Copyright Chris Welty
//  All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.

// patterns source code

#include <cassert>
#include <cstdio>

#include "Patterns.h"
#include "patternJ.h"

/////////////////////////////////////////////////////////////
// Compression from base 4 to base 3
/////////////////////////////////////////////////////////////

uint32_t base2ToBase3Table[256];
u2 base3ToBase2Table[6561];
u2 *base3ToORIDTable[maxORIDPatternSize];
u2 *oRIDToBase3Table[maxORIDPatternSize];
u2 *base3ToCRIDTable[maxCRIDPatternSize];
u2 base3ToR33IDTable[3*6561];
u2 *cRIDToBase3Table[maxCRIDPatternSize];
u2 r33IDToBase3Table[14*729];
u2 CRID6Reverse(u2 config);
u2 CRID10Reverse(u2 config);
u2 R33Reverse(u2 config);
u2 ORIDReverse(u2 config, int size);
u4    row2To2x4[6561],row1To2x4[6561],row2To2x5[6561],row1To2x5[6561],row2ToXX[6561],row1ToEdge[6561],row2ToEdge[6561];
u4    row1To3x3[6561],row2To3x3[6561],row3To3x3[6561];
u4    row1ToTriangle[6561],row2ToTriangle[6561],row3ToTriangle[6561],row4ToTriangle[6561];
u4    configs2x5To2x4[9*6561];

// pattern J info
int coeffStartsJ[nMapsJ];
int nCoeffsJ;

void InitBaseTables() {
    int i;
    u2 config;
    u2 result, resultr;
    u2 black, empty;
    u1 mask, maskr;

    // base2ToBase3Table, convert base 3 to base 2, and
    for (i=0; i<256; i++) {
    	mask=0x80;
    	maskr=0x01;
    	resultr=result=0;
    	while (mask) {
    		result+=result<<1;
    		resultr+=resultr<<1;
    		if (mask&i)
    			result++;
    		if (maskr&i)
    			resultr++;
    		mask>>=1;
    		maskr<<=1;
    	}
    	base2ToBase3Table[i]=result;
    }

    // base3ToBase2Table, convert base 2 to base 3 (only for length 8)
    for (empty=0; empty<256; empty++)
    	for (black=0; black<256; black++)
    		if (!(empty&black)) {
    			config=Base2ToBase3((u1)black, (u1)empty);
    			base3ToBase2Table[config]=(black<<8)|empty;
    		}
}

// convert a config into its length base-3 digits
//    one digit is stored per element of trits, so trits must have at least length elements
//    the least significant trit is stored in trits[0].
void ConfigToTrits(u4 config, int length, int* trits) {
    int i;

    for (i=0; i<length; i++) {
    	trits[i]=config%3;
    	config/=3;
    }
    assert(config==0);
}

// change trits to config. trit[0] is smallest value
u4 TritsToConfig(int* trits, int length) {
    u4 config;
    int i;

    config=0;
    for (i=length; i>0; )
    	config=config*3+trits[--i];
    return config;
}

u4 TritsToRConfig(int* trits, int length) {
    int i, config;

    config=0;
    for (i=0; i<length; )
    	config=config*3+trits[i++];
    return config;
}

void InitORIDTables() {
    int size;
    u2 config, rconfig, id;

    // allocate memory for identification tables
    for (size=1; size<maxORIDPatternSize; size++) {
    	base3ToORIDTable[size]=new u2[nBase3s[size]];
    	oRIDToBase3Table[size]=new u2[nORIDs[size]];
    }
    // base3ToORIDTable, *OOOO and OOOO* have the same ORID
    for (size=1; size<maxORIDPatternSize; size++) {
    	for (id=config=0; config<nBase3s[size]; config++) {
    		rconfig=ORIDReverse(config, size);
    		if (config<=rconfig) {
    			base3ToORIDTable[size][config]=base3ToORIDTable[size][rconfig]=id;
    			oRIDToBase3Table[size][id]=config;
    			id++;
    		}
    	}
    	assert(id==nORIDs[size]);
    }

}

void InitCRIDTables() {
    int size;
    u2 config, rconfig, id;

    for (size=0; size<maxCRIDPatternSize; size++) {
    	if (nCRIDs[size]) {
    		base3ToCRIDTable[size]=new u2[nBase3s[size]];
    		cRIDToBase3Table[size]=new u2[nCRIDs[size]];
    	}
    }

    // base3ToCRIDTable, corner flips
    for (id=config=0; config<nBase3s[6]; config++) {
    	rconfig=CRID6Reverse(config);
    	if (config<=rconfig) {
    		base3ToCRIDTable[6][config]=base3ToCRIDTable[6][rconfig]=id;
    		cRIDToBase3Table[6][id]=config;
    		id++;
    	}
    }
    assert(id==nCRIDs[6]);
    for (id=config=0; config<nBase3s[10]; config++) {
    	rconfig=CRID10Reverse(config);
    	if (config<=rconfig) {
    		base3ToCRIDTable[10][config]=base3ToCRIDTable[10][rconfig]=id;
    		cRIDToBase3Table[10][id]=config;
    		id++;
    	}
    }
    assert(id==nCRIDs[10]);
}

void InitR33IDTables() {
    u2 config, rconfig, id;

    // base3ToR33IDTable
    for (id=config=0; config<nBase3s[9]; config++) {
    	rconfig=R33Reverse(config);
    	if (config<=rconfig) {
    		base3ToR33IDTable[config]=base3ToR33IDTable[rconfig]=id;
    		r33IDToBase3Table[id]=config;
    		id++;
    	}
    }
    assert(id==14*729);
}

// initialize edge -> 2x4 and 2x5 translators
void InitTranslators() {
    u2 value1, value2;
    u4 value;
    int trits[10], config;

    // edge->2x4 translator
    for (config=0; config<6561; config++) {
    	ConfigToTrits(config, 8, trits);
    	value1=TritsToConfig(trits, 4);
    	value2=TritsToRConfig(trits+4,4);
    	value=(value1<<16) + value2;
    	row2To2x4[config]=value;
    	row1To2x4[config]=value*81;
    }

    // edge->2x5 translator
    for (config=0; config<6561; config++) {
    	ConfigToTrits(config, 8, trits);
    	value1=TritsToConfig(trits, 5);
    	value2=TritsToRConfig(trits+3,5);
    	value=(value1<<16) + value2;
    	row2To2x5[config]=value;
    	row1To2x5[config]=value*243;
    }

    // row 2 -> two X-square translator
    for (config=0; config<6561; config++) {
    	ConfigToTrits(config, 8, trits);
    	row2ToXX[config]=trits[1]+3*6561*trits[6];
    }

    // 2x5->2x4 translator
    for (config=0; config<9*6561; config++) {
    	ConfigToTrits(config, 10, trits);
    	value1=TritsToConfig(trits,4);
    	value2=TritsToConfig(trits+5, 4);
    	configs2x5To2x4[config]=value1+value2*81;
    }

    // edge -> edge pattern translator
    for (config=0; config<6561; config++) {
    	ConfigToTrits(config, 8, trits);
    	// edge+2x components
    	row1ToEdge[config]=config*3;
    	row2ToEdge[config]=trits[1]+3*6561*trits[6];
    	// edge 2x4 components
    	row1ToEdge[config]+=(trits[2]+trits[3]*3+trits[4]*729+trits[5]*2187)<<16;
    	row2ToEdge[config]+=(trits[2]*9+trits[3]*27+trits[4]*81+trits[5]*243)<<16;
    }

    // edge->3x3 translator
    for (config=0; config<6561; config++) {
    	ConfigToTrits(config, 8, trits);
    	value1=TritsToConfig(trits, 3);
    	value2=TritsToRConfig(trits+5,3);
    	value=(value1<<16) + value2;
    	row1To3x3[config]=value;
    	row2To3x3[config]=value*27;
    	row3To3x3[config]=value*27*27;
    }

    // edge->triangle translator
    for (config=0; config<6561; config++) {
    	ConfigToTrits(config, 8, trits);
    	// row 4
    	value1=trits[0]*3*6561;
    	value2=trits[7]*3*6561;
    	value=(value1<<16) + value2;
    	row4ToTriangle[config]=value;
    	// row 3
    	value1=trits[0]*6561+trits[1]*729;
    	value2=trits[7]*6561+trits[6]*729;
    	value=(value1<<16) + value2;
    	row3ToTriangle[config]=value;
    	// row 2
    	value1=trits[0]*3*729+trits[1]*3+trits[2]*3*81;
    	value2=trits[7]*3*729+trits[6]*3+trits[5]*3*81;
    	value=(value1<<16) + value2;
    	row2ToTriangle[config]=value;
    	// row 1
    	value1=trits[0]+trits[1]*81+trits[2]*27+trits[3]*9;
    	value2=trits[7]+trits[6]*81+trits[5]*27+trits[4]*9;
    	value=(value1<<16) + value2;
    	row1ToTriangle[config]=value;
    }
}

// make sure we have a class instance so we clean up at the end of the program
CCompression CCompression::init;

bool CCompression::fInit=false;

void CCompression::Init() {
    if (!fInit) {
    	InitBaseTables();
    	InitORIDTables();
    	InitCRIDTables();
    	InitTranslators();
    	InitR33IDTables();
    	fInit=true;
    }
}

CCompression::~CCompression() {
    int i;

    for (i=0; i<maxORIDPatternSize; i++) {
    	delete[] base3ToORIDTable[i];
    	delete[] oRIDToBase3Table[i];
    }

    for (i=0; i<maxCRIDPatternSize; i++) {
    	delete[] base3ToCRIDTable[i];
    	delete[] cRIDToBase3Table[i];
    }
}

// new version
const int CRID6[6]={2,1,0, 4,3, 5};
const int CRID10[10]={0,1, 9,8,7,6,5,4,3,2};
const int R33ID[9]={0,3,6,1,4,7,2,5,8};

u2 ReorderedConfig(u2 config, int nTrits, const int* reordering) {
    int i, trits[20];

    assert(nTrits<=20);
    ConfigToTrits(config, nTrits,trits);
    config=0;
    for (i=nTrits-1; i>=0; i--)
    	config+=config+config+trits[reordering[i]];

    return config;
}

u2 CRID6Reverse(u2 config) {
    return ReorderedConfig(config, 6, CRID6);
}

u2 CRID10Reverse(u2 config) {
    return ReorderedConfig(config, 10, CRID10);
}

u2 ORIDReverse(u2 config, int size) {
    assert(size>0);
    int trits[maxBase3PatternSize];

    ConfigToTrits(config, size, trits);
    return TritsToRConfig(trits, size);
}

u2 R33Reverse(u2 config) {
    return ReorderedConfig(config,9,R33ID);
}

static char outputStuff[]="O.*";
static char configString[20];

// compress with 'size' element reversals mapping to the same value. If size=0, don't map reversals.
// The incoming data should have color as its high byte and empty as its low byte
//    in other words...
//    takes a base2 number (black high) and returns
//    	size==0: base3 number
//    	size!=0: o#
u2 Base2ToORIDx(u2 pattern2, u2 size) {
    u2 pattern3;

    pattern3=Base2ToBase3(pattern2>>8,pattern2&0xFF);
    if (!size)
    	return pattern3;
    assert(size<maxORIDPatternSize);
    assert(base3ToORIDTable[size][pattern3]<nORIDs[size]);
    return Base3ToORID(pattern3, size);
}

// PrintORID:
//    if size!=0 interprets a as an o#.
char* PrintORID(u2 orid, u2 size) {
    assert(size);
    assert(size<maxORIDPatternSize);
    assert(size<10);
    return PrintBase3(oRIDToBase3Table[size][orid], size);
}

char* PrintBase3(u2 pattern3, u2 size) {
    int i;

    assert(size);
    for (i=size-1; i>=0; i--) {
    	configString[i]=outputStuff[pattern3%3];
    	pattern3/=3;
    }
    configString[size]=0;
    return configString;
}

// Decompress:
//    if size==0 changes base3 (black high) to base2 (black high)
//    if size!=0 changes o# to base2 (black high)
u2 ORIDxToBase2(u2 compress, u2 size) {
    u2 pattern;
    u2 temp;

    if (size) {
    	assert(size<maxORIDPatternSize);
    	compress=oRIDToBase3Table[size][compress];
    }

    int i;
    pattern=0;

    for (i=size-1; i>=0; i--) {
    	temp=compress%3;
    	pattern>>=1;
    	pattern|=(temp<<14)&0x8000;	// black
    	pattern|=(temp<<7)&0X80;	// empty
    	compress/=3;
    }
    return pattern;
}

static char nullString[]="";

u2 CMap::IDToConfig(u2 id) const {
    switch(idType) {
    case kBase3:
    	assert(size<maxBase3PatternSize);
    	assert(id<nBase3s[size]);
    	return id;
    case kORID:
    	assert(size<maxORIDPatternSize);
    	assert(id<nORIDs[size]);
    	return ORIDToBase3(id, size);
    case kCRID:
    	assert(size<maxCRIDPatternSize);
    	assert(id<nCRIDs[size]);
    	assert(size==6 || size==10);
    	return CRIDToBase3(id, size);
    case kR33ID:
    	return R33IDToBase3(id);
    case kMobCombo:
    case kNumber:
    	return id;
    default:
    	assert(0);
    	return 0;
    }
}

char* CMap::IDToString(u2 id) const {
    switch(idType) {
    case kNumber:
    	return nullString;
    case kMobCombo:
    	sprintf(configString, "%2d-%2d", id/16, id%16);
    	return configString;
    default:
    	return PrintBase3(IDToConfig(id),size);
    }
}

char* CMap::ConfigToString(u2 config) const {
    switch(idType) {
    case kNumber:
    	return nullString;
    case kMobCombo:
    	sprintf(configString, "%2d-%2d", config/16, config%16);
    	return configString;
    default:
    	return PrintBase3(config,size);
    }
}

//////////////////////////////////////////
// potential mobility calculations
//////////////////////////////////////////

uint32_t *configToPotMob[2][9];
uint32_t *configToPotMobTriangle[2];

void InitJCoeffStarts() {
    int map;

    // calculate nTotalCoeffs and coeffStarts
    for (map=0, nCoeffsJ=0; map<nMapsJ; map++) {
    	coeffStartsJ[map]=nCoeffsJ;
    	nCoeffsJ+=mapsJ[map].NConfigs();
    }
}

int PotMob(u1 black, u1 empty, int length) {
    u2 mask;

    mask=(1<<length)-1;
    empty &= mask;
    mask--;
    int left = bitCountInt(black&(empty<<1)&(mask>>1));
    int right = bitCountInt(black&(empty>>1)&mask);
    return left+right;
}

//    length-4 diagonal subconfiguration of a corner pattern

int D4Subconfig(int config) {
    int subconfig;

    config/=9;
    subconfig=config%3;
    config/=27;
    subconfig=(subconfig*3)+config%3;
    config/=3;
    subconfig=(subconfig*3)+config%3;
    config/=27;
    subconfig=(subconfig*3)+config%3;
    assert(subconfig<81);
    return subconfig;
}

#pragma optimize("g", off)

bool fInitConfigToPotMob=false;

void InitConfigToPotMob() {
    int length, nConfigs, config, subconfig, color;
    u2 base2;
    u1 black, empty, white;

    CCompression::Init();

    if (!fInitConfigToPotMob) {
    	InitJCoeffStarts();

    	// fill configToPotMob[0] with black mobility and configToPotMob[1] with white mobility
    	for (length=3, nConfigs=27; length<=N; length++, nConfigs*=3) {
    		for (color=0; color<2; color++) {
    			configToPotMob[color][length]=new uint32_t[nConfigs];
    			CHECKNEW(configToPotMob[color][length]!=0);
    		}
    		for (config=0; config<nConfigs; config++) {
    			base2=base3ToBase2Table[config+3280-(nConfigs>>1)];
    			black=base2>>8;
    			empty=base2&0xFF;
    			white=~(empty|black);
    			assert(!(empty&black));

    			// pot mob
    			configToPotMob[0][length][config]=PotMob(black, empty, length);
    			configToPotMob[1][length][config]=PotMob(white, empty, length);
    		}
    	}

    	// fill configToPotMobTriangle with potential mobilities for G-corner patterns
    	nConfigs=mapsJ[8].NConfigs();
    	configToPotMobTriangle[0]=new uint32_t[nConfigs];
    	configToPotMobTriangle[1]=new uint32_t[nConfigs];
    	CHECKNEW(configToPotMobTriangle[0] && configToPotMobTriangle[1]);
    	for (config=0; config<nConfigs; config++) {
    		subconfig=D4Subconfig(config);
    		configToPotMobTriangle[0][config]=configToPotMob[0][4][subconfig];
    		configToPotMobTriangle[1][config]=configToPotMob[1][4][subconfig];
    	}
    	fInitConfigToPotMob=true;
    }
}

void CleanConfigToPotMob() {
    if (fInitConfigToPotMob) {
    	int length, color;

    	for (color=0; color<2; color++) {
    		for (length=3; length<=8; length++) {
    			delete[] configToPotMob[color][length];
    		}
    		delete[] configToPotMobTriangle[color];
    	}
    	fInitConfigToPotMob=false;
    }
}
