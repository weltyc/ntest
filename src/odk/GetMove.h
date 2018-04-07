// Copyright 2001 Chris Welty
//  All Rights Reserved

#ifndef ODK_GETMOVE_H
#define ODK_GETMOVE_H

#include "types.h"

class COsMoveListItem;
class COsGame;

void GetMove(const COsGame& game, COsMoveListItem& mli);

#endif    //ODK_GETMOVE_H