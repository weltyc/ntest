#include "SearchInfo.h"

#include "options.h"
#include <iomanip>

////////////////////////////////////////////////////
// HeightInfo - used in books and iterative value
////////////////////////////////////////////////////

CHeightInfo::CHeightInfo() {
}

CHeightInfo::CHeightInfo(int aheight, int aiPrune, bool afWLD){
	height=aheight;
	iPrune=aiPrune;
	fWLD=afWLD;
	fKnownSolve=false;
}

CHeightInfo::CHeightInfo(int aheight, int aiPrune, bool afWLD, int nEmpty){
	height=aheight;
	iPrune=aiPrune;
	fWLD=afWLD;
	SetNEmpty(nEmpty);
}

void CHeightInfo::Clear() {
	height=iPrune=fWLD=0;
}

const bool fSkipLastFW=true;

bool CHeightInfo::NextRound(int nEmpty, const CSearchInfo& si) {
	int hSolve=nEmpty-hSolverStart;
	int hMargin=hSolve-height;

	// special rules for calcing MPC stats
	if (si.NeedMPCStats()) {
		height++;
		iPrune=(height>13)?4:0;
		return hMargin>=1;
	}

	// currently in midgame?
	if (hMargin>0) {
		do {
			height++;
			hMargin=hSolve-height;
		}
		while (false);

		// start endgame?
		if (hMargin==0) {
			height=hSolve;
			iPrune=si.iPruneEndgame;
			fWLD=true;
		}
		// stay in midgame
		else {
			fWLD=false;
		}
	}

	// currently in endgame
	else {
		if (fWLD && !(iPrune==1 && fSkipLastFW))
			fWLD=false;
		else {
			iPrune--;
			fWLD=true;
		}
	}
	// save data for printouts
	if (si.NeedRandSearch())
		fWLD=false;
	SetNEmpty(nEmpty);
	return iPrune>=0;
}

bool CHeightInfo::operator==(const CHeightInfo& b) const {
	return Order()==b.Order();
}

bool CHeightInfo::operator<(const CHeightInfo& b) const {
	return Order()<b.Order();
}

bool CHeightInfo::operator>(const CHeightInfo& b) const {
	return Order()>b.Order();
}

bool CHeightInfo::operator<=(const CHeightInfo& b) const {
	return Order()<=b.Order();
}

bool CHeightInfo::operator>=(const CHeightInfo& b) const {
	return Order()>=b.Order();
}

bool CHeightInfo::operator!=(const CHeightInfo& b) const {
	return Order()!=b.Order();
}

i4 CHeightInfo::Order() const {
	return (height<<8) - (iPrune<<1) - fWLD;
}

//! \return true if the node is solved at 100%
bool CHeightInfo::WldProven(int nEmpty) const {
	if (height<nEmpty-hSolverStart)
		return false;
	if (iPrune)
		return false;
	return true;
}

//! \return true if the node is solved full-width at 100%
bool CHeightInfo::ExactProven(int nEmpty) const {
	return WldProven(nEmpty) && !fWLD;
}

void CHeightInfo::SetNEmpty(int nEmpty) {
	int hSolve=nEmpty-hSolverStart;
	fKnownSolve=height>=hSolve;
}

CHeightInfo CHeightInfo::operator-(int n) const {
	CHeightInfo result;
	result=*this;
	result.height-=n;
	return result;
}

CHeightInfo CHeightInfo::operator+(int n) const {
	CHeightInfo result;
	result=*this;
	result.height+=n;
	return result;
}

int nSolvePct[6]={100, 97, 91, 70, 60, 50};

void CHeightInfo::Out(std::ostream& os) const {
	if (fKnownSolve)
		os << std::setw(3) << nSolvePct[iPrune] << '%' << (fWLD?'W':' ');
	else
		os << std::setw(3) << height;// <<":"<<iPrune;
}

std::ostream& operator<<(std::ostream& os, const CHeightInfo& hi) {
	hi.Out(os);
	return os;
}

int Sign(int n) {
	if (n<0)
		return -1;
	else
		return n>0;
}

//! \return true if the node is solved at 100% (WLD or full-width)
bool CHeightInfoX::WldProven() const {
	return fKnownSolve && iPrune==0;
}

//! \return true if the node is solved full-width at 100%
bool CHeightInfoX::ExactProven() const {
	return fKnownSolve && iPrune==0 && !fWLD;
}
