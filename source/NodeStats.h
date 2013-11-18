// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

//////////////////////////////////////////////////////
// CNodeStats class
//////////////////////////////////////////////////////

#pragma once

#ifndef _H_NODESTATS
#define _H_NODESTATS

#include <iostream>
using namespace std;

typedef unsigned long u4;
#if _WIN32
typedef __int64 i8;
#else
typedef long long i8;
#endif

extern u4 nEvalsQuick, nSNodesQuick;
extern double nEvals, nSNodes, nINodes, nKFlips, nBBFlips;

class CNodeStats {
public:
	double nINodes, nSNodes, nKFlips, nBBFlips, nEvals;

	i8 time;

	void Read();
	void Out(ostream& os) const;
	void OutShort(ostream& os) const;

	CNodeStats operator-(const CNodeStats& b) const;
	double Seconds() const;
	double Nodes() const;
};

inline ostream& operator<<(ostream& os, const CNodeStats& ns) { ns.Out(os); return os; }

// thinking on opponent's time
extern bool abortRound;
extern bool abortOnInput;

void WipeNodeStats();
void SetAbortTime(double seconds);
void ResetAbortTime(double seconds);
bool CheckAbort();

#endif // _H_NODESTATS