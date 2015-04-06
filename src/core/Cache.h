// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.

// Cache header file

#pragma once

#include "BitBoard.h"
#include "Moves.h"

#if defined(_WIN32)
#include <xmmintrin.h>
#endif

//! Data element of the transposition table (CCache)
class CCacheData {
public:
	CCacheData();
	CCacheData(CValue anLBound, CValue aUBound, int aHeight, int aPrune, int nEmpty);

	void Clear();
	void Initialize(const CBitBoard& board, int height, int iPrune, int nEmpty);
	bool Loadable(int aheight, int aPrune, int nEmpty) const;
	bool Storeable(int aheight, int aPrune, int nEmpty) const;
	bool Replaceable(int aheight, int aPrune, int nEmpty) const;
	static int Importance(int aheight, int aPrune, int nEmpty);

	// misc
	void SetStale(bool fNewStale=true);
	void Verify();

	// info
	const CBitBoard& Board() const;

	// moves
	CMove BestMove() const;
	void BestMove(CMove newBestMove);

	// load info from cache. Returns TRUE if we can return value immediately
	bool Load(int height, int iPrune, int nEmpty, CValue alpha, CValue beta, CMove& bestMove,
		int& iFastestFirst, CValue& searchAlpha, CValue& searchBeta, CValue& value);
	bool AlphaCutoff(int height, int iPrune, int nEmpty, CValue alpha) const;

	// store info in cache.
	void Store(int height, int iPrune, int nEmpty, CMove bestMove, int iFastestFirst, CValue searchAlpha, CValue searchBeta, CValue& value);

	// debugging
	void Print(bool fBlackMove) const;
	std::ostream& OutData(std::ostream& os) const;

	bool operator<(const CCacheData& b) const;

private:
	CBitBoard board;
	CValue lBound, uBound;
	u1 height, iPrune, nEmpty;

	CMove bestMove;
	u1 iFastestFirst;

	u1 fStale;

	friend class CCache;
};

inline CCacheData::CCacheData() {};
inline CCacheData::CCacheData(CValue anLBound, CValue aUBound, int aHeight,int aPrune,int anEmpty) { lBound=anLBound; uBound=aUBound; height=aHeight; iPrune=aPrune; nEmpty=anEmpty; }
inline CMove CCacheData::BestMove() const {return bestMove;}
inline void CCacheData::BestMove(CMove newBestMove) {bestMove=newBestMove;}
inline bool CCacheData::operator<(const CCacheData& b) const { return board<b.board;}
inline std::ostream& operator<<(std::ostream& os, const CCacheData& cd) { return cd.OutData(os);}
inline void CCacheData::SetStale(bool fNewStale) { fStale=fNewStale; }
inline const CBitBoard& CCacheData::Board() const { return board; }

/////////////////////////////////////////////////
// CCache class
/////////////////////////////////////////////////

//! A transposition table.
//! For each position in the CCache we store data of type CCacheData.
class CCache {
public:
	CCache(u4 nBuckets);
	~CCache();

	// copy a cache
	int CopyData(const CCache& cache2);

	// Other
	void SetStale();
	void PrintStats() const;
	void ClearStats();
	void Clear();
	void Verify();

	void Prefetch(u64 hash) {
		hash &= nBuckets - 1;
#if defined(_WIN32)
		_mm_prefetch(reinterpret_cast<const char *>(buckets + hash), _MM_HINT_T0);
#elif __GNUC__ >=4
		__builtin_prefetch(reinterpret_cast<const char *>(buckets + hash), 0, 0);
#endif
	}

	CCacheData* FindOld(const CBitBoard& pos, u64 hash);
	CCacheData* FindNew(const CBitBoard& pos, u64 hash, int height, int iPrune, int nEmpty);

	int NBuckets() { return nBuckets; }
private:
	i4 queries, readMoves, readValues, writes;
	CCacheData* buckets;
	u4 nBuckets;
	u4 mask;	// nBuckets-1
	int staleCount;
};
