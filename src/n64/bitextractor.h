// Copyright (c) 2014, Vlad Petric
// All rights reserved.
//
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

#ifndef __BIT_EXTRACTOR_H
#define __BIT_EXTRACTOR_H

/*
This header file provides two macros and a function.
EXTRACT_BITS_U64(value, START, COUNT, STEP)
    Given an unsigned 64 bit value, extract COUNT bits, beginning with position START,
    separated by STEP positions. In other words, gather the bits at positions:
    START, START + STEP, START + 2 * STEP ... , START + (COUNT - 1) * STEP

    START, COUNT and STEP must be constants.

EXTRACT_BITS_U32(value, START, COUNT, STEP)
    Same as above, except for a 32 bit unsigned value. 

The algorithm used for the two EXTRACT_BITS macros is known in the board game programming
community as "magic multiplier".

Essentially, the bits can be gather via three basic operations:
    ((value & mask) * multiplier) >> shift.

The & mask only keeps the bits that we're interested in. The multiplier scrambles those bits around,
generating the sequence that we're interested in as the highest order bits in the 64 or 32 bit
unsigned integer. The right shift brings the sequence down to the lowest order bits.

My own description of the algorithm can be found here:
http://drpetric.blogspot.com/2013/09/bit-gathering-via-multiplication.html

Static Checks:
    START + (COUNT - 1) * STEP should not exceed 64 or 32 bits, respectively (sanity check)
    STEP >= COUNT - this is a limitation of the magic multiplier algorithm

These macros are highly useful for extracting columns or diagonals from bitboards.

The implementation relies on C++ template metaprogramming.

In addition, a simple function - extract_row - that extracts rows from bitboards is included as
well.
*/

#include <inttypes.h>

// A basic implementation of static assertion, so that we don't rely on boost or c++11
template<bool>
class meta_extract_static_assert;
template<>
class meta_extract_static_assert<true> {};
#define EXTRACT_STATIC_ASSERT(COND) typedef meta_extract_static_assert<COND> extraction_static_assert_failed;

template <typename IntT, unsigned int start_bit,
          unsigned int count, unsigned int step>
class meta_repeated_bit {
    EXTRACT_STATIC_ASSERT(start_bit + (count - 1) * step <= sizeof(IntT) * 8);
public:
    static const IntT value =
        meta_repeated_bit<IntT, start_bit + step, count - 1, step>::value
        | (IntT(1) << start_bit);
};

template <typename IntT, unsigned int start_bit, unsigned int step>
class meta_repeated_bit <IntT, start_bit, 0, step>
{
public:
    static const IntT value = 0;
};


template <typename IntT, unsigned int start_bit, unsigned int count, unsigned int step>
inline IntT extractor(IntT input) {
	EXTRACT_STATIC_ASSERT(count <= step);
    return ((input & meta_repeated_bit<IntT, start_bit, count, step>::value) *
            meta_repeated_bit<IntT, 0, count, step - 1>::value *
            (IntT(1) << (sizeof(IntT) * 8 - 1 - start_bit - (count - 1) * step))) >> 
            (sizeof(IntT) * 8 - count);
}
#define EXTRACT_BITS_U64(value, START, COUNT, STEP) \
    extractor<uint64_t, (START), (COUNT), (STEP)>(value)

#define EXTRACT_BITS_U32(value, START, COUNT, STEP) \
    extractor<uint32_t, (START), (COUNT), (STEP)>(value)

inline unsigned extract_row(uint64_t v, int row) {
    return (v >> (row * 8)) & 0xff;
}
#endif  // __BIT_EXTRACTOR_H
