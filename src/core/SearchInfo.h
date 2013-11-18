#pragma once

#include "../n64/types.h"

////////////////////////////////////////////////////
// SearchInfo - parameters describing how to search
////////////////////////////////////////////////////


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
	bool PrintRound() const { return (m_fPrintLevel&kPrintRound)!=0; };
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

