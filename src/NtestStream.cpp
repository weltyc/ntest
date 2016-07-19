// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.

#include <cassert>
#include <iostream>
#include "odk/GGSMessage.h"
#include "core/CalcParams.h"

#include "PlayerComputer.h"
#include "NtestStream.h"

using namespace std;

void CNtestStream::HandleGGS(const CMsg* msg) {
	cout << msg->sRawText << "\n";
}

void CNtestStream::HandleGGSLogin() {
	ggsstream::HandleGGSLogin();
	(*this) << "mso\n";
	flush();
}

void CNtestStream::HandleGGSTell(const CMsgGGSTell& msg) {
	cout << msg.sFrom << " " << msg.sText << "\n";

	// determine whether the message is from a superuser
	bool fFromSuperuser=msg.sFrom==sSuperuser;
	if (sSuperuser.empty())
		fFromSuperuser= msg.sFrom=="n2" || msg.sFrom=="adsfadsf" || msg.sFrom=="dan";

	// execute commands from superuser
	if (fFromSuperuser) {
		if (msg.sText=="quit")
			Logout();
		else {
			(*this) << msg.sText << "\n";
			flush();
		}
	}
}

void CNtestStream::HandleGGSUnknown(const CMsgGGSUnknown& msg) {
	cout << "Unknown GGS message: \n";
	HandleGGS(&msg);
}

////////////////////////////
// CNtestStream
////////////////////////////

CNtestStream::CNtestStream() {
}

void CNtestStream::SetComputer(CPlayerComputer& computer) {
	m_pComputer=&computer;
	int open;
	int strength = m_pComputer->pcp->Strength();

	if (strength>12)
		open=1;
	else if (strength>8)
		open=2;
	else if (strength>6)
		open=4;
	else if (strength>4)
		open=8;
	else
		open=16;

	(*this) << "ts trust +\n"
			<< "tell /os open " << open << "\n";
	flush();

}

void CNtestStream::HandleOsGameOver(const CMsgOsMatchDelta& msg,const string& idg) {
	if (msg.match.IsPlaying(GetLogin()))
		PComputer()->EndGame(idToGame[idg]);
	BaseOsGameOver(&msg, idg);
}

void CNtestStream::HandleOsJoin(const CMsgOsJoin& msg) {
	BaseOsJoin(&msg);
	MakeMoveIfNeeded(msg.idg);
}

void CNtestStream::HandleOsMatchDelta(const CMsgOsMatchDelta& msg) {
	if (msg.match.IsPlaying(GetLogin()) && msg.fPlus)
		PComputer()->StartMatch(msg.match);
	BaseOsMatchDelta(&msg);
}

void CNtestStream::HandleOsRequestDelta(const CMsgOsRequestDelta& msg) {
	BaseOsRequestDelta(&msg);
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

void CNtestStream::HandleOsUnknown(const CMsgOsUnknown& msg) {
	cout << "Unknown /os message: ";
	HandleGGS(&msg);
}

void CNtestStream::HandleOsUpdate(const CMsgOsUpdate& msg) {
	BaseOsUpdate(&msg);
	MakeMoveIfNeeded(msg.idg);
}

// helper function for join and update messages
void CNtestStream::MakeMoveIfNeeded(const string& idg) {
	COsGame* pgame=dynamic_cast<COsGame*>(PGame(idg));
	
	// the computer player needs to know if this is game 1 of a synch match
	//	so it can use the appropriate hashtable
	bool fSynchGame1=false;
	size_t loc = idg.find('.',1);
	if (loc!=idg.npos && loc+1 < idg.size())
		fSynchGame1= idg[loc+1]=='1';

	assert(pgame);
	if (pgame!=NULL) {
		bool fMyMove=pgame->ToMove(GetLogin());
		COsMoveListItem mli;

		int flags=0;
		if (fMyMove)
			flags|=CPlayer::kMyMove;
		if (fSynchGame1)
			flags|=CPlayer::kGame2;
		PComputer()->Update(*pgame, flags, mli);


		if (fMyMove) {
			assert(mli.mv.Row()<8);
			(*this) << "tell /os play " << idg << " " << mli << "\n";
			flush();
		}
	}
	else
		assert(0);
}
