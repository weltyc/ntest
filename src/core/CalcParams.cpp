// Copyright Chris Welty
//  All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.

#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <sstream>

#include "options.h"
#include "CalcParams.h"

using namespace std;

//////////////////////////////
// global timing parameters
//////////////////////////////

double tMatch;    // total time available for a match
double dGHz;    //	double dGHz - Approx processor speed
double tSetStale=0.17;    // time to SetStale() in seconds... so we don't lose on time

// maximum memory for cache
int maxCacheMem=25<<20; // can be up to 90<<20 on 128MB NT machine

void SetMatchTime(double aMatchTime) {
    if (aMatchTime<=0)
    	tMatch=10+maxCacheMem*2E-9/dGHz*60;
    else
    	tMatch=aMatchTime;
}

//////////////////////////////////////////
// CCalcParams
//////////////////////////////////////////

// base class. most subclasses don't set abort time, so we won't need to override this

bool CCalcParams::RoundOK(const CHeightInfo& hi, int nEmpty, double tElapsed, double tRemaining) const {
    return hi<=MinHeight(nEmpty);
}

void CCalcParams::SetAbortTime(const CNodeStats& nsStart, int nEmpty, double tRemaining) const {
    ::SetAbortTime(INFINITE_TIME);
}

int CCalcParams::LogCacheSize(int aPrune) const {
    return 60;	// ridiculously large cache size will be cut down to max cache size
}

void CCalcParams::Name(ostream& os) const {
    Out(os);
}

CHeightInfo CCalcParams::MinHeight(int nEmpty) const {
    return CHeightInfo(1, 4, false, nEmpty);
}

CCalcParams* CCalcParams::NewFromString(const string& sCalcParams) {
    char c;
    int nMinutesOrDepth, nEmptyMinSolve;
    CCalcParams* pcp;
    istringstream is(sCalcParams);

    pcp=NULL;
    if (is >> c) {
    	nMinutesOrDepth=15;
    	is >> nMinutesOrDepth;

    	switch(c) {
    	case 'f': pcp=new CCalcParamsFixedHeight(CHeightInfo(nMinutesOrDepth,4,false)); break;
    	case 's': pcp=new CCalcParamsStandard(nMinutesOrDepth); break;
    	case 't': pcp=new CCalcParamsTurbo(nMinutesOrDepth); break;
    	case 'm': pcp=new CCalcParamsMatchTime(); tMatch=60*nMinutesOrDepth; break;
    	case 'a':
    		nEmptyMinSolve=0;
    		is >> c >> nEmptyMinSolve;
    		pcp=new CCalcParamsAverageTime(nMinutesOrDepth,nEmptyMinSolve);
    		break;
    	}
    }
    if (pcp==NULL) {
    	cerr << "Unable to parse time control parameter " << sCalcParams.c_str() << "\n";
    	exit(-2);
    }

    return pcp;
}

//////////////////////////////////////
// CCalcParamsFixedHeight
//////////////////////////////////////

CCalcParamsFixedHeight::CCalcParamsFixedHeight(CHeightInfo hi) {
    hiMax=hi;
}

void CCalcParamsFixedHeight::SetHeight(CHeightInfo hi) {
    hiMax=hi;
}

int CCalcParamsFixedHeight::LogCacheSize(int aPrune) const {
    if (aPrune)
    	return 17+(hiMax.height-12)/2;	// appropriate for MPC searcher
    else
    	return 7+(hiMax.height*3)/2;	// appropriate for full-width searcher
}

void CCalcParamsFixedHeight::Out(ostream& os) const {
    os << "f" << hiMax.height;
}

CHeightInfo CCalcParamsFixedHeight::MinHeight(int nEmpty) const {
    return hiMax;
}

int CCalcParamsFixedHeight::Strength() const {
    return hiMax.height;
}

//////////////////////////////////////
// CCalcParamsFixedNEmpty
//////////////////////////////////////

CCalcParamsFixedNEmpty::CCalcParamsFixedNEmpty(CHeightInfo hi) {
    hiMax=hi;
}

void CCalcParamsFixedNEmpty::Out(ostream& os) const {
    os << "e" << hiMax.height;
}

CHeightInfo CCalcParamsFixedNEmpty::MinHeight(int nEmpty) const {
    int hSolve=nEmpty-hSolverStart;
    return hiMax+hSolve;
}

int CCalcParamsFixedNEmpty::Strength() const {
    return 20;
}

//////////////////////////////////////
// CCalcParamsStandard
//////////////////////////////////////

CCalcParamsStandard::CCalcParamsStandard(int ahMidgame) {
    hMidgame=ahMidgame;
    CalcHeights();
}

CHeightInfo CCalcParamsStandard::MinHeight(int nEmpty) const {
    int i;

    for (i=0; i<=5 && nEmpty>hWLD[i]; i++);
    switch(i) {
    case 6:
    	return CHeightInfo(hMidgame, 4, false, nEmpty);
    case 0:
    	return CHeightInfo(nEmpty-hSolverStart, 0, nEmpty>hWLD[i]-4, nEmpty);
    default:
    	return CHeightInfo(nEmpty-hSolverStart, i, true, nEmpty);
    }
}

void CCalcParamsStandard::CalcHeights() {
    int i;
    // cIncrease = ln(time to depth D+1/time to depth D)
    const double cIncrease[6]= { 0.738, 0.601, 0.549, 0.495, 0.438, 0.400 };
    const double cIncreaseMidgame = 0.500;

    // times are roughly equal at depth 8
    for (i=0; i<=5; i++)
    	hWLD[i]=int(15+(hMidgame-6)*cIncreaseMidgame/cIncrease[i]);

    // increase solve height since we won't have to calculate a deviation
    // check that heights are still in order
    hWLD[0]++;
    for (i=1; i<=5; i++) {
    	if (hWLD[i]<hWLD[0])
    		hWLD[i]=hWLD[0];
    }

    // above ~26 empties, time to reach probable solve levels 5 and 4 are dominated
    //	by the midgame search, so they take about the same amount of time. Therefore
    //	set heights equal
    if (hWLD[5]>26) {
    	if (hWLD[4]>=26)
    		hWLD[5]=hWLD[4];
    	else
    		hWLD[5]=26;
    }

    extern int nSolvePct[6];

    cout << "---- Heights ----\n";
    cout << "midgame : " << hMidgame << "\n";
    for (i=0; i<=5; i++)
    	cout << setw(3) << nSolvePct[i] << "% WLD: " << hWLD[i] << "\n";
    cout << "\n";
}

int CCalcParamsStandard::LogCacheSize(int aPrune) const {
    if (aPrune)
    	return 17+(hMidgame-12)/2;	// appropriate for MPC searcher
    else
    	return 7+(hMidgame*3)/2;	// appropriate for full-width searcher
}

void CCalcParamsStandard::Out(ostream& os) const {
    os << "s" << hMidgame;
}

void CCalcParamsStandard::Name(ostream& os) const {
    switch(hMidgame) {
#if !defined(EXTERNAL)
    case  2: os << "pamphlet"; break;
    case  8: os << "leaflet"; break;
    case 12: os << "booklet"; break;
#endif
    default: Out(os);
    }
}

int CCalcParamsStandard::Strength() const {
    return hMidgame;
}

//////////////////////////////////////
// CCalcParamsTurbo
//////////////////////////////////////

CCalcParamsTurbo::CCalcParamsTurbo(int ahMidgame) : CCalcParamsStandard(ahMidgame+4) {
    hMidgame=ahMidgame;
}

void CCalcParamsTurbo::Out(ostream& os) const {
    os << "t" << hMidgame;
}

void CCalcParamsTurbo::Name(ostream& os) const {
    switch(hMidgame) {
    case 12: os << "booklet+"; break;
    default: Out(os);
    }
}

int CCalcParamsTurbo::Strength() const {
    return hMidgame+4;
}



//////////////////////////////////////
// CCalcParamsAverageTime
//////////////////////////////////////

CCalcParamsAverageTime::CCalcParamsAverageTime(double atAverage) {
    tAverage=atAverage;
    nEmptyMinSolve=0;
}

CCalcParamsAverageTime::CCalcParamsAverageTime(double atAverage, int anEmptyMinSolve) {
    tAverage=atAverage;
    nEmptyMinSolve=anEmptyMinSolve;
}

void CCalcParamsAverageTime::SetAbortTime(const CNodeStats& nsStart, int nEmpty, double tRemaining) const {
    ::SetAbortTime(TTypical(nEmpty)*1.5);
}

bool CCalcParamsAverageTime::RoundOK(const CHeightInfo& hi, int nEmpty, double tElapsed, double tRemaining) const {
    if (nEmpty<=nEmptyMinSolve && !hi.ExactProven(nEmpty)) {
    	::ResetAbortTime(INFINITE_TIME);
    	return true;
    }
    ::ResetAbortTime(TTypical(nEmpty)*1.5);
    return (tElapsed<=TTypical(nEmpty)*0.5);
}

double CCalcParamsAverageTime::TTypical(int nEmpty) const {
    return fInBook?tAverage+tAverage:tAverage;
}

int CCalcParamsAverageTime::LogCacheSize(int aPrune) const {
    return int(log(dNPS*dGHz*tAverage*0.5)/log(2.0));
}

void CCalcParamsAverageTime::Out(ostream& os) const {
    os << "a" << tAverage;
    if (nEmptyMinSolve)
    	os << ";" << nEmptyMinSolve;
}

int CCalcParamsAverageTime::Strength() const {
    return LogCacheSize(4)*2-20;
}

//////////////////////////////////////
// CCalcParamsMatchTime
//////////////////////////////////////

void CCalcParamsMatchTime::SetAbortTime(const CNodeStats& nsStart, int nEmpty, double tRemaining) const {
    ::SetAbortTime(std::min(TTypical(nEmpty, tRemaining)*2.0,tRemaining*0.5));
}

bool CCalcParamsMatchTime::RoundOK(const CHeightInfo& hi, int nEmpty, double tElapsed, double tRemaining) const {
    double tt = TTypical(nEmpty, tRemaining);
    double tStop=tt*0.5;
    double tStopSpecial=tt*.3;

    if (hi.WldProven(nEmpty)) {
    	if (tElapsed>tStopSpecial && tElapsed<=tStop && false)
    		cout << "special stop criterion for WLD round\n";
    	return tElapsed<=tStopSpecial;
    }
    else
    	return tElapsed<=tStop;
}

double CCalcParamsMatchTime::TTypical(int nEmpty, double tRemaining) const {
    double t;

    // subtract buffer for clearing cache
    tRemaining-=nEmpty*tSetStale;

    if (tRemaining<=0)
    	t=2;
    else if (nEmpty>=24)
    	t=tRemaining*2/(nEmpty-20);
    else
    	t=tRemaining*0.5;

    return fInBook?t+t:t;
}

void CCalcParamsMatchTime::Out(ostream& os) const {
    os << "m";
}

void CCalcParamsMatchTime::Name(ostream& os) const {
    os << "ntest";
}

int CCalcParamsMatchTime::Strength() const {
    return 20;
}

