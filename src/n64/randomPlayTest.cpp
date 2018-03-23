// Copyright Vlad Petric
//  All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.

#include <cstdlib>
#include <vector>

#include "../core/BitBoard.h"
#include "../core/Moves.h"
#include "randomPlayTest.h"
#include "test.h"

using namespace std;

// The random game tester uses a simple, easy to understand, but also slower
// implementation of move detection and effectuation. Basically, we'll
// compare every move made by the efficient n64 with what the straightforward
// implementation produces.

// Simple mover

const int kDirections[8][2] = {
    {-1, -1},
    {-1,  0},
    {-1, +1},
    { 0, -1},
    { 0, +1},
    {+1, -1},
    {+1,  0},
    {+1, +1}
};

// shift amounts corresponding to the 8 directions
const int kRightLeftShiftAmounts[8][2] = {
    {9, 0},
    {8, 0},
    {7, 0},
    {1, 0},
    {0, 1},
    {0, 7},
    {0, 8},
    {0, 9}
};

// State machine for detecting / effecting moves
enum kMoveGenStates {
    kStart,
    kOpponentPiece,
    kGood,
    kBad
};

// a directional mask for the moves
struct DirectionalMask {
    uint64_t ored_mask;
    uint64_t directional_mask[8];
    DirectionalMask() : ored_mask(0) {
        for (int i = 0; i < 8; ++i) {
            directional_mask[i] = 0;
        }
    }
};
// bitmask corresponding to each element in the bitboard.
const uint64_t position_bitmask[8][8]={
{0x1LLU, 0x2LLU, 0x4LLU, 0x8LLU, 0x10LLU, 0x20LLU, 0x40LLU, 0x80LLU},
{0x100LLU, 0x200LLU, 0x400LLU, 0x800LLU, 0x1000LLU, 0x2000LLU, 0x4000LLU, 0x8000LLU},
{0x10000LLU, 0x20000LLU, 0x40000LLU, 0x80000LLU, 0x100000LLU, 0x200000LLU, 0x400000LLU, 0x800000LLU},
{0x1000000LLU, 0x2000000LLU, 0x4000000LLU, 0x8000000LLU, 0x10000000LLU, 0x20000000LLU, 0x40000000LLU, 0x80000000LLU},
{0x100000000LLU, 0x200000000LLU, 0x400000000LLU, 0x800000000LLU, 0x1000000000LLU, 0x2000000000LLU, 0x4000000000LLU, 0x8000000000LLU},
{0x10000000000LLU, 0x20000000000LLU, 0x40000000000LLU, 0x80000000000LLU, 0x100000000000LLU, 0x200000000000LLU, 0x400000000000LLU, 0x800000000000LLU},
{0x1000000000000LLU, 0x2000000000000LLU, 0x4000000000000LLU, 0x8000000000000LLU, 0x10000000000000LLU, 0x20000000000000LLU, 0x40000000000000LLU, 0x80000000000000LLU},
{0x100000000000000LLU, 0x200000000000000LLU, 0x400000000000000LLU, 0x800000000000000LLU, 0x1000000000000000LLU, 0x2000000000000000LLU, 0x4000000000000000LLU, 0x8000000000000000LLU},
};

void generateMoveMask(const CBitBoard bb, DirectionalMask *dm) {
    uint64_t side_to_move = bb.mover;
    uint64_t other_side = bb.getEnemy();
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if (((side_to_move | other_side) &
                 position_bitmask[i][j]) == 0) {
                bool found_move = false;
                for (int dir = 0; dir < 8 && !found_move; ++dir) {
                    int ioffset = kDirections[dir][0];
                    int joffset = kDirections[dir][1];
                    enum kMoveGenStates state = kStart;
                    int pi = i + ioffset;
                    int pj = j + joffset;
                    while (pi >= 0 && pi < 8 && pj >= 0 && pj < 8 &&
                           state < kGood) {
                        switch(state) {
                        case kStart:
                            if (other_side & position_bitmask[pi][pj]) {
                                state = kOpponentPiece;
                            } else {
                                state = kBad;
                            }
                            break;
                        case kOpponentPiece:
                            if (other_side & position_bitmask[pi][pj]) {
                                state = kOpponentPiece;
                            } else if (side_to_move &
                                       position_bitmask[pi][pj]) {
                                state = kGood;
                            } else {
                                state = kBad;
                            }
                            break;
                        default:
                            break;
                        }
                        pi += ioffset;
                        pj += joffset;
                    }
                    if (state == kGood) {
                        dm->directional_mask[dir] |= position_bitmask[i][j];
                        dm->ored_mask |= position_bitmask[i][j];
                    }
                }
            }
        }
    }
}

CBitBoard performMove(const CBitBoard bb, const DirectionalMask &mask, uint64_t move) {
    TEST((mask.ored_mask & move) != 0);
    TEST((move & (move - 1)) == 0);
    CBitBoard r = bb;

    for (int dir = 0; dir < 8; ++dir) {
        uint64_t mover = bb.mover;
        uint64_t enemy = bb.getEnemy();
        uint64_t sweep = mask.directional_mask[dir] & move;
        if (sweep) {
            r.mover |= sweep;
            r.empty &= ~sweep;
            for (int step = 0; step < 6; ++step) {
                sweep <<= kRightLeftShiftAmounts[dir][1];
                sweep >>= kRightLeftShiftAmounts[dir][0];
                sweep &= ~mover;
                r.mover |= sweep;
            }
        }
    }
    return r;
}
// End simple mover


void RandomGameTester() {
    CBitBoard bb;
    bb.Initialize();

    bool gameOver = false;
    bool blackMove = false;
    
    do {
        // Calculate the moves - first, n64's way
        u64 moveBits = mobility(bb.mover, bb.getEnemy());

        // then, the simple (and slow) way
        struct DirectionalMask dm;
        generateMoveMask(bb, &dm);
        assertTrue(dm.ored_mask == moveBits);

        if (moveBits) {
            // The move mask has several bits set, corresponding 
            // to all the potential moves. We'll extract a random one.
            vector<uint64_t> singleMoves;
            do {
                // first set bit
                singleMoves.push_back((moveBits & (moveBits - 1)) ^ moveBits);
                // reset the bit 
                moveBits &= (moveBits - 1);
            } while(moveBits);
            uint64_t singleMove = singleMoves[rand() % singleMoves.size()];

            
            // Do the move, the simple and slow way. 
            CBitBoard simplebb = performMove(bb, dm, singleMove);

            // Do the move, n64's way
            CMoves moves;
            moves.Set(singleMove);
            TEST(moves.NMoves() == 1);
            CMove move;
            TEST(moves.GetNext(move));
            TEST(!move.IsPass());
            
            // Perform the move.

            const int sq = move.Square();
            // Final move? test last flip count, too.
            int finalFlipCount = -1;
            if ((bb.empty & (bb.empty - 1)) == 0) {
                finalFlipCount = lastFlipCount(sq, bb.mover);
            }

            const uint64_t flip = flips(sq, bb.mover, bb.getEnemy());
            const uint64_t squareMask = mask(sq);
            bb.mover ^= (flip|squareMask);
            bb.empty ^= squareMask;

            if (finalFlipCount != -1) {
                assertTrue(bitCount(flip) == finalFlipCount);
            }

            assertTrue(bb.mover == simplebb.mover);
            assertTrue(bb.empty == simplebb.empty);

            bb.InvertColors();
            blackMove = !blackMove;
        } else {
            // pass or game over? 
            u64 enemyMove = mobility(bb.getEnemy(), bb.mover);
            if (enemyMove) {
                bb.InvertColors(); 
                blackMove = !blackMove;
            } else {
                gameOver = true;
            }
        }
    } while (!gameOver);
}

void TestRandomGames(int count) {
    srand(20111004);
    for (int i = 0; i < count; ++i) {
        RandomGameTester();
    }
}
