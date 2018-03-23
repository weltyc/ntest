// Copyright Chris Welty
//  All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.

// board source code

#include <cstring>

#include "BitBoard.h"
#include "Moves.h"
#include "../n64/types.h"
#include "../n64/utils.h"

///////////////////////////////////////////
// CBitBoard class
///////////////////////////////////////////

void CBitBoard::Initialize(const char* boardText, bool fBlackMove) {
    int i;
    u64 squareMask;

    assert(strlen(boardText)==NN);

    empty=0;
    mover=0;

    for (i=0; i<NN; i++) {
    	squareMask=mask(i);
    	switch(boardText[i]) {
    	case '.':
    	case '-':
    	case '_':
    		empty|=squareMask;
    		break;
    	case 'x':
    	case 'X':
    	case '*':
    	case 'b':
    	case 'B':
    		mover|=squareMask;
    		break;
    	case 'o':
    	case 'O':
    	case 'w':
    	case 'W':
    		break;
    	default:
    		assert(0);
    	}
    }

    // if white to move, swap around so mover is to move
    if (!fBlackMove) {
    	InvertColors();
    }
}

bool operator<(const CBitBoard& a, const CBitBoard& b) {
    if (a.mover==b.mover)
    	return a.empty<b.empty;
    else
    	return a.mover<b.mover;
}

bool CBitBoard::Write(FILE* fp) const {
    if (!fwrite(&mover,sizeof(mover),1,fp)  || !fwrite(&empty,sizeof(empty),1,fp)) {
    	printf("Error writing bitboard to file\n");
    	return false;
    }
    else
    	return true;
}

bool CBitBoard::Read(FILE* fp) {
    return fread(&mover,sizeof(mover),1,fp)  && fread(&empty,sizeof(empty),1,fp);
}

CBitBoard CBitBoard::Symmetry(int sym) const {
    CBitBoard bb=*this;
    if (sym&1)
    	bb.FlipHorizontal();
    if (sym&2)
    	bb.FlipVertical();
    if (sym&4)
    	bb.FlipDiagonal();

    return bb;
}

CBitBoard CBitBoard::MinimalReflection() const {
    CBitBoard result, temp;
    int i,j,k;

    temp=result=*this;
    for (i=0; i<2; i++) {
    	for (j=0; j<2; j++) {
    		for (k=0; k<2; k++) {
    			if (temp<result)
    				result=temp;
    			temp.FlipVertical();
    		}
    		temp.FlipHorizontal();
    	}
    	temp.FlipDiagonal();
    }
    return result;
}

void CBitBoard::Print(bool fBlackMove) const {
    FPrint(stdout, fBlackMove);
}

void CBitBoard::FPrintHeader(FILE* fp) const {
    int col;

    fprintf(fp,"  ");
    for (col=0; col<N; col++)
    	fprintf(fp, " %c", 'A'+col);
    fprintf(fp, "\n");
}

void CBitBoard::FPrint(FILE* fp, bool fBlackMove) const {
    int row,col;
    u2 e,b;
    int value;

    fprintf(fp, "\n");

    // print the board
    FPrintHeader(fp);
    for (row=0; row<N; row++) {
    	fprintf(fp, "%2d ",row+1);
    	e=u1(empty >> row*8);
    	b=u1(mover >> row*8);
    	if (!fBlackMove)
    		b^=~e;
    	for (col=0; col<N; col++) {
    		if (e&1)
    			value=EMPTY;
    		else
    			value=(b&1)?BLACK:WHITE;
    		e>>=1;
    		b>>=1;
    		fprintf(fp, "%c ",ValueToText(value));
    	}
    	fprintf(fp, "%2d\n",row+1);
    }
    FPrintHeader(fp);

    // disc info
    int nEmpty, nBlack, nWhite;
    NDiscs(fBlackMove, nBlack, nWhite, nEmpty);
    fprintf(fp,"Black: %d  White: %d  Empty: %d\n", nBlack, nWhite, nEmpty);
}

//! Output the bitboard to a char buffer, and return the char buffer plus a terminal '\0'
//!
//! \param sBoard buffer which must be at least size 65 (64 squares + terminal '\0')
//! \param fBlackMove true to output player-to-move pieces as black
char* CBitBoard::GetSBoard(char sBoard[NN+1], bool fBlackMove) const {
    int row, col, e, b, square;
    char c;

    square=0;
    for (row=0;row<N; row++) {
    	e=u1(empty >> row*8);
    	b=u1(mover >> row*8);
    	if (!fBlackMove)
    		b^=~e;
    	for (col=0; col<N; col++) {
    		if (e&1)
    			c=ValueToText(EMPTY);
    		else if (b&1)
    			c=ValueToText(BLACK);
    		else
    			c=ValueToText(WHITE);
    		sBoard[square++]=c;
    		e>>=1;
    		b>>=1;
    	}
    }
    sBoard[square]=0;
    return sBoard;
}

void CBitBoard::NDiscs(bool fBlackMove, int& nBlack, int& nWhite, int& nEmpty) const {
    nEmpty=bitCountInt(empty);
    if (fBlackMove) {
    	nBlack=bitCountInt(mover);
    	nWhite=NN-nBlack-nEmpty;
    }
    else {
    	nWhite=bitCountInt(mover);
    	nBlack=NN-nWhite-nEmpty;
    }
}

int CBitBoard::TerminalValue() const {
    int nEmpty=bitCountInt(empty);
    int nMover=bitCountInt(mover);
    return kStoneValue*(nMover+nMover-NN+nEmpty);
}

/**
* Calculate moves and store them in moves
*
* @param [out] moves location to store moves
* @return true if there are legal moves
*/
bool CBitBoard::CalcMoves(CMoves& moves) const {
    u64 moveBits = mobility(mover, getEnemy());
    moves.Set(moveBits);
    return moves.HasMoves();
}

void CBitBoard::Initialize() {
    mover=0x0000000810000000ULL;
    empty=0xFFFFFFE7E7FFFFFFULL;
}

//! Return the number of mobilities for the player to move.
int CBitBoard::NMoverMobilities() const {
    return bitCountInt(mobility(mover, getEnemy()));
}

/**
* simultaneously calculate the mobility of the mover and the enemy.
*
* @param[out] nMovesPlayer number of moves for the person to move
* @param[out] nMovesOpponent number of moves for the opponent
* @return the pass code: 0 = mover has a move, 1=mover has no move but opponent does, 2=no moves
*/
int CBitBoard::CalcMobility(u4& nMovesMover, u4& nMovesEnemy) const {
    const u64 moverBits=mover;
    const u64 enemyBits = getEnemy();
    nMovesMover = u4(bitCount(mobility(moverBits,enemyBits)));
    nMovesEnemy = u4(bitCount(mobility(enemyBits, moverBits)));

    int pass;
    if (nMovesMover)
    	pass = 0;
    else if (nMovesEnemy)
    	pass = 1;
    else
    	pass = 2;

    return pass;
}
