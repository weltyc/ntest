// Copyright 2001 Chris Welty
//	All Rights Reserved

#ifndef ODK_TYPES_H
#define ODK_TYPES_H


////////////////////////////////////////////////////////////
// Machine, compiler, framework dependent defines
////////////////////////////////////////////////////////////

// Define _ASSERT(x) macro which breaks into debugger if x is false


#if _MSC_VER	// Microsoft Visual C
#pragma warning(disable:4786)	// otherwise get STL errors
#include "crtdbg.h"				// include _ASSERT() macro

#elif defined(__GNUC__)	// Gnu C compiler
#define _ASSERT(x)	

#else	// unknown compiler
#define _ASSERT(x)	

#endif

////////////////////////////////////////////////////////////
// Typedefs
////////////////////////////////////////////////////////////

typedef unsigned short u2;
typedef unsigned long u4;

////////////////////////////////////////////////////////////
// Error codes
////////////////////////////////////////////////////////////

const int kErrMem=0x8100;

#endif // ODK_TYPES_H