// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

#pragma once

#include "FastFlipTables.h"

void InitFastFlip();

extern TConfig* sdToPConfig[NN][4];
extern int *nEmptyToPCoeffsK[60];
extern u2 config2x5Toconfig2x4[6561*9];
