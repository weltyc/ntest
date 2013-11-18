// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

//////////////////////////////////////////////////////
// CNodeStats class
//////////////////////////////////////////////////////


#include <stdio.h>
#include "types.h"
#include "NodeStats.h"
#include "Utils.h"
#include "options.h"
#include "Debug.h"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <math.h>
#include "Ticks.h"

#ifdef _WIN32
#include <conio.h>
#endif

#ifdef __unix__

extern "C" {
#include <termios.h>
#include <unistd.h>

int _kbhit(void) {
	struct termios zap, original;
	char key = 0;
	int hit = 0;
	int fd = fileno(stdin);
	
	if (tcgetattr(fd, &original) == 0) {
		zap = original;
		zap.c_cc[VMIN] = 0;
		zap.c_cc[VTIME] = 0;
		zap.c_lflag &= ~(ICANON|ECHO|ISIG);
		if (tcsetattr(fd, TCSANOW, &zap) == 0){
			hit = read(fd, &key, 1);
			tcsetattr(fd, TCSANOW, &original);
		}
	}
	return hit;
}
}	// extern "C"

#endif

using namespace std;

u4 nEvalsQuick=0, nSNodesQuick=0;
double nEvals=0, nSNodes=0, nINodes=0, nKFlips=0, nBBFlips=0;

bool abortRound;
double qtAbort;
double qtAbortBase;

void WipeNodeStats() {
	nEvals+=nEvalsQuick;
	nEvalsQuick=0;
	nSNodes+=nSNodesQuick;
	nSNodesQuick=0;
}

void CNodeStats::Read() {
	WipeNodeStats();

	nSNodes=::nSNodes;
	nKFlips=::nKFlips;
	nBBFlips=::nBBFlips;
	nINodes=::nINodes;
	nEvals=::nEvals;
	time=GetTicks();
}

const char powerSymbolsBase[]="num kMGTPE";
const char* powerSymbols = powerSymbolsBase+3;
const char timeSymbols[]="smh";

void OutWithCommasSub(ostringstream& os, double n) {
	if (n>=1000) {
		double nreduce=floor(n/1000);
		OutWithCommasSub(os, nreduce);
		os << ',' << setw(3) << int(n-1000*nreduce);
	}
	else
		os << int(n);
}

string OutWithCommas(double n) {
	std::ostringstream os;
	os.fill('0');
	OutWithCommasSub(os, n);
	return os.str();
}

#ifdef _WIN32
#define _Ios_Fmtflags int
#endif

void CNodeStats::Out(ostream& os) const {
	double seconds=Seconds();
	double nodes=Nodes();
	double MNPS = nodes/seconds*1e-6;
	double npe = nEvals?nodes/nEvals:0;
	double nInodes = nodes-nEvals;
	double epi = nInodes?nEvals/nInodes:0;

	int precision = os.precision();
	_Ios_Fmtflags flags = os.setf(ios::fixed, ios::floatfield);

	os << setw(12) << OutWithCommas(nodes).c_str() << " ";
	os << setw(8) << setprecision(3) << seconds << "s = ";
	os << MNPS << "Mn/s ";
	os << "; " << OutWithCommas(nInodes).c_str() << "i, " << OutWithCommas(nEvals).c_str() << "e => " << epi << "e/i";

	os.precision(precision);
	os.setf(flags);
}

void CNodeStats::OutShort(ostream& os) const {
	double nNodes=Nodes();
	double t=Seconds();

	os.width(4);
	if (nNodes<1E4)
		os << int(nNodes) << " ";
	else if (nNodes<1E7)
		os << int(nNodes*1e-3) << "k";
	else if (nNodes<1E10)
		os << int(nNodes*1e-6) << "M";
	else
		os << int(nNodes*1e-9) << "G";
	os << "n/";
	int precision=os.precision(3);
	_Ios_Fmtflags flags=os.setf(ios::fixed, ios::floatfield);
	int knps=int(nNodes/t*1E-3);
	os << t << "s = " << std::setw(4) << knps << "kn/s; ";
	double dUspn=t/nNodes*1e6;
	os.precision(2);
	if (dUspn>=100)
		os << "**.** us/n";
	else
		os << setw(5) << dUspn << " us/n";
	os.precision(precision);
	os.setf(flags);
}

CNodeStats CNodeStats::operator-(const  CNodeStats& b) const {
	CNodeStats result;

	result.nINodes=nINodes-b.nINodes;
	result.nEvals=nEvals-b.nEvals;
	result.nSNodes=nSNodes-b.nSNodes;
	result.nKFlips=nKFlips-b.nKFlips;
	result.nBBFlips=nBBFlips-b.nBBFlips;
	result.time=time-b.time;

	return result;
}
double CNodeStats::Nodes() const {
	return nKFlips+nBBFlips+nSNodes;
}

double CNodeStats::Seconds() const {
	return time/(double)GetTicksPerSecond();
}

void SetAbortTime(double seconds) {
	if (seconds <= 0)
		seconds=.01;

	_ASSERT(seconds>0);

	abortRound=false;

	qtAbortBase=double(GetTicks());
	ResetAbortTime(seconds);
}

void ResetAbortTime(double seconds) {
	qtAbort=qtAbortBase+(double)GetTicksPerSecond()*seconds;
}

//! If this flag is true, searches are aborted when the program has input.
//! It is mostly on, but is turned off when book learning.
bool abortOnInput=true;

//! return true if we should abort the search.
//!
//! This is true if we've used up our allocated time, or if HasInput() returns true.
bool CheckAbort() {
	extern bool HasInput();
	abortRound = (GetTicks()>=qtAbort || (abortOnInput && HasInput()));
	if (abortRound && fPrintAbort)
		cout << ">> Abort round!!!\n";
	return abortRound;
}