// Copyright 2004 Chris Welty
// All Rights Reserved

#include "MmxSolve.h"
#include "../GDK/test.h"
#include "Utils.h"

bool fWinnerGetsEmpties=true;

#pragma warning(disable: 4799 4730)

#define mmMover mm0
#define mmEnemy mm1

#define WN357(d3, n3, d5, n5, d7, n7, op) __asm {		\
	__asm ps##d3##lq mm2, n3		\
	__asm ps##d5##lq mm4, n5		\
	__asm ps##d7##lq mm6, n7		\
	__asm pand mm2, mmEnemy			\
	__asm pand mm4, mmEnemy			\
	__asm pand mm6, mmEnemy			\
	__asm op mm3, mm2				\
	__asm op mm5, mm4				\
	__asm op mm7, mm6				\
}

#define WN57(d5, n5, d7, n7, op) __asm {		\
	__asm ps##d5##lq mm4, n5		\
	__asm ps##d7##lq mm6, n7		\
	__asm pand mm4, mmEnemy			\
	__asm pand mm6, mmEnemy			\
	__asm op mm5, mm4				\
	__asm op mm7, mm6				\
}

#define WN7(d7, n7, op) __asm {		\
	__asm ps##d7##lq mm6, n7		\
	__asm pand mm6, mmEnemy			\
	__asm op mm7, mm6				\
}

#define WN246(d2, n2, d4, n4, d6, n6, op) __asm {		\
	__asm ps##d2##lq mm3, n2		\
	__asm ps##d4##lq mm5, n4		\
	__asm ps##d6##lq mm7, n6		\
	__asm pand mm3, mmEnemy			\
	__asm pand mm5, mmEnemy			\
	__asm pand mm7, mmEnemy			\
	__asm op mm2, mm3				\
	__asm op mm4, mm5				\
	__asm op mm6, mm7				\
}

#define WN46(d4, n4, d6, n6, op) __asm {		\
	__asm ps##d4##lq mm5, n4		\
	__asm ps##d6##lq mm7, n6		\
	__asm pand mm5, mmEnemy			\
	__asm pand mm7, mmEnemy			\
	__asm op mm4, mm5				\
	__asm op mm6, mm7				\
}

#define WN6(d6, n6, op) __asm {		\
	__asm ps##d6##lq mm7, n6		\
	__asm pand mm7, mmEnemy			\
	__asm op mm6, mm7				\
}

#define H7FlipFunction(sq, d3, d2, n2, d5, d4, n4, d7, d6, n6) \
const __int64 sq##Mask=1i64<<sq;		\
										\
static void sq##Flips() {				\
	__asm {								\
		/* mm2 will be W flips, mm4 NW, mm6 N*/	\
		__asm movq mm2, mmMover				\
		__asm movq mm4, mmMover				\
		__asm movq mm6, mmMover				\
										\
		__asm WN357(d3,n2,d5,n4,d7,n6,movq)			\
		__asm WN357(d3,n2,d5,n4,d7,n6,por)			\
		__asm WN357(d3,n2,d5,n4,d7,n6,por)			\
		__asm WN357(d3,n2,d5,n4,d7,n6,por)			\
		__asm WN357(d3,n2,d5,n4,d7,n6,por)			\
		__asm WN7(d7,n6,por)					\
										\
		__asm ps##d3##lq mm3, n2					\
		__asm ps##d5##lq mm5, n4					\
		__asm ps##d7##lq mm7, n6					\
										\
		/* now mm3 contains all squares where we could left-flip if empty */	\
		__asm pand mm3, sq##Mask				\
		__asm pand mm5, sq##Mask				\
		__asm pand mm7, sq##Mask				\
										\
		/* now mm3 contains H8Mask if we can left-flip from H8 or 0 if we can't */	\
										\
		/* figure out which squares get flipped*/	\
		__asm WN246(d2,n2,d4,n4,d6,n6,movq)			\
		__asm WN246(d2,n2,d4,n4,d6,n6,por)			\
		__asm WN246(d2,n2,d4,n4,d6,n6,por)			\
		__asm WN246(d2,n2,d4,n4,d6,n6,por)			\
		__asm WN246(d2,n2,d4,n4,d6,n6,por)			\
		__asm WN6(d6,n6,por)					\
										\
		__asm por mm2, mm4					\
		__asm por mm2, mm6					\
	}									\
}

H7FlipFunction(H7, l,r,8,l,r,9,l,r,1);
H7FlipFunction(G8, l,r,1,l,r,9,l,r,8);
H7FlipFunction(B8, r,l,1,l,r,7,l,r,8);
H7FlipFunction(A7, l,r,8,l,r,7,r,l,1);
H7FlipFunction(A2, r,l,8,r,l,9,r,l,1);
H7FlipFunction(B1, r,l,1,r,l,9,r,l,8);
H7FlipFunction(G1, l,r,1,r,l,7,r,l,8);
H7FlipFunction(H2, r,l,8,r,l,7,l,r,1);

//! Calculate discs to be flipped if we play at H8
//!
//! \pre mover discs in mm0
//! \pre enemy discs in mm1
//!
//! \post mover discs in mm0
//! \post enemy discs in mm1
//! \post discs to be flipped in mm2
//! \post mm3-7 destroyed
//!
//! \post in MMX mode, caller needs to emit an EMMS instruction.
#define H8FlipFunction(sq, d3, d2, n2, d5, d4, n4, d7, d6, n6) \
const __int64 sq##Mask=1i64<<sq;		\
										\
static void sq##Flips() {				\
	__asm {								\
		/* mm2 will be W flips, mm4 NW, mm6 N */	\
		__asm movq mm2, mmMover				\
		__asm movq mm4, mmMover				\
		__asm movq mm6, mmMover				\
										\
		WN357(d3,n2,d5,n4,d7,n6,movq)	\
		WN357(d3,n2,d5,n4,d7,n6,por)	\
		WN357(d3,n2,d5,n4,d7,n6,por)	\
		WN357(d3,n2,d5,n4,d7,n6,por)	\
		WN357(d3,n2,d5,n4,d7,n6,por)	\
		WN357(d3,n2,d5,n4,d7,n6,por)	\
										\
		__asm ps##d3##lq mm3, n2				\
		__asm ps##d5##lq mm5, n4				\
		__asm ps##d7##lq mm7, n6				\
										\
		/* now mm3 contains all squares where we could left-flip if empty*/ \
		__asm pand mm3, ##sq##Mask			\
		__asm pand mm5, ##sq##Mask			\
		__asm pand mm7, ##sq##Mask			\
										\
		/* now mm3 contains H8Mask if we can left-flip from H8 or 0 if we can't */ \
										\
		/* figure out which squares get flipped */	\
		WN246(d2,n2,d4,n4,d6,n6,movq)	\
		WN246(d2,n2,d4,n4,d6,n6,por)	\
		WN246(d2,n2,d4,n4,d6,n6,por)	\
		WN246(d2,n2,d4,n4,d6,n6,por)	\
		WN246(d2,n2,d4,n4,d6,n6,por)	\
		WN246(d2,n2,d4,n4,d6,n6,por)	\
										\
		__asm por mm2, mm4					\
		__asm por mm2, mm6					\
	}									\
}

H8FlipFunction(H8, l,r,1,l,r,8,l,r,9);
H8FlipFunction(A8, r,l,1,l,r,8,l,r,7);
H8FlipFunction(A1, r,l,1,r,l,8,r,l,9);
H8FlipFunction(H1, l,r,1,r,l,8,r,l,7);

#define G7FlipFunction(sq, d3, d2, n2, d5, d4, n4, d7, d6, n6) \
const __int64 sq##Mask=1i64<<sq;		\
										\
static void sq##Flips() {				\
	__asm {								\
		/* mm2 will be W flips, mm4 NW, mm6 N */	\
		__asm movq mm2, mmMover				\
		__asm movq mm4, mmMover				\
		__asm movq mm6, mmMover				\
										\
		WN357(d3,n2,d5,n4,d7,n6,movq)	\
		WN357(d3,n2,d5,n4,d7,n6,por)	\
		WN357(d3,n2,d5,n4,d7,n6,por)	\
		WN357(d3,n2,d5,n4,d7,n6,por)	\
		WN357(d3,n2,d5,n4,d7,n6,por)	\
										\
		__asm ps##d3##lq mm3, n2				\
		__asm ps##d5##lq mm5, n4				\
		__asm ps##d7##lq mm7, n6				\
										\
		/* now mm3 contains all squares where we could left-flip if empty*/ \
		__asm pand mm3, ##sq##Mask			\
		__asm pand mm5, ##sq##Mask			\
		__asm pand mm7, ##sq##Mask			\
										\
		/* now mm3 contains G7Mask if we can left-flip from G7 or 0 if we can't */ \
										\
		/* figure out which squares get flipped */	\
		WN246(d2,n2,d4,n4,d6,n6,movq)	\
		WN246(d2,n2,d4,n4,d6,n6,por)	\
		WN246(d2,n2,d4,n4,d6,n6,por)	\
		WN246(d2,n2,d4,n4,d6,n6,por)	\
		WN246(d2,n2,d4,n4,d6,n6,por)	\
										\
		__asm por mm2, mm4					\
		__asm por mm2, mm6					\
	}									\
}

G7FlipFunction(G7, l,r,1,l,r,8,l,r,9);
G7FlipFunction(B7, r,l,1,l,r,8,l,r,7);
G7FlipFunction(B2, r,l,1,r,l,8,r,l,9);
G7FlipFunction(G2, l,r,1,r,l,8,r,l,7);

#define H6FlipFunction(sq, d3, d2, n2, d5, d4, n4, d7, d6, n6, d9, d8, n8, d11, d10, n10) \
const __int64 sq##Mask=1i64<<sq;		\
										\
static void sq##Flips() {				\
	__asm {								\
		/* mm2 will be W flips, mm4 NW, mm6 N */	\
		__asm movq mm2, mmMover				\
		__asm movq mm4, mmMover				\
		__asm movq mm6, mmMover				\
										\
		WN357(d3,n2,d5,n4,d7,n6,movq)	\
		WN357(d3,n2,d5,n4,d7,n6,por)	\
		WN357(d3,n2,d5,n4,d7,n6,por)	\
		WN357(d3,n2,d5,n4,d7,n6,por)	\
		WN7(d7,n6,por)					\
		WN7(d7,n6,por)					\
										\
		__asm ps##d3##lq mm3, n2				\
		__asm ps##d5##lq mm5, n4				\
		__asm ps##d7##lq mm7, n6				\
										\
		/* now mm3 contains all squares where we could left-flip if empty*/ \
		__asm pand mm3, ##sq##Mask			\
		__asm pand mm5, ##sq##Mask			\
		__asm pand mm7, ##sq##Mask			\
										\
		/* now mm3 contains G7Mask if we can left-flip from G7 or 0 if we can't */ \
										\
		/* figure out which squares get flipped */	\
		WN246(d2,n2,d4,n4,d6,n6,movq)	\
		WN246(d2,n2,d4,n4,d6,n6,por)	\
		WN246(d2,n2,d4,n4,d6,n6,por)	\
		WN246(d2,n2,d4,n4,d6,n6,por)	\
		WN6(d6,n6,por)					\
		WN6(d6,n6,por)					\
										\
		__asm por mm2, mm4				\
		__asm por mm2, mm6				\
										\
		/* now the 2 shorter directions */	\
										\
		__asm movq mm4, mmMover			\
		__asm movq mm6, mmMover			\
										\
		WN57(d9,n8,d11,n10,movq)		\
		__asm ps##d9##lq mm5, n8		\
		__asm ps##d11##lq mm7, n10		\
		__asm pand mm5, ##sq##Mask		\
		__asm pand mm7, ##sq##Mask		\
		WN46(d8,n8,d10,n10,movq)		\
		__asm por mm2, mm4				\
		__asm por mm2, mm6				\
	}									\
}

H6FlipFunction(C1, r,l,1, r,l,9, r,l,8, r,l,7, l,r,1);
H6FlipFunction(F1, l,r,1, r,l,7, r,l,8, r,l,1, r,l,9);
H6FlipFunction(H3, r,l,8, r,l,7, l,r,1, l,r,8, l,r,9);
H6FlipFunction(H6, l,r,8, l,r,9, l,r,1, r,l,8, r,l,7);
H6FlipFunction(F8, l,r,1, l,r,9, l,r,8, l,r,7, r,l,1);
H6FlipFunction(C8, r,l,1, l,r,7, l,r,8, l,r,1, l,r,9);
H6FlipFunction(A6, l,r,8, l,r,7, r,l,1, r,l,8, r,l,9);
H6FlipFunction(A3, r,l,8, r,l,9, r,l,1, l,r,8, l,r,7);

#define H5FlipFunction(sq, d3, d2, n2, d5, d4, n4, d7, d6, n6, d9, d8, n8, d11, d10, n10) \
const __int64 sq##Mask=1i64<<sq;		\
										\
static void sq##Flips() {				\
	__asm {								\
		/* mm2 will be W flips, mm4 NW, mm6 N */	\
		__asm movq mm2, mmMover				\
		__asm movq mm4, mmMover				\
		__asm movq mm6, mmMover				\
										\
		WN357(d3,n2,d5,n4,d7,n6,movq)	\
		WN357(d3,n2,d5,n4,d7,n6,por)	\
		WN357(d3,n2,d5,n4,d7,n6,por)	\
		WN7(d7,n6,por)					\
		WN7(d7,n6,por)					\
		WN7(d7,n6,por)					\
										\
		__asm ps##d3##lq mm3, n2				\
		__asm ps##d5##lq mm5, n4				\
		__asm ps##d7##lq mm7, n6				\
										\
		/* now mm3 contains all squares where we could left-flip if empty*/ \
		__asm pand mm3, ##sq##Mask			\
		__asm pand mm5, ##sq##Mask			\
		__asm pand mm7, ##sq##Mask			\
										\
		/* now mm3 contains G7Mask if we can left-flip from G7 or 0 if we can't */ \
										\
		/* figure out which squares get flipped */	\
		WN246(d2,n2,d4,n4,d6,n6,movq)	\
		WN246(d2,n2,d4,n4,d6,n6,por)	\
		WN246(d2,n2,d4,n4,d6,n6,por)	\
		WN6(d6,n6,por)					\
		WN6(d6,n6,por)					\
		WN6(d6,n6,por)					\
										\
		__asm por mm2, mm4				\
		__asm por mm2, mm6				\
										\
		/* now the 2 shorter directions */	\
										\
		__asm movq mm4, mmMover			\
		__asm movq mm6, mmMover			\
										\
		WN57(d9,n8,d11,n10,movq)		\
		WN57(d9,n8,d11,n10,por)		\
		__asm ps##d9##lq mm5, n8		\
		__asm ps##d11##lq mm7, n10		\
		__asm pand mm5, ##sq##Mask		\
		__asm pand mm7, ##sq##Mask		\
		WN46(d8,n8,d10,n10,movq)		\
		WN46(d8,n8,d10,n10,por)		\
		__asm por mm2, mm4				\
		__asm por mm2, mm6				\
	}									\
}

H5FlipFunction(D1, r,l,1, r,l,9, r,l,8, r,l,7, l,r,1);
H5FlipFunction(E1, l,r,1, r,l,7, r,l,8, r,l,1, r,l,9);
H5FlipFunction(H4, r,l,8, r,l,7, l,r,1, l,r,8, l,r,9);
H5FlipFunction(H5, l,r,8, l,r,9, l,r,1, r,l,8, r,l,7);
H5FlipFunction(E8, l,r,1, l,r,9, l,r,8, l,r,7, r,l,1);
H5FlipFunction(D8, r,l,1, l,r,7, l,r,8, l,r,1, l,r,9);
H5FlipFunction(A5, l,r,8, l,r,7, r,l,1, r,l,8, r,l,9);
H5FlipFunction(A4, r,l,8, r,l,9, r,l,1, l,r,8, l,r,7);

#define G6FlipFunction(sq, d3, d2, n2, d5, d4, n4, d7, d6, n6, d9, d8, n8, d11, d10, n10) \
const __int64 sq##Mask=1i64<<sq;		\
										\
static void sq##Flips() {				\
	__asm {								\
		/* mm2 will be W flips, mm4 NW, mm6 N */	\
		__asm movq mm2, mmMover				\
		__asm movq mm4, mmMover				\
		__asm movq mm6, mmMover				\
										\
		WN357(d3,n2,d5,n4,d7,n6,movq)	\
		WN357(d3,n2,d5,n4,d7,n6,por)	\
		WN357(d3,n2,d5,n4,d7,n6,por)	\
		WN357(d3,n2,d5,n4,d7,n6,por)	\
		WN7(d7,n6,por)					\
										\
		__asm ps##d3##lq mm3, n2				\
		__asm ps##d5##lq mm5, n4				\
		__asm ps##d7##lq mm7, n6				\
										\
		/* now mm3 contains all squares where we could left-flip if empty*/ \
		__asm pand mm3, ##sq##Mask			\
		__asm pand mm5, ##sq##Mask			\
		__asm pand mm7, ##sq##Mask			\
										\
		/* now mm3 contains G7Mask if we can left-flip from G7 or 0 if we can't */ \
										\
		/* figure out which squares get flipped */	\
		WN246(d2,n2,d4,n4,d6,n6,movq)	\
		WN246(d2,n2,d4,n4,d6,n6,por)	\
		WN246(d2,n2,d4,n4,d6,n6,por)	\
		WN246(d2,n2,d4,n4,d6,n6,por)	\
		WN6(d6,n6,por)					\
										\
		__asm por mm2, mm4				\
		__asm por mm2, mm6				\
										\
		/* now the 2 shorter directions */	\
										\
		__asm movq mm4, mmMover			\
		__asm movq mm6, mmMover			\
										\
		WN57(d9,n8,d11,n10,movq)		\
		__asm ps##d9##lq mm5, n8		\
		__asm ps##d11##lq mm7, n10		\
		__asm pand mm5, ##sq##Mask		\
		__asm pand mm7, ##sq##Mask		\
		WN46(d8,n8,d10,n10,movq)		\
		__asm por mm2, mm4				\
		__asm por mm2, mm6				\
	}									\
}

G6FlipFunction(C2, r,l,1, r,l,9, r,l,8, r,l,7, l,r,1);
G6FlipFunction(F2, l,r,1, r,l,7, r,l,8, r,l,1, r,l,9);
G6FlipFunction(G3, r,l,8, r,l,7, l,r,1, l,r,8, l,r,9);
G6FlipFunction(G6, l,r,8, l,r,9, l,r,1, r,l,8, r,l,7);
G6FlipFunction(F7, l,r,1, l,r,9, l,r,8, l,r,7, r,l,1);
G6FlipFunction(C7, r,l,1, l,r,7, l,r,8, l,r,1, l,r,9);
G6FlipFunction(B6, l,r,8, l,r,7, r,l,1, r,l,8, r,l,9);
G6FlipFunction(B3, r,l,8, r,l,9, r,l,1, l,r,8, l,r,7);

#define G5FlipFunction(sq, d3, d2, n2, d5, d4, n4, d7, d6, n6, d9, d8, n8, d11, d10, n10) \
const __int64 sq##Mask=1i64<<sq;		\
										\
static void sq##Flips() {				\
	__asm {								\
		/* mm2 will be W flips, mm4 NW, mm6 N */	\
		__asm movq mm2, mmMover				\
		__asm movq mm4, mmMover				\
		__asm movq mm6, mmMover				\
										\
		WN357(d3,n2,d5,n4,d7,n6,movq)	\
		WN357(d3,n2,d5,n4,d7,n6,por)	\
		WN357(d3,n2,d5,n4,d7,n6,por)	\
		WN7(d7,n6,por)					\
		WN7(d7,n6,por)					\
										\
		__asm ps##d3##lq mm3, n2				\
		__asm ps##d5##lq mm5, n4				\
		__asm ps##d7##lq mm7, n6				\
										\
		/* now mm3 contains all squares where we could left-flip if empty*/ \
		__asm pand mm3, ##sq##Mask			\
		__asm pand mm5, ##sq##Mask			\
		__asm pand mm7, ##sq##Mask			\
										\
		/* now mm3 contains G7Mask if we can left-flip from G7 or 0 if we can't */ \
										\
		/* figure out which squares get flipped */	\
		WN246(d2,n2,d4,n4,d6,n6,movq)	\
		WN246(d2,n2,d4,n4,d6,n6,por)	\
		WN246(d2,n2,d4,n4,d6,n6,por)	\
		WN6(d6,n6,por)					\
		WN6(d6,n6,por)					\
										\
		__asm por mm2, mm4				\
		__asm por mm2, mm6				\
										\
		/* now the 2 shorter directions */	\
										\
		__asm movq mm4, mmMover			\
		__asm movq mm6, mmMover			\
										\
		WN57(d9,n8,d11,n10,movq)		\
		WN57(d9,n8,d11,n10,por)		\
		__asm ps##d9##lq mm5, n8		\
		__asm ps##d11##lq mm7, n10		\
		__asm pand mm5, ##sq##Mask		\
		__asm pand mm7, ##sq##Mask		\
		WN46(d8,n8,d10,n10,movq)		\
		WN46(d8,n8,d10,n10,por)		\
		__asm por mm2, mm4				\
		__asm por mm2, mm6				\
	}									\
}

G5FlipFunction(D2, r,l,1, r,l,9, r,l,8, r,l,7, l,r,1);
G5FlipFunction(E2, l,r,1, r,l,7, r,l,8, r,l,1, r,l,9);
G5FlipFunction(G4, r,l,8, r,l,7, l,r,1, l,r,8, l,r,9);
G5FlipFunction(G5, l,r,8, l,r,9, l,r,1, r,l,8, r,l,7);
G5FlipFunction(E7, l,r,1, l,r,9, l,r,8, l,r,7, r,l,1);
G5FlipFunction(D7, r,l,1, l,r,7, l,r,8, l,r,1, l,r,9);
G5FlipFunction(B5, l,r,8, l,r,7, r,l,1, r,l,8, r,l,9);
G5FlipFunction(B4, r,l,8, r,l,9, r,l,1, l,r,8, l,r,7);

#define F6FlipFunction(sq, d3, d2, n2, d5, d4, n4, d7, d6, n6, d9, d8, n8) \
const __int64 sq##Mask=1i64<<sq;		\
										\
static void sq##Flips() {				\
	__asm {								\
		/* mm2 will be W flips, mm4 NW, mm6 N */	\
		__asm movq mm2, mmMover				\
		__asm movq mm4, mmMover				\
		__asm movq mm6, mmMover				\
										\
		WN357(d3,n2,d5,n4,d7,n6,movq)	\
		WN357(d3,n2,d5,n4,d7,n6,por)	\
		WN357(d3,n2,d5,n4,d7,n6,por)	\
		WN357(d3,n2,d5,n4,d7,n6,por)	\
										\
		__asm ps##d3##lq mm3, n2				\
		__asm ps##d5##lq mm5, n4				\
		__asm ps##d7##lq mm7, n6				\
										\
		/* now mm3 contains all squares where we could left-flip if empty*/ \
		__asm pand mm3, ##sq##Mask			\
		__asm pand mm5, ##sq##Mask			\
		__asm pand mm7, ##sq##Mask			\
										\
		/* now mm3 contains G7Mask if we can left-flip from G7 or 0 if we can't */ \
										\
		/* figure out which squares get flipped */	\
		WN246(d2,n2,d4,n4,d6,n6,movq)	\
		WN246(d2,n2,d4,n4,d6,n6,por)	\
		WN246(d2,n2,d4,n4,d6,n6,por)	\
		WN246(d2,n2,d4,n4,d6,n6,por)	\
										\
		__asm por mm2, mm4				\
		__asm por mm2, mm6				\
										\
		/* now the 5 shorter directions */	\
		/* direction d8 & d9 first */	\
										\
		__asm movq mm4, mmMover			\
		__asm movq mm6, mmMover			\
		WN57(d9,n8,d8,n8,movq)			\
		__asm ps##d9##lq mm5, n8		\
		__asm ps##d8##lq mm7, n8		\
		__asm pand mm5, ##sq##Mask		\
		__asm pand mm7, ##sq##Mask		\
		WN46(d8,n8,d9,n8,movq)			\
		__asm por mm2, mm4				\
		__asm por mm2, mm6				\
										\
		/* Now the opposite of directions 2 and 4*/								\
		__asm movq mm4, mmMover			\
		__asm movq mm6, mmMover			\
		WN57(d2,n2,d4,n4,movq)			\
		__asm ps##d2##lq mm5, n2		\
		__asm ps##d4##lq mm7, n4		\
		__asm pand mm5, ##sq##Mask		\
		__asm pand mm7, ##sq##Mask		\
		WN46(d3,n2,d5,n4,movq)			\
		__asm por mm2, mm4				\
		__asm por mm2, mm6				\
										\
		/* Finally opposite of direction 6*/	\
		__asm movq mm6, mmMover			\
		WN7(d6,n6,movq)					\
		__asm ps##d6##lq mm7, n6		\
		__asm pand mm7, ##sq##Mask		\
		WN6(d7,n6,movq)					\
		__asm por mm2, mm6				\
										\
	}									\
}

F6FlipFunction(C3, r,l,1, r,l,9, r,l,8, l,r,7);
F6FlipFunction(F3, l,r,1, r,l,7, r,l,8, r,l,9);
F6FlipFunction(F6, l,r,1, l,r,9, l,r,8, r,l,7);
F6FlipFunction(C6, r,l,1, l,r,7, l,r,8, l,r,9);

// this is the most complicated flip routine.
// d3/d2 flip 4/1 discs horizontally or vertically
// d5/d4 flip 3/2 discs horizontally or vertically
// d7/d6 flip 3/1 discs diagonally
// d9/d8 flip 2/1 discs diagonally
#define F5FlipFunction(sq, d3, d2, n2, d5, d4, n4, d7, d6, n6, d9, d8, n8) \
const __int64 sq##Mask=1i64<<sq;		\
										\
static void sq##Flips() {				\
	__asm {								\
		/* mm2 will be W flips, mm4 NW, mm6 N */	\
		__asm movq mm2, mmMover				\
		__asm movq mm4, mmMover				\
		__asm movq mm6, mmMover				\
										\
		WN357(d5,n4,d7,n6,d3,n2,movq)	\
		WN357(d5,n4,d7,n6,d3,n2,por)	\
		WN357(d5,n4,d7,n6,d3,n2,por)	\
		WN7(d3,n2,por)	\
										\
		__asm ps##d5##lq mm3, n4				\
		__asm ps##d7##lq mm5, n6				\
		__asm ps##d3##lq mm7, n2				\
										\
		/* now mm3 contains all squares where we could left-flip if empty*/ \
		__asm pand mm3, ##sq##Mask			\
		__asm pand mm5, ##sq##Mask			\
		__asm pand mm7, ##sq##Mask			\
										\
		/* now mm3 contains G7Mask if we can left-flip from G7 or 0 if we can't */ \
										\
		/* figure out which squares get flipped */	\
		WN246(d4,n4,d6,n6,d2,n2,movq)	\
		WN246(d4,n4,d6,n6,d2,n2,por)	\
		WN246(d4,n4,d6,n6,d2,n2,por)	\
		WN6(d2,n2,por)	\
										\
		__asm por mm2, mm4				\
		__asm por mm2, mm6				\
										\
		/* now the 5 shorter directions */	\
		/* direction d4 & d9 first */	\
										\
		__asm movq mm4, mmMover			\
		__asm movq mm6, mmMover			\
		WN57(d9,n8,d4,n4,movq)			\
		WN57(d9,n8,d4,n4,por)			\
		__asm ps##d9##lq mm5, n8		\
		__asm ps##d4##lq mm7, n4		\
		__asm pand mm5, ##sq##Mask		\
		__asm pand mm7, ##sq##Mask		\
		WN46(d8,n8,d5,n4,movq)			\
		WN46(d8,n8,d5,n4,por)			\
		__asm por mm2, mm4				\
		__asm por mm2, mm6				\
										\
		/* Now directions 2 and 8*/								\
		__asm movq mm4, mmMover			\
		__asm movq mm6, mmMover			\
		WN57(d2,n2,d8,n8,movq)			\
		__asm ps##d2##lq mm5, n2		\
		__asm ps##d8##lq mm7, n8		\
		__asm pand mm5, ##sq##Mask		\
		__asm pand mm7, ##sq##Mask		\
		WN46(d3,n2,d9,n8,movq)			\
		__asm por mm2, mm4				\
		__asm por mm2, mm6				\
										\
		/* Finally opposite of direction 6*/	\
		__asm movq mm6, mmMover			\
		WN7(d6,n6,movq)					\
		__asm ps##d6##lq mm7, n6		\
		__asm pand mm7, ##sq##Mask		\
		WN6(d7,n6,movq)					\
		__asm por mm2, mm6				\
										\
	}									\
}


F5FlipFunction(D3, r,l,8, r,l,1, r,l,9, r,l,7);
F5FlipFunction(E3, r,l,8, l,r,1, r,l,7, r,l,9);
F5FlipFunction(F4, l,r,1, r,l,8, r,l,7, l,r,9);
F5FlipFunction(F5, l,r,1, l,r,8, l,r,9, r,l,7);
F5FlipFunction(E6, l,r,8, l,r,1, l,r,9, l,r,7);
F5FlipFunction(D6, l,r,8, r,l,1, l,r,7, l,r,9);
F5FlipFunction(C5, r,l,1, l,r,8, l,r,7, r,l,9);
F5FlipFunction(C4, r,l,1, r,l,8, r,l,9, l,r,7);

const __int64 all3s=0x3333333333333333i64;
const __int64 all5s=0x5555555555555555i64;
const __int64 all0Fs=0x0F0F0F0F0F0F0F0Fi64;

//! Count the number of bits in mm2 and return the result
//! \post in MMX mode
//! \pre mm2 contains bits to count
//! \post mm2, mm3 scrambled
static int CountMm2Bits() {
	__asm {
		movq mm3, mm2
		psrlq mm3, 1
		pand mm3, all5s
		psubd mm2, mm3

		movq mm3, mm2
		psrlq mm3, 2
		pand mm3, all3s
		pand mm2, all3s
		paddd mm2, mm3

		movq mm3, mm2
		psrlq mm3, 4
		pand mm3, all0Fs
		pand mm2, all0Fs
		paddd mm2, mm3

		movq mm3, mm2
		psrlq mm3, 8
		paddd mm2, mm3

		movq mm3, mm2
		psrlq mm3, 16
		paddd mm2, mm3

		movq mm3, mm2
		psrlq mm3, 32
		paddd mm2, mm3

		movd eax, mm2
		and eax, 63
	}
}

typedef void TFnFlip();

//! List of empty squares for MMX solver
class CMmxEmpty {
public:
	__int64 bbPlace;
	CMmxEmpty* prev, *next;
	TFnFlip* fn;

	void Remove();
	void Restore();
};

void CMmxEmpty::Remove() {
	prev->next=next;
	if (next)
		next->prev=prev;
}

void CMmxEmpty::Restore() {
	prev->next=this;
	if (next)
		next->prev=this;
}

//! Count the number of empties in the linked list and return it
static int CountEmpties(const CMmxEmpty* const pme) {
	int nEmpty=0;
	for (const CMmxEmpty* pi=pme->next; pi!=NULL; pi=pi->next) {
		nEmpty++;
	}
	return nEmpty;
}

//! Alpha/beta search for the exact solved value of the game when there is exactly one empty square
//!
//! \param alpha alpha (mover POV)
//! \param beta beta (mover POV)
//! \param TFnFlip mmx flip function for the one empty square
//! \return value (mover POV)
//!
//! \pre exactly one empty square
//! \pre mover bits in mm0
//! \pre enemy bits in mm1
//! \post mover in mm0, enemy in mm1
static int Solve1(int alpha, int beta, TFnFlip flip, int nNet) {
	extern u4 nSNodesQuick;
	nSNodesQuick+=2;

	flip();
	int nFlipped=CountMm2Bits();
	if (nFlipped) {
		nNet+=nFlipped+nFlipped+1;
	}
	else {
		// mover can't move. Can his enemy?
		__asm fxch st(1);	// swap sides
		flip();
		int nFlipped=CountMm2Bits();
		if (nFlipped) {
			nNet-=nFlipped+nFlipped+1;
		}
		else if (fWinnerGetsEmpties) {
			if (nNet>0)
				nNet++;
			else
				nNet--;
		}
		__asm fxch st(1);	// swap sides back to original way
	}

	return nNet;
}

//! Solve othello by tree search. Must have at least 2 empties.
//!
//! \param alpha Search alpha (mover POV)
//! \param beta Search beta (mover POV)
//! \param pme pointer to header of linked list of empty squares
//! \param nNet number of mover's discs - number of enemy discs
//! \param iPass 0 if nobody has passed, 1 if 1 pass has occurred
//! \return alpha-beta score, in discs (mover POV)
//!
//! \pre at least 2 empty squares
//! \pre mover in mm0, enemy in mm1
//! \post mover in mm0, enemy in mm1, in mmx mode
static int Solve2(int alpha, int beta, CMmxEmpty* pme, int nNet, int iPass) {
	extern u4 nSNodesQuick;
	nSNodesQuick++;
	_ASSERT(pme->next->next);
	int vBestChild=-65;

	for (CMmxEmpty* pi=pme->next; pi!=NULL; pi=pi->next) {
		pi->fn();
		__asm movq mm4, mm2
		const int nFlipped=CountMm2Bits();
		if (nFlipped) {
			__int64 bbFlips;
			pi->Remove();

			// flip squares, swap colors, and store the flip bits in bbFlips
			__asm {
				mov eax, pi;
				movq bbFlips, mm4;
				pxor mmMover,mm4;
				pxor mmEnemy,mm4;
				pxor mmMover, [eax];
				fxch st(1);
			}
			const int nNetChild=-(nNet+nFlipped+nFlipped+1);
			int vChild;
			if (pme->next->next)
				vChild=-Solve2(-beta, -alpha, pme, nNetChild, 0);
			else
				vChild=-Solve1(-beta, -alpha, pme->next->fn, nNetChild);
			// unflip squares, unswap colors, and restore the flip bits from bbFlips
			__asm {
				mov eax, pi;
				movq mm4, bbFlips;
				fxch st(1);
				pxor mmMover, [eax];
				pxor mmMover,mm4;
				pxor mmEnemy,mm4;
			}
			pi->Restore();
			if (vChild>vBestChild) {
				vBestChild=vChild;
				if (vChild>alpha) {
					if (vChild>=beta) {
						return vChild;
					}
					else
						alpha=vChild;
				}
			}
		}
	}
	if (vBestChild>-65)
		return vBestChild;
	else if (iPass==0) {
		__asm fxch st(1)
		nNet=-Solve2(-beta, -alpha, pme, -nNet, 1);
		__asm fxch st(1)
	}
	else if (fWinnerGetsEmpties && nNet!=0) {
		const int nEmpty=CountEmpties(pme);
		if (nNet>0)
			nNet+=nEmpty;
		else
			nNet-=nEmpty;
	}
	return nNet;
}


//! Alpha/beta search for the exact solved value of the game
//!
//! \param alpha alpha (mover POV)
//! \param beta beta (mover POV)
//! \param pme pointer to header of mmx empties list
//! \param nNet net number of discs for the mover
//! \return value (mover POV)
//!
//! \pre empty list set up
//! \pre mover bits in mm0
//! \pre enemy bits in mm1
//! \post mover in mm0, enemy in mm1
static int Solve(int alpha, int beta, CMmxEmpty* pme, int nNet) {
	int result;

	if (pme->next==0)
		result=nNet;
	else if (pme->next->next==0)
		result=Solve1(alpha, beta, pme->next->fn, nNet);
	else result=Solve2(alpha, beta, pme, nNet, 0);

	return result;
}	

//! Initialize a single element of the Empty linked-list, IF the square is empty.
//!
//! \param[in,out] pme In: back of empties list (back = end-1) Out: New back of empties list
static void InitializeEmpty(CMmxEmpty*& pme, u8 empty, int square, TFnFlip fn) {
	if (empty.GetBit(square)) {
		pme->next=pme+1;
		pme++;
		pme->prev=pme-1;
		pme->fn=fn;
		pme->bbPlace=1i64<<square;
	}
}

//! Initialize Empty list
//!
//! The fixed move-ordering is carped from endgame.c
static void InitializeEmpties(CMmxEmpty mes[60], u8 empty) {
	CMmxEmpty* pme=mes;

	// corners first
	InitializeEmpty(pme, empty, A1, A1Flips);
	InitializeEmpty(pme, empty, H1, H1Flips);
	InitializeEmpty(pme, empty, A8, A8Flips);
	InitializeEmpty(pme, empty, H8, H8Flips);

	// A3 squares next
	InitializeEmpty(pme, empty, C1, C1Flips);
	InitializeEmpty(pme, empty, F1, F1Flips);
	InitializeEmpty(pme, empty, A3, A3Flips);
	InitializeEmpty(pme, empty, H3, H3Flips);
	InitializeEmpty(pme, empty, A6, A6Flips);
	InitializeEmpty(pme, empty, H6, H6Flips);
	InitializeEmpty(pme, empty, C8, C8Flips);
	InitializeEmpty(pme, empty, F8, F8Flips);

	// C3 squares next
	InitializeEmpty(pme, empty, C3, C3Flips);
	InitializeEmpty(pme, empty, F3, F3Flips);
	InitializeEmpty(pme, empty, C6, C6Flips);
	InitializeEmpty(pme, empty, F6, F6Flips);

	// A4 squares next
	InitializeEmpty(pme, empty, D1, D1Flips);
	InitializeEmpty(pme, empty, E1, E1Flips);
	InitializeEmpty(pme, empty, A4, A4Flips);
	InitializeEmpty(pme, empty, H4, H4Flips);
	InitializeEmpty(pme, empty, A5, A5Flips);
	InitializeEmpty(pme, empty, H5, H5Flips);
	InitializeEmpty(pme, empty, D8, D8Flips);
	InitializeEmpty(pme, empty, E8, E8Flips);

	// D3 squares next
	InitializeEmpty(pme, empty, D3, D3Flips);
	InitializeEmpty(pme, empty, E3, E3Flips);
	InitializeEmpty(pme, empty, C4, C4Flips);
	InitializeEmpty(pme, empty, F4, F4Flips);
	InitializeEmpty(pme, empty, C5, C5Flips);
	InitializeEmpty(pme, empty, F5, F5Flips);
	InitializeEmpty(pme, empty, D6, D6Flips);
	InitializeEmpty(pme, empty, E6, E6Flips);

	// B4 squares next
	InitializeEmpty(pme, empty, D2, D2Flips);
	InitializeEmpty(pme, empty, E2, E2Flips);
	InitializeEmpty(pme, empty, B4, B4Flips);
	InitializeEmpty(pme, empty, G4, G4Flips);
	InitializeEmpty(pme, empty, B5, B5Flips);
	InitializeEmpty(pme, empty, G5, G5Flips);
	InitializeEmpty(pme, empty, D7, D7Flips);
	InitializeEmpty(pme, empty, E7, E7Flips);

	// B3 squares next
	InitializeEmpty(pme, empty, C2, C2Flips);
	InitializeEmpty(pme, empty, F2, F2Flips);
	InitializeEmpty(pme, empty, B3, B3Flips);
	InitializeEmpty(pme, empty, G3, G3Flips);
	InitializeEmpty(pme, empty, B6, B6Flips);
	InitializeEmpty(pme, empty, G6, G6Flips);
	InitializeEmpty(pme, empty, C7, C7Flips);
	InitializeEmpty(pme, empty, F7, F7Flips);

	// c-squares 2nd to last
	InitializeEmpty(pme, empty, B1, B1Flips);
	InitializeEmpty(pme, empty, G1, G1Flips);
	InitializeEmpty(pme, empty, A2, A2Flips);
	InitializeEmpty(pme, empty, H2, H2Flips);
	InitializeEmpty(pme, empty, A7, A7Flips);
	InitializeEmpty(pme, empty, H7, H7Flips);
	InitializeEmpty(pme, empty, B8, B8Flips);
	InitializeEmpty(pme, empty, G8, G8Flips);

	// x-squares last
	InitializeEmpty(pme, empty, B2, B2Flips);
	InitializeEmpty(pme, empty, G2, G2Flips);
	InitializeEmpty(pme, empty, B7, B7Flips);
	InitializeEmpty(pme, empty, G7, G7Flips);

	pme->next=0;
}

//! Alpha/beta search for the exact solved value of the game.
//!
//! \param alpha alpha (mover POV)
//! \param beta beta (mover POV)
//! \return value (mover POV)
int MmxSolve(const CBitBoard& board, int alpha, int beta) {
	const int nEmpty=board.NEmpty();
	const int nMover=board.NMover();

	const int nEnemy=NN-nEmpty-nMover;
	const int nNet=nMover-nEnemy;
	const __int64 bbMover=board.mover.i8s;
	const __int64 bbEnemy=~(board.mover.i8s | board.empty.i8s);

	CMmxEmpty mes[60];
	InitializeEmpties(mes, board.empty);

	_asm {
		movq mmMover, [bbMover];
		movq mmEnemy, bbEnemy;
	}
	const int value=::Solve(alpha, beta, mes, nNet);
	__asm {
		emms
	}
	return value;
}

static void TestSolveBase(CBitBoard bb, bool fBlackMove, int vCorrect) {
	int vMmx=MmxSolve(bb, -64, 64);
	if (vMmx!=vCorrect)  {
		bb.FPrint(stdout, fBlackMove);
		std::cout << "Correct value: " << vCorrect << "; MmxSolve returned " << vMmx << "\n";
		if (vCorrect==0 || (vCorrect>0 && vMmx<vCorrect) || (vCorrect<0 && vMmx>vCorrect))
			std::cout << "RED ALERT\n";
	}
	TEST(vMmx==vCorrect);
}

static void TestSolve(const char* sBoard, bool fBlackMove, int vWinnerGetsNoEmpties, int vWinnerGetsEmpties) {
	const int vCorrect=fWinnerGetsEmpties?vWinnerGetsEmpties:vWinnerGetsNoEmpties;

	CBitBoard bb;
	bb.Initialize(sBoard, fBlackMove);

	TestSolveBase(bb, fBlackMove, vCorrect);
	bb.FlipHorizontal();
	TestSolveBase(bb, fBlackMove, vCorrect);
	bb.FlipVertical();
	TestSolveBase(bb, fBlackMove, vCorrect);
	bb.FlipHorizontal();
	TestSolveBase(bb, fBlackMove, vCorrect);

	bb.FlipDiagonal();

	TestSolveBase(bb, fBlackMove, vCorrect);
	bb.FlipHorizontal();
	TestSolveBase(bb, fBlackMove, vCorrect);
	bb.FlipVertical();
	TestSolveBase(bb, fBlackMove, vCorrect);
	bb.FlipHorizontal();
	TestSolveBase(bb, fBlackMove, vCorrect);
}

static void TestSolve(const char* sBoard, bool fBlackMove, int vCorrect) {
	TestSolve(sBoard, fBlackMove, vCorrect, vCorrect);
}

void TestMmxSolve() {
	for (int i=0; i<2; i++) {
		fWinnerGetsEmpties=i!=0;

		// 0 empties
		TestSolve("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", true, -64);
		TestSolve("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", false, 64);
		TestSolve("****************************************************************", true, 64);
		TestSolve("****************************************************************", false, -64);

		// 1 empty
		TestSolve("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO-", true, -63, -64);
		TestSolve("***************************************************************-", true, 63, 64);
		TestSolve("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO*O-", true, -58);
		TestSolve("OOOOOOO*OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO*O-", true, -44);
		TestSolve("*OOOOOO*OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO*O-", true, -30);
		TestSolve("*OOOOOO*OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO*O-", false, 30);
		TestSolve("*-OOOOO*OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO*OO", false, 46);
		TestSolve("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO*OOOOOO-OOOOOOOO", true, -48);
		TestSolve("OOOOOOO*OO*OOO**-*OO**O***OO****OO*OOO**OO**OOO*OOO**OO*********", true, -6);

		// D2
		TestSolve("OOOOOOOOXOO-OOOXOOOOOOOOOOOOOOOOXOOOOOOOOOOOOOOXOOOOOOOOOOOXOOOO", true, -22);
		TestSolve("XXXXXXXXOOO-OOOOXXOOOXXXXOXOXOXXOXXOXXOXXXXOXXXOXXXOXXXXXXXOXXXX", true, 23, 24);

		// C3
		TestSolve("XOXOXOOOOOOOOOOOXO-OOOOXOOOOOOOOXOOOOOOOOOOOOOOOOOOOOOOOOOXOOOOX", true, -12);
		TestSolve("OXOXOXXXXOOOXXXXOO-OOOOOXOOOXXXXOXOXOXXXXXOXXOXXXXOXXXOXXXOXXXXO", true, 13, 14);

		// C4
		TestSolve("OO*OO*OO*OOOOOOOOOOOOOOO*O-OOOO*OOOOOOOO*OOOOOOOOOOOOOOOOO*OOO*O", true, -12);
		TestSolve("XXOXXOXXOXOXOXXXXOOOXXXXOO-OOOOOXOOOXXXXOXOXOXXXXXOXXOXXXXOXXXOX", true, 13, 14);

		// 2 empty
		TestSolve("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO*O--", true, -64);
		TestSolve("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO--", true, -62, -64);
		TestSolve("*******OOOO****O-OOOO**OOOO****OOO***O*OOO*OO*OOOOOOOO-O********", true, 36);
		TestSolve("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO*O--", false, 64);
		TestSolve("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO--", false, 62, 64);

		//	2 empty with a choice
		TestSolve("*OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO*O--", true, -48);
		TestSolve("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO*OOOOOOOO*OOOOO--", true, -44);
		TestSolve("******-*O*O***-*OO****O*O*O*O*O*O****OO*O**OO*O*OOOOOO*O********", true, 14);

		// 3 empty
		TestSolve("-O**O*--********************************************************", true, 64);
		TestSolve("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO-OOOOOOOOOOOOO--", true, -61, -64);
		TestSolve("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO-OOOOOOOOOOOOOOOOOO--", false, 61, 64);

		// misc real life positions
		TestSolve("**OO-*--O**O**--OOO*O*OOOOO***O*OOO***O*OO**O***O*******O*OOOOOO", false, 14);
		TestSolve("*OOO-*--*OOO***-*O*OO**O**O*O*****OO*O****OOO****OO*****OOOOOOOO", true, -2);
		TestSolve("OOOOOOOOOOOOOOOOOO*O*O*OO*O*O**O-O***O*OOOO*O*OO*-OO*O*O********", true, -14);
		TestSolve("*******-*****O-**OO*-O***OOOO*****O*******O*OOO******OO-OOOOOOO-", false, -2);
	}
}
