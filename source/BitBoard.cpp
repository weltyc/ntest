// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

// board source code

#include "BitBoard.h"
#include "Moves.h"
#include "types.h"
#include "Utils.h"
#include "MmxMobility.h"

#if CHECK_BITBOARD
#include "Patterns.h"
#endif

///////////////////////////////////////////
// CBitBoard class
///////////////////////////////////////////

void CBitBoard::Initialize(const char* boardText, bool fBlackMove) {
	int i;
	u4 mask, half;

	_ASSERT(strlen(boardText)==NN);

	empty.Clear();
	mover.Clear();

	for (i=0; i<NN; i++) {
		mask=1<<(i&31);
		half=i>>5;
		switch(boardText[i]) {
		case '.':
		case '-':
		case '_':
			empty[half]|=mask;
			break;
		case 'x':
		case 'X':
		case '*':
		case 'b':
		case 'B':
			mover[half]|=mask;
			break;
		case 'o':
		case 'O':
		case 'w':
		case 'W':
			break;
		default:
			_ASSERT(0);
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

u4 CBitBoard::Hash() const {
	u4 a,b,c,d;
	a=empty.u4s[0];
	b=empty.u4s[1];
	c=mover.u4s[0];
	d=mover.u4s[1];
	bobLookup(a,b,c,d);
	return d;
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
		e=empty.u1s[row];
		b=mover.u1s[row];
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
		e=empty.u1s[row];
		b=mover.u1s[row];
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

int CBitBoard::NEmpty() const {
	return CountBits(empty);
}

int CBitBoard::NMover() const {
	return CountBits(mover);
}

void CBitBoard::NDiscs(bool fBlackMove, int& nBlack, int& nWhite, int& nEmpty) const {
	nEmpty=CountBits(empty);
	if (fBlackMove) {
		nBlack=CountBits(mover);
		nWhite=NN-nBlack-nEmpty;
	}
	else {
		nWhite=CountBits(mover);
		nBlack=NN-nWhite-nEmpty;
	}
}

int CBitBoard::TerminalValue() const {
	int nEmpty=CountBits(empty);
	int nMover=CountBits(mover);
	return kStoneValue*(nMover+nMover-NN+nEmpty);
}

// CalcMoves - return true if a move is available
// internal info:
//	a - have seen a mover square and no empty square since
//	b - a and last square was white
//	c - color of this row
//	e - empty of this row
const __int64 minusOne=0xffffffffffffffff;


//! New routine to calculate moves
bool CBitBoard::CalcMoves(CMoves& moves) const {
	const i8 moverBits=mover.i8s;
	const i8 emptyBits=empty.i8s;
	// calculate opponent bits
	i8 opponentBits;
	i8 movesi8;
	__asm {
			movq	mm1,	moverBits;		// my bits
			por		mm1,	emptyBits;		// empties
			pxor	mm1,	minusOne;		// opponent bits
			movq	 opponentBits, mm1;
	}
	MmxMoves(moverBits,opponentBits);
	__asm {
		movq movesi8, mm0;
		emms;
	}
	moves.Set(movesi8);
	return moves.HasMoves();
}


void CBitBoard::Initialize() {
	mover[0]=0x10000000;
	mover[1]=0x00000008;
	empty[0]=0xE7FFFFFF;
	empty[1]=0xFFFFFFE7;
}

//! Return the number of mobilities for the player to move.
int CBitBoard::NMoverMobilities() const {
	const i8 moverBits=mover.i8s;
	const i8 emptyBits=empty.i8s;
	// calculate opponent bits
	i8 opponentBits;
	__asm {
			movq	mm1,	moverBits;		// my bits
			por		mm1,	emptyBits;		// empties
			pxor	mm1,	minusOne;		// opponent bits
			movq	 opponentBits, mm1;
	}
	const int nMoverMobilities = MmxMobility(moverBits,opponentBits);
	__asm emms;
	return nMoverMobilities;
}

//! simultaneously calculate the mobility of the mover and the enemy.
//!
//! \param[out] nMovesPlayer number of moves for the person to move
//! \param[out] nMovesOpponent number of moves for the opponent
//! \return the pass code: 0 = mover has a move, 1=mover has no move but opponent does, 2=no moves
int CBitBoard::CalcMobility(u4& nMovesPlayer, u4& nMovesOpponent) const {
	const i8 moverBits=mover.i8s;
	const i8 emptyBits=empty.i8s;
	// calculate opponent bits
	i8 opponentBits;
	__asm {
			movq	mm1,	moverBits;		// my bits
			por		mm1,	emptyBits;		// empties
			pxor	mm1,	minusOne;		// opponent bits
			movq	 opponentBits, mm1;
	}
	nMovesPlayer = MmxMobility(moverBits,opponentBits);
	nMovesOpponent=MmxMobility(opponentBits,moverBits);
	__asm emms;

	int pass;
	if (nMovesPlayer)
		pass = 0;
	else if (nMovesOpponent)
		pass = 1;
	else
		pass = 2;

	return pass;
}
