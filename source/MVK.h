#pragma once

#include "Moves.h"
#include "NodeStats.h"
#include "Utils.h"
#include "SearchInfo.h"

//////////////////////////////////////
// CMoveValue and CMVK classes
//////////////////////////////////////

class CMoveValue {
public:
	CMoveValue() {};
	CMoveValue(CMove move_, CValue value_): move(move_), value(value_) {};

	CMove move;
	CValue value;

	void Out(ostream& os) const;
};

inline ostream& operator<<(ostream& os, const CMoveValue& mv) {mv.Out(os); return os;};
ostream& operator<<(ostream& os, const vector<CMoveValue>& mvs);

// note this operator is the reverse of what you think it should be!!!
inline bool operator<(const CMoveValue& a, const CMoveValue& b) {
	return a.value>b.value;
}

inline bool operator==(const CMoveValue& a, const CMoveValue& b) {
	return a.value==b.value;
}

class CMoveValueMoves:public CMoveValue {
public:
	CMoves submoves;
};

class CMVK : public CMoveValue {
public:
	//void FPrint(FILE* fp) const;

	void Clear();
	ostream& Out(ostream& os) const;

	CHeightInfo hiFull, hiBest;
	bool fBook;		// true if this move comes from the book
	bool fKnown;	// true if the value has been evaluated
	CNodeStats ns;
};

inline ostream& operator<<(ostream& os, const CMVK& mvk) { return mvk.Out(os);}

inline void CMVK::Clear() {
	hiFull.Clear();
	hiBest.Clear();
	fBook=false;
	fKnown=false;
	move.Set((u1)-1);
}
