// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

// source code for utils


#include "Utils.h"
#include "options.h"
#include "types.h"

#include <stdio.h>
#include <sstream>
#include "crtdbg.h"

//! Return the string representation of a value, nicely formatted.
std::string StringFromValue(CValue value) {
	std::ostringstream os;
	os.precision(2);
	os.setf(std::ios::showpos | std::ios::fixed, std::ios::floatfield);
	os << double(value)/kStoneValue;

	return os.str();
}

//! Return the string representation of a value pair, nicely formatted.
//!
//! If the two values are equal we just output one of them, otherwise we output both separated by commas.
std::string StringFromValuePair(CValue value1, CValue value2) {
	std::ostringstream os;
	os.precision(2);
	os.setf(std::ios::showpos | std::ios::fixed, std::ios::floatfield);
	os << double(value1)/kStoneValue;
	if (value1!=value2)
		os << "," << double(value2)/kStoneValue;

	return os.str();
}

void str_upper(char *str) {
	for(;*str; str++) {
		*str = toupper(*str);
	}
}


// print a prompt, and repeatedly get lines until a character in answers is pressed on the keyboard
//	answers must be upper-case letters only.
// print the prompt again after every repeatAfter lines are entered, or never if repeatAfter==0.
// print the prompt to file fp (usually STDERR or STDOUT).

char GetAnswer(const char* prompt, const char* answers, int repeatAfter, FILE* fp) {
	char input[500], *finder;
	int ntimes;

	while (1) {
		fprintf(fp, prompt);
		for (ntimes=0; (ntimes<repeatAfter) || !repeatAfter; ntimes++)  {
			scanf("%499s",input);
			str_upper(input);
			if (finder=strpbrk(input, answers))
				return *finder;
		}
	}
}

u2 CountBits(u4 a) {
	return CountBitsInline(a);
}

char ValueToText(int value) {
	switch(value) {
	case WHITE: return 'O';
	case EMPTY: return '-';
	case BLACK: return '*';
	default: _ASSERT(0); return '?';
	}
}

int TextToValue(char c) {
	switch(toupper(c)) {
	case 'O':
	case '0':
	case 'W':
		return WHITE;
	case '*':
	case 'X':
	case '+':
	case 'B':
		return BLACK;
	case '.':
	case '_':
	case '-':
		return EMPTY;
	default:
		_ASSERT(0);
		return EMPTY;
	}
}

