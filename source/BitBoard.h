// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

// board header file

#pragma once

#include <crtdbg.h>
#include "BitBoardBlock.h"
#include <stdio.h>
class CMoves;

//! The bitboard representation of a position, containing two CBitBoardBlocks: one for the mover and one for empty squares.
class CBitBoard {
public:
	CBitBoardBlock empty, mover;

	// Set to starting position
	void Initialize();
	void Initialize(const char* boardText, bool fBlackMove=true);

	// flipping
	void FlipHorizontal();
	void FlipVertical();
	void FlipDiagonal();
	CBitBoard Symmetry(int sym) const;
	CBitBoard MinimalReflection() const;

	void InvertColors();

	// impossible board
	void SetImpossible();
	bool IsImpossible() const;

	// I/O
	void Print(bool fBlackMove) const;// Print the board in human-readable format
	void FPrint(FILE* fp, bool blackMove) const;// Print the board in human-readable format
	bool Write(FILE* fp) const;	// print in bitstream format
	bool Read(FILE* fp);		// read in bitstream format; return true if successful
	char* GetSBoard(char sBoard[NN+1], bool fBlackMove) const;

	// statistics
	u4 Hash() const;
	int NEmpty() const;
	int NMover() const;
	void NDiscs(bool fBlackMove, int& nBlack, int& nWhite, int& nEmpty) const;
	int TerminalValue() const;

	// moving
	bool CalcMoves(CMoves& moves) const;
	int CalcMobility(u4& nMovesPlayer, u4& nMovesOpponent) const;
	int NMoverMobilities() const;
	bool operator==(const CBitBoard& b) const;
	bool operator!=(const CBitBoard& b) const;

protected:
	void FPrintHeader(FILE* fp) const;
};

bool operator<(const CBitBoard& a, const CBitBoard& b);

//! Make the bitboard an impossible position. This is used when clearing the hashtable.
inline void CBitBoard::SetImpossible() {
	mover[0]=mover[1]=empty[0]=empty[1]=(u4)-1;
	_ASSERT(IsImpossible());
}

//! Check whether the bitboard is impossible. Impossible positions are stored in unused
//! hashtable locations.
inline bool CBitBoard::IsImpossible() const {
	return (mover[0]&empty[0])||(mover[1]&empty[1]);
}

inline bool CBitBoard::operator==(const CBitBoard& b) const { return mover==b.mover && empty==b.empty;};
inline bool CBitBoard::operator!=(const CBitBoard& b) const { return mover!=b.mover || empty!=b.empty;};
inline void CBitBoard::FlipVertical() { empty.FlipVertical(); mover.FlipVertical();}
inline void CBitBoard::FlipHorizontal() { empty.FlipHorizontal(); mover.FlipHorizontal();}
inline void CBitBoard::FlipDiagonal() { empty.FlipDiagonal(); mover.FlipDiagonal();}
inline void CBitBoard::InvertColors() { mover^=~empty; }

//! This is just a bitboard that's guaranteed to be a minimal reflection.
//!
//! The class won't completely guarantee that you haven't messed up, since you can alter the data
//! elements to make it a nonminimal bitboard. Don't do this.
class CMinimalReflection: public CBitBoard {
public:
	CMinimalReflection(const CBitBoard& bb) : CBitBoard(bb.MinimalReflection()) {};

#if defined(_MSC_VER) && _MSC_VER<1200
	// Early versions of Microsoft's STL are messed up and need a default constructor.
	// This default constructor subverts the purpose of CMinimalReflection.
	CMinimalReflection() {};
#endif
};

void TestBitBoard();