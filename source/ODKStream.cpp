// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

#include "ODKStream.h"
#include "Pos2.h"
#include "GGSMessage.h"

#include "Player.h"

#include <iostream>
using namespace std;

void CODKStream::Handle(const CMsg& msg) {
	cout << msg.sRawText << "\n";
}

void CODKStream::HandleLogin() {
	(*this) << "mso\n";
	flush();
}

void CODKStream::HandleTell(const CMsgGGSTell& msg) {
	cout << msg.sFrom << " " << msg.sText << "\n";
	if (msg.sFrom=="n2" || msg.sFrom=="adsfadsf" || msg.sFrom=="unic") {
		if (msg.sText=="quit")
			Logout();
		else if (msg.sText==":reload openings")
			InitForcedOpenings();
		else {
			(*this) << msg.sText << "\n";
			flush();
		}
	}
}

void CODKStream::HandleUnknown(const CMsgGGSUnknown& msg) {
	cout << "Unknown GGS message: \n";
	Handle(msg);
}

void CODKStream::HandleRequestDelta(const CMsgOsRequestDelta& msg) {
	bool fGeneric = msg.request.pis[1].sName.empty();

	if (msg.fPlus && (fGeneric || msg.IAmChallenged())) {
		if (msg.request.cRated=='S' ||
			(msg.RequireBoardSize(8) &&
			msg.RequireColor("s?") &&
			msg.RequireAnti(false) &&
			msg.RequireMaxOpponentClock(COsClock(60*60,0,2*60)) &&
			msg.RequireMinMyClock(COsClock(60,0,0)) &&
			msg.RequireRandDiscs(4,24)))
			(*this) << "t /os accept " << msg.idr << "\n";
		else
			(*this) << "t /os decline " << msg.idr << "\n";

		flush();
	}
}

void CODKStream::HandleUnknown(const CMsgOsUnknown& msg) {
	cout << "Unknown /os message: ";
	Handle(msg);
}

void CODKStream::HandleUpdate(const CMsgOsUpdate& msg) {
	MakeMoveIfNeeded(msg.idg);
}
