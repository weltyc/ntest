#include "MmxMobility.h"

// constants used in calculating mobility
const __int64 clearLR=	0x7E7E7E7E7E7E7E7EI64;
const __int64 minusOne=	0xFFFFFFFFFFFFFFFFi64;

// constants used in counting bits
const __int64 all3s=0x3333333333333333i64;
const __int64 all5s=0x5555555555555555i64;
const __int64 all0Fs=0x0F0F0F0F0F0F0F0Fi64;

// macro to shift when checking left
#define LSHIFT	__asm {		\
	__asm psrlq mm2, 9		\
	__asm psrlq mm4, 1		\
	__asm psllq mm6, 7		\
}

// macro to shift when checking left
#define RSHIFT	__asm {		\
	__asm psllq mm2, 9		\
	__asm psllq mm4, 1		\
	__asm psrlq mm6, 7		\
}

// macro to shift when checking left
#define VSHIFT	__asm {		\
	__asm psllq mm2, 8		\
	__asm psrlq mm4, 8		\
}

// macro to check continued flipping
#define CHECK	__asm {		\
	__asm pand mm2, mm1	\
	__asm pand mm4, mm1	\
	__asm pand mm6, mm1	\
}

// macro to check continued flipping
#define VCHECK	__asm {		\
	__asm pand mm2, mm1	\
	__asm pand mm4, mm1	\
}

// macro to combine old and new flippables
#define COMBINE	__asm {		\
	__asm por mm2, mm3		\
	__asm por mm4, mm5		\
	__asm por mm6, mm7		\
}

// macro to combine old and new flippables
#define VCOMBINE __asm {		\
	__asm por mm2, mm3		\
	__asm por mm4, mm5		\
}

// macro to duplicate current flippables
#define DUPE	__asm {		\
	__asm movq mm3, mm2	\
	__asm movq mm5, mm4	\
	__asm movq mm7, mm6	\
}

// macro to duplicate current flippables
#define VDUPE	__asm {		\
	__asm movq mm3, mm2	\
	__asm movq mm5, mm4	\
}

// macro to update flippable squares when checking left
#define LEFT 				\
	DUPE					\
	LSHIFT					\
	CHECK					\
	COMBINE					\

// macro to update flippable squares when checking left
#define RIGHT 				\
	DUPE					\
	RSHIFT					\
	CHECK					\
	COMBINE					\

// macro to update flippable squares when checking vertically
#define VERT 				\
	VDUPE					\
	VSHIFT					\
	VCHECK					\
	VCOMBINE				\

//! Calculate possible moves for 1 player and ouput them in mm0
//!
//! \note The function's return value is in an MMX register, so
//! the calling function must emit an EMMS instruction.
//! Some compilers warn that "this function has no EMMS instruction" but
//! it is supposed to be this way.
//!
//! \param my_bits Bitboard containing bits of player to move
//! \param opp_bits Bitboard containing bits of opponent
//! \post possible moves in mm0, in mmx mode
void MmxMoves(const __int64 my_bits, const __int64 opp_bits) {
	// mm0 : mm0&empty = mobilities
	// mm1 : opp bits (with left/right column cleared if needed)
	// mm2 : dir1 total
	// mm3 : dir1 additional
	// mm4 : dir2 total
	// mm5 : dir2 additional
	// mm6 : dir3 total
	// mm7 : dir3 additional
	__asm {
		// going leftwards, i.e. using right shifts (mostly)
		// mm2=R shift 9
		// mm4=R shift 1
		// mm6=L shift 7
		// the leftmost column of opp_bits is cleared to prevent wraparound
		movq mm2, my_bits;
		movq mm1, opp_bits;
		movq mm4, mm2;
		pand mm1, clearLR;
		movq mm6, mm2;

		// col G flippables
		LSHIFT;
		CHECK;

		LEFT;	// col F flippables
		LEFT;	// col E flippables
		LEFT;	// col D flippables
		LEFT;	// col C flippables
		LEFT;	// col B flippables

		LSHIFT;

		movq mm0, mm2;
		// rest of pors interleaved with next block
		// to reduce impact of memory load


		// going rightwards, i.e. using mostly left shifts
		// mm2=L shift 9
		// mm4=L shift 1
		// mm6=R shift 7
		// the rightmost column of opp_bits is cleared to prevent wraparound
		movq mm2, my_bits;

		por mm0, mm4;	// interleaved from above
		por mm0, mm6;	// interleaved from above

		movq mm4, mm2;
		movq mm6, mm2;

		// col G flippables
		RSHIFT;
		CHECK;

		RIGHT;	// col F flippables
		RIGHT;	// col E flippables
		RIGHT;	// col D flippables
		RIGHT;	// col C flippables
		RIGHT;	// col B flippables

		RSHIFT;

		por mm0, mm2;
		// rest of pors interleaved with next block
		// to reduce impact of memory load

		// going up and down
		// mm2=L shift 8
		// mm4=R shift 8
		movq mm2, my_bits;
		movq mm1, opp_bits;

		por mm0, mm4;	// interleaved from above
		por mm0, mm6;	// interleaved from above

		movq mm4, mm2;

		// col G flippables
		VSHIFT;
		VCHECK;

		VERT;	// col F flippables
		VERT;	// col E flippables
		VERT;	// col D flippables
		VERT;	// col C flippables
		VERT;	// col B flippables

		VSHIFT;

		por mm0, mm2;
		// rest of pors interleaved with next block
		// to reduce impact of memory load


		// now mm0 has mobilities, once it is ANDed with empties
		movq mm2, my_bits;
		movq mm3, minusOne;

		por mm0, mm4;	// interleaved from above

		por mm2, mm1;
		pxor mm2, minusOne;
		pand mm0, mm2;
	}
}

//! Return the number of moves for the mover
//!
//! \param my_bits Bitboard containing bits of player to move
//! \param opp_bits Bitboard containing bits of opponent
//! \return number of moves for the player whose bits are in mm1
int MmxMobility(const __int64 my_bits, const __int64 opp_bits) {
	MmxMoves(my_bits, opp_bits);
	__asm {
		// now count the bits
		movq mm3, mm0
		psrlq mm3, 1
		pand mm3, all5s
		psubd mm0, mm3

		movq mm3, mm0
		psrlq mm3, 2
		pand mm3, all3s
		pand mm0, all3s
		paddd mm0, mm3

		movq mm3, mm0
		psrlq mm3, 4
		pand mm3, all0Fs
		pand mm0, all0Fs
		paddd mm0, mm3

		movq mm3, mm0
		psrlq mm3, 8
		paddd mm0, mm3

		movq mm3, mm0
		psrlq mm3, 16
		paddd mm0, mm3

		movq mm3, mm0
		psrlq mm3, 32
		paddd mm0, mm3

		movd eax, mm0
		and eax, 63
		emms;
	}
}
