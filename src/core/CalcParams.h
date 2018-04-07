// Copyright Chris Welty
//  All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.

#pragma once

#include <iostream>
#include "../n64/utils.h"
#include "NodeStats.h"
#include "HeightInfo.h"

#ifndef _H_TIMING
#define _H_TIMING

//////////////////////////////
// global timing parameters
//////////////////////////////

extern double tMatch;    // total time available for a match
extern double dGHz;    // processor speed
const double dNPS=400000;    // approx midgame nodes per second on a 1GHz machine
extern double tSetStale;

// maximum amount of memory to allocate to cache table.
//    should be a bit less than the total RAM on the computer.
extern int maxCacheMem;

void SetMatchTime(double atMatch);

///////////////////////////////////////////////
// CalcParams class
///////////////////////////////////////////////

class CCalcParams {
public:
    CCalcParams();
    virtual ~CCalcParams() {}
    // new functioms
    virtual void SetAbortTime(const CNodeStats& nsStart, int nEmpty, double tRemaining) const;
    virtual bool RoundOK(const CHeightInfo& hi, int nEmpty, double tElapsed, double tRemaining) const;
    virtual int LogCacheSize(int aPrune) const;
    virtual void Out(std::ostream& os) const = 0;
    virtual void Name(std::ostream& os) const;
    virtual int Strength() const=0;
    virtual CHeightInfo MinHeight(int nEmpty) const;

    bool fInBook;

    static CCalcParams* NewFromString(const std::string& sCalcParams);
};

inline std::ostream& operator<<(std::ostream& os, const CCalcParams& pcp) { pcp.Out(os); return os; }
inline CCalcParams::CCalcParams() { fInBook=false; }

class CCalcParamsFixedHeight : public CCalcParams {
public:
    CCalcParamsFixedHeight(CHeightInfo hi);

    virtual void SetHeight(CHeightInfo hi);
    virtual int LogCacheSize(int aPrune) const;
    virtual void Out(std::ostream& os) const;
    virtual CHeightInfo MinHeight(int nEmpty) const;
    virtual int Strength() const;

protected:
    CHeightInfo hiMax;
};

class CCalcParamsFixedNEmpty : public CCalcParams {
public:
    CCalcParamsFixedNEmpty(CHeightInfo hi);

    virtual void Out(std::ostream& os) const;
    virtual CHeightInfo MinHeight(int nEmpty) const;
    virtual int Strength() const;

protected:
    CHeightInfo hiMax;
};

class CCalcParamsStandard: public CCalcParams {
public:
    CCalcParamsStandard(int hMidgame);

    int LogCacheSize(int aPrune) const;
    virtual void Out(std::ostream& os) const;
    virtual void Name(std::ostream& os) const;
    virtual CHeightInfo MinHeight(int nEmpty) const;
    virtual int Strength() const;

protected:
    void CalcHeights();
    int hMidgame;
    int hWLD[6];
};

class CCalcParamsTurbo: public CCalcParamsStandard {
public:
    CCalcParamsTurbo(int ahMidgame);
    virtual void Out(std::ostream& os) const;
    virtual void Name(std::ostream& os) const;
    int Strength() const;
};

class CCalcParamsAverageTime: public CCalcParams {
public:
    CCalcParamsAverageTime(double tAverage);
    CCalcParamsAverageTime(double tAverage, int nEmptyMinSolve);

    virtual void SetAbortTime(const CNodeStats& nsStart, int nEmpty, double tRemaining) const;
    virtual bool RoundOK(const CHeightInfo& hi, int nEmpty, double tElapsed, double tRemaining) const;
    virtual int LogCacheSize(int aPrune) const;
    virtual void Out(std::ostream& os) const;
    virtual int Strength() const;

protected:
    virtual double TTypical(int nEmpty) const;
    double tAverage;
    int nEmptyMinSolve;
};

class CCalcParamsMatchTime: public CCalcParams {
public:
    virtual void SetAbortTime(const CNodeStats& nsStart, int nEmpty, double tRemaining) const;
    virtual bool RoundOK(const CHeightInfo& hi, int nEmpty, double tElapsed, double tRemaining) const;
    virtual void Out(std::ostream& os) const;
    virtual void Name(std::ostream& os) const;
    virtual int Strength() const;

protected:
    double TTypical(int nEmpty, double tRemaining) const;
};

#endif // (defined _H_TIMING)
