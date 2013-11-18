#pragma once

#include "../n64/utils.h"
#include "Moves.h"
#include "NodeStats.h"
#include "HeightInfo.h"

//////////////////////////////////////
// CMoveValue and CMVK classes
//////////////////////////////////////

class CMoveValue {
public:
	CMoveValue() {};
	CMoveValue(CMove move_, CValue value_): move(move_), value(value_) {};

	CMove move;
	CValue value;

	void Out(std::ostream& os) const;
};

inline std::ostream& operator<<(std::ostream& os, const CMoveValue& mv) {mv.Out(os); return os;};
std::ostream& operator<<(std::ostream& os, const std::vector<CMoveValue>& mvs);

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
	std::ostream& Out(std::ostream& os) const;

	CHeightInfo hiFull, hiBest;
	bool fBook;		// true if this move comes from the book
	bool fKnown;	// true if the value has been evaluated
	CNodeStats ns;
};

inline std::ostream& operator<<(std::ostream& os, const CMVK& mvk) { return mvk.Out(os);}

inline void CMVK::Clear() {
	hiFull.Clear();
	hiBest.Clear();
	fBook=false;
	fKnown=false;
	move.Set((u1)-1);
}
