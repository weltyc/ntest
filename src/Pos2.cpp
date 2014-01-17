// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

#include <iomanip>
#include <cassert>
#include <ctype.h>
#include <stdio.h>
#include <fstream>
#include <math.h>
#include "n64/types.h"
#include "n64/test.h"
#include "n64/utils.h"
#include "core/BitBoard.h"
#include "core/QPosition.h"
#include "core/Moves.h"
#include "core/options.h"
#include "core/NodeStats.h"
#include "pattern/Patterns.h"
#include "pattern/FastFlip.h"

#include "UndoInfo.h"
#include "Pos2.h"
#include "Evaluator.h"
#include "options.h"

using namespace std;

///////////////////////////////////////////////////////////////////////////////
// position variables
///////////////////////////////////////////////////////////////////////////////

// initialize position.
void Pos2::InitializeToStartPosition() {
	Initialize("...........................O*......*O...........................", true);
}

// inputs:
//	text representing the board
void Pos2::Initialize(const char* sBoard, bool fBlackMove) {
	int square, direction, pattern, value;
	TConfig* pConfig;

	// clear configs
	for (pattern=0; pattern<=knPats; pattern++)
		m_configs[pattern]=0;

	// add each square to the appropriate configs
	for (square=0; square<NN; square++) {
		value=TextToValue(sBoard[square]);

		for (direction=0; direction<4; direction++) {
			pConfig=m_configs+sdToPattern[square][direction];
			switch(value) {
			case 0:
				break;
			case 1:
				*pConfig+=sdToValue[square][direction];
				break;
			case -1:
				*pConfig-=sdToValue[square][direction];
				break;
			case 2:
				*pConfig+=sdToValue[square][direction]+sdToValue[square][direction];
				break;
			default:
				assert(0);
			}
		}
	}

	m_fBlackMove=fBlackMove;
	m_bb.Initialize(sBoard, m_fBlackMove);
}

void Pos2::Initialize(const CBitBoard& m_bb, bool m_fBlackMove) {
	char sBoard[NN+1];

	m_bb.GetSBoard(sBoard, m_fBlackMove);
	Initialize(sBoard, m_fBlackMove);
}


///////////////////////////////////////////////////////////////////////////////
// Move routines
///////////////////////////////////////////////////////////////////////////////

// make a move on the board. Update m_fBlackMove and remove the square from the empty list.
// precondition: this is a legal move
void Pos2::MakeMoveBB(int square, int& nFlipped, CUndoInfo& ui) {
	nFlipped=GetCountAndFlipBB(m_fBlackMove, square, ui);
#ifdef _DEBUG
	if(!nFlipped) {
		Print();
		char buf[65];
		cout << "Board Text: " << GetText(buf) << "\n";
		printf("move %c%c flips no discs\n",ColText(square),RowText(square));
		assert(0);
	}
#endif
	m_fBlackMove=!m_fBlackMove;
	m_bb.InvertColors();
	nBBFlips++;
}

void Pos2::MakeMoveBB(int square) {
	CUndoInfo ui;
	int nFlipped;

	MakeMoveBB(square, nFlipped, ui);
}

void Pos2::MakeMoveAndPassBB(CMove move, int& nFlipped, CUndoInfo& ui, int& pass) {
	CMoves moves;

	MakeMoveBB(move.Square(), nFlipped, ui);
	pass=CalcMovesAndPassBB(moves);
}

// undo a move on the board.
// inputs:
//		square - square number of the previous move
//		nFlipped - number of discs flipped by the previous move
//		ui - undo information from the previous move
// side effects:
//		Update m_configs, m_bb, m_fBlackMove, and remove the square from the empty list.
// output:
//		undo info needed for undo info
// return:
//		the number of discs flipped (0 if not a legal move)

void Pos2::UndoMoveBB(int square, int nFlipped, CUndoInfo& ui) {
	m_bb.InvertColors();
	ui.FlipBB(m_bb, m_fBlackMove, m_configs);
	m_fBlackMove=!m_fBlackMove;
	assert(nFlipped);
}

void Pos2::UndoMoveAndPassBB(CMove move, int nFlipped, CUndoInfo& ui, int& nPass) {
	if (nPass)
		PassBB();
	UndoMoveBB(move.Square(), nFlipped, ui);
}

///////////////////////////////////////////////////////////////////////////////
// Debug and print routines
///////////////////////////////////////////////////////////////////////////////

// debug stuff
void FPrintHeader(FILE* fp);
void FPrintRow(FILE* fp, int row, int pattern, int nColors[3]);
void PrintSquareDirectionToPattern();
void PrintSquareDirectionToValue();

void Pos2::Print() const {
	FPrint(stdout);
}

void Pos2::FPrint(FILE* fp) const {
	int row, nColors[3];

	FPrintHeader(fp);

	nColors[0]=nColors[1]=nColors[2]=0;
	for (row=0; row<N; row++)
		FPrintRow(fp, row, m_configs[row], nColors);

	FPrintHeader(fp);

	fprintf(fp, "\nBlack: %d  White: %d  Empty: %d\n\n",nColors[2],nColors[0],nColors[1]);
	fprintf(fp, "%s to move\n",m_fBlackMove?"Black":"White");
}

void Pos2::PrintConfigs() const {
	int pattern=0;

	printf("R:  ");
	while (pattern<8)
		printf("%6d",m_configs[pattern++]);

	printf("\n/: ");
	while (pattern<19)
		printf("%6d",m_configs[pattern++]);

	printf("\nC: ");
	while (pattern<27)
		printf("%6d",m_configs[pattern++]);

	printf("\n\\: ");
	while (pattern<38)
		printf("%6d",m_configs[pattern++]);

	printf("\n");

	u2 ids[nPatternsJ];
	GetIDsJ(ids);
	cout << "IDs normalized for black-to-move\n";
	pattern=0;
	printf("R1:  ");
	while (pattern<4)
		printf("%6d",ids[pattern++]);

	printf("\nR2: ");
	while (pattern<8)
		printf("%6d",ids[pattern++]);

	printf("\nR3: ");
	while (pattern<12)
		printf("%6d",ids[pattern++]);

	printf("\nR4: ");
	while (pattern<16)
		printf("%6d",ids[pattern++]);

	printf("\nD8: ");
	while (pattern<18)
		printf("%6d",ids[pattern++]);

	printf("\nD7: ");
	while (pattern<22)
		printf("%6d",ids[pattern++]);

	printf("\nD6: ");
	while (pattern<26)
		printf("%6d",ids[pattern++]);

	printf("\nD5: ");
	while (pattern<30)
		printf("%6d",ids[pattern++]);

	printf("\ntriangle: ");
	while (pattern<34)
		printf("%6d",ids[pattern++]);

	printf("\n2x4: ");
	while (pattern<42)
		printf("%6d",ids[pattern++]);

	printf("\n2x5: ");
	while (pattern<50)
		printf("%6d",ids[pattern++]);

	printf("\nEdge+2x: ");
	while (pattern<54)
		printf("%6d",ids[pattern++]);

	printf("\nMobility: ");
	while (pattern<56)
		printf("%6d",ids[pattern++]);

	printf("\nPot Mob: ");
	while (pattern<58)
		printf("%6d",ids[pattern++]);

	printf("\nParity: ");
	while (pattern<59)
		printf("%6d",ids[pattern++]);

};

char* Pos2::GetText(char* sBoard) const {
	int row,col,sq,item,pattern;

	for (sq=row=0; row<N; row++) {
		pattern=m_configs[row];
		for (col=0; col<N; col++) {
			item=pattern%3;
			pattern=(pattern-item)/3;
			sBoard[sq++]=ValueToText(item);
		}
	}

	sBoard[sq]=0;
	return sBoard;
}

void PrintsdToValue() {
	int direction, row, col;

	printf("sdToValue table:\n\n");

	for (direction=0; direction<4; direction++) {
		printf("direction %d:\n",direction);
		for (row=0; row<N; row++) {
			for (col=0; col<N; col++) {
				printf("%5d",sdToValue[row*N+col][direction]);
			}
			printf("\n");
		}
		printf("\n");
	}
}

void PrintSquareDirectionToPattern() {
	int direction, row, col;

	printf("squareToPatterns table:\n\n");

	for (direction=0; direction<4; direction++) {
		printf("direction %d:\n",direction);
		for (row=0; row<N; row++) {
			for (col=0; col<N; col++) {
				printf("%5d",sdToPattern[row*N+col][direction]);
			}
			printf("\n");
		}
		printf("\n");
	}
}

///////////////////////////////////////////////////////////////////////////////
// Get flips routines
///////////////////////////////////////////////////////////////////////////////

inline void Pos2::GetFlips(bool m_fBlackMove, int square, CUndoInfo& ui) const {
	int cf0, cf1, cf2, cf3;
	int* dToPattern=sdToPattern[square];
	CRowFlip*** dcToPrf=colorsdcToPrf[m_fBlackMove][square];

	// get configs
	cf0 = m_configs[dToPattern[0]];
	cf1 = m_configs[dToPattern[1]];
	cf2 = m_configs[dToPattern[2]];
	cf3 = m_configs[dToPattern[3]];

	// convert configs to black-to-move configs for lookup
	if (!m_fBlackMove) {
		cf0=-cf0;
		cf1=-cf1;
		cf2=-cf2;
		cf3=-cf3;
	}

	// get flips
	ui.InitPrfs(square, dcToPrf[0][cf0],dcToPrf[1][cf1],dcToPrf[2][cf2],dcToPrf[3][cf3]);
}

int Pos2::GetCountAndFlipBB(bool m_fBlackMove, int square, CUndoInfo& ui) {
	int nFlipped;

	GetFlips(m_fBlackMove, square, ui);
	nFlipped=ui.NFlipped();
	if (nFlipped)
		ui.FlipBB(m_bb, m_fBlackMove, m_configs);

	return nFlipped;
}

///////////////////////////////////////////////////////////////////
// Debug and print functions - protected
///////////////////////////////////////////////////////////////////

void FPrintHeader(FILE* fp) {
	int col;

	fprintf(fp, "  ");
	for (col=0; col<N; col++)
		fprintf(fp, "%c ",col+'A');
	fprintf(fp, "\n");
}

void FPrintRow(FILE* fp, int row, int config, int nColors[3]) {
	int col, item;

	// print row number
	fprintf(fp, "%-2d", row+1);

	// break row apart into values and print value
	for (col=0; col<N; col++) {
		item=config%3;
		config=(config-item)/3;
		fprintf(fp, "%c ",ValueToText(item));
		nColors[item]++;
	}

	//print row number at right of row
	fprintf(fp, "%2d\n", row+1);
}

// CalcMovesAndPass - calc moves. decide if the mover needs to pass, and pass if he does
// inputs:
//	none
// outputs:
//	moves - the moves available
//	pass -	0 if the next player can move
//			1 if the next player must pass but game is not over
//			2 if both players must pass and game is over
//	If pass>0 the position is left with one move passed
//		(and you must call UndoPass before UndoMove)
int Pos2::CalcMovesAndPassBB(CMoves& moves) {
	if (CalcMoves(moves))
		return 0;
	else {
		PassBB();
		if (CalcMoves(moves))
			return 1;
		else
			return 2;
	}
}

int Pos2::CalcMovesAndPassBB(CMoves& moves, const CMoves& submoves) {
	if (submoves.HasMoves()) {
		moves=submoves;
		return 0;
	}
	else {
		PassBB();
		if (CalcMoves(moves))
			return 1;
		else
			return 2;
	}
}
int nConsistencyChecks=0;

/**
* Determine which config indexes should be used to print the config
* to use in EvaluatorJ.
*
* jPatternToIConfig[jPattern] = index into Pos2.m_configs
*/
const int jPatternToIConfig[] = {
	0,7,19,26,	// R1
	1,6,20,25,	// R2
	2,5,21,24,	// R3
	3,4,22,23,	// R4
	13,32,		// D8
	12,14,31,33,// D7
	11,15,30,34,// D6
	10,16,29,35,// D5
};

const int nJPatternToIConfig = sizeof(jPatternToIConfig)/sizeof(int);

/////////////////////////////////////////////////////////////
// Valuation routines
/////////////////////////////////////////////////////////////

// Calculate the ids of the two corner patterns for which we have the four edge patterns.
//	Store the ids in ids[0], ids[1].
void Pos2::IdsTrianglePatternsJ(u2* ids, int pattern1, int pattern2, int pattern3, int pattern4) const {
	TConfig config1, config2, config3, config4;
	u4 configsTriangle;

	// get edge patterns
	config1=m_configs[pattern1];
	config2=m_configs[pattern2];
	config3=m_configs[pattern3];
	config4=m_configs[pattern4];

	// calculate config values
	configsTriangle=row1ToTriangle[config1]+row2ToTriangle[config2]+row3ToTriangle[config3]+row4ToTriangle[config4];

	// get configs
	config1=configsTriangle&0xFFFF;
	config2=configsTriangle>>16;
	if (!m_fBlackMove) {
		config1=mapsJ[C4J].NConfigs()-1-config1;
		config2=mapsJ[C4J].NConfigs()-1-config2;
	}

	// get ids
	ids[0]=mapsJ[C4J].ConfigToID(u2(config1));
	ids[1]=mapsJ[C4J].ConfigToID(u2(config2));
}

// get ids for all edge patterns and store in appropriate arrays
void Pos2::IdsEdgePatternsJ(u2* ids2x4, u2* ids2x5, u2* idsEdgeXX, int pattern1, int pattern2) const {
	TConfig config1, config2, configXX;
	u4 configs2x5, configs2x4;

	// get row configs adjusted for side to move
	config1=m_configs[pattern1];
	config2=m_configs[pattern2];
	if (!m_fBlackMove) {
		config1=6560-config1;
		config2=6560-config2;
	}

	// get pattern configs, packed
	configs2x4=row1To2x4[config1]+row2To2x4[config2];
	configs2x5=row1To2x5[config1]+row2To2x5[config2];
	configXX=config1+(config1<<1)+row2ToXX[config2];

	// store ids
	ids2x4[0]=mapsJ[C2x4J].ConfigToID(u2(configs2x4));
	ids2x4[1]=mapsJ[C2x4J].ConfigToID(u2(configs2x4>>16));
	ids2x5[0]=mapsJ[C2x5J].ConfigToID(u2(configs2x5));
	ids2x5[1]=mapsJ[C2x5J].ConfigToID(u2(configs2x5>>16));
	idsEdgeXX[0]=mapsJ[CR1XXJ].ConfigToID(u2(configXX));
}

void Pos2::Ids3x3Patterns(u2* ids, int pattern1, int pattern2, int pattern3) const {
	u4 c2;

	TConfig config1=m_configs[pattern1], config2=m_configs[pattern2], config3=m_configs[pattern3];
	if (!m_fBlackMove) {
		config1=6560-config1;
		config2=6560-config2;
		config3=6560-config3;
	}
	c2=row1To3x3[config1]+row2To3x3[config2]+row3To3x3[config3];
	//cout << "Row configs: " << config1 << " " << config2 << " " << config1 << " -> " << (c2&0xFFFF) << ", " << (c2>>16) << "\n";
	ids[0]=Base3ToR33ID(u2(c2));
	ids[1]=Base3ToR33ID(u2(c2>>16));
}

/**
* m_configs[iConfig] has size (number of discs) equal to nDiscsFromIConfig[iConfig].
*
* This table only does straight lines and diagonals, since that's all we use
**/
static int nDiscsFromIConfig[] = {
	8,8,8,8,8,8,8,8,
	3,4,5,6,7,8,7,6,5,4,3,
	8,8,8,8,8,8,8,8,
	3,4,5,6,7,8,7,6,5,4,3
};

/**
* Store mover potential mobility pattern ID at ids[jPattern] 
* and enemy potential mobility pattern ID at ids[jPattern+1].
* 
* Increment jPattern twice before returning.
*/
void Pos2::AppendPotMobPatterns(u2* ids, u2& jPattern) const {
	ids[jPattern]=ids[jPattern+1]=0;
	for (int iConfig=0; iConfig<38; iConfig++) {
		const u2 config=u2(m_configs[iConfig]);
		const u2 mapsize=nDiscsFromIConfig[iConfig];
		ids[jPattern]+=configToPotMob[m_fBlackMove][mapsize][config];
		ids[jPattern+1]+=configToPotMob[!m_fBlackMove][mapsize][config];
	}
	if (ids[jPattern]>=63)
		ids[jPattern]=63;
	ids[jPattern]=(ids[jPattern]+potMobAdd)>>potMobShift;
	jPattern++;
	if (ids[jPattern]>=63)
		ids[jPattern]=63;
	ids[jPattern]=(ids[jPattern]+potMobAdd)>>potMobShift;
	jPattern++;
}

void Pos2::GetIDsJ(u2 ids[nPatternsJ]) const {
	u2 jPattern, config;
	u4 nMovesPlayer, nMovesOpponent;

	// straight lines.
	// The first 30 JPatterns get their IDs directly from m_configs,
	// though they are reordered.
	for (jPattern=0; jPattern<nJPatternToIConfig; jPattern++) {
		const int iConfig=jPatternToIConfig[jPattern];
		const int blackConfig = m_configs[iConfig];

		const int iMapJ=patternToMapJ[jPattern];
		const CMap mapJ = mapsJ[iMapJ];

		if (m_fBlackMove)
			config=u2(blackConfig);
		else
			config=u2(mapJ.NConfigs()-blackConfig-1);
		ids[jPattern]=mapJ.ConfigToID(config);
	}

	// C4
	IdsTrianglePatternsJ(ids+30, 0, 1, 2, 3);
	IdsTrianglePatternsJ(ids+32, 7, 6, 5, 4);

	// C2x4J, etc.
	IdsEdgePatternsJ(ids+34, ids+42, ids+50, 0, 1);
	IdsEdgePatternsJ(ids+36, ids+44, ids+51, 7, 6);
	IdsEdgePatternsJ(ids+38, ids+46, ids+52,19,20);
	IdsEdgePatternsJ(ids+40, ids+48, ids+53,26,25);
	jPattern=54;

	// mobility
	CalcMobility(nMovesPlayer, nMovesOpponent);
	config=u2(nMovesPlayer);
	ids[jPattern]=config;
	jPattern++;
	config=u2(nMovesOpponent);
	ids[jPattern]=config;
	jPattern++;

	AppendPotMobPatterns(ids, jPattern);

	// parity
	config=NEmpty()&1;
	ids[jPattern]=config;

	for (jPattern=0; jPattern<59; jPattern++)
		assert(ids[jPattern]<=mapsJ[patternToMapJ[jPattern]].NIDs());
}
