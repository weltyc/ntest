#include "stdafx.h"
#include "hash.h"

const bool debug = false;

u64 hash(u64 a, u64 b) {
	const u64 mix = 0xc6a4a7935bd1e995ULL;

	u64 h;
	h = _byteswap_uint64(a*mix);
	h = _byteswap_uint64((h+b)*mix);

	return h;
}

/**
* Update min and max based on a search result.
*
* Precondition:
*  this->init() must have been called for the current position (only once per position, not each time store() is called)
*/
void Hash::store(int alpha, int beta, int score) {
	if (score > alpha) {
		if (score > min) {
			min = score;
		}
	}
	if (score < beta) {
		if (score < max) {
			max = score;
		}
	}
}

std::string Hash::toString() {
	std::ostringstream os;
	os.width(3);
	os << "[" << min << "," << max << "] ";
	os << std::hex << "mover=" << mover << "; enemy=" << enemy;
	return os.str();
}

/**
* Clear the HashTable (clear all elements)
*/
void HashTable::clear() {
	for (int i=0; i<size; i++) {
		hashes[i].clear();
	}
}

/**
* @return the hash for the board, if it exists; or whatever's currently in the hash slot, if it doesn't
*/
Hash* HashTable::hashLoc(u64 mover, u64 enemy) {
	u64 key = (size-1) & hash(mover, enemy);
	return hashes+key;
}

/**
* @return the Hash for the board, if it exists; or NULL if there is no Hash for the board
*/
Hash* HashTable::getHash(u64 mover, u64 enemy) {
	Hash* entry = hashLoc(mover, enemy);
	if (entry->mover == mover && entry->enemy==enemy) {
		return entry;
	} else {
		return 0;
	}
}

/**
* A search has been completed. Store the information in the hash.
*
* Currently overwrites existing hash entry regardless of depth.
*/
void HashTable::storeHash(u64 mover, u64 enemy, int alpha, int beta, int score) {
	Hash* entry = hashLoc(mover, enemy);
	if (entry->mover != mover ||entry->enemy != enemy) {
		entry->init(mover, enemy);
	}
	entry->store(alpha, beta, score);
}