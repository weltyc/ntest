// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.

// Cache for transposition table and move ordering

#include <algorithm>
#include <cassert>
#include <cstring>

#include "../n64/types.h"
#include "options.h"
#include "Cache.h"

using namespace std;

const bool printCacheStores=false;

#define CACHE_STATS 0
#if CACHE_STATS
#define UPDATE_CACHE_STATS queries++; if (result) writes++;
#define UPDATE_CACHE_STATS2 readMoves++; if (result->data.Importance()>=Importance(height,aPrune,nEmpty)) readValues++;
#else
#define UPDATE_CACHE_STATS
#define UPDATE_CACHE_STATS2
#endif

// if nMPCCache is 1, we allow the cache to return an MPC value instead of a full-width value
//	when we're not solving.
// if it is 2, we allow the cache to return an MPC value instead of a FW value when the MPC value is
//	to a strictly greater height than the FW value requested.
// if it is 0, we never return an MPC value instead of a full-width value.
const int nMPCCache=2;

int CCacheData::Importance(int aHeight, int aPrune, int nEmpty) {
	const bool fullSolve = aPrune==0 && nEmpty<=hSolverStart+aHeight;
	// boost depth by 2 when solving
	switch(nMPCCache) {
	case 2:
		if (fullSolve)
			return (aHeight+2)<<8;
		else
			return (aHeight<<8)-aPrune;
	case 0:
	case 1:
	default:
		if (fullSolve)
			return aHeight+2;
		else
			return aHeight;
	}
}

inline bool CCacheData::Loadable(int aHeight, int aPrune, int anEmpty) const {
	switch(nMPCCache) {
	case 2:
		//return (aHeight<height && aHeight<anEmpty-hSolverStart) || (aHeight==height && aPrune>=iPrune);
		return aHeight<height || (aHeight==height && aPrune>=iPrune);
	case 1:
		return Importance(aHeight, aPrune, anEmpty)<=Importance(height,iPrune, nEmpty);
	case 0:
	default:
		return aHeight<=height && aPrune>=iPrune;
	}
}

// return true if the value can be stored in the cache
inline bool CCacheData::Storeable(int aHeight, int aPrune,int anEmpty) const {
	return Importance(aHeight, aPrune, anEmpty)>Importance(height,iPrune, nEmpty) || (aHeight>=height && aPrune<=iPrune);
}

// determine whether to replace an old cache entry with this one
bool CCacheData::Replaceable(int aHeight, int aPrune, int anEmpty) const {
	return Importance(aHeight, aPrune, anEmpty)>Importance(height,iPrune, nEmpty);
}

bool CCacheData::Load(int aHeight, int aPrune, int nEmpty, CValue alpha, CValue beta, CMove& aBestMove,
					   int& aiFastestFirst, CValue& searchAlpha, CValue& searchBeta, CValue& value) {

	if (printCacheStores)
		printf("Loading from cache at %p: [%hd, %hd] at height %d/%d - window is (%hd,%hd)\n", static_cast<void*>(this),lBound, uBound, height, aPrune, searchAlpha, searchBeta);
	//	printf("Loading from cache: [%hd, %hd] at height %d/%d - window is (%hd,%hd)\n",lBound, uBound, height, aPrune, searchAlpha, searchBeta);

	aBestMove=bestMove;
	aiFastestFirst=iFastestFirst;

	if (Loadable(aHeight, aPrune, nEmpty)) {
		// check for immediate return conditions via cutoff
		assert(aHeight<=height);

		if (lBound>=beta || lBound==uBound) {
			value=lBound;
			return true;
		}
		if (uBound<=alpha) {
			value=uBound;
			return true;
		}

		// update searchAlpha and searchBeta
		searchAlpha=std::max(alpha, lBound);
		searchBeta=std::min(beta, uBound);
		assert(searchAlpha<searchBeta);
	}
	else {
		searchAlpha=alpha;
		searchBeta=beta;
	}

	return false;
}

// return true if the node will alpha-cutoff. Used in move ordering.
bool CCacheData::AlphaCutoff(int aHeight, int aPrune, int nEmpty, CValue alpha) const {

	if (printCacheStores)
		printf("Checking Alpha Cutoff from cache at %p: [%hd, %hd] at height %d/%d - alpha is %d\n",static_cast<void*>(const_cast<CCacheData*>(this)),lBound, uBound, height, aPrune, alpha);
	//	printf("Loading from cache: [%hd, %hd] at height %d/%d - window is (%hd,%hd)\n",lBound, uBound, height, aPrune, searchAlpha, searchBeta);

	return (Loadable(aHeight, aPrune, nEmpty) && uBound<=alpha);
}


// store info in cache.
void CCacheData::Store(int aHeight, int aPrune, int anEmpty, CMove aBestMove, int aiFastestFirst, CValue searchAlpha, CValue searchBeta, CValue& value) {
	assert(anEmpty);
	assert(aHeight<=anEmpty-hSolverStart);

	// If we can use the value from the cache, constrain the return value to be in [lBound, uBound]
	if (Loadable(aHeight, aPrune, anEmpty) && !Storeable(aHeight, aPrune, anEmpty)) {
		if (value<lBound)
			value=lBound;
		else if (value>uBound)
			value=uBound;
		return;
	}
	// If the new search height is higher than the old search height, replace the old stuff
	if (Replaceable(aHeight, aPrune, anEmpty)) {
		height=aHeight;
		iPrune=aPrune;
		lBound=-kInfinity;
		uBound=kInfinity;
		nEmpty=anEmpty;
	}
	if (Storeable(aHeight, aPrune, anEmpty)) {
		assert(aBestMove.Row()>=0);
		bestMove=aBestMove;
		iFastestFirst|=aiFastestFirst;
		height=aHeight;
		iPrune=aPrune;
		nEmpty=anEmpty;

		assert(searchAlpha<searchBeta && lBound<=uBound);

		if (value<searchBeta && value<uBound) {
			if(value<lBound) {
				//assert(::iPruneMidgame || ::iPruneEndgame);
				lBound=value;
			}
			uBound=value;
		}

		if (value>searchAlpha && value>lBound) {
			if(value>uBound) {
				//assert(::iPruneMidgame || ::iPruneEndgame);
				uBound=value;
			}
			lBound=value;
		}

		if (printCacheStores)
			printf("Added to cache at %p: [%hd, %hd] at height %d - window was (%hd,%hd)\n",static_cast<void*>(this),lBound, uBound, height,searchAlpha, searchBeta);
		//	printf("Added to cache: [%hd, %hd] at height %d - window was (%hd,%hd)\n",lBound, uBound, height,searchAlpha, searchBeta);
	}
}

ostream& CCacheData::OutData(ostream& os) const {
	os << bestMove;
	os << "[" << lBound << "," << uBound << "] @ " << int(height) << ":" << int(iPrune) << "-" << int(nEmpty) << "\n";
	return os;
}

void CCacheData::Clear() {
	// store an impossible position to prevent collisions
	board.SetImpossible();
	// make stale to allow overwrites
	SetStale();
	// set other stuff to 0 for debugging purposes
	height=iPrune=nEmpty=iFastestFirst=0;
	lBound=uBound=0;
}

void CCacheData::Initialize(const CBitBoard& aBoard, int aheight, int aPrune, int vnEmpty) {
	board=aBoard;
	height=aheight;
	iPrune=aPrune;
	nEmpty=vnEmpty;
	fStale=false;
	lBound=-kInfinity;
	uBound= kInfinity;
	bestMove.Set(-1);
	iFastestFirst=0;
}

void CCacheData::Print(bool blackMove) const {
	board.Print(blackMove);
	printf(fStale?"stale ":"nonstale ");
	OutData(cout);
}

/////////////////////////////////////////////////
// CCache class
/////////////////////////////////////////////////

CCache::CCache(u4 anbuckets) {
	fprintf(stderr, "Creating cache with %d buckets (%lu MB)\n",anbuckets, anbuckets*sizeof(CCacheData)>>20);
	nBuckets=anbuckets;
	mask=nBuckets-1;
	buckets=new CCacheData[nBuckets];
	assert(buckets);
	assert((nBuckets&(nBuckets-1))==0);

	Clear();
	ClearStats();
}

CCache::~CCache() {
	delete[] buckets;
}

void CCache::Clear() {
	CCacheData* i;

	for (i=buckets; i<buckets+nBuckets; i++)
	i->Clear();
	staleCount=0;
}

int CCache::CopyData(const CCache& cache2) {
	if (nBuckets!=cache2.nBuckets)
		return -2;
	else {
		memcpy(buckets, cache2.buckets, nBuckets*sizeof(CCacheData));
		return 0;
	}
}

void CCache::SetStale() {
	unsigned int i;

	//cout << "+++ ";
	for (i=0; i<nBuckets; i++)
		buckets[i].SetStale();
}

void CCache::PrintStats() const {
	printf(" cache: %6d queries, %6d read moves, %6d read values, %6d writes\n",
		queries, readMoves, readValues, writes);
}

void CCache::ClearStats() {
	queries=readMoves=readValues=writes=0;
}

// FindOld -- find an entry in the cache. If there is no entry return NULL.
//	If there is an entry set its stale flag to false and return it.
CCacheData* CCache::FindOld(const CBitBoard& board, u64 hash) {
	CCacheData* result, *result2;

	hash&=nBuckets-1;
	result=buckets+hash;
	result2=buckets+(hash^1);

	// is this position in cache?
	if (result->board==board) {
		result->SetStale(false);
	}
	else if (result2->board==board) {
		result=result2;
		result->SetStale(false);
	}
	else
		result=0;

	return result;
}

// FindNew -- find an entry in the cache. If there is no entry create one, with height and iPrune preset.
//	Return the cache entry.
CCacheData* CCache::FindNew(const CBitBoard& board, u64 hash, int height, int aPrune, int anEmpty) {
	CCacheData* result, *result2;

	hash&=nBuckets-1;
	result=buckets+hash;
	result2=buckets+(hash^1);

	// is this position in cache?
	if (result->board==board) {
		result->SetStale(false);
	}
	else if (result2->board==board) {
		result=result2;
		result->SetStale(false);
	}

	// This position isn't the one in the cache...
	else if (result->fStale || result->Replaceable(height, aPrune, anEmpty)) {
		result->Initialize(board, height, aPrune, anEmpty);
	}
	else if (result2->fStale || result2->Replaceable(height, aPrune, anEmpty)) {
		result=result2;
		result->Initialize(board, height, aPrune, anEmpty);
	}

	else
		result=0;

	UPDATE_CACHE_STATS;

	return result;
}
