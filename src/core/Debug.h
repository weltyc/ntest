///////////////////////////////////////////////////
// File Added by Richard Delorme for portability
// in replacement of crtdbg.h
///////////////////////////////////////////////////

#ifndef H_DEBUG
#define H_DEBUG

#ifdef _WIN32
#include <crtdbg.h>
#endif

#ifdef __unix__

#ifndef _ASSERT
#define _ASSERT
#endif

#endif //__unix__

#endif //H_DEBUG
