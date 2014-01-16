#include "PlayerHuman.h"

#include <cstring>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include "../n64/qssert.h"

#include "Game.h"

using namespace std;

//////////////////////////////////////////////////
// CPlayerHuman
//////////////////////////////////////////////////

CPlayerHuman::CPlayerHuman() {
}

bool CPlayerHuman::Save(const COsGame& game) {
	string fn;
	cin >> fn;

	ofstream os(fn.c_str());

	bool fResult = (os << game).good();
	cout << (fResult?"Saved ":"Failed to save ") << fn << "\n";

	return fResult;
}

bool CPlayerHuman::Load(COsGame& game) {
	string fn;
	cin >> fn;

	CGame* pGame=dynamic_cast<CGame*>(&game);
	if (pGame) {
		int err=pGame->Load(fn);
		cout << (err?"Failed to load ":"Loaded ") << fn << "\n";
		if (!err)
			pGame->SetInfo();

		return !err;
	}
	else {
		cerr << "Internal error at " << __FILE__ << " line " << __LINE__ << "\n";
		QSSERT(0);
		return false;
	}
}

CPlayer::TCheatcode CPlayerHuman::GetMove(COsGame& game, int flags, COsMoveListItem& mli) {
	string sInput;
	u4 i;

	while (flags&kMyMove) {

		// input and convert to lowercase
		cout << "Please enter next move: ";
		cin >> sInput;

		// if the parent process has closed stdin, we need to exit
		if (!cin)
#ifdef _WIN32
			_exit(0);
#else
            exit(0);
#endif
		for(i=0; i<sInput.length(); i++) {
			sInput[i]=tolower(sInput[i]);
		}

		// make a move?
		if (sInput.length()>=2 && isalpha(sInput[0]) && isdigit(sInput[1])) {
			if (game.GetPos().board.IsMoveLegal(COsMove(sInput))) {
				mli.mv=COsMove(sInput);
				break;
			}
			else
				cout << "'" << sInput << "' is not a valid move.\n";
		}
		// pass?
		else if(!strncmp(sInput.c_str(),"pa",2)) {
			if (!game.GetPos().board.HasLegalMove()) {
				mli.mv.SetPass();
				break;
			}
			else
				cout << "You have a valid move, you can't pass.\n";
		}

		// cheat code ?
		else {
			if (sInput=="save") {
				Save(game);
			}
			else if (flags&kAllowCheats) {
				if (sInput=="ap") {
					return kCheatAutoplay;
				}
				else if (sInput=="load") {
					Load(game);
					return kCheatContinue;
				}
				else if (sInput=="switch") {
					return kCheatSwitch;
				}
				else if (sInput=="name") {
					cin >> m_sName;
					return kCheatContinue;
				}
				else if (sInput=="play") {
					string sLine;
					getline(cin, sLine);
					std::istringstream is(sLine);
					COsMoveListItem mli;
					while ((is >> mli)) {
						if (game.GetPos().board.IsMoveLegal(mli.mv))
							game.Update(mli);
						else {
							cout << "Play sequence terminated at illegal move " << mli.mv << "\n";
							break;
						}
					}
					return kCheatContinue;
				}
				else if (sInput=="quit") {
					std::cout << "quitting" << std::endl;
#ifdef _WIN32
                    _exit(0);
#else
                    exit(0);
#endif
				}
				else if (sInput=="undo") {
					return kCheatUndo;
				}
				else if (sInput=="?"|| sInput=="help") {
					cout << "Current commands:\n"
						<< " save <filename>: save the current position as file\n"
						<< " load <filename>: load the current position from a file\n"
						<< " name <name>: set your name\n"
						/*<< " setgame <GGF game>: reset the game with the given starting position\n"*/
						<< " ap: have opponent autoplay the remainder of the game\n"
						<< " switch: switch sides in game\n"
						<< " play <move>*: force a sequence of moves to be played\n"
						<< " quit: quit the program\n"
						<< " undo: undo your last move\n"
						<< "\n";
				}
			}
			else
				cout << "Your move must consist of a letter followed by a number, e.g. A8\n";
		}
	}

	mli.dEval=0;
	return kCheatNone;
}

// information

bool CPlayerHuman::NeedsBoardDisplayed() const {
	return true;
}

bool CPlayerHuman::IsHuman() const {
	return true;
}
