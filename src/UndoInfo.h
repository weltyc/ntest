#ifndef _H_UNDO_INFO
#define _H_UNDO_INFO

#include "core/BitBoard.h"
#include "n64/flips.h"
#include "n64/utils.h"
#include "pattern/RowFlip.h"

class CUndoInfo {
public:
    void InitPrfs(const CBitBoard& bb, int sq);
	
	int NFlipped();
    void FlipBB(CBitBoard& bb);

private:
	int m_sq;
    int m_nflipped;
    u64 m_flip;
};

inline void CUndoInfo::InitPrfs(const CBitBoard& bb, int sq) {
	m_sq = sq;
    m_flip = flips(sq, bb.mover, ~(bb.mover | bb.empty)) | mask(sq);
    m_nflipped = static_cast<int>(bitCount(m_flip) - 1);
}

inline int CUndoInfo::NFlipped() {
    return m_nflipped;
}

inline void CUndoInfo::FlipBB(CBitBoard& bb) {
    bb.empty^=mask(m_sq);
    bb.mover^=m_flip;
}

#endif // _H_UNDO_INFO
