// Copyright Chris Welty
//  All Rights Reserved

// book header file

#pragma once

#ifndef H_Book
#define H_Book

#include <string>
#include <map>
#include <iostream>
#include <vector>
#include "../n64/utils.h"

#include "BitBoard.h"
#include "QPosition.h"
#include "Moves.h"
#include "MVK.h"
#include "Store.h"

class CBookData;

class CBoni {
public:
    CBoni();

    CValue blackBonus;	// add to black/subtract from white for a black win
    CValue drawBonus;	// add to black/subtract from white for a draw
    CValue whiteBonus;	// add to black/subtract from white for a white win

    bool operator==(const CBoni& b);
    bool operator!=(const CBoni& b);
};

std::istream& operator>>(std::istream& is, CBoni& boni);

//enum TSolved { kUnknown, kLoss, kDraw, kWin };

//! CBookValue contains evaluations of the position.
//!
//! vHeuristic is the best guess as to the value of the position with perfect play, with no bonus for wins or losses.
//! vMover and vOpponent are the value of the position if proven wins get a bonus of +100 and proven losses a bonus of -100 discs.
//! draws are scored as +100 for vMover and -100 for vOpponent.
class CBookValue {
public:
    CValueCompact vHeuristic, vMover, vOpponent;

    CBookValue() : vHeuristic(0), vMover(0), vOpponent(0), fSet(false), fAssigned(false), fWldProven(false) {}
    // setting v values
    void Clear();
    void SetLeaf(CValue v, bool afWLDSolved);
    void SetBranch(const CBookValue& valueNew);
    void SetWldProven(bool fWldProven);

    // assignment (assign values to black and white)
    void AssignLeaf(const CBoni& boni);
    void AssignBranch();
    void Deassign();

    // merging together
    void MergeTerminalValue(CValue vTerminal, const CBoni& boni);
    void MinValues();
    void Merge(const CBookValue& sbv, int pass);

    // information
    bool Win() const;
    bool Draw() const;
    bool Loss() const;
    bool IsProven() const;
    bool IsAssigned() const;
    bool IsSetAndAssigned() const;
    CValue GameValue(int vContempt, int nPass) const;

    // I/O
    void Out(std::ostream& os, bool fReverse=0) const;

    bool operator!=(const CBookValue& b) const;

protected:
    bool fSet;			// true if v has been set
    bool fAssigned;		// true if black and white values have been assigned
    bool fWldProven;	//!< true if this node is WLD-proven or exact-proven ("proven" means @100%)

    char SolvedChar() const;
};

inline std::ostream& operator<<(std::ostream& os, const CBookValue& bv) { bv.Out(os); return os; };

inline bool CBookValue::IsAssigned() const { return fAssigned;}
inline bool CBookValue::IsSetAndAssigned() const { return fSet && fAssigned;}
inline void CBookValue::SetWldProven(bool afWldProven) { fWldProven=afWldProven; }

//! CBookData contains the information about a position: CHeightInfo, CBookValue, number of games, etc.
class CBookData {
public:
    CBookData();
    //CBookData(CHeightInfo ahi, CValue av, CValue aCutoff);

    // update routines
    bool IncreaseHeight(const CHeightInfoX& hixNew);
    void StoreRoot(CHeightInfoX hix, CValue value, CValue vCutoff, const CBoni& boni);
    void StoreLeaf(const CHeightInfoX& hix, CValue value, const CBoni& boni);

    // correction routines
    void AllSubnodesInBook();
    void AssignBranchValues(const CBookValue& valuesNew);
    void IncrementGameCount(int iGameType);
    void UpgradeToBranch();
    void CorrectBranchness();

    // Information
    CValue Cutoff() const { return cutoff; }
    const CHeightInfo& Hi() const;
    const CBookValue& Values() const;

    bool IsMoreImportantThan(const CBookData& bd2) const;

    void Out(std::ostream& os, bool fReverse=0) const;

    bool IsLeaf() const;
    bool IsBranch() const;
    bool IsUleaf() const;
    bool IsProven() const;

    int GameCount() const;

    // these are here for a very bad reason, don't use them
    bool IsRoot() const;
    void SetRoot(bool fRoot);

    bool operator!=(const CBookData& b) const;

protected:
    CHeightInfo hi;
    CValue cutoff;
    CBookValue values;
    u4 nGames[2];

    bool fRoot:1;    // true if has been the root of a search tree => branch or solved

    bool m_fWritten:1;    // used while writing the book to determine whether the node has already been written
    void SetWritten(bool fWritten=true) { m_fWritten=fWritten; };
    bool GetWritten() const { return m_fWritten; };


    enum TLeafness { kULeaf, kBranch, kSolved } ;
    TLeafness Leafness() const;

    friend class CBook;
    friend class CSmartBook;
    friend class CBookDataCompressed;
};


inline std::ostream& operator<<(std::ostream& os, const CBookData& bd) { bd.Out(os); return os; }

//! Information about a book subnode.
//!
//! The value is from the parent's point of view.
//! pass is 1 if the move leads to a position where the opponent must pass. In this case the subnode value
//! is from the parent's mover's point of view, otherwise the subnode values will be from the parent's opponent POV.
class CMVPS : public CMoveValue {
public:
    int pass;
    const CBookData* sbd;
    void Out(std::ostream& os, u4 iLevel, bool fBlackMove) const;
};

class CBook;
struct CWindow;
class COsGame;
class CSearchInfo;

const int nEmptyBookMax=NN-3;

//! A book contains a set of positions and the value of those positions.
//! It is basically a map<CMinimalReflection, CBookData> along with routines for access and I/O.
class CBook {
public:
    CBook();
    CBook(const char* filename, std::ostream* os=&std::cerr);
    CBook(std::auto_ptr<Store> store, std::ostream* os = &std::cerr);
    ~CBook();

    //! \name Store info in book
    //! \{
    void StoreLeaf(const CMinimalReflection& mr,  CHeightInfoX hix, CValue value);
    void StoreRoot(const CMinimalReflection& mr, CHeightInfoX hix, CValue value, CValue vCutoff);
    void StoreIterativeResult(const CBitBoard& bb, int nBest, int nEvalOld,int nEvalNew, const std::vector<CMoveValue>& mvsOld, 
    	const std::vector<CMoveValue>& mvsNew, const CMVK& mvk, bool fFull, bool fAddUnproven);
    void StoreSubposition(CQPosition pos, CMoveValue mv, CHeightInfoX hix);
    //! \}

    //! \name Checking the book during search
    //! \{
    bool Load(const CMinimalReflection& mr, CHeightInfo hi, CValue alpha, CValue beta, CValue& value) const;
    bool Load(const CMinimalReflection& mr, CHeightInfo hi, CValue alpha, CValue beta, CValue& value, int nEmpty) const;
    //! \}

    //! \name Information about specific positions
    //! \{
    void GetAndPrintSubnodes(const CQPosition& pos, int vContempt, u4 iPrintLevel) const;
    void GetSubnodes(const CQPosition& pos, int vContempt, std::vector<CMVPS>& mvs) const;
    void PrintSubnodes(u4 iPrintLevel, const std::vector<CMVPS>& mvs, bool fBlackMove) const;
    bool GetRandomMove(const CQPosition& pos, const CSearchInfo& si, CMVK& mvk, bool fPassBefore) const;
    bool GetEdmundMove(const CQPosition& pos, CMoveValue& mv, bool fPrintEdmund, int iEdmund) const;
    const CBookData* FindData(const CMinimalReflection& mr) const;
    const CBookData* FindData(const CMinimalReflection& mr, int nEmpty) const;
    void PrintDrawTree(CQPosition pos) const;
    void PrintDrawTree(CQPosition pos, const std::string& pre, std::map<CMinimalReflection, std::string>& transpositions) const;
    bool FindQuestionableNode(CQPosition& questionablePosition, bool& drawToMover, const CQPosition& initalPosition, i2 drawCutoff, i2 deviationCutoff);
    bool FindQuestionableNode(CQPosition& questionablePosition, bool& drawToMover, const CQPosition& initalPosition, i2 drawCutoff, i2 deviationCutoff, int maxDepth);
    static bool IsQuestionable(bool& drawToMover, i2 drawCutoff, i2 deviationCutoff, const CBookValue& bookValue);
    //! \}

    //! \name General information about the book
    //! \{
    int NEmptyMin() const;
    bool IsAltered() const { return m_fAltered; };
    int Size() const;
    int NEdmundNodes(int iEdmund) const;
    bool IsInBook(const COsGame& game) const;
    time_t TLastWrite() const { return m_tLastWrite; };
    bool HasFile() const { return m_store.get()!=NULL; };
    int HashErr() const { return m_nHashErr; };
    const CBoni& Boni() const;
    //! \}

    // save data to file
    void Mirror();

    //! \name Correction and assignment
    //! \{
    void NegamaxAll();
    void NegamaxGame(const COsGame& game);
    void MergeBook(const char* fn);
    void Nuke(int nEmptyMin);
    //! \}

    // testing
    static void TestIO();
    void TestMyIO(std::vector<char>* contents = NULL);
    bool operator==(const CBook& b) const;

    //! Dangerous
    void RemoveTree(const CMinimalReflection& mr);
    
    static int s_iBookWriteFormat;


protected:
    std::map<CMinimalReflection,CBookData> entries[nEmptyBookMax];
    bool m_fAltered;	//!< true if book needs to be stored. Reset on read and write, set on calling any nonconst public function.

    CBookData* FindNonconstData(const CMinimalReflection& mr);
    CBookData* FindNonconstData(const CMinimalReflection& mr, int nEmpty);

private:
    int m_nEmptyMin;
    std::auto_ptr<Store> m_store; //!< location to read/write book, or NULL if the book is not stored
    CBoni m_boni;
    time_t m_tLastWrite;
    int m_nHashErr;
    int m_iBookFormat;

    void NegamaxPosition(CQPosition pos);
    void NegamaxPosition(CQPosition pos, CBookData* bd);
    void MaxSubnodeValues(const CQPosition& pos, CBookData* bd,
    						 CBookValue& bv, CBookValue& bvUleaf,
    						 CMoves& movesNonbook);

    void WriteErr() const;
    void Write();
    void WriteVersion1(Writer& out);
    void WriteVersion2(Writer& out);
    void WriteTree2(Writer& out, const CMinimalReflection& mr, CBookData& bd);

    void Read();
    void ReadErr();
    void ReadAndCheckHash(Reader& in);
    void ReadVersion1(Reader& in);
    void ReadVersion2(Reader& in);
    void ReadTree2(Reader& in, const CMinimalReflection& mr);

    std::ostream* m_os; //!< location for error and info messages
};

//inline int CBook::MinHeight() const {return minHeight;}
inline const CBoni& CBook::Boni() const { return m_boni;}

inline void CBookValue::MinValues() {
    vHeuristic=vMover=vOpponent=-kInfinity;
    fWldProven=false;
}

inline bool CBookValue::Win() const {
    return fWldProven && vHeuristic>0;
}

inline bool CBookValue::Draw() const {
    return fWldProven && vHeuristic==0;
}

inline bool CBookValue::Loss() const {
    return fWldProven && vHeuristic<0;
}
#ifdef _MSC_VER
#pragma warning(disable: 4800) 
#endif
//! Return true if the node is proven WLD or proven exact ("Proven" means 100%)
inline bool CBookValue::IsProven() const {
    return fWldProven;
}
#ifdef _MSC_VER
#pragma warning(default: 4800)
#endif

inline const CHeightInfo& CBookData::Hi() const {
    return hi;
}

inline const CBookValue& CBookData::Values() const {
    return values;
}

inline bool CBookData::IsLeaf() const {
    return !IsBranch();
}

inline int CBookData::GameCount() const {
    return nGames[0]+nGames[1];
}

inline bool CBookData::IsBranch() const {
    return fRoot && !IsProven();
}

inline bool CBookData::IsUleaf() const {
    return !fRoot && !IsProven();
}

//! Return true if the node is proven WLD or proven exact ("Proven" means 100%)
inline bool CBookData::IsProven() const {
    return values.IsProven();
}

inline bool CBookData::IsRoot() const {
    return fRoot;
}

inline void CBookData::SetRoot(bool afRoot) {
    fRoot=afRoot;
}

inline bool CBoni::operator==(const CBoni& b) {
    return blackBonus==b.blackBonus && whiteBonus==b.whiteBonus && drawBonus==b.drawBonus;
}

inline CBoni::CBoni(): blackBonus(kMaxBonus), drawBonus(kMaxBonus), whiteBonus(-kMaxBonus) {
}

inline bool CBoni::operator!=(const CBoni& b) {
    return blackBonus!=b.blackBonus || whiteBonus!=b.whiteBonus || drawBonus!=b.drawBonus;
}

inline std::istream& operator>>(std::istream& is, CBoni& boni) {
    return is >> boni.blackBonus >> boni.drawBonus >> boni.whiteBonus;
}

void TestBook();

#endif // H_Book
