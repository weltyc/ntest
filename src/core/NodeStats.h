// Copyright Chris Welty
//  All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.

//////////////////////////////////////////////////////
// CNodeStats class
//////////////////////////////////////////////////////

#pragma once

#ifndef _H_NODESTATS
#define _H_NODESTATS

#include <iostream>
#include "../n64/types.h"

extern u4 nEvalsQuick, nSNodesQuick;
extern double nEvals, nSNodes, nINodes, nKFlips, nBBFlips;

class CNodeStats {
public:
    double nINodes, nSNodes, nKFlips, nBBFlips, nEvals;

    i8 time;

    void Read();
    void Out(std::ostream& os) const;
    void OutShort(std::ostream& os) const;

    CNodeStats operator-(const CNodeStats& b) const;
    double Seconds() const;
    double Nodes() const;
};

inline std::ostream& operator<<(std::ostream& os, const CNodeStats& ns) { ns.Out(os); return os; }

// thinking on opponent's time
extern bool abortRound;
extern bool abortOnInput;

void WipeNodeStats();
void SetAbortTime(double seconds);
void ResetAbortTime(double seconds);
bool CheckAbort(bool fPrintAbort);

#endif // _H_NODESTATS