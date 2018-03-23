// Copyright 2004 Chris Welty
//  All Rights Reserved

#include <condition_variable>
#include <deque>
#include <functional>
#include <mutex>
#include <sstream>
#include <thread>

#include "SmartBook.h"
#include "GameX.h"

///////////////////////////////////
// CGame2
///////////////////////////////////

//! Stored commands from NBoard.
std::mutex cs;
static std::deque<std::string> lines;


//! A waitable event
static std::mutex cvcs;
static std::condition_variable cv;
static bool val = false;
static bool IsValSet() {
    return val;
}

static void EventSet() {
    {
    	std::unique_lock<std::mutex> guard(cvcs);
        val = true;
    }
    cv.notify_one();

}

//! Set an event to false
static void EventReset() {
    std::unique_lock<std::mutex> guard(cvcs);
    val = false;
}

void EventWait() {
    std::unique_lock<std::mutex> guard(cvcs);
    while (!val) {
    	cv.wait(guard, IsValSet);
    }
}

//! This function returns true if there is input waiting for the engine.
//! It is meant to be used in the search function.
//!
//! It is currently used only when using an external viewer with GameX.
//! \todo test to see if this slows down the search. If so need a faster mechanism.
bool HasInput() {
    std::unique_lock<std::mutex> guard(cs);
    bool fHasInput=!lines.empty();
    return fHasInput;
}

//! Add an input line to the deque, and set the event if the deque was empty before
static void AddStringToDeque(const std::string& s) {
    std::unique_lock<std::mutex> guard(cs);
    if (lines.empty()) {
    	EventSet();
    }
    lines.push_back(s);
}

//! Thread's job: add things to the deque
static void MoveCinToDeque() {
    std::string sLine;
    while (getline(std::cin, sLine))
    	AddStringToDeque(sLine);

    // last, post a quit message. Normally we get one from the viewer
    // but sometimes it doesn't get a chance to before termination.
    AddStringToDeque("quit");
}

//! Get a line of input from the thread that's parsing lines for us.
static bool GetLineFromThread(std::string& sLine) {
    EventWait();
    std::unique_lock<std::mutex> guard(cs);
    sLine=lines.front();
    lines.pop_front();
    if (lines.empty())
    	EventReset();
    return true;
}

//! Create and run a game using the alternate game class for external viewers
//!
//! User commands:
//!    - mode <n>: 0=computer inactive, 1=computer plays white, 2=computer plays black, 3=computer plays both
CGameX::CGameX(CComputerDefaults cd) {
    CPlayerComputer* pcomp=NULL;

    int nboardVersion=0;
    cd.fsPrint=-1&~CSearchInfo::kPrintMove&~CSearchInfo::kPrintGameAnalysis;
    cd.fsPrintOpponent=-1;
    u4 fLearn=CPlayer::kNoAddSoloUnsolvedToBook;

    // Initialize with a basic board. That way we're guaranteed to always have a legal game.
    Initialize("8");

    // start up the thread that will give us messages
    std::thread cinthread(MoveCinToDeque);

    std::string sLine;
    while (GetLineFromThread(sLine)) {
    	// save value of GameOver so that we know whether to learn the game
    	const bool fGameWasOver=GameOver();

    	std::istringstream is(sLine);
    	std::string sCommand;
    	is >> sCommand;

    	if (sCommand=="analyze") {
    		std::cout << "status NTest does not support retrograde analysis" << std::endl;
    	}
    	else if (sCommand=="go") {
    		// engine tells viewer what move it would make.
    		// do NOT update the board, the engine has no idea whether the viewer thinks the computer should move
    		// (e.g. in nboard, the user could switch to "user plays both colors" mode while the engine is thinking).
    		// any board updates are given by a standard move message.
    		if (pcomp) {
    			COsMoveListItem mli;
    			pcomp->GetMoveAndTime(*this, CPlayer::kMyMove | fLearn, mli);
    			std::cout << "=== " << mli << std::endl;
    		}
    		else {
    			std::cout << "warning Must pick a depth with \"set depth <n>\" first" << std::endl;
    		}
    	}
    	else if (sCommand=="hint") {
    		int nBest=1;
    		is >> nBest;
    		// if it's not the computer's move, he can give hints.
    		//COsMoveListItem mli;
    		//pcomp->GetMoveAndTime(*this, CPlayer::kAnalyze | fLearn, mli);
    		std::cout << "status Analyzing" << std::endl;
    		pcomp->Hint(CQPosition(GetPos().board), nBest);
    		std::cout << "status" << std::endl;
    	}
    	else if (sCommand=="learn") {
    		pcomp->EndGame(*this);
    		std::cout << "learn" << std::endl;
    	}
    	else if (sCommand=="nboard") {
    		is >> nboardVersion;
    	}
    	else if (sCommand=="new") {
    		// this command is not part of the interface standard, but is useful for testing.
    		std::string sBoardType("8");
    		is >> sBoardType;
    		Initialize(sBoardType.c_str());
    	}
    	else if (sCommand=="ping") {
    		int n;
    		is >> n;
    		std::cout << "pong " << n << std::endl;
    	}
    	else if (sCommand=="quit") {
    		// We can't really kill a thread which blocks on stdio.
#ifdef _WIN32
    		_exit(0);
#else
    		exit(0);
#endif
    		break;
    	}
    	else if (sCommand=="remove_tree") {
    		if (pcomp && pcomp->book) {
    			pcomp->book->RemoveTree(CQPosition(GetPos().board).BitBoard());
    		}
    	}
    	else if (sCommand=="draw_tree") {
    		if (pcomp && pcomp->book) {
    			std::cout<<"--- Draw Tree ---\nAfter ";
    			for (size_t i=0; i<ml.size(); i++)
    				std::cout << ml[i].mv << " ";
    			std::cout << "\n";

    			pcomp->book->PrintDrawTree(CQPosition(GetPos().board));
    		}
    	}
    	else if (sCommand=="set") {
    		std::string param;
    		is >> param;
    		if (param=="game") {
    			// board is changing, need to negamax old game to make sure values remain consistent
    			if (pcomp && pcomp->book)
    				pcomp->book->NegamaxGame(*this);
    			In(is);
    		}
    		else if (param=="depth") {
    			std::istringstream iscp(cd.sCalcParams.c_str());
    			char c='s';
    			int depth=12;
    			iscp >> c >> depth;

    			is >> depth;

    			std::ostringstream os;
    			os << c << depth;
    			cd.sCalcParams=os.str();

    			if (pcomp)
    				delete pcomp;
    			pcomp=new CPlayerComputer(cd);
    			std::cout << "\n";
    			std::cout << "set myname Ntest" << depth << std::endl;
    		}
    		else if (param=="contempt") {
    			float contempt=0;
    			is >> contempt;

    			// update both the computer defaults (used for new computers) and the current computer.
    			cd.vContempts[1]=CComputerDefaults::FloatToContempt(contempt);
    			cd.vContempts[0]=-cd.vContempts[1];
    			if (pcomp) {
    				pcomp->cd.vContempts[0]=cd.vContempts[0];
    				pcomp->cd.vContempts[1]=cd.vContempts[1];
    			}
    		}
    		else {
    			getline(is, param);
    		}
    	}
    	else if (sCommand=="move") {
    		COsMoveListItem mli;
    		is >> mli;
    		Update(mli);
    	}
    	else if (sCommand.size()==2) {
    		COsMoveListItem mli;
    		mli.mv=COsMove(sCommand);
    		Update(mli);
    	}
    }
}

