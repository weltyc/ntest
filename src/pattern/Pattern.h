// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

#pragma once

#include "../n64/utils.h"

#include <vector>

struct CUpdate {
	int pattern, value;
	bool operator<(const CUpdate& b) const { return value<b.value; };
	bool operator==(const CUpdate& b) const { return value==b.value; };
};

// CPattern tells us which squares are in a pattern as well as info about its symmetries and reflections
//	A symmetry is an element of the group of board symmetries where the pattern is mapped to itself
//	The reflections are elements which are all distinct under the group of board symmetries
//		(i.e. 1 element from each coset of the 'symmetries' subgroup)
// At the moment you calculate reflections and symmetries by hand
// group elements are given by number:
//	1: row -> 7-row
//	2: col -> 7-col
//	4: row <-> col, applied after 1 and 2
// the list of reflections and symmetries is terminated by a 0 (the identity symmetry)
// numerical patterns can also be accomodated: set nI to 0 and iToSq[0] to the number of patterns

struct CPattern {
	char* name;
	int nI;
	int iToSq[16];
	int symmetries[8];
	int reflections[8];

	// calculated
	int nIds, nConfigs;
	int* configToId;
	int* idToConfig;

	void Init();
	void Clean();
	void CalcTables(int& nPatterns, std::vector<CUpdate> sqToUpdates[NN]);
	int NIDs() const;
	int NConfigs() const;
	int ConfigToID(int config) const;
	char* IDToString(int id) const;

	static int rsqToSq(int reflection, int square);
	static int Reconfig(int config, int* reorder, int nI);
	static char sOut[17];
};

extern CPattern patR1, patR2, patR3, patR4, patD8, patD7, patD6, patD5, patD4, patD3, patEXX, pat2x5, pat2x4, patE2x4, patTriangle, patDarwersi;
extern CPattern patMP, patMO, patPMP, patPMO, patDxD, patParity;

void InitFastFlipPatterns();
void CleanFastFlipPatterns();
