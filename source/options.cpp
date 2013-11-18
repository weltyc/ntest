// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

// source file for options

#include "Utils.h"
#include "options.h"
#include "windows.h"

int hSolverStart=8;

int treeNEmpty;
 //! Get the file name (including full path) of the current executable
static std::string GetModuleFilename() {
	std::string sMFN;

	char *buf=0;
	int size=16;
	int nLen;

	while (size<(1<<15) && buf==NULL) {
		buf=new char[size];
		if (!buf)
			break;
		// win NT: 3d argument must be < size; \0 appended to result
		// win 98: 3d argument must be <=size; \0 appended to result
		nLen=GetModuleFileName(NULL, buf, size-1);
		if (nLen>=size-2) {
			size+=size;
			delete [] buf;
			buf=NULL;
		}
		else
			buf[nLen]=0;
	}

	if (buf) {
		sMFN=buf;
		delete [] buf;
	}
	else
		sMFN="";

	return sMFN;
}

//! Return the base directory for the othello program, including the trailing \
//!
//! e.g. C:\devl\othello\ 
static std::string GetBaseDir() {
#if _WIN32
	std::string pathname=GetModuleFilename();
	size_t lastslash=pathname.rfind('\\');
	std::string baseDir(pathname, 0, lastslash+1);
	return baseDir;
#else
	return "./";
#endif
}

std::string fnBaseDir = GetBaseDir();

// timing paramters
double tMatch;	// total time available for a match
double dGHz;	//	double dGHz - Approx processor speed

// maximum memory for cache
int maxCacheMem=25<<20; // can be up to 90<<20 on 128MB NT machine
double tSetStale=0.17;	// time to SetStale() in seconds... so we don't lose on time

// opponent's move?
bool fTooting=false;
bool fMyMove=false;
TMoveSignal moveSignalOpponent=kSignalStdin;

// book-do solved nodes count as minimal nodes?
bool fSolvedAreMinimal=true;

// search parameters
CBook* book=0;
CCache* cache=0;
CEvaluator* evaluate=0;
CMPCStats* mpcs=0;
int hBookRead=0;

bool fPrintAbort=true;

#ifdef _DEBUG
bool fPrintTree=false;
#endif
bool fPrintTimeUsed=false;
bool fPrintWLD=false;
bool fCompareMode=false;
bool fInTournament=false;

void SetMatchTime(double aMatchTime) {
	if (aMatchTime<=0)
		tMatch=10+maxCacheMem*2E-9/dGHz*60;
	else
		tMatch=aMatchTime;
}

//Captured positions
FILE* cpFile;
int nCapturedPositions=0;

int hNegascout=6;

