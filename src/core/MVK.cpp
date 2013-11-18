#include "MVK.h"

using namespace std;

//////////////////////////////////////
// CMoveValue class
//////////////////////////////////////

void CMoveValue::Out(ostream& os) const {
	os << move;
	os << "/";
	os << StringFromValue(value);
}

ostream& operator<<(ostream& os, const vector<CMoveValue>& mvs) {
	vector<CMoveValue>::const_iterator i;
	for (i=mvs.begin(); i!=mvs.end(); i++) {
		if (i!=mvs.begin())
			os << "\t";
		os << *i;
	}
	return os;
}

//////////////////////////////////////
// CMVK class
//////////////////////////////////////

ostream& CMVK::Out(ostream& os) const {
	const std::streamsize oldPrecision=os.precision(2);
	const int oldFlags=os.setf(ios::fixed, ios::floatfield);

	// move
	os << move << " " ;

	// value
	const int oldFlags2=os.setf(ios::showpos);
	os.width(6);
	if (fKnown)
		os << double(value)/kStoneValue;
	else
		os << "?";
	os.flags(oldFlags2);

	// number of games in book
	os << " 0";

	// depth
	os << " " << hiFull;
	if (hiFull!=hiBest)
		os<<" , best to " << hiBest;
	if (fBook)
		os<<" , book";
	os << " ";
	
	// time taken
	os << ns.Seconds() << " ";

	ns.OutShort(os);

	os.flags(oldFlags);
	os.precision(oldPrecision);
	return os;
}
