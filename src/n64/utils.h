#pragma once

#ifdef _WIN32
#include <intrin.h>
#endif

#include <inttypes.h>

#include <string>

#include "types.h"

inline int bit(int index, u64 bits) {
    // using _bittest64 seems slightly slower (2% endgame, same midgame),
    // could be random timing variation but not going to use it
    return ((bits>>index)&1);
}

inline bool bitClear(int index, u64 bits) {
    return bit(index, bits)==0;
}

inline bool bitSet(int index, u64 bits) {
    return bit(index, bits)!=0;
}

/**
 * low order 32 bits
 */
inline u32 low32(u64 n) {
    return u32(n);
}

/**
 * hi order 32 bits
 */
inline u32 hi32(u64 n) {
    return u32(n>>32);
}

/**
* Count number of 1 bits
* 
* This is tuned for 64-bit implementations but needs to work under 32-bit for testing.
* @param bits bitboard
* @return number of '1' bits in the bitboard.
*/
inline u64 bitCount(u64 bits) {
#if __GNUC__ >= 4
    return __builtin_popcountll(bits);
#elif defined(_WIN32)
#ifdef _M_AMD64
    return __popcnt64(bits);
#else
    return __popcnt(u32(bits)) + __popcnt(u32(bits>>32));
#endif
#else 
#error "Unknown compiler"
#endif
}

inline void storeLowBitIndex(unsigned long& result, u64 bits) {
#if __GNUC__ >= 4
    result = bits? __builtin_ctzll(bits) : 0;
#elif defined(_WIN32)
#ifdef _M_AMD64
    _BitScanForward64(&result, bits);
#else 
    if (!_BitScanForward(&result, low32(bits))) {
    	_BitScanForward(&result, hi32(bits));
    	result+=32;
    }
#endif
#else
#error "Unknown compiler"
#endif
}

inline int bitCountInt(u64 bits) {
    return int(bitCount(bits));
}

inline unsigned long lowBitIndex(u64 bits) {
    unsigned long result;
    storeLowBitIndex(result, bits);
    return result;
}

inline unsigned long popLowBit(u64& bits) {
    unsigned long result;
    storeLowBitIndex(result, bits);
    bits&=bits-1;
    return result;
}

inline int square(int row, int col) {
    return (row<<3)+col;
}

inline int col(int square) {
    return square & 7;
}

inline int row(int square) {
    return square>>3;
}

inline u64 mask(int square) {
    return 1ULL<<square;
}

inline u64 mask(int row, int col) {
    return mask(square(row, col));
}

inline u64 flipVertical(u64 a) {
#if __GNUC__ >= 4
    return __builtin_bswap64(a);
#elif defined(_WIN32)
    return _byteswap_uint64(a);
#else
#error "Unknown compiler"
#endif
}

u64 flipHorizontal(u64 bits);

inline u64 flipDiagonal(u64 v) {
    // flip 4-by-4 bits
    v = (v & 0xf0f0f0f00f0f0f0fULL)
        | ((v >> 28) & 0xf0f0f0f0ULL)
        | ((v & 0xf0f0f0f0ULL) << 28);
    // flip 2-by-2 bits
    v = (v & 0xcccc3333cccc3333ULL)
        | ((v & 0x0000cccc0000ccccULL) << 14)
        | ((v & 0x3333000033330000ULL) >> 14);
    // flip 1-by-1 bits
    return (v & 0xaa55aa55aa55aa55ULL)
        | ((v & 0x00aa00aa00aa00aaULL) << 7)
        | ((v & 0x5500550055005500ULL) >> 7);
}


void printBitBoard(u64 bits);
void printBoard(u64 black, u64 white);
void printXorBoard(u64 expected, u64 actual);

const u64 MaskA = 0x0101010101010101;
const u64 MaskB = MaskA << 1;
const u64 MaskC = MaskA << 2;
const u64 MaskD = MaskA << 3;
const u64 MaskE = MaskA << 4;
const u64 MaskF = MaskA << 5;
const u64 MaskG = MaskA << 6;
const u64 MaskH = MaskA << 7;
const u64 MaskA1H8 = 0x8040201008040201;
const u64 MaskA8H1 = 0x0102040810204080;

// square type masks (for move ordering)
const u64 corners =  0x8100000000000081ULL;
const u64 cSquares = 0x4281000000008142ULL;
const u64 xSquares = 0x0042000000004200ULL;
const u64 other = ~(corners|xSquares);


std::string squareText(int row, int col);
std::string squareText(int sq);
std::string asHex(u64 bits);
std::string eng(double d);
std::string eng(double d, int precision);

u64 rand64();
u64 mobility(u64 mover, u64 enemy);
u64 koggeStoneFlips(int sq, u64 mover, u64 enemy);


// Copyright Chris Welty
//  All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.

// utility stuff
#ifndef _H_UTILS
#define _H_UTILS

#include <iostream>
#include <string>

/////////////////////////////////////////
// Generic types
/////////////////////////////////////////

// for compatibility with unix-like OS
#ifndef _WIN32

#include <unistd.h>

#endif //_WIN32

inline void CHECKNEW(bool x) {
    if (!x) {
    	std::cerr << "New failed in " << __FILE__ << " line " << __LINE__ << "\n";
    	_exit(-1);
    }
}

/////////////////////////////////////////
// Sign
/////////////////////////////////////////

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
// hash functions
//////////////////////////////////////////

// bob jenkins hash.
// usage example with four u4s of data:
//    a=b=0; c=data[0];
//    bobMix(a,b,c);
//    a+=data[1]; b+=data[2]; c+=data[3];
//    bobMix(a,b,c);
//    return c;

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

// directory where the program is located
extern std::string fnBaseDir;

#endif // defined(_H_UTILS)
