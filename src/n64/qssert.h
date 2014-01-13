#ifdef _WIN32
#include <crtdbg.h>

#define QSSERT(x) _ASSERT(x)
#define TEST(x) _ASSERT(x)
#else
#include <cassert>
#define QSSERT(x) assert(x)
#define TEST(x) assert(x)
#endif
