#include "types.h"

#ifndef _H_ROW_FLIP
#define _H_ROW_FLIP

class CRowFlip {
public:
	int nFlipped;
	TFlipFunc* ffsBB[2];
	int sq, dir, left, right;

	u64 FlipBB(bool fBlackMove, TConfig* configs);
};

inline u64 CRowFlip::FlipBB(bool fBlackMove, TConfig* configs) { return ffsBB[fBlackMove](configs); }

#endif // _H_ROW_FLIP