// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

// CPlayer classes

#pragma once

#include "options.h"
#include "Moves.h"
#include "QPosition.h"
#include "Timing.h"
#include "SmartBook.h"
#include "OsObjects.h"
#include <string>

class CCache;
class CEvaluator;
class CMPCStats;

class CSavedGame;
#include "OsObjects.h"

class CSearchInfo;

//! Player who can play a game of othello
class CPlayer {
public:

	enum TCheatcode {kCheatNone, kCheatUndo, kCheatAutoplay, kCheatContinue, kCheatSwitch};

	// game playing
	virtual void StartMatch(const COsMatch& match);
	virtual TCheatcode  Update(COsGame& game, int flags, COsMoveListItem& mli);
	virtual TCheatcode  GetMove(COsGame& game, int flags, COsMoveListItem& mli)=0;
	virtual void EndGame(const COsGame& game);

	// display info
	void SetName(const char* newName);
	void SetName(const char* newName, int number);
	std::string Name() const;

	// Information about the player
	virtual bool NeedsBoardDisplayed() const;
	virtual bool IsHuman() const = 0;
	virtual TMoveSignal MoveSignal() const = 0;

	enum {
		kMyMove=1, kNoPrint=2, kAllowCheats=4, kGame2=8,
		kAnalyze=0x10, kNoAddSoloUnsolvedToBook=0x20,
	};

protected:
	std::string m_sName;
	std::string m_fnSaveGame;
};

//! Human player of an othello game
class CPlayerHuman : public CPlayer {
public:
	CPlayerHuman();

	// game playing
	virtual TCheatcode GetMove(COsGame& game, int flags, COsMoveListItem& mli);


	// information about the player
	virtual bool NeedsBoardDisplayed() const;
	virtual bool IsHuman() const;
	virtual TMoveSignal MoveSignal() const; // how this player will signal its opponent it wants to move during a toot

protected:
	// cheat codes. These read stdin for parameters and call the respective COsGame function
	bool Load(COsGame& game);
	bool Save(const COsGame& game);
};

//! Default information for CPlayerComputer construction
class CComputerDefaults {
public:
	CComputerDefaults();

	char cEval, cCoeffSet;
	string sCalcParams;

	CValue vContempts[2];
	
	int iPruneMidgame, iPruneEndgame, nRandShifts[2];
	u4 iEdmund;
	u4 fsPrint, fsPrintOpponent;
	enum {kNoBook, kBook, kNegamaxBook} booklevel;

	int MinutesOrDepth() const;

	istream& In(istream& is);

	static CValue FloatToContempt(double fContempt);
};

inline istream& operator>>(istream& is, CComputerDefaults& cd) {
	return cd.In(is);
}

//! Computerized player of an othello game
class CPlayerComputer : public CPlayer {
public:
	CSmartBook* book;
	CEvaluator* eval;
	CCache *caches[2];
	bool fHasCachedPos[2];
	CCalcParams *pcp;
	CMPCStats *mpcs;
	CComputerDefaults cd;
	bool toot;
	bool solved, hasBacktracked, fAverageTime, fInBook;
	bool fAnalyzingDeferred;
	CValue solvedValue;

	//CPlayerComputer(char anEval, char aCoeffSet, CCalcParams* pcp, int iPrune, bool fBook=true, bool fCNABook=true);
	CPlayerComputer(const CComputerDefaults& acd);
	~CPlayerComputer();

	// game playing
	virtual void StartMatch(const COsMatch& match);
	virtual TCheatcode GetMoveAndTime(COsGame& game, int flags, COsMoveListItem& mli);
	virtual TCheatcode GetMove(COsGame& game, int flags, COsMoveListItem& mli);
	virtual void EndGame(const COsGame& game);


	// Routine to get a move
	void Clear();
	CSearchInfo DefaultSearchInfo(bool fBlackMove, u4 fNeeds, double tRemaining, int iCache) const;
	void GetChosen(const CSearchInfo& si, const CQPosition& pos, CMVK& chosen, bool fUseBook);
	void Hint(const CQPosition& pos, int nBest);

	// Post-game analysis
	bool AnalyzeGame(const COsGame& game);
	void Backtrack(const COsGame& game);
	void PrintAnalysis(const COsGame& game);
	void NegamaxAndCorrectBook();

	// misc
	static u4 LogCacheSize(CCalcParams* pcp, int iPrune);
	int AdjustedHeight(const CQPosition& pos) const;
	void SetContempt(bool fDrawsToBlack);

	// information about the player
	virtual TMoveSignal MoveSignal() const;
	virtual bool IsHuman() const;

	// testing
	void VerifyCache(int iCache);

protected:
	void SetParameters(const CQPosition& pos, bool fUseBook, int iCache);
	void SetParameters(bool fUseBook, int iCache);
	void SetupBook(bool fCNABook);
	static int DefaultRandomness();
	CCache* GetCache(int iCache);
	CQPosition posCached[2];
};
