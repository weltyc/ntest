#include "types.h"
#include "endgameSearch.h"

int solveNValue(int alpha, int beta, u64 mover, u64 enemy);

// testing
bool resultOk(int alpha, int beta, int expected , int actual);

// debugging and information
extern u4 nSNodesQuick;
void initCutoffs();
void dumpCutoffs();
