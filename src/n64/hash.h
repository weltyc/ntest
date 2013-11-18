#include "stdafx.h"

#ifndef _H_HASH
#define _H_HASH

struct Hash {
	u64 mover;
	u64 enemy;
	short depth;
	short min;
	short max;

public:
	/**
	* Update score of a parent of this node.
	*
	* "Parent" means scores are reversed - from the parent's point of view
	* the score of this node is in the range [-max, -min].
	*
	* Since it's the parent's score, score can only go up as a result of calling this function.
	*/
	inline void updateParent(int& score) {
		if (-max > score) {
			score = -max;
		}
	}

	void clear() {
		mover = 0;
		enemy = 0;
	}

	bool isExact() {
		return min == max;
	}

	std::string toString();

private:
	void init(u64 mover, u64 enemy) {
		this->mover = mover;
		this->enemy = enemy;
		min = -64;
		max = 64;
	}

	void store(int alpha, int beta, int score);

	friend class HashTable;
};

class HashTable {
	static const int lgSize = 6;
	static const int size = 1<<lgSize;
	Hash hashes[size];	

public:
	Hash* getHash(u64 mover, u64 enemy);
	void storeHash(u64 mover, u64 enemy, int alpha, int beta, int score);
	void clear();

private:
	Hash* hashLoc(u64 mover, u64 enemy);
};

u64 hash(u64 a, u64 b);

#endif // _H_HASH