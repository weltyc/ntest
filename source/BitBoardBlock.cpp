// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

// BitBoardBlock source code

#include "BitBoardBlock.h"

u2 CountBits(u8 a) {
	return CountBitsInline(a);
}

//////////////////////////////////////
// CBitBoardBlock class
//////////////////////////////////////

CBitBoardBlock CBitBoardBlock::Symmetry(int sym) {
	CBitBoardBlock result;

	result=*this;

	if (sym&1)
		result.FlipVertical();
	if (sym&2)
		result.FlipHorizontal();
	if (sym&4)
		result.FlipDiagonal();

	return result;
}

void CBitBoardBlock::FlipVertical() {
	int i;
	u1 temp;

	for (i=0; i<4; i++) {
		temp=u1s[i]; u1s[i]=u1s[7-i]; u1s[7-i]=temp;
	}
}

const u4 hflipmask4=0x0F0F0F0F;
const u4 hflipmask2=0x33333333;
const u4 hflipmask1=0x55555555;

void CBitBoardBlock::FlipHorizontal32(u4& rows) {
	u4 templ, tempr;

	templ=rows&hflipmask4;
	tempr=rows&~hflipmask4;
	rows=(templ<<4) | (tempr>>4);

	templ=rows&hflipmask2;
	tempr=rows&~hflipmask2;
	rows=(templ<<2) | (tempr>>2);

	templ=rows&hflipmask1;
	tempr=rows&~hflipmask1;
	rows=(templ<<1) | (tempr>>1);
}

void CBitBoardBlock::FlipHorizontal() {
	FlipHorizontal32(u4s[0]);
	FlipHorizontal32(u4s[1]);
}

const u4 dflipmask4L=0xF0F0F0F0;
const u4 dflipmask4R=0x0F0F0F0F;
const u4 dflipmask2L=0x0000CCCC;
const u4 dflipmask2R=0x33330000;
const u4 dflipmask1L=0x00AA00AA;
const u4 dflipmask1R=0x55005500;

void CBitBoardBlock::FlipDiagonal32(u4& rows) {
	u4 templ, tempr;

	templ=dflipmask2L&rows;
	tempr=dflipmask2R&rows;
	rows^=(templ|tempr);
	rows|=(templ<<14)|(tempr>>14);

	templ=dflipmask1L&rows;
	tempr=dflipmask1R&rows;
	rows^=(templ|tempr);
	rows|=(templ<<7)|(tempr>>7);
}

void CBitBoardBlock::FlipDiagonal() {
	u4 templ, tempr;

	templ=dflipmask4L&u4s[0];
	tempr=dflipmask4R&u4s[1];
	u4s[0]^=templ;
	u4s[1]^=tempr;
	u4s[0]|=tempr<<4;
	u4s[1]|=templ>>4;
	FlipDiagonal32(u4s[0]);
	FlipDiagonal32(u4s[1]);
}

