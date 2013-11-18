#include "stdafx.h"
#include "utils.h"
#include "search.h"
#include "test.h"

static void append(u64 empty, Empty*& p) {
	while (empty) {
		int sq = popLowBit(empty);
		p->sq = sq;
		p++;
	}
}

void EndgameSearch::constructEmpties(u64 mover, u64 enemy) {
	u64 empty = ~(mover|enemy);

	Empty* pEnd = emptyArray;

	append(empty&corners, pEnd);
	append(empty&other, pEnd);
	append(empty&xSquares, pEnd);
	
	start.next = emptyArray;
	start.prev = 0;

	Empty* p = emptyArray;

	for (;p<pEnd; p++) {
		p->next = p+1;
		p->prev = p-1;
	}
	emptyArray[0].prev = &start;
	(p-1)->next = 0;
}

void EndgameSearch::init(u64 mover, u64 enemy) {
	constructEmpties(mover, enemy);
	hashTable.clear();
	useHash = true;
}

void EndgameSearch::validate() {
	Empty* empty = &start;
	while (empty->next) {
		empty = empty->next;
		int sq = empty->sq;
		if ((sq&63)!=sq) {
			fail("bad square");
		}
	}
}