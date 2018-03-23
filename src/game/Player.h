// Copyright Chris Welty
//  All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.

// CPlayer classes

#pragma once

#include <string>
#include "../odk/OsObjects.h"

//! Player who can play a game of othello
class CPlayer {
public:

    enum TCheatcode {kCheatNone, kCheatUndo, kCheatAutoplay, kCheatContinue, kCheatSwitch};

    virtual ~CPlayer() {};

    // game playing
    virtual void StartMatch(const COsMatch& match);
    virtual TCheatcode  Update(COsGame& game, int flags, COsMoveListItem& mli);
    virtual TCheatcode  GetMove(COsGame& game, int flags, COsMoveListItem& mli)=0;
    virtual void EndGame(const COsGame& game);


    // display info
    void SetName(const char* newName);
    void SetName(const char* newName, int number);
    std::string Name() const;

    // Information about the player
    virtual bool NeedsBoardDisplayed() const;
    virtual bool IsHuman() const = 0;

    enum {
    	kMyMove=1, kNoPrint=2, kAllowCheats=4, kGame2=8,
    	kAnalyze=0x10, kNoAddSoloUnsolvedToBook=0x20,
    };

protected:
    std::string m_sName;
    std::string m_fnSaveGame;
};
