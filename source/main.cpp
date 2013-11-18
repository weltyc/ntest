// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

// othello program

#pragma warning(disable: 4786)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <io.h>
#include "Debug.h"
#include <ctype.h>
#include <sstream>
#include <iomanip>
#include <string>
#include "..\GDK\test.h"

using namespace std;

#include "SmartBook.h"
#include "options.h"
#include "main.h"
#include "QPosition.h"
#include "Player.h"
#include "Games.h"
#include "GameX.h"
#include "NodeStats.h"
#include "Evaluator.h"
#include "Test.h"
#include "TreeDebug.h"
#include "MPCStats.h"
#include "Pos2.h"
#include "FastFlip.h"
#include "MmxSolve.h"
#include "NtestStream.h"
#include "Cache.h"
#include <crtdbg.h>


#ifndef _WIN32
#define __cdecl
#endif

extern bool fPrintCorrections;
extern bool fInTournament;

enum TMode { kSpeedTest, kCalcMPC, kPosValues, kGetStartPos, 
				kAssignBook, kEdmundBook, kMergeBooks,
				kAnalyze,
				kGame, kGGS,
				kCompare, kExternalViewer, kNukeBook, kDrawTree };

TMode ParseCommandLine(int argc, char* argv[], const char*& submode,
					  CComputerDefaults& cd, int& nGames);


//! Store draw tree limits as read in from parameters.txt
class CDrawTreeLimits {
public:
	double drawCutoff, deviationCutoff; 
	CDrawTreeLimits() : drawCutoff(3.00), deviationCutoff(3.50) {};
};

void ReadParameters(CComputerDefaults& cd1, CComputerDefaults& cd2, CDrawTreeLimits& drawTreeLimits);

#define RANDSEED time(0)
//#define RANDSEED 7

const int defaultMatchMinutes=15;
const int defaultMatchDepth=10;

extern string fnOpening;

CPlayer *pPlH=NULL, *pPl1=NULL, *pPl2=NULL;

CPlayer* GetPlayer(char c, const CComputerDefaults& cd1, const CComputerDefaults& cd2) {
	switch (c) {
	case 'h':
		if (pPlH==NULL)
			pPlH=new CPlayerHuman;
		return pPlH;
	case '1':
		if (pPl1==NULL)
			pPl1=new CPlayerComputer(cd1);
		return pPl1;
	case '2':
		if (pPl2==NULL)
			pPl2=new CPlayerComputer(cd2);
		return pPl2;
	default:
		cerr << "Unknown player type " << c << "\n";
		_ASSERT(0);
		exit(-1);
		return(NULL);
	}
}

void CleanPlayers() {
	if (pPlH)
		delete pPlH;
	if (pPl1)
		delete pPl1;
	if (pPl2)
		delete pPl2;
}

void Init() {
	setbuf(stdout, 0);
	srand(RANDSEED);

	InitFastFlip();
	InitFastFlipPatterns();
	InitConfigToPotMob();
	cout << setprecision(3);
	cerr << setprecision(3);

#ifdef _DEBUG
	int tmpFlag = _CrtSetDbgFlag( _CRTDBG_REPORT_FLAG );
	tmpFlag |= _CRTDBG_LEAK_CHECK_DF;
	_CrtSetDbgFlag( tmpFlag );
#endif

	void InitFFBonus();
	InitFFBonus();
	InitForcedOpenings();
}

void Clean() {
	CleanConfigToPotMob();
	CleanFastFlipPatterns();
	CSmartBook::Clean();
	CleanPlayers();
}

void PrintStuff(bool fPrintStuff) {
	fPrintExtensionInfo=fPrintStuff;
	fPrintBoard=printResult=fPrintStuff;
	fPrintAbort=fPrintStuff;
}

//! return true if the terminal position of opening is reached at some point in game
bool IsOpeningOf(const COsGame& opening, const COsGame& game) {
	COsPosition gamePos(opening.GetPos());
	CQPosition pos(gamePos.board);
	CMinimalReflection mr(pos.BitBoard());
	
	for (size_t i=0; i<=game.ml.size(); i++) {
		COsPosition osposGame;
		osposGame.Calculate(game, i);
		CQPosition posGame(osposGame.board);
		if (mr==CMinimalReflection(posGame.BitBoard()))
			return true;
		else if (pos.NEmpty()>posGame.NEmpty())
			return false;
	}
	return false;
}

void TestIsOpeningOf() {
	COsGame gOpening, gGame;
	gOpening.SetDefaultStartPos();
	gGame.SetDefaultStartPos();
	TEST(IsOpeningOf(gOpening, gGame));

	COsMoveListItem mli;
	mli.In(istringstream("F5"));
	gOpening.Update(mli);
	TEST(!IsOpeningOf(gOpening, gGame));

	gGame.Update(mli);
	TEST(IsOpeningOf(gOpening, gGame));

	mli.In(istringstream("D6"));
	gGame.Update(mli);
	TEST(IsOpeningOf(gOpening, gGame));
}

void Test() {
	std::cerr << "Beginning standard test\n";

#if !defined(EXTERNAL)
	// when the test routines are in their own specific file we can reduce code size
	// by excluding the files from the build. Do this for external compile.

	// ODK
	TestOsObjects();
#endif

	// Ntest
	TestPos2();
	TestMmxSolve();
	CMove::Test();
	CMoves::Test();
	TestIsOpeningOf();

#if !defined(EXTERNAL)
	// Ntest
	TestBitBoard();
	TestBook();
	extern void TestCQPosition();
	TestCQPosition();
#endif
	std::cerr << "Ending standard test\n";
}

//! Have the computer analyze the game except if it's a rand game, or
//! there's a forced opening and this game doesn't use it
void MaybeAnalyzeGame(CPlayerComputer& comp1, const COsGame& game) {
	static u4 nGamesAdded=0, nGamesSkipped=0, nGamesAnalyzed=0;

	std::cout << "So far: " << nGamesAdded << " added to book, " << nGamesAnalyzed << " analyzed, " << nGamesSkipped << " skipped\n";
	bool fOk=!game.mt.fRand;
	if (fOk && !fnOpening.empty()) {
		std::ifstream is(fnOpening.c_str());
		COsGame gOpening;
		gOpening.In(is);
		fOk=IsOpeningOf(gOpening, game);
	}
	if (fOk) {
		nGamesAdded+=comp1.AnalyzeGame(game);
		nGamesAnalyzed++;
	}
	else {
		std::cerr << "-";
		nGamesSkipped++;
	}
}

int __cdecl main(int argc, char**argv, char**envp) {
	try {
		// redicrect cout to file
		ofstream file;
		file.open("c:/temp/log.txt");
		if (!file.good()) {
			cerr << "Can't redirect cout\n";
		}
		cout.rdbuf(file.rdbuf());

		time_t end_time;
		int nGames;
		const char* submode;

		cout << "Ntest version as of " << __DATE__ << "\n";
		cout << "Copyright (c) Chris Welty\nAll Rights Reserved\n\n";

		//_crtBreakAlloc=329;

		////////////////////////////////////////
		// Table Initialization
		////////////////////////////////////////

		Init();

		Test();

		CComputerDefaults cd1, cd2;
		CDrawTreeLimits drawTreeLimits;
		ReadParameters(cd1,cd2, drawTreeLimits);
		const TMode mode=ParseCommandLine(argc, argv, submode, cd1, nGames);

		CNodeStats start, end;

		start.Read();

		////////////////////////////////////////
		// Special modes requiring no players
		////////////////////////////////////////

		if (mode==kSpeedTest) {
				PrintStuff(false);
				TestMoveSpeed(cd1.MinutesOrDepth(), nGames, argv[1]+1);
		}

		///////////////////////////////////////////
		// All other modes
		///////////////////////////////////////////

		else {
			fPrintTimeUsed=false;

			switch(mode) {
			case kGame:
				{
				PrintStuff(true);

				CPlayer* p0=GetPlayer(submode[0],cd1,cd2);
				CPlayer* p1=GetPlayer(submode[1],cd1,cd2);

				bool fAlternate = strlen(submode)>2 && submode[2]=='*';

				while (nGames-->0) {
					bool fSwap=fAlternate && (nGames&1)==1;
					if (fSwap)
						CGame(p1, p0).Play();
					else
						CGame(p0, p1).Play();
				}
				break;
				}
			case kDrawTree: {
				PrintStuff(true);

				CPlayerComputer computer1(cd1);

				CBook* book = computer1.book;
				if (book!=NULL) {
					CQPosition questionablePosition;
					bool drawToMover;

					const i2 drawCutoff = (CValue)(drawTreeLimits.drawCutoff*kStoneValue);
					const i2 deviationCutoff = (CValue)(drawTreeLimits.deviationCutoff*kStoneValue);

					while (nGames-->0) {
						// construct the game here inside the loop so it reloads the game from the ggf file each time
						CGame game(&computer1, &computer1);
						CQPosition initialPosition(game.GetPos().board);
						if (book->FindQuestionableNode(questionablePosition, drawToMover, initialPosition, drawCutoff, deviationCutoff)) {
							const bool fBlackMove = questionablePosition.BlackMove();
							const bool fDrawsToBlack = !(drawToMover^fBlackMove);
							computer1.SetContempt(fDrawsToBlack);
							char sBoardText[NN+1];
							questionablePosition.GetSBoard(sBoardText);
							game.SetToPosition(sBoardText, fBlackMove);
							std::cout << "extending draw tree from " << questionablePosition.NEmpty() << " empties\n";
							game.Play();
							book->NegamaxAll();
						}
					}
				} else {
					std::cout << "No book available for draw tree extension mode\n";
				}
				break;
							}
			case kCompare:{
				PrintStuff(false);
				fCompareMode=true;

				cd2.sCalcParams=cd1.sCalcParams;
				cd1.booklevel=cd2.booklevel=CComputerDefaults::kNoBook;

				CPlayerComputer computer1(cd1);
				CPlayerComputer  computer2(cd2);
				Compare(computer1, computer2);
				break;
						  }
			case kCalcMPC: {
				cd1.booklevel=CComputerDefaults::kNoBook;
				CPlayerComputer computer1(cd1);
				CalcMPCStats(&computer1, cd1.MinutesOrDepth());
				break;
						   }
			case kPosValues: {
				cd1.booklevel=CComputerDefaults::kNoBook;
				CPlayerComputer computer1(cd1);
				CalcPosValues(&computer1, submode[0]=='a');
				break;
							 }
			case kEdmundBook: {
				cd1.booklevel=CComputerDefaults::kNegamaxBook;
				CPlayerComputer computer1(cd1);
				PrintStuff(true);
				if (computer1.book) {
					computer1.book->SetComputer(&computer1);
					cout << computer1.book->NEdmundNodes(cd1.iEdmund) << " edmund nodes detected.\n";
					computer1.book->PlayEdmundGames(cd1.iEdmund);
				}
				else {
					cerr << "ERR: You need a book to use Edmund mode\n";
				}
				break;
							 }

			case kMergeBooks: {
				CPlayerComputer computer1(cd1);
				if (computer1.book) {
					computer1.book->SetComputer(&computer1);
					string fn(fnBaseDir);
					fn+="coefficients/merge.book";
					computer1.book->MergeBook(fn.c_str());
				}
				else {
					cerr << "ERR: You need a book to use Merge Books mode\n";
				}
				break;
							 }
			case kNukeBook:	{
				CPlayerComputer computer1(cd1);
				if (computer1.book) {
					std::cout << "This will remove all entries in the opening book with fewer than n empties.\n"
						<< "If you don't want to do that, kill this program now!\n"
						<< "Minimum number of empties to remain in book: ";
					int nEmptyMin=0;
					std::cin >> nEmptyMin;
					computer1.book->Nuke(nEmptyMin);
				}
				else {
					std::cerr << "ERR: You need a book to use NukeBook mode\n";
				}
				break;
							}
			case kGGS:
				{
					ifstream is((fnBaseDir+"password.txt").c_str());
					std::string sPassword;
					CPlayerComputer computer1(cd1);
					CNtestStream gs;
					is >> sPassword >> gs.sSuperuser;
					if (sPassword.empty()) {
						std::cerr << "ERROR: Fill in password.txt. See the instructions for help.\n";
					}
					else {
						std::string sLogin=computer1.Name()+gs.sSuperuser;
						if (sLogin.size()>8)
							sLogin.resize(8);

						if ((!gs.Connect("opal.cs.ualberta.ca",5000) || !gs.Connect("opal.cs.ualberta.ca",4000))  && 
							gs.Login(sLogin.c_str(),sPassword.c_str())==0) {
								gs.SetComputer(computer1);
								gs.Process();
						}
					}
				}
				break;
			case kAnalyze:
				{
				CPlayerComputer computer1(cd1);
				if (computer1.book==NULL) {
					cerr << "ERR: You need a book to use Analyze mode\n";
				}
				else {
					PrintStuff(true);

					computer1.fAnalyzingDeferred=true;

					COsGame game;
					switch(submode[0]) {
					case 'g':
						while (cin >> game)
							MaybeAnalyzeGame(computer1,game);
						break;
					case 'i':
						while (game.InIOS(cin))
							MaybeAnalyzeGame(computer1,game);
						break;
					case 'l':
						while (game.InLogbook(cin))
							MaybeAnalyzeGame(computer1,game);
						break;
					default:
						cout << "Unknown file type '" << submode << "' for analyze mode\n";
						cerr << "Unknown file type '" << submode << "' for analyze mode\n";
					}

				}
				break;
				}
			case kGetStartPos: {
				/*
				FILE* fp=fopen("CompareStart.pos","wb");
				QSSERT(fp);
				if (fp) {
					int nAcceptable, nEmpty;
					CValue v, vCutoff=kStoneValue;

					map<CBitBoard,CBookData>::iterator i;
					for (nEmpty=40; nEmpty<41; nEmpty++) {
						nAcceptable=0;
						map<CBitBoard,CBookData>& entries=computer1.book->entries[nEmpty];
						for(i=entries.begin(); i!=entries.end(); i++) {
							const CBookValue& bv=(*i).second.Values();
							QSSERT(bv.IsAssigned());
							v=bv.v;
							if (v>=-vCutoff && v<=vCutoff) {
								nAcceptable++;
								fwrite(&((*i).first),sizeof((*i).first),1,fp);
							}
						}
						cout << nEmpty << " empty: " << nAcceptable << "/" << entries.size() << " are acceptable\n";
					}
					fclose(fp);
				}
				break;
				*/
							   }
			case kAssignBook: {
				// i.e. Negamax the book and calculate all necessary deviations
				cd1.booklevel=CComputerDefaults::kNegamaxBook;
				CPlayerComputer computer1(cd1);
				break;	// it's done when creating computer1
							  }
			case kExternalViewer: {
				CGameX gamex(cd1);
				break;
								  }
			default:
				cerr << "that mode is not currently supported\n";
				cout << "that mode is not currently supported\n";
				break;
			}

		}

		//PrintBookReadData();
		time(&end_time);
		printf("\n\nRun completed at GMT %s\n",asctime(gmtime(&end_time)));
		end.Read();
		cout << (end-start) << "\n";

		Clean();

	#ifdef DEBUG
		char c;
		cin >> c;
	#endif 

		return 0;
	} catch(std::string exception) {
		cout << exception << "\n";
		return -1;
	}
}

///////////////////////////////////////
// command-line options
///////////////////////////////////////

TMode ParseCommandLine(int argc, char* argv[], const char*& submode, 
					  CComputerDefaults& cd, int& nGames) {
	// defaults
	TMode mode=kExternalViewer;
	submode='\0';
	nGames=1;

	// overrides by command line
	if (argc>1) {
		submode=argv[1];
		switch(*(submode++)) {
		case 'a': mode=kAnalyze; break;
		case 'c': mode=kCompare; break;
		case 'd': mode=kDrawTree; break;
		case 'e': mode=kEdmundBook; break;
		case 'g': mode=kGame; break;
		case 'i': mode=kGGS; break;
		case 'I': mode=kGGS; fInTournament=true; break;
		case 'm': mode=kMergeBooks; break;
		case 'n': mode=kAssignBook; break;
		case 'p': mode=kPosValues; break;
		//case 's': mode=kGetStartPos; break;
		case 't': mode=kSpeedTest; break;
		case 'x': mode=kExternalViewer; break;
		case '!': mode=kCalcMPC; break;
		case '?': mode=kNukeBook; break;

		default:
			cerr << "unknown or dangerous mode '" << argv[1] << "'\n";
			cout << "unknown or dangerous mode '" << argv[1] << "'\n";
			_exit(1);
		}
	}

	// argument 2 : time control
	double tMatch=defaultMatchMinutes*60;

	if (argc>2) {
		cd.sCalcParams=argv[2];
	}

	// argument 3 : number of games in a series
	if (argc>3) {
		int nGamesTemp=atol(argv[3]);
		if (nGamesTemp>0)
			nGames=nGamesTemp;
		else
			fprintf(stderr, "The third argument (number of games) must be greater than 0!\n");
	}

	// argument 4: opening file name
	if (argc>4) {
		fnOpening=fnBaseDir+argv[4];
	}

	return mode;
}

void ReadMachineParameters(istream& isBig) {
	string sLine;
	getline(isBig, sLine);
	std::istringstream is(sLine.c_str());

	// read the following parameters:
	//	int maxCacheMem - size in bytes available for cache (in file in MB,converted here to bytes)
	//	double dGHz - Approx processor speed

	//	first set default values in case we can't read for some reason
	maxCacheMem=10;
	dGHz=0.4;

	is >> maxCacheMem >> dGHz;

	// convert MBytes to bytes in maxCacheMem
	maxCacheMem<<=20;

}

void ReadParameters(CComputerDefaults& cd1, CComputerDefaults& cd2, CDrawTreeLimits& drawTreeLimits) {
	string fn(fnBaseDir);
	fn+="parameters.txt";
	std::ifstream isParams(fn.c_str());
	if (!isParams.good()) {
		throw std::string("Can't read in parameters file ")+fn;
	}
	
	ReadMachineParameters(isParams);
	isParams >> cd1 >> cd2;
	while (1) {
		std::string sLine;
		if (!getline(isParams, sLine))
			break;
		std::istringstream is(sLine);

		std::string sParamName;
		is >> sParamName;
		if (sParamName=="BookWriteFormat")
			is >> CBook::s_iBookWriteFormat;
		else if (sParamName=="WinnerGetsEmpties") {
			int nWinnerGetsEmpties;
			if (is >> nWinnerGetsEmpties) {
				extern bool fWinnerGetsEmpties;
				fWinnerGetsEmpties=nWinnerGetsEmpties!=0;
			}
		}
		else if (sParamName=="EdmundLevel") {
			u4 iEdmund;
			if (is>>iEdmund) {
				if (iEdmund<=7)
					cd1.iEdmund=cd2.iEdmund=iEdmund;
			}
		}
		else if (sParamName=="DrawTreeLimit") {
			is >> drawTreeLimits.drawCutoff >> drawTreeLimits.deviationCutoff;
		}
	}
}