// Copyright 2004 Chris Welty
// All Rights Reserved

#include <deque>
#include <sstream>
#include <windows.h>

#include "SmartBook.h"
#include "GameX.h"

///////////////////////////////////
// CGame2
///////////////////////////////////

//! Stored commands from NBoard.
static std::deque<std::string> lines;
//! This event is set when there is an input line available

//!  A critical section handles access to a resource. Only one thread can own it at a time.
class CriticalSection  {
public:
	CriticalSection(); 
	~CriticalSection();

	void Enter();
	void Leave();
private:
	CRITICAL_SECTION m_cs;
} cs;

//! Construct the critical section object
CriticalSection::CriticalSection() {
 	::InitializeCriticalSection(&m_cs);
 }

//! Destroy the critical section
CriticalSection::~CriticalSection() {
	::DeleteCriticalSection(&m_cs);
}

//! Block until the critical section is available; then take control of it.
void CriticalSection::Enter() {
	::EnterCriticalSection(&m_cs);
}

//!  release control of the critical section
void CriticalSection::Leave() {
	::LeaveCriticalSection(&m_cs);
}

//! A waitable windows event
//!
//! This is an unnamed windows event, so that other processes
//! (e.g. multiple copies of ntest) can't affect the event.
class Event {
public:
	Event();
	~Event();

	void Set();
	void Reset();
	void Wait(u4 timeout);
private:
	HANDLE m_event;
} eventInput;

Event::Event() {
	m_event=CreateEvent(NULL, true, false, NULL);
}

Event::~Event() {
	CloseHandle(m_event);
}

//! Set an event to true.
void Event::Set() {
	SetEvent(m_event);
}

//! Set an event to false
void Event::Reset() {
	ResetEvent(m_event);
}

//! Wait on an event with the specified timeout, or forever if timeout == INFINITE
void Event::Wait(u4 timeout) {
	WaitForSingleObject(m_event, timeout);
}

//! This function returns true if there is input waiting for the engine.
//! It is meant to be used in the search function.
//!
//! It is currently used only when using an external viewer with GameX.
//! \todo test to see if this slows down the search. If so need a faster mechanism.
bool HasInput() {
	cs.Enter();
	bool fHasInput=!lines.empty();
	cs.Leave();
	return fHasInput;
}

//! Add an input line to the deque, and set the eventInput if the deque was empty before
static void AddStringToDeque(const std::string& s) {
	cs.Enter();
	if (lines.empty()) {
		eventInput.Set();
	}
	lines.push_back(s);
	cs.Leave();
}

//! Thread's job: add things to the deque
static DWORD WINAPI MoveCinToDeque(void*) {
	std::string sLine;
	while (getline(std::cin, sLine))
		AddStringToDeque(sLine);

	// last, post a quit message. Normally we get one from the viewer
	// but sometimes it doesn't get a chance to before termination.
	AddStringToDeque("quit");
	return 0;
}

//! Get a line of input from the thread that's parsing lines for us.
static bool GetLineFromThread(std::string& sLine) {
	eventInput.Wait(INFINITE);
	cs.Enter();
	sLine=lines.front();
	lines.pop_front();
	if (lines.empty())
		eventInput.Reset();
	cs.Leave();
	return true;
}

//! Create and run a game using the alternate game class for external viewers
//!
//! User commands:
//!	- mode <n>: 0=computer inactive, 1=computer plays white, 2=computer plays black, 3=computer plays both
CGameX::CGameX(CComputerDefaults cd) {
	CPlayerComputer* pcomp=NULL;

	int nboardVersion=0;
	cd.fsPrint=-1&~CSearchInfo::kPrintMove&~CSearchInfo::kPrintGameAnalysis;
	cd.fsPrintOpponent=-1;
	u4 fLearn=CPlayer::kNoAddSoloUnsolvedToBook;

	// Initialize with a basic board. That way we're guaranteed to always have a legal game.
	Initialize("8");

	// start up the thread that will give us messages
	u4 threadId;
	CreateThread(NULL, 0, MoveCinToDeque, NULL, 0, &threadId);

	std::string sLine;
//	while (getline(std::cin,sLine)) {
	while (GetLineFromThread(sLine)) {
		// save value of GameOver so that we know whether to learn the game
		const bool fGameWasOver=GameOver();

		std::istringstream is(sLine);
		std::string sCommand;
		is >> sCommand;

		if (sCommand=="go") {
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

