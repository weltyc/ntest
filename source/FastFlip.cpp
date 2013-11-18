// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

#include "FastFlip.h"
//#include "flipfuncBB.h"
#include "Evaluator.h"
#include "Pos2Inlines.h"
#include "options.h"

// Fill in the tables
void InitRFs();
void InitConfigTranslate();

void DummyFlipFunc() {
}

// use dff[0] instead of DummyFlipFunc below as a workaround for a glitch in MSC
TFlipFunc* dff[1]={DummyFlipFunc};

void InitRFs() {
	int iFlip,color;
	for (iFlip=0;iFlip<knRFs;iFlip++) {
		for(color=0; color<2; color++) {
			rfs[iFlip].ffsBB[color]=flipFuncsBB[iFlip][color];
		}
	}
	for (color=0; color<2;color++) {
		rfs[knRFs].ffsBB[color]=dff[0];
	}
}

void InitSDToPConfig() {
	int sq,dir;

	for(sq=0;sq<NN;sq++)
		for (dir=0;dir<4;dir++)
			if (sdToValue[sq][dir])
				sdToPConfig[sq][dir]=&(configs[sdToPattern[sq][dir]]);
			else
				sdToPConfig[sq][dir]=&(configs[knPats]);

}

void InitFastFlip() {
	InitFastFlipBase();
	fprintf(stderr,"Init fast flip...");
	InitRFs();
	InitSDToPConfig();
	InitConfigTranslate();
	fprintf(stderr,"Done\n");
}

int *nEmptyToPCoeffsK[60];

#define DEBUG_EVAL 2	// print out value and evaluation components for each evaluation
#define USE_ASSEMBLY 0	// use inline-assembly for part of the eval

#if DEBUG_EVAL
#define DE(x) x
#else
#define DE(x)
#endif

void PrintPatterns(char* sDescription, int *coeffs, int config1, int config2, int config3,int config4) {
	printf("%12s: %5d->%3d, %5d->%3d, %5d->%3d, %5d->%3d\n",sDescription,
		config1,coeffs[config1],
		config2,coeffs[config2],
		config3,coeffs[config3],
		config4,coeffs[config4]);
}
void PrintPatternsPM(char* sDescription, int *coeffs, int config1, int config2, int config3,int config4) {
	printf("%12s: %5d->%3d(%d,%d), %5d->%3d(%d,%d), %5d->%3d(%d,%d), %5d->%3d(%d,%d)\n",sDescription,
		config1,coeffs[config1]>>16,(coeffs[config1]>>8)&0xFF,coeffs[config1]&0xFF,
		config2,coeffs[config2]>>16,(coeffs[config2]>>8)&0xFF,coeffs[config2]&0xFF,
		config3,coeffs[config3]>>16,(coeffs[config3]>>8)&0xFF,coeffs[config3]&0xFF,
		config4,coeffs[config4]>>16,(coeffs[config4]>>8)&0xFF,coeffs[config4]&0xFF);
}
void PrintPatternsPM(char* sDescription, int *coeffs, int config1, int config2) {
	printf("%12s: %5d->%3d(%d,%d), %5d->%3d(%d,%d)\n",sDescription,
		config1,coeffs[config1]>>16,(coeffs[config1]>>8)&0xFF,coeffs[config1]&0xFF,
		config2,coeffs[config2]>>16,(coeffs[config2]>>8)&0xFF,coeffs[config2]&0xFF);
}
void PrintPattern(char* sDescription, int *coeffs,int config1){
	printf("%12s: %5d->%3d\n",sDescription,config1,coeffs[config1]);
}


u2 config2x5Toconfig2x4[6561*9];
bool fInitConfigTranslateDone=false;

void InitConfigTranslate() {
	int i, trits[10];
	u4 config2x5, config2x4;

	if (fInitConfigTranslateDone)
		return;

	for (config2x5=0; config2x5<6561*9; config2x5++) {
		ConfigToTrits(config2x5, 10, trits);
		//for(i=0;i<10;i++)
		//	printf("%c",ValueToText(trits[i]));
		//printf("[%d] --> ",config2x5);
		for (i=4; i<8;i++)
			trits[i]=trits[i+1];
		config2x4=TritsToConfig(trits,8);
		//for(i=0;i<8;i++)
		//	printf("%c",ValueToText(trits[i]));
		//printf("[%d]\n",config2x4);
		config2x5Toconfig2x4[config2x5]=config2x4;
	}
	fInitConfigTranslateDone=true;
}
