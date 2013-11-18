#include "core/QPosition.h"
#include "core/SearchInfo.h"
#include "core/MVK.h"

#include "game/Player.h"

class CEvaluator;
class CSmartBook;
class CCache;
class CMPCStats;
class CCalcParams;

//! Default information for CPlayerComputer construction
class CComputerDefaults {
public:
	CComputerDefaults();

	char cEval, cCoeffSet;
	std::string sCalcParams;

	CValue vContempts[2];
	
	int iPruneMidgame, iPruneEndgame, nRandShifts[2];
	u4 iEdmund;
	u4 fsPrint, fsPrintOpponent;
	enum {kNoBook, kBook, kNegamaxBook} booklevel;

	int MinutesOrDepth() const;

	std::istream& In(std::istream& is);

	static CValue FloatToContempt(double fContempt);
};

inline std::istream& operator>>(std::istream& is, CComputerDefaults& cd) {
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
	virtual bool IsHuman() const;

protected:
	void SetParameters(const CQPosition& pos, bool fUseBook, int iCache);
	void SetParameters(bool fUseBook, int iCache);
	void SetupBook(bool fCNABook);
	static int DefaultRandomness();
	CCache* GetCache(int iCache);
	CQPosition posCached[2];
};
