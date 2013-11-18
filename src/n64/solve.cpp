#include "stdafx.h"
#include "search.h"

extern u4 nSNodesQuick;

#define NODE nSNodesQuick++

const bool collectCutoffStats = false;

int etcStats[2] = {0,0};
int etcRequests = 0;

bool resultOk(int alpha, int beta, int expected, int actual) {
	if (expected >= beta) {
		return actual >= beta && expected >= actual;
	}
	else if (expected <= alpha) {
		return actual <= alpha && expected <= actual;
	}
	else {
		return actual == expected;
	}
}

inline int finalScore(u64 mover, u64 enemy) {
	return int(bitCount(mover)-bitCount(enemy));
}

const int INFINITY=65;


int solve1(u64 mover, u64 enemy, int sq) {
	const int net = int(bitCount(mover)-bitCount(enemy));
	const int flip = lastFlipCount(sq, mover);
	if (flip) {
		NODE;
		return net + 2*flip+1;
	}

	// pass. can enemy move?
	const int enemyFlip = lastFlipCount(sq, enemy);
	if (enemyFlip) {
		NODE;
		return net - 2*enemyFlip-1;
	}

	// nobody can move
	return net;
}

inline static int solve1Flip(u64 oldMover, u64 oldEnemy, u64 flip, int sqMove, int sqRemaining) {
	NODE;
	u64 childMover = oldEnemy & ~flip;
	u64 childEnemy = oldMover | flip | mask(sqMove);
	return solve1(childMover, childEnemy, sqRemaining);
}

int solve2(int alpha, int beta, u64 mover, u64 enemy, int sq1, int sq2) {
	int score = -INFINITY;
	u64 flip;

	flip = flips(sq1, mover, enemy);
	if (flip) {
		score = -solve1Flip(mover, enemy, flip, sq1, sq2);
		if (score >= beta) {
			return score;
		}
		if (score > alpha) {
			alpha = score;
		}
	}

	flip = flips(sq2, mover, enemy);
	if (flip) {
		int childScore = -solve1Flip(mover, enemy, flip, sq2, sq1);
		if (childScore > score) {
			score = childScore;
		}
		return score;
	}

	if (score > -INFINITY) {
		return score;
	}

	// pass
	score = INFINITY;
	flip = flips(sq1, enemy, mover);
	if (flip) {
		score = solve1Flip(enemy, mover, flip, sq1, sq2);
		if (score <= alpha) {
			return score;
		}
		if (score < beta) {
			beta = score;
		}
	}

	flip = flips(sq2, enemy, mover);
	if (flip) {
		int childScore = solve1Flip(enemy, mover, flip, sq2, sq1);
		if (childScore < score) {
			score = childScore;
		}
		return score;
	}

	if (score < INFINITY) {
		return score;
	}

	// both passed
	return finalScore(mover, enemy);
}

int solveNParity(int alpha, int beta, u64 mover, u64 enemy, u64 parity, EndgameSearch* search, bool hasPassed);

static const u64 BOTTOM = 0xFFFFFFFFULL;
static const u64 TOP = ~BOTTOM;
static const u64 LEFT = 0xF0F0F0F0F0F0F0F0ULL;
static const u64 RIGHT = ~LEFT;
static const u64 TL = TOP & LEFT;
static const u64 TR = TOP & RIGHT;
static const u64 BL = BOTTOM & LEFT;
static const u64 BR = BOTTOM & RIGHT;

static const u64 parityMask[64] = {
	BR, BR, BR, BR, BL, BL, BL, BL,
	BR, BR, BR, BR, BL, BL, BL, BL,
	BR, BR, BR, BR, BL, BL, BL, BL,
	BR, BR, BR, BR, BL, BL, BL, BL,
	TR, TR, TR, TR, TL, TL, TL, TL,
	TR, TR, TR, TR, TL, TL, TL, TL,
	TR, TR, TR, TR, TL, TL, TL, TL,
	TR, TR, TR, TR, TL, TL, TL, TL,
};

/**
* Remove the empty from the list of empty squares, calculate new mover and enemy bitboards, and continue the search
*/
int solveNFlipParity(int newAlpha, int newBeta, u64 oldMover, u64 oldEnemy, u64 flip, u64 parity, Empty* empty, EndgameSearch* search) {
	NODE;
	u64 mover = oldEnemy & ~ flip;
	u64 enemy = oldMover | flip | mask(empty->sq);
	int nEmpty = (int) bitCount(~(mover|enemy));
	int score;
	empty->remove();
	if (nEmpty == 2) {
		Empty* e1 = search->start.next;
		score = solve2(newAlpha, newBeta, mover, enemy, e1->sq, e1->next->sq);
	}
	else {
		parity ^= parityMask[empty->sq];
		score = solveNParity(newAlpha, newBeta, mover, enemy, parity, search, false);
	}
	empty->insert();
	return score;
}

int solveNParity(int alpha, int beta, u64 mover, u64 enemy, u64 parity, EndgameSearch* search, bool hasPassed) {

	int score = -INFINITY;

	// search with good parity
	for(Empty* empty = search->start.next; empty; empty  = empty -> next) {
		if (bitSet(empty->sq, parity)) {
			u64 flip = flips(empty->sq, mover, enemy);
			if (flip) {
				int childScore = -solveNFlipParity(-beta, -alpha, mover, enemy, flip, parity, empty, search);
				if (childScore >= beta) {
					return childScore;
				}
				else if (childScore > score) {
					score = childScore;
					if (score > alpha) {
						alpha = score;
					}
				}
			}
		}
	}

	// search with bad parity
	for(Empty* empty = search->start.next; empty; empty  = empty -> next) {
		if (bitClear(empty->sq, parity)) {
			u64 flip = flips(empty->sq, mover, enemy);
			if (flip) {
				int childScore = -solveNFlipParity(-beta, -alpha, mover, enemy, flip, parity, empty, search);
				if (childScore >= beta) {
					return childScore;
				}
				else if (childScore > score) {
					score = childScore;
					if (score > alpha) {
						alpha = score;
					}
				}
			}
		}
	}

	if (score > -INFINITY) {
		return score;
	}
	if (hasPassed) {
		return finalScore(mover, enemy);
	}
	return -solveNParity(-beta, -alpha, enemy, mover, parity, search, true);
}

const int mobilityMinEmpties = 8;

int solveMobility(int alpha, int beta, u64 mover, u64 enemy, u64 parity, EndgameSearch* search);
int solveHashMobility(int alpha, int beta, u64 mover, u64 enemy, u64 parity, EndgameSearch* search, bool hasPassed);

/**
* Remove the empty from the list of empty squares, calculate new mover and enemy bitboards, and continue the search
*/
int solveNFlipMobility(int newAlpha, int newBeta, u64 oldMover, u64 oldEnemy, u64 flip, u64 parity, Empty* empty, EndgameSearch* search) {
	NODE;
	u64 mover = oldEnemy & ~ flip;
	u64 enemy = oldMover | flip | mask(empty->sq);
	int nEmpty = (int) bitCount(~(mover|enemy));
	int score;
	empty->remove();
	parity ^= parityMask[empty->sq];
	if (nEmpty < mobilityMinEmpties) {
		score = solveNParity(newAlpha, newBeta, mover, enemy, parity, search, false);
	}
	else {
		score = solveHashMobility(newAlpha, newBeta, mover, enemy, parity, search, false);
	}
	empty->insert();
	return score;
}

static int enemyPostMoveMobilityCount(int sq, u64 mover, u64 enemy) {
	const u64 flip = flips(sq, mover, enemy);
	enemy ^= flip;
	mover ^= (flip | mask(sq));
	u64 mob = mobility(enemy, mover);
	u64 weightedMob = bitCount(mob)+bitCount(mob&corners);
	return  int(weightedMob);
}

/**
* @return true if the position is in hash and would cause an immediate cutoff
*/
static bool hashCutsOff(int alpha, int beta, u64 mover, u64 enemy, EndgameSearch* search) {
	Hash* hash = search->hashTable.getHash(mover, enemy);
	bool result = hash && (hash->min >= beta || hash->max <= alpha || hash->isExact());
	if (collectCutoffStats) {
		etcStats[result]++;
	}
	return result;
}

/**
* Put the moves in order from best to worst, based on simple calculations and enemy mobility
*
* To get the Empty of the move, call moveEmpty(moveScore).
*
* @param alpha alpha from CHILD point of view
* @param beta beta from CHILD point of view
* @param moveScores[out] holds score, see above.
* @return number of legal moves
*/
inline int orderMoves(int moveScores[], int alpha, int beta, u64 mover, u64 enemy, u64 parity, EndgameSearch* search) {
	int nMoves = 0;
	const u64 moverMobility = mobility(mover, enemy);
	if (collectCutoffStats) {
		etcRequests++;
	}

	for (Empty* empty = search->start.next; empty ; empty = empty->next) {
		int sq = empty->sq;
		if (bitSet(sq, moverMobility)) {
			const int index = int(empty - search->emptyArray);

			int score = -enemyPostMoveMobilityCount(sq, mover, enemy)<<8;
			score+=hashCutsOff(alpha, beta, mover, enemy, search)<<15;
			score+= bit(sq, corners)<<7;
			score += bit(sq, parity)<<5;
			score-= index;
			moveScores[nMoves] = index - (score<<8); // negative score because sort() sorts from low to high
			nMoves++;
		}
	}
	std::sort(moveScores, moveScores+nMoves);
	return nMoves;
}

inline Empty* moveEmpty(EndgameSearch* search, int moveScore) {
	const int index = (moveScore&0xFF);
	return search->emptyArray+index;
}

int cutoffs[64][64];

void initCutoffs() {
	for (int i=0; i<64; i++) {
		for (int j=0; j<64; j++) {
			cutoffs[i][j]=0;
		}
	}
}

void dumpCutoffs() {
	if (collectCutoffStats) {
		std::cout << "\ncutoff stats:\n";

		for (int empty=0; empty<64; empty++) {
			bool printed = false;
			double waste = 0;
			double total = 0;
			for (int index = 0; index<64; index++) {
				int c = cutoffs[empty][index];
				waste+=c*index;
				total += c;
			}
			std::cout.precision(3);
			std::cout << std::fixed;

			for (int index = 0; index<64; index++) {
				int c = cutoffs[empty][index];
				if (c) {
					if (!printed) {
						printed = true;
						std::cout << "[" << std::setw(2) << empty << "] ";
						std::cout << " wasted " << (waste/total) << ". ";
					}
					std::cout << index << ":" << std::setw(4) << c << ";  ";
				}
			}
			if (printed) {
				std::cout << "\n";
			}
		}

		const long total = etcStats[0]+etcStats[1];
		std::cout << "ETC stats:\n";
		std::cout << "cutoff " << etcStats[1] << " out of " << total << " total moves checked, or " << etcStats[1]/(double)total*100 << "%\n";
		std::cout << "cutoff " << etcStats[1] << " out of " << etcRequests << " calls to move sort, or " << etcStats[1]/(double)etcRequests*100 << "%\n";
	}
}

static void updateCutoffs(int index, u64 nEmpties) {
	cutoffs[nEmpties][index]++;
}

inline int solveMobility(int alpha, int beta, u64 mover, u64 enemy, u64 parity, EndgameSearch* search) {
	// move ordering
	int moveScores[32];
	int nMoves=orderMoves(moveScores, -beta, -alpha, mover, enemy, parity, search);

	int score = -INFINITY;

	for (int i=0; i<nMoves; i++) {
		Empty* empty = moveEmpty(search, moveScores[i]);

		u64 flip = flips(empty->sq, mover, enemy);
		if (flip) {
			int childScore = -solveNFlipMobility(-beta, -alpha, mover, enemy, flip, parity, empty, search);
			if (childScore >= beta) {
				if (collectCutoffStats) {
					const int nEmpty = bitCountInt(~(mover|enemy));
					updateCutoffs(i, nEmpty);
					//if (i>1 && nEmpty==11) {
					//	printBoard(mover, enemy);
					//	std::cout << "beta cutoff at beta = " << beta << ", score = " << childScore <<", best was " << score << "\n";
					//	for (int j=0; j<=i; j++) {
					//		std::cout << squareText(moveEmpty(search, moveScores[j])->sq) << " ";
					//	}
					//	std::cout << "\n";
					//}
				}
				score = childScore; 
				break;
			}
			else if (childScore > score) {
				score = childScore;
				if (score > alpha) {
					alpha = score;
				}
			}
		}
	}
	return score;
}

static int solveHashMobility(int alpha, int beta, u64 mover, u64 enemy, u64 parity, EndgameSearch* search, bool hasPassed) {
	// hash check. Could either return a value or narrow [alpha, beta].
	const int originalAlpha = alpha;
	const int originalBeta = beta;

	if (search->useHash) {
		Hash* hash = search->hashTable.getHash(mover, enemy);
		if (hash) {
			if (hash->min >= beta) {
				return hash->min;
			}
			if (hash->max <= alpha || hash->isExact()) {
				return hash->max;
			}
			if (hash->min >= alpha) {
				alpha = hash->min;
			}
			if (hash->max <= beta) {
				beta = hash->max;
			}
		}
	}

	int score = solveMobility(alpha, beta, mover, enemy, parity, search);

	if (score == -INFINITY) {
		if (hasPassed) {
			score = finalScore(mover, enemy);
		}
		else {
			score = -solveHashMobility(-beta, -alpha, enemy, mover, parity, search, true);
		}
	}
	if (search->useHash) {
		search->hashTable.storeHash(mover, enemy, originalAlpha, originalBeta, score);
	}
	return score;
}


u64 constructParity(u64 empty) {
	u64 parity=0;

	while (empty) {
		const int sq = popLowBit(empty);
		parity ^= parityMask[sq];
	}
	return parity;
}

int solveN(int alpha, int beta, u64 mover, u64 enemy, EndgameSearch* search, bool hasPassed) {
	u64 parity = constructParity(~(mover|enemy));
	return solveHashMobility(alpha, beta, mover, enemy, parity, search, hasPassed);
}

int solveNValue(int alpha, int beta, u64 mover, u64 enemy) {
	EndgameSearch search;
	search.init(mover, enemy);
	int resultN = solveN(alpha, beta, mover, enemy, &search, false);
	return resultN;
}
