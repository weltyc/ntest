// Copyright Chris Welty
//  All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.


#include "MPCStats.h"

#include <cassert>
#include <time.h>
#include <stdio.h>
#include <math.h>
#include <sstream>

using namespace std;

//////////////////////////////////////////////////////////////////////
// MPCStats class
//////////////////////////////////////////////////////////////////////

CMPCStats::CMPCStats(const char* fnStats, int anPrunes) {
    FILE* fpStats;
    int nEmpty, nEmpties[kMaxTotPos], nPoints[kMaxTotPos];
    double data[kMaxTotPos][kMaxMPCHeight];
    char separator;
    int nRead, nRows, dummy, row, col, height, nCut, nDataPoints = 0, iPrune, iVersion;
    int iStartCol;
    double xx = 0.0, xy = 0.0, yy = 0.0, c, sigma;

    // open stats file
    fpStats=fopen(fnStats,"r");
    if (!fpStats) {
    	printf("Unable to open stats file '%s'\n", fnStats);
    	fprintf(stderr, "Unable to open stats file '%s'\n", fnStats);
    	assert(0);
    	throw(0);
    }

    // read header info, and get hMax
    nRead=fscanf(fpStats,"%d %d", &iVersion, &hMax);
    assert(nRead==2);
    assert(iVersion>=1 && iVersion<=3);
    iStartCol=(iVersion>1)?0:1;

    // get multiplier if MPC file was created with different kStoneValue
    double dMPCMultiplier = 1;
    if (iVersion>2) {
    	int kStoneValueFile;
    	nRead=fscanf(fpStats, "%d", &kStoneValueFile);
    	if (nRead==1)
    		dMPCMultiplier = kStoneValue/(double)kStoneValueFile;
    	else
    		assert(0);
    }
    else if (iVersion==2) {
    	dMPCMultiplier = kStoneValue/10.0;
    }

    // Initialize data
    nPrunes=anPrunes;
    nCutLocs=kMPCCuts;
    sds=new TCutData*[nPrunes+1];
    crs=new TCutData[hMax+1];
    for (iPrune=0; iPrune<=nPrunes; iPrune++) {
    	sds[iPrune]=new TCutData[hMax+1];
    }

    // repeatedly read in a row
    for (row=0, nRead=1; nRead>0 && row<kMaxTotPos; row++) {
        nRead=fscanf(fpStats,"%d",&(nEmpties[row]));
        nPoints[row]=0;
    	if (EOF==fscanf(fpStats,"%c",&separator))
    		break;
    	if (separator=='\n') continue;
        for (col=iStartCol; nRead > 0; col++) {
    		if (col<=hMax) {
    			nRead=fscanf(fpStats,"%lf",&(data[row][col]));
                if (nRead > 0) {
    				nPoints[row]++;
    				data[row][col]*=dMPCMultiplier;
    			}
    		}
    		else
    			nRead=fscanf(fpStats,"%d",&dummy);
            if (EOF == fscanf(fpStats,"%c",&separator))
                break;
            if (separator=='\n' || separator=='\r') break;
    	}
    }
    nRows=row;

    // calculate parameters for each possible cut pair at each depth
    for (nEmpty=0; nEmpty<60; nEmpty++) {
    	for (height=0; height<=hMax; height++) {
    		sds[0][height][nEmpty][0]=sds[0][height][nEmpty][1]=0;

    		for (nCut=0; nCut<2 && nCutLocs[height][nCut]; nCut++) {
    			col=nCutLocs[height][nCut];	// height to use in prediction
    			yy=xx=xy=nDataPoints=0;
    			for (row=0; row<nRows; row++) {
    				if (height<=nPoints[row] && nEmpties[row]==nEmpty) {
    					xx+=data[row][col]*data[row][col];
    					xy+=data[row][col]*data[row][height];
    					yy+=data[row][height]*data[row][height];
    					nDataPoints++;
    				}
    			}
    			if (nDataPoints>1) {
    				c=xy/xx;
    				sigma=sqrt((yy-xy*xy/xx)/(nDataPoints-1));
    				if (nDataPoints>20) {
    					sds[0][height][nEmpty][nCut]=float(sigma);
    					crs[height][nEmpty][nCut]=float(1/c);
    				}
    			}
    		}
    	}
    }

    // fill in paramters for elements without enough data points
    for (height=0; height<=hMax; height++) {
    	for (nCut=0; nCut<2 && nCutLocs[height][nCut]; nCut++) {
    		c=sigma=0;
    		for (nEmpty=0; nEmpty<60; nEmpty++) {
    			if (sds[0][height][nEmpty][nCut]) {
    				sigma=sds[0][height][nEmpty][nCut];
    				c=crs[height][nEmpty][nCut];
    			}
    			else {
    				sds[0][height][nEmpty][nCut]=float(sigma);
    				crs[height][nEmpty][nCut]=float(c);
    			}
    		}
    	}
    }

    // sds[0] hold the original sds. sds[iPrune] will
    //	hold the original data multiplied by a width.
    switch(anPrunes) {
    case 0:
    	break;
    case 5:
    	Multiply(5, 0.7);
    case 4:
    	Multiply(4, 1.0);
    	Multiply(3, 1.3);
    	Multiply(2, 1.7);
    	Multiply(1, 2.2);
    	break;
    default:
    	assert(0);
    }

    fclose(fpStats);

    //Print(fnStats);
}

void CMPCStats::Print(const char* fnStats) {
    int height, nCut, nEmpty;

    // print out stuff for debugging
    printf("Printing out debug info for MPC stats from %s\n", fnStats);
    for (height=0; height<=hMax; height++) {
    	for (nCut=0; nCut<2 && nCutLocs[height][nCut]; nCut++) {
    		printf("[%d/%d]\t",nCutLocs[height][nCut],height);
    		for (nEmpty=0; nEmpty<60; nEmpty++) {
    			printf("(%4.2f-%5.1f)\t",crs[height][nEmpty][nCut],sds[0][height][nEmpty][nCut]);
    		}
    		printf("\n");
    	}
    }
}

CMPCStats::~CMPCStats() {
    for (int iPrune=0; iPrune<=nPrunes; iPrune++) {
    	delete[] sds[iPrune];
    }
    delete[] sds;
    delete[] crs;
}

// get hCheck, sd and cr for a cut. Return true if we should test, false if no test available.
bool CMPCStats::GetParams(int height, int nEmpty, int nCut, int iPrune, int& hCheck, float& sd, float& cr) {
    assert(iPrune<=nPrunes);

    hCheck=nCutLocs[height][nCut];
    if (!hCheck)
    	return false;

    sd=sds[iPrune][height][nEmpty][nCut];
    if (!sd)
    	return false;

    cr=crs[height][nEmpty][nCut];
    return true;
}

void CMPCStats::Multiply(int iPrune, double dMultiplier) {
    int nCut, height, nEmpty;

    assert(iPrune>0 && iPrune<=nPrunes);

    for (nCut=0; nCut<2; nCut++) {
    	for (height=0; height<=hMax; height++) {
    		for (nEmpty=0; nEmpty<60; nEmpty++) {
    			sds[iPrune][height][nEmpty][nCut]=float(sds[0][height][nEmpty][nCut]*dMultiplier);
    		}
    	}
    }
}

void CMPCStats::Multiply(int iPrune, double dMultiplier1, double dMultiplier2) {
    int nCut, height, nEmpty;
    double dMultiplier;

    assert(iPrune>0 && iPrune<=nPrunes);

    for (nEmpty=0; nEmpty<60; nEmpty++) {
    	dMultiplier=(nEmpty>30)?dMultiplier1:dMultiplier2;
    	for (nCut=0; nCut<2; nCut++) {
    		for (height=0; height<=hMax; height++) {
    			sds[iPrune][height][nEmpty][nCut]=float(sds[0][height][nEmpty][nCut]*dMultiplier);
    		}
    	}
    }
}

int CMPCStats::NPrunes() const {
    return nPrunes;
}


bool CMPCStats::Valid() const {
    return nCutLocs && nPrunes;
}

CMPCStats* CMPCStats::GetMPCStats(char evalType,char aCoeffSet, int aPrune) {
    CMPCStats* mpcs;
    int hMaxMPC;
    extern bool fCompareMode;
    std::ostringstream os;

    // find MPC stats
    switch(evalType) {
    case 'K':
    case 'J':
    case 'L':
    	hMaxMPC=11;
    	if (evalType=='J' && !fCompareMode) {
    		switch (aCoeffSet) {
    		case '5':	hMaxMPC=19; break;
    		case '8':	hMaxMPC=19; break;
    		case 'A':	hMaxMPC=25; break;
    		}
    	}
    	os << "coefficients/mpc" << evalType << aCoeffSet << "_" << hMaxMPC << ".txt";
    	try {
    		mpcs=new CMPCStats(os.str().c_str(), aPrune);
    	}
    	catch (int) {
    		mpcs=NULL;
    	}
    	break;
    default:
    	assert(0);
    	cout << "MPC stats unavailable! exiting\n";
    	cerr << "MPC stats unavailable! exiting\n";
    	_exit(-5);
    	break;
    }

    return mpcs;
}
