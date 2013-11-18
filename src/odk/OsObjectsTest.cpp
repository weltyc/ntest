#include "OsObjects.h"
#include <sstream>
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

void testOsObjects() {
	testOsBoard();
	testOsGame();
}