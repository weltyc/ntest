// Copyright Chris Welty
//  All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.

// Player source code

#include <sstream>
#include <string>
#include "../core/Ticks.h"

#include "Player.h"

using namespace std;

//////////////////////////////////////////////////
// CPlayer
//////////////////////////////////////////////////

// game playing

void CPlayer::StartMatch(const COsMatch& match) {
}

CPlayer::TCheatcode CPlayer::Update(COsGame& game, int flags, COsMoveListItem& mli) {
    TCheatcode cheatcode;

    // time the call to GetMove()
    i8 ticksPerSecond=GetTicksPerSecond();
    i8 start=GetTicks();

    cheatcode = GetMove(game, flags, mli);

    i8 end=GetTicks();
    mli.tElapsed = (end-start)/(double)ticksPerSecond;

    return cheatcode;
}

void CPlayer::EndGame(const COsGame& game) {
}

// display

void CPlayer::SetName(const char* newName) {
    m_sName=newName;
}

void CPlayer::SetName(const char* newName, int number) {
    std::ostringstream os;
    os << newName << number;
    m_sName=os.str();
}

std::string CPlayer::Name() const {
    return m_sName.c_str();
}

bool CPlayer::NeedsBoardDisplayed() const {
    return false;
}
