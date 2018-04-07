// Copyright 2004 Chris Welty
//  All Rights Reserved

#include "QPosition.h"

#include "../n64/test.h"
static void TestMakeMove() {
    CQPosition pos;
    char sBoard[65];
    pos.Initialize();

    pos.MakeMove(CMove("F5"));
    assertStringEquals("---------------------------O*------***--------------------------", pos.GetSBoard(sBoard));
    assertFalse(pos.BlackMove());
    assertEquals(59, pos.NEmpty());
    assertEquals(1, pos.NMover());
}

void TestQPosition() {
    TestMakeMove();
}
