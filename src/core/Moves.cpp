// Copyright Chris Welty
//  All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.

// moves source file

#include <inttypes.h>
#include <cassert>
#include <cstring>
#include <cstdlib>
#include <sstream>

#include "Moves.h"
#include "../odk/OsObjects.h"    	
#include "../n64/test.h"

using namespace std;

//////////////////////////////////////
// CMove class
//////////////////////////////////////

CMove::CMove(const string& mv) {
    Set(mv.c_str());
}

void CMove::Out(ostream& os) const {
    if (Row()>=0 && Row()<N)
    	os << (char)(Col()+'A') << (char)(Row()+'1');
    else if (IsPass())
    	os << "pa";
    else
    	os << "??";
}

CMove::operator string() const {
    std::ostringstream os;
    Out(os);
    return os.str();
}

//! Set the square of the move based on the test.
//!
//! If text starts with "pa" then this is a pass, set the move to a pass
//! If the move is "A1".."H8" set the move appropriately
//! If the move is invalid, set the move to -2.
void CMove::Set(const char* text) {
    char items[2];

    if (strlen(text)<2) {
    	assert(0);
    	Set(-2);
    	return;
    }

    items[0]=tolower(text[0]);
    items[1]=tolower(text[1]);

    // Pass? then set to -1
    if (!strncmp(items,"pa",2)) {
    	Set(-1);
    }
    else {
    	const int row=items[1]-'1';
    	const int col=items[0]-'a';

    	// valid square?
    	if ((row&7)==row && (col&7)==col) {
    		Set(col,row);
    	}

    	// any other value? set to -2.
    	else {
    		Set(-2);
    		assert(0);
    	}
    }
}

CMove::operator COsMove() const {
    COsMove osmv;
    if (IsPass())
    	osmv.SetPass();
    else
    	osmv.Set(Row(), Col());
    return osmv;
}

CMove::CMove(COsMove osmv) {
    if (osmv.Pass())
    	square=-1;
    else
    	Set(osmv.Col(), osmv.Row());
}

void CMove::Test() {
    {
    	COsMove osmv(4,2);
    	CMove mv(osmv);
    	TEST(mv.Row()==4);
    	TEST(mv.Col()==2);
    	TEST(!mv.IsPass());
    }
    {
    	COsMove osmv;
    	osmv.SetPass();
    	CMove mv(osmv);
    }
    {
    	CMove mv(5,3);
    	COsMove osmv(static_cast<string>(mv));
    	TEST(!osmv.Pass());
    	TEST(osmv.Row()==5);
    	TEST(osmv.Col()==3);
    }
    {
    	CMove mv("pass");
    	COsMove osmv(static_cast<string>(mv));
    	TEST(osmv.Pass());
    }
}

//////////////////////////////////////
// CMoves class
//////////////////////////////////////

void CMoves::Set(const i8& aBlock) {
    all=aBlock;
    moveToCheck=kCorner;
}

bool CMoves::IsValid(const CMove& move) const {
    return (move.Mask() & all)?true:false;
}

bool CMoves::Consistent() const {
    switch(moveToCheck) {
    case kBest:
    case kCorner:
    case kRegular:
    case kCX:
    	return true;
    default:
    	return false;
    }
}


bool CMoves::operator==(const CMoves& b) const {
    return all==b.all;
}

void CMoves::SetBest(const CMove& aBestMove) {
    bestMove=aBestMove;

    // if row<0, both rows should be negative. return
    if (bestMove.Row()<0)
    	return;

    // check best move
    moveToCheck=kBest;
}

bool CMoves::HasBest() const {
    return moveToCheck==kBest;
}

//! If there are more moves to check, outputs the next move to check and returns true.
//!
//! If there are remaining moves in the movelist,
//! - sets move to the next move that should be checked
//! - deletes the move from the movelist
//! - returns true
//!
//! If there are no remaining moves
//! - returns false
bool CMoves::GetNext(CMove& move) {
    int square;
    //! masks are for corners, non-cx squares, and all remaining squares.
    const int64_t masks[3]= {(int64_t)0x8100000000000081ULL, 0x3C3CFFFFFFFF3C3CULL, -1LL};

    if (moveToCheck<0) {
    	square=bestMove.Square();
    	moveToCheck=kCorner;
    }
    else {
    	for (; moveToCheck<=kCX; moveToCheck=TCheck(moveToCheck+1)) {
    		// find which of the movelist's u4s contains a move of this type (if any)
    		const int64_t* pMask=masks+moveToCheck;
    		u64 potentialMoves = all & *pMask;
    		if (potentialMoves) {
    			square = lowBitIndex(potentialMoves);
    			goto SUCCESS;
    		}
    	}
    	return false;
    }

SUCCESS:
    move.Set(square);
    all^=mask(square);
    return true;
}

static void TestGetNextOne(CMoves& moves, int square) {
    CMove move;
    TEST(moves.GetNext(move));
    TEST(move.Square()==square);
}

void CMoves::TestGetNext() {
    CMove move;
    CMoves moves;
    
    moves.Set(1LL);
    TestGetNextOne(moves, 0);
    TEST(moves.GetNext(move)==false);

    move.Set(043);
    moves.Set(-1LL);
    moves.SetBest(move);
    const int results[] = {
    		043,	// best
    		000, 007, 070, 077,	// corners
    		002, 003, 004, 005,
    		012, 013, 014, 015,
    		020, 021, 022, 023, 024, 025, 026, 027,
    		030, 031, 032, 033, 034, 035, 036, 037,
    		040, 041, 042,      044, 045, 046, 047,
    		050, 051, 052, 053, 054, 055, 056, 057,
    		062, 063, 064, 065,
    		072, 073, 074, 075,
    		001, 006, 010, 011, 016, 017,
    		060, 061, 066, 067, 071, 076
    };
    for (int i=0; i<sizeof(results)/sizeof(int); i++) {
    	TestGetNextOne(moves, results[i]);
    }
    TEST(moves.GetNext(move)==false);
}

void CMoves::Test() {
    TestGetNext();
}

void CMoves::Delete(const CMove& move) {
    assert(all&move.Mask());
    all&=~move.Mask();
}

