#include <cstdlib>
#include "bitextractor.h"
#include "test.h"

template <unsigned start, unsigned count, unsigned step>
void TemplateTestBitGather() {
    for (unsigned boardIndex = 0; boardIndex < (1ULL << count); ++boardIndex) {
        // set up a random board
        uint64_t rboard = 0;
        for (unsigned i = 0; i < 8; ++i) {
            rboard |= (static_cast<uint64_t>(rand()) & 0xffULL) << (i * 8);
        }
        // now set up the bits we care about
        for (unsigned i = 0; i < count; ++i) {
            uint64_t bit = 1ULL << (start + i * step);
            rboard &= ~bit; // reset the bit to 0
            if (boardIndex & (1ULL << i))
                rboard |= bit; // set it if also in boardIndex
        }
        unsigned extractedBoardIndex = static_cast<unsigned>(EXTRACT_BITS_U64(rboard, start, count, step));
        assertEquals(boardIndex, extractedBoardIndex);
    }
}

void TestBitGather() {
    // Testing the bit gathering for columns and diagonals - the patterns
    // we actually care about.
    TemplateTestBitGather<0, 8, 8>();
    TemplateTestBitGather<1, 8, 8>();
    TemplateTestBitGather<2, 8, 8>();
    TemplateTestBitGather<3, 8, 8>();
    TemplateTestBitGather<4, 8, 8>();
    TemplateTestBitGather<5, 8, 8>();
    TemplateTestBitGather<6, 8, 8>();
    TemplateTestBitGather<7, 8, 8>();

    TemplateTestBitGather<0, 8, 9>();

    TemplateTestBitGather<1, 7, 9>();
    TemplateTestBitGather<8, 7, 9>();
    TemplateTestBitGather<6, 7, 7>();
    TemplateTestBitGather<15, 7, 7>();

    TemplateTestBitGather<2, 6, 9>();
    TemplateTestBitGather<16, 6, 9>();
    TemplateTestBitGather<5, 6, 7>();
    TemplateTestBitGather<23, 6, 7>();

    TemplateTestBitGather<3, 5, 9>();
    TemplateTestBitGather<24, 5, 9>();
    TemplateTestBitGather<4, 5, 7>();
    TemplateTestBitGather<31, 5, 7>();
}
