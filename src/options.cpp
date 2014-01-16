// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

// source file for options

#include "n64/utils.h"
#include "options.h"
#ifdef _WIN32
#include "windows.h"
#endif

int treeNEmpty;
/*
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
		nLen=GetModuleFileNameA(NULL, buf, size-1);
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
*/
// opponent's move?
bool fTooting=false;
bool fMyMove=false;

// book-do solved nodes count as minimal nodes?
bool fSolvedAreMinimal=true;

bool fPrintAbort=true;

#ifdef _DEBUG
bool fPrintTree=false;
#endif
bool fPrintWLD=false;
bool fCompareMode=false;
bool fInTournament=false;

//Captured positions
FILE* cpFile;
int nCapturedPositions=0;

int hNegascout=6;

