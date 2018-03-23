// Copyright 2001 Chris Welty
//  All Rights Reserved

#ifndef ODK_GGSMESSAGE_H
#define ODK_GGSMESSAGE_H

#include "types.h"

#include <map>
#include "GGSObjects.h"

// base message class

class ggsstream;

class CMsg {
public:
    // handle the message
    virtual void Handle()=0;
    virtual void In(std::istream& is);

    virtual ~CMsg() {};

    ggsstream* pgs;
    std::string sFrom;
    std::string sRawText;
};

class CMsgGGSAlias: public CMsg {
public:
    virtual void Handle();
    void In(std::istream& is);

    int nAlias1, nAlias2;
    std::vector<CGGSAlias> valiases;
};

class CMsgGGSErr: public CMsg {
public:
    virtual void Handle();
    void In(std::istream& is);

    enum { kErrUnknown=0x8400, kErrCommandNotRecognized } err;
};

class CMsgGGSFinger: public CMsg {
public:
    virtual void Handle();
    void In(std::istream& is);

    std::map<std::string, std::string> keyToValue;
};

class CMsgGGSHelp: public CMsg {
public:
    virtual void Handle();
    void In(std::istream& is);

    std::string sText;
};

class CMsgGGSUnknown: public CMsg {
public:
    virtual void Handle();
    void In(std::istream& is);

    std::string sMsgType;
    std::string sText;
};

class CMsgGGSUserDelta: public CMsg {
public:
    CMsgGGSUserDelta(bool fPlus);

    virtual void Handle();
    void In(std::istream& is);

    bool fPlus;
    std::string sLogin;
};

class CMsgGGSTell : public CMsg {
public:
    virtual void Handle();
    void In(std::istream& is);

    std::string sText;
};

class CMsgGGSWho : public CMsg {
public:
    virtual void Handle();
    void In(std::istream& is);

    int nUsers;
    std::vector<CGGSWhoUser> wus;
};

// Fake messages

class CMsgGGSDisconnect : public CMsg {
public:
    virtual void Handle();
};

class CMsgGGSLogin : public CMsg {
public:
    virtual void Handle();
};

#endif // ODK_GGSMESSAGE_H
