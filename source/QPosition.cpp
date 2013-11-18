// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

// CQPosition source code


#include "QPosition.h"
#include <algorithm>
#include "OsObjects.h"
#include "Utils.h"

using namespace std;

////////////////////////////////////////////////
// CQPosition class
////////////////////////////////////////////////

CQPosition::CQPosition(const CBitBoard& aBoard, bool blackMove) {
	Initialize(aBoard, blackMove);
}

CQPosition::CQPosition(const char* cstrBoard, bool blackMove) {
	Initialize(cstrBoard, blackMove);
}

CQPosition::CQPosition(const COsGame& game, unsigned int iMove) {
	char sBoard[NN+1];
	bool fBlackMove;
	u4 i;

	game.GetPosStart().board.GetText(sBoard, fBlackMove);
	Initialize(sBoard, fBlackMove);
	for (i=0; i<iMove && i<game.ml.size(); i++) {
		CMove mv(game.ml[i].mv);
		MakeMove(mv);
	}
}

CQPosition::CQPosition(const COsBoard& osboard) {
	char sBoard[NN+1];
	bool fBlackMove;

	osboard.GetText(sBoard, fBlackMove);
	Initialize(sBoard, fBlackMove);
}
	
void CQPosition::Initialize() {
	m_bb.empty.u4s[0]=0xE7FFFFFF;
	m_bb.mover.u4s[0]=0x10000000;
	m_bb.empty.u4s[1]=0xFFFFFFE7;
	m_bb.mover.u4s[1]=0x00000008;
	nEmpty=60;
	nMover=2;
	fBlackMove=true;
}

void CQPosition::Initialize(const char* cstrBoard, bool blackMove) {
	m_bb.Initialize(cstrBoard);
	if (!blackMove)
		m_bb.InvertColors();
	fBlackMove=blackMove;
	nEmpty=CountBits(m_bb.empty);
	nMover=CountBits(m_bb.mover);
}

// Initialize a position with a bitboard.
void CQPosition::Initialize(const CBitBoard& bb, bool blackMove) {
	m_bb=bb;
	fBlackMove=blackMove;
	nEmpty=CountBits(m_bb.empty);
	nMover=CountBits(m_bb.mover);
}

// return the output m_bb string
char* CQPosition::GetSBoard(char sBoard[NN+1]) const {
	return m_bb.GetSBoard(sBoard, fBlackMove);
}

bool CQPosition::SetBlackMove(bool fNewBlackMove) {
	bool fResult=(fNewBlackMove!=fBlackMove);
	if (fResult) {
		m_bb.InvertColors();
		fBlackMove=fNewBlackMove;
	}
	return fResult;
}

// set a row for cheat purposes (or for rand games)
bool CQPosition::SetRow(const char* sRow, int row) {
	if (strlen(sRow)<N) {
		printf("Please enter a complete row\n");
		return false;
	}
	else {
		char sBoard[NN+1];

		GetSBoard(sBoard);
		strncpy(sBoard+row*N,sRow,N);
		Initialize(sBoard, fBlackMove);

		return true;
	}
}

/////////////////////////////////////////
// Moving routines
/////////////////////////////////////////

static bool ValidSquare(int col, int row) {
	return (col&7)==col && (row&7)==row;
}

bool CQPosition::NonmoverSquare(int col, int row) const {
	 return ValidSquare(col, row) && !(m_bb.mover|m_bb.empty).GetBit(Square(row, col));
}

void CQPosition::FlipInDirection(int square, int dCol, int dRow) {
	int col=Col(square);
	int row=Row(square);

	for (col+=dCol, row+=dRow; NonmoverSquare(col, row); col+=dCol, row+=dRow) {
	}
	if (ValidSquare(col, row) && m_bb.mover.GetBit(Square(row, col))) {
		for (col-=dCol, row-=dRow; !m_bb.empty.GetBit(Square(row, col)); col-=dCol, row-=dRow) {
			m_bb.mover.FlipBit(Square(row, col));
			nMover++;
		}
	}
}

// Set down a piece and flip opposing pieces. Change m_bb.blacks.
void CQPosition::MakeMove(CMove move) {
#if _DEBUG
	_ASSERT((m_bb.empty.u1s[0]&m_bb.mover.u1s[0])==0);
	CMoves movesTest;
	bool fHasMove=CalcMoves(movesTest);
	bool fOK = fHasMove?movesTest.IsValid(move):move.IsPass();
	if (!fOK) {
		cout << "--- move " << move << " is invalid ---\n";
		Print();
		cout.flush();
		QSSERT(0);
		movesTest.IsValid(move);
	}
#endif
	
	if (!move.IsPass()) {
		const int sq=move.Square();

		FlipInDirection(sq, 0, 1);
		FlipInDirection(sq, 1, 1);
		FlipInDirection(sq, 1, 0);
		FlipInDirection(sq, 1, -1);
		FlipInDirection(sq, 0, -1);
		FlipInDirection(sq, -1, -1);
		FlipInDirection(sq, -1, 0);
		FlipInDirection(sq, -1, 1);

		// set down the piece
		m_bb.mover.FlipBit(sq);
		nMover++;
		m_bb.empty.FlipBit(sq);
		nEmpty--;

	}
	// switch player to move
	Pass();
}

// Values of interest

bool CQPosition::ObviouslyDone() const {
	int nWhite = 64-nEmpty-nMover;
	return !(nEmpty && nMover && nWhite);
}

// return net number of squares for m_bb.black
int	CQPosition::NetSquares() const {
	int score;

	score = (nMover<<1)+nEmpty-64;
	if (!fBlackMove)
		score=-score;
	return score;
}

// value at end of game
CValue CQPosition::TerminalValue() const {
	int nWhite=64-nMover-nEmpty;
	int net=nMover-nWhite;
	if (net<0)
		net-=nEmpty;
	else if (net>0)
		net+=nEmpty;

	return net*kStoneValue;
}

bool CQPosition::IsTerminal() {
	CMoves moves;
	bool result;

	if (CalcMoves(moves))
		result=false;
	else {
		Pass();
		result=!CalcMoves(moves);
		Pass();
	}
	return result;
}

u2 CQPosition::Mobility(bool playerToMove) const {
	CMoves moves;

	if (playerToMove) {
		CalcMoves(moves);
	}
	else {
		CQPosition next(*this);
		next.Pass();
		next.CalcMoves(moves);
	}
	return moves.NMoves();
};

//! Switch mover and nonmover, update nMover and fBlackMove for a pass.
//!
//! This routine also is called after making a move on the m_bb.
void CQPosition::Pass() {
	m_bb.InvertColors();
	nMover=64-nMover-nEmpty;
	fBlackMove=!fBlackMove;
};

// CalcMovesAndPass - calc moves. decide if the mover needs to pass, and pass if he does
// inputs:
//	none
// outputs:
//	moves - the moves available
//	pass -	0 if the next player can move
//			1 if the next player must pass but game is not over
//			2 if both players must pass and game is over
//	If pass>0 the position is left with one move passed
//		(and you must call UndoPass before UndoMove)
int CQPosition::CalcMovesAndPass(CMoves& moves) {
	if (CalcMoves(moves))
		return 0;
	else {
		Pass();
		if (CalcMoves(moves))
			return 1;
		else
			return 2;
	}
}

//! Make a move, then pass if the opponent must pass. Return pass code.
//!
//! \param move move to make
//! \return 0 = no pass, 1 = opponent must pass, 2 = both must pass (game is over)
int CQPosition::MakeMoveAndPass(CMove move) {
	MakeMove(move);
	CMoves moves;
	return CalcMovesAndPass(moves);
}

void CQPosition::Print(bool fBoardOnly) const {
	FPrint(stdout, fBoardOnly);
}

void CQPosition::FPrint(FILE* fp, bool fBoardOnly) const {
	BitBoard().FPrint(fp, fBlackMove);
	fprintf(fp,"%s to move\n",fBlackMove?"Black":"White");
}

bool CQPosition::IsSuccessor(const CQPosition& posSuccessor) const {
	CMoves moves;
	CMove move;
	CQPosition pos2(*this);
	pos2.CalcMoves(moves);
	while (moves.GetNext(move)) {
		pos2=*this;
		pos2.MakeMove(move);
		if (pos2==posSuccessor) {
			return true;
		}
	}
	return false;
}
