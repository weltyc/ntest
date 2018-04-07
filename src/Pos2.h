// Copyright Chris Welty
//  All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.

#pragma once

#ifndef H_POS2
#define H_POS2

#include <stdio.h>
#include <vector>
#include "n64/utils.h"
#include "core/Moves.h"
#include "pattern/patternJ.h"

#include "UndoInfo.h"

// global variables

class Pos2 {
public:
    void InitializeToStartPosition();
    void Initialize(const char* sBoard, bool fBlackMove);
    void Initialize(const CBitBoard& bb, bool fBlackMove);

    // print the position
    void Print() const;
    void FPrint(FILE* logfile) const;

    // get the board text
    char* GetText(char* sBoard) const;

    // Moving
    void MakeMoveBB(int square);
    void MakeMoveBB(int square, int& nFlipped, CUndoInfo& ui);
    void PassBB();
    void UndoMoveBB(int square, int nFlipped, CUndoInfo& ui);
    int CalcMovesAndPassBB(CMoves& moves);
    void GetFlips(int square, CUndoInfo& ui) const;
    int GetCountAndFlipBB(int square, CUndoInfo& ui);
    /**
    * Calculate moves and store them in moves
    *
    * @param [out] moves location to store moves
    * @return true if there are legal moves
    */

    bool CalcMoves(CMoves& moves) const {
        return m_bb.CalcMoves(moves);
    }
    void PassBase();

    // Info
    int NEmpty() const { return m_bb.NEmpty();}
    bool BlackMove() const { return m_fBlackMove; }
    const CBitBoard& GetBB() const { return m_bb; }
    bool IsValid() const { return m_bb.IsValid(); };

    int TerminalValue() const;

    int CalcMobility(u4& nMovesPlayer, u4& nMovesOpponent) const {
    	return m_bb.CalcMobility(nMovesPlayer,nMovesOpponent);
    }

private:
    void MakeMoveAndPassBB(CMove move, int& nFlipped, CUndoInfo& ui, int& pass);
    void UndoMoveAndPassBB(CMove move, int nFlipped, CUndoInfo& ui, int& nPass);
    int CalcMovesAndPassBB(CMoves& moves, const CMoves& submoves);

    bool m_fBlackMove;
    CBitBoard m_bb;

};

inline int Pos2::TerminalValue() const {
    return m_bb.TerminalValue();
}

inline void Pos2::PassBase() {
    m_fBlackMove=!m_fBlackMove;
    m_bb.mover = ~(m_bb.mover | m_bb.empty);
}

inline void Pos2::PassBB() {
    m_fBlackMove = !m_fBlackMove;
    m_bb.InvertColors();
}
#endif // #ifdef H_POS2
