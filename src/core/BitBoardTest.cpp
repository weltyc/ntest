#include "../n64/test.h"
#include "../n64/qssert.h"
#include "BitBoard.h"
#include "Moves.h"
#include "QPosition.h"

#include "BitBoardTest.h"

class CBitBoardTest : public CBitBoard {
public:
	CBitBoardTest(const CBitBoard& bb) : CBitBoard(bb) {};
	int CalcMobilityOld(u4& nMovesPlayer, u4& nMovesOpponent) const;
};

//! Old, slower mobility calculator
//!
//! \param[out] nMovesPlayer number of moves for the person to move
//! \param[out] nMovesOpponent number of moves for the opponent
//! \return pass code (0=no pass, 1=player to move passes, 2=both players must pass, game over)
int CBitBoardTest::CalcMobilityOld(u4& nMovesPlayer, u4& nMovesOpponent) const {
	nMovesPlayer = u4(bitCount(mobility(mover, getEnemy())));
	nMovesOpponent = u4(bitCount(mobility(getEnemy(), mover)));
	return nMovesPlayer?0:nMovesOpponent?1:2;
}

static void TestCalcMobilityMatches(const CBitBoard bbTest) {
	for (int iRef=0; iRef<8; iRef++) {
		CBitBoardTest bb=bbTest.Symmetry(iRef);
		int passOld, passNew;
		u4 nmpOld, nmoOld, nmpNew, nmoNew;
		passOld=bb.CalcMobilityOld(nmpOld, nmoOld);
		passNew=bb.CalcMobility(nmpNew, nmoNew);
		if (passOld!=passNew || nmpOld!=nmpNew || nmoOld!=nmoNew) {
			bb.Print(true);
		}
		TEST(passOld==passNew);
		TEST(nmpOld==nmpNew);
		TEST(nmoOld==nmoNew);
	}
}


static void TestCalcMobility(const char* board, bool fBlackMove, int pass, int nMovesPlayer, int nMovesOpponent) {
	CBitBoard bb;
	CMoves moves;
	u4 nMovesPlayerx, nMovesOpponentx;

	bb.Initialize(board,fBlackMove);
	int passx=bb.CalcMobility(nMovesPlayerx, nMovesOpponentx);
	_ASSERT(pass==passx);
	_ASSERT(nMovesPlayer==nMovesPlayerx);
	_ASSERT(nMovesOpponent==nMovesOpponentx);
}

static void TestCalcMobility() {
	TestCalcMobility("..........................*OO*.....OOO..........................",false,0,5,3);
	TestCalcMobility("*O..............................................................",true,0,1,0);
	TestCalcMobility("................................................................",true,2,0,0);
	TestCalcMobility("*O..............................................................",false,1,0,1);

	const std::vector<COsGame> sgTest = LoadTestGames();
	for (std::vector<COsGame>::const_iterator it = sgTest.begin(); it!=sgTest.end(); it++) {
		const COsGame& sg=*it;

		CQPosition pos(sg.GetPosStart().board);
		for (size_t iMove=0; iMove<sg.ml.size(); iMove++) {
			const CMove move=sg.ml[iMove].mv;
			pos.MakeMove(move);
			TestCalcMobilityMatches(pos.BitBoard());
		}
	}
}

static void TestComparison() {
	CBitBoard a;
	CBitBoard b;
	a.mover=0xFFFFFFFF;
	a.empty=0xFFFFFFFF00000000i64;
	b.mover=0xFFFFFFFF00000000i64;
	b.empty=0xFFFFFFFF;

	TEST(a<b);
	TEST(!(a<a));
	TEST(!(b<a));

	a.mover=0x7FFFFFFF;
	a.empty=0x7FFFFFFF00000000i64;
	b.mover=0x7FFFFFFF00000000i64;
	b.empty=0x7FFFFFFF;

	TEST(a<b);
	TEST(!(a<a));
	TEST(!(b<a));

	// make empty the same, then must compare movers
	a.mover=0xFFFFFFFF;
	a.empty=0;
	b.mover=0xFFFFFFFF00000000i64;
	b.empty=0;

	TEST(a<b);
	TEST(!(a<a));
	TEST(!(b<a));

	// as above, with 0xFF instead of 0x7F

	a.mover=0x7FFFFFFF;
	a.empty=0;
	b.mover=0x7FFFFFFF00000000i64;
	b.empty=0;

	TEST(a<b);
	TEST(!(a<a));
	TEST(!(b<a));

	// make mover the same, must compare empties
	a.empty=0xFFFFFFFF;
	a.mover=0;
	b.empty=0xFFFFFFFF00000000i64;
	b.mover=0;

	TEST(a<b);
	TEST(!(a<a));
	TEST(!(b<a));

	// as above, with 0xFF instead of 0x7F

	a.empty=0x7FFFFFFF;
	a.mover=0;
	b.empty=0x7FFFFFFF00000000i64;
	b.mover=0;

	TEST(a<b);
	TEST(!(a<a));
	TEST(!(b<a));
}

static void TestFlips() {
	CBitBoard bb;
	bb.mover = 0x03040506070809ULL;
	bb.empty = 0xA0908070605040ULL;

	CBitBoard bbh(bb);
	bbh.FlipHorizontal();
	assertHexEquals(bbh.mover, 0xC020A060E01090ULL);
	assertHexEquals(bbh.empty, 0x0509010E060A02ULL);

	CBitBoard bbv(bb);
	bbv.FlipVertical();
	assertHexEquals(0x0908070605040300ULL, bbv.mover);
	assertHexEquals(0x405060708090A000ULL, bbv.empty);

	CBitBoard bbd(bb);
	bbd.FlipDiagonal();
	assertHexEquals(0x033C4C55ULL, bbd.mover);
	assertHexEquals(0x700F4C2A00000000ULL, bbd.empty);
}

void TestTerminalValue() {
	CBitBoard bb;
	bb.mover = 0xff;
	bb.empty = 0;
	assertEquals(-48*kStoneValue, bb.TerminalValue());
	bb.empty = ~bb.mover;
	assertEquals(8*kStoneValue, bb.TerminalValue());
}

void TestBitBoard() {
	TestCalcMobility();
	TestComparison();
	TestFlips();
	TestTerminalValue();
}

// Return a vector of games from the test games file, which is located at working directory/TestGames.ggf
std::vector<COsGame> LoadTestGames() {
	std::vector<COsGame> sgTest;

	std::string fn="src/resource/TestGames.ggf";
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
