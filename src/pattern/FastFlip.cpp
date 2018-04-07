// Copyright Chris Welty
//  All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.

#include <cstdio>
#include <iostream>
#include "Patterns.h"

#include "FastFlip.h"

// Fill in the tables
void InitConfigTranslate();


void InitFastFlip() {
    fprintf(stderr,"Init fast flip...");
    InitConfigTranslate();
    fprintf(stderr,"Done\n");
}

int *nEmptyToPCoeffsK[60];

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
