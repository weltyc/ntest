// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

// game header routines

#pragma once

#include <vector>
#include <stdio.h>

using namespace std;

#include "Player.h"
#include "Moves.h"
#include "NodeStats.h"
#include "OsObjects.h"

// options
extern bool fPrintBoard, printResult, printSeriesResult, printSeriesProgress, fPrintExtensionInfo;
extern char* saveGameFile;

void Compare(CPlayerComputer& computer1, CPlayerComputer& computer2);

//! Game class used to control play of an othello game by calling member functions of the players.
class CGame : public COsGame {
	// todo add LoadPosition() as an argument to the constructor instead of having it happen mysteriously in the constructor
public:
	CGame(CPlayer* plBlack, CPlayer* plWhite);
	CGame(CPlayer* plBlack, CPlayer* plWhite, double t);

	void InitializePlayers(CPlayer* plBlack, CPlayer* plWhite, double t);
	void Initialize(char sBoard[NN+1], bool fBlackMove);

	int Play();

	int Load(const char* fn);
	void SetInfo();

protected:
	CPlayer* ppls[2];
};
