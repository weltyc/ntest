// Copyright Chris Welty
//  All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.

// test source file
#include <cstring>
#include <fstream>
#include <string>
#include <iomanip>
#include <math.h>
#include "core/Moves.h"
#include "core/QPosition.h"
#include "core/Cache.h"
#include "core/BitBoardTest.h"
#include "core/options.h"
#include "core/NodeStats.h"
#include "core/CalcParams.h"
#include "core/MPCStats.h"

#include "SpeedTest.h"
#include "Evaluator.h"
#include "PlayerComputer.h"
#include "Pos2.h"

using namespace std;

extern int iff;

//////////////////////////////////////////
// Test parameters
//////////////////////////////////////////

void SetupStuff(CMPCStats*& mpcs, CEvaluator*& eval, int& iPruneMidgame, int& iPruneEndgame) {
    const int nLevels=0;

    iPruneEndgame=iPruneMidgame=nLevels;
    if (true) {	// J4 eval
    	string fn(fnBaseDir);
    	fn+="coefficients/mpcJ4_11.txt";
    	mpcs = new CMPCStats(fn.c_str(), 4);
    	eval = CEvaluator::FindEvaluator('J','4');
    }
}

int roundsign(int n) {
    if (n<-5)
    	return -1;
    else
    	return n>5;
}

// flags for TestMidgameSpeed
const int kPrintTestHeader=1;
const int kPrintScrzebra=2;
const int kPrintValues=4;
const int kOnlyFinalRound=8;

void TestMidgameSpeed(int nEmpty, CHeightInfo hi, int nGames, int flags) {
    double tRun, tTotal, geoMean;
    CNodeStats start, end, start1, end1;
    CCalcParamsFixedHeight pcp(hi);
    CCalcParams *pcpOld;
    CMVK mvk;
    int nResult, nCorrect;
    CComputerDefaults cd;

    // setup computer
    cd.booklevel=CComputerDefaults::kNoBook;
    cd.fsPrint=-1;
    CPlayerComputer computer(cd);
    pcpOld=computer.pcp;
    computer.pcp=&pcp;

    // initialize stats
    start.Read();
    geoMean=tTotal=0;
    nCorrect=0;

    // print header info
    if (flags&kPrintTestHeader) {
    	hi.SetNEmpty(nEmpty);
    	cout << "Testing " << (hi.IsKnownProbableSolve() ? "endgame" : "midgame") << " from " << nEmpty << " empties\n";
    	cout << "Height: " << hi << "\n";
    }
    else {
    	cout << hi << "\t" << nEmpty << "\t" << nGames << "\n";
    }

    // repeatedly test a game
    const std::vector<COsGame> sgTest = LoadTestGames();
    if (int(sgTest.size()) < nGames) {
    	std::cout << "insufficient games to test : wanted " << nGames << " but test games file only contains " << sgTest.size() << "\n";
    	return;
    }
    for (int iGame=0; iGame<nGames; iGame++) {
    	const COsGame& game=sgTest[iGame];
    	computer.Clear();

    	CQPosition pos = PositionFromEmpties(game, nEmpty);

    	if (flags&kPrintScrzebra) {
    		// print for scrzebra
    		char sBoard[NN+1], *pc;
    		pos.GetSBoard(sBoard);
    		for (pc=sBoard; *pc; pc++) {
    			switch(TextToValue(*pc)) {
    			case BLACK:
    				*pc='X';
    				break;
    			case WHITE:
    				*pc='O';
    				break;
    			default:
    				*pc='-';
    				break;
    			}
    		}
    		cout << sBoard << " " << (pos.BlackMove()?'X':'O') << " % Ntest position " << nEmpty << "." << game << "\n";
    		continue;
    	}

    	// get initial time
    	start1.Read();

    	// calc move and value
    	CSearchInfo si = computer.DefaultSearchInfo(pos.BlackMove(), CSearchInfo::kNeedMove + CSearchInfo::kNeedValue,
    												INFINITE_TIME, 0);
    	si.SetPrintLevel(0);
    	computer.GetChosen(si, pos, mvk, true);

    	// calc timing
    	end1.Read();
    	tRun=(end1-start1).Seconds();
    	geoMean+=log(tRun);
    	tTotal+=tRun;

    	// check value for WLD
    	nResult=int(game.Result().dResult);
    	if (!pos.BlackMove())
    		nResult=-nResult;
    	if (roundsign(mvk.value)==Sign(nResult))
    		nCorrect++;

    	// print info
    	if (flags&kPrintValues) printf("%d\t",mvk.value);
    	cerr << "s";

    	// temporary test: Check cache afterwards
    	// computer.VerifyCache(si.iCache);
    }

    // print results
    end.Read();
    tRun=(end-start).Seconds();
    if (flags&kPrintTestHeader) {
    	cout << "Run complete in " << tRun << "s; tTotal = " << tTotal << "; tAverage = " << tTotal/nGames;
    	cout << "\n";

    	cout << end-start << "\n";
    }
    else {
    	cout << nCorrect << "\t" << tTotal/nGames << "\n";
    }

    computer.pcp=pcpOld;
}

CQPosition PositionFromEmpties(const COsGame& game, int nEmpty) {
    // setup board
    CQPosition pos;
    pos.Initialize();
    size_t iMove;
    for (iMove=0; pos.NEmpty()>nEmpty && iMove<game.ml.size(); iMove++) {
    	pos.MakeMove(game.ml[iMove].mv);
    }
    return pos;
}

void TestMidgameSpeeds(int nEmpty, CHeightInfo hiMax, int nGames, int flags) {
    extern int iffMidgame;

    iffMidgame=4;
    CSearchInfo si(4,5,0,0,0,0,0,0);
    CHeightInfo hi(1,0,0);

    if (flags&kOnlyFinalRound)
    	hi=hiMax;

    while (hi<=hiMax) {
    	TestMidgameSpeed(nEmpty, hi, nGames, flags);
    	hi.NextRound(nEmpty, si);
    }
}

void TestLogStuff(int hMax) {
    CHeightInfo hi(hMax,0,false);
    CCalcParamsFixedHeight cp(hi);
    CCalcParams *pcpOld;
    CComputerDefaults cd;
    cd.booklevel=CComputerDefaults::kNoBook;
    CPlayerComputer computer(cd);
    pcpOld=computer.pcp;
    computer.pcp=&cp;
    CMVK mvk;


    CQPosition qpos("..................*O**....**O*....*OOO....OOOO......O...........", false);

    CSearchInfo si = computer.DefaultSearchInfo(qpos.BlackMove(), CSearchInfo::kNeedMove + CSearchInfo::kNeedValue,
    											INFINITE_TIME, 0);
    computer.GetChosen(si, qpos, mvk, true);
    computer.pcp=pcpOld;
}

void FFOTest() {
    double tRun, tTotal;
    CNodeStats start, end, start1, end1;
    CQPosition pos;
    CHeightInfo hi(0,0,false);
    CCalcParams* pcp=new CCalcParamsFixedNEmpty(hi);
    CMVK mvk;
    char buf[NN+1], c;
    string s;
    CComputerDefaults cd;

    std::ifstream ifs("ffotest.scr");

    // setup computer
    CPlayerComputer computer(cd);

    // initialize stats
    start.Read();
    tTotal=0;

    // print header info
    cout << "Testing FFO WLD solving\n";

    while (ifs>>buf>>c) {
    	// comment
    	getline(ifs,s);
    	cout << "\n" << s << "\n";

    	// setup board
    	pos.Initialize(buf,TextToValue(c)==BLACK);
    	//pos.Print();
    	computer.Clear();

    	// get initial time
    	start1.Read();

    	// calc move and value
    	CSearchInfo si = computer.DefaultSearchInfo(pos.BlackMove(), CSearchInfo::kNeedMove + CSearchInfo::kNeedValue,
    												INFINITE_TIME, 0);
    	computer.GetChosen(si, pos, mvk, true);

    	// calc timing
    	end1.Read();
    	tRun=(end1-start1).Seconds();
    	tTotal+=tRun;

    	// print info
    	cout << tRun << "s\t" << mvk << "\n";
    	cerr << "s";
    }

    // print results
    end.Read();
    tRun=(end-start).Seconds();
    cout << "Run complete in " << tRun << "s\n";
}

void TestMoveSpeed(int hSolveFrom, int nGames, char* sMode) {
    CHeightInfo hi(hSolveFrom-hSolverStart, 0,true);
    if (false) {
    	//FFOTest();
    	// if the mode contains an e it is endgame only
    	bool fEndgameOnly=sMode && strchr(sMode,'e');
    	//for (int i=10; i<=30; i++)
    	//	TestMidgameSpeed(i,nGames,fEndgameOnly);
    	TestMidgameSpeed(hSolveFrom, CHeightInfo(hSolveFrom,0,true), nGames, (sMode && strchr(sMode,'e'))?kOnlyFinalRound:0);
    }
    else {
    	const int hEndgame=22;
    	TestMidgameSpeed(hEndgame, CHeightInfo(hEndgame-hSolverStart,0,true), 12, kPrintTestHeader);
    	const int hMidgame=20;
    	TestMidgameSpeed(35, CHeightInfo(hMidgame,4,false), 12, kPrintTestHeader);
    }
}    
