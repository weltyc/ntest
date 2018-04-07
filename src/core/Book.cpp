// Copyright Chris Welty
//  All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.

#include <cassert>
#include <errno.h>
#include <stdio.h>
#include <string>
#include <time.h>
#include <algorithm>
#include <sstream>
#include <iomanip>
#include "../odk/OsObjects.h"

#include "Moves.h"
#include "QPosition.h"
#include "options.h"
#include "Book.h"
#include "Store.h"

using namespace std;

////////////////////////////////////////////////////////////
// CBookValue
////////////////////////////////////////////////////////////

void CBookValue::Clear() {
    vHeuristic = vMover = vOpponent = 0;
    fWldProven=fSet=fAssigned=false;
}

void CBookValue::SetLeaf(CValue av, bool afWldProven) {
    vHeuristic=av;
    fWldProven=afWldProven;
    fSet=true;
}

void CBookValue::SetBranch(const CBookValue& valueNew) {
    vHeuristic=valueNew.vHeuristic;
    vMover=valueNew.vMover;
    vOpponent=valueNew.vOpponent;
    fSet=true;
}    

// Assign - assign a value to a leaf book node
// inputs:
//    boni - winning bonuses
void CBookValue::AssignLeaf(const CBoni& boni) {
    //assert(fSet);;

    vMover=vHeuristic;
    vOpponent=vHeuristic;
    if (Win()) {
    	vMover+=boni.blackBonus;
    	vOpponent-=boni.whiteBonus;
    }
    else if (Draw()) {
    	vMover+=boni.drawBonus;
    	vOpponent-=boni.drawBonus;
    }
    else if (Loss()) {
    	vMover+=boni.whiteBonus;
    	vOpponent-=boni.blackBonus;
    }
    fAssigned=true;
}

void CBookValue::AssignBranch() {
    assert(fSet);
    fAssigned=true;
}

void CBookValue::Deassign() {
    fAssigned=false;
}

char CBookValue::SolvedChar() const {
    if (!fWldProven)
    	return '?';
    else if (vHeuristic==0)
    	return 'D';
    else return vHeuristic>0?'W':'L';
}

void CBookValue::Out(ostream& os, bool fReverse) const {
    if (fSet) {
    	if (fReverse) {
    		os << std::setw(5) << -vHeuristic << SolvedChar() << " <";
    		if (fAssigned)
    			os << std::setw(5) << -vOpponent << ":" << std::setw(5) << -vMover;
    		else
    			os << "Unassigned";
    		os << ">";
    	}
    	else {
    		os << std::setw(5) << vHeuristic << SolvedChar() << " <";
    		if (fAssigned)
    			os << std::setw(5) << vMover << ":" << std::setw(5) << vOpponent;
    		else
    			os << "Unassigned";
    		os << ">";
    	}
    }
    else
    	os << "No values";
}

//! Return the value for use in choosing a move in a game.
//!
//! The value is POV parent's mover (i.e. adjusted for passes) and uses the contempt factor.
//!
//! \param vContempt - contempt factor, POV parent's mover
CValue CBookValue::GameValue(int vContempt, int nPass) const {
    CValue vUpperBound, vLowerBound;

    // calculate upper and lower possible values for draw
    if (vMover<vOpponent) {
    	assert(0);
    	vUpperBound=vOpponent;
    	vLowerBound=vMover;
    }
    else {
    	vUpperBound=vMover;
    	vLowerBound=vOpponent;
    }

    // adjust contempt factor for passes
    if (!nPass) {
    	vContempt=-vContempt;
    	CValue temp=-vLowerBound;
    	vLowerBound=-vUpperBound;
    	vUpperBound=temp;
    }

    // calculate value given contempt factor
    if (vContempt>vUpperBound)
    	return vUpperBound;
    else if (vContempt<vLowerBound)
    	return vLowerBound;
    else
    	return vContempt;
}


// Merge - combine two CValues
// inputs:
//    maxval - the maximum so far
//    newval - the new value to be combined
// outputs:
//    maxval - the greater of maxval and newval
inline void ValueMerge(CValue& maxval, CValue newval) {
    if (maxval<newval)
    	maxval=newval;
}
inline void ValueMerge(CValueCompact& maxval, CValue newval) {
    if (maxval<newval)
    	maxval=newval;
}

// Merge - updates a node's values given a subnode value
// inputs:
//    sub - the value of the subnode
//    pass - nonzero if the subnode had a pass
void CBookValue::Merge(const CBookValue& sbd, int pass) {
    if (pass) {
    	ValueMerge(vMover, sbd.vMover);
    	ValueMerge(vOpponent, sbd.vOpponent);
    	ValueMerge(vHeuristic, sbd.vHeuristic);
    }
    else {
    	ValueMerge(vMover, -sbd.vOpponent);
    	ValueMerge(vOpponent, -sbd.vMover);
    	ValueMerge(vHeuristic, -sbd.vHeuristic);
    }
}

// MergeTerminalValue - updates a node's margins given a subnode's terminal value
//    It is assumed that there was a pass before calculating vTerminal
// inputs:
//    terminalValue - the child value of the terminal subnode
void CBookValue::MergeTerminalValue(CValue vTerminal, const CBoni& boni) {
    CBookValue bv;

    bv.vHeuristic=vTerminal;
    bv.fWldProven=true;
    bv.AssignLeaf(boni);
    Merge(bv, 1);
}

bool CBookValue::operator!=(const CBookValue& b) const  {
    return b.vHeuristic!=vHeuristic || b.vMover!=vMover || b.vOpponent!=vOpponent
    	|| b.fAssigned!=fAssigned || b.fSet!=fSet || b.fWldProven!=fWldProven;
}

////////////////////////////////////////////////////////////
// CBookData
////////////////////////////////////////////////////////////

CBookData::CBookData() {
    hi.Clear();
    nGames[0]=nGames[1]=0;
    cutoff=kInfinity;
    fRoot = false;
    m_fWritten = false;
    values.Clear();
}

//! Increase the height if new height is greater than old height. Return true if we have increased the height.
bool CBookData::IncreaseHeight(const CHeightInfoX& hixNew) {
    bool fIncrease=hixNew>hi;

    if (fIncrease) {
    	hi=hixNew;
    	values.Clear();
    	values.SetWldProven(hixNew.WldProven());
    	cutoff=kInfinity;
    }

    return fIncrease;
}

// Update book data with the result of a search. If hixNew>=hi set the value and the height.
//!
//! Call StoreLeaf() if you have only a value for the node. This works for both solved and unsolved leaf nodes.
//! Call StoreRoot() if you have a value and a cutoff.
void CBookData::StoreLeaf(const CHeightInfoX& hixNew, CValue v, const CBoni& boni) {

    // update the node if the new value is more important
    if (hixNew>=hi) {
    	IncreaseHeight(hixNew);

    	assert(IsLeaf());
    	values.SetLeaf(v, hixNew.WldProven());
    	values.AssignLeaf(boni);
    }
}

//! Update bookdata for a position at the root of a search (i.e. solved node or branch node).
//!
//! The data are only updated if new height >= old height.
//! The value is only set if the data are updated and the node is solved.
void CBookData::StoreRoot(CHeightInfoX hixNew, CValue v,
    					  CValue vCutoff, const CBoni& boni) {

    // update the node if the new value is more important
    fRoot=true;

    if (hixNew>=hi) {
    	bool fIncrease=IncreaseHeight(hixNew);

    	if (IsBranch()) {
    		if (fIncrease || vCutoff<cutoff)
    			cutoff=vCutoff;
    	}
    	else if (hixNew.WldProven()) {
    		values.SetLeaf(v, true);
    		values.AssignLeaf(boni);
    	}
    }
}

void CBookData::AllSubnodesInBook() {
    cutoff=-kInfinity;
}

void CBookData::AssignBranchValues(const CBookValue& valuesNew) {
    values.SetBranch(valuesNew);
    values.AssignBranch();
}

void CBookData::IncrementGameCount(int iGameType) {
    nGames[iGameType]++;
}

void CBookData::CorrectBranchness() {
    if (nGames[0] || nGames[1])
    	UpgradeToBranch();
}

void CBookData::UpgradeToBranch() {
    fRoot=true;
}

void CBookData::Out(ostream& os, bool fReverse) const {
    static char cLeafness[3]= { 'u','b','s' };

    os << cLeafness[Leafness()] << ' ' << hi << " in "
    	<< std::setw(4) << nGames[0] << " + "
    	<< std::setw(4) << nGames[1] << " games: ";

    values.Out(os, fReverse);
    if (IsBranch())
    	os << "; cutoff " << (fReverse?-cutoff:cutoff);
}

CBookData::TLeafness CBookData::Leafness() const {
    if (IsProven())
    	return kSolved;
    else if (IsBranch())
    	return kBranch;
    else
    	return kULeaf;
}

bool CBookData::IsMoreImportantThan(const CBookData& bd2) const {
    if (Leafness()>bd2.Leafness())
    	return true;
    if (Leafness() < bd2.Leafness())
    	return false;
    return hi > bd2.hi;
}

bool CBookData::operator!=(const CBookData& b) const {
    if (IsBranch() && b.cutoff!=cutoff)
    	return true;
    if (b.fRoot!=fRoot)
    	return true;
    if (b.hi!=hi)
    	return true;
    if (b.nGames[0]!=nGames[0] || b.nGames[1]!=nGames[1])
    	return true;
    if (b.values!=values)
    	return true;
    return false;
}

////////////////////////////////////////////////////////////
// CBook
////////////////////////////////////////////////////////////

// hash stuff for double-checking
u4 hash_a,hash_b,hash_c,hash_n;

void HashInit() {
    hash_a=hash_b=hash_c=hash_n=0;
}

void HashLong(u4 x) {
    switch(hash_n++) {
    case 0:
    	hash_a+=x;
    	break;
    case 1:
    	hash_b+=x;
    	break;
    case 2:
    	hash_c+=x;
    	bobMix(hash_a,hash_b,hash_c);
    	hash_n=0;
    	break;
    default:
    	assert(0);
    }
}

void HashChunk(const void* p, size_t size) {
    const u4* p4 = (u4*)p;
    while (size>=4) {
    	HashLong(*p4);
    	p4++;
    	size-=4;
    }
    const u2* p2 = (u2*)p4;
    if (size>=2) {
    	HashLong(*p2);
    	p2++;
    }
    const u1* p1 = (u1*)p2;
    if (size>=1) {
    	HashLong(*p1);
    	p1++;
    }
}

//! Write data to the file and hash the data for error checking.
//!
//! \return value of fwrite(), i.e. 1 if successful and 0 if not
//! \post updates hash values if write was sucessful, no guarantees as to effect on hash if write was unsuccessful.
static size_t HashWrite(const void* data, size_t size, Writer& out) {
    HashChunk(data, size);
    return out.write(data, size, 1);
}

//! Read data from the file and hash the data for error checking
//!
//! \return value of fread(), i.e. 1 if successful and 0 if not
//! \post updates hash values if fread was successful, doesn't if unsuccessful
static size_t HashRead(void* data, size_t size, Reader& in) {
    const size_t result=in.read(data, size, 1);
    if (result)
    	HashChunk(data, size);
    return result;
}

//! Version for writing book. Initialize to the default value.
int CBook::s_iBookWriteFormat=2;

//! \throw an error message
void CBook::ReadErr() {
    assert(0);
    throw std::string("WARNING: BOOK ")+m_store->ToString()+" is damaged, restore a backup.\n";
    _exit(-3);
}

//! Create an empty book
//!
//! Mostly for testing purposes. No file is assigned.
CBook::CBook(): m_fAltered(false), m_nEmptyMin(hSolverStart+1), m_tLastWrite(0), m_nHashErr(0), m_os(0) {
    m_iBookFormat = 2;
}

//! Create a book from a file
//!
//! Writes a warning message to os if
//! - the file doesn't exist
//! - the file can't be opened
//! - the file is empty
//! 
//! Sets the book's filename to NULL (so it won't overwrite the existing book) if the book exists but can't be opened.
//!
//! Support for book version 0 has been eliminated. I believe that no distributed version has ever written this format
//! so it shouldn't be a problem.
//!
//! \throw std::string if the book is corrupt or is a version that we cant read
//! 
//! \param filename file to read from, or "" to to store the book in memory only
//! \param os (Nullable) std::ostream for warning messages.
//! \post comments and errors will be written to os
CBook::CBook(const char* filename, std::ostream* os) : m_fAltered(false), m_nEmptyMin(hSolverStart+1), m_tLastWrite(0), m_nHashErr(0), m_os(os) {
    if (filename) {
    	m_store = std::auto_ptr<Store>(new File(filename));
    	Read();
    }
    else {
    	m_store = std::auto_ptr<Store>(NULL);
        m_iBookFormat = 2;
    }
}

CBook::CBook(std::auto_ptr<Store> store, std::ostream* os) : m_fAltered(false), m_nEmptyMin(hSolverStart+1), m_tLastWrite(0), m_nHashErr(0), m_os(os) {
    m_store = store;
    Read();
}

//! Return the number of positions in the map that have been proven ('proven' means 100% WLD or 100% full-width)
static int CountProvenPositions(const std::map<CMinimalReflection,CBookData>& entries) {
    int count = 0;
    for (std::map<CMinimalReflection,CBookData>::const_iterator it = entries.begin(); it!=entries.end(); it++) {
    	if (it->second.IsProven()) {
    		count++;
    	}
    }
    return count;
}

void CBook::Read() {
    if (m_os) {
    	*m_os << "Loading book " << m_store->ToString() << std::endl;
    }
    try {
    	std::auto_ptr<Reader> in = std::auto_ptr<Reader>(m_store->getReader());
    	if (in->read(&m_iBookFormat, sizeof(m_iBookFormat), 1)==0) {
    		if (m_os) {
    			*m_os << "WARNING: Book " << m_store->ToString() << " is empty\n";
    		}
    	}
    	else {
    		if (m_os) {
    			*m_os << "Loading book " << m_store->ToString() << " (format " << m_iBookFormat << ")...";
    		}

    		switch(m_iBookFormat) {
    			case 1: ReadVersion1(*in); break;
    			case 2: ReadVersion2(*in); break;
    			default:throw std::string("This program can only read book formats 1 and 2");
    		}

    		if (m_os) {
    			if (m_nHashErr) {
    				std::cout << "Book appears to be corrupt\n";
    			}
    			*m_os << "Done\n";
    		}
    	}
    }
    catch (IOException e) {
    	switch(e.m_errno) {
    	case ENOENT:
    		if (m_os) {
    			*m_os << "WARNING: Book " << m_store->ToString() << " doesn't exist, will be created when saving book\n";
    		}
    		break;
    	default:
    		if (m_os) {
    			*m_os << "WARNING: Book " << m_store->ToString() << " is unavailable, book will start out empty and will not be saved. (errno " << errno << ")\n";
    		}
    		m_store=std::auto_ptr<Store>(NULL);
    	}
    }
    if (m_os) {
    	*m_os << "Done loading book " << m_store->ToString() << std::endl;
    	*m_os << "Book contains " << entries[32].size() << " entries at 32 empty, of which "
    		<< CountProvenPositions(entries[32]) << " have been solved at 100% WLD or 100%" << std::endl;
    }

}

//! Destroy the book. Write a message to the output stream, if there is one
CBook::~CBook() {
    if (m_os && m_store.get()!=NULL) {
    	*m_os << "Closing book " << m_store->ToString() << "...";
    }
    Write();
    if (m_os) {
    	*m_os << "Done\n";
    }
}

//! Return the minimum number of empties to be stored in the book.
//!
//! If pos.NEmpty() >= NEmptyMin() then pos can be stored in the book.
int CBook::NEmptyMin()  const {
    return m_nEmptyMin;
}

//! Eliminate all entries in the book with fewer than nEmptyMin empties
void CBook::Nuke(int nEmptyMin) {
    for (int nEmpty=0; nEmpty<nEmptyMin; nEmpty++) {
    	entries[nEmpty].clear();
    }
    m_fAltered=true;
}

//! Mirror the book to disk - Write it if it hasn't been written in the last 10 minutes.
void CBook::Mirror() {
    if (time(0)>=m_tLastWrite+10*60)
    	Write();
}

//! Save the book to the file named m_bookname, unless m_bookname is empty in which case don't write.
void CBook::Write() {
    if (!HasFile()) {
    	return;
    }

    if (m_fAltered || m_iBookFormat!=s_iBookWriteFormat) {
    	if (m_os) {
    		*m_os << "Writing book\n";
    	}
    	try {
    		std::auto_ptr<Writer> out = std::auto_ptr<Writer>(m_store->getWriter());
    		switch(s_iBookWriteFormat) {
    			case 2:
    				WriteVersion2(*out);
    				break;
    			case 1:
    			default:
    				WriteVersion1(*out);
    				break;
    		}
    	}
    	catch (IOException ex) {
    		if (m_os) {
    			*m_os << "Error writing book : " << ex.m_description;
    		}
    	}
    	m_fAltered=false;
    }
    else {
    	if (m_os) {
    		*m_os << "Not writing, not altered\n";
    	}
    }
}

void CBook::WriteErr() const {
    if (m_os) {
    	*m_os << "WARNING: Error writing to book file " << m_store->ToString() << " (errno " << errno << ")\n";
    }
}

void CBook::WriteVersion1(Writer& out) {
    map<CMinimalReflection, CBookData>::const_iterator i;
    int nEmpties;
    int nSize=Size(), nVersion=1;

    if (!out.write(&nVersion, sizeof(nVersion), 1) || !out.write(&nSize, sizeof(nSize), 1)) {
    	WriteErr();
    }
    else {
    	HashInit();
    	for (nEmpties=nEmptyBookMax-1; nEmpties>=0; nEmpties--) {
    		for (i=entries[nEmpties].begin(); i!=entries[nEmpties].end(); i++) {
    			if (!(HashWrite(&((*i).first), sizeof(CBitBoard), out) &&
    				HashWrite(&((*i).second), sizeof(CBookData), out))) {
    				WriteErr();
    				return;
    			}
    		}
    	}
    }
    hash_a+=m_nHashErr;
    out.write(&hash_a, sizeof(hash_a), 1);

    m_tLastWrite=time(0);
}

void CBook::ReadVersion1(Reader& in) {
    CBitBoard board;
    CBookData bd;
    int nSize, nRead;

    if (!in.read(&nSize, sizeof(nSize), 1)) {
    	ReadErr();
    }
    HashInit();	// init hash table for detection of corrupt book

    for (nRead=0; nRead<nSize && HashRead(&board, sizeof(board), in) && HashRead(&bd, sizeof(bd), in); nRead++) {
    	int nEmpty=bitCountInt(board.empty);
    	if (nEmpty<nEmptyBookMax) {
    		entries[nEmpty][board]=bd;
    	}
    	else {
            std::cerr << "\nBook error at entry #" << nRead << ": Board with " << nEmpty << " empties detected\n";
            board.Print(true);
            std::cerr << bd << "\n";
    		ReadErr();
    	}
    }
    if (nRead!=nSize) {
        std::cerr << "Book is corrupt, expected size = " << nRead << ", actual size = " << nSize << " entries\n";
    	ReadErr();
    }
    ReadAndCheckHash(in);
}

void CBook::ReadAndCheckHash(Reader& in) {
    int nHashCheck;
    if (!in.read(&nHashCheck, sizeof(nHashCheck), 1)) {
    	ReadErr();
    }
    m_nHashErr=nHashCheck-hash_a;
    if (m_nHashErr !=0) {
        std::cerr << "Book is corrupt, hash err = " << m_nHashErr << "\n";
        exit(-1);
    }
}

class CBookDataCompressed {
public:
    CBookDataCompressed() { nGames[0] = 0; nGames[1] = 0; flags = 0; v = 0;};
    CBookDataCompressed(const CBookData& bd);
    operator CBookData() const;

private:
    u2 nGames[2];

    enum { kWldSolved=1, kRoot=2, kWld=4, kKnownSolve=8 };
    u2 flags; //!< packed value containing sum of enum flags plus (height<<4)+(iPrune<<10)
    i2 v;
};

CBookDataCompressed::CBookDataCompressed(const CBookData& bd) {
    // heightinfo
    flags=(bd.hi.fWLD?kWld:0)+(bd.hi.fKnownSolve?kKnownSolve:0)+(bd.IsProven()?kWldSolved:0)+(bd.fRoot?kRoot:0);
    flags+=bd.hi.height<<4;
    flags+=static_cast<unsigned int>(bd.hi.iPrune)<<10;

    if (bd.IsBranch())
    	v=bd.cutoff;
    else
    	v=bd.values.vHeuristic;

    nGames[0]=u2(bd.nGames[0]);
    nGames[1]=u2(bd.nGames[1]);
}

CBookDataCompressed::operator CBookData() const {
    CBookData bd;

    // heightinfo
    bd.hi.fWLD=(flags&kWld)!=0;
    bd.hi.fKnownSolve=(flags&kKnownSolve)!=0;
    bd.hi.height=(flags>>4)&63;
    bd.hi.iPrune=(flags>>10);

    bd.values.SetWldProven(flags&kWldSolved);
    bd.fRoot=(flags&kRoot)!=0;
    
    if (bd.IsLeaf()) {
    	bd.values.SetLeaf(v, flags&kWldSolved);
    	bd.cutoff=0;
    }
    else
    	bd.cutoff=v;

    bd.nGames[0]=nGames[0];
    bd.nGames[1]=nGames[1];
    
    return bd;
}

//! Helper function to write the book.
//!
//! For the given position
//! - Write its value
//! - Mark the node written.
//! - Recursively call WriteSubtreeIfInBook2() on all subnodes
//! - write a -1 byte so we know there are no more subnodes.
//!
//! \param fp [in] the file pointer to write to
//! \param pos [in] the current position. Should be a minimal reflection.
//! \param bd [in] Reference to the book data for this position
void CBook::WriteTree2(Writer& out, const CMinimalReflection& mr, CBookData& bd) {
    CBookDataCompressed bdc(bd);
    HashWrite(&bdc, sizeof(bdc), out);
    bd.SetWritten();

    CMoves moves;
    CMove move;
    CQPosition pos(mr, true);
    pos.CalcMovesAndPass(moves);

    while (moves.GetNext(move)) {
    	CQPosition posSub(mr, true);
    	posSub.MakeMove(move);
    	CMinimalReflection mr(posSub.BitBoard());
    	const int nEmpty=mr.NEmpty();
    	map<CMinimalReflection, CBookData>::iterator i=entries[nEmpty].find(mr);
    	if (i!=entries[nEmpty].end()) {
    		CBookData& bd=i->second;
    		if (!bd.GetWritten()) {
    			char sq=move.Square();
    			HashWrite(&sq, 1, out);
    			WriteTree2(out, mr, bd);
    		}
    	}
    }
    char sq=-1;
    HashWrite(&sq, 1, out);
}

//! Write the book in compressed format
//!
//! \param fn [in] filename to write to
//!
//! \post book is written to file or an error message is written to m_os.
//! in case of an error the written book may be corrupt.
//!
//! The format is a list of main trees.
//! Each main tree has a bitboard (starting position) followed by a tree.
//! Each tree has a value for the starting position.
//! Each tree may have subtrees which are denoted by a move byte (tells the move to root of subtree)
//! If a tree has no more subtrees the move byte is -1.
void CBook::WriteVersion2(Writer& out) {
    typedef map<CMinimalReflection, CBookData>::iterator BookIt;

    int nSize=Size(), nVersion=2;

    if (!out.write(&nVersion, sizeof(nVersion), 1) || !out.write(&nSize, sizeof(nSize), 1)) {
    	WriteErr();
    }
    else {
    	HashInit();

        for (int nEmpties=nEmptyBookMax-1; nEmpties>=0; nEmpties--) {
            for (BookIt i=entries[nEmpties].begin(); i!=entries[nEmpties].end(); ++i) {
    			i->second.SetWritten(false);
    		}
    	}
        for (int nEmpties=nEmptyBookMax-1; nEmpties>=0; nEmpties--) {
            for (BookIt i=entries[nEmpties].begin(); i!=entries[nEmpties].end(); ++i) {
    			if (!i->second.GetWritten()) {
    				// write the main tree
    				const CMinimalReflection mr(i->first);
    				assert(!mr.IsImpossible());
    				HashWrite(&mr, sizeof(CBitBoard), out);
    				WriteTree2(out, mr, i->second);
    			}
    		}
    	}
    }

    // write hash to ensure file has not been corrupted
    hash_a+=m_nHashErr;
    out.write(&hash_a, sizeof(hash_a), 1);
    
    m_tLastWrite=time(0);
}

//! Returns the number of elements in the book
int CBook::Size() const {
    size_t size=0;
    for (int i=0; i<nEmptyBookMax; i++) {
    	size+=entries[i].size();
    }
    return int(size);
}

//! Helper function to read the book.
//!
//! For the given position
//! - Read its value
//! - Recursively call ReadSubtreeIfInBook2() for all moves that are -1
//! - When a -1 move comes along there are no more subtrees.
//!
//! \param fp [in] the file pointer to write to
//! \param pos [in] the current position. Must be a minimal reflection!
//! \param bd [in] Reference to the book data for this position
void CBook::ReadTree2(Reader& in, const CMinimalReflection& mr) {
    assert(!mr.IsImpossible());
    CQPosition pos(mr, true);

    // read value
    CBookDataCompressed bdc;
    HashRead(&bdc, sizeof(bdc), in);
    entries[pos.NEmpty()][mr]=CBookData(bdc);

    // read subpositions
    // pass if the current player must
    CMoves moves;
    	assert(!pos.BitBoard().IsImpossible());
    const int pass=pos.CalcMovesAndPass(moves);
    	assert(!pos.BitBoard().IsImpossible());
    if (pass==2)
    	return;

    // read in subtrees.
    char c;
    while (HashRead(&c, 1, in) && c!=-1) {
    	assert(!pos.BitBoard().IsImpossible());
    	CMove move(c);
    	CQPosition subpos(pos);
    	subpos.MakeMove(move);
    	assert(!subpos.BitBoard().IsImpossible());
    	ReadTree2(in, subpos.BitBoard());
    }
}

void CBook::ReadVersion2(Reader& in) {
    CBookDataCompressed bdc;
    int nSize;

    if (!in.read(&nSize, sizeof(nSize), 1))
    	ReadErr();
    HashInit();	// init hash table for detection of corrupt book

    // repeatedly read in main trees
    CBitBoard bb;
    while (Size()<nSize && HashRead(&bb, sizeof(bb), in)==1) {
    	assert(!bb.IsImpossible());
    	ReadTree2(in, bb);
    }

    // compare size to the size data element written at the beginning of the file
    if (nSize!=Size()) {
    	ReadErr();
    }

    // read and check hash
    ReadAndCheckHash(in);

    // Need to negamax the book to return data that was taken out by compression.
    NegamaxAll();

    // NegamaxAll sets m_fAltered. But the book doesn't really need to be saved, so reset the flag
    m_fAltered=false;
}

//! Return the position's book data, or NULL if the position is not in book
//!
//! \param mr Minimal reflection of the position.
//!
//! \note More efficient if you know the number of empties already,
//! otherwise it will be calculated by the routine.
const CBookData* CBook::FindData(const CMinimalReflection& mr) const {
    return FindData(mr, bitCountInt(mr.empty));
}

CBookData* CBook::FindNonconstData(const CMinimalReflection& mr) {
    return FindNonconstData(mr, bitCountInt(mr.empty));
}

const CBookData* CBook::FindData(const CMinimalReflection& mr, int nEmpty) const {
    map<CMinimalReflection, CBookData>::const_iterator i;

    if (nEmpty>=nEmptyBookMax)
    	return 0;
    i=entries[nEmpty].find(mr);
    if (i==entries[nEmpty].end())
    	return 0;
    else {
    	assert((*i).second.Hi().height<=nEmpty);
    	return &((*i).second);
    }
}

CBookData* CBook::FindNonconstData(const CMinimalReflection& mr, int nEmpty) {
    map<CMinimalReflection, CBookData>::iterator i;

    if (nEmpty>=nEmptyBookMax)
    	return 0;
    i=entries[nEmpty].find(mr);
    if (i==entries[nEmpty].end())
    	return 0;
    else {
    	assert((*i).second.Hi().height<=nEmpty);
    	return &((*i).second);
    }
}

bool CBook::Load(const CMinimalReflection& mr, CHeightInfo hi, CValue alpha, CValue beta, CValue& value) const {
    return Load(mr, hi, alpha, beta, value, bitCountInt(mr.empty));
}

bool CBook::Load(const CMinimalReflection& mr, CHeightInfo hi, CValue alpha, CValue beta, CValue& value, int nEmpty) const {
    const CBookData* bd=FindData(mr, nEmpty);

    // no data, return false
    if (bd==NULL)
    	return false;

    // data of height >= full-width search? return value
    if (bd->Hi() >= hi) {
    	value=bd->Values().vHeuristic;
    	return true;
    }

    // data of proper height but WLD only? See if we can return it
    hi.fWLD=true;
    if (bd->Hi() >= hi) {
    	CValue vtmp = bd->Values().vHeuristic;
    	if (beta<=kStoneValue && kStoneValue<=vtmp) {
    		value=kStoneValue;
    		return true;
    	}
    	else if (vtmp<=-kStoneValue && -kStoneValue<=alpha) {
    		value=-kStoneValue;
    		return true;
    	}
    	else if (vtmp==0) {
    		value=0;
    		return true;
    	}
    }

    return false;
}

//////////////////////////////////////////////
// Routines for picking move at random
//////////////////////////////////////////////

//! Output to an ostream.
//!
//! \param iPrintLevel 0: nothing 1:move and values 2:move, value, and subnode information
//! \param fPassBefore: if true, print "PA-" before each move and switch the sign of all values
//!
//! \note if iPrintlevel is 2, '\n' is output at the end; if 1, '\t'.
void CMVPS::Out(ostream& os, u4 iPrintLevel, bool fBlackMove) const {
    if (iPrintLevel) {
    	const CBookValue& values=sbd->Values();
    	int vParentMover, vParentOpponent;
    	if (pass) {
    		vParentMover=values.vMover;
    		vParentOpponent=values.vOpponent;
    	}
    	else {
    		vParentMover=-values.vOpponent;
    		vParentOpponent=-values.vMover;
    	}
    	os << "book " 
    		<< move
    		<< " " << StringFromValuePair(vParentMover, vParentOpponent)
    		<< " " << sbd->GameCount()
    		<< " " << sbd->Hi()
    		<< '\t';

    	if (iPrintLevel>1) {
    		sbd->Out(os, pass!=1);
    		os << '\n';
    	}
    }
}

// move-finding routines
// Pick a move at random
static u4 LeftShift(u4 x, int n) {
    if (n>0)
    	return x<<n;
    else
    	return x>>-n;
}

const u4 nullProb=1<<10;

// probability of picking a node (probs do not sum to 1)
static u4 Probability(u4 loss, int randomShift) {
    u4 ekt;	// energy loss / k*temperature

    ekt=LeftShift(loss,-randomShift);

    // bug in Pentium? 1024>>32 = 1024.
    if (ekt>=32)
    	return 0;
    else
    	return nullProb >> ekt;
}

//! Pick a random move from the list of available moves.
//!
//! \param mvs [in] vector of move information from GetSubnodes()
//! \param chosen [out] chosen move and value
//! \param randomShift [in] book randomness will be 2^randomShift discs.
//! \param fPrintRandomInfo [in] true if we should print information about the choice to std::cout
static void PickRandomMove(vector<CMVPS>& mvs, int randomShift, CMoveValue& chosen, bool fPrintRandomInfo) {
    u4 i, nChoices;
    u4 randUsed, randNumber, loss, probability;

    assert(!mvs.empty());

    // First get cutoff value
    sort(mvs.begin(), mvs.end());

    // sum random weightings
    randUsed=0;
    for (i=0; i<mvs.size(); i++) {
    	loss=mvs[0].value-mvs[i].value;
    	probability=Probability(loss, randomShift);
    	if (probability) {
    		randUsed+=probability;
    	}
    	else
    		break;
    }
    nChoices=i;

    // find random move
    randNumber=u4((double)rand()/(double)(RAND_MAX+1ULL)*randUsed);
    assert(randNumber<randUsed);
    if (randNumber>=randUsed)
    	printf("Error in Negamax.cpp - randomization\n");
    for (i=0; i<mvs.size(); i++) {
    	loss=mvs[0].value-mvs[i].value;
    	probability=Probability(loss, randomShift);
    	if (randNumber<probability)
    		break;
    	else
    		randNumber-=probability;
    }

    if (fPrintRandomInfo)
    	cout << "\nChoosing move " << i+1 << "/" << nChoices << " - " << mvs[i] << "\n";

    chosen = mvs[i];
}

//! Get and all book subnodes of the given position, regardless of whether current node is in book or leaf node.
//!
//! \param pos [in] Position to search for book subnodes
//! \param vContempt [in] Contempt value for calculating subnode values (which are used in sorting)
//! \param mvs [out]  sorted list of moves, values, pass information, and subnode value pointers
void CBook::GetSubnodes(const CQPosition& pos, int vContempt, std::vector<CMVPS>& mvs) const {
    CMove move;
    CMoves moves;
    CMoves submoves;
    int pass;
    CQPosition subpos;
    const CBookData* sbd;
    CMVPS mv;

    pos.CalcMoves(moves);

    // Check subnodes in turn to see if they're in book
    for (move.Set(-1); moves.GetNext(move);) {
    	subpos=pos;
    	subpos.MakeMove(move);
    	pass=subpos.CalcMovesAndPass(submoves);
    	sbd=FindData(subpos.BitBoard());

    	// If subnode is in book, add it to the list.
    	if (sbd) {
    		mv.move=move;
    		mv.value=sbd->Values().GameValue(vContempt, pass);
    		mv.pass=pass;
    		mv.sbd=sbd;
    		mvs.push_back(mv);

    		// correctness checks when debugging
    		// the book bug can happen if a position is searched and put in book, but the game is not
    		// negamaxed. This can happen with the undo command.
    		// In this case it can be fixed either by negamaxing the book or by playing a game through
    		// the bad position.
    		if(!sbd->Values().IsAssigned()) {
    			cout << "============= RED ALERT: BOOK BUG ==========\n";
    			cout << "A subnode of this position\n";
    			pos.Print();
    			cout << " After the move " << mv << " gives the book bug position:\n";
    			subpos.Print();
    			cout << (*sbd);
    			cout << "\n=========== End book bug ==================\n";
    		}
    	}
    }

    // sort the moves
    sort(mvs.begin(), mvs.end());
}

//! Print out the information from a list of subnodes
//!
//! \param iPrintLevel 0: nothing 1:move and value 2:move, value, and subnode information
//! \param fBlackMove: true if the PARENT position has black to move.
//!
//! \note outputs a '\n' at the end if iPrintLevel!=0
void CBook::PrintSubnodes(u4 iPrintLevel, const std::vector<CMVPS>& mvs, bool fBlackMove) const {
    if (iPrintLevel) {
    	vector<CMVPS>::const_iterator i;
    	for (i=mvs.begin(); i!=mvs.end(); i++)
    		i->Out(cout, iPrintLevel, i->pass?fBlackMove:!fBlackMove);
    	cout << '\n';
    }
}

//! Get a list of all book subnodes of the given position, and print them out.
//!
//! They will be printed out in descending order by value using vContempt.
//!
//! \param vContempt [in] contempt value used in assigning values and sorting subnodes.
//! \param iPrintLevel [in] See PrintSubnodes() for a description
void CBook::GetAndPrintSubnodes(const CQPosition& pos, int vContempt, u4 iPrintLevel) const {
    std::vector<CMVPS> mvs;
    GetSubnodes(pos, vContempt, mvs);
    PrintSubnodes(iPrintLevel, mvs, pos.BlackMove());
}

//! Print the draw tree from this position
void CBook::PrintDrawTree(CQPosition pos) const {
    std::map<CMinimalReflection, std::string> transpositions;
    PrintDrawTree(pos, "", transpositions);
}

//! Print the draw tree from this position with the specified moves printed before
//!
//! \param pre string containing moves before the position.
void CBook::PrintDrawTree(CQPosition pos, const std::string& pre, std::map<CMinimalReflection, std::string>& transpositions) const {
    // check transpositions. If a transposition, output that fact; otherwise add to the transpositions table.
    CMinimalReflection mr(pos.BitBoard());
    std::map<CMinimalReflection, std::string>::const_iterator it=transpositions.find(mr);
    if (it!=transpositions.end()) {
    	std::cout << pre << " <transposition of " << it->second << ">\n";
    	return;
    }
    transpositions[mr]=pre;

    // not a transposition. Print draw subtree.
    std::vector<CMVPS> mvs;
    GetSubnodes(pos, 0, mvs);

    // I like to see 1.F5
    if (pos.NEmpty()==60) {
    	for (size_t i=1; i<mvs.size(); i++) {
    		if (mvs[i].move==CMove(F5))
    			std::swap(mvs[i], mvs[0]);
    	}
    }

    // print for each subnode.
    for (std::vector<CMVPS>::const_iterator it=mvs.begin(); it!=mvs.end(); it++) {
    	if (it->value==0) {
    		std::string post=pre;
    		if (it->pass)
    			post+="PA ";
    		post+=std::string(it->move)+" ";
    		if (it->sbd->IsProven())
    			std::cout << post << "<proven>\n";
    		else if (it->sbd->IsBranch()) {
    			CQPosition posSub=pos;
    			posSub.MakeMove(it->move);
    			PrintDrawTree(posSub, post, transpositions);
    		}
    		else {
    			std::cout << post << "<" << it->sbd->Hi() << ">\n";
    		}	
    	}
    }

}

//! Determine if a book value is questionable (for purposes of detecting questionable nodes, where the value is not solidly known)
bool CBook::IsQuestionable(bool &drawToMover, i2 drawCutoff, i2 deviationCutoff, const CBookValue &bookValue) {
    const int absMover = abs(bookValue.vMover);
    const int absOpponent = abs(bookValue.vOpponent);
    drawToMover = absMover < absOpponent;
    const int minAbs = drawToMover?absMover:absOpponent;

    if (minAbs >= deviationCutoff) {
    	return false;
    }
    if (minAbs>=drawCutoff && bookValue.vMover>0  && bookValue.vOpponent<0) {
    	return false;
    }
    return true;
}

//! Find a questionable node.
//! \return true if we found one, false otherwise.
//! \param[out] questionablePosition the questionable position we've found
//! \param[out] drawToMover if true, should play this game with drawToMover, else with drawToOpponent.
//! \param[in] initialPosition position where we start checking the book.
//
// A "questionable" node is one that's
//  * On the draw tree from the original node, or 
//  * insufficiently far off the draw tree.
// So we trace the draw tree 
// If it's a draw node with abs(drawToBlackValue) or abs(drawToWhiteValue)<drawCutoff, it's questionable
// if it's a deviation with abs(drawToBlackValue) or abs(drawToWhiteValue)<deviationCutoff, it's questionable.
bool CBook::FindQuestionableNode(CQPosition& questionablePosition, bool& drawToMover, const CQPosition& initialPosition, i2 drawCutoff, i2 deviationCutoff) {
    for (int i=1; i<60; i++) {
    	if (FindQuestionableNode(questionablePosition, drawToMover, initialPosition, drawCutoff, deviationCutoff, i)) {
    		return true;
    	}
    }
    return false;
}

//! As above, but only find questionable nodes to a given max depth; this allows a breadth-first draw tree extension.
bool CBook::FindQuestionableNode(CQPosition& questionablePosition, bool& drawToMover, const CQPosition& initialPosition, i2 drawCutoff, i2 deviationCutoff, int maxDepth) {
    const CBookData *bd = FindData(initialPosition.BitBoard());
    if (bd!=NULL) {
    	questionablePosition = initialPosition;
    	if (IsQuestionable(drawToMover, drawCutoff, deviationCutoff, bd->Values())) {
    		return true;
    	}
    	else if (maxDepth>=1 && bd->Values().GameValue(0, 0)==0) {
    		std::vector<CMVPS> mvs;
    		GetSubnodes(initialPosition, 0, mvs);
    		for (std::vector<CMVPS>::const_iterator it=mvs.begin(); it!=mvs.end(); it++) {
    			CQPosition subPosition(initialPosition);
    			subPosition.MakeMoveAndPass(it->move);
    			if (FindQuestionableNode(questionablePosition, drawToMover, subPosition, drawCutoff, deviationCutoff, maxDepth-1)) {
    				return true;
    			}
    		}

    	}
    }
    return false;
}


//! Select a random move from the book.
//!
//! Choose a random move from the book using si.vRandomness
//!
//! \return true if a usable book move was found, false otherwise
//! \param[in]  pos position to find the subnode of
//! \param[out]  mvk mvk structure containing the move, its value, and with the known flag set
//! \param[in]  fPassBefore true if examining the position after a pass (in which case, print PA and the eval)
//! \post print selection information depending on si.PrintLevel()
bool CBook::GetRandomMove(const CQPosition& pos, const CSearchInfo& si, CMVK& mvk, bool fPassBefore) const {
    vector<CMVPS> mvs;
    CMVPS mv;
    const CBookData *bd;
    CQPosition subpos;
    u4 fPrintLevel=si.PrintBookLevel();

    // Find the book data. Return false if unusable.
    bd=FindData(pos.BitBoard());
    if (!bd || bd->IsUleaf())
    	return false;

    bool fSolved=bd->IsLeaf();
    if (fSolved) {
    	assert(bd->Values().IsProven());
    }

    GetSubnodes(pos, si.vContempt, mvs);
    if (fPassBefore) {
    	// find mover's best move, then print the inverse
    }

    if (fPrintLevel) {
    	cout << "BOOK: " << *bd << "\n";
    	cout << "Contempt: " << si.vContempt << "; Randomness: " << si.rs << "\n";
    }

    // check for error condition and return false if we have one
    if (mvs.empty()) {
    	if (!fSolved) {
    		pos.Print();
    		assert(0);
    		printf("RED ALERT: BOOK HAS NO MOVES\n");
    	}
    	return false;
    }

    // no error condition.
    if (fPassBefore) {
    	std::cout << "book PA 0 0 0 0\n";
    	mvk.move.Set(-1);
    	mvk.value=0;
    	mvk.fKnown=0;
    	mvk.fBook=true;
    	mvk.hiBest=mvk.hiFull=bd->Hi();
    	return true;
    }
    if (fPrintLevel) {
    	PrintSubnodes(fPrintLevel, mvs, pos.BlackMove());
    }

    // choose a move
    // assertion fails when we have uncorrected transpositions
    //assert(mvs[0].value==bd->Values().VMover(fBlackMove) || bd->IsSolved());
    bool fUsable=!fSolved;
    int rs = si.rs;

    if (fSolved) {
    	rs = 0;
    	if (bd->Values().Loss()) {
    		// check to see if the lost position has a drawn or won subposition. In this case we have a book bug.
    		for (vector<CMVPS>::const_iterator it=mvs.begin(); it!=mvs.end(); it++) {
    			if (it->sbd->IsProven()) {
    				const CBookValue& values=it->sbd->Values();
    				if (!(it->pass?values.Loss():values.Win()))
    					cout << "RED ALERT: Book error, Loss has a possible win or draw\n";
    			}
    		}
    	}
    	else if (bd->Values().Draw()) {
    		// check to see if the drawn position has a won subposition. In this case we have a book bug.
    		for (vector<CMVPS>::const_iterator it=mvs.begin(); it!=mvs.end(); it++) {
    			if (it->sbd->IsProven()) {
    				const CBookValue& values=it->sbd->Values();
    				if (it->pass?values.Win():values.Loss())
    					cout << "RED ALERT: Book error, Draw has a possible win\n";
    			}
    		}
    		if (mvs[0].value>=0)
    			fUsable=true;
    	}
    	else {
    		if (mvs[0].value>0)
    			fUsable=true;
    	}
    }

    if (fUsable) {
    	PickRandomMove(mvs, rs, mvk, si.PrintBookRandomInfo()!=0);

    	// really the only info from the book is the height, although we could go to the
    	//	subnode to get the ply of the chosen move. But I'm too lazy to implement this
    	mvk.hiFull=mvk.hiBest=bd->Hi();
    }
    return fUsable;
}

//! Return the best unplayed move, if this is an Edmund node.
//!
//! \return true if this is an Edmund node, false if not
//!
//! An Edmund node is one that is probable-solved, but the best played move is not the best move (in a WLD sense).
//! \param[out] mv Move and value of best unplayed deviation.
//! \param[in] fPrintEdmund True if we should print information about this node to std::cout
//! \param[in] iEdmund Amount of edmundization to do. 1=probable solves, 2=midgame searches, 4=draw/draw
bool CBook::GetEdmundMove(const CQPosition& pos, CMoveValue& mv, bool fPrintEdmund, int iEdmund) const {
    // Find the book data. Return false if unusable.
    const CBookData *bd=FindData(pos.BitBoard());
    if (!bd || bd->IsUleaf() || bd->IsProven() || bd->GameCount()==0)
    	return false;

    // is this midgame or probable solve?
    if (bd->Hi().height+hSolverStart==pos.NEmpty()) {
    	// probable solve. No edmundization unless iEdmund&1
    	if ((iEdmund&1)==0)
    		return false;
    }
    else {
    	// midgame. No edmundization unless iEdmund&2
    	if ((iEdmund&2)==0)
    		return false;
    }

    std::vector<CMVPS> mvs;
    CMoveValue mvBestPlayed;

    GetSubnodes(pos, 0, mvs);

    // check for error condition and return false if we have one
    if (mvs.empty()) {
    	pos.FPrint(stdout);
    	assert(0);
    	printf("RED ALERT: BOOK HAS NO MOVES\n");

    	return false;
    }

    // Calculate best played node
    mvBestPlayed.value=-kInfinity;
    for (std::vector<CMVPS>::const_iterator it=mvs.begin(); it!=mvs.end(); it++) {
    	if (it->sbd->GameCount()) {
    		mvBestPlayed.value=it->value;
    		mvBestPlayed.move=it->move;
    		break;
    	}
    }

    // Calculate best unplayed node
    mv.value=-kInfinity;
    for (std::vector<CMVPS>::const_iterator it=mvs.begin(); it!=mvs.end(); it++) {
    	if (it->sbd->GameCount()==0) {
    		mv.value=it->value;
    		mv.move=it->move;
    		break;
    	}
    }


    bool fEdmund;
    if (mv.value>0)
    	fEdmund= mvBestPlayed.value<=0;
    else if (mv.value==0) {
    	if (iEdmund&4)
    		fEdmund=mvBestPlayed.value<=0;
    	else
    		fEdmund=mvBestPlayed.value<0;
    }
    else
    	fEdmund=false;

    if (fEdmund && fPrintEdmund) {
    	cout << "--- Found an edmund position ---\n";
    	cout << "Best played : " << mvBestPlayed << ".  Best deviation: " << mv << ".\n";
    	pos.Print(false);
    	GetAndPrintSubnodes(pos, 0, 2);
    	cout << "--------------------------------\n";
    }
    return fEdmund;
}

int CBook::NEdmundNodes(int iEdmund) const {
    int nEmpty, nGames;
    nGames=0;
    map<CMinimalReflection,CBookData>::const_iterator i;
    CMoveValue mv;

    for (nEmpty=0; nEmpty<nEmptyBookMax; nEmpty++) {
    	for (i=entries[nEmpty].begin(); i!=entries[nEmpty].end(); i++) {
    		CQPosition pos((*i).first, true);
    		if (GetEdmundMove(pos, mv, false, iEdmund)) {
    			nGames++;
    		}
    	}
    }

    return nGames;
}

//! Return true if this game is in book
//!
//! "In book" means that each position in the game is in the book with game count>0
//! except for positions with too few empties to be stored in the book.
bool CBook::IsInBook(const COsGame& game) const {
    const int nMoves=int(game.ml.size());
    for (int iMove=nMoves; iMove>=0; iMove--) {
    	CQPosition pos(game, iMove);
    	if (pos.NEmpty()>=nEmptyBookMax)
    		break;

    	// if this is a valid book node
    	if (pos.NEmpty()>=NEmptyMin()) {
    		const CBookData* bd=FindData(pos.BitBoard());
    		if (bd==NULL)
    			return false;
    		if (bd->GameCount()==0)
    			return false;
    	}
    }
    return true;
}

void CBook::MergeBook(const char* fn) {
    CBook book2(fn);
    int nEmpty;
    map<CMinimalReflection,CBookData>::const_iterator i;
    CBookData* pbd;

    for (nEmpty=0; nEmpty<nEmptyBookMax; nEmpty++) {
    	for (i=book2.entries[nEmpty].begin(); i!=book2.entries[nEmpty].end(); i++) {
    		pbd=FindNonconstData((*i).first);
    		const CBookData& bd2=(*i).second;
    		if (pbd==NULL || bd2.IsMoreImportantThan(*pbd) ) {
    			entries[nEmpty][(*i).first]=(*i).second;
    		}
    		else if (pbd->IsMoreImportantThan(bd2)) {
    			// do nothing, original entry is more important
    		}
    		else {
    			// same importance. Merge cutoff and node count.
    			if (pbd->nGames[0]<bd2.nGames[0])
    				pbd->nGames[0]=bd2.nGames[0];
    			if (pbd->nGames[1]<bd2.nGames[1])
    				pbd->nGames[1]=bd2.nGames[1];

    			if (pbd->IsBranch() && bd2.Cutoff() < pbd->Cutoff())
    				pbd->cutoff=bd2.cutoff;
    		}
    	}
    }
    m_fAltered=true;
}

// Update book data with the result of a search. If hixNew>=hi set the value and the height.
//!
//! Call StoreLeaf() if you have only a value for the node. This works for both solved and unsolved leaf nodes.
//! Call StoreRoot() if you have a value and a cutoff.
//!
//! If nEmpty<=CBook::MinNEmpty() this function does nothing.
void CBook::StoreLeaf(const CMinimalReflection& mr, CHeightInfoX hix, CValue value) {
    //cout << "\n";
    //board.Print(true);
    //cout << "Store(" << hi << "," <<value<< ");\n";

    // calculate minimal reflection, nEmpty, fWLD
    const int nEmpty=bitCountInt(mr.empty);
    if (nEmpty<NEmptyMin())
    	return;

    CBookData* bd=&(entries[nEmpty][mr]);

    // assign value if we can, or mark unassigned if we should
    assert(hix.Valid());
    bd->StoreLeaf(hix, value, Boni());
    assert(bd->Hi().height>0);

    m_fAltered=true;
}

//! Update a position in the book after a search.
//!
//! This needs to be a root position of a search since one of the parameters is vCutoff (value of the
//! second best node).
//!
//! The data are only updated if new height >= old height.
//! The value is only set if the data are updated and the node is solved.
void CBook::StoreRoot(const CMinimalReflection& mr, CHeightInfoX hix, CValue value, CValue vCutoff) {
    //board.Print(true);
    //cout << "StoreBranch(" << hi << "," <<value << "," << vCutoff << ");\n";

    // calculate minimal reflection, nEmpty, fWLD
    int nEmpty=bitCountInt(mr.empty);
    CBookData* bd=&(entries[nEmpty][mr]);

    // assign value if we can, or mark unassigned if we should
    assert(hix.Valid());
    bd->StoreRoot(hix, value, vCutoff, Boni());
    assert(bd->Hi().height>0);

    m_fAltered=true;
}

// correction and assignment

//! Check the book for transpositions and assign values to the book. 
void CBook::NegamaxAll() {
    int nEmpty;
    map<CMinimalReflection,CBookData>::iterator i;
    CQPosition pos;

    for (nEmpty=0; nEmpty<nEmptyBookMax; nEmpty++) {
    	if (nEmpty<NEmptyMin()) {
    		size_t size=entries[nEmpty].size();
    		if (size) {
    			if (m_os) {
    				*m_os << "RED ALERT: BOOK MAY BE CORRUPT\nErasing " << size << " entries at " << nEmpty << "empties\n";
    			}
    			cout << "RED ALERT: BOOK MAY BE CORRUPT\nErasing " << size << " entries at " << nEmpty << "empties\n";
    			entries[nEmpty].clear();
    		}
    	}
    	else {
    		for (i=entries[nEmpty].begin(); i!=entries[nEmpty].end(); i++) {
    			pos.Initialize((*i).first,true);
    			NegamaxPosition(pos, &((*i).second));
    		}
    	}
    }
    m_fAltered=true;
}

//! Add a game to the book and negamax up the game tree. No deviations are calculated.
//!
//! \param game the game to add
void CBook::NegamaxGame(const COsGame& game) {
    int iMove, nMoves;
    CMoves moves;
    CBookData *bd;

    nMoves=int(game.ml.size());

    // correct from back to front so changes propagate
    for (iMove=nMoves; iMove>=0; iMove--) {
    	CQPosition pos(game, iMove);
    	if (pos.NEmpty()>=nEmptyBookMax)
    		break;

    	// if this is a valid book node
    	if (pos.NEmpty()>=NEmptyMin() && pos.CalcMoves(moves)) {
    		bd=FindNonconstData(pos.BitBoard());

    		if (bd)
    			NegamaxPosition(pos, bd);
    	}
    }
    m_fAltered=true;
}

//! Check this position for transpositions and assign values to the book. 
void CBook::NegamaxPosition(CQPosition pos) {
    CBookData* bd=FindNonconstData(pos.BitBoard());
    if (bd)
    	NegamaxPosition(pos, bd);
    else
    	assert(0);
}


//! assign values to a position
//!
//! Assign means:
//! - For unsolved leaf nodes, vOpponent and vMover are set to vHeuristic, and the "assigned" flag is set
//! - For solved leaf nodes, vOpponent and vMover are set to vHeuristic+bonus, and the "assigned" flag is set
//! - For branch nodes, vOpponent, vMover, and vHeuristic are set to the max of the subnode values.
//!
//! \param bd [in/out] pointer to the book data that will be updated by this routine.
void CBook::NegamaxPosition(CQPosition pos, CBookData* bd) {
    assert(bd->Hi().height!=0);

    // For branch nodes, get the max of the subnodes values
    if (bd->IsBranch()) {
    	CBookValue bv, bvUleaf;
    	CMoves movesNonbook;
    	
    	MaxSubnodeValues(pos,bd, bv,bvUleaf, movesNonbook);

    	if (!movesNonbook.NMoves()) 
    		bd->AllSubnodesInBook();
    	bd->AssignBranchValues(bv);
    }
    else {
    	bd->values.AssignLeaf(Boni());
    }

    assert(bd->Values().IsSetAndAssigned());
}

// Find max subnode value, and max unsolved leaf subnode value
// Increase book height for subnodes if required.
// Inputs :
//    pos - position
//    bd - bookdata for position
// Outputs:
//    bv - book value for position
//    bvUleaf - book value of the best "unsolved leaf" node
void CBook::MaxSubnodeValues(const CQPosition& pos, CBookData* bd, CBookValue& bv, CBookValue& bvUleaf, CMoves& movesNonbook) {
    CMoves moves, submoves;
    CMove move;
    int pass;
    CBookData *sbd;
    CQPosition posSub;

    if (!pos.CalcMoves(moves)) {
    	assert(0);
    	return;
    }

    // Initialize return values
    movesNonbook=moves;
    bv.MinValues();
    bvUleaf.MinValues();

    while (moves.GetNext(move)) {
    	posSub=pos;
    	posSub.MakeMove(move);
    	pass=posSub.CalcMovesAndPass(submoves);

    	// terminal subnode:
    	if (pass==2) {
    		bv.MergeTerminalValue(posSub.TerminalValue(), Boni());
    	}

    	// nonterminal subnode:
    	else {
    		sbd=FindNonconstData(posSub.BitBoard());

    		// book subnode:
    		if (sbd) {

    			// Merge in values
    			bv.Merge(sbd->Values(), pass);
    			if (sbd->IsUleaf()) {
    				bvUleaf.Merge(sbd->Values(), pass);
    			}
    		}
    	}
    	if (pass==2 || sbd)
    		movesNonbook.Delete(move);
    }
}
//! Return true if the books are equal.
//!
//! If the books differ by book data (rather than by position or number of entries)
//!  then print out the first position where they differ, and the book subnodes from that position.
bool CBook::operator==(const CBook& b) const {
    for (u4 i=0; i<nEmptyBookMax; i++) {
    	if (entries[i].size()!=b.entries[i].size())
    		return false;
    	map<CMinimalReflection,CBookData>::const_iterator it=entries[i].begin();
    	map<CMinimalReflection,CBookData>::const_iterator bit=b.entries[i].begin();
    	for ( ; it!=entries[i].end(); it++, bit++) {
    		if (it->first!=bit->first)
    			return false;
    		if (it->second!=bit->second) {
    			CQPosition pos(it->first, true);
    			pos.FPrint(stdout);

    			it->second.Out(std::cout);
    			std::cout << "\n";
    			GetAndPrintSubnodes(pos, 0, -1);

    			printf("\n and for the other book \n\n");

    			bit->second.Out(std::cout);
    			std::cout << "\n";
    			b.GetAndPrintSubnodes(pos, 0, -1);

    			fflush(stdout);

    			return false;
    		}
    	}
    }
    return true;
}

//! Remove a position and all subpositions from the book.
//!
//! This is in here to remove the bad solves that happened in old ntest.
void CBook::RemoveTree(const CMinimalReflection& mr) {
    const int nEmpty=mr.NEmpty();
    map<CMinimalReflection, CBookData>::iterator i=entries[nEmpty].find(mr);
    if (i!=entries[nEmpty].end()) {
    	entries[nEmpty].erase(i);
    	CMoves moves;
    	CMove move;
    	CQPosition pos(mr, true);
    	pos.CalcMovesAndPass(moves);

    	while (moves.GetNext(move)) {
    		CQPosition posSub(mr, true);
    		posSub.MakeMove(move);
    		if (posSub.Mobility(true)==0)
    			posSub.Pass();
    		RemoveTree(posSub.BitBoard());
    	}
    }
    m_fAltered=true;
}

//!    Store a subposition in the book
//!
//! The subposition is the position after the move is made, and (if the enemy must pass)
//! the enemy passes. If both players must pass (i.e. the game is over) the position is not
//! added to book.
//!
//! The subposition is always stored as a leaf node.
//! 
//! \param pos Parent position
//! \param move Move to make from parent position
//! \param value Value from parent's mover POV
//! \param hi Height of parent node
void CBook::StoreSubposition(CQPosition pos, CMoveValue mv, CHeightInfoX hix) {
    const int pass=pos.MakeMoveAndPass(mv.move);
    if (pass!=2) {
    	if (!pass)
    		mv.value=-mv.value;
    	StoreLeaf(pos.BitBoard(), CHeightInfoX(hix-1, pos.NEmpty()-1), mv.value);
    }
}

//! Save the result of an iterative search in the book.
//!
//! If the search is proven:
//! - store the root node if fFull is true
//! - store the best move if the root node is a draw or win
//!
//! If the search is not proven:
//! - if fAddUnproven is false, do nothing
//! - otherwise store the root node and all leaf nodes that received an exact scoring at depth (depth of root node)-1.
//!
//! \param bb Initial position
//! \param nBest number of moves evaluated at height mvk.hiBest
//! \param fFull true if all moves from bb were considered while searching, false if some moves were excluded from the search
//! \param fAddUnproven true if unproven results should be added to book
void CBook::StoreIterativeResult(const CBitBoard& bb, int nBest, int nEvalOld,int nEvalNew, const vector<CMoveValue>& mvsOld, 
    						   const vector<CMoveValue>& mvsNew, const CMVK& mvk, bool fFull, bool fAddUnproven) {
    
   const int nEmpty=bb.NEmpty();
   const vector<CMoveValue>& mvs=nEvalNew?mvsNew:mvsOld;

    // add to book
    if (nEmpty>=NEmptyMin()) {
    	CValue value;

    	// find out if the root node is solved
    	bool fWLDSolved=mvk.hiFull.WldProven(nEmpty);
    	value=mvs.at(0).value;

    	assert(mvk.hiFull.Valid());
    	if (fWLDSolved) {
    		// solved root node
    		std::cout << "AddToBook mode - solved node" << std::endl;
    		if (fFull)
    			StoreLeaf(bb,CHeightInfoX(mvk.hiFull, nEmpty),value);

    		// store the subposition if this position is won or drawn.
    		// that should help in matches where ntest doesn't have enough time to find the correct move.
    		if (mvk.value>=0 && nEvalNew && nEmpty>hSolverStart+1) {
    			CQPosition pos(bb, true);
    			StoreSubposition(pos, mvs[0], CHeightInfoX(mvk.hiFull, nEmpty));
    		}
    	}
    	else if (fAddUnproven) {
    		// unsolved root node
    		if (m_os) {
    			*m_os << "AddToBook" << std::endl;
    		}
    		CValue vCutoff=mvsOld[nBest-1].value;
    		StoreRoot(bb,CHeightInfoX(mvk.hiFull, nEmpty), value, vCutoff);

    		// add subpositions too
    		CMoves submoves;
    		int i;

    		for (i=0; i<nEvalOld; i++) {
    			CQPosition pos(bb, true);
    			StoreSubposition(pos, mvsOld[i], CHeightInfoX(mvk.hiFull, nEmpty));
    		}

    		// if round was aborted, add any evaluated nodes from the aborted round
    		if (abortRound) {
    			fWLDSolved=mvk.hiBest.WldProven(nEmpty);
    			for (i=0; i<nEvalNew; i++) {
    				CQPosition pos(bb, true);
    				StoreSubposition(pos, mvsNew[i], CHeightInfoX(mvk.hiBest, nEmpty));
    			}
    		}
    	}
    	else {
    		// unsolved root nodes not being added.
    		if (m_os) {
    			*m_os << "NoAddToBook" << std::endl;
    		}
    	}
    }			
}
