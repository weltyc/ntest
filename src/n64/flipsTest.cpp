#include "stdafx.h"
#include "test.h"
#include "flips.h"

extern u64 rowFlips[8][256];
extern u64 d7Flips[11][256];
extern int counts[8][256];

static void testFlipCounts(int expected, int sq, u64 mover) {
	if (bitSet(sq, mover)) {
		fail("illegal test, can't move where you already have a piece");
	}
	const int actual = lastFlipCount(sq, mover);
	if (expected!=actual) {
		std::cout << "Square : " << squareText(sq) << "\n";
		const u64 enemy = ~(mover|mask(sq));
		printBoard(mover, enemy);
		std::cout << std::endl;
		assertEquals(expected, actual);
	}
}

static void testFlipCounts() {
	testFlipCounts(2, 13, ~0x46e48dc91b92aae0);

	testFlipCounts(1, 0, 0x010000);

	testFlipCounts(0, 0, 0x0);
	testFlipCounts(1, 0, 0x04);
	testFlipCounts(1, 0, 0x040000);
	testFlipCounts(1, 0, 0x010000);

	testFlipCounts(0, 63, 0x0);
	testFlipCounts(1, 63, 0x2000000000000000);
	testFlipCounts(1, 63, 0x200000000000);
	testFlipCounts(1, 63, 0x800000000000);

	assertEquals(3, counts[5][0x87]);
}

static void testFlipTables() {
	assertHexEquals(0x40ULL<<6*8, d7Flips[10][0x40]);
	assertHexEquals(0x4000000000000000, rowFlips[7][0x40]);
}

static void testFlipFlips() {
	assertHexEquals(0, flips(0, 0, ~1ULL));
	assertHexEquals(0x2, flips(0, 0x4, ~0x5ULL));
	assertHexEquals(0x100, flips(0, 0x10000, ~0x10001ULL));
	assertHexEquals(0x200, flips(0, 0x40000, ~0x40001ULL));

	assertHexEquals(0, flips(63, 0, ~mask(63)));
	assertHexEquals(mask(62), flips(63, mask(61), ~(mask(61)|mask(63))));
	assertHexEquals(mask(55), flips(63, mask(47), ~(mask(47)|mask(63))));
	assertHexEquals(mask(54), flips(63, mask(45), ~(mask(45)|mask(63))));

	assertHexEquals(0, flips(7, 0, ~mask(7)));
	assertHexEquals(mask(6), flips(7, mask(5), ~(mask(7)|mask(5))));
	assertHexEquals(mask(14), flips(7, mask(21), ~(mask(7)|mask(21))));
	assertHexEquals(mask(15), flips(7, mask(23), ~(mask(7)|mask(23))));

	assertHexEquals(0x0070000000000000, flips(61, 0xd68dad1b5a36751f, 0x97252e4a5c98ae0));
	assertHexEquals(0x40ULL<<7*8, flips(63, 0x3FFFFFFFFFFFFFFF, 0x40ULL<<7*8));
	assertHexEquals(0, flips(48, 0x5796af2d5e5a751f,0xa86850d2a1258ae0));
	assertHexEquals(0, flips(57, 0x010a5880126a3d44, 0x1cf0862fa4118029));
}

/**
* @param row
* @return true if the row is in the range [0,7].
*/
static bool validRow(int row) {
	return row>=0 && row<8;
}

static u64 slowFlipsDir(int r, int c, int dr, int dc, u64 mover, u64 enemy) {
	u64 flips = 0;
	r+=dr;
	c+=dc;
	while (validRow(r) && validRow(c)) {
		const int sq = square(r, c);
		if (bitSet(sq, enemy)) {
			flips |= 1ULL<<sq;
		}
		else {
			return (bitSet(sq, mover)) ? flips : 0;
		}
		r+=dr;
		c+=dc;
	}
	return 0;
}

/**
* slow but certain flip calculator, for testing the fast but incomprehensible generated code
*/
static u64 slowFlips(int sq, u64 mover, u64 enemy) {
	const int c = col(sq);
	const int r = row(sq);

	u64 slowFlips = 0;
	for (int dr = -1; dr <=1; dr++) {
		for (int dc = -1; dc<=1; dc++) {
			if (dr!=0 || dc!=0) {
				slowFlips|=slowFlipsDir(r,c,dr,dc,mover, enemy);
			}
		}
	}
	return slowFlips;
}


static void testFlips(int sq, u64 mover, u64 enemy) {
	u64 m = mask(sq);
	mover&=~m;
	enemy&=~m;

	u64 expected = slowFlips(sq, mover, enemy);
	u64 actual = flips(sq, mover, enemy);
	if (expected!=actual) {
		printBoard(mover, enemy);
		std::cout << "Flips from " << squareText(sq) << "\n";
	}
	assertHexEquals(expected, actual);

	u64 ks = koggeStoneFlips(sq, mover, enemy);
	if (expected!=ks) {
		printBoard(mover, enemy);
		std::cout << "Flips from " << squareText(sq) << "\n";
	}
	assertHexEquals(expected, ks);
}

static void testLastFlipCounts(int sq, u64 mover) {
	mover &= ~mask(sq);
	const u64 enemy = ~(mover | mask(sq));

	int expected = lastFlipCount(sq, mover);
	u64 flip = flips(sq, mover, enemy);
	u64 actual = bitCount(flip);
	if (actual!=expected) {
		std::cout << "lastFlipCount error\n";
		std::cout << "lastFlipCount : " << expected << "\n";
		std::cout << "flips : (" << bitCount(flip) << ")\n";
		printBitBoard(flip);
		std::cout << "\nboard : (* to move)\n";
		printBoard(mover, enemy);
		std::cout << "\n";
		std::cout << "enemy : " << asHex(enemy) << "\n";
		std::cout << "square : " << squareText(sq) << " (" << sq << ")" << std::endl;
	}
	assertHexEquals(expected, actual);
}

static void testRandomFlips() {
	srand(12);
	for (int i=0; i<10000; i++) {
		const int sq = rand()&63;
		u64 mover = rand64();
		u64 enemy = rand64();

		testFlips(sq, mover&~enemy, enemy);
		testFlips(sq, mover, enemy&~mover);
		testLastFlipCounts(sq, enemy);
		testLastFlipCounts(sq, enemy&~mover);
	}
}

static void testNeighbors() {
	assertHexEquals(0x302ULL, neighbors[0]);
	assertHexEquals(0x70507ULL, neighbors[9]);
	assertHexEquals(0x40C0ULL<<6*8, neighbors[63]);
}

void testFlips() {
	initFlips();
	testFlipCounts();
	testFlipTables();
	testFlipFlips();
	testRandomFlips();
	testNeighbors();
}


