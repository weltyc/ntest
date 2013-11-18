//////////////////////////////////////////////////////////////
//															//
//	Module			:	bitboard routines					//
//	File			:	bbm.cpp								//
//	Author			:	Dmitriy Iassenev					//
//  Copyright		:	Dmitriy Iassenev					//
//															//
//	All Rights Reserved										//
//  This file is distributed subject to GNU GPL version 2.	//
//	See the file GPL.txt for details.						//
//															//
//  Hacked up a bit by Chris Welty to fit ntest. All
//	functions except the best one (try_bitboard_mobility3)
//	have been removed. This function has been renamed  to
//	DimaMobility; a modified version returns available
//	moves in mm0 (DimaMoves).
//////////////////////////////////////////////////////////////

#include "bbm.h"

typedef unsigned __int64 u64;

static const u64 c55555555					= 0x5555555555555555;
static const u64 c33333333					= 0x3333333333333333;
static const u64 c0f0f0f0f					= 0x0f0f0f0f0f0f0f0f;
static const u64 nega_one					= 0xffffffffffffffff;
static const u64 clear_first_column			= 0xfefefefefefefefe;
static const u64 clear_last_column			= 0x7f7f7f7f7f7f7f7f;
static const u64 clear_first_last_column	= clear_first_column & clear_last_column;

//! Calculate possible moves for 1 player.
//!
//! \note The function's return value is in an MMX register, so
//! the calling function must emit an EMMS instruction.
//! Some compilers warn that "this function has no EMMS instruction" but
//! it is supposed to be this way.
//!
//! \param my_bits Bitboard containing bits of player to move
//! \param opp_bits Bitboard containing bits of opponent
//! \post possible moves in mm0, in mmx mode
//!
//!
//! Based on Dima's function 
//! int try_bitboard_mobility3(const BitBoard my_bits, const BitBoard opp_bits)
void DimaMoves(const __int64 my_bits, const __int64 opp_bits) {
	__asm {
		pxor	mm0,	mm0;			// possible moves
		movq	mm1,	my_bits;		// my bits
		movq	mm2,	opp_bits;		// opponent bits
		movq	mm3,	mm1;
		por		mm3,	mm2;
		pxor	mm3,	nega_one;		// empties

		// computing columns
		movq	mm4,	mm1;
		movq	mm6,	mm1;

		psllq	mm4,	8;
		psrlq	mm6,	8;

		pand	mm4,	mm2;
		pand	mm6,	mm2;

		// 1		
		psllq	mm4,	8;
		psrlq	mm6,	8;

		movq	mm5,	mm4;
		movq	mm7,	mm6;

		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand    mm6,    mm2;
	
		pand    mm4,    mm2;
		por		mm0,	mm7;
		// 2
		psllq	mm4,	8;
		psrlq	mm6,	8;

		movq	mm5,	mm4;
		movq	mm7,	mm6;

		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand    mm6,    mm2;
	
		pand    mm4,    mm2;
		por		mm0,	mm7;
		// 3		
		psllq	mm4,	8;
		psrlq	mm6,	8;

		movq	mm5,	mm4;
		movq	mm7,	mm6;

		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand    mm6,    mm2;
	
		pand    mm4,    mm2;
		por		mm0,	mm7;
		// 4		
		psllq	mm4,	8;
		psrlq	mm6,	8;

		movq	mm5,	mm4;
		movq	mm7,	mm6;

		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand    mm6,    mm2;
	
		pand    mm4,    mm2;
		por		mm0,	mm7;
		// 5		
		psllq	mm4,	8;
		psrlq	mm6,	8;

		movq	mm5,	mm4;
		movq	mm7,	mm6;

		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand    mm6,    mm2;
	
		pand    mm4,    mm2;
		por		mm0,	mm7;
		// 6		
		psllq	mm4,	8;
		psrlq	mm6,	8;

		pand	mm4,	mm3;
		pand	mm6,	mm3;

		por		mm0,	mm4;
		por		mm0,	mm6;
		
		// the next 2 instructions are dummy, but without them it works a bit slower (166 instead of 170 cycles on my Athlon XP 2600+)
		nop;
		nop;

		// computing rows
		movq	mm4,	mm1;
		movq	mm6,	mm1;

		psllq	mm4,	1;
		psrlq	mm6,	1;

		movq	mm1,	mm2;
		
		pand	mm4,	mm2;
		pand	mm6,	mm2;

		pand	mm4,	clear_first_last_column;
		pand	mm6,	clear_first_last_column;
		
		pand	mm1,	clear_last_column;
		pand	mm2,	clear_first_column;

		// 1		
		psllq	mm4,	1;
		psrlq	mm6,	1;

		movq	mm5,	mm4;
		movq	mm7,	mm6;
		
		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand	mm6,	mm2;

		pand	mm4,	mm1;
		por		mm0,	mm7;
		// 2		
		psllq	mm4,	1;
		psrlq	mm6,	1;

		movq	mm5,	mm4;
		movq	mm7,	mm6;
		
		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand	mm6,	mm2;

		pand	mm4,	mm1;
		por		mm0,	mm7;
		// 3		
		psllq	mm4,	1;
		psrlq	mm6,	1;

		movq	mm5,	mm4;
		movq	mm7,	mm6;
		
		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand	mm6,	mm2;

		pand	mm4,	mm1;
		por		mm0,	mm7;
		// 4		
		psllq	mm4,	1;
		psrlq	mm6,	1;

		movq	mm5,	mm4;
		movq	mm7,	mm6;
		
		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand	mm6,	mm2;

		pand	mm4,	mm1;
		por		mm0,	mm7;
		// 5		
		psllq	mm4,	1;
		psrlq	mm6,	1;

		movq	mm5,	mm4;
		movq	mm7,	mm6;
		
		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand	mm6,	mm2;

		pand	mm4,	mm1;
		por		mm0,	mm7;
		// 6		
		psllq	mm4,	1;
		psrlq	mm6,	1;

		pand	mm4,	mm3;
		pand	mm6,	mm3;

		por		mm0,	mm4;
		por		mm0,	mm6;
		
		// computing right-top-left-down diagonals
		movq	mm1,	my_bits;
		movq	mm2,	opp_bits;

		movq	mm4,	mm1;
		movq	mm6,	mm1;

		pand	mm2,	clear_last_column;

		psllq	mm4,	9;
		psrlq	mm6,	7;

		pand	mm4,	clear_first_column;
		pand	mm6,	clear_first_column;

		pand	mm4,	mm2;
		pand	mm6,	mm2;
		
		// 1		
		psllq	mm4,	9;
		psrlq	mm6,	7;

		movq	mm5,	mm4;
		movq	mm7,	mm6;

		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand    mm6,    mm2;
	
		pand    mm4,    mm2;
		por		mm0,	mm7;
		// 2		
		psllq	mm4,	9;
		psrlq	mm6,	7;

		movq	mm5,	mm4;
		movq	mm7,	mm6;

		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand    mm6,    mm2;
	
		pand    mm4,    mm2;
		por		mm0,	mm7;
		// 3		
		psllq	mm4,	9;
		psrlq	mm6,	7;

		movq	mm5,	mm4;
		movq	mm7,	mm6;

		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand    mm6,    mm2;
	
		pand    mm4,    mm2;
		por		mm0,	mm7;
		// 4		
		psllq	mm4,	9;
		psrlq	mm6,	7;

		movq	mm5,	mm4;
		movq	mm7,	mm6;

		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand    mm6,    mm2;
	
		pand    mm4,    mm2;
		por		mm0,	mm7;
		// 5		
		psllq	mm4,	9;
		psrlq	mm6,	7;

		movq	mm5,	mm4;
		movq	mm7,	mm6;

		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand    mm6,    mm2;
	
		pand    mm4,    mm2;
		por		mm0,	mm7;
		// 6		
		psllq	mm4,	9;
		psrlq	mm6,	7;

		pand	mm4,	mm3;
		pand	mm6,	mm3;

		por		mm0,	mm4;
		por		mm0,	mm6;
		
		// computing right-top-left-down diagonals
		movq	mm4,	mm1;
		movq	mm2,	opp_bits;
		movq	mm6,	mm1;

		psllq	mm4,	7;
		psrlq	mm6,	9;
		
		pand	mm2,	clear_first_column;

		pand	mm4,	clear_last_column;
		pand	mm6,	clear_last_column;

		pand	mm4,	mm2;
		pand	mm6,	mm2;
		// 1		
		psllq	mm4,	7;
		psrlq	mm6,	9;

		movq	mm5,	mm4;
		movq	mm7,	mm6;

		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand    mm6,    mm2;
	
		pand    mm4,    mm2;
		por		mm0,	mm7;
		// 2		
		psllq	mm4,	7;
		psrlq	mm6,	9;

		movq	mm5,	mm4;
		movq	mm7,	mm6;

		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand    mm6,    mm2;
	
		pand    mm4,    mm2;
		por		mm0,	mm7;
		// 3		
		psllq	mm4,	7;
		psrlq	mm6,	9;

		movq	mm5,	mm4;
		movq	mm7,	mm6;

		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand    mm6,    mm2;
	
		pand    mm4,    mm2;
		por		mm0,	mm7;
		// 4		
		psllq	mm4,	7;
		psrlq	mm6,	9;

		movq	mm5,	mm4;
		movq	mm7,	mm6;

		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand    mm6,    mm2;
	
		pand    mm4,    mm2;
		por		mm0,	mm7;
		// 5		
		psllq	mm4,	7;
		psrlq	mm6,	9;

		movq	mm5,	mm4;
		movq	mm7,	mm6;

		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand    mm6,    mm2;
	
		pand    mm4,    mm2;
		por		mm0,	mm7;
		// 6		
		psllq	mm4,	7;
		psrlq	mm6,	9;

		pand	mm4,	mm3;
		pand	mm6,	mm3;

		por		mm0,	mm4;
		por		mm0,	mm6;
	}
}

//! DimaMobility() - return the number of moves for the mover
//! \param my_bits Bitboard containing bits of player to move
//! \param opp_bits Bitboard containing bits of opponent
//! \return number of moves for the player whose bits are in mm1
//! Based on Dima's function 
//! int try_bitboard_mobility3(const BitBoard my_bits, const BitBoard opp_bits)
int DimaMobility(const __int64 my_bits, const __int64 opp_bits) {
	__asm {
		pxor	mm0,	mm0;			// possible moves
		movq	mm1,	my_bits;		// my bits
		movq	mm2,	opp_bits;		// opponent bits
		movq	mm3,	mm1;
		por		mm3,	mm2;
		pxor	mm3,	nega_one;		// empties

		// computing columns
		movq	mm4,	mm1;
		movq	mm6,	mm1;

		psllq	mm4,	8;
		psrlq	mm6,	8;

		pand	mm4,	mm2;
		pand	mm6,	mm2;

		// 1		
		psllq	mm4,	8;
		psrlq	mm6,	8;

		movq	mm5,	mm4;
		movq	mm7,	mm6;

		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand    mm6,    mm2;
	
		pand    mm4,    mm2;
		por		mm0,	mm7;
		// 2
		psllq	mm4,	8;
		psrlq	mm6,	8;

		movq	mm5,	mm4;
		movq	mm7,	mm6;

		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand    mm6,    mm2;
	
		pand    mm4,    mm2;
		por		mm0,	mm7;
		// 3		
		psllq	mm4,	8;
		psrlq	mm6,	8;

		movq	mm5,	mm4;
		movq	mm7,	mm6;

		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand    mm6,    mm2;
	
		pand    mm4,    mm2;
		por		mm0,	mm7;
		// 4		
		psllq	mm4,	8;
		psrlq	mm6,	8;

		movq	mm5,	mm4;
		movq	mm7,	mm6;

		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand    mm6,    mm2;
	
		pand    mm4,    mm2;
		por		mm0,	mm7;
		// 5		
		psllq	mm4,	8;
		psrlq	mm6,	8;

		movq	mm5,	mm4;
		movq	mm7,	mm6;

		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand    mm6,    mm2;
	
		pand    mm4,    mm2;
		por		mm0,	mm7;
		// 6		
		psllq	mm4,	8;
		psrlq	mm6,	8;

		pand	mm4,	mm3;
		pand	mm6,	mm3;

		por		mm0,	mm4;
		por		mm0,	mm6;
		
		// the next 2 instructions are dummy, but without them it works a bit slower (166 instead of 170 cycles on my Athlon XP 2600+)
		nop;
		nop;

		// computing rows
		movq	mm4,	mm1;
		movq	mm6,	mm1;

		psllq	mm4,	1;
		psrlq	mm6,	1;

		movq	mm1,	mm2;
		
		pand	mm4,	mm2;
		pand	mm6,	mm2;

		pand	mm4,	clear_first_last_column;
		pand	mm6,	clear_first_last_column;
		
		pand	mm1,	clear_last_column;
		pand	mm2,	clear_first_column;

		// 1		
		psllq	mm4,	1;
		psrlq	mm6,	1;

		movq	mm5,	mm4;
		movq	mm7,	mm6;
		
		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand	mm6,	mm2;

		pand	mm4,	mm1;
		por		mm0,	mm7;
		// 2		
		psllq	mm4,	1;
		psrlq	mm6,	1;

		movq	mm5,	mm4;
		movq	mm7,	mm6;
		
		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand	mm6,	mm2;

		pand	mm4,	mm1;
		por		mm0,	mm7;
		// 3		
		psllq	mm4,	1;
		psrlq	mm6,	1;

		movq	mm5,	mm4;
		movq	mm7,	mm6;
		
		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand	mm6,	mm2;

		pand	mm4,	mm1;
		por		mm0,	mm7;
		// 4		
		psllq	mm4,	1;
		psrlq	mm6,	1;

		movq	mm5,	mm4;
		movq	mm7,	mm6;
		
		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand	mm6,	mm2;

		pand	mm4,	mm1;
		por		mm0,	mm7;
		// 5		
		psllq	mm4,	1;
		psrlq	mm6,	1;

		movq	mm5,	mm4;
		movq	mm7,	mm6;
		
		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand	mm6,	mm2;

		pand	mm4,	mm1;
		por		mm0,	mm7;
		// 6		
		psllq	mm4,	1;
		psrlq	mm6,	1;

		pand	mm4,	mm3;
		pand	mm6,	mm3;

		por		mm0,	mm4;
		por		mm0,	mm6;
		
		// computing right-top-left-down diagonals
		movq	mm1,	my_bits;
		movq	mm2,	opp_bits;

		movq	mm4,	mm1;
		movq	mm6,	mm1;

		pand	mm2,	clear_last_column;

		psllq	mm4,	9;
		psrlq	mm6,	7;

		pand	mm4,	clear_first_column;
		pand	mm6,	clear_first_column;

		pand	mm4,	mm2;
		pand	mm6,	mm2;
		
		// 1		
		psllq	mm4,	9;
		psrlq	mm6,	7;

		movq	mm5,	mm4;
		movq	mm7,	mm6;

		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand    mm6,    mm2;
	
		pand    mm4,    mm2;
		por		mm0,	mm7;
		// 2		
		psllq	mm4,	9;
		psrlq	mm6,	7;

		movq	mm5,	mm4;
		movq	mm7,	mm6;

		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand    mm6,    mm2;
	
		pand    mm4,    mm2;
		por		mm0,	mm7;
		// 3		
		psllq	mm4,	9;
		psrlq	mm6,	7;

		movq	mm5,	mm4;
		movq	mm7,	mm6;

		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand    mm6,    mm2;
	
		pand    mm4,    mm2;
		por		mm0,	mm7;
		// 4		
		psllq	mm4,	9;
		psrlq	mm6,	7;

		movq	mm5,	mm4;
		movq	mm7,	mm6;

		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand    mm6,    mm2;
	
		pand    mm4,    mm2;
		por		mm0,	mm7;
		// 5		
		psllq	mm4,	9;
		psrlq	mm6,	7;

		movq	mm5,	mm4;
		movq	mm7,	mm6;

		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand    mm6,    mm2;
	
		pand    mm4,    mm2;
		por		mm0,	mm7;
		// 6		
		psllq	mm4,	9;
		psrlq	mm6,	7;

		pand	mm4,	mm3;
		pand	mm6,	mm3;

		por		mm0,	mm4;
		por		mm0,	mm6;
		
		// computing right-top-left-down diagonals
		movq	mm4,	mm1;
		movq	mm2,	opp_bits;
		movq	mm6,	mm1;

		psllq	mm4,	7;
		psrlq	mm6,	9;
		
		pand	mm2,	clear_first_column;

		pand	mm4,	clear_last_column;
		pand	mm6,	clear_last_column;

		pand	mm4,	mm2;
		pand	mm6,	mm2;
		// 1		
		psllq	mm4,	7;
		psrlq	mm6,	9;

		movq	mm5,	mm4;
		movq	mm7,	mm6;

		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand    mm6,    mm2;
	
		pand    mm4,    mm2;
		por		mm0,	mm7;
		// 2		
		psllq	mm4,	7;
		psrlq	mm6,	9;

		movq	mm5,	mm4;
		movq	mm7,	mm6;

		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand    mm6,    mm2;
	
		pand    mm4,    mm2;
		por		mm0,	mm7;
		// 3		
		psllq	mm4,	7;
		psrlq	mm6,	9;

		movq	mm5,	mm4;
		movq	mm7,	mm6;

		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand    mm6,    mm2;
	
		pand    mm4,    mm2;
		por		mm0,	mm7;
		// 4		
		psllq	mm4,	7;
		psrlq	mm6,	9;

		movq	mm5,	mm4;
		movq	mm7,	mm6;

		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand    mm6,    mm2;
	
		pand    mm4,    mm2;
		por		mm0,	mm7;
		// 5		
		psllq	mm4,	7;
		psrlq	mm6,	9;

		movq	mm5,	mm4;
		movq	mm7,	mm6;

		pand	mm5,	mm3;
		pand	mm7,	mm3;

		por		mm0,	mm5;
		pand    mm6,    mm2;
	
		pand    mm4,    mm2;
		por		mm0,	mm7;
		// 6		
		psllq	mm4,	7;
		psrlq	mm6,	9;

		pand	mm4,	mm3;
		pand	mm6,	mm3;

		por		mm0,	mm4;
		por		mm0,	mm6;

		// counting bits (there are valid moves in the register mm0)
		movq 	mm1,	mm0
		psrld 	mm0,	1
		pand 	mm0,	c55555555
		psubd 	mm1,	mm0
		movq 	mm0,	mm1
		psrld 	mm1,	2
		pand 	mm0,	c33333333
		pand 	mm1,	c33333333
		paddd 	mm0,	mm1
		movq 	mm1,	mm0
		psrld 	mm0,	4
		paddd 	mm0,	mm1
		pand 	mm0,	c0f0f0f0f

		movq 	mm1,	mm0
		psrld 	mm0,	8
		paddd 	mm0,	mm1
		movq 	mm1,	mm0
		psrld 	mm0,	16
		paddd 	mm0,	mm1
		movq 	mm1,	mm0
		psrlq 	mm0,	32
		paddd 	mm0,	mm1
		
		movd  	eax,	mm0;
		and  	eax,	63;
		emms;
	}
}
