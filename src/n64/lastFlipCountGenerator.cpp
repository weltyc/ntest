#include "stdafx.h"

/**
* Generate count and flip functions in the row direction
*
* @param row row of square to generate for
* @param col col of square to generate for
* @param flip true to generate flip function, false to generate count function
*/
static void generateRow(int row, int col, bool flip) {

	if (flip) {
		if (row==0) {
			std::cout << "\tconst int rowIndex = row0FlipIndex(col, mover, enemy);\n";
		}
		else {
			std::cout << "\tconst int rowIndex = rowFlipIndex(row, col, mover, enemy);\n";
		}
		std::cout << "\tflip |= rowFlips[row][rowIndex];\n";
	}
	else {
		std::cout << "\tcount += counts[" << col << "][";
		if (row!=0) {
			std::cout << "(mover >> " << (row*8) << ")";
		}
		else {
			std::cout << "mover";
		}
		std::cout << "&0xFF];\n";
	}
}

/**
* @param diag row-col
* @return mask for the diagonal containing (row, col)
*/
u64 maskD9(int diag) {
	u64 result=0;

	for (int col = 0; col<8; col++) {
		const int row = col+diag;
		if (row>=0 && row<8) {
			result|=mask(row, col);
		}
	}
	return result;
}

/**
* Generate count and flip functions in the 9-diagonal direction
*
* @param row row of square to generate for
* @param col col of square to generate for
* @param flip true to generate flip function, false to generate count function
*/
static void generateD9(int row, int col, bool flip) {
	const int diag = row-col;
	if (diag >= 6 || diag <=-6) {
		return;
	}
	// can't flip if we're in the middle of a length-3 diagonal
	if ((row==1 && col==6) || (row==6&&col==1)) {
		return;
	}
	const u64 mask = maskD9(diag);
	const u64 mult = MaskA;

	if (flip) {
		std::cout << "\tconst int d9Index = flipIndex(col, mover, enemy, " << asHex(mask) << ", "<<asHex(mult)<<");\n";
		std::cout << "\tflip |= d9Flips["<<(diag+5)<<"][d9Index];\n";
	}
	else {
		std::cout << "\tcount += counts[" << col << "][(mover&" << asHex(mask) << ")*MaskA>>56];\n";
	}
}

/**
* Generate count and flip functions in the column direction
*
* @param row row of square to generate for
* @param col col of square to generate for
* @param flip true to generate flip function, false to generate count function
*/
static void generateCol(int row, int col, bool flip) {
	u64 mult = 0x0002040810204081 << (7-col);
	u64 mask = 0x0101010101010101 << col;

	if (flip) {
		std::cout << "\tconst int colIndex = flipIndex(row, mover, enemy, " << asHex(mask) << ", "<<asHex(mult)<<");\n";
		std::cout << "\tflip |= colFlips[col][colIndex];\n";
	} else {
		std::cout << "\tcount += counts[" << row << "][(mover&"<<asHex(mask)<<")*" << asHex(mult) << ">>56];\n";
	}
}

/**
* @param diag row+col
* @return mask for the diagonal containing (row, col)
*/
u64 maskD7(int diag) {
	u64 diagMask=0;
	for (int i=0; i<=diag && i<8; i++) {
		int j = diag-i;
		if (j<8) {
			diagMask|=mask(i, j);
		}
	}
	return diagMask;
}

/**
* Generate count and flip functions in the 7-diagonal direction
*
* @param row row of square to generate for
* @param col col of square to generate for
* @param flip true to generate flip function, false to generate count function
*/
static void generateD7(int row, int col, bool flip) {
	const int diag = row+col;
	if (diag <=1 || diag >= 13) {
		return;
	}
	// can't flip if we're in the middle of a length-3 diagonal
	if (row==col && (row==1 || row==6)) {
		return;
	}
	u64 mask = maskD7(diag);
	u64 mult = MaskA;

	if (flip) {
		std::cout << "\tconst int d7Index = flipIndex(col, mover, enemy, " << asHex(mask) << ", "<<asHex(mult)<<");\n";
		std::cout << "\tflip |= d7Flips["<<(diag-2)<<"][d7Index];\n";
	}
	else {
		std::cout << "\tcount += counts[" << col << "][(mover&"<<asHex(mask)<<")*MaskA>>56];\n";
	}
}

void generateCounts() {
	for (int row = 0; row<8; row++) {
		for (int col = 0; col<8; col++) {
			std::cout << "int count" << squareText(row, col) << "(u64 mover) {\n";
			std::cout << "\tint count=0;\n";
			std::cout << "\n";
			generateRow(row, col, false);
			generateD9(row, col, false);
			generateCol(row, col, false);
			generateD7(row, col, false);
			std::cout<< "\n\treturn count;\n";
			std::cout << "}\n\n";
		}
	}

	std::cout << "typedef int(*TCount)(u64 mover);\n\n";

	std::cout << "static const TCount countFunctions[64] = {\n";
	for (int row =0; row<8; row++) {
		std::cout << "\t";
		for (int col=0; col<8; col++) {
			std::cout << "&count" << squareText(row, col) << ", ";
		}
		std::cout << "\n";
	}
	std::cout << "};\n\n";
}

void generateFlips() {
	for (int row = 0; row<8; row++) {
		for (int col = 0; col<8; col++) {
			std::cout << "u64 flip" << squareText(row, col) << "(u64 mover, u64 enemy) {\n";
			std::cout << "\tconst int row = " << row << ";\n";
			std::cout << "\tconst int col = " << col << ";\n";
			std::cout << "\n";
			std::cout << "\tu64 flip=0;\n";
			std::cout << "\n";
			generateRow(row, col, true);
			generateD9(row, col, true);
			generateCol(row, col, true);
			generateD7(row, col, true);
			std::cout<< "\n\treturn flip;\n";
			std::cout << "}\n\n";
		}
	}

	std::cout << "typedef u64(*TFlip)(u64,u64);\n\n";

	std::cout << "static const TFlip flipFunctions[64] = {\n";
	for (int row =0; row<8; row++) {
		std::cout << "\t";
		for (int col=0; col<8; col++) {
			std::cout << "&flip" << squareText(row, col) << ", ";
		}
		std::cout << "\n";
	}
	std::cout << "};\n\n";
}

void generateFlipFunctions() {
	std::cout << "// -- begin generated code --\n";
	generateCounts();
	generateFlips();
	std::cout << "// -- end generated code --\n";
}

