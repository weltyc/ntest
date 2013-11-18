// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

// utility stuff

#pragma once

#ifndef _H_UTILS
#define _H_UTILS

#include <iostream>
#include <string>
#include "types.h"

/////////////////////////////////////////
// Generic types
/////////////////////////////////////////

// for compatibility with unix-like OS
#ifdef __unix__

typedef long long __int64;
#include <unistd.h>

#endif //__unix__

inline void CHECKNEW(bool x) {
	if (!x) {
		std::cerr << "New failed in " << __FILE__ << " line " << __LINE__ << "\n";
		_exit(-1);
	}
}

/////////////////////////////////////////
// Min and Max
/////////////////////////////////////////

inline i2 Max(i2 a, i2 b) {return a>b?a:b;};
inline i2 Min(i2 a, i2 b) {return a<b?a:b;};
int Sign(int a);

/////////////////////////////////////////
// node value type
/////////////////////////////////////////

std::string StringFromValue(CValue value);
std::string StringFromValuePair(CValue value1, CValue value2);

//////////////////////////////////////
// Constants
//////////////////////////////////////

enum direction { north, south, east, west, northeast,southwest, northwest, southeast };

const CValue kStoneValue = 100;
const CValue kWipeout = 64*kStoneValue;
const CValue kMaxHeuristic = kWipeout-1;
const CValue kMaxBonus = 10000;
const CValue kInfinity = kWipeout+kMaxBonus;

enum {
	A1=000, B1=001, C1=002, D1=003, E1=004, F1=005, G1=006, H1=007,
	A2=010, B2=011, C2=012, D2=013, E2=014, F2=015, G2=016, H2=017,
	A3=020, B3=021, C3=022, D3=023, E3=024, F3=025, G3=026, H3=027,
	A4=030, B4=031, C4=032, D4=033, E4=034, F4=035, G4=036, H4=037,
	A5=040, B5=041, C5=042, D5=043, E5=044, F5=045, G5=046, H5=047,
	A6=050, B6=051, C6=052, D6=053, E6=054, F6=055, G6=056, H6=057,
	A7=060, B7=061, C7=062, D7=063, E7=064, F7=065, G7=066, H7=067,
	A8=070, B8=071, C8=072, D8=073, E8=074, F8=075, G8=076, H8=077,
};

//////////////////////////////////////////
// bit routines
//////////////////////////////////////////

u2 CountBits(u4 a);

inline u2 CountBitsInline(u4 a)  {
	const u4 cbmask1=0x55555555;
	const u4 cbmask2=0x33333333;
	const u4 cbmask4=0x0F0F0F0F;

	a=(a&cbmask1)+((a>>1)&cbmask1);
	a=(a&cbmask2)+((a>>2)&cbmask2);
	a=(a&0xFFFF)+(a>>16);
	a=(a&cbmask4)+((a>>4)&cbmask4);
	a=(a&0xFF)+(a>>8);
	return (u2)a;
}

//////////////////////////////////////////
// hash functions
//////////////////////////////////////////

// bob jenkins hash.
// usage example with four u4s of data:
//	a=b=0; c=data[0];
//	bobMix(a,b,c);
//	a+=data[1]; b+=data[2]; c+=data[3];
//	bobMix(a,b,c);
//	return c;

inline void bobMix(u4& a, u4& b, u4& c) {
	a-=b; a-=c; a^= (c>>13);
	b-=c; b-=a; b^= (a<<8);
	c-=a; c-=b; c^= (b>>13);
	a-=b; a-=c; a^= (c>>12);
	b-=c; b-=a; b^= (a<<16);
	c-=a; c-=b; c^= (b>>5);
	a-=b; a-=c; a^= (c>>3);
	b-=c; b-=a; b^= (a<<10);
	c-=a; c-=b; c^= (b>>15);
};

// bob jenkins older hash, 'lookup'. May not be as great but it works on 4 bytes at a time
inline void bobLookup(u4& a, u4& b, u4& c, u4& d) {
	a+=d; d+=a; a^=(a>>7);
	b+=a; a+=b; b^=(b<<13);
	c+=b; b+=c; c^=(c>>17);
	d+=c; c+=d; d^=(d<<9);
	a+=d; d+=a; a^=(a>>3);
	b+=a; a+=b; b^=(b<<7);
	c+=b; b+=c; c^=(c>>15);
	d+=c; c+=d; d^=(d<<11);
};

inline u4 Hash4(u4 a, u4 b, u4 c, u4 d){
	bobLookup(a,b,c,d);
	return d;
}

///////////////////////////////////////////
// Coefficient type
///////////////////////////////////////////

typedef i4 TCoeff;


// square values
const int WHITE=0;
const int EMPTY=1;
const int BLACK=2;

// convert from various board characters to (0,1,2) and back again
int  TextToValue(char c);
char ValueToText(int item);

// convert from square number to row and column
inline int Row(int square) {
	if (N==8)
		return square>>3;
	else
		return square/N;
}

inline int Col(int square) {
	if (N==8)
		return square&7;
	else
		return square%N;
}

inline char RowText(int square) {
	return Row(square)+'1';
}

inline char ColText(int square) {
	return Col(square)+'A';
}

inline int Square(int row, int col) {
	if (N==8)
		return (row<<3)+col;
	else
		return row*N+col;
}

#endif // defined(_H_UTILS)