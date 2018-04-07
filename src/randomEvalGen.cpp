// Copyright Vlad Petric
//  All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.
#define __STDC_FORMAT_MACROS
#include <inttypes.h>

#include <cstdio>
#include <cstdlib>
#include <vector>

#include "core/BitBoard.h"
#include "core/Moves.h"
#include "Evaluator.h"
#include "Search.h"
#include "pattern/FastFlip.h"

using namespace std;

void RandomGameEvalGen() {
    CBitBoard bb;
    bb.Initialize();

    CEvaluator *eval = CEvaluator::FindEvaluator('J', 'A');

    bool gameOver = false;
    bool blackMove = false;

    int stopAt = 10 + rand() % 30;  // between 10 and 40 non-pass moves
   
    int npMoveCount = 0; 
    do {
        u64 moveBits = mobility(bb.mover, bb.getEnemy());
        u64 enemyMoveBits = mobility(bb.getEnemy(), bb.mover);

        if (moveBits) {
            // The move mask has several bits set, corresponding 
            // to all the potential moves. We'll extract a random one.
            vector<uint64_t> singleMoves;
            u64 copyMoveBits = moveBits;
            do {
                // first set bit
                singleMoves.push_back((copyMoveBits & (copyMoveBits - 1)) ^ copyMoveBits);
                // reset the bit 
                copyMoveBits &= (copyMoveBits - 1);
            } while(copyMoveBits);
            uint64_t singleMove = singleMoves[rand() % singleMoves.size()];

            CMoves moves;
            moves.Set(singleMove);
            CMove move;
            moves.GetNext(move);

            if (npMoveCount >= stopAt) {
                // Evaluate the position, print the config, then break. 
                Pos2 pp;
                pp.Initialize(bb, blackMove);
                CValue val = eval->EvalMobs(pp, bitCount(moveBits), bitCount(enemyMoveBits));
                fprintf(stdout, "{0x%" PRIx64 ", 0x%" PRIx64 ", %s, %d} /* %d moves */", bb.mover, bb.empty, blackMove? "true": "false", static_cast<int>(val), stopAt);
                break;
            }
            // Perform the move.
            const int sq = move.Square();

            const uint64_t flip = flips(sq, bb.mover, bb.getEnemy());
            const uint64_t squareMask = mask(sq);
            bb.mover ^= (flip|squareMask);
            bb.empty ^= squareMask;

            bb.InvertColors();
            blackMove = !blackMove;
            ++npMoveCount;
        } else {
            // pass or game over? 
            if (enemyMoveBits) {
                bb.InvertColors(); 
                blackMove = !blackMove;
            } else {
                gameOver = true;
            }
        }
    } while (!gameOver);
}

// To satisfy linker in debug mode
bool HasInput() {
    return false;
}

int main(int argc, char **argv) {
    InitFastFlip();
    InitConfigToPotMob();

    int count = 40;

    if (argc >= 2) {
        count = atoi(argv[1]);
    }

    srand(20111004);
    fputs("struct evaltest {\n", stdout);
    fputs("    uint64_t mover;\n", stdout);
    fputs("    uint64_t empty;\n", stdout);
    fputs("    bool blackMove;\n", stdout);
    fputs("    int16_t expectedEval;\n", stdout);
    fprintf(stdout, "} evalInstances[%d] = {\n", count);
    for (int i = 0; i < count; ++i) {
        RandomGameEvalGen();
        if (i < count - 1) {
            fputs(",\n", stdout);
        }
    }
    fputs("};\n", stdout);
}
