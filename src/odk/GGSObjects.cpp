// Copyright 2001 Chris Welty
//  All Rights Reserved

#include "types.h"

#include "GGSObjects.h"
#include <strstream>
using namespace std;

void CGGSAlias::In(istream& is) {
    is >> sAlias >> ws;
    getline(is, sExpansion);
}

void CGGSWhoUser::In(istream& is) {
    string sLine;
    getline(is, sLine);
    istrstream isl(sLine.c_str(), sLine.size());
    isl >> sLogin >> cRegistered >> sIdle >> sOnline >> sIPAddr >> sHostName;
}

int CGGSWhoUser::RegisteredSortOrder() const {
    switch(cRegistered) {
    case 'h':
    	return 0;
    case 'p':
    	return 2;
    case '.':
    	return 3;
    default:
    	return 1;
    }
}

// funky ordering is used by Lion
bool CGGSWhoUser::operator<(const CGGSWhoUser& b) const {
    if (RegisteredSortOrder()!=b.RegisteredSortOrder())
    	return RegisteredSortOrder()<b.RegisteredSortOrder();
    else
    	return sLogin<b.sLogin;
}
