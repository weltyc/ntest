#include "stdafx.h"
#include "test.h"

int solve1(u64 mover, u64 enemy, int sq);
int solve2(int alpha, int beta, u64 mover, u64 enemy, int sq1, int sq2);
int solveN(int alpha, int beta, u64 mover, u64 enemy, EndgameSearch* search, bool hasPassed);

static void testSolve1Flip() {
	// mover has 1 piece, and can flip 1 disk. Loses 3-61 = -58
	const u64 mover = 0x4;
	const int sq = 0;
	const u64 enemy = ~(mover | mask(sq));
	assertEquals(-58, solve1(mover, enemy, sq));

	assertEquals(64, solve1(0x0FFFFFFFFFFFFFFFULL, 0x70ULL<<56, 63));
}

static void testSolve1Pass() {
	// enemy has 1 piece, and can flip 1 disk. Mover wins 61-3 = 58, after a pass.
	const u64 mover = 0x4;
	const int sq = 0;
	const u64 enemy = ~(mover | mask(sq));
	assertEquals(-58, solve1(mover, enemy, sq));
}

static void testSolve1() {
	for (int sq = 0; sq<64; sq++) {
		// mover has no pieces, mover loses 0-63
		const u64 mover = 0;
		const u64 enemy = ~mask(sq);
		assertEquals(-63, solve1(mover, enemy, sq));
	}
	for (int sq = 0; sq<64; sq++) {
		// enemy has no pieces, mover wins 63-0
		const u64 enemy = 0;
		const u64 mover = ~mask(sq);
		assertEquals(63, solve1(mover, enemy, sq));
	}
	testSolve1Flip();
	testSolve1Pass();
}

static void testSolve2Done() {
	const u64 white = 0;
	const u64 black = ~0x3ULL;
	assertEquals(62, solve2(-64, 64, black, white, 0, 1));
	assertEquals(-62, solve2(-64, 64, white, black, 0, 1));
}

static void testSolve2Flip() {
	const u64 white = 8;
	const u64 black = ~0xBULL;
	assertEquals(-64, solve2(-64, 64, white, black, 0, 1));
	assertEquals(-64, solve2(-64, 64, white, black, 1, 0));
	assertEquals(64, solve2(-64, 64, black, white, 0, 1));
	assertEquals(64, solve2(-64, 64, black, white, 1, 0));
}

static void testSolveN1Flip() {
	// mover has 1 piece, and can flip 1 disk. Loses 3-61 = -58
	const u64 mover = 0x4;
	const int sq = 0;
	const u64 enemy = ~(mover | mask(sq));
	EndgameSearch search;
	search.init(mover, enemy);
	search.validate();

	assertEquals(-58, solveN(-64, 64, mover, enemy, &search, false));

	assertEquals(64, solveNValue(-64, 64, 0x0FFFFFFFFFFFFFFFULL, 0x70ULL<<56));

}

static void compareSolveNToSolve1(u64 mover, u64 enemy, int sq) {
	int result1 = solve1(mover, enemy, sq);
	const int resultN = solveNValue(-64, 64, mover, enemy);
	if (result1!=resultN) {
		printBoard(mover, enemy);
		std::cout << "black to move\n";
		std::cout << " Black: " << bitCount(mover) << "  White: " << bitCount(enemy) << "  Empty: " << bitCount(~(mover|enemy)) << "\n";
		solveNValue(-64, 64, mover, enemy);
	}
	assertEquals(result1, resultN);
}

static void compareSolveNToSolve2(u64 mover, u64 enemy, int sq1, int sq2) {
	EndgameSearch search;
	int result1 = solve2(-64, 64, mover, enemy, sq1, sq2);
	search.init(mover, enemy);
	int resultN = solveN(-64, 64, mover, enemy, &search, false);
	if (result1!=resultN) {
		printBoard(mover, enemy);
		std::cout << "black to move\n";
		solveN(-64, 64, mover, enemy, &search, false);
		solve2(-64, 64, mover, enemy, sq1, sq2);
	}
	assertEquals(result1, resultN);
}

static void testSolveN() {
	testSolveN1Flip();

	srand(0);

	for (int i=0 ; i<1000; i++) {
		// compare to solve1
		u64 mover = rand64();
		int sq = rand()&63;
		u64 sqMask = mask(sq);
		mover&=~sqMask;
		u64 enemy = ~(sqMask | mover);
		compareSolveNToSolve1(mover, enemy, sq);
		compareSolveNToSolve1(enemy, mover, sq);

		// make sure we pass
		u64 n = neighbors[sq];
		compareSolveNToSolve1(mover | n, enemy &~n, sq);
		compareSolveNToSolve1(enemy | n, mover &~n, sq);

		// compare to solve2
		int sq2 = rand()&63;
		if (sq2==sq) {
			sq2=sq2^1;
		}
		const u64 sq2Mask = mask(sq2);
		mover&=~sq2Mask;
		enemy&=~sq2Mask;
		compareSolveNToSolve2(mover, enemy, sq, sq2);
		compareSolveNToSolve2(enemy, mover, sq, sq2);
	}
}

void testSolve2() {
	testSolve2Done();
	testSolve2Flip();
}

class SolveTest {
public:
	u64 mover;
	u64 enemy;
	int expected;	// expected value with winner does NOT get empties
	std::string boardText;

	SolveTest(std::istream& in) {
		in >> boardText;
		in >> expected;

		// calculate mover and enemy from board text
		mover=0;
		enemy=0;

		assertEquals(64, boardText.size());
		for (int i=0; i<64; i++) {
			char c = boardText.at(i);
			u64 m = mask(i);
			switch(c) {
			case 'b':
				enemy|=m;
				break;
			case 'w':
				mover|=m;
				break;
			case '.':
				break;
			default:
				{
					std::ostringstream s;
					s << "unknown character in input: " << c;
					fail(s);
				}
			}
		}
	}

	void solve(bool wldOnly) const {
		const int alpha = wldOnly ? -1 : -64;
		const int beta = wldOnly ? 1 : 64;
		int actual = solveResult(alpha, beta);
		if (!resultOk(alpha, beta, expected, actual)) {
			printBoard(mover, enemy);
			std::ostringstream os;
			os << "Bad result (" << alpha << "," << beta << ") : expected " << expected << " but was " << actual;
			fail(os);
		}
	}

	int solveResult(int alpha, int beta) const { 
		return solveNValue(alpha, beta, mover, enemy);
	}
};

static std::vector<SolveTest> getSolverTests(int depth, bool withResults) {
	std::vector<SolveTest> tests;
	std::ostringstream os;
	if (withResults) {
		os << "resource/solver" << depth << ".txt";
	}
	else {
		os << "resource/solver" << depth << "Positions.txt";
	}

	std::ifstream in(os.str().c_str());
	if (!in.is_open()) {
		fail(("unable to find solver positions file " + os.str()).c_str());
	}
	while(in.good()) {
		std::string line;
		std::getline(in, line);
		if (!line.empty()) {
			std::istringstream inLine(line);
			tests.push_back(SolveTest(inLine));
		}
	}
	in.close();
	return tests;
}

void solveTests(const std::vector<SolveTest>& tests, bool wldOnly) {
	for (u32 i=0; i<tests.size(); i++) {
		tests.at(i).solve(wldOnly);
	}
}

static void testSolveJcw(int depth) {
	std::vector<SolveTest> tests = getSolverTests(depth, true);
	solveTests(tests, false);
	solveTests(tests, true);
}

void timeSolves(int nIterations, int depth, bool wldOnly) {
	std::vector<SolveTest> tests = getSolverTests(depth, true);

	tests.at(0).solve(wldOnly); // make sure code is loaded into memory

	const clock_t start(clock());

	for (int count = 0; count< nIterations; count++) {
		solveTests(tests, wldOnly);
	}

	const clock_t end(clock());
	const clock_t dt = end-start;
	const double ds = dt/(double)CLOCKS_PER_SEC;

	std::cout << "Time solve: " <<  ds << "s"
		<< " with " << eng(nSNodesQuick, 5) << " nodes"
		<< " = " << eng(nSNodesQuick/ds) << "n/s"
		<< " or " << eng(ds/nSNodesQuick) << "s/n"
		<< std::endl;
}

extern u64 constructParity(u64 empties);

void testConstructParity() {
	assertHexEquals(0x0F0F0F0F, constructParity(1));
}

void testOrderMoves() {
	//int orderMoves(int moveScores[], u64 mover, u64 enemy, u64 parity, Search* search);
	//Empty*  moveEmpty(Search* search, int moveScore);

	//// 4 empties. first quadrant: X-square and corner; second quadrant: x-square; third quadrant: corner with no mobility
	//// should put them in order: 1st quadrant corner, 2nd quadrant x-square, 1st quadrant x-square
	//// based on corner > parity > x-square
	//const u64 empty = mask(000)|mask(011)|mask(016)|mask(061);
	//const u64 enemy = empty << 8;
	//const u64 mover = ~(enemy | empty);
	//assertHexEquals(mask(000)|mask(011)|mask(016), mobility(mover, enemy));

	//Search search;
	//search.constructEmpties(mover, enemy);
	//int moveScores[32];
	//int nMoves = orderMoves(moveScores, mover, enemy, constructParity(empty), &search);
	//assertEquals(3, nMoves);
	//assertEquals(000, moveEmpty(&search, moveScores[0])->sq);
	//assertEquals(016, moveEmpty(&search, moveScores[1])->sq);
	//assertEquals(011, moveEmpty(&search, moveScores[2])->sq);
}

void generateSolverTestPositions(int depth) {
	std::vector<SolveTest> tests = getSolverTests(depth, false);
	std::cerr << "generating " << tests.size() << " test positions\n";
	for (u32 i=0; i<tests.size(); i++) {
		const int result = tests.at(i).solveResult(-64, 64);
		std::cout << tests.at(i).boardText << " " << result << "\n";
	}
}

static void testResultOk() {
	assertTrue(resultOk(-1, 1, -12, -2));
}

void testSolve() {
	getSolverTests(12, true).at(86).solve(false);

	testConstructParity();
	testSolve1();
	testSolve2();
	testSolveN();
	testResultOk();
	testSolveJcw(12);
	testOrderMoves();
}
