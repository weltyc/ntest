#include <cmath>

#include "hash.h"
#include "test.h"

static void testCollisions() {
	int count[256];
	for (int i=0; i<256; i++) {
		count[i]=i;
	}

	const int n = 4096;
	for (int i=0; i<n*256; i++) {
		u64 h = hash(i,i);
		count[h&0xFF]++;
	}

	const int sd4 = int(n + 7 * sqrt((double)n) +1);
	for (int i=0; i<256; i++) {
		if (count[i]>sd4) {
			std::ostringstream s;
			s << "Too many hash collisions in bucket " << i << ": " << count[i] << " > " << sd4;
			fail(s);
		}
	}
}

static void testUpdateParent() {
	HashTable hashTable;

	u64 mover = 0x000000FFFF000000ULL;
	u64 enemy = 0x0;
	assertNull(hashTable.getHash(mover, enemy));

	// Set the hash to have only a min value.
	// the hash has only a min value, so the parent value has only a max value.
	// Since the parent value has no min value, we can't update the score.
	hashTable.storeHash(mover, enemy, -1, 1, 12);
	Hash* hash = hashTable.getHash(mover, enemy);
	assertNotNull(hash);
	int score = -13;
	hash->updateParent(score);
	assertEquals(-13, score);
	hash->clear();

	// Set the hash to have an exact value.
	// Since the hash has an exact value, the parent has an exact value
	// and we can update the parent score.
	hashTable.storeHash(mover, enemy, -1, 1, 0);
	hash = hashTable.getHash(mover, enemy);
	assertNotNull(hash);
	score = -1;
	hash->updateParent(score);
	assertEquals(0, score);

	score = 1;
	hash->updateParent(score);
	assertEquals(1, score);
	hash->clear();

	// Set the hash to have only a max value.
	// Since the hash has a max value, the parent has a min value and we can update the score
	hashTable.storeHash(mover, enemy, -1, 1, -5);
	hash = hashTable.getHash(mover, enemy);
	assertNotNull(hash);
	score = -1;
	hash->updateParent(score);
	assertEquals(5, score);

	score = 6;
	hash->updateParent(score);
	assertEquals(6, score);
	hash->clear();

	// set the hash value twice. Score should be the higher of the two, even if it happened first
	hashTable.storeHash(mover, enemy, -1, 1, -4);
	hashTable.storeHash(mover, enemy, -1, 1, -3);
	score = 0;
	hash->updateParent(score);
	assertEquals(4, score);
}

void testHash() {
	testCollisions();
	testUpdateParent();
}
