#ifndef _H_UNDO_INFO
#define _H_UNDO_INFO

#include "core/BitBoard.h"
#include "pattern/RowFlip.h"

class CUndoInfo {
public:
	void InitPrfs(int sq, CRowFlip* prf0, CRowFlip* prf1, CRowFlip* prf2, CRowFlip* prf3);
	
	int NFlipped();
	void FlipBB(CBitBoard& bb, bool fBlackMove, TConfig* configs);

private:
	CRowFlip* m_prfs[4];

	int m_sq;
};

inline void CUndoInfo::InitPrfs(int sq, CRowFlip* prf0, CRowFlip* prf1, CRowFlip* prf2, CRowFlip* prf3) {
	m_prfs[0]=prf0;
	m_prfs[1]=prf1;
	m_prfs[2]=prf2;
	m_prfs[3]=prf3;
	m_sq = sq;
}

inline int CUndoInfo::NFlipped() {
	return m_prfs[0]->nFlipped+m_prfs[1]->nFlipped+m_prfs[2]->nFlipped+m_prfs[3]->nFlipped;
}

inline void CUndoInfo::FlipBB(CBitBoard& bb, bool fBlackMove, TConfig* configs) {
	bb.empty^=mask(m_sq);
	u64 flip = 
		m_prfs[0]->FlipBB(fBlackMove, configs) 
		| m_prfs[1]->FlipBB(fBlackMove, configs)
		| m_prfs[2]->FlipBB(fBlackMove, configs)
		| m_prfs[3]->FlipBB(fBlackMove, configs);
	bb.mover^=flip;
}

#endif // _H_UNDO_INFO