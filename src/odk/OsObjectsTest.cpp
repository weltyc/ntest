#include "OsObjects.h"
#include <sstream>
#include <cstring>
#include "../n64/test.h"

void testOsBoard() {
	COsBoard board;

	std::istringstream inStream("8 --O--O--*-*OO---****OO-**O*O*OOO**O***O****O*O*---**O*----****-- O");
	board.In(inStream);

	assertEquals(8, board.bt.n);
	assertBoolEquals(false, board.bt.fOcto);
	
	char sBoard[65];
	bool fBlackMove;

	assertStringEquals("--O--O--*-*OO---****OO-**O*O*OOO**O***O****O*O*---**O*----****--", board.GetText(sBoard, fBlackMove));
	assertBoolEquals(false, fBlackMove);
	assertBoolEquals(false, board.fBlackMove);
}

void testOsGame() {
	COsGame game;
	std::istringstream inStream("(;GM[Othello]PC[GGS/os]DT[2003.12.15_12:33:18.MST]PB[Saio1200]PW[Saio3000]RE[0]RB[2196.37]RW[2200.35]TI[5:00//2:00]TY[8]BO[8 --O--O--*-*OO---****OO-**O*O*OOO**O***O****O*O*---**O*----****-- O];)");
	game.In(inStream);
	assertStringEquals("2003.12.15_12:33:18.MST", game.sDateTime);
	assertBoolEquals(false, game.GetPos().board.fBlackMove);
}

void testOsGameResult() {
    COsGame game;
    std::istringstream inStream("(;GM[Othello]PC[Local]DT[2013-12-23 16:43:43 GMT]PB[s33]PW[s30]RE[2]TI[0//2:00]TY[0]BO[8 ---------------------------O*------*O--------------------------- *]B[F5/-1.04/0.01]W[D6//0.01]B[C3/-1.14/0.01]W[D3//0.01]B[C4/-1.14/0.01]W[F4//0.01]B[F6/-1.14/0.01]W[F3//0.01]B[E6/-1.14/0.01]W[E7//0.01]B[D7/-1.14/0.01]W[G6//0.02]B[G5/-1.14/0.01]W[C5/5.92/0.01]B[B6/-0.41/857.59]W[C6/5.92/0.01]B[B5/-1.99/15694.44]W[C7/5.92/0.01]B[F8//5207.92]W[E8/5.99/0.01]B[F7//0.03]W[H6/5.99/0.01]B[D2//5042.51]W[G4/7.99/0.01]B[C8/-1.00/1070.74]W[B3/7.99/0.01]B[B4/-1.00/30471.05]W[A5/102.00/0.01]B[D8/-1.00/0.30]W[E2/102.00/0.01]B[E3/-2.00/643.47]W[A4/102.00/0.01]B[F1/-2.00/0.03]W[F2/102.00/0.01]B[A6/-2.00/4.74]W[A7/102.00/0.01]B[H3/-2.00/1.07]W[H5/102.00/0.01]B[H4/-2.00/0.11]W[H2/102.00/0.01]B[G7/-2.00/0.09]W[B7/2.00/0.18]B[A8/-2.00/0.03]W[E1/2.00/0.02]B[G3/-2.00/0.03]W[G1/2.00/0.02]B[C1/-2.00/0.02]W[B8/2.00/0.02]B[C2/-2.00/0.02]W[H8/2.00/0.02]B[H7/-2.00/0.02]W[D1/2.00/0.01]B[A3/-2.00/0.01]W[B1/2.00/0.01]B[H1/-2.00/0.01]W[G8/2.00/0.01]B[A1//0.00]W[B2/2.00/0.01]B[A2//0.00]W[G2//0.00];)");
    game.In(inStream);
    
    COsGame game2;
    game2.SetDefaultStartPos(8);
    for (int i=0; i<game.ml.size(); i++) {
        const COsMoveListItem mli = game.ml[i];
        game2.Update(mli);
    }
    const COsBoard board = game2.GetPos().board;
    const int result = board.Result();
    
    assertEquals(-2.0, game2.Result().dResult, 0.001);
    std::ostringstream out;
    out << game2;
    assertTrue(strstr(out.str().c_str(), "RE[-2]")!=NULL);
}

void testOsObjects() {
	testOsBoard();
	testOsGame();
    testOsGameResult();
}
