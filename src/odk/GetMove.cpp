// Copyright 2001 Chris Welty
//  All Rights Reserved

#include "types.h"

#include "GetMove.h"
#include "OsObjects.h"

int Evaluate(const COsBoard& board);

int Evaluate(const COsBoard& board) {
    int net=board.NetBlackSquares();
    return board.fBlackMove?net:-net;
}

void GetMove(const COsGame& game, COsMoveListItem& mli) {
    int row, col;
    int eval, evalSubnode;
    int nBoardSize=game.mt.bt.n;
    COsBoard board;
    bool fAnti=game.mt.fAnti;

    eval=-1000;
    mli.mv.fPass=true;
    mli.dEval=0;	// return eval of 0 if we are forced to pass;

    for (row=0; row<nBoardSize; row++) {
    	for (col=0; col<nBoardSize; col++) {
    		COsMove mv(row,col);
    		if (game.pos.board.IsMoveLegal(mv)) {

    			board=game.pos.board;
    			board.Update(mv);
    			evalSubnode=Evaluate(board);
    			if (!fAnti)
    				evalSubnode=-Evaluate(board);
    			if (evalSubnode>eval) {
    				eval=evalSubnode;
    				mli.mv=mv;
    				mli.dEval=eval;
    			}
    		}
    	}
    }
}