// Copyright 2001 Chris Welty
//  All Rights Reserved

#include "types.h"

#include "GGSMessage.h"
#include <strstream>
#include <iomanip>
#include "ggsstream.h"

using namespace std;

///////////////////////////////////
// CMsg
///////////////////////////////////

void CMsg::In(istream& is) {
    assert(0);
}

///////////////////////////////////
// CMsgGGSAlias
///////////////////////////////////

void CMsgGGSAlias::In(istream& is) {
    char c;
    CGGSAlias alias;

    is >> nAlias1 >> c >> nAlias2;
    assert(c=='/');
    while (is >> alias)
    	valiases.push_back(alias);

    assert(nAlias2==valiases.size());
}

void CMsgGGSAlias::Handle() {
    pgs->HandleGGSAlias(this);
}

///////////////////////////////////
// CMsgGGSDisconnect
///////////////////////////////////

void CMsgGGSDisconnect::Handle() {
    pgs->HandleGGSDisconnect();
}

///////////////////////////////////
// CMsgGGSErr
///////////////////////////////////

void CMsgGGSErr::In(istream& is) {
    string sLine;
    getline(is, sLine);
    if (sLine.find("not recognized")!=sLine.npos)
    	err=kErrCommandNotRecognized;
    else
    	err=kErrUnknown;
}

void CMsgGGSErr::Handle() {
    pgs->HandleGGSErr(this);
}

///////////////////////////////////
// CMsgGGSFinger
///////////////////////////////////

void CMsgGGSFinger::In(istream& is) {
    string sLine, sKey, sValue;

    is >> ws;

    // first section, key : value
    while (getline(is, sLine)) {
    	if (!is)
    		break;
    	if (sLine.find(':')==string::npos)
    		break;

    	istrstream isLine(sLine.c_str());

    	// get key and strip terminal spaces
    	getline(isLine, sKey, ':');
    	sKey.resize(1+sKey.find_last_not_of(' '));

    	// get value. No value means this is the separator row
    	//	between the first section and the second section
    	isLine >> ws;
    	getline(isLine, sValue);

    	// insert (key, value) pair
    	map<string,string>::iterator i=keyToValue.find(sKey);
    	if (i==keyToValue.end())
    		keyToValue[sKey]=sValue;
    	else {
    		(*i).second+="\n";
    		(*i).second+=sValue;
    	}
    }

}

void CMsgGGSFinger::Handle() {
    pgs->HandleGGSFinger(this);
}

///////////////////////////////////
// CMsgGGSHelp
///////////////////////////////////

void CMsgGGSHelp::In(istream& is) {
    getline(is, sText, (char)EOF);
}

void CMsgGGSHelp::Handle() {
    pgs->HandleGGSHelp(this);
}

///////////////////////////////////
// CMsgGGSLogin
///////////////////////////////////

void CMsgGGSLogin::Handle() {
    pgs->HandleGGSLogin();
}

///////////////////////////////////
// CMsgGGSTell
///////////////////////////////////

void CMsgGGSTell::In(istream& is) {
    getline(is, sText, (char)EOF);
}

void CMsgGGSTell::Handle() {
    pgs->HandleGGSTell(this);
}

///////////////////////////////////
// CMsgGGSUnknown
///////////////////////////////////

void CMsgGGSUnknown::In(istream& is) {
    getline(is, sText, (char)EOF);
}

void CMsgGGSUnknown::Handle() {
    pgs->HandleGGSUnknown(this);
}

///////////////////////////////////
// CMsgGGSUserDelta
///////////////////////////////////

CMsgGGSUserDelta::CMsgGGSUserDelta(bool afPlus) {
    fPlus=afPlus;
}

void CMsgGGSUserDelta::In(istream& is) {
    is >> sLogin;
}

void CMsgGGSUserDelta::Handle() {
    pgs->HandleGGSUserDelta(this);
}

///////////////////////////////////
// CMsgGGSWho
///////////////////////////////////

void CMsgGGSWho::In(istream& is) {
    CGGSWhoUser wu;

    is >> nUsers;
    is.ignore(1000, '\n');
    while (is >> wu) {
    	wus.push_back(wu);
    }
    assert(wus.size()==nUsers);
}

void CMsgGGSWho::Handle() {
    pgs->HandleGGSWho(this);
}

