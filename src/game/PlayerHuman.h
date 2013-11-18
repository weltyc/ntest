#include "Player.h"

//! Human player of an othello game
class CPlayerHuman : public CPlayer {
public:
	CPlayerHuman();

	// game playing
	virtual TCheatcode GetMove(COsGame& game, int flags, COsMoveListItem& mli);


	// information about the player
	virtual bool NeedsBoardDisplayed() const;
	virtual bool IsHuman() const;

protected:
	// cheat codes. These read stdin for parameters and call the respective COsGame function
	bool Load(COsGame& game);
	bool Save(const COsGame& game);
};

