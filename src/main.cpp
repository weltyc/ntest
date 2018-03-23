// Copyright Chris Welty
//  All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.

// othello program

#pragma warning(disable: 4786)

#include <time.h>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <ctype.h>
#include <sstream>
#include <iomanip>
#include <string>
#include "n64/n64.h"
#include "n64/test.h"
#include "core/QPosition.h"
#include "core/NodeStats.h"
#include "core/Cache.h"
#include "core/CalcParams.h"
#include "core/MPCStats.h"
#include "pattern/FastFlip.h"
#include "game/Player.h"
#include "game/PlayerHuman.h"
#include "game/Game.h"

#include "SmartBook.h"
#include "options.h"
#include "GameX.h"
#include "Evaluator.h"
#include "EvalTest.h"
#include "SpeedTest.h"
#include "TreeDebug.h"
#include "Pos2.h"
#include "Search.h"
#include "NtestStream.h"
#include "MPCCalc.h"

#include "Pos2Test.h"
#include "SearchTest.h"
#include "core/coreTest.h"
#include "odk/odkTest.h"

using namespace std;

extern bool fPrintCorrections;
extern bool fInTournament;

enum TMode { kSpeedTest, kCalcMPC, kPosValues, kGetStartPos, 
    			kAssignBook, kEdmundBook, kMergeBooks,
    			kAnalyze,
    			kGame, kGGS,
    			kCompare, kExternalViewer, kNukeBook, kDrawTree,
    			kTestOnly };

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

static std::string fnOpening;

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
    	assert(0);
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
    srand(static_cast<unsigned int>(RANDSEED));

    InitFastFlip();
    InitConfigToPotMob();
    cout << setprecision(3);
    cerr << setprecision(3);

    void InitFFBonus();
    InitFFBonus();
    InitForcedOpenings();
}

void Clean() {
    CleanConfigToPotMob();
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
    	osposGame.Calculate(game, int(i));
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
    gOpening.SetDefaultStartPos(8);
    gGame.SetDefaultStartPos(8);
    TEST(IsOpeningOf(gOpening, gGame));

    COsMoveListItem mli;
    istringstream m("F5");
    mli.In(m);
    gOpening.Update(mli);
    TEST(!IsOpeningOf(gOpening, gGame));

    gGame.Update(mli);
    TEST(IsOpeningOf(gOpening, gGame));

    istringstream n("D6");
    mli.In(n);
    gGame.Update(mli);
    TEST(IsOpeningOf(gOpening, gGame));
}

void Test() {
    std::cerr << "Beginning standard test\n";

    int n64_main(int argc, char* argv[]);
    n64_main(1, 0); // test n64 package
    testCore();     // test core package
    testOdk();      // test ODK package

    // Ntest
    TestPos2();
    TestIsOpeningOf();
    TestSearch();
    GoldenValueEvalTest();
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

////////////////////////////////////////////////////////////
// Series of games
////////////////////////////////////////////////////////////

void Compare(CPlayerComputer& computer1, CPlayerComputer& computer2) {
    CBitBoard bb;
    FILE* fp;
    int nWins, nDraws, nLosses;
    int i, nNet;

    nWins=nDraws=nLosses=0;

    fp=fopen("CompareStart.pos","rb");
    assert(fp);
    if (fp) {
    	while (fread(&bb,sizeof(bb),1,fp)) {
    		char sBoardText[NN+1];
    		bb.GetSBoard(sBoardText, true);
    		for (i=0; i<2; i++) {
    			// clear caches
    			computer1.Clear();
    			computer2.Clear();

    			CGame game(i?&computer2:&computer1, i?&computer1:&computer2, tMatch, fnOpening);
    			game.Initialize(sBoardText, true);

    			nNet=game.Play();
    			if (i)
    				nNet=-nNet;
    			if (nNet>0)
    				nWins++;
    			else if (nNet<0)
    				nLosses++;
    			else
    				nDraws++;
    			cout << nNet << (i?'\n':'\t');
    		}
    	}
    	fclose(fp);

    	cout << "computer1 has Wins: " << nWins << "  Draws: " << nDraws << "  Losses: " << nLosses << "\n";
    }
}

int main(int argc, char**argv, char**envp) {
    if (argc>1 && !strcmp(argv[1], "n64")) {
    	extern int n64_main(int argc, char* argv[]);
    	return n64_main(argc-1, argv+1);
    }

    try {
    	time_t end_time;
    	int nGames;
    	const char* submode;

    	cout << "Ntest version as of " << __DATE__ << "\n";
    	cout << "Copyright 1999-2014 Chris Welty and Vlad Petric\nAll Rights Reserved\n\n";

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
    		switch(mode) {
    		case kTestOnly:
    			// already did all tests as part of startup
    			break;
    		case kGame:
    			{
    			PrintStuff(true);

    			CPlayer* p0=GetPlayer(submode[0],cd1,cd2);
    			CPlayer* p1=GetPlayer(submode[1],cd1,cd2);

    			bool fAlternate = strlen(submode)>2 && submode[2]=='*';

    			while (nGames-->0) {
    				bool fSwap=fAlternate && (nGames&1)==1;
    				if (fSwap)
    					CGame(p1, p0, tMatch, fnOpening).Play();
    				else
    					CGame(p0, p1, tMatch, fnOpening).Play();
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
    					CGame game(&computer1, &computer1, tMatch, fnOpening);
    					CQPosition initialPosition(game.GetPos().board);
    					if (book->FindQuestionableNode(questionablePosition, drawToMover, initialPosition, drawCutoff, deviationCutoff)) {
    						const bool fBlackMove = questionablePosition.BlackMove();
    						const bool fDrawsToBlack = !(drawToMover^fBlackMove);
    						computer1.SetContempt(fDrawsToBlack);
    						char sBoardText[NN+1];
    						questionablePosition.GetSBoard(sBoardText);
    						game.Initialize(sBoardText, fBlackMove);
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
    			assert(fp);
    			if (fp) {
    				int nAcceptable, nEmpty;
    				CValue v, vCutoff=kStoneValue;

    				map<CBitBoard,CBookData>::iterator i;
    				for (nEmpty=40; nEmpty<41; nEmpty++) {
    					nAcceptable=0;
    					map<CBitBoard,CBookData>& entries=computer1.book->entries[nEmpty];
    					for(i=entries.begin(); i!=entries.end(); i++) {
    						const CBookValue& bv=(*i).second.Values();
    						assert(bv.IsAssigned());
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
    submode="\0";
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
    	case 'o': mode=kTestOnly; break;

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
    	if (sParamName=="BookWriteFormat") {
    		is >> CBook::s_iBookWriteFormat;
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
