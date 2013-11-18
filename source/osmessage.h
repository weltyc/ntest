// Copyright 2001 Chris Welty
//	All Rights Reserved

#ifndef ODK_OSMESSAGE_H
#define ODK_OSMESSAGE_H

#include "types.h"

#include "GGSMessage.h"
#include "OsObjects.h"

class CMsgOs : public CMsg {
public:
	virtual void Handle()=0;

	virtual COsGame* PGame(const string& idg) const;
	virtual COsMatch* PMatch(const string& idm) const;
	virtual COsRequest* PRequest(const string& idr) const;
};

// /os: abort .7 n3 is asking
class CMsgOsAbortRequest: public CMsgOs {
public:
	virtual void Handle();
	void In(istream& is);

	string idg, sLogin;
};

// /os: .44 A 1720 n3: test from me
class CMsgOsComment : public CMsgOs {
public:
	CMsgOsComment(const string& idm);

	virtual void Handle();
	virtual void In(istream& is);

	string idg;
	char cTo;
	COsPlayerInfo pi;
	string sComment;
};

// /os: end .2.0 ( pamphlet vs. ant ) +46.00
class CMsgOsEnd : public CMsgOs {
public:
	virtual void Handle();
	virtual void In(istream& is);

	string idg;
	string sPlayers[2];
	COsResult result;
};

class CMsgOsErr: public CMsgOs {
public:
	virtual void Handle();
	void In(istream& is);

	enum { kErrUnknown=0x8300, kErrRequestDoesntFitFormula, kErrIllegalBoardType,
			kErrBadRankMessage, kErrCorruptMove, kErrOpenTooLow, 
			kErrRatedMismatch, kErrUnregistered, kErrIllegalMove,
			kErrUserNotFound, kErrNotAcceptingMatches, kErrOneColorPreference,
			kErrWatchNotFound } err;
};

class CMsgOsFatalTimeout: public CMsgOs {
public:
	virtual void Handle();
	void In(istream& is);

	string idg, sLogin;
};

class CMsgOsJoin: public CMsgOs {
public:
	virtual void Handle();
	virtual void In(istream& is);

	string idg;
	COsGame game;
};

class CMsgOsLook: public CMsgOs {
public:
	virtual void Handle();
	virtual void In(istream& is);

	int nGames;
	vector<COsGame> games;
};

class CMsgOsMatch: public CMsgOs {
public:
	virtual void Handle();
	void In(istream& is);

	int n1, n2;
	vector<COsMatch> matches;
};

class CMsgOsMatchDelta: public CMsgOs {
public:
	CMsgOsMatchDelta(bool fPlus);

	virtual void Handle();
	void In(istream& is);

	bool fPlus;
	COsMatch match;
	// '- match' messages only
	COsResult result;
};

// /os: +  .19 1735.1 pamphlet 15:00//02:00        8 U 1345.6 ant
class CMsgOsRequestDelta: public CMsgOs {
public:
	CMsgOsRequestDelta(bool fPlus);

	virtual void Handle();
	void In(istream& is);

	bool fPlus;
	string idr;
	COsRequest request;

	bool IAmChallenged() const;
	bool IAmChallenging() const;
	bool RequireBoardSize(int n) const;
	bool RequireKomi(bool fKomi) const;
	bool RequireAnti(bool fAnti) const;
	bool RequireRand(bool fRand) const;
	bool RequireRated(bool fRated) const;
	bool RequireSynch(bool fSynch) const;
	bool RequireEqualClocks() const;
	bool RequireMaxOpponentClock(const COsClock& ck) const;
	bool RequireMinMyClock(const COsClock& ck) const;
};

class CMsgOsTimeout: public CMsgOs {
public:
	virtual void Handle();
	void In(istream& is);

	string idg, sLogin;
};

// /os: trust-violation .56 pamphlet (*) delta= 4 + 0.7 secs
class CMsgOsTrustViolation : public CMsgOs {
public:
	virtual void Handle();
	void In(istream& is);

	string idg, sLogin;
	char cColor;
	double delta1, delta2;
};

// /os: undo .7 n3 is asking
class CMsgOsUndoRequest: public CMsgOs {
public:
	virtual void Handle();
	void In(istream& is);

	string idg, sLogin;
};

class CMsgOsUnknown: public CMsgOs {
public:
	CMsgOsUnknown(const string& sMsgType);

	virtual void Handle();
	void In(istream& is);

	string sMsgType;
	string sText;
};

class CMsgOsUpdate: public CMsgOs {
public:
	virtual void Handle();
	void In(istream& is);

	string idg;
	COsMoveListItem mli;
};

// /os: watch 1 : .41(1)
class CMsgOsWatch: public CMsgOs {
public:
	virtual void Handle();
	void In(istream& is);

	int nMatches;
	map<string, int> idToNWatchers;
};

// /os:  + n3 watch .44
class CMsgOsWatchDelta: public CMsgOs {
public:
	CMsgOsWatchDelta(bool fPlus, const string& sLogin);

	virtual void Handle();
	void In(istream& is);

	bool fPlus;
	string sLogin, idm;
};

#endif //ODK_OSMESSAGE_H