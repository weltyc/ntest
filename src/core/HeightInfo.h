#include <iostream>
#include "../n64/types.h"
#include "SearchInfo.h"

#ifndef _H_HEIGHT_INFO
#define _H_HEIGHT_INFO

//! Contains the depth of a search.
class CHeightInfo {
public:
	int height;		//!< height. If height==nEmpty-hSolverStart, this is a probable solve.
	int iPrune;		//!< pruning level
	bool fWLD;		//!< true if the search is with bounds (-1, 1); iPrune could be 0-5.

	CHeightInfo();
	CHeightInfo(int aHeight, int aiPrune, bool afWLD);
	CHeightInfo(int aHeight, int aiPrune, bool afWLD, int nEmpty);

	void Clear();
	bool NextRound(int nEmpty, const CSearchInfo& si);

	bool operator<(const CHeightInfo& b) const;
	bool operator<=(const CHeightInfo& b) const;
	bool operator>(const CHeightInfo& b) const;
	bool operator>=(const CHeightInfo& b) const;
	bool operator!=(const CHeightInfo& b) const;
	bool operator==(const CHeightInfo& b) const;

	bool WldProven(int nEmpty) const;
	bool ExactProven(int nEmpty) const;

	bool Valid() const { return iPrune==4 || fKnownSolve; };

	void SetNEmpty(int nEmpty);

	CHeightInfo operator-(int n) const;
	CHeightInfo operator+(int n) const;

	void Out(std::ostream& os) const;
	bool IsKnownProbableSolve() const { return fKnownSolve; }

protected:
	bool fKnownSolve;	//!< true if we know this is a probable solve, i.e. height+hSolverStart==nEmpty
	i4 Order() const;

	friend class CBookDataCompressed;
};

//! CHeightInfo where we're guaranteed to know whether this is a probable solve
class CHeightInfoX: public CHeightInfo {
public:
	//! Constructor enforces the fact that we know nEmpty and thus fKnownSolve.
	CHeightInfoX(int aHeight, int aiPrune, bool afWLD, int nEmpty) : CHeightInfo(aHeight, aiPrune, afWLD, nEmpty) {};
	CHeightInfoX(const CHeightInfo& hi, int nEmpty) : CHeightInfo(hi.height, hi.iPrune, hi.fWLD, nEmpty) {};

	//! Overrides, since HiX knows more than Hi does
	bool WldProven() const;
	bool ExactProven() const;
};

std::ostream& operator<<(std::ostream& os, const CHeightInfo& hi);

#endif // _H_HEIGHT_INFO