#include "stdafx.h"
#include <cassert>
#include <cstring>
#include <string>

const static char* header = "  7 6 5 4 3 2 1 0\n";

void printBitBoard(u64 bits) {
    printBoard(bits, 0);
}

void printBoard(u64 black, u64 white) {
    std::cout << "\n";
    std::cout << header;
    for (int row = 7; row >=0; row--) {
    	std::cout << char(row+'A');
    	for (int col=7; col>=0; col--) {
    		std::cout << " ";
    		const int sq = square(row, col);
    		if (bitSet(sq, black)) {
    			std::cout << "*";
    		}
    		else if (bitSet(sq, white)) {
    			std::cout << "O";
    		}
    		else {
    			std::cout << ".";
    		}
    	}
    	std::cout << " " << char(row+'A') << "\n";
    }
    std::cout << header;
    std::cout << "Black: " << bitCount(black) << "  White: " << bitCount(white) << "  Empty: " << bitCount(~(black|white)) << "\n";
}

static const char* xorPieces = ".|-+";

void printXorBoard(u64 expected, u64 actual) {
    std::cout << "\n";
    std::cout << "Expected: |, Actual: -, Both: +, Neither: .\n";
    std::cout << header;
    for (int row = 7; row >=0; row--) {
    	std::cout << char(row+'A');
    	for (int col=7; col>=0; col--) {
    		std::cout << " ";
    		const int sq = square(row, col);
    		const int index = bit(sq, expected)+bit(sq,actual)*2;
    		std::cout << xorPieces[index];
    	}
    	std::cout << " " << char(row+'A') << "\n";
    }
    std::cout << header;
    std::cout << "Expected: " << bitCount(expected) << "  Actual: " << bitCount(actual) << "\n";
}

std::string squareText(int row, int col) {
    std::string s;
    s+=((char)(row+'A'));
    s+=(char)(col+'0');
    return s;
}

std::string squareText(int sq) {
    return squareText(row(sq), col(sq));
}

std::string asHex(u64 bits) {
    std::ostringstream s;
    s << "0x" << std::hex << bits;
    return std::string(s.str());
}

/**
* Format number in engineering notation, 3 significant figures
* @param d number to display. Must be positive.
*/
std::string eng(double d) {
    return eng(d, 3);
}

/**
* Format number in engineering notation,
*
* @param d number to display. Must be positive.
* @param precision number of significant figures
*/
std::string eng(double d, int precision) {
    // find exponent, base 1000
    char siCode;

    if (d==0) {
    	return std::string("0.00 ");
    }
    if (d>=.9995) {
    	int exponent = 0;
    	while (d > 999.5 && exponent < 6) {
    		d*=.001;
    		exponent++;
    	}
    	siCode = " kMGTEP"[exponent];
    }
    else {
    	int exponent = 0;
    	while (d < .9995 && exponent < 6) {
    		d*=1000;
    		exponent++;
    	}
    	siCode = " munpfa"[exponent];
    }

    std::ostringstream s;
    s.precision(precision);
    s << std::showpoint;
    s << d << siCode;
    return s.str();
}

static u64 r64(int shift) {
    return ((u64) rand())<<shift;
}

u64 rand64() {
    return r64(0) ^ r64(15) ^ r64(30) ^ r64(45) ^ r64(60);
}

u64 mobility(u64 mover, u64 enemy) {
    const u64 middle = ~(MaskA|MaskH);

    u64 mobility = 0;

    // horizontal mobility, empty to the right of mover
    u64 p1 = enemy&middle;
    u64 g1 = (mover>>1)&p1;
    g1|= p1&(g1>>1);
    p1&=p1>>1;
    g1|= p1&(g1>>2);
    g1 |= p1&(g1>>2);
    mobility|= g1 >> 1;

    // horizontal mobility, empty to the left of mover
    u64 p2 = enemy&middle;
    u64 g2 = (mover<<1)&p2;
    g2|= p2&(g2<<1);
    p2&=p2<<1;
    g2|= p2&(g2<<2);
    g2 |= p2&(g2<<2);
    mobility|= g2 << 1;

    // vertical mobility, empty above mover
    u64 p3 = enemy;
    u64 g3 = (mover<<8)&p3;
    g3|= p3&(g3<<8);
    p3&=p3<<8;
    g3|= p3&(g3<<16);
    g3 |= p3&(g3<<16);
    mobility|= g3 << 8;

    // vertical mobility, empty above mover
    u64 p4 = enemy;
    u64 g4 = (mover>>8)&p4;
    g4|= p4&(g4>>8);
    p4&=p4>>8;
    g4|= p4&(g4>>16);
    g4 |= p4&(g4>>16);
    mobility|= g4 >> 8;

    // diagonal mobility, empty = mover + 9x
    u64 p5 = enemy&middle;
    u64 g5 = (mover<<9)&p5;
    g5|= p5&(g5<<9);
    p5&=p5<<9;
    g5|= p5&(g5<<18);
    g5 |= p5&(g5<<18);
    mobility|= g5 <<9;

    // diagonal mobility, empty = mover - 9x
    u64 p6 = enemy&middle;
    u64 g6 = (mover>>9)&p6;
    g6|= p6&(g6>>9);
    p6&=p6>>9;
    g6|= p6&(g6>>18);
    g6 |= p6&(g6>>18);
    mobility|= g6 >>9;

    // diagonal mobility, empty = mover + 7x
    u64 p7 = enemy&middle;
    u64 g7 = (mover<<7)&p7;
    g7|= p7&(g7<<7);
    p7&=p7<<7;
    g7|= p7&(g7<<14);
    g7 |= p7&(g7<<14);
    mobility|= g7 <<7;

    // diagonal mobility, empty = mover - 7x
    u64 p8 = enemy&middle;
    u64 g8 = (mover >>7)&p8;
    g8|= p8&(g8>>7);
    p8&=p8>>7;
    g8|= p8&(g8>>14);
    g8 |= p8&(g8>>14);
    mobility|= g8 >>7;

    return mobility&~(mover | enemy);
}

/**
* flips where mover is to the right of enemy
* @param enemy enemy bits, must be pre-masked to middle rows if n is not 8
* @param n size of right shift (1,7,8,9)
*/
inline u64 rightLeft(u64 sqMask, u64 mover, u64 enemy, int n) {
    u64 p1 = enemy;
    u64 g1 = (sqMask>>n)&p1;
    g1|= p1&(g1>>n);
    p1&=p1>>n;
    g1|= p1&(g1>>2*n);
    p1&=p1>>2*n;
    g1 |= p1&(g1>>4*n);
    g1= (g1 >> n)&mover;
    p1 = enemy;
    g1|= p1&(g1<<n);
    p1&=p1<<n;
    g1|= p1&(g1<<2*n);
    p1&=p1<<2*n;
    g1 |= p1&(g1<<4*n);
    return g1;
}

/**
* flips where mover is to the left of enemy.
* @param enemy enemy bits, must be pre-masked to middle rows if n is not 8
* @param n size of left shift (1,7,8,9)
*/
inline u64 leftRight(u64 sqMask, u64 mover, u64 enemy, int n) {
    u64 p1 = enemy;
    u64 g1 = (sqMask<<n)&p1;
    g1|= p1&(g1<<n);
    p1&=p1<<n;
    g1|= p1&(g1<<2*n);
    p1&=p1<<2*n;
    g1 |= p1&(g1<<4*n);
    g1= (g1 << n)&mover;
    p1 = enemy;
    g1|= p1&(g1>>n);
    p1&=p1>>n;
    g1|= p1&(g1>>2*n);
    p1&=p1>>2*n;
    g1 |= p1&(g1>>4*n);
    return g1;
}

u64 koggeStoneFlips(int sq, u64 mover, u64 enemy) {
    const u64 middle = ~(MaskA|MaskH);
    const u64 sqMask = mask(sq);
    u64 flips = 0;

    u64 p1 = enemy&middle;
    u64 g1 = (sqMask<<1)&p1;
    g1|= p1&(g1<<1);
    p1&=p1<<1;
    g1|= p1&(g1<<2*1);
    p1&=p1<<2*1;
    g1 |= p1&(g1<<4*1);
    g1= (g1 << 1)&mover;
    p1 = enemy&middle;
    g1|= p1&(g1>>1);
    p1&=p1>>1;
    g1|= p1&(g1>>2*1);
    p1&=p1>>2*1;
    g1 |= p1&(g1>>4*1);
    flips |= g1;

    u64 p7 = enemy&middle;
    u64 g7 = (sqMask<<7)&p7;
    g7|= p7&(g7<<7);
    p7&=p7<<7;
    g7|= p7&(g7<<2*7);
    p7&=p7<<2*7;
    g7 |= p7&(g7<<4*7);
    g7= (g7 << 7)&mover;
    p7 = enemy&middle;
    g7|= p7&(g7>>7);
    p7&=p7>>7;
    g7|= p7&(g7>>2*7);
    p7&=p7>>2*7;
    g7 |= p7&(g7>>4*7);
    flips|= g7;

    u64 p9 = enemy&middle;
    u64 g9 = (sqMask<<9)&p9;
    g9|= p9&(g9<<9);
    p9&=p9<<9;
    g9|= p9&(g9<<2*9);
    p9&=p9<<2*9;
    g9 |= p9&(g9<<4*9);
    g9= (g9 << 9)&mover;
    p9 = enemy&middle;
    g9|= p9&(g9>>9);
    p9&=p9>>9;
    g9|= p9&(g9>>2*9);
    p9&=p9>>2*9;
    g9 |= p9&(g9>>4*9);
    flips |= g9;

    u64 p8 = enemy;
    u64 g8 = (sqMask<<8)&p8;
    g8|= p8&(g8<<8);
    p8&=p8<<8;
    g8|= p8&(g8<<2*8);
    p8&=p8<<2*8;
    g8 |= p8&(g8<<4*8);
    g8= (g8 << 8)&mover;
    p8 = enemy;
    g8|= p8&(g8>>8);
    p8&=p8>>8;
    g8|= p8&(g8>>2*8);
    p8&=p8>>2*8;
    g8 |= p8&(g8>>4*8);
    flips |= g8;

    u64 p_1 = enemy&middle;
    u64 g_1 = (sqMask>>1)&p_1;
    g_1|= p_1&(g_1>>1);
    p_1&=p_1>>1;
    g_1|= p_1&(g_1>>2*1);
    p_1&=p_1>>2*1;
    g_1 |= p_1&(g_1>>4*1);
    g_1= (g_1 >> 1)&mover;
    p_1 = enemy&middle;
    g_1|= p_1&(g_1<<1);
    p_1&=p_1<<1;
    g_1|= p_1&(g_1<<2*1);
    p_1&=p_1<<2*1;
    g_1 |= p_1&(g_1<<4*1);
    flips |= g_1;

    u64 p_7 = enemy&middle;
    u64 g_7 = (sqMask>>7)&p_7;
    g_7|= p_7&(g_7>>7);
    p_7&=p_7>>7;
    g_7|= p_7&(g_7>>2*7);
    p_7&=p_7>>2*7;
    g_7 |= p_7&(g_7>>4*7);
    g_7= (g_7 >> 7)&mover;
    p_7 = enemy&middle;
    g_7|= p_7&(g_7<<7);
    p_7&=p_7<<7;
    g_7|= p_7&(g_7<<2*7);
    p_7&=p_7<<2*7;
    g_7 |= p_7&(g_7<<4*7);
    flips|= g_7;

    u64 p_9 = enemy&middle;
    u64 g_9 = (sqMask>>9)&p_9;
    g_9|= p_9&(g_9>>9);
    p_9&=p_9>>9;
    g_9|= p_9&(g_9>>2*9);
    p_9&=p_9>>2*9;
    g_9 |= p_9&(g_9>>4*9);
    g_9= (g_9 >> 9)&mover;
    p_9 = enemy&middle;
    g_9|= p_9&(g_9<<9);
    p_9&=p_9<<9;
    g_9|= p_9&(g_9<<2*9);
    p_9&=p_9<<2*9;
    g_9 |= p_9&(g_9<<4*9);
    flips |= g_9;

    u64 p_8 = enemy;
    u64 g_8 = (sqMask>>8)&p_8;
    g_8|= p_8&(g_8>>8);
    p_8&=p_8>>8;
    g_8|= p_8&(g_8>>2*8);
    p_8&=p_8>>2*8;
    g_8 |= p_8&(g_8>>4*8);
    g_8= (g_8 >> 8)&mover;
    p_8 = enemy;
    g_8|= p_8&(g_8<<8);
    p_8&=p_8<<8;
    g_8|= p_8&(g_8<<2*8);
    p_8&=p_8<<2*8;
    g_8 |= p_8&(g_8<<4*8);
    flips |= g_8;

    return flips & enemy;
}

const u64 hflipmask4=0x0F0F0F0F0F0F0F0FULL;
const u64 hflipmask2=0x3333333333333333ULL;
const u64 hflipmask1=0x5555555555555555ULL;

u64 flipHorizontal(u64 bits) {
    u64 templ, tempr;

    templ=bits&hflipmask4;
    tempr=bits&~hflipmask4;
    bits=(templ<<4) | (tempr>>4);

    templ=bits&hflipmask2;
    tempr=bits&~hflipmask2;
    bits=(templ<<2) | (tempr>>2);

    templ=bits&hflipmask1;
    tempr=bits&~hflipmask1;
    bits=(templ<<1) | (tempr>>1);

    return bits;
}

// Copyright Chris Welty
//  All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.

// source code for utils


#include "utils.h"
#include "types.h"

#include <stdio.h>
#include <sstream>
#include <cassert>

int Sign(int n) {
    if (n<0)
    	return -1;
    else
    	return n>0;
}

//! Return the string representation of a value, nicely formatted.
std::string StringFromValue(CValue value) {
    std::ostringstream os;
    os.precision(2);
    os.setf(std::ios::showpos | std::ios::fixed, std::ios::floatfield);
    os << double(value)/kStoneValue;

    return os.str();
}

//! Return the string representation of a value pair, nicely formatted.
//!
//! If the two values are equal we just output one of them, otherwise we output both separated by commas.
std::string StringFromValuePair(CValue value1, CValue value2) {
    std::ostringstream os;
    os.precision(2);
    os.setf(std::ios::showpos | std::ios::fixed, std::ios::floatfield);
    os << double(value1)/kStoneValue;
    if (value1!=value2)
    	os << "," << double(value2)/kStoneValue;

    return os.str();
}

void str_upper(char *str) {
    for(;*str; str++) {
    	*str = toupper(*str);
    }
}


// print a prompt, and repeatedly get lines until a character in answers is pressed on the keyboard
//    answers must be upper-case letters only.
// print the prompt again after every repeatAfter lines are entered, or never if repeatAfter==0.
// print the prompt to file fp (usually STDERR or STDOUT).

char GetAnswer(const char* prompt, const char* answers, int repeatAfter, FILE* fp) {
    char input[500], *finder;
    int ntimes;

    while (1) {
    	fputs(prompt, fp);
    	for (ntimes=0; (ntimes<repeatAfter) || !repeatAfter; ntimes++)  {
    		int count = scanf("%499s", input);
    		assert(count);
    		str_upper(input);
    		if ((finder=strpbrk(input, answers)))
    			return *finder;
    	}
    }
}

char ValueToText(int value) {
    switch(value) {
    case WHITE: return 'O';
    case EMPTY: return '-';
    case BLACK: return '*';
    default: assert(0); return '?';
    }
}

int TextToValue(char c) {
    switch(toupper(c)) {
    case 'O':
    case '0':
    case 'W':
    	return WHITE;
    case '*':
    case 'X':
    case '+':
    case 'B':
    	return BLACK;
    case '.':
    case '_':
    case '-':
    	return EMPTY;
    default:
    	assert(0);
    	return EMPTY;
    }
}

std::string fnBaseDir("./");
