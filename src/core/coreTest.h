#include "Moves.h"

inline void testCore() {
	void TestBitBoard();
	void TestBook();
	void TestQPosition();

	TestBitBoard();
	TestBook();
	TestQPosition();
	CMove::Test();
	CMoves::Test();

	void TestStore();
	TestStore();
}