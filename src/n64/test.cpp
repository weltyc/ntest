#include "stdafx.h"

#include <cmath>
#include <cstring>
#include <iostream>

// in MSVC, break into the debugger if we're in debug mode and have a test failure
#ifdef _MSC_VER
#include <crtdbg.h>
#endif

void fail(const char* text) {
	std::cerr << text << std::endl;
#ifdef _MSC_VER
	// convert text to wchar_t for output
	size_t origsize = strlen(text) + 1;
    const size_t newsize = 100;
    size_t wSize = 0;
    wchar_t wText[newsize];
    mbstowcs_s(&wSize, wText, origsize, text, _TRUNCATE);

	_ASSERT_EXPR(false, wText);
#endif
	throw text;
}

void fail(const std::ostringstream& s) {
	std::string str = s.str();
	fail(str.c_str());
}

void assertStringEquals(const char* expected, const std::string& actual) {
	if (actual!=expected) {
		std::ostringstream s;
		s << "Expected [" << expected << "] but was [" << actual <<"]";
		fail(s);
	}
}

void assertStringEquals(const char* expected, const char* actual) {
	if (strcmp(expected, actual)) {
		std::ostringstream s;
		s << "Expected [" << expected << "] but was [" << actual <<"]";
		fail(s);
	}
}

void assertEquals(i64 a, i64 b) {
	if (a!=b) {
		std::ostringstream s;
		s << "Expected " << a << " but was " << b;
		fail(s);
	}
}

void assertEquals(float expected, float actual, float tol) {
	if (!(std::abs(expected-actual)<=tol)) {
		std::ostringstream s;
		s << "Expected " << expected << " but was " << actual;
		fail(s);
	}
}

void assertEquals(bool expected, bool actual) {
	if (actual!=expected) {
		std::ostringstream s;
		s << "Expected [" << expected << "] but was [" << actual <<"]";
		fail(s);
	}
}


void assertHexEquals(u64 expected, u64 actual) {
	if (expected!=actual) {
		printXorBoard(expected, actual);
		std::ostringstream s;
		s << "Expected 0x" << std::hex << expected << " but was 0x" << actual << " (xor: " << (expected^actual) << ")";
		fail(s);
	}
}

void assertNotNull(void* p) {
	if (p==0) {
		fail("Expected not NULL but was NULL");
	}
}

void assertNull(void* p) {
	if (p!=0) {
		std::ostringstream s;
		s << "Expected NULL but was 0x" << std::hex << p;
	}
}

void assertTrue(bool b) {
	if (!b) {
		fail("expected true but was false");
	}
}

void assertFalse(bool b) {
	if (b) {
		fail("expected false but was true");
	}
}

void assertBoolEquals(bool expected, bool actual) {
	if (expected) {
		assertTrue(actual);
	}
	else {
		assertFalse(actual);
	}
}
