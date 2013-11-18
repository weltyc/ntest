// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

// test source file


#include "Test.h"
#include "Moves.h"
#include "NodeStats.h"
#include "Evaluator.h"
#include "Player.h"
#include "QPosition.h"
#include <math.h>
#include "MPCStats.h"
#include "options.h"
#include "Cache.h"
#include "Pos2All.h"
#include "Games.h"
#include "Timing.h"
#include <fstream>
#include <string>
#include <iomanip>

#if defined(_DEBUG) && defined(_MSC_VER)
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define new new(_NORMAL_BLOCK, __FILE__, __LINE__)
#endif


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

// Return a vector of games from the test games file, which is located at working directory/TestGames.ggf
std::vector<COsGame> LoadTestGames() {
	std::vector<COsGame> sgTest;

	string fn(fnBaseDir);
	fn+="/TestGames.ggf";
	std::ifstream is(fn.c_str());
	if (!is){
		std::cerr << "Can't open test games file " << fn << "\n";
		std::cout << "Can't open test games file " << fn << "\n";
	}
	else {
		COsGame game;
		while (is >> game) {
			if (game.Result().status==COsResult::kNormalEnd) {
				sgTest.push_back(game);
			}
		}
		if (sgTest.empty()) {
			std::cerr << "Can't load any test games \n";
			std::cout << "Can't load any test games \n";
		}
	}
	return sgTest;
}

const int nReps=1000;

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
	fPrintTimeUsed=false;
	start.Read();
	geoMean=tTotal=0;
	nCorrect=0;

	// print header info
	if (flags&kPrintTestHeader) {
		cout << "Testing midgame from " << nEmpty << " empties\n";
		cout << hi << "\n";
	}
	else {
		cout << hi << "\t" << nEmpty << "\t" << nGames << "\n";
	}

	// repeatedly test a game
	const std::vector<COsGame> sgTest = LoadTestGames();
	if (sgTest.size() < nGames) {
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
			cout << sBoard << " " << (fBlackMove_?'X':'O') << " % Ntest position " << nEmpty << "." << game << "\n";
			continue;
		}

		// get initial time
		start1.Read();

		// calc move and value
		CSearchInfo si=computer.DefaultSearchInfo(pos.BlackMove(),CSearchInfo::kNeedMove+CSearchInfo::kNeedValue,1e6, 0);
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

	CSearchInfo si=computer.DefaultSearchInfo(qpos.BlackMove(),CSearchInfo::kNeedMove+CSearchInfo::kNeedValue,1e6,0);
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
	fPrintTimeUsed=false;
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
		CSearchInfo si=computer.DefaultSearchInfo(pos.BlackMove(),CSearchInfo::kNeedMove+CSearchInfo::kNeedValue,1e6,0);
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

const int nEndgames=113;

struct TSolverPosition {
	char board[65];
	int nResultNoEmpties;
};

TSolverPosition bds[nEndgames] = {
// some trivial positions:
{"wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww..",62},
{"wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwb.",64},
{"wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwbw..",64},
{"wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwbww.",56},
{"wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwbw...",63},
{"wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwbwbw....",49},
{"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbwbw...",-64},
{"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbwb...",-63},
{"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbwb..",-64},
{"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbwb.",-58},
{"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbwbbbbbbbwbbbbbwb.",-54},
{"wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwbwwwwwwwbwwwwbbb.",64},

// one added by me:
{"wwwwwwwbwwbbbww.wbwbwbw.wbbwbbbbwbwbbwbwwwbbbbwww.bbbbw..bbbbbbw",-10},

// Harder positions
{"..wwwww.b.wwbw..bbwbbwwwbwbbbwwwbbwbbwwwbbbwbwww..bbwbw....bbbbw",-12},
{"wbbw.b...wwbwww.wwwwbwwwwwwbwbbbwwwwbwb.wwwwwbbb..wwbbb..wwwww..",-6},
{"..w.bb.bw.wbbbbbwwwwbbbbwbwwwwbbwbbbwwbwwwbbbbbww.wbbbbw......bw",28},
{"bwwwwww..bwwwww..bbbwwww.bbbbbww.bbbbwww.bbbbbww..bbbbw...bbbbbw",-8},
{"b.wbw....bwwww.bbbbbbbbbbbbbbbbbbbwbbbbbbbbwwbbbb.wwww....w.bbbb",-4},
{"..bwb..b.bbwwwwwbbbwbbwbbwwbbbwbbwwwbwbbb.wwwwbbb.wwwb.b...wbbb.",-2},
{"...bwwbb..bbbwwb.bbbbbwwbbwbbbb.bbbwbbbb.bbbwwbb..bbbbbb..bbbbwb",12},
{"..bbbbwb..bbbwbb.bbwwbbbwwwwbbbb.wwbbbbb.wwbbwbb.bbwww...bwwwww.",-12},
{"..b.....wwbb.b..wwwbbbbbbwwwbbwwbbwbbwwwbbbwwwwwbwbbwb..bwwwwwww",4},
{"b.w.b...bb.bbw.wbbbbbbwwbbbbbwwwbwwwwwwwbwbwwww.bbwwww.b..wwwww.",-22},
{"b..b....b.bbbb.bbbwwwwbbbbbbwbbbbwbwbbbbbwbwbwbbbwwwww..bwwwww..",-12},
{"wbbb.ww.wbbbbw.bwbbwwb.bwbbwwbwbwwbwwww.wwbwwwwwwbwwww....ww..w.",8},
{"bbbbbbb...wwww.bbbbbbwwb.bwbwwwbbbbwwwwb.bbbwwwb..wwbww...wwwww.",4},
{"b.w.b...bb.bbw.wbbbbbbwwbbbbbwwwbwwwwwwwbwbwwww.bbwwww.b..wwwww.",-22},
{"bbbbbbb...wwww.bbbbbbwwb.bwbwwwbbbbwwwwb.bbbwwwb..wwbww...wwwww.",4},
{"b..b..w.bbbbbw.bbwbwwwbbbwbbwbbbbwbwbbbbbwbbbwbbbbbbww..b.b.ww..",-12},
{"b..b....b.bbbb.bbbwwwwbbbbbbwbbbbwbwbbbbbwbwbwbbbwwwww..bwwwww..",-12},
{"...bbbb...bbbb.wbbbbbww.wbwbwww.wbbbbwwwbbbbbbww.bbbbbbw.wwwwww.",20},
{"..bbb.....bbbw.wwwwwbwwwbwwbbbbwwwbwwbbw.bwwbwbwb.wwbbbw..wwwwbw",-8},
{"w..bbbb.bbbbbbb.wbwbwwbbwwbbwbbbwwbbwbbbw.wwwwbb..wwww.b..wwww..",8},
{"..bbbbb.wwbbbbb..wwbbbbwbbwwwbbwbbwwwbbwbbbbbwbww.wwwwww.....w.w",4},
{".bbb....w.bbbb.wwbbbbbbbwbbwbbbbwbwbwwbbwwbbbbwbw.bbbwww...bww.w",2},
{"..wwwww.bbwwww.bbbbwwwbbbwbbwbwbbwbbwbbbbbwbbbbbb.wwww......www.",-12},
{"w..bbb..bbbbbb..wbwbwbbbwbbwwbbbwbwbwbbbwbbwwwbb.bwwww.b..wwww..",8},
{".bbbbbbb..wwbwb.wwwwwbww.wbwbwwb.bwbbwbb.wbbbbbb...bbbbb..wwwwww",0},
{"..bbbbbw..bbbbww..bbbwbw..bbwbbw.wbwwbbwwwbbwwwwwwbbbb.bbbbbbb..",6},
{".wwwww...wwbbbb.wwwwbbbbwwwwbwb.wwwwwww.wbwwwwwwbbbwww..wwww..w.",-6},
{"b.w.b...bb.bbb..bbbwwwwwbbbbbwwwbwbbwwbwbbwwbwwwbwwwwwwww....wbw",-2},
{"...bbbb...bbbb.wbbbbbww.wbwbwww.wbbbbwwwbbbbbbww.bbbbbbw.wwwwww.",20},
{".wbbbb.w..bbbb.w.wbwwwbw.bbwwwww.bbwwwbw.bwbwbww.bbbbww.wbwwwww.",14},
{"..wbbw.w..wwwwwbwwwwwwbbwwwbwbwbwwbwbwwbwbbbwbbbw.bbbbbb..bb....",8},
{"..bbbbb..bbbbbbbbbbwbbbbwbbbwbbbbbbbbwbb.bbbwww..bbbbwww....bbw.",12},
{"..w..bww...wbbbb..wwbbbwbbbbbbwwbbbbwbwwbwbbwwwwbbwwwww.bbbbb.w.",-12},
{".wwwww..b.wbbw.w.bbwwbwwwwbbwwb.wwwbwwbbwwbwbwbb..bbwbb...bbbbbb",14},
{"....w.....wwww.wwwwwbbbbwwwbwbbbwwwbwwbbwwbwwbwb.bbbbbbw.wwwwwww",-10},
{".ww.b.....wwbb..wbbwwbbbwbbbwwbbwbbbbbwbwbbbbwbb.bbbwb.b.bbbbbbb",12},
{"..wbbbbww.bbwwwwwbbbwwwwwbbwwbwwwwwwwwwww.wbbwwww.w..www...bbb..",0},
{".wbbbb.w..bbbb.w.wbwwwbw.bbwwwww.bbwwwbw.bwbwbww.bbbbww.wbwwwww.",14},
{"..bbbb..w.bww...wwbbww..wbbwbwwwwbbbwwwwwbbbbwbw.bbwbbbw.bbbbbbw",-8},
{".bb.w....bbbww.bwbwbbwbbwwbwwbbbwwbwwwb.wwwbbwww.wwwwwww..bwwww.",-8},
{".....w....wwwwwwbbwbbbwb.bwwwwwbbbbwwbwbbbwbbwbbbbbbbbbbwbbbbb..",2},
{"w..bww..bwwbbbbbbbbwbbbbbbbbwbbb..bwwwb...wwbwww.wwwwwww.wwwwww.",-2},
{"wwwwwbw...wwwww.bbwbbbbb.bbwwbbbbbbbbbbb.bwwwbbbb.wwww....wwwww.",18},
{"..w.wb..wwbwww..wwbbwbw.wbbwbbw.wbbbwbwwwwbwwwbwwbbbbbbwb.bb..bw",8},
{"..wbbw..wwwbbbbbwwbbbbbbwwwbbbwbwwwbwwww.wbbwb.w.bbbbw...b.wwww.",-6},
{"..wbbb.....b.bwwwwbbwbwwwwbbwwww.wbwwbww.wwbbwwb.wwwwwwb.wwwwwww",-10},
{"b.wwwww.bbwwwwb.bwbwwbbb.bwbbwbb.wbwbbbbw.bwbbbw...wwbbw..bw.wbw",-2},
{"..bwww....bbbb...wbwbb.wwwbwwwwwwwbbwbwwwwbbbwbwwwwbbbbw..wbbbbw",-6},
{"bbbbbb...bwbbbbbbbbwwbbwbbwbbbww.bwbbbw..bwbwbw...wwbwb...wwwwwb",2},
{"w.w.....w.wwwb..wwwwbwwbbwbbbwwbbwbwwbwbbbwwbbbbbwwbww.bwwwwww..",2},
{"....b.wb..bbbbbb..bbbbbb..bbbbw.wwbbbwwwwbbbbwwwbbbwwwwwbwwwwwww",0},
{".bbbbbb.b.bbbb.bbbwwwwbbbbwwbwwbbbwbwbwb.wbwwwbbw.wwww.b...wbw..",10},
{".wwwwww...wbbw..w.bwwbw..bbbwbwwbbbwbbwwbbwbbbbw.wbbbbbw..wbbbbw",-6},
{"..wbbw...wwwwwbbbbwbwwwbbbbwbbwbbbbbbbwbbbbbbwbb..bbbb.b..bbbb..",-8},
{"..wbbw..wwwbbbbbwwbbbbbbwwwbbbwbwwwbwwww.wbbwb.w.bbbbw...b.wwww.",-6},
{"b..www...bwwwwwwbwbbbbwwbwbbbwbwbbbbbbbwbbbbbbbwb..bbbbw...w..bw",4},
{".b.www....bbbb...wwbbb.wwwwwbwwwwwwbwbwwwwbbbwbwwwwbbbbw..wbbbbw",-6},
{".bbbbb...wwwwbbbwwwbwbb.bwbwwbbwbbwbwbbwbbbbbbww...bbbww....wbbw",18},
{"..bbbb.b..bwbbb.bbbbbbbbbbbbbbbbbbbbwbbbwbbbbbbb..bbbb...wwwwww.",12},
{".wbw.....bbbwb..bwbwbw...wwwwwwbwwwwbwbbwwwwwbbbbwbwbbbb.bwwwwwb",0},
{".wwwww....wbbw..bbbbbww.bbbwbww.bbbwwbwwbbbbwbww.wbbbbbw..bbbbbw",2},
{"wwwbbbbwbbbbbbbwwbwbwwww.wbwwwbwwwwwwbwwb.bbbwww...bbww......bw.",-2},
{".b.wwww...bbbw...wwbwb.wwwwwbbb.wwwbwbbbwwbbbwbbwwwbbbbb..wbbbbw",-6},
{"..b.b.w.w.bbbb.b.bbbwbbbbbwbbwbbbwwwbwwbbwwwwbwbb.wwwwbb..wwww.b",0},
{".wwwww...bbbbw.bbwbwwwbbbwwbwbbbbwbwbbb.wwwbwb.w.wwbbw...wwwwww.",-4},
{"..bbbw...bbbbb..bwwbbbbbbbwwbbbbbwbbwwwwbbwbwwwwb.bwbww..b.wwww.",6},
{"..bbbbb.w.bbwb..wbbwbww.bbbbwww.bwwwwww.bwwwwwwwb.wwwww..bwwwwww",-6},
{"..w.wb....wwwb.wbbwwwbwwbwwwbwwwbbbwwbwwwwwbwwbw..wwbbbb..wwwwww",-14},
{"..bbbbbbw.bbbb.bwwbwbwwbwbwbwwwbwwbbwbwbwwwwwwbb...w.bwb....bbww",-22},
{"...bw....bbwwb.bwwbwwbbbwwwbwbbb.wwbbbbbbwwbbbwb..wwwwwb.bwwwbbb",-8},
{"..wbwwwbwbbbbwwbwbbbwbwbwwwwbwwbwbwbwbwbwwbwwwbbw..bww.b.....w..",-10},
{"..bbw..w..bwwwbbwwbbwwwbwbbwwwwwwbwwwwwwwwwwwww.wbwww...wwwwww..",18},
{"..wwwww..bbbww.wbbbwwwwwbbbwwwbwbbwbwwwwbwbbbwwwbbbbbb..b.b...b.",14},
{".bbbbbb...bbwb..wwbwbwwbwwwbwwwwwwwwbbwb.wwwbbw..wwbwww...bwwwwb",-4},
{".bbb..wwb.bwbwbbwbwbwwbbwbbwwwbwwbwwbw..wwwwwww.wbwww...wwwwww..",18},
{"..wwww....wwwwb.bbwwwbbwbwwwbwbwwwwwwwbbbbbwbwbw.bbbww..bwwwww..",6},
{".bbbbbbb.bbw.wb.wbbwwbwbwbbbbw.wwbwbbww.wbbwwb..wbbbbbb..wwwww..",-1},
{"wbbbwb...bbbbw..wbwwwwwbwwbwwwbbwwwwwbwbwwwbwwbb..wbww.b..wwww..",2},
{"..wbb...bbwbbb..bbbwwwbwbbwbbbbbbbbwbwbb.bbbwbbbwwbwbbb..wwbbw..",-2},
{"bbbbbbb..bwwwb.w.wbbbbbw.wwbbwbw.wwwwbbw..wwbwbw...wbbbw.wwwwwww",2},
{"b.w..w.b.bwwwwww.bbwbbwwbbbbbwbwwbwwwwww..bbbbbw..bbbbbw..bbbbbw",-2},
{".bbbbb..b.bbbbw.bbwbbwb.bwwwbbbbbwwbwbbwbwbbbbb.bbbwww..bb...www",-2},
{"wwwwwww..wbbbw.w.wwbbbbw.wbwbbbwwwwwbwwwb.wwbwbw..wwbbbw...wb.bw",12},
{".bbbwww..bbwwwwwwbwwwwwwwwbbbwwwwbwbbbwwwwbbwbbbw.bbb.....bbw...",-12},
{"wwwwwww..wbbbw.w.wwbbbbw.wbwbbbwwwwwbwwwb.wwbwbw..wwbbbw...wb.bw",12},
{"..w.wb..w.wwww...wbbwwbb.bwbbbwbwbbbbwwbwwwbbbbbw.bwbbbb.bbbbbwb",-2},
{"..ww....w.www...wwwbbwbbwwbbbbwbwbwwbbwwbbwwwbbbb.bwwwbb.bbbbwwb",2},
{".wwwww..b.wbbw..bwbwbbw.bbbwbwwwbbbbwwwwbbbbww.b.bbbbbw...wwwwww",-2},
{"...wbb..bb.wbbb.bbbbwwwwbbbbbwwwbbwbwwww.wbwbwwww.bbbb...wwwwwww",4},
{"..wwww.bbbwwwwb.bbbwwbwwwbbbbwbbbbbbbww.bbbwbw.w.bbw.w...bbb.www",-12},
{"w.wbbbbw.wbbbbb.bbwbbwb..bwwbwbwbbbwbbbwwbbbbbbw..bbbbb....wwww.",6},
{"..bb.b....bbbb.bwwwwwwbb.bwbwbbbbbbbbbbbbbbbbbwbb.wwwwwb..bwwwwb",6},
{"..wwwb..b.wwbb..bbbbwbbbbbbwbbbbbbwbwwbb.bwbwbwww.bbbbw...wbbbbw",6},
{"bbbbbw..bwwb.w..bbbwww..bbwwwww.bwwbwbw.bwbbwwbww.bbwbb..wwbbbbw",-25},
{"..bbbbb.w.bbbb.bwbbbbbbbwbbbbbwbwbwbwww.b.wwwww..bwwww...bbbbbbb",-25},
{"w.wbbbbw.wbbbbb.bbwbbwb..bwwbwbwbbbwbbbwwbbbbbbw..bbbbb....wwww.",6},
{"..wbbbbw..bwwwwwwbwbwbwwbbbwwwbww.wbwbww.wbwbwww..bbwww..bbbbw..",2},
{"..bbbb....bbbb..wwwwwbwbwwwwwwbbwwwbwwbbwwbwbwb.wbbbbbbw...bbbbw",33},
{".bbbbbb.wwwwbw..wwwbwbw.wbwwwwb.wbbbbbbbwwwwwww.w.wbww....wbwwww",-20},
{".wwwwww...bbbb..b.bbwbbbwwbbwbb.bwbbwbb.bwwbbbb.wwwwbwb..bbbbbbb",-4},

};

#define PRINT_DETAILS 0	// 0 = 1-line output per position, 1=print board and other info
#if PRINT_DETAILS
#define PD(x) x
#else
#define PD(x)
#endif

void TestEndgameAccuracy(){
	int i;
	CNodeStats start,end, start1,end1,delta1;
	CValue value;

	// create computer
	CComputerDefaults cd;
	cd.booklevel=CComputerDefaults::kNoBook;
	CPlayerComputer computer(cd);

	fPrintTimeUsed=false;
	start.Read();

//	for (i=0; i<nEndgames; i++) {
	for (i=15; i<=16; i++) {
		// todo remove the next section which is here for debugging
		if (i==16) {
			exit(0);
		}
		cout << " Testing Tree debug\n";
		extern bool fPrintTree;
		fPrintTree = true;
		::nBBFlips=0;


		bool fBlackMove=false;

		Initialize(bds[i].board, fBlackMove);
		computer.Clear();
		PD(Print());

		start1.Read();
		
		CMVK mvk;
		CSearchInfo si=computer.DefaultSearchInfo(fBlackMove, CSearchInfo::kNeedValue+CSearchInfo::kNeedMove, 1e6, 0);
		computer.GetChosen(si,CQPosition(bb,fBlackMove_),mvk, true);
		value=mvk.value/kStoneValue;
		end1.Read();
		delta1=end1-start1;

		if (value==bds[i].nResultNoEmpties)
			cout << "    ";
		else {
			QSSERT(0);
			cout << "ERR ";
		}
		cout << setw(2) << i;
		cout << ": Value: " << setw(3) << value;
		cout << ". Nodes: " << setw(6) << (int)delta1.Nodes();
		cout << ". Board: " << bds[i].board << "\n";
		PD(cout << end1-start1 << "\n");
		PD(printf("-------------------------------------------\n"));
	}

	end.Read();
	cout << end-start << "\n";
}


void TestMoveSpeed(int hSolveFrom, int nGames, char* sMode) {
	TestEndgameAccuracy();
	CHeightInfo hi(hSolveFrom-hSolverStart, 0,true);
	if (false) {
		//FFOTest();
		// if the mode contains an e it is endgame only
		bool fEndgameOnly=sMode && strchr(sMode,'e');
		//for (int i=10; i<=30; i++)
		//	TestMidgameSpeed(i,nGames,fEndgameOnly);
		TestMidgameSpeed(hSolveFrom, CHeightInfo(hSolveFrom,0,true), nGames, (sMode && strchr(sMode,'e'))?kOnlyFinalRound:0);
	}
	else if (false) {
		TestEndgameAccuracy();
	}
	else {
		const int hEndgame=22;
		TestMidgameSpeed(hEndgame, CHeightInfo(hEndgame-hSolverStart,0,true), 12, kPrintTestHeader);
		const int hMidgame=20;
		TestMidgameSpeed(35, CHeightInfo(hMidgame,4,false), 12, kPrintTestHeader);
	}
}	