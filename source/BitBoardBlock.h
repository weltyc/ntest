// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

// BitBoard header file

#pragma once

#include "types.h"

/////////////////////////////////////////
// u8 data type
/////////////////////////////////////////

class u8 {
public:
	union {
		i8 i8s;
		u4 u4s[2];
		u2 u2s[4];
		u1 u1s[8];
	};


	// access operator
	const u4& operator[](int a)const {return u4s[a];};
	u4& operator[](int a) {return u4s[a];};

	// bit operators
	u8 operator&(const u8& b) const { u8 result; result[0]=u4s[0]&b[0]; result[1]=u4s[1]&b[1]; return result;};
	u8 operator|(const u8& b) const { u8 result; result[0]=u4s[0]|b[0]; result[1]=u4s[1]|b[1]; return result;};
	u8 operator^(const u8& b) const { u8 result; result[0]=u4s[0]^b[0]; result[1]=u4s[1]^b[1]; return result;};
	u8 operator~() const { u8 result; result[0]=~u4s[0]; result[1]=~u4s[1]; return result;};
	u8 operator<<(int n) const {u8 result; result[1]=(u4s[1]<<n)|(u4s[0]>>(32-n)); result[0]=u4s[0]<<n; return result;}
	u8 operator>>(int n) const {u8 result; result[0]=(u4s[0]>>n)|(u4s[1]<<(32-n)); result[1]=u4s[1]>>n; return result;}

	// assignment operators
	u8 operator&=(const u8& b) { u4s[0]&=b[0]; u4s[1]&=b[1]; return *this;};
	u8 operator|=(const u8& b) { u4s[0]|=b[0]; u4s[1]|=b[1]; return *this;};
	u8 operator^=(const u8& b) { u4s[0]^=b[0]; u4s[1]^=b[1]; return *this;};
	u8 operator=(const u8& b) { u4s[0] =b[0]; u4s[1] =b[1]; return *this;};
	u8 operator<<=(int n) {u4s[1]=(u4s[1]<<n)|(u4s[0]>>(32-n)); u4s[0]<<=n; return *this;}
	u8 operator>>=(int n) {u4s[0]=(u4s[0]>>n)|(u4s[1]<<(32-n)); u4s[1]>>=n; return *this;}

	// comparison operators
	bool operator==(const u8& b) const { return u4s[0]==b[0] && u4s[1]==b[1];}
	bool operator!=(const u8& b) const { return !(*this==b);}
	bool operator<(const u8& b) const { return (u4s[1]==b[1])?(u4s[0]<b[0]):(u4s[1]<b[1]);};
	bool operator>(const u8& b) const { return (u4s[0]==b[0])?(u4s[1]>b[1]):(u4s[0]>b[0]);};

	// other operators
	bool operator!() const { return u4s[0]==0 && u4s[1]==0; };

	void SetBit(int n)		{ u4s[n>>5]|=(1<<(n&31)); }
	void FlipBit(int n)		{ u4s[n>>5]^=(1<<(n&31)); }
	void ClearBit(int n)	{ u4s[n>>5]&=~(1<<(n&31)); }

	int GetBit(int n) const { return u4s[n>>5]&(1<<(n&31)); }	// returns nonzero if bit is set, but not guaranteed to be 1
};

u2 CountBits(u8 a);

const u4 cbmask1=0x55555555;
const u4 cbmask2=0x33333333;
const u4 cbmask4=0x0F0F0F0F;

inline u2 CountBitsInline(u8 a) {
	u4 count;

	a[0]=(a[0]&cbmask1)+((a[0]>>1)&cbmask1);
	a[0]=(a[0]&cbmask2)+((a[0]>>2)&cbmask2);
	a[1]=(a[1]&cbmask1)+((a[1]>>1)&cbmask1);
	a[1]=(a[1]&cbmask2)+((a[1]>>2)&cbmask2);
	count=a[0]+a[1];
	count=(count&cbmask4)+((count>>4)&cbmask4);
	count=(count&0xFFFF)+(count>>16);
	count=(count&0xFF)+(count>>8);

	return (u2)count;
}

//////////////////////////////////////
// CBitBoardBlock class
//////////////////////////////////////

class CBitBoardBlock : public u8 {
public:
	CBitBoardBlock() {};
	CBitBoardBlock(const u8& b) { u4s[0]=b[0]; u4s[1]=b[1];};
	void Clear();
	CBitBoardBlock Symmetry(int sym);

	void FlipHorizontal();
	void FlipVertical();
	void FlipDiagonal();

private:
	void FlipHorizontal32(u4& rows);
	void FlipDiagonal32(u4& rows);
};

inline void CBitBoardBlock::Clear() {u4s[0]=u4s[1]=0;};
