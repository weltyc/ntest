// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

#pragma once

#ifndef H_POS2
#define H_POS2

#include <stdio.h>
#include <vector>
#include "n64/utils.h"
#include "core/Moves.h"
#include "pattern/FastFlipTables.h"
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
	void GetFlips(bool m_fBlackMove, int square, CUndoInfo& ui) const;
	int GetCountAndFlipBB(bool m_fBlackMove, int square, CUndoInfo& ui);
	bool CalcMoves(CMoves& moves) const;
	void PassBase();

	// Info
	int NEmpty() const { return m_bb.NEmpty();}
	bool BlackMove() const { return m_fBlackMove; }
	const CBitBoard& GetBB() const { return m_bb; }
	const TConfig* Configs() const { return m_configs; }
	bool IsValid() const { return m_bb.IsValid(); };

	int TerminalValue() const;

	int CalcMobility(u4& nMovesPlayer, u4& nMovesOpponent) const {
		return m_bb.CalcMobility(nMovesPlayer,nMovesOpponent);
	}

private:
	void MakeMoveAndPassBB(CMove move, int& nFlipped, CUndoInfo& ui, int& pass);
	void UndoMoveAndPassBB(CMove move, int nFlipped, CUndoInfo& ui, int& nPass);
	int CalcMovesAndPassBB(CMoves& moves, const CMoves& submoves);


	// patterns
	void GetIDsJ(u2 ids[nPatternsJ]) const;
	void AppendPotMobPatterns(u2* ids, u2& jPattern) const;
	void IdsTrianglePatternsJ(u2* ids, int pattern1, int pattern2, int pattern3, int pattern4) const;
	void PrintConfigs() const;
	void Pos2::IdsEdgePatternsJ(u2* ids2x4, u2* ids2x5, u2* idsEdgeXX, int pattern1, int pattern2) const;
	void Pos2::Ids3x3Patterns(u2* ids, int pattern1, int pattern2, int pattern3) const;

	// eval functions
	// variables
	bool m_fBlackMove;
	CBitBoard m_bb;
	TConfig m_configs[knPats+1]; // extra is dummy pattern which is updated when directions don't flip any discs
};

inline int Pos2::TerminalValue() const {
	return m_bb.TerminalValue();
}

inline void Pos2::PassBase() {
	m_fBlackMove=!m_fBlackMove;
}
#endif // #ifdef H_POS2