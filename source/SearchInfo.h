#pragma once

#include "Utils.h"

////////////////////////////////////////////////////
// HeightInfo - used in books and iterative value
////////////////////////////////////////////////////

class CSearchInfo;

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


//! Parameters affecting the search
class CSearchInfo {
public:
	CSearchInfo(int iPruneMidgame, int iPruneEndgame, int rs, int vContempt, u4 fNeeds, double tRemaining, int iCache, u4 fPrintLevel);

	//! \name Print() functions
	//! These tell what to print out during the search
	//! \{

	//! Flags for PrintXxx() functions
	enum TPrint { kPrintBookLevel=3, kPrintBookRandomInfo=4, kPrintMove=8,
		kPrintMoveSearchStats=0x10, kPrintGameAnalysis=0x20, kPrintRound=0x40, kPrintAnalysis=0x80,
		kPrintPondering=0x100 };	//!< flags for m_fPrintLevel

	//! Tell the search what things to print.
	//!
	//! \param fPrintLevel combination of the enum TPrint flags
	void SetPrintLevel(u4 fPrintLevel) { m_fPrintLevel=fPrintLevel; };
	u4 GetPrintLevel() const { return  m_fPrintLevel; };

	u4 PrintBookLevel() const { return m_fPrintLevel&kPrintBookLevel; };
	u4 PrintBookRandomInfo() const { return m_fPrintLevel&kPrintBookRandomInfo; };
	u4 PrintMove() const  { return m_fPrintLevel&kPrintMove; };
	u4 PrintMoveSearchStats() const { return m_fPrintLevel&kPrintMoveSearchStats; };
	u4 PrintRound() const { return m_fPrintLevel&kPrintRound; };
	u4 PrintAnalysis() const { return m_fPrintLevel&kPrintAnalysis; };
	//! If this function is nonzero the search prints status as though it is pondering
	u4 PrintPondering() const { return m_fPrintLevel&kPrintPondering; };
	//! \}

	//! \name Need() functions
	//! These tell what kind of search to do
	//! \{

	//! Flags for NeedXxx() functions
	enum TNeed {
		kNeedValue=1, kNeedMove=2, kNeedMPCStats=4, kNeedDeviations=8,
		kNeedRandSearch=0x10, kNeedNoAddSoloUnsolvedToBook=0x20 };

	//! Always calculate a value, even for a forced move
	u4 NeedValue() const { return m_fNeeds & kNeedValue; };	
	//! Always calculate the best move, even if we get the value from book or hash
	u4 NeedMove() const { return m_fNeeds & kNeedMove; };
	//! Do special search for MPC stat calculation (and print out MPC stats)
	u4 NeedMPCStats() const { return m_fNeeds&kNeedMPCStats; };
	//! Calculate best 2 moves, unless calculating a solved value
	u4 NeedDeviations() const { return m_fNeeds & kNeedDeviations; };
	//! Optimize search for rand games (wider midgame search)
	u4 NeedRandSearch() const { return m_fNeeds & kNeedRandSearch; };
	//! Do not add unsolved positions to book unless multiple best moves were calculated at full height
	u4 NeedNoAddSoloUnsolvedToBook() const { return m_fNeeds & kNeedNoAddSoloUnsolvedToBook; };
	//!\}


	int iPruneMidgame, iPruneEndgame;
	int rs;					//!< Amount of randomness; # of discs randomness = 1<<rs
	int vContempt;
	double tRemaining;
	int iCache;
private:
	u4 m_fNeeds;		//!< flags that determine how to search
	u4 m_fPrintLevel;	//!< print flags for book and search

};

inline CSearchInfo::CSearchInfo(int aiPruneMidgame, int aiPruneEndgame, int ars, int avContempt,
								u4 fNeeds, double atRemaining, int aiCache, u4 fPrintLevel) : m_fPrintLevel(fPrintLevel) {
	iPruneMidgame=aiPruneMidgame;
	iPruneEndgame=aiPruneEndgame;
	rs=ars;
	vContempt=avContempt;
	m_fNeeds=fNeeds;
	tRemaining=atRemaining;
	iCache=aiCache;
}

