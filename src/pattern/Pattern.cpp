// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

#include "../n64/types.h"
#include "../core/Debug.h"

#include "Pattern.h"

using namespace std;

////////////////////////////////////////////
// Pattern info
////////////////////////////////////////////

int CPattern::rsqToSq(int reflection, int square){
	int row, col,temp;
	row=Row(square);
	col=Col(square);

	if (reflection&1)
		row=7-row;
	if (reflection&2)
		col=7-col;
	if (reflection&4) {
		temp=row;
		row=col;
		col=temp;
	}
	return Square(row,col);
}

int CPattern::Reconfig(int config, int* reorder, int nI) {
	int trits[16],i, result;

	for (i=0; i<nI; i++) {
		trits[reorder[i]]=config%3;
		config/=3;
	}
	_ASSERT(config==0);
	result=0;
	for(i=0; i<nI; i++)
		result+=result+result+trits[nI-1-i];

	return result;
}

// calculate configToId and idToConfig
void CPattern::Init(){
	int siToI[8][16];
	int sqToI[NN];
	int isymmetry,i,sq,rsq,config,rconfig;
	bool fNew;

	// numerical patterns have a 0 as the size
	if (nI==0) {
		nConfigs=nIds=iToSq[0];
		configToId=NULL;
	}
	else {
		// initialize sqToI
		for (sq=0; sq<NN; sq++)
			sqToI[sq]=-1;
		for (i=0;i<nI;i++)
			sqToI[iToSq[i]]=i;

		// initialize siToI
		for (isymmetry=0; symmetries[isymmetry]; isymmetry++) {
			for (i=0; i<nI;i++) {
				rsq=rsqToSq(symmetries[isymmetry],iToSq[i]);
				siToI[isymmetry][i]=sqToI[rsq];
				_ASSERT(siToI[isymmetry][i]>=0);
			}
		}

		// calc nConfigs
		nConfigs=1;
		for (i=0; i<nI; i++)
			nConfigs*=3;

		// calc configToId table
		nIds=0;
		configToId=new int[nConfigs];
		for (config=0; config<nConfigs; config++) {
			fNew=true;
			for (isymmetry=0; symmetries[isymmetry]; isymmetry++) {
				rconfig=Reconfig(config, siToI[isymmetry], nI);
				if (rconfig<config) {
					fNew=false;
					break;
				}
			}
			if (fNew)
				configToId[config]=nIds++;
			else
				configToId[config]=configToId[rconfig];
		}

		// calc idToConfig table
		idToConfig=new int[nIds];
		for(config=0; config<nConfigs; config++)
			idToConfig[configToId[config]]=config;
	}
}

int CPattern::ConfigToID(int config) const {
	if (configToId)
		return configToId[config];
	else
		return config;
}

void CPattern::Clean() {
	if (configToId)
		delete[] configToId;
	if (idToConfig)
		delete[] idToConfig;

}

// add the patterns to the update tables
// inputs:
//	nPatterns - number of the first unused pattern
//	sqToUpdates - list of updates to append to
// outputs:
//	nPatterns - number of the first unused pattern
//	sqToUpdates - list of updates with new updates appended
void CPattern::CalcTables(int& nPatterns, vector<CUpdate> sqToUpdates[NN]){
	int r, nR, sq2, i;
	CUpdate update;

	// find # of reflections
	for (nR=0;reflections[nR]; nR++);
	nR++;

	// add to table
	for (i=0,update.value=1; i<nI; i++,update.value*=3) {
		for (r=0; r<nR; r++) {
			sq2=rsqToSq(reflections[r],iToSq[i]);
			update.pattern=nPatterns+r;
			sqToUpdates[sq2].push_back(update);
		}
	}

	// update nPatterns
	nPatterns+=nR;
}

int CPattern::NIDs() const {
	return nIds;
}

int CPattern::NConfigs() const {
	return nConfigs;
}

char* CPattern::IDToString(int id) const {
	if (!nI)
		*sOut=0;
	else {
		int i,config;

		config=idToConfig[id];
		for (i=0; i<nI; i++) {
			sOut[i]=ValueToText(config%3);
			config/=3;
		}
		sOut[i]=0;
	}
		return sOut;
}

char CPattern::sOut[17];

CPattern patR1={
	"Row 1",
	8,
	{000, 001, 002, 003, 004, 005, 006, 007},
	{2,0},
	{1,4,5,0}
};

CPattern patR2={
	"Row 2",
	8,
	{010, 011, 012, 013, 014, 015, 016, 017},
	{2,0},
	{1,4,5,0}
};

CPattern patR3={
	"Row 3",
	8,
	{020, 021, 022, 023, 024, 025, 026, 027},
	{2,0},
	{1,4,5,0}
};

CPattern patR4={
	"Row 4",
	8,
	{030, 031, 032, 033, 034, 035, 036, 037},
	{2,0},
	{1,4,5,0}
};

CPattern patD8={
	"Length-8 Diagonal",
	8,
	{000, 011, 022, 033, 044, 055, 066, 077},
	{3, 4, 7, 0},
	{1, 0}
};

CPattern patD7={
	"Length-7 Diagonal",
	7,
	{001, 012, 023, 034, 045, 056, 067},
	{7, 0},
	{1, 2, 4, 0}
};

CPattern patD6={
	"Length-6 Diagonal",
	6,
	{002, 013, 024, 035, 046, 057},
	{7, 0},
	{1, 2, 4, 0}
};

CPattern patD5={
	"Length-5 Diagonal",
	5,
	{003, 014, 025, 036, 047},
	{7, 0},
	{1, 2, 4, 0}
};

CPattern patD4={
	"Length-4 Diagonal",
	4,
	{004, 015, 026, 037},
	{7, 0},
	{1, 2, 4, 0}
};

CPattern patD3={
	"Length-3 Diagonal",
	3,
	{005, 016, 027},
	{7, 0},
	{1, 2, 4, 0}
};

CPattern patEXX={
	"Edge plus 2-X",
	10,
	{011, 000, 001, 002, 003, 004, 005, 006, 007, 016},
	{2,0},
	{1,4,5,0}
};

CPattern pat2x5={
	"2x5 Corner",
	10,
	{000, 001, 002, 003, 004, 010, 011, 012, 013, 014},
	{0},
	{1,2,3,4,5,6,7,0},
};

CPattern pat2x4={
	"2x4 Corner",
	8,
	{000, 001, 002, 003, 010, 011, 012, 013},
	{0},
	{1,2,3,4,5,6,7,0},
};

CPattern patE2x4={
	"Edge 2x4",
	8,
	{002,003,004,005,012,013,014,015},
	{2,0},
	{1,4,5,0}
};

CPattern patDarwersi = {
	"Darwersi",
	11,
	{003,002,001,000,012,011,010,022,021,020,030},
	{4,0},
	{1,2,3,0}
};

CPattern patTriangle = {
	"Triangle",
	10,
	{003,002,001,000,012,011,010,021,020,030},
	{4,0},
	{1,2,3,0}
};

CPattern patMP = {
	"Player's mobility",
	0,
	{NN},
};

CPattern patMO = {
	"Opponent's mobility",
	0,
	{NN},
};

CPattern patPMP = {
	"Player's potential mobility",
	0,
	{NN},
};

CPattern patPMO = {
	"Opponent's potential mobility",
	0,
	{NN},
};

CPattern patDxD= {
	"Disc/Disc count",
	0,
	{NN*NN}
};

CPattern patParity={
	"Parity",
	0,
	{2}
};


///////////////////////////////////
// Pattern initialization
///////////////////////////////////
void InitFastFlipPatterns() {
	fprintf(stderr,"InitFastFlipPatterns...");
	patR1.Init();
	patR2.Init();
	patR3.Init();
	patR4.Init();
	patD8.Init();
	patD7.Init();
	patD6.Init();
	patD5.Init();
	patD4.Init();
	patD3.Init();
	patPMP.Init();
	patPMO.Init();
	patMP.Init();
	patMO.Init();
	patDxD.Init();
	patParity.Init();
	patEXX.Init();
	pat2x5.Init();
	patE2x4.Init();
	patDarwersi.Init();
	patTriangle.Init();
	pat2x4.Init();
	fprintf(stderr,"Done\n");
}

void CleanFastFlipPatterns(){
	patR1.Clean();
	patR2.Clean();
	patR3.Clean();
	patR4.Clean();
	patD8.Clean();
	patD7.Clean();
	patD6.Clean();
	patD5.Clean();
	patD4.Clean();
	patD3.Clean();
	patEXX.Clean();
	pat2x5.Clean();
	patE2x4.Clean();
	patDarwersi.Clean();
	patTriangle.Clean();
	pat2x4.Clean();
}

