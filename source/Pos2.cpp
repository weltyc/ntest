// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

#include "Pos2All.h"
#include "BitBoard.h"
#include "Utils.h"
#include "Cache.h"
#include "Evaluator.h"
#include "Debug.h"
#include <ctype.h>
#include <stdio.h>
#include "NodeStats.h"
#include "Patterns.h"
#include "Book.h"
#include "options.h"
#include "TreeDebug.h"
#include "MPCStats.h"
#include <algorithm>
#include "Moves.h"
#include "FastFlip.h"
#include "QPosition.h"
#include <iomanip>
#include "math.h"
#include "Timing.h"
#include <fstream>
#include "MmxSolve.h"
#include "../GDK/test.h"
#include "types.h"
#include "test.h"

const int potMobAdd=0;
const int potMobShift=1;

// position capture info
const bool fCapturePositions=false;
const int cpLeftShift=21;
extern FILE* cpFile;
extern int nCapturedPositions;
int nCaptureWait=0;

// book search depths
const int kBookReadDepth=6;	// maximum depth to read from book
const int kBookWriteDepth=1; // maximum depth to write to book
extern int hBookRead, hBookWrite;
const int nAbortCheck=1<<14; // check for aborts every few evals

// search params
const int khSortDefault=3;
extern int hSort;
int hSolveNoParity=6;
extern int hNegascout;
CEvaluator* evaluator;

// debugging constants
const bool fCNAPrintEvents = false;
const bool fCNAPrintTree = false;
const bool fCNAPrintPositions = false;
extern int nEmptyCNAPrint;
extern bool fPrintTimeUsed;
extern bool fPrintWLD;
const bool fPrintBookReads=false;
extern int* nBookReads;

u4 holeParity;

/////////////////////////////////////////////////////////
// Initialization routines
////////////////////////////////////////////////////////


class CInitPos2 {
public:
	static void Init();
	static void Clean();

	CInitPos2() {Init();};
	~CInitPos2() {Clean();};
protected:
	static bool fInit;
	static void InitNewHash();
	static void InitHashLine(i4* hashtable, i4& hash, bool fCenter2=false);
} initPos2;

bool CInitPos2::fInit=false;

i4 hash1[6561], hash2[6561], hash3[6561], hash4[6561], 
	hash5[6561], hash6[6561], hash7[6561], hash0[6561];

void CInitPos2::Init() {
	if (!fInit) {
		// initialize position capture info
		if (fCapturePositions) {
			string fn(fnBaseDir);
			fn+="captured.pos";
			cpFile=fopen(fn.c_str(),"a+b");
			if (!cpFile)
				fprintf(stderr, "Can't open cpFile!!!\n");
			SetRandomCapture();
		}
		// Initialize active table for edges and diagonals
		InitNewHash();
		fInit=true;
	}
}

void CInitPos2::InitHashLine(i4* hashtable, i4& hash, bool fCenter2) {
	int i;
	for (i=0; i<6561; i++)
		hashtable[i]=hash*(i-3280);
	hash*=6561;
}

void CInitPos2::InitNewHash() {
	i4 hash;

	hash=1;
	InitHashLine(hash0, hash);
	InitHashLine(hash1, hash);
	InitHashLine(hash2, hash);
	InitHashLine(hash3, hash, true);
	InitHashLine(hash4, hash, true);
	InitHashLine(hash5, hash);
	InitHashLine(hash6, hash);
	InitHashLine(hash7, hash);
}

void CInitPos2::Clean() {
	if (fInit) {
		fInit=false;
	}
}

/////////////////////////////////////////////////////////
// lookup tables used to calculate minimal reflection
////////////////////////////////////////////////////////

class CBookInit {
public:
	CBookInit();
} bookInit;

int configToRconfig[6561];

CBookInit::CBookInit(){
	int config, rconfig;
	int trits[16];

	for (config=0; config<6561; config++) {
		ConfigToTrits(config,8,trits);
		rconfig=TritsToRConfig(trits,8);
		configToRconfig[config]=rconfig;
	}
}

class CReflection  {
public:
	union {
		u1 u1s[16];
		u2 u2s[8];
		u4 u4s[4];
	};

	CReflection& operator=(const CReflection&r2);
};

inline bool operator<(const CReflection& r1, const CReflection& r2) {
	if (r1.u4s[0]!=r2.u4s[0])
		return r1.u4s[0]<r2.u4s[0];
	if (r1.u4s[1]!=r2.u4s[1])
		return r1.u4s[1]<r2.u4s[1];
	if (r1.u4s[2]!=r2.u4s[2])
		return r1.u4s[2]<r2.u4s[2];
	return r1.u4s[3]<r2.u4s[3];
}

inline CReflection& CReflection::operator=(const CReflection& r2) {
	u4s[0]=r2.u4s[0];
	u4s[1]=r2.u4s[1];
	u4s[2]=r2.u4s[2];
	u4s[3]=r2.u4s[3];

	return *this;
}


///////////////////////////////////////////////////////////////////////////////
// hash calculations
///////////////////////////////////////////////////////////////////////////////

u4 Hash() {
	int hash;
	hash=hash0[configs[0]] + hash1[configs[1]] +
		hash2[configs[2]] + hash3[configs[3]] +
		hash4[configs[4]] + hash5[configs[5]] +
		hash6[configs[6]] + hash7[configs[7]];
	return hash;
}

///////////////////////////////////////////////////////////////////////////////
// position variables
///////////////////////////////////////////////////////////////////////////////

extern CCache* cache;

// 'global variables' stored here for customer routines but passed as parameters by internal routines
int nEmpty_, nDiscDiff_;
bool fBlackMove_;


// initialize position.
void Initialize() {
	Initialize("...........................O*......*O...........................", true);
}

// inputs:
//	text representing the board
// updates global variables:
//	nEmpty_ - number of empty squares on the board
//	nDiscDiff_ - mover squares-opponent squares
void Initialize(const char* sBoard, bool fBlackMove) {
	int square, direction, pattern, value;
	TConfig* pConfig;

	// clear configs
	for (pattern=0; pattern<=knPats; pattern++)
		configs[pattern]=0;
	nDiscDiff_=nEmpty_=0;

	// add each square to the appropriate configs
	for (square=0; square<NN; square++) {
		value=TextToValue(sBoard[square]);
		// calculate nDiscDiff and nEmpty.
		nDiscDiff_+=value-1;
		if (value==EMPTY)
			nEmpty_++;

		for (direction=0; direction<4; direction++) {
			pConfig=sdToPConfig[square][direction];
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
				_ASSERT(0);
			}
		}
	}

	fBlackMove_=fBlackMove;
	if (!fBlackMove)
		nDiscDiff_=-nDiscDiff_;
	bb.Initialize(sBoard, fBlackMove_);
}

void Initialize(const CBitBoard& bb, bool fBlackMove) {
	char sBoard[NN+1];

	bb.GetSBoard(sBoard, fBlackMove);
	Initialize(sBoard, fBlackMove);
}


///////////////////////////////////////////////////////////////////////////////
// Move routines
///////////////////////////////////////////////////////////////////////////////

// make a move on the board. Update fBlackMove and remove the square from the empty list.
// precondition: this is a legal move
void MakeMoveBB(int square, int& nFlipped, CUndoInfo& ui) {
	nFlipped=GetCountAndFlipBB(fBlackMove_, square, ui);
#ifdef _DEBUG
	if(!nFlipped) {
		Print();
		char buf[65];
		cout << "Board Text: " << GetText(buf) << "\n";
		printf("move %c%c flips no discs\n",ColText(square),RowText(square));
		_ASSERT(0);
	}
#endif
	fBlackMove_=!fBlackMove_;
	nDiscDiff_=-(nFlipped+nFlipped+1+nDiscDiff_);
	nEmpty_--;
	bb.InvertColors();
	nBBFlips++;
#if CHECBB_CONSISTENCY
	CheckConsistency();
#endif
}

void MakeMoveBB(int square) {
	CUndoInfo ui;
	int nFlipped;

	MakeMoveBB(square, nFlipped, ui);
}

void MakeMoveAndPassBB(CMove move, int& nFlipped, CUndoInfo& ui, int& pass) {
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
//		Update configs, configsBB, fBlackMove_, nDiscDiff_, nEmpty_, and remove the square from the empty list.
// output:
//		undo info needed for undo info
// return:
//		the number of discs flipped (0 if not a legal move)

void UndoMoveBB(int square, int nFlipped, CUndoInfo& ui) {
	bb.InvertColors();
	ui.FlipBB(fBlackMove_);
	fBlackMove_=!fBlackMove_;
	nDiscDiff_=-(nFlipped+nFlipped+1+nDiscDiff_);
	nEmpty_++;
	_ASSERT(nFlipped);
}

void UndoMoveAndPassBB(CMove move, int nFlipped, CUndoInfo& ui, int& nPass) {
	if (nPass)
		UndoPassBB();
	UndoMoveBB(move.Square(), nFlipped, ui);
}

///////////////////////////////////////////////////////////////////////////////
// Debug and print routines
///////////////////////////////////////////////////////////////////////////////

void Print() {
	Print(fBlackMove_);
}

void Print(bool fBlackMove) {
	FPrint(stdout,fBlackMove);
}

void FPrint(FILE* fp) {
	FPrint(fp, fBlackMove_);
}

void FPrint(FILE* fp, bool fBlackMove) {
	int row, nColors[3];

	FPrintHeader(fp);

	nColors[0]=nColors[1]=nColors[2]=0;
	for (row=0; row<N; row++)
		FPrintRow(fp, row, configs[row], nColors);

	FPrintHeader(fp);

	fprintf(fp, "\nBlack: %d  White: %d  Empty: %d\n\n",nColors[2],nColors[0],nColors[1]);
	fprintf(fp, "%s to move\n",fBlackMove?"Black":"White");
}

void PrintConfigs() {
	int pattern=0;

	printf("R:  ");
	while (pattern<8)
		printf("%6d",configs[pattern++]);

	printf("\n/: ");
	while (pattern<19)
		printf("%6d",configs[pattern++]);

	printf("\nC: ");
	while (pattern<27)
		printf("%6d",configs[pattern++]);

	printf("\n\\: ");
	while (pattern<38)
		printf("%6d",configs[pattern++]);

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

char* GetText(char* sBoard) {
	int row,col,sq,item,pattern;

	for (sq=row=0; row<N; row++) {
		pattern=configs[row];
		for (col=0; col<N; col++) {
			item=pattern%3;
			pattern=(pattern-item)/3;
			sBoard[sq++]=ValueToText(item);
		}
	}

	sBoard[sq]=0;
	return sBoard;
}

i1* GetItems(i1* itemsBoard) {
	int row,col,sq,item,pattern;

	for (sq=row=0; row<N; row++) {
		pattern=configs[row];
		for (col=0; col<N; col++) {
			item=pattern%3;
			if (item<-1)
				item+=3;
			else if (item>1)
				item-=3;
			pattern=(pattern-item)/3;
			itemsBoard[sq++]=item;
		}
	}

	return itemsBoard;
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

inline void GetFlips(bool fBlackMove, int square, CUndoInfo& ui) {
	int cf0, cf1, cf2, cf3;
	TConfig** dToPConfig=sdToPConfig[square];
	CRowFlip*** dcToPrf=colorsdcToPrf[fBlackMove][square];

	// get configs
	cf0 = *(dToPConfig[0]);
	cf1 = *(dToPConfig[1]);
	cf2 = *(dToPConfig[2]);
	cf3 = *(dToPConfig[3]);

	// convert configs to black-to-move configs for lookup
	if (!fBlackMove) {
		cf0=-cf0;
		cf1=-cf1;
		cf2=-cf2;
		cf3=-cf3;
	}

	// get flips
	ui.prfs[0]=dcToPrf[0][cf0];
	ui.prfs[1]=dcToPrf[1][cf1];
	ui.prfs[2]=dcToPrf[2][cf2];
	ui.prfs[3]=dcToPrf[3][cf3];

#ifdef _DEBUG
	if (!(ui.prfs[0] && ui.prfs[1] && ui.prfs[2] && ui.prfs[3])) {
		printf("\nERR in GetFlips() at square %c%c:\n",ColText(square),RowText(square));
		Print();
		printf ("\nBitboard was:\n");
		bb.Print(fBlackMove_);
		_ASSERT(0);
	}
#endif
}

int GetCountAndFlipBB(bool fBlackMove, int square, CUndoInfo& ui) {
	int nFlipped;

	GetFlips(fBlackMove, square, ui);
	nFlipped=ui.NFlipped();
	if (nFlipped)
		ui.FlipBB(fBlackMove);

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

inline int CalcMoves(CMoves& moves) {
	return bb.CalcMoves(moves);
}

extern bool fWinnerGetsEmpties;

int TerminalValue() {
	if (kStoneValue==128)
		return nDiscDiff_<<7;
	else if (fWinnerGetsEmpties) {
		int terminal=nDiscDiff_;
		if (terminal>0)
			terminal+=nEmpty_;
		else if (terminal<0)
			terminal-=nEmpty_;
		return terminal*kStoneValue;
	}
	else
		return nDiscDiff_*kStoneValue;
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
int CalcMovesAndPassBB(CMoves& moves) {
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

int CalcMovesAndPassBB(CMoves& moves, const CMoves& submoves) {
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

void TestIU() {
	int nFlipped;
	CUndoInfo ui;
	const int F5=045, F6=055;
	char sBoard[65];

	Initialize();
	MakeMoveBB(F5);

	TEST(!(bb.empty&bb.mover));
	TEST(!strcmp(bb.GetSBoard(sBoard, fBlackMove_)
		,"---------------------------O*------***--------------------------"));
	TEST(fBlackMove_==false);

	MakeMoveBB(F6,nFlipped,ui);
	TEST(nFlipped==1);
	TEST(!(bb.empty&bb.mover));
	TEST(!strcmp(bb.GetSBoard(sBoard, fBlackMove_)
		,"---------------------------O*------*O*-------O------------------"));
	TEST(fBlackMove_==true);

	UndoMoveBB(F5,nFlipped,ui);
	TEST(nFlipped==1);

	TEST(!(bb.empty&bb.mover));
	TEST(!strcmp(bb.GetSBoard(sBoard, fBlackMove_)
		,"---------------------------O*------***--------------------------"));
	TEST(fBlackMove_==false);
}

void TestEval() {
	cout << "TestEval()\n";
	std::vector<COsGame> testGames = LoadTestGames();
	evaluator = CEvaluator::FindEvaluator('J','A');
	const COsMoveList& ml = testGames[0].ml;
	for (int iff = 0; iff <=1; iff++) {
		cout << "{";
		Initialize();
		for (int i=0; i<ml.size(); i++) {
			const COsMove& mv = ml.at(i).mv;
			int square = Square(mv.Row(), mv.Col());
			MakeMoveBB(square);
			if (i==20) {
				cout << StaticValue(iff) << ", ";
			}
		}
		cout << "};\n";
	}
}



int nConsistencyChecks=0;

const int jPatternToKPattern[] = {
	0,7,19,26,	// R1
	1,6,20,25,	// R2
	2,5,21,24,	// R3
	3,4,22,23,	// R4
	13,32,		// D8
	12,14,31,33,// D7
	11,15,30,34,// D6
	10,16,29,35,// D5
};

const int nJPatternToKPattern = sizeof(jPatternToKPattern)/sizeof(int);

/////////////////////////////////////////////////////////////
// Valuation routines
/////////////////////////////////////////////////////////////

// Calculate the ids of the two corner patterns for which we have the four edge patterns.
//	Store the ids in ids[0], ids[1].
void IdsTrianglePatternsJ(u2* ids, int pattern1, int pattern2, int pattern3, int pattern4) {
	TConfig config1, config2, config3, config4;
	u4 configsTriangle;

	// get edge patterns
	config1=configs[pattern1];
	config2=configs[pattern2];
	config3=configs[pattern3];
	config4=configs[pattern4];

	// calculate config values
	configsTriangle=row1ToTriangle[config1]+row2ToTriangle[config2]+row3ToTriangle[config3]+row4ToTriangle[config4];

	// get configs
	config1=configsTriangle&0xFFFF;
	config2=configsTriangle>>16;
	if (!fBlackMove_) {
		config1=mapsJ[C4J].NConfigs()-1-config1;
		config2=mapsJ[C4J].NConfigs()-1-config2;
	}

	// get ids
	ids[0]=mapsJ[C4J].ConfigToID(u2(config1));
	ids[1]=mapsJ[C4J].ConfigToID(u2(config2));
}

// get ids for all edge patterns and store in appropriate arrays
void IdsEdgePatternsJ(u2* ids2x4, u2* ids2x5, u2* idsEdgeXX, int pattern1, int pattern2) {
	TConfig config1, config2, configXX;
	u4 configs2x5, configs2x4;

	// get row configs adjusted for side to move
	config1=configs[pattern1];
	config2=configs[pattern2];
	if (!fBlackMove_) {
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

void Ids3x3Patterns(u2* ids, int pattern1, int pattern2, int pattern3) {
	u4 c2;

	TConfig config1=configs[pattern1], config2=configs[pattern2], config3=configs[pattern3];
	if (!fBlackMove_) {
		config1=6560-config1;
		config2=6560-config2;
		config3=6560-config3;
	}
	c2=row1To3x3[config1]+row2To3x3[config2]+row3To3x3[config3];
	//cout << "Row configs: " << config1 << " " << config2 << " " << config1 << " -> " << (c2&0xFFFF) << ", " << (c2>>16) << "\n";
	ids[0]=Base3ToR33ID(u2(c2));
	ids[1]=Base3ToR33ID(u2(c2>>16));
}

void GetIDsJ(u2 ids[nPatternsJ]) {
	u2 jPattern, kPattern, pattern2, config, mapsize;
	u4 nMovesPlayer, nMovesOpponent;
	int iMap;

	// straight lines
	for (jPattern=0; jPattern<nJPatternToKPattern; jPattern++) {
		kPattern=jPatternToKPattern[jPattern];
		iMap=patternToMapJ[jPattern];
		_ASSERT(mapsJ[iMap].NConfigs()==mapsK[patternToMapK[kPattern]].NConfigs());
		if (fBlackMove_)
			config=u2(configs[kPattern]);
		else
			config=u2(mapsJ[iMap].NConfigs()-configs[kPattern]-1);
		ids[jPattern]=mapsK[iMap].ConfigToID(config);
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
	// if we're not using mobility the values are set to the arbitrary
	// value of 1. (Not 0, since the evaluator might try to pass if it receives a mobility of 0)
	CalcMobility(nMovesPlayer, nMovesOpponent);

	config=u2(nMovesPlayer);
	ids[jPattern]=config;
	jPattern++;
	config=u2(nMovesOpponent);
	ids[jPattern]=config;
	jPattern++;

	// potential mobility
	ids[jPattern]=ids[jPattern+1]=0;
	for (pattern2=0; pattern2<38; pattern2++) {
		config=u2(configs[pattern2]);
		mapsize=mapsK[patternToMapK[pattern2]].size;
		ids[jPattern]+=configToPotMob[fBlackMove_][mapsize][config];
		ids[jPattern+1]+=configToPotMob[!fBlackMove_][mapsize][config];
	}
	if (ids[jPattern]>=63)
		ids[jPattern]=63;
	ids[jPattern]=(ids[jPattern]+potMobAdd)>>potMobShift;
	jPattern++;
	if (ids[jPattern]>=63)
		ids[jPattern]=63;
	ids[jPattern]=(ids[jPattern]+potMobAdd)>>potMobShift;
	jPattern++;

	// parity
	config=nEmpty_&1;
	ids[jPattern]=config;

	for (jPattern=0; jPattern<59; jPattern++)
		_ASSERT(ids[jPattern]<=mapsJ[patternToMapJ[jPattern]].NIDs());

	if (false)
		for (jPattern=8; jPattern<=59; jPattern++)
			ids[jPattern]=0;
}

void SetRandomCapture() {
	nCaptureWait = (rand()*20000)/(RAND_MAX + 1);
}

// fastest-first adjustment
inline void ValueAdjust(u4 mp, int iff, CValue& result) {
	// standard boring
	result+=CValue(mp<<iff);
}

const bool fTableFF=true;

int ffBonus[NN];

void InitFFBonus() {
	int i;

	ffBonus[0]=0;	// because log(0) doesn't exist
	for (i=1; i<NN;i++) {
			ffBonus[i]=int(20*kStoneValue*log(double(i)));
	}
}

inline CValue StaticValue(int iff) {
	int pass;
	u4 nMovesPlayer, nMovesOpponent;
	CValue result;
	_ASSERT(evaluator);
	nEvalsQuick++;

	// check for out-of-time condition
	if (nEvalsQuick>=nAbortCheck) {
		WipeNodeStats();
		if (CheckAbort())
			return 0;
	}

	// capture position if we're doing that
	if (fCapturePositions && cpFile && (--nCaptureWait<0)) {
		nCapturedPositions++;
		bb.Write(cpFile);
		SetRandomCapture();
	}

	// calculate mobility
	pass=CalcMobility(nMovesPlayer, nMovesOpponent);

	// calculate value adjusting for passes
	switch(pass) {
	case 2:
		result=TerminalValue();
		break;
	case 1:
		PassBase();
		result=-evaluator->EvalMobs(nMovesOpponent, nMovesPlayer);
		UndoPassBase();
		break;
	case 0:
		result=evaluator->EvalMobs(nMovesPlayer, nMovesOpponent);
	}

	if (false) {
		// Constrain value to be in [-kMaxHeuristic, kMaxHeuristic]
		if (result<-kMaxHeuristic)
			result=-kMaxHeuristic;
		else if (result>kMaxHeuristic)
			result=kMaxHeuristic;
	}

	if (fTableFF) {
		if (iff)
			result+=ffBonus[nMovesPlayer];
	}
	else
		result+=CValue((nMovesPlayer<<iff)-nMovesPlayer);

	return result;
}

// iDebugEval prints out debugging information in the static evaluation routine.
//	0 - none
//	1 - final value
//	2 - board, final value and all components
// only works with OLD_EVAL set to 1 (slower old version)
const int iDebugEval=0;
#define OLD_EVAL 0

inline TCoeff ConfigValue(const TCoeff* pcmove, TConfig config, int map, int offset) {
	TCoeff value=pcmove[config+offset];
	if (iDebugEval>1)
		printf("Config: %5hu, Id: %5hu, Value: %4d\n", config, mapsJ[map].ConfigToID(config), value);
	return value;
}

inline TCoeff PatternValue(const TCoeff* pcmove, int pattern, int map, int offset) {
	TConfig config=configs[pattern];
	TCoeff value=pcmove[config+offset];
	if (iDebugEval>1)
		printf("Pattern: %2d - Config: %5hu, Id: %5hu, Value: %4d (pms %2d, %2d)\n",
				pattern, config, mapsJ[map].ConfigToID(config), value>>16, (value>>8)&0xFF, value&0xFF);
	return value;
}

inline TCoeff ConfigPMValue(const TCoeff* pcmove, TConfig config, int map, int offset) {
	TCoeff value=pcmove[config+offset];
	if (iDebugEval>1)
		printf("Config: %5hu, Id: %5hu, Value: %4d (pms %2d, %2d)\n",
				config, mapsJ[map].ConfigToID(config), value>>16, (value>>8)&0xFF, value&0xFF);
	return value;
}

////////////////////////////////////////
// J evaluation
////////////////////////////////////////

// offsetJs for coefficients
const int offsetJR1=0, sizeJR1=6561,
	offsetJR2=offsetJR1+sizeJR1, sizeJR2=6561,
	offsetJR3=offsetJR2+sizeJR2, sizeJR3=6561,
	offsetJR4=offsetJR3+sizeJR3, sizeJR4=6561,
	offsetJD8=offsetJR4+sizeJR4, sizeJD8=6561,
	offsetJD7=offsetJD8+sizeJD8, sizeJD7=2187,
	offsetJD6=offsetJD7+sizeJD7, sizeJD6= 729,
	offsetJD5=offsetJD6+sizeJD6, sizeJD5= 243,
	offsetJTriangle=offsetJD5+sizeJD5, sizeJTriangle=  9*6561,
	offsetJC4=offsetJTriangle+sizeJTriangle, sizeJC4=6561,
	offsetJC5=offsetJC4+sizeJC4, sizeJC5=6561*9,
	offsetJEX=offsetJC5+sizeJC5, sizeJEX=6561*9,
	offsetJMP=offsetJEX+sizeJEX, sizeJMP=64,
	offsetJMO=offsetJMP+sizeJMP, sizeJMO=64,
	offsetJPMP=offsetJMO+sizeJMO, sizeJPMP=64,
	offsetJPMO=offsetJPMP+sizeJPMP, sizeJPMO=64,
	offsetJPAR=offsetJPMO+sizeJPMO, sizeJPAR=2;

// value all the edge patterns. return the sum of the values.
TCoeff ValueEdgePatternsJ(const TCoeff* pcmove, int pattern1, int pattern2) {
	TConfig config1, config2, configXX;
	u4 configs2x5;
	TCoeff value;

	value=0;
	config1=configs[pattern1];
	config2=configs[pattern2];

	configs2x5=row1To2x5[config1]+row2To2x5[config2];
	configXX=config1+(config1<<1)+row2ToXX[config2];
	value+=ConfigValue(pcmove, configs2x5&0xFFFF, C2x5J, offsetJC5);
	value+=ConfigValue(pcmove, configs2x5>>16,    C2x5J, offsetJC5);
	value+=ConfigValue(pcmove, config1+(config1<<1)+row2ToXX[config2],CR1XXJ, offsetJEX);

	// in J-configs, the values are multiplied by 65536
	//_ASSERT((value&0xFFFF)==0);
	return value;
}

// value all the triangle patterns. return the sum of the values.
TCoeff ValueTrianglePatternsJ(const TCoeff* pcmove, int pattern1, int pattern2, int pattern3, int pattern4) {
	TConfig config1, config2, config3, config4;
	u4 configsTriangle;
	TCoeff value;

	value=0;
	config1=configs[pattern1];
	config2=configs[pattern2];
	config3=configs[pattern3];
	config4=configs[pattern4];

	configsTriangle=row1ToTriangle[config1]+row2ToTriangle[config2]+row3ToTriangle[config3]+row4ToTriangle[config4];
	value+=ConfigPMValue(pcmove, configsTriangle&0xFFFF, C4J, offsetJTriangle);
	value+=ConfigPMValue(pcmove, configsTriangle>>16,    C4J, offsetJTriangle);

	return value;
}

CValue ValueJMobs(TCoeff *const pcoeffs[2], u4 nMovesPlayer, u4 nMovesOpponent) {
	TCoeff value;
	TCoeff *pcmove=pcoeffs[fBlackMove_];

	value=0;

	if (iDebugEval>1) {
		cout << "----------------------------\n";
		bb.Print(fBlackMove_);
		cout << (fBlackMove_?"Black":"White") << " to move\n\n";
	}

#if OLD_EVAL
	// rows
	value+=PatternValue(pcmove, 0, R1J, offsetJR1);
	value+=PatternValue(pcmove, 1, R2J, offsetJR2);
	value+=PatternValue(pcmove, 2, R3J, offsetJR3);
	value+=PatternValue(pcmove, 3, R4J, offsetJR4);
	value+=PatternValue(pcmove, 4, R4J, offsetJR4);
	value+=PatternValue(pcmove, 5, R3J, offsetJR3);
	value+=PatternValue(pcmove, 6, R2J, offsetJR2);
	value+=PatternValue(pcmove, 7, R1J, offsetJR1);

	// / diagonal
	value+=PatternValue(pcmove, 10, D5J, offsetJD5);
	value+=PatternValue(pcmove, 11, D6J, offsetJD6);
	value+=PatternValue(pcmove, 12, D7J, offsetJD7);
	value+=PatternValue(pcmove, 13, D8J, offsetJD8);
	value+=PatternValue(pcmove, 14, D7J, offsetJD7);
	value+=PatternValue(pcmove, 15, D6J, offsetJD6);
	value+=PatternValue(pcmove, 16, D5J, offsetJD5);

	// cols
	value+=PatternValue(pcmove, 19, R1J, offsetJR1);
	value+=PatternValue(pcmove, 20, R2J, offsetJR2);
	value+=PatternValue(pcmove, 21, R3J, offsetJR3);
	value+=PatternValue(pcmove, 22, R4J, offsetJR4);
	value+=PatternValue(pcmove, 23, R4J, offsetJR4);
	value+=PatternValue(pcmove, 24, R3J, offsetJR3);
	value+=PatternValue(pcmove, 25, R2J, offsetJR2);
	value+=PatternValue(pcmove, 26, R1J, offsetJR1);

	// \ diagonal
	value+=PatternValue(pcmove, 29, D5J, offsetJD5);
	value+=PatternValue(pcmove, 30, D6J, offsetJD6);
	value+=PatternValue(pcmove, 31, D7J, offsetJD7);
	value+=PatternValue(pcmove, 32, D8J, offsetJD8);
	value+=PatternValue(pcmove, 33, D7J, offsetJD7);
	value+=PatternValue(pcmove, 34, D6J, offsetJD6);
	value+=PatternValue(pcmove, 35, D5J, offsetJD5);
#else
	const TCoeff* const pR1 = pcmove+offsetJR1;
	value+=pR1[configs[0]] + pR1[configs[7]] + pR1[configs[19]] + pR1[configs[26]];
	const TCoeff* const pR2 = pcmove+offsetJR2;
	value+=pR2[configs[1]] + pR2[configs[6]] + pR2[configs[20]] + pR2[configs[25]];
	const TCoeff* const pR3 = pcmove+offsetJR3;
	value+=pR3[configs[2]] + pR3[configs[5]] + pR3[configs[21]] + pR3[configs[24]];
	const TCoeff* const pR4 = pcmove+offsetJR4;
	value+=pR4[configs[3]] + pR4[configs[4]] + pR4[configs[22]] + pR4[configs[23]];
	const TCoeff* const pD5 = pcmove+offsetJD5;
	value+=pD5[configs[10]] + pD5[configs[16]] + pD5[configs[29]] + pD5[configs[35]];
	const TCoeff* const pD6 = pcmove+offsetJD6;
	value+=pD6[configs[11]] + pD6[configs[15]] + pD6[configs[30]] + pD6[configs[34]];
	const TCoeff* const pD7 = pcmove+offsetJD7;
	value+=pD7[configs[12]] + pD7[configs[14]] + pD7[configs[31]] + pD7[configs[33]];
	const TCoeff* const pD8 = pcmove+offsetJD8;
	value+=pD8[configs[13]] + pD8[configs[32]];
#endif
	

	// Triangle patterns in corners
	value+=ValueTrianglePatternsJ(pcmove, 0, 1, 2, 3);
	value+=ValueTrianglePatternsJ(pcmove, 7, 6, 5, 4);

	if (iDebugEval>1)
		printf("Straight lines done. Value so far: %d.\n",value>>16);

	// Take apart packed information about pot mobilities
	int nPMO=(value>>8) & 0xFF;
	int nPMP=value&0xFF;
	if (iDebugEval>1)
		printf("Raw pot mobs: %d, %d\n", nPMO,nPMP);
	nPMO=(nPMO+potMobAdd)>>potMobShift;
	nPMP=(nPMP+potMobAdd)>>potMobShift;
	value>>=16;

	// pot mobility
	value+=ConfigValue(pcmove, nPMP, PM1J, offsetJPMP);
	value+=ConfigValue(pcmove, nPMO, PM2J, offsetJPMO);

	if (iDebugEval>1)
		printf("Potential mobility done. Value so far: %d.\n",value);

	// 2x4, 2x5, edge+2X patterns
	value+=ValueEdgePatternsJ(pcmove, 0, 1);
	value+=ValueEdgePatternsJ(pcmove, 7, 6);
	value+=ValueEdgePatternsJ(pcmove, 19, 20);
	value+=ValueEdgePatternsJ(pcmove, 26, 25);

	if (iDebugEval>1)
		printf("Corners done. Value so far: %d.\n",value);

	// mobility
	value+=ConfigValue(pcmove, nMovesPlayer, M1J, offsetJMP);
	value+=ConfigValue(pcmove, nMovesOpponent, M2J, offsetJMO);

	if (iDebugEval>1)
		printf("Mobility done. Value so far: %d.\n",value);

	// parity
	value+=ConfigValue(pcmove, nEmpty_&1, PARJ, offsetJPAR);

	if (iDebugEval>0)
		printf("Total Value= %d\n", value);

	return CValue(value);
}

///////////////////////////////////////////////////////////////////////
// Tree Search Routines
// Unless otherwise specified, all value routines have the following
//	inputs, outputs, and preconditions:
// Inputs:
//	height - height of search
//	alpha, beta - bounds of search are (alpha, beta).
//	moves - moves available from the position
//	iPrune - pruning index for MPC cuts, or 0 for no cuts
// Outputs:
//	best - best move and value
// Preconditions:
//	The position must be set
//	hBookRead must be set (to greater than height if no book)
//	There must be a valid move from the position
///////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////
// ValueBookCacheOrTree - Get value from book, or call ValueCacheOrTree()
//	Returns:
//	 the value
//	Outputs:
//	 Does not output best move and value since book won't contain best move
///////////////////////////////////////////////////////////////////////

CValue ValueBookCacheOrTree(int height, CValue alpha, CValue beta, CMoves& moves,
						   int iPrune) {

	CMVK best;

	if (height>=hBookRead) {
		CHeightInfo hi(height, iPrune, false);
		if (book->Load(bb, hi, alpha, beta, best.value, nEmpty_)) {
			if (fPrintBookReads)
				printf("br%d!",height-hBookRead);
			return best.value;
		}
	}

	ValueCacheOrTree(height, alpha, beta, moves, iPrune, best);
	_ASSERT(abortRound || iPrune || (height+hSolverStart!=nEmpty_) || (best.value<=64*kStoneValue && best.value>=-64*kStoneValue));

	return best.value;
}

///////////////////////////////////////////////////////////////////////
// ValueCacheOrTree - check the cache for the move. If there, return.
//		If not, call ValueTree and save the result to cache.
///////////////////////////////////////////////////////////////////////

void ValueCacheOrTree(int height, CValue alpha, CValue beta, CMoves& moves,
						   int iPrune, CMoveValue& best) {
	CValue searchAlpha, searchBeta;
	CCacheData* cd;
	u4 hash;
	int iffCache;

	// initialize search values
	searchAlpha=alpha;
	searchBeta=beta;

	if (height<3)
		iPrune=false;

	// Check if the position is in cache
	const bool fNewHash=false;
	if (fNewHash)
		hash=Hash();
	else
		hash=bb.Hash();

	if (cd=cache->FindOld(bb, hash)) {
		// cutoff if we can; otherwise update searchAlpha, searchBeta and set the best move
		if (cd->Load(height, iPrune, nEmpty_, alpha, beta, best.move, iffCache, searchAlpha, searchBeta, best.value)) {
			TREEDEBUG_CACHE;
			return;
		}
		_ASSERT(searchAlpha<searchBeta);
		moves.SetBest(best.move);
		_ASSERT(bb==cd->Board());	// consistency check
	}
	else {
		iffCache=0;
	}


	// Do a tree search
	if (!iPrune || !MPCCheck(height, searchAlpha, searchBeta, moves, iPrune, best))
		ValueTree(height, searchAlpha, searchBeta, moves, iffCache, iPrune, best);
	
	// Add to cache if we can
	if (!abortRound) {
		cd=cache->FindNew(bb,hash,height,iPrune, nEmpty_);
		if (cd) {
			cd->Store(height, iPrune, nEmpty_, best.move, iffCache, searchAlpha, searchBeta, best.value);
			#ifdef _DEBUG
			_ASSERT(cd->Board()==bb);
			CalcMoves(moves);
			_ASSERT(moves.IsValid(best.move));
			#endif
		}
	}
	_ASSERT(abortRound || iPrune || (height+hSolverStart!=nEmpty_) || (best.value<=64*kStoneValue && best.value>=-64*kStoneValue));
}

///////////////////////////////////////////////////////////////////////
// MPCCheck - determine whether we should do forward pruning.
// returns:
//	true if we forward pruned. False otherwise
///////////////////////////////////////////////////////////////////////

inline bool MPCCheck(int height, CValue alpha, CValue beta, const CMoves& moves, int& iPrune, CMoveValue& best) {
	CMoves movesCopy;
	float sd, cr;
	CValue bound;
	int nCut, hCheck;

	if (mpcs->BadCutHeight(height))
		return false;

	for (nCut=0; nCut<2; nCut++) {
		if (!mpcs->GetParams(height, nEmpty_, nCut, iPrune, hCheck, sd, cr))
			break;

		// check alpha cutoff
		if (alpha>-kInfinity) {
			bound=CValue((alpha-sd)*cr);
			movesCopy=moves;
			ValueCacheOrTree(hCheck, bound-1, bound, movesCopy, 0, best);
			if (abortRound)
				return false;
			if (best.value<bound) {
				best.value=alpha;
				return true;
			}
		}
		
		// check beta cutoff
		if (beta<kInfinity) {
			bound=CValue((beta+sd)*cr);
			movesCopy=moves;
			ValueCacheOrTree(hCheck, bound, bound+1, movesCopy, 0, best);
			if (abortRound)
				return false;
			if (best.value>bound) {
				best.value=beta;
				return true;
			}
		}
	}

	return false;
}

///////////////////////////////////////////////////////////////////////
// ValueTreeNoSort - value a move by tree search, with no move sorting
// Inputs:
//	hChild - height of child node
///////////////////////////////////////////////////////////////////////

inline void ValueTreeNoSort(int height, int hChild, CValue alpha, CValue beta, CMoves& moves, int iPrune, CMoveValue& best) {
	CValue vChild, vSearchAlpha;
	CMove	move;
	int nFlipped;
	CUndoInfo ui;

	// alpha-beta search 
	while(moves.GetNext(move)) {
		vSearchAlpha=Max(best.value, alpha);
		MakeMoveBB(move.Square(), nFlipped,ui);
		TREEDEBUG_BEFORE;
		vChild=ChildValue(hChild, vSearchAlpha, beta, iPrune);
		TREEDEBUG_AFTER;
		UndoMoveBB(move.Square(),nFlipped,ui);
		if (abortRound)
			return;
		if (vChild>best.value) {
			best.move=move;
			best.value=vChild;
			if (best.value>=beta) {
				TREEDEBUG_CUTOFF;
				return;
			}
		}
	}
}

///////////////////////////////////////////////////////////////////////
// ValueMove - value a move.
// Inputs:
//	move - the move
//	best - the best move and value; best.value must be initialized to -kInfinity before calling for the first time
//	fNegascout - true if we should negascout first
// Outputs:
//	best - updated best move and value
// Returns:
//	true if there's a cutoff or the round was aborted
// Comments:
//	This routine uses Max(alpha, best) as the alpha for the following search.
///////////////////////////////////////////////////////////////////////

inline bool ValueMove(int height, int hChild, CValue alpha, CValue beta, CMove& move, CMoves& moves, int iPrune,
									  bool fNegascout, CMoveValue& best) {

	CValue vChild, vNegascout, vSearchAlpha;
	int nFlipped;
	CUndoInfo ui;

	// initialization
	vSearchAlpha=Max(best.value, alpha);

	// make move
	MakeMoveBB(move.Square(), nFlipped,ui);

	// get value,possibly using negascout
	if (fNegascout) {
		TREEDEBUG_BEFORE_NEGASCOUT;
		vChild=ChildValue(hChild, vSearchAlpha, vSearchAlpha+1, iPrune);
		TREEDEBUG_AFTER_NEGASCOUT;
		vNegascout=vChild; // save value for debugging
		if (vChild>vSearchAlpha && vChild<beta) {
			TREEDEBUG_BEFORE;
			vChild=ChildValue(hChild, vSearchAlpha, beta, iPrune);
			// it may seem illogical but this appears faster than the more usual code
			// vChild=ChildValue(hChild, vChild, beta, iPrune);
			TREEDEBUG_AFTER;
		}
	}
	else {
		TREEDEBUG_BEFORE;
		vChild=ChildValue(hChild, vSearchAlpha, beta, iPrune);
		TREEDEBUG_AFTER;
	}

	// undo move
	UndoMoveBB(move.Square(),nFlipped,ui);

	// check for termination conditions
	if (abortRound)
		return true;
	if (vChild>best.value) {
		best.move=move;
		best.value=vChild;
		if (best.value>=beta) {
			TREEDEBUG_CUTOFF;
			return true;
		}
	}
	return false;
}

///////////////////////////////////////////////////////////////////////
// ValueTree - do a tree search to find the best move and value.
///////////////////////////////////////////////////////////////////////

inline void GetSearchParameters(int height, bool fHasBest, int iPrune, int& iff, int iffCache,
							 bool& fSort, bool& fSortQuick, bool& fUseBest, bool&fNegascout) {

	// flags used in computing search parameters
	bool fSolving= height>=nEmpty_-hSolverStart;
	bool fFWSolve=fSolving && (iPrune==0);

	// search parameters
	fSort=fFWSolve || (height>=3);
	fSortQuick= height<=1;
	iff=9;
	fUseBest=fHasBest && (iffCache>=iff || !fSort);
	fNegascout=height>=hNegascout;
}

inline void ValueTree(int height, CValue alpha, CValue beta, CMoves& moves, int& iffCache,
					  int iPrune, CMoveValue& best) {
	CValue vSubnode;
	CMove	move;
	int nFlipped;
	CUndoInfo ui;
	bool fSort, fSortQuick, fUseBest, fNegascout;
	int iff;

	GetSearchParameters(height, moves.HasBest(), iPrune, iff, iffCache, fSort, fSortQuick, fUseBest, fNegascout);
	best.value=-kInfinity;

	int hChild=height-1;
	int i, nMoves, nChecked=0;

	// check best move first
	if (fUseBest) {
		moves.GetNext(move);
		bool fCutoff=ValueMove(height, hChild, alpha, beta, move, moves, iPrune, false, best);
		if (fCutoff) {
			return;
		}
		nChecked++;
	}

	// best move didn't cut off. value remaining moves
	if (fSort) {
		CMoveValue moveValues[64];
		iffCache=iff;
		//cout << "--- sort ---\n";
		_ASSERT(moves.Consistent());
		for (nMoves=0; moves.GetNext(move); nMoves++) {
			moveValues[nMoves].move=move;
			MakeMoveBB(move.Square(), nFlipped,ui);
			if (fSortQuick) {
				// I tried giving a bonus for playing corner squares but it didn't help.
				vSubnode=bb.NMoverMobilities();
			}
			else {
				// Get move values with fastest-first adjustment.
				vSubnode=StaticValue(iff);

				// Check for ETC (Enhanced Transposition Cutoff). If the move will cause an
				// immediate hash-table cutoff, we want to do it first.
				CCacheData* pcd = cache->FindOld(bb,bb.Hash());
				if (pcd && pcd->AlphaCutoff(height-1, iPrune, nEmpty_, -beta)) {
					vSubnode-=50*kStoneValue;
				}
			}
			moveValues[nMoves].value=-vSubnode;
			//Print(fBlackMove_);
			//cout << "Value = " << vSubnode << "\n";
			UndoMoveBB(move.Square(),nFlipped,ui);
		}

		if (abortRound) {
			return;
		}

		sort(moveValues, moveValues+nMoves);

		// test remaining moves in order
		for (i=0; i<nMoves; i++) {
			move=moveValues[i].move;
			bool fCutoff=ValueMove(height, hChild, alpha, beta, move, moves, iPrune, fNegascout && nChecked && best.value>=alpha, best);
			if (fCutoff) {
				return;
			}
			nChecked++;
		}
	}
	else {	// not sorting
		while (moves.GetNext(move)) {
			bool fCutoff=ValueMove(height, hChild, alpha, beta, move, moves, iPrune, fNegascout && nChecked && best.value>=alpha, best);
			if (fCutoff) {
				return;
			}
			nChecked++;
		}
	}

}

///////////////////////////////////////////////////////////////////////
// Child value - return the value to the node's mover of a subposition
// inputs:
//	height - height to search subposition to
//	alpha, beta - cutoffs as values to the node's mover
//	iPrune - amount of extensions allowed
// returns:
//	child value of the subposition, or bound if cutoff
//	hBookRead must be set correctly:
//		If no book, set >= height+1.
//		If book, set to minimum height to read from book.
///////////////////////////////////////////////////////////////////////
CValue ChildValue(int height, CValue alpha, CValue beta, int iPrune) {
	CValue result;

	// Solver evaluation if near end
	if (nEmpty_<=hSolverStart) {
		if (nSNodesQuick>=(nAbortCheck<<4)) {
			WipeNodeStats();
			if (CheckAbort()) {
				return 0;
			}
		}
		const int mmxBeta=int((beta+10099)/100)-100;
		const int mmxAlpha=int((alpha+10000)/100)-100;
		result=-MmxSolve(bb, -mmxBeta, -mmxAlpha)*kStoneValue;

		_ASSERT(result>-kInfinity);
		TREEDEBUG_CALLSOLVER;
		return result;
	}

	// Static value if no height
	if (height<=0) {
		result=-StaticValue(0);
		_ASSERT(result>-kInfinity);
	}

	// Tree-search value otherwise
	else {
		CMoves moves;
		int pass;

		pass=CalcMovesAndPassBB(moves);

		switch(pass) {
		case 0:
			result=-ValueBookCacheOrTree(height, -beta, -alpha, moves, iPrune);
			_ASSERT(result>-kInfinity || abortRound);
			break;
		case 1:
			result=ValueBookCacheOrTree(height, alpha, beta, moves, iPrune);
			_ASSERT(result>-kInfinity || abortRound);
			break;
		case 2:
			result=TerminalValue();
			_ASSERT(result>-kInfinity);
			break;
		}

		if (pass)
			UndoPassBB();
	}

	return result;
}

//! Output intermediate search results to a stream.
//! <PV> <Value> <NGamesInBook> <Ply>
static void OutputSearchInfo(std::ostream& os, CMoveValue mv, bool fPassBefore, CHeightInfoX hix) {
	os << "search ";
	if (fPassBefore) {
		os << "PA-";
		mv.value=-mv.value;
	}
	os << mv.move;

	const int precision=os.precision(2);
	const u4 flags=os.setf(std::ios::showpos);
	os.setf(std::ios::fixed, std::ios::floatfield);
	os << setw(7) << " " << double(mv.value)/kStoneValue;
	os.flags(flags);
	os.precision(precision);

	os << " 0 " << hix << "\n";
}

///////////////////////////////////////////////////////////////////////
//! values a set of moves and return the best values.
// Inputs:
//	height, alpha, beta, iPrune - as above
//	nBest - number of moves to be correctly valued (e.g. 2 will make sure the top 2 moves have values calculated correctly)
//	mvs - a vector of CMoveValues. Only moves in this list will be considered. This should
//			be in order (for best performance) so pass the result from the previous height in
//! \param fPrintBestMoves true if the routine should print search updates as it goes through the moves
//! \param fPassBefore if true, updates are printed with a preceding "PA-" and the negative of the value is printed.
//!
//! \note if iPrune==0 the routine will return as soon as nBest moves have been found with value>=beta.
//!
// Outputs:
//	nValued - number of moves that were successfully valued (value was exact or a beta-cutoff)
//			if alpha>-kInfinity, sets nValued to at least nBest (the first nBest were correctly valued
//			according to the alpha-cutoff).
//	mvsEvaluated - a vector of CMoveValues, sorted.
//			First will be the nValued moves that were valued, stably sorted by value,
//			then the remaining moves that suffered alpha-cutoff, in the original order from mvs
//	If we aborted, mvs and nValued will contain only moves and values completed before the abort occurred
///////////////////////////////////////////////////////////////////////

void ValueMulti(int height, CValue alpha, CValue beta, int iPrune, u4 nBest, const vector<CMoveValue>& mvs
				, bool fPrintBestMoves, bool fPassBefore, vector<CMoveValue>& mvsEvaluated, u4& nValued) {
	CValue vChild, vSearchAlpha;
	CMove	move;
	int hChild,nFlipped;
	CUndoInfo ui;
	vector<CMoveValue> mvsLow;
	CMoveValue mv;
	vector<CMoveValue>::const_iterator i;
	bool fNegascout=height>=hNegascout;
	const bool fDebugPrint=false;
	const bool fWld=std::max(abs(alpha), abs(beta))<64*kStoneValue;
	const bool fNegascoutRound=(alpha>=0) || (beta<=0);

	if (fDebugPrint) {
		cout << "ValueMulti(" <<height<< "," <<alpha<< "," <<beta<< "," <<iPrune<< "," <<nBest<< ")\n";
		//Print();
	}

	hChild=height-1;
	mvsEvaluated.erase(mvsEvaluated.begin(), mvsEvaluated.end());

	// test moves in order
	for (i=mvs.begin(); i!=mvs.end() && !abortRound; i++) {

		// calculate the move and search alpha
		if (mvsEvaluated.size()<nBest)
			vSearchAlpha=alpha;
		else {
			vSearchAlpha=std::max(mvsEvaluated[nBest-1].value, vSearchAlpha);
			if (vSearchAlpha>=beta)
				break;
		}
		move=i->move;

		if (fDebugPrint)
			cout << move << ": " ;

		// make move
		MakeMoveBB(move.Square(), nFlipped,ui);
		// get value,possibly using negascout
		if (fNegascout && vSearchAlpha>-kInfinity) {
			TREEDEBUG_BEFORE_NEGASCOUT;
			vChild=ChildValue(hChild, vSearchAlpha, vSearchAlpha+1, iPrune);
			_ASSERT(vChild>-kInfinity || abortRound);
		TREEDEBUG_AFTER_NEGASCOUT;
			if (vChild>vSearchAlpha && vChild<beta) {
				TREEDEBUG_BEFORE;
				vChild=ChildValue(hChild, vChild, beta, iPrune);
				_ASSERT(vChild>-kInfinity || abortRound);
				TREEDEBUG_AFTER;
			}
		}
		else {				
			TREEDEBUG_BEFORE;
			vChild=ChildValue(hChild, vSearchAlpha, beta, iPrune);
			_ASSERT(vChild>-kInfinity || abortRound);
			TREEDEBUG_AFTER;
		}
		if (fDebugPrint)
			cout << vChild << "\t";

		// undo move
		UndoMoveBB(move.Square(),nFlipped,ui);

		// add to the list of values
		if (!abortRound) {
			mv.move=move;
			mv.value=vChild;

			// beta-clamp the value. If value>=beta then we use max(previous round's value, this round's value)
			// unless beta>=64 stones in which case just use this round's value
			if (vChild>=beta && beta<64*kStoneValue && i->value>vChild) {
				mv.value=i->value;
			}

			// alpha-clamp the value. If value<=alpha then we use min(previous round's value, this round's value)
			// unless alpha<=64 stones in which case just use this round's value
			if (vChild<=alpha && alpha>-64*kStoneValue && i->value<vChild) {
				mv.value=i->value;
			}

			// print out round results, unless this is a 100% negascout round
			// there's no generic output symbol for a 100% negascout round.
			if (fPrintBestMoves && !fNegascoutRound) {
				// print if the move's value is >=alpha (means we have a reasonable value for it)
				// or if it's one of the first nBest moves (means it's a WLD round and we have a WLD value)
				if (vChild>vSearchAlpha || i<mvs.begin()+nBest) {
					OutputSearchInfo(cout, mv, fPassBefore, CHeightInfoX(height, iPrune, fWld, nEmpty_));
				}
			}
			if (vChild>vSearchAlpha) {
				mvsEvaluated.insert(upper_bound(mvsEvaluated.begin(),mvsEvaluated.end(),mv),mv);
				// beta cutoff when iPrune==0, see notes for this routine
				if (iPrune==0 && mvsEvaluated.size()>=nBest && mvsEvaluated[nBest-1].value>=beta)
					break;
			}
			else {
				if (i->value<vChild) {
					mv.value=i->value;
				}
				mvsLow.push_back(mv);
			}
		}
	}

	if (fDebugPrint)
		cout << "\nmvsEvaluated: " << mvsEvaluated << "\nmvsLow" << mvsLow << "\n";

	// prepare to return
	nValued=mvsEvaluated.size();
	if (nValued<nBest && !abortRound) {
		if (alpha>-kInfinity)
			nValued=nBest;
		else
			_ASSERT(0);
	}
	_ASSERT(abortRound || nValued>=nBest || alpha>-kInfinity);
	mvsEvaluated.insert(mvsEvaluated.end(),mvsLow.begin(),mvsLow.end());
	_ASSERT(mvsEvaluated.size() || abortRound);
	// If we had a beta cutoff,some moves weren't even tried, put them last.
	mvsEvaluated.insert(mvsEvaluated.end(),i,mvs.end());
}

//! set book read & write heights prior to calling Value()
void SetBookHeights(int height) {

	if(book)
		hBookRead=height-kBookReadDepth;
	else
		hBookRead=height+1;
}

//! Make the cache stale so it doesn't get blocked up
void InitializeCache() {
	cache->SetStale();
}

int iffMidgame=5;

//! Value a position by iterative-deepening search.
//!
//! \param[in] moves moves to check. Can be any subset of the legal moves from the position.
//! \param[in] fPassBefore true if the engine is searching the position after a pass.
//! \param[in] nBest number of moves to value. Normally 1 but when analyzing a game perhaps more.
//! If this is more than the number of legal moves, all legal moves are analyzed.
//! When this is true the search display output always displays the chosen move as "PA"
//!
//! \pre pos2 has been initialized with Initialize().
//!
//! If moves is empty or nBest<=0 this function returns without searching and without returning an mvk.
void IterativeValue(CMoves moves, const CCalcParams& cp, 
					const CSearchInfo& si, CMVK& mvk, bool fPassBefore, int nBest) {

	// If we're at or below the solver start height then we don't prune regardless of hi.iPrune.
	// set hi.iPrune to 0 in this case so it displays nicely.
	int iPrune=nEmpty_<=hSolverStart+1?0:si.iPruneMidgame;
	CHeightInfo hi(1,iPrune,false, nEmpty_);
	double tElapsed;
	CValue alpha, beta;
	CNodeStats nsStart, nsEnd;
	vector<CMoveValue> mvsOld, mvsNew;
	u4 nEvalOld, nEvalNew;
	CMoves movesFull;
	bool fFull;	// true if we are checking all subnodes

	CalcMoves(movesFull);
	fFull= movesFull==moves;
	
	// clamp nBest to number of moves checked
	nBest=std::min(nBest, moves.NMoves());
	if (nBest<=0)
		return;

	//_ASSERT(mpcs && mpcs->Valid());

	// print MPC stat static value?
	if (si.NeedMPCStats())
		cout << "\t" << StaticValue(0);

	// initialize cache and book read height
	InitializeCache();

	// Initialize the move lists
	CMoveValue mv;
	mv.value=0;
	while (moves.GetNext(mv.move))
		mvsOld.push_back(mv);
	nEvalOld=0;

	// Initialize timing info
	nsStart.Read();
	cp.SetAbortTime(nsStart, nEmpty_, si.tRemaining);
	mvk.Clear();
	mvk.move.Set(-1);
	mvk.fKnown=false;

	// increase search width for rand games in midgame because of weak eval for rand games
	if (nEmpty_>36 && (si.NeedRandSearch()) && (si.iPruneMidgame>1))
		hi.iPrune--;

	// iterate
	while (!mvk.move.Valid() || cp.RoundOK(hi, nEmpty_, tElapsed, si.tRemaining) ) {
		if (fPrintTree) TreeDebugStartRound(hi);
		SetBookHeights(hi.height);

		// Set alpha and beta depending on whether this is an WLD search or exact value search.
		if (hi.fWLD) {
			// if we're doing a full-width WLD search do an aspiration WD or DL search first
			if (mvk.fKnown && !hi.iPrune) {
				if (mvk.value<0)
					ValueMulti(hi.height, -kStoneValue, 0, hi.iPrune, nBest, mvsOld, si.PrintRound(), fPassBefore, mvsNew, nEvalNew);
				else if (mvk.value>0)
					ValueMulti(hi.height, 0, kStoneValue, hi.iPrune, nBest, mvsOld, si.PrintRound(), fPassBefore, mvsNew, nEvalNew);
				else {
					// aspiration searches don't seem to help if value==0
				}
			}
			alpha=-kStoneValue;
			beta=+kStoneValue;
		}
		else {
			alpha=-kWipeout;
			beta=kWipeout;
		}

		ValueMulti(hi.height, alpha, beta, hi.iPrune, nBest, mvsOld, si.PrintRound(), fPassBefore, mvsNew, nEvalNew);

		// calc timing info
		nsEnd.Read();
		mvk.ns=nsEnd-nsStart;
		tElapsed=mvk.ns.Seconds();

		// update mvk
		if (nEvalNew){
			mvk.move=mvsNew[0].move;
			mvk.value=mvsNew[0].value;
			mvk.fKnown=true;
			mvk.hiBest=hi;
		}
		if (!abortRound)
			mvk.hiFull=hi;

		// special checks when calculating mpc stats
		if (si.NeedMPCStats())
			printf("\t%d",mvk.value);

		// are we done?
		// don't stop on wipeouts, we could have had an MPC cutoff
		//	and it might not really be a wipeout...
		//if (abortRound || mvsNew[0].value>=kWipeout)
		if (abortRound)
			break;

		// get parameters for next round, break if we've solved
		if(!hi.NextRound(nEmpty_,si))
			break;

		nEvalOld=nEvalNew;
		mvsOld=mvsNew;
	}

	_ASSERT(mvk.move.Valid());
	if (book) {
		bool fStoreUnsolved;
		if (si.NeedNoAddSoloUnsolvedToBook())
			fStoreUnsolved=!abortRound && nBest>1;
		else
			fStoreUnsolved=true;

		book->StoreIterativeResult(bb, nBest, nEvalOld,nEvalNew,mvsOld,mvsNew,mvk, fFull, fStoreUnsolved);
	}
	if (si.PrintMoveSearchStats()) {
		u4 i;
		if (nEvalNew) {
			cout << mvk.hiBest << " (" << nEmpty_ << " empty)\t";
			for (i=0; i<nEvalNew; i++) {
				cout << mvsNew[i] << "\t";
			}
		}
		if (abortRound) {
			cout << mvk.hiFull << " (" << nEmpty_ << " empty)\t";
			for (i=0; i<nEvalOld; i++) {
				cout << mvsOld[i] << "\t";
			}
		}
		cout << "\t" << tElapsed << "s elapsed\n";
	}

	// calc timing info
	nsEnd.Read();
	mvk.ns=nsEnd-nsStart;
}

/////////////////////////////////////
// Forced Opening routines
/////////////////////////////////////

#include "OsObjects.h"

typedef map<CBitBoard, CBitBoard> TForcedOpeningMap;

TForcedOpeningMap foms[2];

// Find a move based on a forced opening list. Return TRUE if this position is in the list, false otherwise
//	if the position is in the list, put the forced move in move.
bool FindForcedOpening(CMove& move) {
	TForcedOpeningMap::iterator i;
	CBitBoard bbmr=bb.MinimalReflection();
	
	i=foms[fBlackMove_].find(bbmr);
	if (i==foms[fBlackMove_].end())
		return false;

	CMoves moves;
	int nFlipped;
	CUndoInfo ui;
	bool fDone;

	CalcMoves(moves);

	// Check subnodes in turn to see if they're the one
	for (move.Set(-1); moves.GetNext(move);) {
		MakeMoveBB(move.Square(), nFlipped, ui);
		fDone=(*i).second==bb.MinimalReflection();
		UndoMoveBB(move.Square(), nFlipped, ui);
		if (fDone)
			break;
	}
	if (!fDone) {
		_ASSERT(0);
		return false;
	}
	return true;
}

//! Create a list of forced openings which will be played when the player is the given color.
void CreateForcedOpeningList(const char* fn, bool fMyColor) {
	int sq;
	bool fBlackMove;
	u4 i;
	char sBoard[65];
	TForcedOpeningMap::iterator pfom;
	CBitBoard bbPrev;
	foms[fMyColor].clear();

	fstream is(fn);
	COsGame game;
	while (is.good() && (is >> game)) {
		game.GetPosStart().board.GetText(sBoard, fBlackMove, true);
		Initialize(sBoard, fBlackMove);
		for (i=0; i<game.ml.size(); i++) {
			bbPrev=bb.MinimalReflection();
			sq=Square(game.ml[i].mv.Row(), game.ml[i].mv.Col());
			MakeMoveBB(sq);
			if (fMyColor!=fBlackMove_) {
				pfom=foms[fMyColor].find(bbPrev);
				if (pfom==foms[fMyColor].end()) {
					foms[fMyColor][bbPrev]=bb.MinimalReflection();
				}
			}
		}
	}
}

void InitForcedOpenings() {
	CreateForcedOpeningList("black.ggf", true);
	CreateForcedOpeningList("white.ggf", false);
	cerr << "Map Size: Black: " << foms[1].size() << ", White: " << foms[0].size() << "\n";
}

//! TimedMVK - calculate a move. Inrease height until the game is
//!	solved or (height>=minDepth && time>=minTime).
//!	Special case if move is forced or in book.
//! \param[in]	minDepth - minimum search height.
//! \param[in]	minTime - minimum search time
//! \param[in]	randomShift - amount of book randomness to use
//! \param[in]	iPrune - # of ply for selective extensions (0 or 1)
//! \param[in]	fValueForcedMoves - true if forced moves should be valued
//			(e.g. if adding them to the book)
//! \param[in] fPassBefore true if there was a pass before calling TimedMVK; search output will show the initial move as a pass
//! \param[out]	chosen - chosen move, value, and whether value is known.
//! \pre book and cache must exist; book must be correct.
//! \pre pos2 has been initialized.
//! \param[in] nBest number of moves to value. Normally 1 but may wish to value all moves when analyzing a game.
void TimedMVK(const CCalcParams& cp, const CSearchInfo& si, CMVK& mvk, bool fPassBefore) {
	CMoves moves;
	CNodeStats start, end;
	int nPass;
	bool fIterativeNS=false;
	bool fBlackMoveSave=fBlackMove_;
	char sTextSave[65];
	GetText(sTextSave);

	start.Read();

	mvk.Clear();

#ifdef _DEBUG
	mvk.move.Set(-1);
#endif

	if (nEmpty_==60 && !si.PrintAnalysis()) {
		// beginning - forced move
		mvk.move.Set(C4);
		mvk.fBook=true;
	}
	else if (nPass=CalcMovesAndPassBB(moves)) {
		// no moves - return a pass
		mvk.move.Set(-1);
		if (si.NeedValue()) {
			switch(nPass) {
			case 2:
				mvk.value=-TerminalValue();
				mvk.fKnown=true;
				break;
			case 1:
				TimedMVK(cp, si, mvk, true);
				mvk.value=-mvk.value;
				mvk.move.Set("PA");
				break;
			default:
				_ASSERT(0);
			}
		}
		UndoPassBB();
	}

	else if (FindForcedOpening(mvk.move)) {
		mvk.fKnown=false;
		mvk.fBook=true;
		mvk.value=0;
	}
	else if (book && book->GetRandomMove(CQPosition(bb, fBlackMove_), si, mvk, fPassBefore)) {
		// move in book
		mvk.fKnown=true;
		mvk.fBook=true;
		if (fPassBefore)
			_ASSERT(mvk.move.IsPass());
		else
			_ASSERT(mvk.move.Valid());
	}

	else {
		Initialize(sTextSave, fBlackMoveSave);
		if (moves.NMoves()==1 && !(si.NeedValue())) {
			// only one move, and not valuing forced moves
			moves.GetNext(mvk.move);
			_ASSERT(mvk.move.Valid());
		}
		else {
			// value the move
			if (si.PrintAnalysis())
				std::cout << (si.PrintPondering()?"status Analyzing":"status Thinking") << std::endl;
			IterativeValue(moves, cp, si, mvk, fPassBefore, 1);		
			_ASSERT(mvk.move.Valid());
			fIterativeNS=true;
			if (si.PrintAnalysis())
				std::cout << "status" << std::endl;
		}
	}

	// calculate elapsed time and return
	if (!fIterativeNS) {
		end.Read();
		mvk.ns=end-start;
	}
}

vector<CMoveValue> createMoves(CQPosition testPosition) {
    vector<CMoveValue> mvs;
    CMoves moves;
    testPosition.CalcMoves(moves);
    CMove move;
    while (moves.GetNext(move)) {
        mvs.push_back(CMoveValue(move, (short)0));
    }
    return mvs;
}

void TestIterativeValue(int depth) {
	// setup book and cache
	CCache acache(2);
	cache = &acache;
	const int nEmpty = 22;
	CBook* oldBook = book;
	book = NULL;
	InitializeCache();
	SetBookHeights(nEmpty);
	mpcs = CMPCStats::GetMPCStats('J','A',5);

	// testing
	const COsGame osGame = LoadTestGames().at(0);
	const CQPosition testPosition = PositionFromEmpties(osGame, nEmpty);
	vector<CMoveValue> mvs = createMoves(testPosition);
	Initialize(testPosition.BitBoard(), testPosition.BlackMove());
	u4 nValued=0;
	vector<CMoveValue> mvsEvaluated;
	ValueMulti(depth, -kInfinity, kInfinity, 4, 1, mvs, false, false, mvsEvaluated, nValued);
//	cout << " nValued = " << nValued << "\n";
//	cout << " mvsEvaluated = \n";
//	for (int i=0; i<mvsEvaluated.size(); i++) {
//		CMoveValue mv = mvsEvaluated.at(i);
//		cout << "new CMoveValue(" << mv.move << "," << mv.value << "),\n";
//	}
//	cout << "\n";

	// tear down book and cache
	book = oldBook;
	cache = NULL;
}

void TestIterativeValue() {
	TestIterativeValue(1);
	TestIterativeValue(2);
	TestIterativeValue(3);
	TestIterativeValue(4);
	TestIterativeValue(5);
}

void assertEquals(int expected, int actual) {
	TEST(expected==actual);
}

void assertEquals(float expected, float actual, float tol) {
	TEST(abs(expected-actual)<=tol);
}

void assertEquals(bool expected, bool actual) {
	TEST(expected==actual);
}

void TestMpc() {
	CMPCStats& mpcs = *CMPCStats::GetMPCStats('J','A',5);
	assertEquals(5, mpcs.NPrunes());
	assertEquals(true, mpcs.BadCutHeight(2));
	assertEquals(false, mpcs.BadCutHeight(3));
	assertEquals(false, mpcs.BadCutHeight(25));
	assertEquals(true, mpcs.BadCutHeight(26));
	assertEquals(true, mpcs.Valid());
	int hCheck=0;
	float sd = 0.;
	float cr = 0.;
	assertEquals(true, mpcs.GetParams(3, 22, 0, 4, hCheck, sd, cr));
	assertEquals(481.04178, sd, 1e-5);
	assertEquals(.96078372, cr, 1e-7);
	assertEquals(1, hCheck);
}

void TestPos2() {
	TestIU();
	TestEval();
	TestIterativeValue();
	TestMpc();
}