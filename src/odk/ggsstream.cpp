// Copyright 2001 Chris Welty
//  All Rights Reserved

#include "types.h"

#include <cstring>

#include "ggsstream.h"
#include "GGSMessage.h"
#include "OsMessage.h"
#include <string>
#include <strstream>
using namespace std;

ggsstream::ggsstream() : iostream(NULL) {
    fLoggedIn=fConnected=fHasOs=false;
    psockbuf=NULL;
}

ggsstream::~ggsstream() throw() {
    if (IsLoggedIn())
    	Logout();
    if (IsConnected())
    	Disconnect();
}

int ggsstream::Connect(const string& sServer, int nPort) {
    if(IsConnected()) {
    	assert(0);
    	return kErrConnected;
    }
    
    int err = 0;

    psockbuf=new sockbuf();
    if (psockbuf) {
    	err=psockbuf->connect(sServer, nPort);
    	if (!err)
    		init(psockbuf);
    	else {
    		delete psockbuf;
    		psockbuf=NULL;
    	}
    }

    return err;
}

int ggsstream::Disconnect() {
    if (!IsConnected()) {
    	assert(0);
    	return kErrNotConnected;
    }
    setstate(ios::eofbit);
    if (psockbuf) {
    	psockbuf->disconnect();
    	delete psockbuf;
    	init(NULL);
    	psockbuf=NULL;
    }

    return 0;
}

// return 0 if no error
// 1 if socket err (e.g. connection timed out)
int ggsstream::Login(const char* sName, const char* sPassword) {
    int err=0;

    if (fLoggedIn) {
    	assert(0);
    	err = kErrLoggedIn;
    }

    // await login prompt
    if (!err) {
    	sLogin=sName;
    	err = await("login");
    }

    // send login, await password prompt
    if (!err) {
    	(*this) << sName << "\n";
    	flush();
    	err = await("password");
    }

    // send password, await response
    if (!err) {
    	(*this) << sPassword << "\n";
    	flush();
    	err = await("\n");
    }

    // check to see if password was accepted
    if (!err) {
    	char c;
    	c=peek();
    	switch(c) {
    	case ':':
    		err = kErrBadPassword;
    		break;
    	case 'R':
    		fLoggedIn=true;
    		break;
    	default:
    		assert(0);
    		err = kErrUnknown;
    	}
    }

    // send fake "Login" message
    if (!err) {
    	CMsgGGSLogin *pmsg= new CMsgGGSLogin;
    	if (pmsg) {
    		pmsg->pgs=this;
    		Post(pmsg);
    	}
    	else
    		assert(0);
    }

    return err;
}

int ggsstream::Logout() {
    if (fLoggedIn==false) {
    	assert(0);
    	return kErrLoggedOut;
    }
    else {
    	(*this) << "quit\n";
    	flush();
    	fLoggedIn=false;
    	return 0;
    }
}

int ggsstream::await(const char* sAwait) {
    string sLine;
    char c;

    while (get(c)) {
    	sLine+=c;
    	if (strstr(sLine.c_str(), sAwait))
    		return 0;
    }
    
    sockbuf* psb = dynamic_cast<sockbuf*>(rdbuf());
    if (psb)
    	return psb->Err();
    else {
    	assert(0);
    	return kErrNoStreambuf;
    }
}

const string& ggsstream::GetLogin() const {
    return sLogin;
}

// process incoming data from GGS. 'is' is a socket connection.
//    strip bells and '|' at the beginning of lines. Once we have an
//    entire message(terminated by "READY" on its own line), call Parse()
void ggsstream::Process(){
    string sLine;
    static bool fHasCR=false;
    char c;

    while (get(c)) {
    	switch(c) {
    	case '\a':
#ifdef _WIN32
    		MessageBeep(-1);
#endif
    		break;
    	case '\r':
    		ProcessLine(sLine);
    		break;
    	case '\n':
    		if (!fHasCR)
    			ProcessLine(sLine);
    		break;
    	default:
    		sLine+=c;
    	}
    	fHasCR=(c=='\r');
    }
    CMsg* pmsg = new CMsgGGSDisconnect;
    if(pmsg) {
    	pmsg->pgs = this;
    	Post(pmsg);
    }
}

void ggsstream::ProcessLine(string& sLine){
    if (sLine=="READY")
    	ProcessMessage();
    else {
    	const char* pLine = sLine.c_str();

    	if (!sMsg.empty()) {
    		// GGS sometimes sends 2 messages without a READY
    		if (pLine[0]==':') {
    			ProcessMessage();
    		}
    		else {
    			sMsg+="\n";

    			// GGS sends '|' at the beginning of all tell lines
    			// except the first, strip them
    			if (pLine[0]=='|')
    				pLine++;
    		}
    	}
    	sMsg+=pLine;
    }

    sLine="";
}

// Gets a message. Calls GetMsgType() to create the new message;
//    the user must delete() the message, perhaps in the
//    Post() routine

void ggsstream::ProcessMessage() {
    istrstream is(sMsg.c_str());
    CMsg *pmsg;

    pmsg=GetMsgType(is);

    if (pmsg) {
    	pmsg->pgs=this;
    	pmsg->sRawText=sMsg;
    	pmsg->In(is);
    	Post(pmsg);
    }

    sMsg="";
}

void ggsstream::Post(CMsg* pmsg) {
    pmsg->Handle();
    delete pmsg;
}

CMsg* ggsstream::GetMsgType(istream& is) {
    string sFrom;
    CMsg *pmsg;

    is >> sFrom >> ws;

    if (sFrom.empty())
    	pmsg=NULL;
    else {
    	// direct messages end in ':', channel messages don't
    	if (sFrom.end()[-1]==':')
    		sFrom.resize(sFrom.size()-1);

    	if (sFrom=="/os")
    		 pmsg=GetMsgTypeOs(is);
    	else if (sFrom=="")
    		pmsg=GetMsgTypeGGS(is);
    	else {
    		pmsg = new CMsgGGSTell;
    	}
    	if (pmsg)
    		pmsg->sFrom=sFrom;
    }
    return pmsg;
}

CMsg* ggsstream::GetMsgTypeOs(istream& is) {
    CMsg* pmsg=NULL;

    string sMsgType;
    is >> sMsgType >> ws;

    if (sMsgType[0]=='.')
    	pmsg=new CMsgOsComment(sMsgType);
    else if (sMsgType=="abort")
    	pmsg=new CMsgOsAbortRequest;
    else if (sMsgType=="end")
    	pmsg=new CMsgOsEnd;
    else if (sMsgType=="ERR")
    	pmsg=new CMsgOsErr;
    else if (sMsgType=="fatal-timeout")
    	pmsg=new CMsgOsFatalTimeout;
    else if (sMsgType=="finger")
    	pmsg=new CMsgOsFinger;
    else if (sMsgType=="history") {
    	if (is.peek()=='E')
    		pmsg=new CMsgOsErr;
    	else
    		pmsg=new CMsgOsHistory;
    }
    else if (sMsgType=="illegal")
    	pmsg=new CMsgOsErr;
    else if (sMsgType=="join")
    	pmsg=new CMsgOsJoin;
    else if (sMsgType=="look")
    	pmsg=new CMsgOsLook;
    else if (sMsgType=="match")
    	pmsg=new CMsgOsMatch;
    else if (sMsgType=="rank")
    	pmsg=new CMsgOsRank;
    else if (sMsgType=="rating_update")
    	pmsg=new CMsgOsRatingUpdate;
    else if (sMsgType=="stored")
    	pmsg=new CMsgOsStored;
    else if (sMsgType=="timeout")
    	pmsg=new CMsgOsTimeout;
    else if (sMsgType=="top")
    	pmsg=new CMsgOsTop;
    else if (sMsgType=="trust-violation")
    	pmsg=new CMsgOsTrustViolation;
    else if (sMsgType=="undo")
    	pmsg=new CMsgOsUndoRequest;
    else if (sMsgType=="update")
    	pmsg=new CMsgOsUpdate;
    else if (sMsgType=="watch") {
    	is >> ws;
    	char c=is.peek();
    	if (c=='+' || c=='-')
    		pmsg=new CMsgOsErr;
    	else
    		pmsg=new CMsgOsWatch;
    }
    else if (sMsgType=="who")
    	pmsg=new CMsgOsWho;
    else if (sMsgType=="+" || sMsgType=="-") {
    	bool fPlus= sMsgType=="+";
    	is >> ws;
    	if (is.peek()=='.')
    		pmsg=new CMsgOsRequestDelta(fPlus);
    	else {
    		is >> sMsgType;
    		if (sMsgType=="match")
    			pmsg=new CMsgOsMatchDelta(fPlus);
    		else {
    			string sLogin=sMsgType;
    			is >> sMsgType;
    			if (sMsgType=="watch") {
    				pmsg=new CMsgOsWatchDelta(fPlus, sLogin);
    			}
    			else{
    				// os: + booklet stored
    				pmsg=new CMsgOsUnknown("--");
    			}
    		}
    	}
    }
    else
    	pmsg=new CMsgOsUnknown(sMsgType);

    assert(pmsg);
    return pmsg;
}

CMsg* ggsstream::GetMsgTypeGGS(istream& is) {
    CMsg* pmsg=NULL;

    string sMsgType;
    is >> sMsgType;

    if (sMsgType=="alias")
    	pmsg=new CMsgGGSAlias;
    else if (sMsgType=="ERR")
    	pmsg=new CMsgGGSErr;
    else if (sMsgType=="finger")
    	pmsg= new CMsgGGSFinger;
    else if (sMsgType=="help")
    	pmsg= new CMsgGGSHelp;
    else if (sMsgType=="who")
    	pmsg=new CMsgGGSWho;
    else if (sMsgType=="+" || sMsgType=="-") {
    	bool fPlus= sMsgType=="+";
    	pmsg=new CMsgGGSUserDelta(fPlus);
    }
    else
    	pmsg=new CMsgGGSUnknown;

    assert(pmsg);
    return pmsg;
}

const char* ggsstream::ErrText(int err) {
    switch(err) {
    case kErrBadPassword:
    	return "Your password is invalid, or someone has already chosen that login";
    case kErrLoggedIn:
    	return "You are already logged into GGS";
    case kErrLoggedOut:
    	return "You have already logged out of GGS";
    case kErrUnknown:
    	return "Unknown GGS error";
    case kErrMem:
    	return "Out of memory";
    default:
    	return "(No text available for this error)";
    }
}

bool ggsstream::IsConnected() const {
    return psockbuf!=NULL;
}

bool ggsstream::IsLoggedIn() const {
    return fLoggedIn;
}

bool ggsstream::HasOthelloServer() const {
    return fHasOs;
}

void ggsstream::BaseGGSDisconnect() {
    idToGame.clear();
    idToMatch.clear();
    idToRequest.clear();
    fConnected=fLoggedIn=fHasOs=false;
    sLogin.erase();
}

void ggsstream::BaseGGSLogin() {
    // required commands for ODK to work:
    (*this) << "ve -ack\n"		// turn off GGS Parser comments
    		<< "notify + /os\n";	// tell us when /os comes up/goes down

    flush();
}

void ggsstream::BaseGGSUserDelta(const CMsgGGSUserDelta* pmsg) {
    if (pmsg->sLogin=="/os" && pmsg->fPlus!=fHasOs) {
    	fHasOs=pmsg->fPlus;
    	if (pmsg->fPlus)
    		HandleOsLogin();
    	else
    		HandleOsLogout();
    }
}

void ggsstream::BaseOsEnd(const CMsgOsEnd* pmsg) {
    // end messages occur at the end of some synch games
    //	to let you know the result
    COsGame* pgame=PGame(pmsg->idg);
    if (pgame) {
    	assert(pgame->mt.fSynch);
    	pgame->SetResult(pmsg->result, pmsg->sPlayers);
    }
}

void ggsstream::BaseOsGameOver(const CMsgOsMatchDelta* pmsg, const string& idg) {
    idToGame.erase(idg);
}

// we get a "Join" message (and the whole game is sent)
//    when we join the game,  when komi is set in a game,
//    and when a move is undone in a game.
void ggsstream::BaseOsJoin(const CMsgOsJoin* pmsg) {
    idToGame[pmsg->idg]=pmsg->game;
}

void ggsstream::BaseOsLogin() {
    // required commands for ODK to work:
    (*this) << "tell /os client +\n";	// get compact messages
    flush();

    fHasOs=true;
}

void ggsstream::BaseOsLogout() {
    idToGame.clear();
    idToMatch.clear();
    idToRequest.clear();
    fHasOs=false;
}

void ggsstream::BaseOsMatch(const CMsgOsMatch* pmsg) {
    idToMatch.clear();
    std::vector<COsMatch>::const_iterator i;

    for (i=pmsg->matches.begin(); i!=pmsg->matches.end(); i++)
    	idToMatch[i->idm]=*i;
}

// helper function for BaseOsMatchDelta
void ggsstream::EndGame(const CMsgOsMatchDelta* pmsg, const string& idg) {
    COsGame* pgame=PGame(idg);
    if (pgame) {
    	// synch games with normal termination should have
    	//	gotten an "End" Message
    	if (pgame->result.status==COsResult::kUnfinished)
    		pgame->SetResult(pmsg->result, pmsg->match.pis);
    	else {
    		assert(pgame->mt.fSynch && pgame->result.status==COsResult::kNormalEnd);
    	}
    	HandleOsGameOver(pmsg, idg);
    }
}

void ggsstream::BaseOsMatchDelta(const CMsgOsMatchDelta* pmsg) {
    map<string,COsMatch>::iterator i=idToMatch.find(pmsg->match.idm);
    if (pmsg->fPlus) {
    	assert(i==idToMatch.end());
    	idToMatch[pmsg->match.idm]=pmsg->match;
    }
    else {
    	if (i!=idToMatch.end()) {

    		if (pmsg->match.mt.fSynch) {
    			EndGame(pmsg, pmsg->match.idm+".0");
    			EndGame(pmsg, pmsg->match.idm+".1");
    		}
    		else {
    			EndGame(pmsg, pmsg->match.idm);
    		}
    		idToMatch.erase(i);
    	}
    }
}

// delete the request if we have it. We might not, e.g. if we've just logged in
void ggsstream::BaseOsRequestDelta(const CMsgOsRequestDelta* pmsg) {
    map<string,COsRequest>::iterator i=idToRequest.find(pmsg->idr);
    if (pmsg->fPlus) {
    	assert(i==idToRequest.end());
    	idToRequest[pmsg->idr]=pmsg->request;
    }
    else {
    	if (i!=idToRequest.end())
    		idToRequest.erase(i);
    }
}

void ggsstream::BaseOsUpdate(const CMsgOsUpdate* pmsg) {
    // update the game if it exists. Due to lag, we might still
    //	be getting updates for games we've stopped watching
    map<string,COsGame>::iterator i=idToGame.find(pmsg->idg);
    if (i!=idToGame.end())
    	idToGame[pmsg->idg].Update(pmsg->mli);
}

///////////////////////////////////////
// Overridable handlers
///////////////////////////////////////

void ggsstream::HandleGGS(const CMsg* pmsg) {
    cout << pmsg->sRawText << "\n";
}

void ggsstream::HandleGGSAlias(const CMsgGGSAlias* pmsg) {
    HandleGGS(pmsg);
}

void ggsstream::HandleGGSDisconnect() {
    BaseGGSDisconnect();
}

void ggsstream::HandleGGSErr(const CMsgGGSErr* pmsg) {
    HandleGGS(pmsg);
}

void ggsstream::HandleGGSFinger(const CMsgGGSFinger* pmsg) {
    HandleGGS(pmsg);
}

void ggsstream::HandleGGSHelp(const CMsgGGSHelp* pmsg) {
    HandleGGS(pmsg);
}

void ggsstream::HandleGGSLogin() {
    BaseGGSLogin();
}

void ggsstream::HandleGGSTell(const CMsgGGSTell* pmsg) {
    HandleGGS(pmsg);
}

void ggsstream::HandleGGSUnknown(const CMsgGGSUnknown* pmsg) {
    HandleGGS(pmsg);
}

void ggsstream::HandleGGSUserDelta(const CMsgGGSUserDelta* pmsg) {
    BaseGGSUserDelta(pmsg);
    HandleGGS(pmsg);
}

void ggsstream::HandleGGSWho(const CMsgGGSWho* pmsg) {
    HandleGGS(pmsg);
}

void ggsstream::HandleOs(const CMsgOs* pmsg) {
    HandleGGS(pmsg);
}

void ggsstream::HandleOsAbortRequest(const CMsgOsAbortRequest* pmsg) {
    HandleOs(pmsg);
}

void ggsstream::HandleOsComment(const CMsgOsComment* pmsg) {
    HandleOs(pmsg);
}

void ggsstream::HandleOsEnd(const CMsgOsEnd* pmsg) {
    BaseOsEnd(pmsg);
    HandleOs(pmsg);
}

void ggsstream::HandleOsErr(const CMsgOsErr* pmsg) {
    HandleOs(pmsg);
}

void ggsstream::HandleOsFatalTimeout(const CMsgOsFatalTimeout* pmsg) {
    HandleOs(pmsg);
}

void ggsstream::HandleOsFinger(const CMsgOsFinger* pmsg) {
    HandleOs(pmsg);
}

void ggsstream::HandleOsGameOver(const CMsgOsMatchDelta* pmsg, const string& idg) {
    BaseOsGameOver(pmsg, idg);
}

void ggsstream::HandleOsHistory(const CMsgOsHistory* pmsg) {
    HandleOs(pmsg);
}

void ggsstream::HandleOsJoin(const CMsgOsJoin* pmsg) {
    BaseOsJoin(pmsg);
    HandleOs(pmsg);
}

void ggsstream::HandleOsLogin() {
    BaseOsLogin();
}

void ggsstream::HandleOsLogout() {
    BaseOsLogout();
}

void ggsstream::HandleOsLook(const CMsgOsLook* pmsg) {
    HandleOs(pmsg);
}

void ggsstream::HandleOsMatch(const CMsgOsMatch* pmsg) {
    BaseOsMatch(pmsg);
    HandleOs(pmsg);
}

void ggsstream::HandleOsMatchDelta(const CMsgOsMatchDelta* pmsg) {
    BaseOsMatchDelta(pmsg);
    HandleOs(pmsg);
}

void ggsstream::HandleOsRank(const CMsgOsRank* pmsg) {
    HandleOs(pmsg);
}

void ggsstream::HandleOsRatingUpdate(const CMsgOsRatingUpdate* pmsg) {
    HandleOs(pmsg);
}

void ggsstream::HandleOsRequestDelta(const CMsgOsRequestDelta* pmsg) {
    BaseOsRequestDelta(pmsg);
    HandleOs(pmsg);
}

void ggsstream::HandleOsStored(const CMsgOsStored* pmsg) {
    HandleOs(pmsg);
}

void ggsstream::HandleOsTimeout(const CMsgOsTimeout* pmsg) {
    HandleOs(pmsg);
}

void ggsstream::HandleOsTop(const CMsgOsTop* pmsg) {
    HandleOs(pmsg);
}

void ggsstream::HandleOsTrustViolation(const CMsgOsTrustViolation* pmsg) {
    HandleOs(pmsg);
}

void ggsstream::HandleOsUndoRequest(const CMsgOsUndoRequest* pmsg) {
    HandleOs(pmsg);
}

void ggsstream::HandleOsUnknown(const CMsgOsUnknown* pmsg) {
    HandleOs(pmsg);
}

void ggsstream::HandleOsUpdate(const CMsgOsUpdate* pmsg) {
    BaseOsUpdate(pmsg);
    HandleOs(pmsg);
}

void ggsstream::HandleOsWatch(const CMsgOsWatch* pmsg) {
    HandleOs(pmsg);
}

void ggsstream::HandleOsWatchDelta(const CMsgOsWatchDelta* pmsg) {
    HandleOs(pmsg);
}

void ggsstream::HandleOsWho(const CMsgOsWho* pmsg) {
}

COsGame* ggsstream::PGame(const string& idg) {
    map<string, COsGame>::iterator i;

    i = idToGame.find(idg);
    if (i==idToGame.end())
    	return NULL;
    else
    	return &((*i).second);
}
