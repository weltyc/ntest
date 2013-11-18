#include "stdafx.h"
#include "search.h"
#include "test.h"

static void testConstructEmpties() {
	EndgameSearch search;
	u64 mover = 0;
	u64 enemy = ~2;

	search.init(mover, enemy);
	assertNotNull(&search.start);
	Empty* e1 = search.start.next;
	assertEquals(1, e1->sq);
	assertNull(e1->next);
}

static void testConstructEmpties(u64 mover, u64 enemy) {
	EndgameSearch search;
	search.init(mover, enemy);
	assertNotNull(&search.start);

	u64 squares = 0;
	for (Empty* e1 = search.start.next; e1; e1 = e1->next) {
		int sq = e1->sq;
		assertEquals(sq&63, sq);
		squares|= mask(sq);
	}
	assertHexEquals(~(mover|enemy), squares);
}

static void testConstructEmpties2() {
	testConstructEmpties(0x4, ~(0x4ULL | 1));
	testConstructEmpties(0, ~3ULL);
	testConstructEmpties(0x06ba0d341ae88ae0, 0xf945f28be517751f);
}

void testSearch() {
	testConstructEmpties();
	testConstructEmpties2();
}