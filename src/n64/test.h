#include "stdafx.h"
#include <iostream>

void fail(const char* text);
void fail(const std::ostringstream& s);
void assertEquals(float expected, float actual, float tol);
void assertBoolEquals(bool expected, bool actual);
void assertStringEquals(const char* expected, const std::string& actual);
void assertStringEquals(const char* expected, const char* actual);
void assertEquals(i64 a, i64 b);
void assertHexEquals(u64 a, u64 b);
void assertNotNull(void* p);
void assertNull(void* p);
void assertTrue(bool b);
void assertFalse(bool b);
