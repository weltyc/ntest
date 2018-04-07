// Copyright Chris Welty
//  All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.

// CEvaluator header file

#pragma once

#include <map>
#include "n64/types.h"
#include "n64/utils.h"

#include "pattern/Patterns.h"

#include "Pos2.h"

///////////////////////////////
// pattern info
///////////////////////////////

// how to convert pot mob to an index
const int potMobAdd=0;
const int potMobShift=1;


//////////////////////////////////
// Evaluators
/////////////////////////////////
class CEvaluatorInfo {
public:
    char evaluatorType, coeffSet;
};

inline bool operator<(const CEvaluatorInfo&a, const CEvaluatorInfo&b) {
    if (a.evaluatorType==b.evaluatorType)
    	return a.coeffSet<b.coeffSet;
    else return a.evaluatorType<b.evaluatorType;
}

//! Information needed to evaluate a position
class CEvaluator {
public:
    static CEvaluator* FindEvaluator(char evaluatorType, char coeffSet);

    // pos2 evaluators
    CValue EvalMobs(const Pos2& pos, u4 nMovesPlayer, u4 nMovesOpponent) const;

    ~CEvaluator();

protected:
    static std::string FNBase(char evaluatorType, char coeffSet);

private:
    CEvaluator(const std::string& fnBase, int nFiles);
    TCoeff *coeffs[60];
    TCoeff *pcoeffs[60];
    int	nEmptyToSet[60];
    u4  fParameters[60];
    int nSets;
};

extern int coeffStartsJ[nMapsJ];
extern int nCoeffsJ;
extern TCoeff *mobsJ;
