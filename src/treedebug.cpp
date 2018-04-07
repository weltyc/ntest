// Copyright Chris Welty
//  All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.

#include <iostream>
#include <iomanip>
#include "core/NodeStats.h"

#include "TreeDebug.h"

using namespace std;

int depth=0;


void TreeDebugStartRound(CHeightInfo hi) {
    cout << setfill('-') << setw(30) << "\n" << setfill(' ');
    cout << "Starting round with height=" << hi.height << ", iPrune=" << hi.iPrune << ", fWLD=" << hi.fWLD << "\n";
}

// before we make a move to value a subtree
// We call this routine after we make the move, so fBlackMove is reversed.
void TreeDebugBefore(int height, CMove& move, bool fBlackMove, CValue alpha, CValue beta, bool fNegascout) {
    cout  << setw(depth+1) << '-' << (fBlackMove?"w ":"b ") << move << "(" << alpha << "," << beta ;
    if (fNegascout) cout << ", negascout";
    cout << "):\n";
    depth++;
}

void TreeDebugAfter(int height, CMove& move, bool fBlackMove, CValue alpha, CValue beta, CValue value, bool fNegascout) {
    depth--;
    cout  << setw(depth+1) << '.' << (fBlackMove?"w ":"b ") << move << "(" << alpha << "," << beta;
    if (fNegascout) cout << ", negascout";
    cout << ") " << (int)nBBFlips << "n: " << value << "\n";
}

void TreeDebugCallSolver(int alpha, int beta, bool fBlackMove, int result) {
    cout << setw(depth+1) << 's';
    cout << "-MmxSolve(" << -beta << ", " << -alpha << ", " << (fBlackMove?"black":"white") << ") = " << result << "\n";
}

void PrintTreeCutoff(CValue best, CValue beta) {
    cout << setw(depth+1) << '[' << "cutoff " << best << ">=" << beta << "]";
    if (beta==kInfinity)
    	cout << "infinity cut off!";
    cout << "\n";
}

void PrintTreeCache(CValue best, CValue beta, int height) {
    cout << " [cache value " << best << ", beta=" << beta << ", height=" << height << "]\n";
}

