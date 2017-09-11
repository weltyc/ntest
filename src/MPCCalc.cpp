#include <cassert>
#include <iostream>
#include "core/QPosition.h"
#include "core/SearchInfo.h"
#include "core/MPCStats.h"
#include "core/MVK.h"
#include "core/CalcParams.h"

#include "PlayerComputer.h"
#include "MPCCalc.h"
#include "core/options.h"

//////////////////////////////////////////////////////////////////////
// Routines
//////////////////////////////////////////////////////////////////////

void AnalyzePosition(CPlayerComputer* computer, CQPosition& pos) {
	CMVK mvk;

	std::cout << pos.NEmpty();
	computer->Clear();

	u4 fNeed=CSearchInfo::kNeedMove+CSearchInfo::kNeedValue+CSearchInfo::kNeedMPCStats;
	CSearchInfo si = computer->DefaultSearchInfo(pos.BlackMove(), fNeed, INFINITE_TIME, 0);
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
	std::cout << 3 << " " << height << " " << kStoneValue << "\n";

	// clear computer's and params
	//computer->cd.iPruneMidgame=computer->cd.iPruneEndgame=0;

	// clear position counts and init
	for (i=0; i<60; i++)
		nbbs[i]=0;
	iPos=0;

	// read positions from file; analyze if we should
	std::string fn(fnBaseDir);
	fn+="captured.pos";
	if ((cpFile=fopen(fn.c_str(),"rb"))) {
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
		std::string fn(fnBaseDir);
		fn+=sPVFile;
		fpPV=fopen(fn.c_str(), "rb");
		int result = fseek(fpPV, 0, SEEK_END);
		int nFileSize=ftell(fpPV);
		int nRecordSize=sizeof(bb.mover)+sizeof(bb.empty)+
			sizeof(mvk.value)+sizeof(pass)+sizeof(mvk.move);
		if (nFileSize%nRecordSize) {
			iAppend=0;
			std::cerr << "Previous .pv file is corrupt, starting again: file size = "
				<< nFileSize << ", record size = " << nRecordSize
				<< ", file size % record size = " << nFileSize%nRecordSize << "\n";
		}
		else {
			iAppend=nFileSize/nRecordSize;
			std::cerr << "Appending to previous file with " << iAppend << " elements\n";
		}
		fclose(fpPV);
		fpPV=NULL;
	}
	else
		iAppend=0;

	// clear count
	for (i=0;i<60; i++)
		quantities[i]=0;

	std::string fn(fnBaseDir);
	fn+=fnCapture;
	fpCapture=fopen(fn.c_str(), "rb");
	if (fpCapture) {
		std::string fn(fnBaseDir);
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

						CSearchInfo si = computer->DefaultSearchInfo(pos.BlackMove(),
																	 CSearchInfo::kNeedMove + CSearchInfo::kNeedValue,
																	 INFINITE_TIME, 0);
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
						std::string fn(fnBaseDir);
						fn+=sPVFile;
						std::cerr << "can't write to file " << fn << "\n";
						assert(0);
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
