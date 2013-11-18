#include <vector>
#include <iomanip>
#include "n64/test.h"
#include "core/Cache.h"
#include "core/Book.h"
#include "core/MPCStats.h"
#include "core/BitBoardTest.h"
#include "SpeedTest.h"
#include "Search.h"
#include "Evaluator.h"
#include "PlayerComputer.h"


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

const int printDetails = 0; // 1 = 1-line output per position, 2=print board and other info

void TestEndgameAccuracy(){
	int i;
	CNodeStats start,end, start1,end1,delta1;
	CValue value;

	// create computer
	CComputerDefaults cd;
	cd.booklevel=CComputerDefaults::kNoBook;
	CPlayerComputer computer(cd);

	start.Read();

	for (i=0; i<nEndgames; i++) {
		::nBBFlips=0;


		bool fBlackMove=false;

		Pos2 pos2;
		pos2.Initialize(bds[i].board, fBlackMove);
		computer.Clear();
		if (printDetails > 1) {
			pos2.Print();
		}

		start1.Read();

		CMVK mvk;
		CSearchInfo si=computer.DefaultSearchInfo(fBlackMove, CSearchInfo::kNeedValue+CSearchInfo::kNeedMove, 1e6, 0);
		CQPosition qpos(pos2.GetBB(), pos2.BlackMove());
		computer.GetChosen(si,qpos,mvk, true);
		value=mvk.value/kStoneValue;
		end1.Read();
		delta1=end1-start1;

		assertEquals(bds[i].nResultNoEmpties, value);
		if (printDetails) {
			std::cout << std::setw(2) << i;
			std::cout << ": Value: " << std::setw(3) << value;
			std::cout << ". Nodes: " << std::setw(6) << (int)delta1.Nodes();
			std::cout << ". Board: " << bds[i].board << "\n";
			if (printDetails > 1) {
				std::cout << end1-start1 << "\n";
				std::cout << "-------------------------------------------\n";
			}
		}
	}

	end.Read();
	if (printDetails) {
		std::cout << end-start << "\n";
	}
}

std::vector<CMoveValue> createMoves(CQPosition testPosition) {
    std::vector<CMoveValue> mvs;
    CMoves moves;
    testPosition.CalcMoves(moves);
    CMove move;
    while (moves.GetNext(move)) {
        mvs.push_back(CMoveValue(move, (short)0));
    }
    return mvs;
}

void TestIterativeValue(int depth) {
	// setup book and cache
	CCache acache(2);
	cache = &acache;
	const int nEmpty = 22;
	CBook* oldBook = book;
	book = NULL;
	InitializeCache();
	SetBookHeights(nEmpty);
	mpcs = CMPCStats::GetMPCStats('J','A',5);

	// testing
	const COsGame osGame = LoadTestGames().at(0);
	const CQPosition testPosition = PositionFromEmpties(osGame, nEmpty);
	std::vector<CMoveValue> mvs = createMoves(testPosition);
	Pos2 pos2;
	pos2.Initialize(testPosition.BitBoard(), testPosition.BlackMove());
	u4 nValued=0;
	std::vector<CMoveValue> mvsEvaluated;
	ValueMulti(pos2, depth, -kInfinity, kInfinity, 4, 1, mvs, false, false, mvsEvaluated, nValued);
//	cout << " nValued = " << nValued << "\n";
//	cout << " mvsEvaluated = \n";
//	for (int i=0; i<mvsEvaluated.size(); i++) {
//		CMoveValue mv = mvsEvaluated.at(i);
//		cout << "new CMoveValue(" << mv.move << "," << mv.value << "),\n";
//	}
//	cout << "\n";

	// tear down book and cache
	book = oldBook;
	cache = NULL;
}

void TestIterativeValue() {
	TestIterativeValue(1);
	TestIterativeValue(2);
	TestIterativeValue(3);
	TestIterativeValue(4);
	TestIterativeValue(5);
}


void TestStaticValue() {
	std::vector<COsGame> testGames = LoadTestGames();
	evaluator = CEvaluator::FindEvaluator('J','A');
	const COsMoveList& ml = testGames[0].ml;
	for (int iff = 0; iff <=1; iff++) {
		Pos2 pos2;
		pos2.InitializeToStartPosition();
		for (u4 i=0; i<ml.size(); i++) {
			const COsMove& mv = ml.at(i).mv;
			int square = Square(mv.Row(), mv.Col());
			pos2.MakeMoveBB(square);
		}
	}
}

void TestSearch() {
	TestStaticValue();
	TestIterativeValue();
	TestEndgameAccuracy();
}