#include "n64/test.h"
#include "core/Cache.h"
#include "core/BitBoardTest.h"
#include "core/MPCStats.h"
#include "core/QPosition.h"
#include "core/Book.h"
#include "pattern/FastFlipTables.h"

#include "SearchParams.h"
#include "UndoInfo.h"
#include "Pos2.h"
#include "SpeedTest.h"

using namespace std;

void TestIU() {
	int nFlipped;
	CUndoInfo ui;
	const int F5=045, F6=055;
	char sBoard[65];

	Pos2 pos2;
	pos2.InitializeToStartPosition();
	pos2.MakeMoveBB(F5);

	assertStringEquals("---------------------------O*------***--------------------------", pos2.GetBB().GetSBoard(sBoard, pos2.BlackMove()));
	assertFalse(pos2.BlackMove());

	pos2.MakeMoveBB(F6,nFlipped,ui);
	assertEquals(1, nFlipped);
	assertTrue(pos2.IsValid());
	assertStringEquals("---------------------------O*------*O*-------O------------------", pos2.GetBB().GetSBoard(sBoard, pos2.BlackMove()));
	assertTrue(pos2.BlackMove());

	pos2.UndoMoveBB(F5,nFlipped,ui);
	assertEquals(1, nFlipped);

	assertTrue(pos2.IsValid());
	assertStringEquals("---------------------------O*------***--------------------------", pos2.GetBB().GetSBoard(sBoard, pos2.BlackMove()));
	assertFalse(pos2.BlackMove());
}

void TestMpc() {
	CMPCStats& mpcs = *CMPCStats::GetMPCStats('J','A',5);
	assertEquals(5, mpcs.NPrunes());
	assertTrue(mpcs.BadCutHeight(2));
	assertFalse(mpcs.BadCutHeight(3));
	assertFalse(mpcs.BadCutHeight(25));
	assertTrue(mpcs.BadCutHeight(26));
	assertTrue(mpcs.Valid());
	int hCheck=0;
	float sd = 0.;
	float cr = 0.;
	assertEquals(true, mpcs.GetParams(3, 22, 0, 4, hCheck, sd, cr));
	assertEquals(481.04178f, sd, 1e-5f);
	assertEquals(.96078372f, cr, 1e-7f);
	assertEquals(1, hCheck);
}


//! Make move by translating to Pos2, moving, and translating back to CQPosition.
//!
//! This is for testing purposes.
static void MakeMoveUsingPos2(CQPosition& pos, CMove move) {
	Pos2 pos2;
	pos2.Initialize(pos.BitBoard(),pos.BlackMove());
	if (move.IsPass()) {
		pos2.PassBB();
	}
	else {
		pos2.MakeMoveBB(move.Square());
	}
	pos=CQPosition(pos2.GetBB(), pos2.BlackMove());
}

static void TestMakeMove() {
	{
		// black to move, flip squares down
		CQPosition pos("---------------------------O*------*O---------------------------", true);
		CQPosition pos2(pos);
		pos.MakeMove(D3);
		MakeMoveUsingPos2(pos2,D3);
		assertTrue(pos==pos2);
		assertBoolEquals(pos.BlackMove(), pos2.BlackMove());
		assertEquals(pos.NEmpty(), pos2.NEmpty());
		assertEquals(pos.NMover(), pos2.NMover());
	}
	{
		// black to move, flip squares left
		CQPosition pos("---------------------------O*------*O---------------------------", true);
		CQPosition pos2(pos);
		pos.MakeMove(F5);
		MakeMoveUsingPos2(pos2,F5);
		assertTrue(pos==pos2);
		assertBoolEquals(pos.BlackMove(), pos2.BlackMove());
		assertEquals(pos.NEmpty(), pos2.NEmpty());
		assertEquals(pos.NMover(), pos2.NMover());
	}

	const std::vector<COsGame> sgTest = LoadTestGames();
	for (std::vector<COsGame>::const_iterator it = sgTest.begin(); it!=sgTest.end(); it++) {
		const COsGame& sg=*it;

		CQPosition pos(sg.GetPosStart().board);
		for (size_t iMove=0; iMove<sg.ml.size(); iMove++) {
			const CMove move=sg.ml[iMove].mv;
			CQPosition pos2(pos);
			pos.MakeMove(move);
			MakeMoveUsingPos2(pos2,move);
			assertTrue(pos==pos2);
			assertBoolEquals(pos.BlackMove(), pos2.BlackMove());
			assertEquals(pos.NEmpty(), pos2.NEmpty());
			assertEquals(pos.NMover(), pos2.NMover());
		}
	}
}


void TestPos2() {
	TestMakeMove();
	TestIU();
	TestMpc();
}