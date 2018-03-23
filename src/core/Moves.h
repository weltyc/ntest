// Copyright Chris Welty
//  All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.

// Moves header file

#pragma once

#ifndef _H_MOVES    //MSC sucks
#define _H_MOVES

#include <vector>
#include "../odk/OsObjects.h"
#include "../n64/utils.h"

typedef char TMoveCode;
typedef char TMoveList[2*NN+1];

//////////////////////////////////////
// CMove class
//////////////////////////////////////

//! Class representing a single move (or pass) on an 8x8 othello board
class CMove {
public:
    CMove();
    explicit CMove(const std::string& mv);
    CMove(int sq);
    CMove(int row, int col);
    CMove(COsMove osmv);

    operator std::string() const;
    operator COsMove() const;

    int	Row() const;
    int	Col() const;
    u64	Mask() const;
    int	Square() const;
    void Out(std::ostream& os) const;
    void Set(int x, int y);
    void Set(u1 square);
    void Set(const char* text);
    bool Valid() const;	// true if square btw 0 and 63
    bool IsPass() const; // true if row<0;

    bool operator==(const CMove& b) const;
    bool operator!=(const CMove& b) const;

    static void Test();
private:
    u1 square;
};
inline std::ostream& operator<<(std::ostream& os, const CMove& move) { move.Out(os); return os; }

inline CMove::CMove() {};
inline CMove::CMove(int sq) { square=sq; };
inline CMove::CMove(int row, int col) { square=(row<<3)+col; };
inline bool CMove::operator==(const CMove& b) const {return square==b.square;}
inline bool CMove::operator!=(const CMove& b) const {return square!=b.square;}
inline int CMove::Row() const { return square>>3;}
inline int CMove::Col() const { return square&7;}
inline u64 CMove::Mask() const { return mask(square);}
inline int CMove::Square() const { return square; }
inline void CMove::Set(u1 asquare) { square=asquare;  }
inline void CMove::Set(int x, int y) { square=x+(y<<3);  }
inline bool CMove::Valid() const {return square<NN;}
inline bool CMove::IsPass() const { return square==(u1)-1; }

//////////////////////////////////////
// CMoves class
//////////////////////////////////////

//! A set of moves. Will return the moves in a reasonable ordering.
class CMoves {
public:
    bool GetNext(CMove& move);				//!< get next move; return false if none.
    bool IsValid(const CMove& move) const;	//!< returns true if move is valid. This routine
    										//!<	does not work if GetNext or SetBest has been called.
    int  NMoves() const;				//!< return the number of available moves, so long as
    										//!< GetNext and SetBest have not been called.
    bool HasBest() const;				//!< return true if best move is set and unused
    void Delete(const CMove& move);		//!< remove a move from the move list.
    									//!<	Doesn't work if SetBest() has been called.
    bool HasMoves() const;				//!< True if there are still moves
    void Set(const i8& aBlock);				//!< set moves to this bitboardblock
    void SetBest(const CMove& aBestMove); //!< set the best move

    bool Consistent()const;

    bool operator==(const CMoves& b) const;

    static void Test();

private:
    u64 all;			// true if have a move (unless the move is in bestMove)
    CMove bestMove;
    enum TCheck { kBest=-1, kCorner=0, kRegular=1, kCX=2 } moveToCheck;

    static void TestGetNext();

    friend class CBitBoard;
    friend class CQPosition;
};

inline int CMoves::NMoves() const {
    return bitCountInt(all);
}

inline bool CMoves::HasMoves() const { return all!=0; }

#endif // _H_Moves
