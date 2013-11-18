#include "stdafx.h"
#include "test.h"

void testRowCol() {
	for (int r=0; r<7; r++) {
		for (int c=0; c<7; c++) {
			int sq = square(r, c);
			assertEquals(row(sq), r);
			assertEquals(col(sq), c);
		}
	}
}

void testBitCount() {
	assertEquals(0, bitCount(0));
	assertEquals(1, bitCount(1));
	assertEquals(2, bitCount(3));
	assertEquals(1, bitCount(1ULL<<63));
	assertEquals(2, bitCount(mask(63)|mask(2)));
}

void testBit() {
	assertEquals(0, bit(3, 0));
	assertEquals(1, bit(3, ~0ULL));
	assertEquals(0, bit(3, 0x54ULL));
}

void testBitClear() {
	assertTrue(bitClear(3, 0));
	assertFalse(bitClear(3, ~0ULL));
	assertTrue(bitClear(3, 0x54ULL));
}

void testPopLowBit() {
	u64 bits = 1;
	assertEquals(0, popLowBit(bits));
	assertEquals(0, bits);

	bits = mask(63);
	assertEquals(63, popLowBit(bits));
	assertEquals(0, bits);
}


u64 slowMobility(u64 mover, u64 enemy) {
	u64 mobility=0;

	u64 empty = ~(mover|enemy);
	while (empty) {
		int sq = popLowBit(empty);
		if (flips(sq, mover, enemy)) {
			mobility|=mask(sq);
		}
	}
	return mobility;
}

void checkMobility(int index, u64 mover, u64 enemy) {
	assertEquals(0, mover&enemy);
	u64 expected = slowMobility(mover, enemy);
	u64 mob = mobility(mover, enemy);
	if (expected!=mob) {
		std::cout << "checkMobility(" << index << ")\n";
		std::cout << "Black to move\n";
		printBoard(mover, enemy);
		std::cout << "\n";
		std::cout<<"slowMobility()\n";
		printBitBoard(expected);
		std::cout<<"mobility()\n";
		printBitBoard(mob);
		std::cout << "mover = " << asHex(mover) << "\n";
		std::cout << "enemy = " << asHex(enemy) << "\n";
	}
	assertHexEquals(expected, mob);
}

static void testMobility() {
	assertHexEquals(0x2024044210ce2020, mobility(0x45208080e00800c,0xd889f33461114dd1)); 
	assertHexEquals(0x20, mobility(0x4, 0xd8));
	assertHexEquals(0, mobility(0, ~0));
	assertHexEquals(1, mobility(4, ~(1|4)));
	assertHexEquals(mask(63), mobility(mask(61), ~(mask(61)|mask(63))));

	for (int i=0; i<100000; i++) {
		u64 enemy = rand64();
		u64 mover = rand64()&~enemy;
		checkMobility(i, mover, enemy);
		checkMobility(i, enemy, mover);
	}
}

static void timeMobility(const u64 n) {
	u64 result=0;

	const clock_t start(clock());

	for (u64 i=0; i<n; i++) {
		result^=mobility(i, ~i);
	}

	const clock_t end(clock());
	const clock_t dt = end-start;
	const double ds = dt/(double)CLOCKS_PER_SEC;

	// need to use result, otherwise optimizer eliminates all calls to it
	if (result!=0xDEADBEEF) {
		std::cout << "Time mobility(): " <<  ds << "s"
			<< " for " << eng(double(n)) << " calls"
			<< " = " << eng(n/ds) << " calls/s"
			<< " or " << eng(ds/n) << "s/call "
			<< std::endl;
	}
}

void timeMobility() {
	mobility(0,0); // make sure code is loaded into memory

	const u64 n = 500000000ULL;
	timeMobility(1000);
	timeMobility(n);
}

void testEng() {
	assertStringEquals("0.00 ", eng(0));
	assertStringEquals("999. ", eng(999));
	assertStringEquals("1.00k", eng(1000));
	assertStringEquals("1.00M", eng(1e6));
	assertStringEquals("82.0 ", eng(82));
	assertStringEquals("1.64m", eng(.0016422));
	assertStringEquals("16.7n", eng(1/6e7));
}

void testUtils() {
	testBit();
	testBitClear();
	testRowCol();
	testBitCount();
	testPopLowBit();
	testEng();
	testMobility();
}