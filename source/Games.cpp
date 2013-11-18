// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

// game routines


#include <stdio.h>
#include <io.h>
#include "time.h"
#include "Games.h"
#include "NodeStats.h"
#include "QPosition.h"
#include "options.h"
#include "Cache.h"
#include "Book.h"
#include <math.h>
#include "TreeDebug.h"
#include "test.h"

#include <sstream>
#include <fstream>
using namespace std;

// options
bool fPrintBoard=false;
bool printResult=false;
bool fPrintExtensionInfo=false;

string fnOpening;

//////////////////////////////////////////////////////////
// CGame routines:
//	Initialization
//////////////////////////////////////////////////////////

CGame::CGame(CPlayer* plBlack, CPlayer* plWhite) {
	InitializePlayers(plBlack, plWhite, tMatch);
}

CGame::CGame(CPlayer* plBlack, CPlayer* plWhite, double t) {
	InitializePlayers(plBlack, plWhite, t);
}

void CGame::Initialize(char sBoard[NN+1], bool fBlackMove) {
	pos.board.SetText(sBoard);
	pos.board.fBlackMove=fBlackMove;
	posStart=pos;
	ml.clear();	// in case there was a fixed opening listed
}

void CGame::InitializePlayers(CPlayer* plBlack, CPlayer* plWhite, double t) {
	Clear();

	// player pointers
	ppls[1]=plBlack;
	ppls[0]=plWhite;

	if (fnOpening.empty() || Load(fnOpening.c_str())) {
		SetDefaultStartPos();
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

int CGame::Load(const char* fn) {
	ifstream is(fn);
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
//	Playing
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
		cheatcode = ppls[!pos.board.fBlackMove]->Update(*this, ppls[!pos.board.fBlackMove]->IsHuman()?0:CPlayer::kNoPrint, mli);
		QSSERT(cheatcode==CPlayer::kCheatNone);

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
			QSSERT(0);
		}
	}

	result.status = COsResult::kNormalEnd;

	// let players finish up
	ppls[0]->EndGame(*this);
	if (ppls[1]!=ppls[0])
		ppls[1]->EndGame(*this);

	return pos.board.NetBlackSquares();
}


////////////////////////////////////////////////////////////
// Series of games
////////////////////////////////////////////////////////////

void Compare(CPlayerComputer& computer1, CPlayerComputer& computer2) {
	CBitBoard bb;
	FILE* fp;
	int nWins, nDraws, nLosses;
	int i, nNet;

	nWins=nDraws=nLosses=0;

	fp=fopen("CompareStart.pos","rb");
	QSSERT(fp);
	if (fp) {
		while (fread(&bb,sizeof(bb),1,fp)) {
			char sBoardText[NN+1];
			bb.GetSBoard(sBoardText, true);
			for (i=0; i<2; i++) {
				// clear caches
				computer1.Clear();
				computer2.Clear();

				CGame game(i?&computer2:&computer1, i?&computer1:&computer2);
				game.SetToPosition(sBoardText, true);

				nNet=game.Play();
				if (i)
					nNet=-nNet;
				if (nNet>0)
					nWins++;
				else if (nNet<0)
					nLosses++;
				else
					nDraws++;
				cout << nNet << (i?'\n':'\t');
			}
		}
		fclose(fp);

		cout << "computer1 has Wins: " << nWins << "  Draws: " << nDraws << "  Losses: " << nLosses << "\n";
	}
}