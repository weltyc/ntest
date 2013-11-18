#include "stdafx.h"
#include <iostream>
#include "magic.h"

/**
* counts[index][moverBitPattern] contains the number of disks flipped in a row.
* @param index the index if the empty square in the pattern (so index=0 means the empty square is at the low-order bit)
* @param moverBitPattern 8 bits, each set if the corresponding square on the board is occupied by the mover
*/
int counts[8][256];

/**
* outsides[index][enemyBitPattern] is the first bit, on each side, that is 'outside' the closest enemy bits to the mover.
* for instance .**.**.., with index==3 (the middle empty '.'), the 'outside' bits are 
*              1.....1.
* If there is a mover disk in these spots, it will cause a flip.
**/
static int outsides[8][256];

/**
* insides[index][outsideBitPattern] is the disks that will be flipped if the mover had an outside disk in the given spots.
* For instance with index = 3 and outside disks at 
*   O.....O. , the inside (or flipped bit pattern) will be
*   .**.**..
*/
static int insides[8][256];

/**
* rowFlips[row][insideBitPattern] is the bitboard containing the disks that will be flipped
*/
u64 rowFlips[8][256];

/**
* colFlips[col][insideBitPattern] is the bitboard containing the disks that will be flipped
*/
static u64 colFlips[8][256];

const int nDiagonals = 11;
/**
* d9Flips[row-col+5][insideBitPattern] is the bitboard containing the disks that will be flipped.
* (if row-col < 5 then we can't flip along the diagonal, so we don't store the information)
*/
static u64 d9Flips[nDiagonals][256];

/**
* d7Flips[row+col-2][insideBitPattern] is the bitboard containing the disks that will be flipped.
* (if row+col < 2 then we can't flip along the diagonal, so we don't store the information)
*/
u64 d7Flips[nDiagonals][256];

/**
* Neighbors[square] is the bitboard containing disks adjacent to the square
*/
u64 neighbors[64];

static void initNeighbors() {
	for (int sq = 0; sq<64; sq++) {
		u64 m = mask(sq);
		if (col(sq)>0) {
			m|=m>>1;
		}
		if (col(sq)<7) {
			m|=m<<1;
		}
		m|=(m>>8)|(m<<8);
		neighbors[sq]=m&~mask(sq);
	}
}

static void initOutside(int index, int enemyBitPattern) {
	int outside = 0;

	for (int i=index-1; i>=0; i--) {
		if (bitClear(i, enemyBitPattern)) {
			outside |= 1<<i;
			break;
		}
	}
	for (int i=index+1; i<8; i++) {
		if (bitClear(i, enemyBitPattern)) {
			outside |= 1<<i;
			break;
		}
	}
	outsides[index][enemyBitPattern]=outside;
}

static void initInside(int index, int moverBitPattern) {
	int count = 0;
	int inside = 0;
	int insideLeft = 0;
	for (int i=index-1; i>=0; i--) {
		if (bitSet(i, moverBitPattern)) {
			count+=index-i-1;
			inside|= insideLeft;
			break;
		}
		else {
			insideLeft |= 1<<i;
		}
	}

	int insideRight = 0;
	for (int i=index+1; i<8; i++) {
		if (bitSet(i, moverBitPattern)) {
			inside|= insideRight;
			count+=i-index-1;
			break;
		}
		else {
			insideRight|= 1<<i;
		}
	}
	counts[index][moverBitPattern]=count;
	insides[index][moverBitPattern] = inside;
}

static void initRowFlips(int row, u64 insideBitPattern) {
	rowFlips[row][insideBitPattern] = insideBitPattern << (row*8);
}

static void initColFlips(int col, u64 insideBitPattern) {
	// turn pattern sideways using magic
	u64 pattern = (insideBitPattern * 0x02040810204081) & MaskA;

	colFlips[col][insideBitPattern] = pattern << col;
}

static u64 signedLeftShift(u64 pattern, int shift) {
	if (shift > 0) {
		return pattern<<shift;
	}
	else {
		return pattern>>-shift;
	}
}

/**
* @param index row-col+5
*/
static void initD9Flips(int index, u64 insideBitPattern) {
	// turn pattern diagonally using magic
	u64 pattern = (insideBitPattern * MaskA) & MaskA1H8;
	int diff = index-5; // diff =row-col

	d9Flips[index][insideBitPattern] = signedLeftShift(pattern, diff*8);
}

static void initD7Flips(int index, u64 insideBitPattern) {
	// turn pattern diagonally using magic
	u64 pattern = (insideBitPattern * MaskA) & MaskA8H1;

	int diff = index-5; // diff = row+col-7

	d7Flips[index][insideBitPattern] = signedLeftShift(pattern, diff*8);
}

void initFlips() {
	initNeighbors();
	for (int bitPattern=0; bitPattern<256; bitPattern++) {
		for (int index=0; index<8; index++) {
			initOutside(index, bitPattern);
			initInside(index, bitPattern);
			initRowFlips(index, bitPattern);
			initColFlips(index, bitPattern);
		}
		for (int index=0; index<nDiagonals; index++) {
			initD9Flips(index, bitPattern);
			initD7Flips(index, bitPattern);
		}
	}
}

inline int flipIndex(int moveLoc, u64 mover, u64 enemy, u64 mask, u64 mult) {
	const u64 enemy256 = (enemy&mask)*mult>>56;
	const int out = outsides[moveLoc][enemy256];
	const u64 mover256 = (mover&mask)*mult>>56;
	const int flipIndex = insides[moveLoc][mover256&out];
	return flipIndex;
}

inline int rowFlipIndex(int row, int col, u64 mover, u64 enemy) {
	const int shift = row<<3;
	const u64 enemy256 = (enemy>>shift)&0xFF;
	const int out = outsides[col][enemy256];
	const u64 mover256 = (mover>>shift)&0xFF;
	const int flipIndex = insides[col][mover256&out];
	return flipIndex;
}

inline int row0FlipIndex(int col, u64 mover, u64 enemy) {
	const u64 enemy256 = enemy&0xFF;
	const int out = outsides[col][enemy256];
	const u64 mover256 = mover&0xFF;
	const int flipIndex = insides[col][mover256&out];
	return flipIndex;
}

// -- begin generated code --
int countA0(u64 mover) {
	int count=0;

	count += counts[0][mover&0xFF];
	count += counts[0][(mover&0x8040201008040201)*MaskA>>56];
	count += counts[0][(mover&0x101010101010101)*0x102040810204080>>56];

	return count;
}

int countA1(u64 mover) {
	int count=0;

	count += counts[1][mover&0xFF];
	count += counts[1][(mover&0x80402010080402)*MaskA>>56];
	count += counts[0][(mover&0x202020202020202)*0x81020408102040>>56];

	return count;
}

int countA2(u64 mover) {
	int count=0;

	count += counts[2][mover&0xFF];
	count += counts[2][(mover&0x804020100804)*MaskA>>56];
	count += counts[0][(mover&0x404040404040404)*0x40810204081020>>56];
	count += counts[2][(mover&0x10204)*MaskA>>56];

	return count;
}

int countA3(u64 mover) {
	int count=0;

	count += counts[3][mover&0xFF];
	count += counts[3][(mover&0x8040201008)*MaskA>>56];
	count += counts[0][(mover&0x808080808080808)*0x20408102040810>>56];
	count += counts[3][(mover&0x1020408)*MaskA>>56];

	return count;
}

int countA4(u64 mover) {
	int count=0;

	count += counts[4][mover&0xFF];
	count += counts[4][(mover&0x80402010)*MaskA>>56];
	count += counts[0][(mover&0x1010101010101010)*0x10204081020408>>56];
	count += counts[4][(mover&0x102040810)*MaskA>>56];

	return count;
}

int countA5(u64 mover) {
	int count=0;

	count += counts[5][mover&0xFF];
	count += counts[5][(mover&0x804020)*MaskA>>56];
	count += counts[0][(mover&0x2020202020202020)*0x8102040810204>>56];
	count += counts[5][(mover&0x10204081020)*MaskA>>56];

	return count;
}

int countA6(u64 mover) {
	int count=0;

	count += counts[6][mover&0xFF];
	count += counts[0][(mover&0x4040404040404040)*0x4081020408102>>56];
	count += counts[6][(mover&0x1020408102040)*MaskA>>56];

	return count;
}

int countA7(u64 mover) {
	int count=0;

	count += counts[7][mover&0xFF];
	count += counts[0][(mover&0x8080808080808080)*0x2040810204081>>56];
	count += counts[7][(mover&0x102040810204080)*MaskA>>56];

	return count;
}

int countB0(u64 mover) {
	int count=0;

	count += counts[0][(mover >> 8)&0xFF];
	count += counts[0][(mover&0x4020100804020100)*MaskA>>56];
	count += counts[1][(mover&0x101010101010101)*0x102040810204080>>56];

	return count;
}

int countB1(u64 mover) {
	int count=0;

	count += counts[1][(mover >> 8)&0xFF];
	count += counts[1][(mover&0x8040201008040201)*MaskA>>56];
	count += counts[1][(mover&0x202020202020202)*0x81020408102040>>56];

	return count;
}

int countB2(u64 mover) {
	int count=0;

	count += counts[2][(mover >> 8)&0xFF];
	count += counts[2][(mover&0x80402010080402)*MaskA>>56];
	count += counts[1][(mover&0x404040404040404)*0x40810204081020>>56];
	count += counts[2][(mover&0x1020408)*MaskA>>56];

	return count;
}

int countB3(u64 mover) {
	int count=0;

	count += counts[3][(mover >> 8)&0xFF];
	count += counts[3][(mover&0x804020100804)*MaskA>>56];
	count += counts[1][(mover&0x808080808080808)*0x20408102040810>>56];
	count += counts[3][(mover&0x102040810)*MaskA>>56];

	return count;
}

int countB4(u64 mover) {
	int count=0;

	count += counts[4][(mover >> 8)&0xFF];
	count += counts[4][(mover&0x8040201008)*MaskA>>56];
	count += counts[1][(mover&0x1010101010101010)*0x10204081020408>>56];
	count += counts[4][(mover&0x10204081020)*MaskA>>56];

	return count;
}

int countB5(u64 mover) {
	int count=0;

	count += counts[5][(mover >> 8)&0xFF];
	count += counts[5][(mover&0x80402010)*MaskA>>56];
	count += counts[1][(mover&0x2020202020202020)*0x8102040810204>>56];
	count += counts[5][(mover&0x1020408102040)*MaskA>>56];

	return count;
}

int countB6(u64 mover) {
	int count=0;

	count += counts[6][(mover >> 8)&0xFF];
	count += counts[1][(mover&0x4040404040404040)*0x4081020408102>>56];
	count += counts[6][(mover&0x102040810204080)*MaskA>>56];

	return count;
}

int countB7(u64 mover) {
	int count=0;

	count += counts[7][(mover >> 8)&0xFF];
	count += counts[1][(mover&0x8080808080808080)*0x2040810204081>>56];
	count += counts[7][(mover&0x204081020408000)*MaskA>>56];

	return count;
}

int countC0(u64 mover) {
	int count=0;

	count += counts[0][(mover >> 16)&0xFF];
	count += counts[0][(mover&0x2010080402010000)*MaskA>>56];
	count += counts[2][(mover&0x101010101010101)*0x102040810204080>>56];
	count += counts[0][(mover&0x10204)*MaskA>>56];

	return count;
}

int countC1(u64 mover) {
	int count=0;

	count += counts[1][(mover >> 16)&0xFF];
	count += counts[1][(mover&0x4020100804020100)*MaskA>>56];
	count += counts[2][(mover&0x202020202020202)*0x81020408102040>>56];
	count += counts[1][(mover&0x1020408)*MaskA>>56];

	return count;
}

int countC2(u64 mover) {
	int count=0;

	count += counts[2][(mover >> 16)&0xFF];
	count += counts[2][(mover&0x8040201008040201)*MaskA>>56];
	count += counts[2][(mover&0x404040404040404)*0x40810204081020>>56];
	count += counts[2][(mover&0x102040810)*MaskA>>56];

	return count;
}

int countC3(u64 mover) {
	int count=0;

	count += counts[3][(mover >> 16)&0xFF];
	count += counts[3][(mover&0x80402010080402)*MaskA>>56];
	count += counts[2][(mover&0x808080808080808)*0x20408102040810>>56];
	count += counts[3][(mover&0x10204081020)*MaskA>>56];

	return count;
}

int countC4(u64 mover) {
	int count=0;

	count += counts[4][(mover >> 16)&0xFF];
	count += counts[4][(mover&0x804020100804)*MaskA>>56];
	count += counts[2][(mover&0x1010101010101010)*0x10204081020408>>56];
	count += counts[4][(mover&0x1020408102040)*MaskA>>56];

	return count;
}

int countC5(u64 mover) {
	int count=0;

	count += counts[5][(mover >> 16)&0xFF];
	count += counts[5][(mover&0x8040201008)*MaskA>>56];
	count += counts[2][(mover&0x2020202020202020)*0x8102040810204>>56];
	count += counts[5][(mover&0x102040810204080)*MaskA>>56];

	return count;
}

int countC6(u64 mover) {
	int count=0;

	count += counts[6][(mover >> 16)&0xFF];
	count += counts[6][(mover&0x80402010)*MaskA>>56];
	count += counts[2][(mover&0x4040404040404040)*0x4081020408102>>56];
	count += counts[6][(mover&0x204081020408000)*MaskA>>56];

	return count;
}

int countC7(u64 mover) {
	int count=0;

	count += counts[7][(mover >> 16)&0xFF];
	count += counts[7][(mover&0x804020)*MaskA>>56];
	count += counts[2][(mover&0x8080808080808080)*0x2040810204081>>56];
	count += counts[7][(mover&0x408102040800000)*MaskA>>56];

	return count;
}

int countD0(u64 mover) {
	int count=0;

	count += counts[0][(mover >> 24)&0xFF];
	count += counts[0][(mover&0x1008040201000000)*MaskA>>56];
	count += counts[3][(mover&0x101010101010101)*0x102040810204080>>56];
	count += counts[0][(mover&0x1020408)*MaskA>>56];

	return count;
}

int countD1(u64 mover) {
	int count=0;

	count += counts[1][(mover >> 24)&0xFF];
	count += counts[1][(mover&0x2010080402010000)*MaskA>>56];
	count += counts[3][(mover&0x202020202020202)*0x81020408102040>>56];
	count += counts[1][(mover&0x102040810)*MaskA>>56];

	return count;
}

int countD2(u64 mover) {
	int count=0;

	count += counts[2][(mover >> 24)&0xFF];
	count += counts[2][(mover&0x4020100804020100)*MaskA>>56];
	count += counts[3][(mover&0x404040404040404)*0x40810204081020>>56];
	count += counts[2][(mover&0x10204081020)*MaskA>>56];

	return count;
}

int countD3(u64 mover) {
	int count=0;

	count += counts[3][(mover >> 24)&0xFF];
	count += counts[3][(mover&0x8040201008040201)*MaskA>>56];
	count += counts[3][(mover&0x808080808080808)*0x20408102040810>>56];
	count += counts[3][(mover&0x1020408102040)*MaskA>>56];

	return count;
}

int countD4(u64 mover) {
	int count=0;

	count += counts[4][(mover >> 24)&0xFF];
	count += counts[4][(mover&0x80402010080402)*MaskA>>56];
	count += counts[3][(mover&0x1010101010101010)*0x10204081020408>>56];
	count += counts[4][(mover&0x102040810204080)*MaskA>>56];

	return count;
}

int countD5(u64 mover) {
	int count=0;

	count += counts[5][(mover >> 24)&0xFF];
	count += counts[5][(mover&0x804020100804)*MaskA>>56];
	count += counts[3][(mover&0x2020202020202020)*0x8102040810204>>56];
	count += counts[5][(mover&0x204081020408000)*MaskA>>56];

	return count;
}

int countD6(u64 mover) {
	int count=0;

	count += counts[6][(mover >> 24)&0xFF];
	count += counts[6][(mover&0x8040201008)*MaskA>>56];
	count += counts[3][(mover&0x4040404040404040)*0x4081020408102>>56];
	count += counts[6][(mover&0x408102040800000)*MaskA>>56];

	return count;
}

int countD7(u64 mover) {
	int count=0;

	count += counts[7][(mover >> 24)&0xFF];
	count += counts[7][(mover&0x80402010)*MaskA>>56];
	count += counts[3][(mover&0x8080808080808080)*0x2040810204081>>56];
	count += counts[7][(mover&0x810204080000000)*MaskA>>56];

	return count;
}

int countE0(u64 mover) {
	int count=0;

	count += counts[0][(mover >> 32)&0xFF];
	count += counts[0][(mover&0x804020100000000)*MaskA>>56];
	count += counts[4][(mover&0x101010101010101)*0x102040810204080>>56];
	count += counts[0][(mover&0x102040810)*MaskA>>56];

	return count;
}

int countE1(u64 mover) {
	int count=0;

	count += counts[1][(mover >> 32)&0xFF];
	count += counts[1][(mover&0x1008040201000000)*MaskA>>56];
	count += counts[4][(mover&0x202020202020202)*0x81020408102040>>56];
	count += counts[1][(mover&0x10204081020)*MaskA>>56];

	return count;
}

int countE2(u64 mover) {
	int count=0;

	count += counts[2][(mover >> 32)&0xFF];
	count += counts[2][(mover&0x2010080402010000)*MaskA>>56];
	count += counts[4][(mover&0x404040404040404)*0x40810204081020>>56];
	count += counts[2][(mover&0x1020408102040)*MaskA>>56];

	return count;
}

int countE3(u64 mover) {
	int count=0;

	count += counts[3][(mover >> 32)&0xFF];
	count += counts[3][(mover&0x4020100804020100)*MaskA>>56];
	count += counts[4][(mover&0x808080808080808)*0x20408102040810>>56];
	count += counts[3][(mover&0x102040810204080)*MaskA>>56];

	return count;
}

int countE4(u64 mover) {
	int count=0;

	count += counts[4][(mover >> 32)&0xFF];
	count += counts[4][(mover&0x8040201008040201)*MaskA>>56];
	count += counts[4][(mover&0x1010101010101010)*0x10204081020408>>56];
	count += counts[4][(mover&0x204081020408000)*MaskA>>56];

	return count;
}

int countE5(u64 mover) {
	int count=0;

	count += counts[5][(mover >> 32)&0xFF];
	count += counts[5][(mover&0x80402010080402)*MaskA>>56];
	count += counts[4][(mover&0x2020202020202020)*0x8102040810204>>56];
	count += counts[5][(mover&0x408102040800000)*MaskA>>56];

	return count;
}

int countE6(u64 mover) {
	int count=0;

	count += counts[6][(mover >> 32)&0xFF];
	count += counts[6][(mover&0x804020100804)*MaskA>>56];
	count += counts[4][(mover&0x4040404040404040)*0x4081020408102>>56];
	count += counts[6][(mover&0x810204080000000)*MaskA>>56];

	return count;
}

int countE7(u64 mover) {
	int count=0;

	count += counts[7][(mover >> 32)&0xFF];
	count += counts[7][(mover&0x8040201008)*MaskA>>56];
	count += counts[4][(mover&0x8080808080808080)*0x2040810204081>>56];
	count += counts[7][(mover&0x1020408000000000)*MaskA>>56];

	return count;
}

int countF0(u64 mover) {
	int count=0;

	count += counts[0][(mover >> 40)&0xFF];
	count += counts[0][(mover&0x402010000000000)*MaskA>>56];
	count += counts[5][(mover&0x101010101010101)*0x102040810204080>>56];
	count += counts[0][(mover&0x10204081020)*MaskA>>56];

	return count;
}

int countF1(u64 mover) {
	int count=0;

	count += counts[1][(mover >> 40)&0xFF];
	count += counts[1][(mover&0x804020100000000)*MaskA>>56];
	count += counts[5][(mover&0x202020202020202)*0x81020408102040>>56];
	count += counts[1][(mover&0x1020408102040)*MaskA>>56];

	return count;
}

int countF2(u64 mover) {
	int count=0;

	count += counts[2][(mover >> 40)&0xFF];
	count += counts[2][(mover&0x1008040201000000)*MaskA>>56];
	count += counts[5][(mover&0x404040404040404)*0x40810204081020>>56];
	count += counts[2][(mover&0x102040810204080)*MaskA>>56];

	return count;
}

int countF3(u64 mover) {
	int count=0;

	count += counts[3][(mover >> 40)&0xFF];
	count += counts[3][(mover&0x2010080402010000)*MaskA>>56];
	count += counts[5][(mover&0x808080808080808)*0x20408102040810>>56];
	count += counts[3][(mover&0x204081020408000)*MaskA>>56];

	return count;
}

int countF4(u64 mover) {
	int count=0;

	count += counts[4][(mover >> 40)&0xFF];
	count += counts[4][(mover&0x4020100804020100)*MaskA>>56];
	count += counts[5][(mover&0x1010101010101010)*0x10204081020408>>56];
	count += counts[4][(mover&0x408102040800000)*MaskA>>56];

	return count;
}

int countF5(u64 mover) {
	int count=0;

	count += counts[5][(mover >> 40)&0xFF];
	count += counts[5][(mover&0x8040201008040201)*MaskA>>56];
	count += counts[5][(mover&0x2020202020202020)*0x8102040810204>>56];
	count += counts[5][(mover&0x810204080000000)*MaskA>>56];

	return count;
}

int countF6(u64 mover) {
	int count=0;

	count += counts[6][(mover >> 40)&0xFF];
	count += counts[6][(mover&0x80402010080402)*MaskA>>56];
	count += counts[5][(mover&0x4040404040404040)*0x4081020408102>>56];
	count += counts[6][(mover&0x1020408000000000)*MaskA>>56];

	return count;
}

int countF7(u64 mover) {
	int count=0;

	count += counts[7][(mover >> 40)&0xFF];
	count += counts[7][(mover&0x804020100804)*MaskA>>56];
	count += counts[5][(mover&0x8080808080808080)*0x2040810204081>>56];
	count += counts[7][(mover&0x2040800000000000)*MaskA>>56];

	return count;
}

int countG0(u64 mover) {
	int count=0;

	count += counts[0][(mover >> 48)&0xFF];
	count += counts[6][(mover&0x101010101010101)*0x102040810204080>>56];
	count += counts[0][(mover&0x1020408102040)*MaskA>>56];

	return count;
}

int countG1(u64 mover) {
	int count=0;

	count += counts[1][(mover >> 48)&0xFF];
	count += counts[6][(mover&0x202020202020202)*0x81020408102040>>56];
	count += counts[1][(mover&0x102040810204080)*MaskA>>56];

	return count;
}

int countG2(u64 mover) {
	int count=0;

	count += counts[2][(mover >> 48)&0xFF];
	count += counts[2][(mover&0x804020100000000)*MaskA>>56];
	count += counts[6][(mover&0x404040404040404)*0x40810204081020>>56];
	count += counts[2][(mover&0x204081020408000)*MaskA>>56];

	return count;
}

int countG3(u64 mover) {
	int count=0;

	count += counts[3][(mover >> 48)&0xFF];
	count += counts[3][(mover&0x1008040201000000)*MaskA>>56];
	count += counts[6][(mover&0x808080808080808)*0x20408102040810>>56];
	count += counts[3][(mover&0x408102040800000)*MaskA>>56];

	return count;
}

int countG4(u64 mover) {
	int count=0;

	count += counts[4][(mover >> 48)&0xFF];
	count += counts[4][(mover&0x2010080402010000)*MaskA>>56];
	count += counts[6][(mover&0x1010101010101010)*0x10204081020408>>56];
	count += counts[4][(mover&0x810204080000000)*MaskA>>56];

	return count;
}

int countG5(u64 mover) {
	int count=0;

	count += counts[5][(mover >> 48)&0xFF];
	count += counts[5][(mover&0x4020100804020100)*MaskA>>56];
	count += counts[6][(mover&0x2020202020202020)*0x8102040810204>>56];
	count += counts[5][(mover&0x1020408000000000)*MaskA>>56];

	return count;
}

int countG6(u64 mover) {
	int count=0;

	count += counts[6][(mover >> 48)&0xFF];
	count += counts[6][(mover&0x8040201008040201)*MaskA>>56];
	count += counts[6][(mover&0x4040404040404040)*0x4081020408102>>56];

	return count;
}

int countG7(u64 mover) {
	int count=0;

	count += counts[7][(mover >> 48)&0xFF];
	count += counts[7][(mover&0x80402010080402)*MaskA>>56];
	count += counts[6][(mover&0x8080808080808080)*0x2040810204081>>56];

	return count;
}

int countH0(u64 mover) {
	int count=0;

	count += counts[0][(mover >> 56)&0xFF];
	count += counts[7][(mover&0x101010101010101)*0x102040810204080>>56];
	count += counts[0][(mover&0x102040810204080)*MaskA>>56];

	return count;
}

int countH1(u64 mover) {
	int count=0;

	count += counts[1][(mover >> 56)&0xFF];
	count += counts[7][(mover&0x202020202020202)*0x81020408102040>>56];
	count += counts[1][(mover&0x204081020408000)*MaskA>>56];

	return count;
}

int countH2(u64 mover) {
	int count=0;

	count += counts[2][(mover >> 56)&0xFF];
	count += counts[2][(mover&0x402010000000000)*MaskA>>56];
	count += counts[7][(mover&0x404040404040404)*0x40810204081020>>56];
	count += counts[2][(mover&0x408102040800000)*MaskA>>56];

	return count;
}

int countH3(u64 mover) {
	int count=0;

	count += counts[3][(mover >> 56)&0xFF];
	count += counts[3][(mover&0x804020100000000)*MaskA>>56];
	count += counts[7][(mover&0x808080808080808)*0x20408102040810>>56];
	count += counts[3][(mover&0x810204080000000)*MaskA>>56];

	return count;
}

int countH4(u64 mover) {
	int count=0;

	count += counts[4][(mover >> 56)&0xFF];
	count += counts[4][(mover&0x1008040201000000)*MaskA>>56];
	count += counts[7][(mover&0x1010101010101010)*0x10204081020408>>56];
	count += counts[4][(mover&0x1020408000000000)*MaskA>>56];

	return count;
}

int countH5(u64 mover) {
	int count=0;

	count += counts[5][(mover >> 56)&0xFF];
	count += counts[5][(mover&0x2010080402010000)*MaskA>>56];
	count += counts[7][(mover&0x2020202020202020)*0x8102040810204>>56];
	count += counts[5][(mover&0x2040800000000000)*MaskA>>56];

	return count;
}

int countH6(u64 mover) {
	int count=0;

	count += counts[6][(mover >> 56)&0xFF];
	count += counts[6][(mover&0x4020100804020100)*MaskA>>56];
	count += counts[7][(mover&0x4040404040404040)*0x4081020408102>>56];

	return count;
}

int countH7(u64 mover) {
	int count=0;

	count += counts[7][(mover >> 56)&0xFF];
	count += counts[7][(mover&0x8040201008040201)*MaskA>>56];
	count += counts[7][(mover&0x8080808080808080)*0x2040810204081>>56];

	return count;
}

typedef int(*TCount)(u64 mover);

static const TCount countFunctions[64] = {
	&countA0, &countA1, &countA2, &countA3, &countA4, &countA5, &countA6, &countA7, 
	&countB0, &countB1, &countB2, &countB3, &countB4, &countB5, &countB6, &countB7, 
	&countC0, &countC1, &countC2, &countC3, &countC4, &countC5, &countC6, &countC7, 
	&countD0, &countD1, &countD2, &countD3, &countD4, &countD5, &countD6, &countD7, 
	&countE0, &countE1, &countE2, &countE3, &countE4, &countE5, &countE6, &countE7, 
	&countF0, &countF1, &countF2, &countF3, &countF4, &countF5, &countF6, &countF7, 
	&countG0, &countG1, &countG2, &countG3, &countG4, &countG5, &countG6, &countG7, 
	&countH0, &countH1, &countH2, &countH3, &countH4, &countH5, &countH6, &countH7, 
};

u64 flipA0(u64 mover, u64 enemy) {
	const int row = 0;
	const int col = 0;

	u64 flip=0;

	const int rowIndex = row0FlipIndex(col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x8040201008040201, 0x101010101010101);
	flip |= d9Flips[5][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x101010101010101, 0x102040810204080);
	flip |= colFlips[col][colIndex];

	return flip;
}

u64 flipA1(u64 mover, u64 enemy) {
	const int row = 0;
	const int col = 1;

	u64 flip=0;

	const int rowIndex = row0FlipIndex(col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x80402010080402, 0x101010101010101);
	flip |= d9Flips[4][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x202020202020202, 0x81020408102040);
	flip |= colFlips[col][colIndex];

	return flip;
}

u64 flipA2(u64 mover, u64 enemy) {
	const int row = 0;
	const int col = 2;

	u64 flip=0;

	const int rowIndex = row0FlipIndex(col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x804020100804, 0x101010101010101);
	flip |= d9Flips[3][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x404040404040404, 0x40810204081020);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x10204, 0x101010101010101);
	flip |= d7Flips[0][d7Index];

	return flip;
}

u64 flipA3(u64 mover, u64 enemy) {
	const int row = 0;
	const int col = 3;

	u64 flip=0;

	const int rowIndex = row0FlipIndex(col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x8040201008, 0x101010101010101);
	flip |= d9Flips[2][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x808080808080808, 0x20408102040810);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x1020408, 0x101010101010101);
	flip |= d7Flips[1][d7Index];

	return flip;
}

u64 flipA4(u64 mover, u64 enemy) {
	const int row = 0;
	const int col = 4;

	u64 flip=0;

	const int rowIndex = row0FlipIndex(col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x80402010, 0x101010101010101);
	flip |= d9Flips[1][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x1010101010101010, 0x10204081020408);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x102040810, 0x101010101010101);
	flip |= d7Flips[2][d7Index];

	return flip;
}

u64 flipA5(u64 mover, u64 enemy) {
	const int row = 0;
	const int col = 5;

	u64 flip=0;

	const int rowIndex = row0FlipIndex(col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x804020, 0x101010101010101);
	flip |= d9Flips[0][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x2020202020202020, 0x8102040810204);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x10204081020, 0x101010101010101);
	flip |= d7Flips[3][d7Index];

	return flip;
}

u64 flipA6(u64 mover, u64 enemy) {
	const int row = 0;
	const int col = 6;

	u64 flip=0;

	const int rowIndex = row0FlipIndex(col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int colIndex = flipIndex(row, mover, enemy, 0x4040404040404040, 0x4081020408102);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x1020408102040, 0x101010101010101);
	flip |= d7Flips[4][d7Index];

	return flip;
}

u64 flipA7(u64 mover, u64 enemy) {
	const int row = 0;
	const int col = 7;

	u64 flip=0;

	const int rowIndex = row0FlipIndex(col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int colIndex = flipIndex(row, mover, enemy, 0x8080808080808080, 0x2040810204081);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x102040810204080, 0x101010101010101);
	flip |= d7Flips[5][d7Index];

	return flip;
}

u64 flipB0(u64 mover, u64 enemy) {
	const int row = 1;
	const int col = 0;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x4020100804020100, 0x101010101010101);
	flip |= d9Flips[6][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x101010101010101, 0x102040810204080);
	flip |= colFlips[col][colIndex];

	return flip;
}

u64 flipB1(u64 mover, u64 enemy) {
	const int row = 1;
	const int col = 1;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x8040201008040201, 0x101010101010101);
	flip |= d9Flips[5][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x202020202020202, 0x81020408102040);
	flip |= colFlips[col][colIndex];

	return flip;
}

u64 flipB2(u64 mover, u64 enemy) {
	const int row = 1;
	const int col = 2;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x80402010080402, 0x101010101010101);
	flip |= d9Flips[4][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x404040404040404, 0x40810204081020);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x1020408, 0x101010101010101);
	flip |= d7Flips[1][d7Index];

	return flip;
}

u64 flipB3(u64 mover, u64 enemy) {
	const int row = 1;
	const int col = 3;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x804020100804, 0x101010101010101);
	flip |= d9Flips[3][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x808080808080808, 0x20408102040810);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x102040810, 0x101010101010101);
	flip |= d7Flips[2][d7Index];

	return flip;
}

u64 flipB4(u64 mover, u64 enemy) {
	const int row = 1;
	const int col = 4;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x8040201008, 0x101010101010101);
	flip |= d9Flips[2][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x1010101010101010, 0x10204081020408);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x10204081020, 0x101010101010101);
	flip |= d7Flips[3][d7Index];

	return flip;
}

u64 flipB5(u64 mover, u64 enemy) {
	const int row = 1;
	const int col = 5;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x80402010, 0x101010101010101);
	flip |= d9Flips[1][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x2020202020202020, 0x8102040810204);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x1020408102040, 0x101010101010101);
	flip |= d7Flips[4][d7Index];

	return flip;
}

u64 flipB6(u64 mover, u64 enemy) {
	const int row = 1;
	const int col = 6;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int colIndex = flipIndex(row, mover, enemy, 0x4040404040404040, 0x4081020408102);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x102040810204080, 0x101010101010101);
	flip |= d7Flips[5][d7Index];

	return flip;
}

u64 flipB7(u64 mover, u64 enemy) {
	const int row = 1;
	const int col = 7;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int colIndex = flipIndex(row, mover, enemy, 0x8080808080808080, 0x2040810204081);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x204081020408000, 0x101010101010101);
	flip |= d7Flips[6][d7Index];

	return flip;
}

u64 flipC0(u64 mover, u64 enemy) {
	const int row = 2;
	const int col = 0;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x2010080402010000, 0x101010101010101);
	flip |= d9Flips[7][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x101010101010101, 0x102040810204080);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x10204, 0x101010101010101);
	flip |= d7Flips[0][d7Index];

	return flip;
}

u64 flipC1(u64 mover, u64 enemy) {
	const int row = 2;
	const int col = 1;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x4020100804020100, 0x101010101010101);
	flip |= d9Flips[6][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x202020202020202, 0x81020408102040);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x1020408, 0x101010101010101);
	flip |= d7Flips[1][d7Index];

	return flip;
}

u64 flipC2(u64 mover, u64 enemy) {
	const int row = 2;
	const int col = 2;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x8040201008040201, 0x101010101010101);
	flip |= d9Flips[5][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x404040404040404, 0x40810204081020);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x102040810, 0x101010101010101);
	flip |= d7Flips[2][d7Index];

	return flip;
}

u64 flipC3(u64 mover, u64 enemy) {
	const int row = 2;
	const int col = 3;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x80402010080402, 0x101010101010101);
	flip |= d9Flips[4][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x808080808080808, 0x20408102040810);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x10204081020, 0x101010101010101);
	flip |= d7Flips[3][d7Index];

	return flip;
}

u64 flipC4(u64 mover, u64 enemy) {
	const int row = 2;
	const int col = 4;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x804020100804, 0x101010101010101);
	flip |= d9Flips[3][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x1010101010101010, 0x10204081020408);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x1020408102040, 0x101010101010101);
	flip |= d7Flips[4][d7Index];

	return flip;
}

u64 flipC5(u64 mover, u64 enemy) {
	const int row = 2;
	const int col = 5;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x8040201008, 0x101010101010101);
	flip |= d9Flips[2][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x2020202020202020, 0x8102040810204);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x102040810204080, 0x101010101010101);
	flip |= d7Flips[5][d7Index];

	return flip;
}

u64 flipC6(u64 mover, u64 enemy) {
	const int row = 2;
	const int col = 6;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x80402010, 0x101010101010101);
	flip |= d9Flips[1][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x4040404040404040, 0x4081020408102);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x204081020408000, 0x101010101010101);
	flip |= d7Flips[6][d7Index];

	return flip;
}

u64 flipC7(u64 mover, u64 enemy) {
	const int row = 2;
	const int col = 7;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x804020, 0x101010101010101);
	flip |= d9Flips[0][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x8080808080808080, 0x2040810204081);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x408102040800000, 0x101010101010101);
	flip |= d7Flips[7][d7Index];

	return flip;
}

u64 flipD0(u64 mover, u64 enemy) {
	const int row = 3;
	const int col = 0;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x1008040201000000, 0x101010101010101);
	flip |= d9Flips[8][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x101010101010101, 0x102040810204080);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x1020408, 0x101010101010101);
	flip |= d7Flips[1][d7Index];

	return flip;
}

u64 flipD1(u64 mover, u64 enemy) {
	const int row = 3;
	const int col = 1;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x2010080402010000, 0x101010101010101);
	flip |= d9Flips[7][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x202020202020202, 0x81020408102040);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x102040810, 0x101010101010101);
	flip |= d7Flips[2][d7Index];

	return flip;
}

u64 flipD2(u64 mover, u64 enemy) {
	const int row = 3;
	const int col = 2;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x4020100804020100, 0x101010101010101);
	flip |= d9Flips[6][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x404040404040404, 0x40810204081020);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x10204081020, 0x101010101010101);
	flip |= d7Flips[3][d7Index];

	return flip;
}

u64 flipD3(u64 mover, u64 enemy) {
	const int row = 3;
	const int col = 3;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x8040201008040201, 0x101010101010101);
	flip |= d9Flips[5][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x808080808080808, 0x20408102040810);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x1020408102040, 0x101010101010101);
	flip |= d7Flips[4][d7Index];

	return flip;
}

u64 flipD4(u64 mover, u64 enemy) {
	const int row = 3;
	const int col = 4;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x80402010080402, 0x101010101010101);
	flip |= d9Flips[4][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x1010101010101010, 0x10204081020408);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x102040810204080, 0x101010101010101);
	flip |= d7Flips[5][d7Index];

	return flip;
}

u64 flipD5(u64 mover, u64 enemy) {
	const int row = 3;
	const int col = 5;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x804020100804, 0x101010101010101);
	flip |= d9Flips[3][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x2020202020202020, 0x8102040810204);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x204081020408000, 0x101010101010101);
	flip |= d7Flips[6][d7Index];

	return flip;
}

u64 flipD6(u64 mover, u64 enemy) {
	const int row = 3;
	const int col = 6;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x8040201008, 0x101010101010101);
	flip |= d9Flips[2][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x4040404040404040, 0x4081020408102);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x408102040800000, 0x101010101010101);
	flip |= d7Flips[7][d7Index];

	return flip;
}

u64 flipD7(u64 mover, u64 enemy) {
	const int row = 3;
	const int col = 7;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x80402010, 0x101010101010101);
	flip |= d9Flips[1][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x8080808080808080, 0x2040810204081);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x810204080000000, 0x101010101010101);
	flip |= d7Flips[8][d7Index];

	return flip;
}

u64 flipE0(u64 mover, u64 enemy) {
	const int row = 4;
	const int col = 0;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x804020100000000, 0x101010101010101);
	flip |= d9Flips[9][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x101010101010101, 0x102040810204080);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x102040810, 0x101010101010101);
	flip |= d7Flips[2][d7Index];

	return flip;
}

u64 flipE1(u64 mover, u64 enemy) {
	const int row = 4;
	const int col = 1;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x1008040201000000, 0x101010101010101);
	flip |= d9Flips[8][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x202020202020202, 0x81020408102040);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x10204081020, 0x101010101010101);
	flip |= d7Flips[3][d7Index];

	return flip;
}

u64 flipE2(u64 mover, u64 enemy) {
	const int row = 4;
	const int col = 2;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x2010080402010000, 0x101010101010101);
	flip |= d9Flips[7][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x404040404040404, 0x40810204081020);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x1020408102040, 0x101010101010101);
	flip |= d7Flips[4][d7Index];

	return flip;
}

u64 flipE3(u64 mover, u64 enemy) {
	const int row = 4;
	const int col = 3;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x4020100804020100, 0x101010101010101);
	flip |= d9Flips[6][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x808080808080808, 0x20408102040810);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x102040810204080, 0x101010101010101);
	flip |= d7Flips[5][d7Index];

	return flip;
}

u64 flipE4(u64 mover, u64 enemy) {
	const int row = 4;
	const int col = 4;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x8040201008040201, 0x101010101010101);
	flip |= d9Flips[5][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x1010101010101010, 0x10204081020408);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x204081020408000, 0x101010101010101);
	flip |= d7Flips[6][d7Index];

	return flip;
}

u64 flipE5(u64 mover, u64 enemy) {
	const int row = 4;
	const int col = 5;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x80402010080402, 0x101010101010101);
	flip |= d9Flips[4][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x2020202020202020, 0x8102040810204);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x408102040800000, 0x101010101010101);
	flip |= d7Flips[7][d7Index];

	return flip;
}

u64 flipE6(u64 mover, u64 enemy) {
	const int row = 4;
	const int col = 6;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x804020100804, 0x101010101010101);
	flip |= d9Flips[3][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x4040404040404040, 0x4081020408102);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x810204080000000, 0x101010101010101);
	flip |= d7Flips[8][d7Index];

	return flip;
}

u64 flipE7(u64 mover, u64 enemy) {
	const int row = 4;
	const int col = 7;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x8040201008, 0x101010101010101);
	flip |= d9Flips[2][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x8080808080808080, 0x2040810204081);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x1020408000000000, 0x101010101010101);
	flip |= d7Flips[9][d7Index];

	return flip;
}

u64 flipF0(u64 mover, u64 enemy) {
	const int row = 5;
	const int col = 0;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x402010000000000, 0x101010101010101);
	flip |= d9Flips[10][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x101010101010101, 0x102040810204080);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x10204081020, 0x101010101010101);
	flip |= d7Flips[3][d7Index];

	return flip;
}

u64 flipF1(u64 mover, u64 enemy) {
	const int row = 5;
	const int col = 1;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x804020100000000, 0x101010101010101);
	flip |= d9Flips[9][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x202020202020202, 0x81020408102040);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x1020408102040, 0x101010101010101);
	flip |= d7Flips[4][d7Index];

	return flip;
}

u64 flipF2(u64 mover, u64 enemy) {
	const int row = 5;
	const int col = 2;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x1008040201000000, 0x101010101010101);
	flip |= d9Flips[8][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x404040404040404, 0x40810204081020);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x102040810204080, 0x101010101010101);
	flip |= d7Flips[5][d7Index];

	return flip;
}

u64 flipF3(u64 mover, u64 enemy) {
	const int row = 5;
	const int col = 3;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x2010080402010000, 0x101010101010101);
	flip |= d9Flips[7][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x808080808080808, 0x20408102040810);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x204081020408000, 0x101010101010101);
	flip |= d7Flips[6][d7Index];

	return flip;
}

u64 flipF4(u64 mover, u64 enemy) {
	const int row = 5;
	const int col = 4;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x4020100804020100, 0x101010101010101);
	flip |= d9Flips[6][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x1010101010101010, 0x10204081020408);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x408102040800000, 0x101010101010101);
	flip |= d7Flips[7][d7Index];

	return flip;
}

u64 flipF5(u64 mover, u64 enemy) {
	const int row = 5;
	const int col = 5;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x8040201008040201, 0x101010101010101);
	flip |= d9Flips[5][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x2020202020202020, 0x8102040810204);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x810204080000000, 0x101010101010101);
	flip |= d7Flips[8][d7Index];

	return flip;
}

u64 flipF6(u64 mover, u64 enemy) {
	const int row = 5;
	const int col = 6;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x80402010080402, 0x101010101010101);
	flip |= d9Flips[4][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x4040404040404040, 0x4081020408102);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x1020408000000000, 0x101010101010101);
	flip |= d7Flips[9][d7Index];

	return flip;
}

u64 flipF7(u64 mover, u64 enemy) {
	const int row = 5;
	const int col = 7;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x804020100804, 0x101010101010101);
	flip |= d9Flips[3][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x8080808080808080, 0x2040810204081);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x2040800000000000, 0x101010101010101);
	flip |= d7Flips[10][d7Index];

	return flip;
}

u64 flipG0(u64 mover, u64 enemy) {
	const int row = 6;
	const int col = 0;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int colIndex = flipIndex(row, mover, enemy, 0x101010101010101, 0x102040810204080);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x1020408102040, 0x101010101010101);
	flip |= d7Flips[4][d7Index];

	return flip;
}

u64 flipG1(u64 mover, u64 enemy) {
	const int row = 6;
	const int col = 1;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int colIndex = flipIndex(row, mover, enemy, 0x202020202020202, 0x81020408102040);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x102040810204080, 0x101010101010101);
	flip |= d7Flips[5][d7Index];

	return flip;
}

u64 flipG2(u64 mover, u64 enemy) {
	const int row = 6;
	const int col = 2;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x804020100000000, 0x101010101010101);
	flip |= d9Flips[9][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x404040404040404, 0x40810204081020);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x204081020408000, 0x101010101010101);
	flip |= d7Flips[6][d7Index];

	return flip;
}

u64 flipG3(u64 mover, u64 enemy) {
	const int row = 6;
	const int col = 3;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x1008040201000000, 0x101010101010101);
	flip |= d9Flips[8][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x808080808080808, 0x20408102040810);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x408102040800000, 0x101010101010101);
	flip |= d7Flips[7][d7Index];

	return flip;
}

u64 flipG4(u64 mover, u64 enemy) {
	const int row = 6;
	const int col = 4;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x2010080402010000, 0x101010101010101);
	flip |= d9Flips[7][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x1010101010101010, 0x10204081020408);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x810204080000000, 0x101010101010101);
	flip |= d7Flips[8][d7Index];

	return flip;
}

u64 flipG5(u64 mover, u64 enemy) {
	const int row = 6;
	const int col = 5;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x4020100804020100, 0x101010101010101);
	flip |= d9Flips[6][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x2020202020202020, 0x8102040810204);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x1020408000000000, 0x101010101010101);
	flip |= d7Flips[9][d7Index];

	return flip;
}

u64 flipG6(u64 mover, u64 enemy) {
	const int row = 6;
	const int col = 6;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x8040201008040201, 0x101010101010101);
	flip |= d9Flips[5][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x4040404040404040, 0x4081020408102);
	flip |= colFlips[col][colIndex];

	return flip;
}

u64 flipG7(u64 mover, u64 enemy) {
	const int row = 6;
	const int col = 7;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x80402010080402, 0x101010101010101);
	flip |= d9Flips[4][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x8080808080808080, 0x2040810204081);
	flip |= colFlips[col][colIndex];

	return flip;
}

u64 flipH0(u64 mover, u64 enemy) {
	const int row = 7;
	const int col = 0;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int colIndex = flipIndex(row, mover, enemy, 0x101010101010101, 0x102040810204080);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x102040810204080, 0x101010101010101);
	flip |= d7Flips[5][d7Index];

	return flip;
}

u64 flipH1(u64 mover, u64 enemy) {
	const int row = 7;
	const int col = 1;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int colIndex = flipIndex(row, mover, enemy, 0x202020202020202, 0x81020408102040);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x204081020408000, 0x101010101010101);
	flip |= d7Flips[6][d7Index];

	return flip;
}

u64 flipH2(u64 mover, u64 enemy) {
	const int row = 7;
	const int col = 2;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x402010000000000, 0x101010101010101);
	flip |= d9Flips[10][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x404040404040404, 0x40810204081020);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x408102040800000, 0x101010101010101);
	flip |= d7Flips[7][d7Index];

	return flip;
}

u64 flipH3(u64 mover, u64 enemy) {
	const int row = 7;
	const int col = 3;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x804020100000000, 0x101010101010101);
	flip |= d9Flips[9][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x808080808080808, 0x20408102040810);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x810204080000000, 0x101010101010101);
	flip |= d7Flips[8][d7Index];

	return flip;
}

u64 flipH4(u64 mover, u64 enemy) {
	const int row = 7;
	const int col = 4;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x1008040201000000, 0x101010101010101);
	flip |= d9Flips[8][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x1010101010101010, 0x10204081020408);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x1020408000000000, 0x101010101010101);
	flip |= d7Flips[9][d7Index];

	return flip;
}

u64 flipH5(u64 mover, u64 enemy) {
	const int row = 7;
	const int col = 5;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x2010080402010000, 0x101010101010101);
	flip |= d9Flips[7][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x2020202020202020, 0x8102040810204);
	flip |= colFlips[col][colIndex];
	const int d7Index = flipIndex(col, mover, enemy, 0x2040800000000000, 0x101010101010101);
	flip |= d7Flips[10][d7Index];

	return flip;
}

u64 flipH6(u64 mover, u64 enemy) {
	const int row = 7;
	const int col = 6;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x4020100804020100, 0x101010101010101);
	flip |= d9Flips[6][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x4040404040404040, 0x4081020408102);
	flip |= colFlips[col][colIndex];

	return flip;
}

u64 flipH7(u64 mover, u64 enemy) {
	const int row = 7;
	const int col = 7;

	u64 flip=0;

	const int rowIndex = rowFlipIndex(row, col, mover, enemy);
	flip |= rowFlips[row][rowIndex];
	const int d9Index = flipIndex(col, mover, enemy, 0x8040201008040201, 0x101010101010101);
	flip |= d9Flips[5][d9Index];
	const int colIndex = flipIndex(row, mover, enemy, 0x8080808080808080, 0x2040810204081);
	flip |= colFlips[col][colIndex];

	return flip;
}

typedef u64(*TFlip)(u64,u64);

static const TFlip flipFunctions[64] = {
	&flipA0, &flipA1, &flipA2, &flipA3, &flipA4, &flipA5, &flipA6, &flipA7, 
	&flipB0, &flipB1, &flipB2, &flipB3, &flipB4, &flipB5, &flipB6, &flipB7, 
	&flipC0, &flipC1, &flipC2, &flipC3, &flipC4, &flipC5, &flipC6, &flipC7, 
	&flipD0, &flipD1, &flipD2, &flipD3, &flipD4, &flipD5, &flipD6, &flipD7, 
	&flipE0, &flipE1, &flipE2, &flipE3, &flipE4, &flipE5, &flipE6, &flipE7, 
	&flipF0, &flipF1, &flipF2, &flipF3, &flipF4, &flipF5, &flipF6, &flipF7, 
	&flipG0, &flipG1, &flipG2, &flipG3, &flipG4, &flipG5, &flipG6, &flipG7, 
	&flipH0, &flipH1, &flipH2, &flipH3, &flipH4, &flipH5, &flipH6, &flipH7, 
};

// -- end generated code --

/**
* Calculate # of disks flipped, given that there is only 1 empty left
* Because there's only one empty, and we know the mover bitboard and the empty square, we don't need the enemy bitboard
* @param mover mover bitboard
* @return number of disks flipped with 1 empty
*/
int lastFlipCount(int sq, u64 mover) {
	if (neighbors[sq]&~mover) {
		return countFunctions[sq](mover);
	}
	else {
		return 0;
	}
}

const bool useKoggeStoneFlips = false;

u64 flips(int sq, u64 mover, u64 enemy) {
	if (neighbors[sq]&enemy) {
		if (useKoggeStoneFlips) {
			return koggeStoneFlips(sq, mover, enemy);
		}
		else {
			return flipFunctions[sq](mover, enemy);
		}
	}
	else {
		return 0;
	}
}

