// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

// options for the compilation

#pragma once

#ifndef _H_OPTIONS
#define _H_OPTIONS


#include <stdio.h>

class CBook;
class CCache;

extern int hSolverStart;	// number of empty squares when we start solver
#ifdef _DEBUG
extern bool fPrintTree;
#else
const bool fPrintTree=false;
#endif

extern bool fPrintTimeUsed;
extern bool fPrintWLD;
extern bool fPrintMPCStats;
extern bool fCompareMode;
extern bool fTourmanent;

extern int treeNEmpty;

class CBook;
class CCache;
class CEvaluator;
class CMPCStats;

extern CBook* book;

// search parameters
extern CCache* cache;
extern CEvaluator* evaluate;
extern CMPCStats* mpcs;

extern bool fSolvedAreMinimal;

extern double tMatch;	// total time available for a match
extern double dGHz;	// processor speed
const double dNPS=400000;	// approx midgame nodes per second on a 1GHz machine

extern bool fPrintAbort;	// print abort message when aborting search?

// maximum amount of memory to allocate to cache table.
//	should be a bit less than the total RAM on the computer.
extern int maxCacheMem;
extern double tSetStale;

// is it my move? Am I thinking on opponent's time?
extern bool fMyMove, fTooting;
typedef enum {kSignalNone, kSignalStdin, kSignalGGS} TMoveSignal;
extern TMoveSignal moveSignalOpponent;

void SetMatchTime(double atMatch);

// captured positions
extern FILE* cpFile;
extern int nCapturedPositions;

// directory
extern std::string fnBaseDir;

// search params
extern int hNegascout;

#endif // _H_OPTIONS