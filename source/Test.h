// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

// test header file

#pragma once

#include "Games.h"

class CPlayerComputer;

void TestMoveSpeed(int nMinutesOrDepth, int nGames, char* sMode);
std::vector<COsGame> LoadTestGames();
CQPosition PositionFromEmpties(const COsGame& game, int nEmpty);
