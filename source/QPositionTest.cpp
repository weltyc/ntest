// Copyright 2004 Chris Welty
// All Rights Reserved

#include "QPosition.h"

#include "../GDK/test.h"

#include "Pos2.h"
#include "Test.h"

//! Make move by translating to Pos2, moving, and translating back to CQPosition.
//!
//! This is for testing purposes.
static void MakeMoveUsingPos2(CQPosition& pos, CMove move) {
	extern CBitBoard bb;

	::Initialize(pos.BitBoard(),pos.BlackMove());
	if (move.IsPass()) {
		::PassBB();
	}
	else {
		::MakeMoveBB(move.Square());
	}
	pos=CQPosition(bb, fBlackMove_);
}

static void TestMakeMove() {
	{
		// black to move, flip squares down
		CQPosition pos("---------------------------O*------*O---------------------------", true);
		CQPosition pos2(pos);
		pos.MakeMove(D3);
		MakeMoveUsingPos2(pos2,D3);
		TEST(pos==pos2);
	}
	{
		// black to move, flip squares left
		CQPosition pos("---------------------------O*------*O---------------------------", true);
		CQPosition pos2(pos);
		pos.MakeMove(F5);
		MakeMoveUsingPos2(pos2,F5);
		TEST(pos==pos2);
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
			TEST(pos==pos2);
		}
	}
}

void TestCQPosition() {
	TestMakeMove();
}

