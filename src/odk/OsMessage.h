// Copyright 2001 Chris Welty
//  All Rights Reserved

#ifndef ODK_OSMESSAGE_H
#define ODK_OSMESSAGE_H

#include "types.h"

#include "GGSMessage.h"
#include "OsObjects.h"

class CMsgOs : public CMsg {
public:
    virtual void Handle()=0;

    virtual COsGame* PGame(const std::string& idg) const;
    virtual COsMatch* PMatch(const std::string& idm) const;
    virtual COsRequest* PRequest(const std::string& idr) const;
};

// /os: abort .7 n3 is asking
class CMsgOsAbortRequest: public CMsgOs {
public:
    virtual void Handle();
    void In(std::istream& is);

    std::string idg, sLogin;
};

// /os: .44 A 1720 n3: test from me
class CMsgOsComment : public CMsgOs {
public:
    CMsgOsComment(const std::string& idm);

    virtual void Handle();
    virtual void In(std::istream& is);

    std::string idg;
    char cTo;
    COsPlayerInfo pi;
    std::string sComment;
};

// /os: end .2.0 ( pamphlet vs. ant ) +46.00
class CMsgOsEnd : public CMsgOs {
public:
    virtual void Handle();
    virtual void In(std::istream& is);

    std::string idg;
    std::string sPlayers[2];
    COsResult result;
};

class CMsgOsErr: public CMsgOs {
public:
    virtual void Handle();
    void In(std::istream& is);

    enum { kErrUnknown=0x8300, kErrRequestDoesntFitFormula, kErrIllegalBoardType,
    		kErrBadRankMessage, kErrCorruptMove, kErrOpenTooLow, 
    		kErrRatedMismatch, kErrUnregistered, kErrIllegalMove,
    		kErrUserNotFound, kErrNotAcceptingMatches, kErrOneColorPreference,
    		kErrWatchNotFound } err;
};

class CMsgOsFatalTimeout: public CMsgOs {
public:
    virtual void Handle();
    void In(std::istream& is);

    std::string idg, sLogin;
};

class CMsgOsFinger: public CMsgOs {
public:
    virtual void Handle();
    void In(std::istream& is);

    std::string sLogin;
    std::map<std::string, std::string> keyToValue;
    std::vector<COsFingerRating> frs;
};

class CMsgOsHistory: public CMsgOs {
public:
    virtual void Handle();
    void In(std::istream& is);

    int n;
    std::string sLogin;
    std::vector<COsHistoryItem> his;
};

class CMsgOsJoin: public CMsgOs {
public:
    virtual void Handle();
    virtual void In(std::istream& is);

    std::string idg;
    COsGame game;
};

class CMsgOsLook: public CMsgOs {
public:
    virtual void Handle();
    virtual void In(std::istream& is);

    int nGames;
    std::vector<COsGame> games;
};

class CMsgOsMatch: public CMsgOs {
public:
    virtual void Handle();
    void In(std::istream& is);

    int n1, n2;
    std::vector<COsMatch> matches;
};

class CMsgOsMatchDelta: public CMsgOs {
public:
    CMsgOsMatchDelta(bool fPlus);

    virtual void Handle();
    void In(std::istream& is);

    bool fPlus;
    COsMatch match;
    // '- match' messages only
    COsResult result;
};

class CMsgOsRank: public CMsgOs {
public:
    virtual void Handle();
    void In(std::istream& is);

    COsRating rating;
    int n;	// what is this?
    std::vector<COsRankData> rds;
};

// /os: rating_update .21
// |pamphlet 1720.00 @ 350.00  +316.06 -> 2036.06 @ 254.20
// |ant      1697.62 @ 113.02   -43.23 -> 1654.39 @ 110.44

class CMsgOsRatingUpdate: public CMsgOs {
public:
    virtual void Handle();
    void In(std::istream& is);

    std::string idm;
    std::string sPlayers[2];
    COsRating rOlds[2], rNews[2];
    double dDeltas[2];
};

// /os: +  .19 1735.1 pamphlet 15:00//02:00        8 U 1345.6 ant
class CMsgOsRequestDelta: public CMsgOs {
public:
    CMsgOsRequestDelta(bool fPlus);

    virtual void Handle();
    void In(std::istream& is);

    bool fPlus;
    std::string idr;
    COsRequest request;

    bool IAmChallenged() const;
    bool IAmChallenging() const;
    bool RequireBoardSize(int n) const;
    bool RequireKomi(bool fKomi) const;
    bool RequireAnti(bool fAnti) const;
    bool RequireRand(bool fRand) const;
    bool RequireColor(const char* choices) const;
    bool RequireRandDiscs(int min, int max) const;
    bool RequireRated(char cRated) const;
    bool RequireSynch(bool fSynch) const;
    bool RequireEqualClocks() const;
    bool RequireMaxOpponentClock(const COsClock& ck) const;
    bool RequireMinMyClock(const COsClock& ck) const;
};

class CMsgOsStored: public CMsgOs {
public:
    virtual void Handle();
    void In(std::istream& is);

    int nStored;
    std::string sLogin;
    std::vector<COsStoredMatch> sms;
};

class CMsgOsTimeout: public CMsgOs {
public:
    virtual void Handle();
    void In(std::istream& is);

    std::string idg, sLogin;
};

class CMsgOsTop: public CMsgOs {
public:
    virtual void Handle();
    void In(std::istream& is);

    COsRating rating;
    int n;	// what is this?
    std::vector<COsRankData> rds;
};

// /os: trust-violation .56 pamphlet (*) delta= 4 + 0.7 secs
class CMsgOsTrustViolation : public CMsgOs {
public:
    virtual void Handle();
    void In(std::istream& is);

    std::string idg, sLogin;
    char cColor;
    double delta1, delta2;
};

// /os: undo .7 n3 is asking
class CMsgOsUndoRequest: public CMsgOs {
public:
    virtual void Handle();
    void In(std::istream& is);

    std::string idg, sLogin;
};

class CMsgOsUnknown: public CMsgOs {
public:
    CMsgOsUnknown(const std::string& sMsgType);

    virtual void Handle();
    void In(std::istream& is);

    std::string sMsgType;
    std::string sText;
};

class CMsgOsUpdate: public CMsgOs {
public:
    virtual void Handle();
    void In(std::istream& is);

    std::string idg;
    COsMoveListItem mli;
};

// /os: watch 1 : .41(1)
class CMsgOsWatch: public CMsgOs {
public:
    virtual void Handle();
    void In(std::istream& is);

    int nMatches;
    std::map<std::string, int> idToNWatchers;
};

// /os:  + n3 watch .44
class CMsgOsWatchDelta: public CMsgOs {
public:
    CMsgOsWatchDelta(bool fPlus, const std::string& sLogin);

    virtual void Handle();
    void In(std::istream& is);

    bool fPlus;
    std::string sLogin, idm;
};

/*
/os: who    26      change:    win    draw    loss         match(es)
|tit4tat  + 1145.7@301.5 ->   +14.3   -12.1   -38.4 @ 79.6 
|n2       + 1384.1@ 80.5 
|ant      + 1426.2@ 50.8 ->   +39.2    +4.2   -30.8 @ 78.5 
etc.
*/

class CMsgOsWho: public CMsgOs {
public:
    virtual void Handle();
    void In(std::istream& is);

    int n;
    std::vector<COsWhoItem> wis;
};

#endif //ODK_OSMESSAGE_H