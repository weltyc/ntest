// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.


#include "MPCStats.h"

#include <stdio.h>
#include <math.h>
#include <sstream>

#include "BitBoard.h"
#include "QPosition.h"
#include "Player.h"
#include "Cache.h"
#include "time.h"
#include "Pos2.h"

//////////////////////////////////////////////////////////////////////
// MPCStats class
//////////////////////////////////////////////////////////////////////

CMPCStats::CMPCStats(const char* fnStats, int anPrunes) {
	FILE* fpStats;
	int nEmpty, nEmpties[kMaxTotPos], nPoints[kMaxTotPos];
	double data[kMaxTotPos][kMaxMPCHeight];
	char separator;
	int nRead, nRows, dummy, row, col, height, nCut, nDataPoints, iPrune, iVersion;
	int iStartCol;
	double xx, xy, yy, c, sigma;

	// open stats file
	fpStats=fopen(fnStats,"r");
	if (!fpStats) {
		printf("Unable to open stats file '%s'\n", fnStats);
		fprintf(stderr, "Unable to open stats file '%s'\n", fnStats);
		QSSERT(0);
		throw(0);
	}

	// read header info, and get hMax
	nRead=fscanf(fpStats,"%d %d", &iVersion, &hMax);
	QSSERT(nRead==2);
	QSSERT(iVersion>=1 && iVersion<=3);
	iStartCol=(iVersion>1)?0:1;

	// get multiplier if MPC file was created with different kStoneValue
	double dMPCMultiplier = 1;
	if (iVersion>2) {
		int kStoneValueFile;
		nRead=fscanf(fpStats, "%d", &kStoneValueFile);
		if (nRead==1)
			dMPCMultiplier = kStoneValue/(double)kStoneValueFile;
		else
			QSSERT(0);
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
		nRead=fscanf(fpStats,"%d",&(nEmpties[row]));		nPoints[row]=0;
		if (EOF==fscanf(fpStats,"%c",&separator))
			break;
		if (separator=='\n') continue;
		for (col=iStartCol; nRead; col++) {
			if (col<=hMax) {
				nRead=fscanf(fpStats,"%lf",&(data[row][col]));
				if (nRead) {
					nPoints[row]++;
					data[row][col]*=dMPCMultiplier;
				}
			}
			else
				nRead=fscanf(fpStats,"%d",&dummy);
			fscanf(fpStats,"%c",&separator);
			if (separator=='\n') break;
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
		QSSERT(0);
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
	QSSERT(iPrune<=nPrunes);

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

	QSSERT(iPrune>0 && iPrune<=nPrunes);

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

	QSSERT(iPrune>0 && iPrune<=nPrunes);

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
		os << fnBaseDir << "coefficients\\mpc" << evalType << aCoeffSet << "_" << hMaxMPC << ".txt";
		try {
			mpcs=new CMPCStats(os.str().c_str(), aPrune);
		}
		catch (int) {
			mpcs=NULL;
		}
		break;
	default:
		QSSERT(0);
		cout << "MPC stats unavailable! exiting\n";
		cerr << "MPC stats unavailable! exiting\n";
		_exit(-5);
		break;
	}

	return mpcs;
}

//////////////////////////////////////////////////////////////////////
// Routines
//////////////////////////////////////////////////////////////////////

void AnalyzePosition(CPlayerComputer* computer, CQPosition& pos) {
	CMVK mvk;

	cout << pos.NEmpty();
	computer->Clear();

	u4 fNeed=CSearchInfo::kNeedMove+CSearchInfo::kNeedValue+CSearchInfo::kNeedMPCStats;
	CSearchInfo si=computer->DefaultSearchInfo(pos.BlackMove(), fNeed,1e6, 0);
	computer->GetChosen(si, pos, mvk, true);
	printf("\n");
	std::cerr << ".";
}

// preconditions: computer has no book
void CalcMPCStats(CPlayerComputer* computer, int height) {
	FILE* 	cpFile;
	CBitBoard bb;
	int		nbbs[60], i, iPos;
	const int iPosMin=159;	// start at this line, useful if stopping and restarting
	CQPosition pos;
	CCalcParams *cpOld=computer->pcp;
	CHeightInfo hi(height, 0, false);
	CCalcParamsFixedHeight cp(hi);
	computer->pcp=&cp;
	computer->cd.fsPrint=0;

	// header info
	cout << 3 << " " << height << " " << kStoneValue << "\n";

	// clear computer's and params
	//computer->cd.iPruneMidgame=computer->cd.iPruneEndgame=0;

	// clear position counts and init
	for (i=0; i<60; i++)
		nbbs[i]=0;
	iPos=0;

	// read positions from file; analyze if we should
	string fn(fnBaseDir);
	fn+="captured.pos";
	if (cpFile=fopen(fn.c_str(),"rb")) {
		while (bb.Read(cpFile)) {
			pos.Initialize(bb, true);
			if (nbbs[bb.NEmpty()]++ < kMaxPositions)
				if (iPos++>=iPosMin)
					AnalyzePosition(computer, pos);
		}
		fclose(cpFile);
	}

	// restore computer's book and params
	computer->pcp=cpOld;
}

const char* fnCapture="captured.pos";
const char* sPVFile="captured.pv";

// save values of positions in a file
//	 format:
//	bitboard (white just moved),  value (to black), pass flag (0,1,2), best move (for mover)
// precondition: no book (unless you want to add these positions to a book)
void CalcPosValues(CPlayerComputer* computer, bool fAppend) {
	FILE* fpCapture, *fpPV;
	CQPosition pos;
	CMVK mvk;
	CMoves moves;
	int i, quantities[60], pass, nCalced, iAppend;
	CBitBoard bb;
	time_t tStart;

	if (fAppend) {
		// figure out what number to start on
		string fn(fnBaseDir);
		fn+=sPVFile;
		fpPV=fopen(fn.c_str(), "rb");
		int result = fseek(fpPV, 0, SEEK_END);
		int nFileSize=ftell(fpPV);
		int nRecordSize=sizeof(bb.mover)+sizeof(bb.empty)+
			sizeof(mvk.value)+sizeof(pass)+sizeof(mvk.move);
		if (nFileSize%nRecordSize) {
			iAppend=0;
			cerr << "Previous .pv file is corrupt, starting again: file size = "
				<< nFileSize << ", record size = " << nRecordSize
				<< ", file size % record size = " << nFileSize%nRecordSize << "\n";
		}
		else {
			iAppend=nFileSize/nRecordSize;
			cerr << "Appending to previous file with " << iAppend << " elements\n";
		}
		fclose(fpPV);
		fpPV=NULL;
	}
	else
		iAppend=0;

	// clear count
	for (i=0;i<60; i++)
		quantities[i]=0;

	string fn(fnBaseDir);
	fn+=fnCapture;
	fpCapture=fopen(fn.c_str(), "rb");
	if (fpCapture) {
		string fn(fnBaseDir);
		fn+=sPVFile;
		fpPV=fopen(fn.c_str(), iAppend?"a+bc":"wbc");
		if (fpPV) {
			for (nCalced=0; bb.Read(fpCapture); ) {
				if (bb.NEmpty()>60)
					continue;

				quantities[bb.NEmpty()]++;

				// print progress
				if (nCalced%200 == 0) {
					fflush(fpPV);
					if (nCalced%10000 == 0)
						fprintf(stderr, "\nPosition %dk ",nCalced/1000);
					else
						fprintf(stderr, ".");
				}
				//printf("%d", bb.NEmpty());

				if (nCalced>=iAppend) {
					pos.Initialize(bb,true);
					pass=pos.CalcMovesAndPass(moves);

					// if terminal position, calc value
					if (pass==2) {
						mvk.value=-pos.TerminalValue();
						mvk.move.Set(-1);
					}

					// nonterminal position, get value from computer
					else {
						tStart=time(0);

						CSearchInfo si=computer->DefaultSearchInfo(pos.BlackMove(), CSearchInfo::kNeedMove+CSearchInfo::kNeedValue,1e6, 0);
						computer->GetChosen(si, pos, mvk, true);
						if (pass==1)
							mvk.value=-mvk.value;
						//printf("NEmpty = %2d; value = %4d; move = ",pos.NEmpty(),mvk.value);
						//mvk.move.Print();
						//printf("; pass = %d; time = %2d\n",pass, time(0)-tStart);
					}

					// write to file
					if (!bb.Write(fpPV)
						|| !fwrite(&mvk.value, sizeof(mvk.value), 1, fpPV)
						|| !fwrite(&pass, sizeof(pass), 1, fpPV)
						|| !fwrite(&mvk.move, sizeof(mvk.move), 1, fpPV)) {
						string fn(fnBaseDir);
						fn+=sPVFile;
						cerr << "can't write to file " << fn << "\n";
						QSSERT(0);
						_exit(1);
					}
				}
				nCalced++;
			}
			fclose(fpPV);
		}
		fclose(fpCapture);
	}
	// print count
	int sum=0;
	for (i=0;i<60; i++) {
		sum+=quantities[i];
		printf("%d:%d\n",i,quantities[i]);
	}
	printf("%d total positions\n",sum);
}
