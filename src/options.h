// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

// options for the compilation

#pragma once

#ifndef H_OPTIONS
#define H_OPTIONS


#include <stdio.h>

class CBook;
class CCache;

#ifdef _DEBUG
extern bool fPrintTree;
#else
const bool fPrintTree=false;
#endif

extern bool fPrintWLD;
extern bool fPrintMPCStats;
extern bool fCompareMode;
extern bool fTourmanent;

extern int treeNEmpty;

extern bool fSolvedAreMinimal;

extern bool fPrintAbort;	// print abort message when aborting search?

// is it my move? Am I thinking on opponent's time?
extern bool fMyMove, fTooting;

// captured positions
extern FILE* cpFile;
extern int nCapturedPositions;

// search params
extern int hNegascout;

#endif // H_OPTIONS