// Copyright 2001 Chris Welty
//  All Rights Reserved

#ifndef ODK_GGSOBJECTS_H
#define ODK_GGSOBJECTS_H

#include <iostream>
#include <string>
#include <vector>

#include "types.h"

class CGGSAlias {
public:
    std::string sAlias, sExpansion;

    void In(std::istream& is);

    bool operator<(const CGGSAlias& b) const { return this<&b ; }
    bool operator==(const CGGSAlias& b) const { return this==&b; }
};

inline std::istream& operator>>(std::istream& is, CGGSAlias& alias) {alias.In(is); return is; }

class CGGSWhoUser {
public:
    std::string sLogin;
    char cRegistered;
    std::string sIdle, sOnline, sIPAddr, sHostName;

    void In(std::istream& is);

    bool operator<(const CGGSWhoUser& b) const;
    bool operator==(const CGGSWhoUser& b) const { return sLogin==b.sLogin; }
private:
    int RegisteredSortOrder() const;
};

inline std::istream& operator>>(std::istream& is, CGGSWhoUser& wu) { wu.In(is); return is; }

#endif    //ODK_GGSOBJECTS_H
