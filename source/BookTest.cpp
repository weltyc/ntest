#include <stdio.h>
#include "Book.h"
#include "QPosition.h"
#include "Options.h"

#include "../GDK/test.h"

static const char* fnTest="c:/dev/othello/coefficients/test.book";

void CBook::TestMyIO() {
	NegamaxAll();
	WriteVersion2(fnTest);

	// print out bytes
	FILE* fp = fopen(fnTest, "rb");
	int c;
	while (0<= (c = getc(fp))) {
		printf("0x%02X, ", c);
	}
	fclose(fp);
	printf("\n");

	CBook book2(fnTest);
	TEST(*this==book2);

	remove(fnTest);
}

//! Test that WriteCompressed() followed by ReadCompressed() returns the same book
void CBook::TestIO() {

	std::cerr << "Book format test\n";

	{
		// test book with no position
		remove(fnTest);
		CBook book(fnTest);
		book.TestMyIO();
	}

	{
		// test book with a pass position and a subposition from that
		remove(fnTest);
		CBook book(fnTest);
		CQPosition pos;
		pos.Initialize("---------------------------**------**------------------O------O*", true);

		book.StoreRoot(pos.BitBoard(), CHeightInfoX(10, 4, false, pos.NEmpty()), 32, -300);
		pos.MakeMove(CMove(057));
		pos.Pass();
		book.StoreLeaf(pos.BitBoard(), CHeightInfoX(10, 4, false, pos.NEmpty()), 32);
		book.TestMyIO();
	}
	{
		// test book with only one entry
		remove(fnTest);
		CBook book(fnTest);
		CQPosition pos;

		pos.Initialize();
		book.StoreLeaf(pos.BitBoard(), CHeightInfoX(10, 4, false, 60), 32);
		book.TestMyIO();
	}
	{
		// test book with two entries in a tree
		remove(fnTest);
		CBook book(fnTest);
		CQPosition pos;
		pos.Initialize();

		book.StoreRoot(pos.BitBoard(), CHeightInfoX(10, 4, false, 60), 32, 16400);
		pos.MakeMove(CMove(045));
		book.StoreLeaf(pos.BitBoard(), CHeightInfoX(10, 4, false, 59), -32);
		book.TestMyIO();
	}
	{
		/*
		CComputerDefaults cd;
		cd.sCalcParams="s26";
		
		remove(fnTest);

		comp.book->TestMyIO();
		*/
	}

	std::cerr << "Done with book format test\n";
}

static void TestConstructor() {
	CBook book;
	TEST(book.Size()==0);
	TEST(book.IsAltered()==false);
	TEST(book.NEmptyMin()==hSolverStart+1);
	TEST(book.TLastWrite()==0);
	TEST(book.Filename().empty());
	TEST(book.NEdmundNodes(7)==0);
	TEST(book.HashErr()==0);
}

//! Helper routine to make sure that the given position is stored as an unsolved leaf node in the book
static void TestULeafPos(const CBook& book, const CQPosition& pos, CValue value, const CHeightInfoX& hix) {
	const CBookData* bd=book.FindData(pos.BitBoard());
	TEST(bd!=NULL);
	TEST(bd->IsLeaf());
	TEST(!bd->IsProven());
	TEST(bd->IsUleaf());
	TEST(bd->Hi()==hix);
	TEST(bd->Values().vMover==value);
	TEST(bd->Values().vOpponent==value);
	TEST(bd->Values().vHeuristic==value);
}

static void TestStoreLeaf() {

	{
		// first we test an unsolved leaf node
		CBook book;

		CHeightInfoX hix(2, 4, false, 60);
		CQPosition pos("---------------------------O*------*O---------------------------", true);
		const CValue value=32;

		book.StoreLeaf(pos.BitBoard(), hix, value);
		TEST(book.Size()==1);
		TestULeafPos(book, pos, value, hix);
	}

	{
		// now a solved leaf node
		CBook book;

		CQPosition pos("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO*OOOOOO-----------------", true);
		const CValue value=64*kStoneValue;
		CHeightInfoX hix(pos.NEmpty()-hSolverStart, 0, false, pos.NEmpty());

		book.StoreLeaf(pos.BitBoard(), hix, value);
		TEST(book.Size()==1);
		const CBookData* bd=book.FindData(pos.BitBoard());
		TEST(bd!=NULL);
		TEST(bd->IsLeaf());
		TEST(bd->IsProven());
		TEST(!bd->IsUleaf());
		TEST(!bd->IsBranch());
		TEST(bd->Hi()==hix);
		TEST(bd->Values().vMover==value-book.Boni().whiteBonus);
		TEST(bd->Values().vOpponent==value-book.Boni().whiteBonus);
		TEST(bd->Values().vHeuristic==value);
	}
	{
		// now a position with too few empties to go in book
		CBook book;
		CQPosition pos("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO*OOOOOOOOOOOOOOOOOOOOOO-", true);
		const CValue value=64*kStoneValue;
		CHeightInfoX hix(pos.NEmpty(), 0, false, pos.NEmpty());

		book.StoreLeaf(pos.BitBoard(), hix, value);
		TEST(book.Size()==0);
	}
}

static void TestStoreRoot() {
	{
		CBook book;

		CHeightInfoX hix(2, 4, false, 60);
		CQPosition pos("---------------------------O*------*O---------------------------", true);
		const CValue value=32;
		const CValue cutoff=-100;

		book.StoreRoot(pos.BitBoard(), hix, value, cutoff);
		TEST(book.Size()==1);
		const CBookData* bd=book.FindData(pos.BitBoard());
		TEST(bd!=NULL);
		TEST(bd->IsBranch());
		TEST(!bd->IsUleaf());
		TEST(!bd->IsLeaf());
		TEST(!bd->IsProven());

		TEST(bd->Hi()==hix);

		// don't test values as they won't be assigned.
	}
	{
		// now a solved root node
		CBook book;

		CQPosition pos("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO*OOOOOO-----------------", true);
		const CValue value=-64*kStoneValue;
		CHeightInfoX hix(pos.NEmpty()-hSolverStart, 0, false, pos.NEmpty());

		book.StoreRoot(pos.BitBoard(), hix, value, -100);
		TEST(book.Size()==1);
		const CBookData* bd=book.FindData(pos.BitBoard());
		TEST(bd!=NULL);
		TEST(bd->IsLeaf());
		TEST(bd->IsProven());
		TEST(!bd->IsUleaf());
		TEST(!bd->IsBranch());
		TEST(bd->Hi()==hix);
		TEST(bd->Values().vMover==value+book.Boni().whiteBonus);
		TEST(bd->Values().vOpponent==value+book.Boni().whiteBonus);
		TEST(bd->Values().vHeuristic==value);
	}
}

//! Test CBook::StoreSubposition().
//! While we're at it, test negamaxing as well, so store the parent position
//! as a branch node and see if it's assigned the right value.
static void TestStoreSubposition() {
	
	{
		// test StoreSubposition() when there is no pass after the move.
		CBook book;

		CQPosition pos;
		pos.Initialize();
		const CMoveValue mv(F5, 41);
		CHeightInfoX hix(2, 4, false, pos.NEmpty());

		// store subpos in book
		book.StoreSubposition(pos, mv, hix);
		TEST(book.Size()==1);

		// test that subpos went in correctly
		CQPosition posSub(pos);
		posSub.MakeMove(mv.move);
		CHeightInfoX hixSub(1, 4, false, posSub.NEmpty()-1);
		TestULeafPos(book, posSub, -mv.value, hixSub);
	
		// test that pos is valued correctly when we negamax
		book.StoreRoot(pos.BitBoard(), hix, mv.value, -100);
		book.NegamaxAll();
		const CBookData* pbd=book.FindData(pos.BitBoard());
		TEST(pbd!=NULL);
		TEST(pbd->Values().vHeuristic==mv.value);
	}
	{
		// test StoreSubposition() when there is a pass after the move.
		CBook book;

		CQPosition pos("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO*******-----------------", false);
		CMoveValue mv(A7, 64*kStoneValue);
		CHeightInfoX hix(2, 4, false, pos.NEmpty());

		// store subpos in book
		book.StoreSubposition(pos, mv, hix);
		TEST(book.Size()==1);

		// test that subpos went in correctly
		CQPosition posSub(pos);
		posSub.MakeMoveAndPass(mv.move);
		CHeightInfoX hixSub(1, 4, false, posSub.NEmpty()-1);
		TestULeafPos(book, posSub, mv.value, hixSub);

		// test that pos is valued correctly when we negamax
		book.StoreRoot(pos.BitBoard(), hix, mv.value, -100);
		book.NegamaxAll();
		const CBookData* pbd=book.FindData(pos.BitBoard());
		TEST(pbd!=NULL);
		TEST(pbd->Values().vHeuristic==mv.value);
	}
	{
		// test StoreSubposition() when there are two passes after the move.
		// no subposition should be added to the book (we don't store terminal nodes in book.)
		CBook book;

		CQPosition pos("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO******-----------------", false);
		CMoveValue mv;
		mv.move=H6;
		mv.value=64*kStoneValue;
		CHeightInfoX hix(2, 4, false, pos.NEmpty());

		// store subpos in book
		book.StoreSubposition(pos, mv, hix);
		TEST(book.Size()==0);

		// test that pos is valued correctly when we negamax
		book.StoreRoot(pos.BitBoard(), hix, mv.value, -100);
		book.NegamaxAll();
		const CBookData* pbd=book.FindData(pos.BitBoard());
		TEST(pbd!=NULL);
		TEST(pbd->Values().vHeuristic==mv.value);
	}
}

// constants for cutoff calculations
const i2 drawCutoff = 300;
const i2 deviationCutoff = 350;

//! Test CBook::IsQuestionable(CBookValue) by creating a book value and seeing if it's questionable
//!
//! \param isQuestionable expected value of the return value of the function
//! \param drawToMover expected value of drawToMover output from the function (this is only checked if isQuestionable is true)
//! \param drawCutoff drawCutoff to pass into the function
//! \param deviationCutoff deviationCutoff to pass into the function
//! \param vMover vMover for the CBookValue
//! \param vOpponent vOpponent for the CBookValue
void TestIsQuestionable(i2 vMover, i2 vOpponent, bool isQuestionable, bool drawToMover=false) {
	TEST(vMover>=vOpponent);	// this can't happen in a real book, so if it happens here the test is bogus
	CBookValue bv;
	bv.vMover = vMover;
	bv.vOpponent = vOpponent;
	bool returnedDrawToMover;
	TEST(isQuestionable == CBook::IsQuestionable(returnedDrawToMover, drawCutoff, deviationCutoff, bv));
	if (isQuestionable) {
		TEST(drawToMover==returnedDrawToMover);
	}
}

void TestIsQuestionable() {
	TestIsQuestionable(0, 0, true, false);
	TestIsQuestionable(deviationCutoff, deviationCutoff, false);
	TestIsQuestionable(-deviationCutoff, -deviationCutoff, false);
	TestIsQuestionable(deviationCutoff, deviationCutoff-1, true, false);
	TestIsQuestionable(1-deviationCutoff, -deviationCutoff, true, true);
	TestIsQuestionable(drawCutoff, -drawCutoff, false);
	TestIsQuestionable(drawCutoff-1, -drawCutoff, true, true);
	TestIsQuestionable(drawCutoff, 1-drawCutoff, true, false);
	TestIsQuestionable(deviationCutoff, drawCutoff, true, false);
	TestIsQuestionable(-drawCutoff, -deviationCutoff, true, true);
}

void TestFindQuestionableNode() {
	COsGame game;
	game.Initialize("8");
	CQPosition initialPos(game, 0);
	CQPosition questionablePosition;


	CBook book;
	bool drawToMover;

	// The position is not in book. FindQuestionableNode should return NULL.
	bool isQuestionable = book.FindQuestionableNode(questionablePosition, drawToMover, initialPos, drawCutoff, deviationCutoff);
	TEST(!isQuestionable);

	// add the initial position to the book. FindQuestionableNode should return the initial position.
	const CBitBoard initialBitBoard(initialPos.BitBoard());
	CMinimalReflection mr(initialBitBoard);
	CHeightInfoX heightInfoX(2, 4, false, initialBitBoard.NEmpty());
	book.StoreLeaf(CMinimalReflection(initialBitBoard), heightInfoX, 0);
	isQuestionable = book.FindQuestionableNode(questionablePosition, drawToMover, initialPos, drawCutoff, deviationCutoff);
	TEST(isQuestionable);
	TEST(questionablePosition==initialPos);

	// add the initial position to the book with a deviation of the deviation cutoff
	// Since this is bigger than the threshold for deviations, we won't count it.
	book.StoreLeaf(CMinimalReflection(initialBitBoard), heightInfoX, deviationCutoff);
	isQuestionable = book.FindQuestionableNode(questionablePosition, drawToMover, initialPos, drawCutoff, deviationCutoff);
	TEST(!isQuestionable);

	// but if it's one less than the deviation cutoff, it's questionable
	book.StoreLeaf(CMinimalReflection(initialBitBoard), heightInfoX, deviationCutoff-1);
	isQuestionable = book.FindQuestionableNode(questionablePosition, drawToMover, initialPos, drawCutoff, deviationCutoff);
	TEST(isQuestionable);
	TEST(questionablePosition==initialPos);

	// Also if it's negative... at the deviation cutoff is ok, one more is questionable
	book.StoreLeaf(CMinimalReflection(initialBitBoard), heightInfoX, -deviationCutoff);
	isQuestionable = book.FindQuestionableNode(questionablePosition, drawToMover, initialPos, drawCutoff, deviationCutoff);
	TEST(!isQuestionable);

	book.StoreLeaf(CMinimalReflection(initialBitBoard), heightInfoX, 1-deviationCutoff);
	isQuestionable = book.FindQuestionableNode(questionablePosition, drawToMover, initialPos, drawCutoff, deviationCutoff);
	TEST(isQuestionable);
	TEST(questionablePosition==initialPos);

	// This node is a draw, at +3/-3.. so it's ok
	const CBookData* bookData = book.FindData(initialBitBoard);
	// casting to remove const is a really bad idea... but no other easy way to test
	CBookValue& bookValue = (CBookValue&)(bookData->Values());
	bookValue.vHeuristic = 0;
	bookValue.vMover = drawCutoff;
	bookValue.vOpponent = - drawCutoff;
	isQuestionable = book.FindQuestionableNode(questionablePosition, drawToMover, initialPos, drawCutoff, deviationCutoff);
	TEST(!isQuestionable);
	TEST(questionablePosition==initialPos);

	CQPosition nextPos(initialPos);
	nextPos.MakeMove(CMove("F5"));
	const CBitBoard f5 = nextPos.BitBoard();
	nextPos.MakeMove(CMove("D6"));
	const CBitBoard f5d6 = nextPos.BitBoard();
	nextPos = initialPos;
	nextPos.MakeMove(CMove("F5"));
	nextPos.MakeMove(CMove("F6"));
	const CBitBoard f5f6 = nextPos.BitBoard();

	// Now we have a questionable position, but it's not at the initial node
	// tree is:
	//   f5 d6 : proven draw
	//   f5 f6 : deviation with value drawValue
	book.StoreRoot(initialBitBoard, heightInfoX, 0, -16400);
	book.StoreRoot(f5, heightInfoX, 0, -16400);
	CHeightInfoX hixSolved = CHeightInfoX(f5f6.NEmpty(), 0, false, f5f6.NEmpty());
	book.StoreLeaf(f5f6, hixSolved, 0);
	book.StoreLeaf(f5d6, heightInfoX, drawCutoff);
	book.NegamaxAll();

	isQuestionable = book.FindQuestionableNode(questionablePosition, drawToMover, initialPos, drawCutoff, deviationCutoff);
	TEST(isQuestionable);
	TEST(CMinimalReflection(questionablePosition.BitBoard())==CMinimalReflection(f5d6));

	// This position has a questionable node, but it's not on the draw tree so it's not returned
	CBook book2;
	book2.StoreRoot(initialBitBoard, heightInfoX, -deviationCutoff, -16400);
	book2.StoreRoot(f5, heightInfoX, deviationCutoff, -16400);
	book2.StoreLeaf(f5f6, heightInfoX, -deviationCutoff);
	book2.StoreLeaf(f5d6, heightInfoX, 0);
	book2.NegamaxAll();
	isQuestionable = book2.FindQuestionableNode(questionablePosition, drawToMover, initialPos, drawCutoff, deviationCutoff);
	TEST(!isQuestionable);
}

extern void HashInit();
extern void HashChunk(const void* p, int size);
extern u4 hash_a;

static void TestHash(char* bytes, int length, u4 expected) {
	HashInit();
	HashChunk(bytes, length);
	std::cout << length << ": " << hash_a << "\n";
	TEST(hash_a == expected);
}

static void TestHash4() {
	char bytes[] = {1,2,3,4};
	TestHash(bytes, 4, 67305985);
}

static void TestHash8() {
	char bytes[] = {1,2,3,4, 5, 6, 7, 8};
	TestHash(bytes, 8, 67305985);
}

static void TestHash12() {
	char bytes[] = {1,2,3,4,5,6,7,8,9,10,11,12};
	TestHash(bytes, 12, 2648134205);
}

void TestBook() {
	CBook::TestIO();
	TestHash4();
	TestHash8();
	TestHash12();
	TestConstructor();
	TestStoreLeaf();
	TestStoreRoot();
	TestStoreSubposition();
	TestIsQuestionable();
	TestFindQuestionableNode();
}
