// Copyright Chris Welty
//  All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.

// game routines


#include <cstdio>
#include <cassert>
#include <math.h>
#include <sstream>
#include <fstream>
#include <time.h>

#include "../n64/test.h"

#include "Game.h"

using namespace std;

// options
bool fPrintBoard=false;
bool printResult=false;
bool fPrintExtensionInfo=false;

//////////////////////////////////////////////////////////
// CGame routines:
//    Initialization
//////////////////////////////////////////////////////////

CGame::CGame(CPlayer* plBlack, CPlayer* plWhite, double t, const std::string& fnOpening) {
    InitializePlayers(plBlack, plWhite, fnOpening, t);
}

void CGame::Initialize(char sBoard[NN+1], bool fBlackMove) {
    pos.board.SetText(sBoard);
    pos.board.fBlackMove=fBlackMove;
    posStart=pos;
    ml.clear();	// in case there was a fixed opening listed
}

void CGame::InitializePlayers(CPlayer* plBlack, CPlayer* plWhite, const std::string& fnOpening, double t) {
    Clear();

    // player pointers
    ppls[1]=plBlack;
    ppls[0]=plWhite;

    if (fnOpening.empty() || Load(fnOpening)) {
    	SetDefaultStartPos(8);
    }
    else {
    	// clear evals and times from move list so we don't have to look at them in the GGF files
    	vector<COsMoveListItem>::iterator pMli;
    	for (pMli=ml.begin(); pMli!=ml.end(); pMli++) {
    		pMli->tElapsed=pMli->dEval=0;
    	}
    	// clear game-over flag
    	result.Clear();
    }

    SetInfo();

    // clocks
    posStart.cks[0]=posStart.cks[1]=COsClock(t);
}

void CGame::SetInfo() {
    // players
    pis[0].sName=ppls[0]->Name();
    pis[1].sName=ppls[1]->Name();

    // sDateTime
    char sTime[30];
    time_t tCurrent=time(NULL);
    strftime(sTime, 30, "%Y-%m-%d %H:%M:%S GMT", gmtime(&tCurrent));
    sDateTime=sTime;

    // other
    sPlace="Local";
}

/**
* Load a game from a file
*
* @return 1 if load failed, 0 if load succeeded
*/
int CGame::Load(const std::string& fn) {
    ifstream is(fn.c_str());
    if (!is) {
    	cerr << "can't read file " << fn << "\n";
    	return 1;
    }
    else {
    	In(is);
    	return !is;
    }
}

//////////////////////////////////////////////////////////
// CGame routines:
//    Playing
//////////////////////////////////////////////////////////

// Play a game. Return net number of discs

int CGame::Play() {
    COsMoveListItem mli;
    COsMatch match;
    CPlayer::TCheatcode cheatcode;

    // initialize players
    match.pis[0]=pis[0];
    match.pis[1]=pis[1];
    match.mt=mt;
    match.cRated='R';

    ppls[0]->StartMatch(match);
    if (ppls[1]!=ppls[0])
    	ppls[1]->StartMatch(match);

    // get moves from players until the game is over
    while (!GameOver()) {
    	if (fPrintBoard || ppls[0]->NeedsBoardDisplayed() || ppls[1]->NeedsBoardDisplayed()) {
    		cout << "\n";
    		pos.board.OutFormatted(cout);
    		cout << "\n";
    	}

    	// toot
    	bool enemyIsHuman = ppls[!pos.board.fBlackMove]->IsHuman();
    	cheatcode = ppls[!pos.board.fBlackMove]->Update(*this, enemyIsHuman?0:CPlayer::kNoPrint, mli);
    	assert(cheatcode==CPlayer::kCheatNone);

    	// regular player
    	cheatcode = ppls[pos.board.fBlackMove]->Update(*this, CPlayer::kMyMove+CPlayer::kAllowCheats, mli);
    	switch(cheatcode) {
    	case CPlayer::kCheatNone:
    		Update(mli);
    		break;
    	case CPlayer::kCheatUndo:
    		Undo();
    		break;
    	case CPlayer::kCheatAutoplay:
    		ppls[pos.board.fBlackMove]=ppls[!pos.board.fBlackMove];
    		break;
    	case CPlayer::kCheatSwitch:
    			std::swap(ppls[0], ppls[1]);
    			break;
    	case CPlayer::kCheatContinue:
    		break;
    	default:
    		assert(0);
    	}
    }

    result.status = COsResult::kNormalEnd;

    // let players finish up
    ppls[0]->EndGame(*this);
    if (ppls[1]!=ppls[0])
    	ppls[1]->EndGame(*this);

    return pos.board.NetBlackSquares();
}

