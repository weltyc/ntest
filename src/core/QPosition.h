// Copyright Chris Welty
//  All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.

// Quick position header file

// Position and Moves and Move class header file
#pragma once

#ifndef __CORE_QPOSITION_H
#define __CORE_QPOSITION_H

#include "Moves.h"
#include "BitBoard.h"

class COsGame;
class COsBoard;

//////////////////////////////////////
// CQPosition class
//////////////////////////////////////

//! A low-overhead position class. The position does not do all the incremental updates needed for
//! fast evaluation of a position, and as a result it is quicker to set up and easier to use.
class CQPosition {
public:
    CQPosition();
    CQPosition(const CBitBoard& aBoard, bool blackMove);
    CQPosition(const char* cstrBoard, bool blackMove);
    CQPosition(const COsGame& game, unsigned int iMove);
    CQPosition(const COsBoard& board);

    // Initialization
    void Initialize();
    void Initialize(const char* cstrBoard, bool blackMove);
    void Initialize(const CBitBoard& bb, bool blackMove);
    bool SetBlackMove(bool fNewBlackMove);
    bool SetRow(const char* sRow, int row);

    // Moving
    bool CalcMoves(CMoves& moves) const;
    void MakeMove(CMove move);
    void Pass();	// flip the board and change the color of the mover
    int CalcMovesAndPass(CMoves& moves); // calc moves, then pass if a pass is needed
    int MakeMoveAndPass(CMove move);


    // turning it back into a string
    char* GetSBoard(char sBoard[NN+1]) const;

    // Printing
    void Print(bool fBoardOnly=false) const;
    void FPrint(FILE* fp, bool fBoardOnly=false) const;

    // Values of interest
    bool BlackMove() const;			// return true if it's black's move
    int NEmpty() const { return m_bb.NEmpty(); }	// return number of empty squares
    int NMover() const { return m_bb.NMover(); }	//!< return number of discs for the player to move
    CValue TerminalValue() const;	// value at end of game
    bool IsTerminal();				// true if game is over
    const CBitBoard& BitBoard() const;		// return a bitboard representation of the position
    void NDiscs(int& nBlack, int& nWhite, int& nEmpty) const;
    bool IsSuccessor(const CQPosition& posSuccessor) const;

    // other evaluation
    u2 Mobility(bool playerToMove) const;				// number of valid moves
    int Solve(int alpha, int beta);

    //! \name Testing
    //! \{
    bool operator==(const CQPosition& pos2) const;
    bool operator!=(const CQPosition& pos2) const { return !(operator==(pos2));};
    //! \}

protected:
    CBitBoard m_bb;
    bool fBlackMove;

    bool NonmoverSquare(int col, int row) const;
    void FlipInDirection(int square, int dCol, int dRow);
};

inline CQPosition::CQPosition() {};
inline bool CQPosition::BlackMove() const { return fBlackMove; }
inline const CBitBoard& CQPosition::BitBoard() const { return m_bb;};
inline void CQPosition::NDiscs(int& nBlack, int& nWhite, int& nEmpty) const {
    m_bb.NDiscs(fBlackMove, nBlack, nWhite, nEmpty);
}
inline bool CQPosition::CalcMoves(CMoves& moves) const { return m_bb.CalcMoves(moves); };
inline bool CQPosition::operator==(const CQPosition& pos2) const { return m_bb==pos2.m_bb; };
#endif  // __CORE_QPOSITION_H
