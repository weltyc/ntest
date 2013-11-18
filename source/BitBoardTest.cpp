#include "BitBoard.h"
#include "Patterns.h"
#include "Moves.h"
#include "../GDK/test.h"
#include "test.h"

class CBitBoardTest : public CBitBoard {
public:
	CBitBoardTest(const CBitBoard& bb) : CBitBoard(bb) {};
	bool CalcMovesOld(CMoves& moves) const;
	int CalcMobilityOld(u4& nMovesPlayer, u4& nMovesOpponent) const;
};


//! Old, slower routine to calculate moves
bool CBitBoardTest::CalcMovesOld(CMoves& moves) const {
	int nrow, srow;
	u4 ae, aw, a;
	u4 blackRowMoves, c, e, be, bw, b;
	CBitBoardBlock blackMoves;
	u4 blackPattern;

	// east and west flips
	for (nrow=0; nrow<8; nrow++) {
		_ASSERT(rowMovesTableSize==6561);
		blackPattern=Base2ToBase3(mover.u1s[nrow], empty.u1s[nrow]);
		blackMoves.u1s[nrow]=rowAllMovesTable[blackPattern];
	}

	// other moves
	// high byte is N moves, low byte is S moves.
	// high word is mover, low word is white
	// a, b = a and b in north and south directions
	//	ae, be = a and b in northeast and southeast directions
	//	aw, bw = a and b in northwest and southwest directions
	a=b=ae=be=aw=bw=0;
	for (nrow=0, srow=7; srow>=0; nrow++, srow--) {
		e = (empty.u1s[nrow]<<8)|empty.u1s[srow];
		c = (mover.u1s[nrow]<<8)|mover.u1s[srow];
		blackRowMoves = (be|b|bw)&e;
		blackMoves.u1s[nrow]|=blackRowMoves>>8;
		blackMoves.u1s[srow]|=blackRowMoves&0xFF;
		
		ae=(~e)&(ae|c);
		be=ae&~c;
		ae=(ae>>1)&0x7F7F7F7F;
		be=(be>>1)&0x7F7F7F7F;

		aw=(~e)&(aw|c);
		bw=aw&~c;
		aw=(aw<<1)&0xFEFEFEFE;
		bw=(bw<<1)&0xFEFEFEFE;

		a=(~e)&(a|c);
		b=a&~c;
	}
	moves.Set(blackMoves);
	return (blackMoves.u4s[0] || blackMoves.u4s[1]);
}

//! Old, slower mobility calculator
//!
//! \param[out] nMovesPlayer number of moves for the person to move
//! \param[out] nMovesOpponent number of moves for the opponent
//! \return pass code (0=no pass, 1=player to move passes, 2=both players must pass, game over)
int CBitBoardTest::CalcMobilityOld(u4& nMovesPlayer, u4& nMovesOpponent) const {
	// old calcmobility function
	int nrow, srow;
	u4 ae, aw, a, be, bw, b, c, e;
	u2 blackRowMoves, whiteRowMoves, c2, e2;
	u8 whiteMoves, blackMoves;
	u2 blackPattern, whitePattern;

	// east and west flips
	for (nrow=0; nrow<8; nrow++) {
		_ASSERT(rowMovesTableSize==6561);
		blackPattern=Base2ToBase3(mover.u1s[nrow], empty.u1s[nrow]);
		whitePattern=Base2ToBase3(mover.u1s[nrow]^~empty.u1s[nrow], empty.u1s[nrow]);
		whiteMoves.u1s[nrow]=rowAllMovesTable[whitePattern];
		blackMoves.u1s[nrow]=rowAllMovesTable[blackPattern];
	}

	// other moves
	// high byte is N moves, low byte is S moves.
	// high word is mover, low word is white
	a=b=ae=be=aw=bw=0;
	for (nrow=0, srow=7; srow>=0; nrow++, srow--) {
		e2 = (empty.u1s[nrow]<<8)|empty.u1s[srow];
		c2 = (mover.u1s[nrow]<<8)|mover.u1s[srow];
		c = ((u4)c2<<16) | (c2^(u2)(~e2));
		e = ((u4)e2<<16) | e2;
		blackRowMoves = ((be|b|bw)&e)>>16;
		whiteRowMoves = ((be|b|bw)&e)&0xFFFF;
		whiteMoves.u1s[nrow]|=whiteRowMoves>>8;
		whiteMoves.u1s[srow]|=whiteRowMoves&0xFF;
		blackMoves.u1s[nrow]|=blackRowMoves>>8;
		blackMoves.u1s[srow]|=blackRowMoves&0xFF;
		
		ae=(~e)&(ae|c);
		be=ae&~c;
		ae=(ae>>1)&0x7F7F7F7F;
		be=(be>>1)&0x7F7F7F7F;

		aw=(~e)&(aw|c);
		bw=aw&~c;
		aw=(aw<<1)&0xFEFEFEFE;
		bw=(bw<<1)&0xFEFEFEFE;

		a=(~e)&(a|c);
		b=a&~c;
	}

	// add 'em up
	nMovesPlayer=CountBits(blackMoves);
	nMovesOpponent=CountBits(whiteMoves);

	// calc pass code
	int pass;
	if (blackMoves.u4s[0] || blackMoves.u4s[1])
		pass=0;
	else if (whiteMoves.u4s[0] || whiteMoves.u4s[1])
		pass=1;
	else
		pass=2;

	return pass;
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
	a.mover.i8s=0xFFFFFFFF;
	a.empty.i8s=0xFFFFFFFF00000000i64;
	b.mover.i8s=0xFFFFFFFF00000000i64;
	b.empty.i8s=0xFFFFFFFF;

	TEST(a<b);
	TEST(!(a<a));
	TEST(!(b<a));

	a.mover.i8s=0x7FFFFFFF;
	a.empty.i8s=0x7FFFFFFF00000000i64;
	b.mover.i8s=0x7FFFFFFF00000000i64;
	b.empty.i8s=0x7FFFFFFF;

	TEST(a<b);
	TEST(!(a<a));
	TEST(!(b<a));

	// make empty the same, then must compare movers
	a.mover.i8s=0xFFFFFFFF;
	a.empty.i8s=0;
	b.mover.i8s=0xFFFFFFFF00000000i64;
	b.empty.i8s=0;

	TEST(a<b);
	TEST(!(a<a));
	TEST(!(b<a));

	// as above, with 0xFF instead of 0x7F

	a.mover.i8s=0x7FFFFFFF;
	a.empty.i8s=0;
	b.mover.i8s=0x7FFFFFFF00000000i64;
	b.empty.i8s=0;

	TEST(a<b);
	TEST(!(a<a));
	TEST(!(b<a));

	// make mover the same, must compare empties
	a.empty.i8s=0xFFFFFFFF;
	a.mover.i8s=0;
	b.empty.i8s=0xFFFFFFFF00000000i64;
	b.mover.i8s=0;

	TEST(a<b);
	TEST(!(a<a));
	TEST(!(b<a));

	// as above, with 0xFF instead of 0x7F

	a.empty.i8s=0x7FFFFFFF;
	a.mover.i8s=0;
	b.empty.i8s=0x7FFFFFFF00000000i64;
	b.mover.i8s=0;

	TEST(a<b);
	TEST(!(a<a));
	TEST(!(b<a));

	std::cout << "Done with TestComparison" << std::endl;
}

void TestBitBoard() {
	TestCalcMobility();
	TestComparison();
}