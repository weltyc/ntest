// n64.cpp : Defines the entry point for the console application.
//

#include <cstring>
#include "stdafx.h"
#include "flips.h"
#include "solveTest.h"

#include "n64.h"

void printCompileType() {
#ifdef _M_AMD64
	std::cout << "64-bit compile\n";
#else
	std::cout << "32-bit compile\n";
#endif
}

void test() {
	extern void testFlips();
	extern void testLastFlipCountGenerator();
	extern void testUtils();
	extern void testSearch();
	extern void testSolve();
	extern void testHash();

	printCompileType();
	testFlips();
	testUtils();
	testLastFlipCountGenerator();
	testSearch();
	testSolve();
	testHash();
}

void init() {
	initFlips();
	initCutoffs();
}

void showUsage() {
	std::cout << "usage: n64 command\n\n";
	std::cout << "command is one of:\n"
		<< "generateFlipFunctions\n"
		<< "generateSolverTestPositions <depth>\n"
		<< "timeSolves <depth>\n"
		<< "timeWld <depth>\n"
		<< "stats <depth>\n"
		<< "timeMobility\n";
}

int n64_main(int argc, char* argv[]) {
	init();
	if (argc==1) {
		test();
		dumpCutoffs();
	}
	else if (!strcmp("generateFlipFunctions", argv[1])) {
		extern void generateFlipFunctions();
		generateFlipFunctions();
	}
	else if (!strcmp("generateSolverTestPositions", argv[1])) {
		if (argc < 3) {
			showUsage();
		}
		else {
			const int depth = atoi(argv[2]);
			generateSolverTestPositions(depth);
		}
	}
	else if (!strcmp("timeSolves", argv[1])) {
		if (argc < 3) {
			showUsage();
		}
		else {
			const int depth = atoi(argv[2]);
			timeSolves(1, depth, false);
		}
	}
	else if (!strcmp("timeWld", argv[1])) {
		if (argc < 3) {
			showUsage();
		}
		else {
			const int depth = atoi(argv[2]);
			timeSolves(1, depth, true);
		}
	}
	else if (!strcmp("stats", argv[1])) {
		if (argc < 3) {
			showUsage();
		}
		else {
			const int depth = atoi(argv[2]);
			timeSolves(1, depth, true);
		}
		dumpCutoffs();
	}
	else if (!strcmp("timeMobility", argv[1])) {
		extern void timeMobility();
		timeMobility();
	}
	else {
		showUsage();
	}

	return 0;
}
