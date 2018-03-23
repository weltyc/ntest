// Copyright 2004 Chris Welty
//  All Rights Reserved

#pragma once

#include "core/Book.h"

class CPlayerComputer;
class CCalcParams;

//! A book which can update itself by doing searches. You need to call SetComputer() before you can use any
//! of the update routines.
//!
//! \todo make SetComputer() part of the constructor.
class CSmartBook:public CBook {
public:
    CSmartBook(const char* filename, std::ostream& os=std::cerr);

    void SetComputer(CPlayerComputer* pComputer);
    CHeightInfo HiMin(int nEmpty) const;

    //! \name Book library
    //! \{
    static CSmartBook* FindBook(char evalType, char coeffSet, CCalcParams* pcp);
    static void Clean();
    //! \}

    //! \name Modification
    //! \{
    void NegamaxAndCorrectAll(int& nSearches);
    void CorrectGame(const COsGame& game, int iGameType, int& nSearches, int iEdmund);
    void PlayEdmundGames(int iEdmund);
    //! \}

private:
    void NegamaxAndCorrectPosition(CQPosition pos, CBookData* bd, int& nSearches);
    void IncreaseHeight(CQPosition pos, CBookData* bd, CHeightInfo hi, int& nSearches);
    CPlayerComputer *m_pComputer;
    void PlayEdmundGame(const CQPosition& pos, CMoveValue& mv);
    void MaxAndCorrectSubnodeValues(const CQPosition& pos, CBookData* bd,
    						CBookValue& bv, CBookValue& bvUleaf,
    						CMoves& movesNonbook, int& nSearches);

};
