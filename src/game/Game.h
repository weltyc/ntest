// Copyright Chris Welty
//  All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.

// game header routines

#pragma once

#include <vector>
#include <stdio.h>
#include "../odk/OsObjects.h"

#include "Player.h"

// options
extern bool fPrintBoard, printResult, printSeriesResult, printSeriesProgress, fPrintExtensionInfo;
extern char* saveGameFile;

//! Game class used to control play of an othello game by calling member functions of the players.
class CGame : public COsGame {
public:
    CGame(CPlayer* plBlack, CPlayer* plWhite, double t, const std::string& fnOpening);

    void Initialize(char sBoard[65], bool fBlackMove);

    int Play();

    int Load(const std::string& filename);
    void SetInfo();

protected:
    CPlayer* ppls[2];

private:
    void InitializePlayers(CPlayer* plBlack, CPlayer* plWhite, const std::string& fnOpening, double t);
};
