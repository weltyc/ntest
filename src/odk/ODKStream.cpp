// Copyright 2001 Chris Welty
//  All Rights Reserved

#include "types.h"

#include "ODKStream.h"
#include "GGSMessage.h"
#include "OsMessage.h"
#include "GetMove.h"

#include <iostream>
using namespace std;

void CODKStream::HandleGGS(const CMsg* pmsg) {
    cout << pmsg->sRawText << "\n";
}

void CODKStream::HandleGGSLogin() {
    BaseGGSLogin();
    (*this) << "mso\n";
    flush();
}

void CODKStream::HandleGGSTell(const CMsgGGSTell* pmsg) {
    cout << pmsg->sFrom << " " << pmsg->sText << "\n";
    if (pmsg->sFrom=="n2") {
    	if (pmsg->sText=="quit")
    		Logout();
    	else {
    		(*this) << pmsg->sText << "\n";
    		flush();
    	}
    }
}

void CODKStream::HandleGGSUnknown(const CMsgGGSUnknown* pmsg) {
    cout << "Unknown GGS message: \n";
    HandleGGS(pmsg);
}

void CODKStream::HandleOsJoin(const CMsgOsJoin* pmsg) {
    ggsstream::BaseOsJoin(pmsg);
    MakeMoveIfNeeded(pmsg->idg);
}

void CODKStream::HandleOsLogin() {
    BaseOsLogin();
    (*this) << "ts trust +\n"
    		<< "tell /os open 1\n";
    flush();
}

/*

  // Example handler from ntest:
void CODKStream::HandleOsMatchDelta(const CMsgOsMatchDelta* pmsg) {
    if (pmsg->fPlus) {
    	pComputer->StartMatch(pmsg->match);
    }
    else {
    	string idg;
    	COsGame* pgame;

    	// add games to book
    	idg=pmsg->match.idm;
    	pgame=PGame(idg);
    	if (pgame)
    		pComputer->EndGame(*pgame);

    	idg=pmsg->match.idm+".0";
    	pgame=PGame(idg);
    	if (pgame)
    		pComputer->EndGame(*pgame);

    	idg=pmsg->match.idm+".1";
    	pgame=PGame(idg);
    	if (pgame)
    		pComputer->EndGame(*pgame);
    }
    BaseOsMatchDelta(pmsg);
}
*/

/*
  // Example handler from ntest:
void CODKStream::HandleOsRequestDelta(const CMsgOsRequestDelta* pmsg) {
    BaseOsRequestDelta(pmsg);

    if (pmsg->fPlus && pmsg->IAmChallenged()) {
    	if (pmsg->RequireBoardSize(8) && pmsg->RequireKomi(false) && pmsg->RequireAnti(false) &&
    		pmsg->RequireRated(true) && 
    		pmsg->RequireMaxOpponentClock(COsClock(15*60,0,2*60)) &&
    		pmsg->RequireMinMyClock(COsClock(60,0,0)))
    		(*this) << "t /os accept " << pmsg->idr << "\n";
    	else
    		(*this) << "t /os decline " << pmsg->idr << "\n";

    	flush();
    }
}
*/

void CODKStream::HandleOsUnknown(const CMsgOsUnknown* pmsg) {
    cout << "Unknown /os message: ";
    HandleOs(pmsg);
}

void CODKStream::HandleOsUpdate(const CMsgOsUpdate* pmsg) {
    BaseOsUpdate(pmsg);
    MakeMoveIfNeeded(pmsg->idg);
}

// helper function for join and update messages
void CODKStream::MakeMoveIfNeeded(const string& idg) {
    COsGame* pgame=PGame(idg);
    if (pgame!=NULL) {
    	bool fMyMove=pgame->ToMove(GetLogin());
    	COsMoveListItem mli;

    	if (fMyMove) {
    		GetMove(*pgame, mli);
    		(*this) << "tell /os play " << idg << " " << mli << "\n";
    		flush();
    	}
    }
    else
    	assert(0);
}