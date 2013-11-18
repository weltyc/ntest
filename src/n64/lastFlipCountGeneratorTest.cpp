#include "stdafx.h"
#include "test.h"

extern u64 maskD7(int diag);
extern u64 maskD9(int diag);

void testLastFlipCountGenerator() {
	assertHexEquals(MaskA1H8, maskD9(0));
	assertHexEquals(MaskA1H8>>1, maskD9(1));
	assertHexEquals(1<<7, maskD9(-7));

	assertHexEquals(MaskA8H1, maskD7(7));
	assertHexEquals(0x1, maskD7(0));
	assertHexEquals(0x1ULL << 63, maskD7(14));
}
