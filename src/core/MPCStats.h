// Copyright Chris Welty
//  All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.

#pragma once

#include "../n64/utils.h"

typedef int TCutPair[2];
typedef float TCutData[60][2];

const int khMPCMinCut=3;

const TCutPair kMPCCuts[]={
    			{0,0}, {0,0}, {0,0}, // 0,1,2
    			{1,0}, {2,0}, {1,0}, // 3,4,5
    			{2,0}, {3,0}, {4,0}, // 6,7,8
    			{3,5}, {4,6}, {3,5}, // 9,10,11
    			{4,0}, {5,0},		 // 12,13
    			{4,0}, {5,0}, {6,0}, {7,0},		// 14,15,16,17
    			{6,0}, {7,0},		// 18,19
    			{6,0}, {7,0}, {8,0}, {9,0}, // 20,21,22,23
    			{8,0}, {9,0},		// 24,25
    			{10,0},				// 26
    			{9,0}, {10,0}, {11,0},	//27,28,29
    			{10,0}				// 30
};

const int kMaxMPCHeight=sizeof(kMPCCuts)/(2*sizeof(int));

class CMPCStats;

class CMPCStats {
public:
    CMPCStats(const char* fnStats, int anPrunes);
    ~CMPCStats();

    bool BadCutHeight(int height);
    bool GetParams(int height, int nEmpty, int nCut, int iPrune, int& hCheck, float& sd, float& cr);
    void Multiply(int iPrune, double dMultiplier);
    void Multiply(int iPrune, double dMultiplier1, double dMultiplier2);
    bool Valid() const;
    int NPrunes() const;
    void Print(const char* fnStats);

    static CMPCStats* GetMPCStats(char evalType,char aCoeffSet, int aPrune);

protected:
    int hMax,nPrunes;
    const TCutPair *nCutLocs;
    TCutData *crs, **sds;

};

inline bool CMPCStats::BadCutHeight(int height) {
    return (height<khMPCMinCut || height>hMax);
}

const int kMaxPositions=50;
const int kMaxTotPos=kMaxPositions*(NN-1);