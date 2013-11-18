#ifndef _H_ENDGAME_SEARCH
#define _H_ENDGAME_SEARCH

#include "types.h"
#include "hash.h"

struct Empty {
	int sq;
	Empty* prev;
	Empty* next;

	inline void remove() {
		prev->next = next;
		if (next) {
			next->prev = prev;
		}
	}

	inline void insert() {
		prev->next = this;
		if (next) {
			next->prev = this;
		}
	}
};


class EndgameSearch {
public:
	Empty start;
	Empty emptyArray[32];
	HashTable hashTable;
	bool useHash;

public:
	void init(u64 mover, u64 enemy);
	void validate();

private:
	void constructEmpties(u64 mover, u64 enemy);
};

#endif // _H_ENDGAME_SEARCH