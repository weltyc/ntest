// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

#pragma once
#include "flipfuncBB.h"
#include "FastFlipTables.h"
#pragma warning (disable: 4049)

void FlipFunctionBBWhite0() {
	configs[ 0]-=    1;
	bb.mover.u4s[0]^=0x1;
	bb.empty.u4s[0]^=0x1;
}

void FlipFunctionBBBlack0() {
	configs[ 0]+=    1;
	bb.mover.u4s[0]^=0x1;
	bb.empty.u4s[0]^=0x1;
}

void FlipFunctionBBWhite1() {
	configs[ 0]-=    7;
	configs[20]-=    2;
	configs[31]-=    2;
	bb.mover.u4s[0]^=0x3;
	bb.empty.u4s[0]^=0x1;
}

void FlipFunctionBBBlack1() {
	configs[ 0]+=    7;
	configs[20]+=    2;
	configs[31]+=    2;
	bb.mover.u4s[0]^=0x3;
	bb.empty.u4s[0]^=0x1;
}

void FlipFunctionBBWhite2() {
	configs[ 0]-=   25;
	configs[ 8]-=    2;
	configs[20]-=    2;
	configs[21]-=    2;
	configs[30]-=    2;
	configs[31]-=    2;
	bb.mover.u4s[0]^=0x7;
	bb.empty.u4s[0]^=0x1;
}

void FlipFunctionBBBlack2() {
	configs[ 0]+=   25;
	configs[ 8]+=    2;
	configs[20]+=    2;
	configs[21]+=    2;
	configs[30]+=    2;
	configs[31]+=    2;
	bb.mover.u4s[0]^=0x7;
	bb.empty.u4s[0]^=0x1;
}

void FlipFunctionBBWhite3() {
	configs[ 0]-=   79;
	configs[ 8]-=    2;
	configs[ 9]-=    2;
	configs[20]-=    2;
	configs[21]-=    2;
	configs[22]-=    2;
	configs[29]-=    2;
	configs[30]-=    2;
	configs[31]-=    2;
	bb.mover.u4s[0]^=0xF;
	bb.empty.u4s[0]^=0x1;
}

void FlipFunctionBBBlack3() {
	configs[ 0]+=   79;
	configs[ 8]+=    2;
	configs[ 9]+=    2;
	configs[20]+=    2;
	configs[21]+=    2;
	configs[22]+=    2;
	configs[29]+=    2;
	configs[30]+=    2;
	configs[31]+=    2;
	bb.mover.u4s[0]^=0xF;
	bb.empty.u4s[0]^=0x1;
}

void FlipFunctionBBWhite4() {
	configs[ 0]-=  241;
	configs[ 8]-=    2;
	configs[ 9]-=    2;
	configs[10]-=    2;
	configs[20]-=    2;
	configs[21]-=    2;
	configs[22]-=    2;
	configs[23]-=    2;
	configs[28]-=    2;
	configs[29]-=    2;
	configs[30]-=    2;
	configs[31]-=    2;
	bb.mover.u4s[0]^=0x1F;
	bb.empty.u4s[0]^=0x1;
}

void FlipFunctionBBBlack4() {
	configs[ 0]+=  241;
	configs[ 8]+=    2;
	configs[ 9]+=    2;
	configs[10]+=    2;
	configs[20]+=    2;
	configs[21]+=    2;
	configs[22]+=    2;
	configs[23]+=    2;
	configs[28]+=    2;
	configs[29]+=    2;
	configs[30]+=    2;
	configs[31]+=    2;
	bb.mover.u4s[0]^=0x1F;
	bb.empty.u4s[0]^=0x1;
}

void FlipFunctionBBWhite5() {
	configs[ 0]-=  727;
	configs[ 8]-=    2;
	configs[ 9]-=    2;
	configs[10]-=    2;
	configs[11]-=    2;
	configs[20]-=    2;
	configs[21]-=    2;
	configs[22]-=    2;
	configs[23]-=    2;
	configs[24]-=    2;
	configs[27]-=    2;
	configs[28]-=    2;
	configs[29]-=    2;
	configs[30]-=    2;
	configs[31]-=    2;
	bb.mover.u4s[0]^=0x3F;
	bb.empty.u4s[0]^=0x1;
}

void FlipFunctionBBBlack5() {
	configs[ 0]+=  727;
	configs[ 8]+=    2;
	configs[ 9]+=    2;
	configs[10]+=    2;
	configs[11]+=    2;
	configs[20]+=    2;
	configs[21]+=    2;
	configs[22]+=    2;
	configs[23]+=    2;
	configs[24]+=    2;
	configs[27]+=    2;
	configs[28]+=    2;
	configs[29]+=    2;
	configs[30]+=    2;
	configs[31]+=    2;
	bb.mover.u4s[0]^=0x3F;
	bb.empty.u4s[0]^=0x1;
}

void FlipFunctionBBWhite6() {
	configs[ 0]-= 2185;
	configs[ 8]-=    2;
	configs[ 9]-=    2;
	configs[10]-=    2;
	configs[11]-=    2;
	configs[12]-=    2;
	configs[20]-=    2;
	configs[21]-=    2;
	configs[22]-=    2;
	configs[23]-=    2;
	configs[24]-=    2;
	configs[25]-=    2;
	configs[27]-=    2;
	configs[28]-=    2;
	configs[29]-=    2;
	configs[30]-=    2;
	configs[31]-=    2;
	bb.mover.u4s[0]^=0x7F;
	bb.empty.u4s[0]^=0x1;
}

void FlipFunctionBBBlack6() {
	configs[ 0]+= 2185;
	configs[ 8]+=    2;
	configs[ 9]+=    2;
	configs[10]+=    2;
	configs[11]+=    2;
	configs[12]+=    2;
	configs[20]+=    2;
	configs[21]+=    2;
	configs[22]+=    2;
	configs[23]+=    2;
	configs[24]+=    2;
	configs[25]+=    2;
	configs[27]+=    2;
	configs[28]+=    2;
	configs[29]+=    2;
	configs[30]+=    2;
	configs[31]+=    2;
	bb.mover.u4s[0]^=0x7F;
	bb.empty.u4s[0]^=0x1;
}

void FlipFunctionBBWhite7() {
	configs[19]-=    1;
}

void FlipFunctionBBBlack7() {
	configs[19]+=    1;
}

void FlipFunctionBBWhite8() {
	configs[ 1]-=    2;
	configs[19]-=    7;
	configs[33]-=    2;
	bb.mover.u4s[0]^=0x100;
}

void FlipFunctionBBBlack8() {
	configs[ 1]+=    2;
	configs[19]+=    7;
	configs[33]+=    2;
	bb.mover.u4s[0]^=0x100;
}

void FlipFunctionBBWhite9() {
	configs[ 1]-=    2;
	configs[ 2]-=    2;
	configs[ 8]-=   18;
	configs[19]-=   25;
	configs[33]-=    2;
	configs[34]-=    2;
	bb.mover.u4s[0]^=0x10100;
}

void FlipFunctionBBBlack9() {
	configs[ 1]+=    2;
	configs[ 2]+=    2;
	configs[ 8]+=   18;
	configs[19]+=   25;
	configs[33]+=    2;
	configs[34]+=    2;
	bb.mover.u4s[0]^=0x10100;
}

void FlipFunctionBBWhite10() {
	configs[ 1]-=    2;
	configs[ 2]-=    2;
	configs[ 3]-=    2;
	configs[ 8]-=   18;
	configs[ 9]-=   54;
	configs[19]-=   79;
	configs[33]-=    2;
	configs[34]-=    2;
	configs[35]-=    2;
	bb.mover.u4s[0]^=0x1010100;
}

void FlipFunctionBBBlack10() {
	configs[ 1]+=    2;
	configs[ 2]+=    2;
	configs[ 3]+=    2;
	configs[ 8]+=   18;
	configs[ 9]+=   54;
	configs[19]+=   79;
	configs[33]+=    2;
	configs[34]+=    2;
	configs[35]+=    2;
	bb.mover.u4s[0]^=0x1010100;
}

void FlipFunctionBBWhite11() {
	configs[ 1]-=    2;
	configs[ 2]-=    2;
	configs[ 3]-=    2;
	configs[ 4]-=    2;
	configs[ 8]-=   18;
	configs[ 9]-=   54;
	configs[10]-=  162;
	configs[19]-=  241;
	configs[33]-=    2;
	configs[34]-=    2;
	configs[35]-=    2;
	configs[36]-=    2;
	bb.mover.u4s[0]^=0x1010100;
	bb.mover.u4s[1]^=0x1;
}

void FlipFunctionBBBlack11() {
	configs[ 1]+=    2;
	configs[ 2]+=    2;
	configs[ 3]+=    2;
	configs[ 4]+=    2;
	configs[ 8]+=   18;
	configs[ 9]+=   54;
	configs[10]+=  162;
	configs[19]+=  241;
	configs[33]+=    2;
	configs[34]+=    2;
	configs[35]+=    2;
	configs[36]+=    2;
	bb.mover.u4s[0]^=0x1010100;
	bb.mover.u4s[1]^=0x1;
}

void FlipFunctionBBWhite12() {
	configs[ 1]-=    2;
	configs[ 2]-=    2;
	configs[ 3]-=    2;
	configs[ 4]-=    2;
	configs[ 5]-=    2;
	configs[ 8]-=   18;
	configs[ 9]-=   54;
	configs[10]-=  162;
	configs[11]-=  486;
	configs[19]-=  727;
	configs[33]-=    2;
	configs[34]-=    2;
	configs[35]-=    2;
	configs[36]-=    2;
	configs[37]-=    2;
	bb.mover.u4s[0]^=0x1010100;
	bb.mover.u4s[1]^=0x101;
}

void FlipFunctionBBBlack12() {
	configs[ 1]+=    2;
	configs[ 2]+=    2;
	configs[ 3]+=    2;
	configs[ 4]+=    2;
	configs[ 5]+=    2;
	configs[ 8]+=   18;
	configs[ 9]+=   54;
	configs[10]+=  162;
	configs[11]+=  486;
	configs[19]+=  727;
	configs[33]+=    2;
	configs[34]+=    2;
	configs[35]+=    2;
	configs[36]+=    2;
	configs[37]+=    2;
	bb.mover.u4s[0]^=0x1010100;
	bb.mover.u4s[1]^=0x101;
}

void FlipFunctionBBWhite13() {
	configs[ 1]-=    2;
	configs[ 2]-=    2;
	configs[ 3]-=    2;
	configs[ 4]-=    2;
	configs[ 5]-=    2;
	configs[ 6]-=    2;
	configs[ 8]-=   18;
	configs[ 9]-=   54;
	configs[10]-=  162;
	configs[11]-=  486;
	configs[12]-= 1458;
	configs[19]-= 2185;
	configs[33]-=    2;
	configs[34]-=    2;
	configs[35]-=    2;
	configs[36]-=    2;
	configs[37]-=    2;
	bb.mover.u4s[0]^=0x1010100;
	bb.mover.u4s[1]^=0x10101;
}

void FlipFunctionBBBlack13() {
	configs[ 1]+=    2;
	configs[ 2]+=    2;
	configs[ 3]+=    2;
	configs[ 4]+=    2;
	configs[ 5]+=    2;
	configs[ 6]+=    2;
	configs[ 8]+=   18;
	configs[ 9]+=   54;
	configs[10]+=  162;
	configs[11]+=  486;
	configs[12]+= 1458;
	configs[19]+= 2185;
	configs[33]+=    2;
	configs[34]+=    2;
	configs[35]+=    2;
	configs[36]+=    2;
	configs[37]+=    2;
	bb.mover.u4s[0]^=0x1010100;
	bb.mover.u4s[1]^=0x10101;
}

void FlipFunctionBBWhite14() {
	configs[32]-=    1;
}

void FlipFunctionBBBlack14() {
	configs[32]+=    1;
}

void FlipFunctionBBWhite15() {
	configs[ 1]-=    6;
	configs[ 8]-=    6;
	configs[20]-=    6;
	configs[32]-=    7;
	bb.mover.u4s[0]^=0x200;
}

void FlipFunctionBBBlack15() {
	configs[ 1]+=    6;
	configs[ 8]+=    6;
	configs[20]+=    6;
	configs[32]+=    7;
	bb.mover.u4s[0]^=0x200;
}

void FlipFunctionBBWhite16() {
	configs[ 1]-=    6;
	configs[ 2]-=   18;
	configs[ 8]-=    6;
	configs[10]-=   18;
	configs[20]-=    6;
	configs[21]-=   18;
	configs[32]-=   25;
	bb.mover.u4s[0]^=0x40200;
}

void FlipFunctionBBBlack16() {
	configs[ 1]+=    6;
	configs[ 2]+=   18;
	configs[ 8]+=    6;
	configs[10]+=   18;
	configs[20]+=    6;
	configs[21]+=   18;
	configs[32]+=   25;
	bb.mover.u4s[0]^=0x40200;
}

void FlipFunctionBBWhite17() {
	configs[ 1]-=    6;
	configs[ 2]-=   18;
	configs[ 3]-=   54;
	configs[ 8]-=    6;
	configs[10]-=   18;
	configs[12]-=   54;
	configs[20]-=    6;
	configs[21]-=   18;
	configs[22]-=   54;
	configs[32]-=   79;
	bb.mover.u4s[0]^=0x8040200;
}

void FlipFunctionBBBlack17() {
	configs[ 1]+=    6;
	configs[ 2]+=   18;
	configs[ 3]+=   54;
	configs[ 8]+=    6;
	configs[10]+=   18;
	configs[12]+=   54;
	configs[20]+=    6;
	configs[21]+=   18;
	configs[22]+=   54;
	configs[32]+=   79;
	bb.mover.u4s[0]^=0x8040200;
}

void FlipFunctionBBWhite18() {
	configs[ 1]-=    6;
	configs[ 2]-=   18;
	configs[ 3]-=   54;
	configs[ 4]-=  162;
	configs[ 8]-=    6;
	configs[10]-=   18;
	configs[12]-=   54;
	configs[14]-=   54;
	configs[20]-=    6;
	configs[21]-=   18;
	configs[22]-=   54;
	configs[23]-=  162;
	configs[32]-=  241;
	bb.mover.u4s[0]^=0x8040200;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBBlack18() {
	configs[ 1]+=    6;
	configs[ 2]+=   18;
	configs[ 3]+=   54;
	configs[ 4]+=  162;
	configs[ 8]+=    6;
	configs[10]+=   18;
	configs[12]+=   54;
	configs[14]+=   54;
	configs[20]+=    6;
	configs[21]+=   18;
	configs[22]+=   54;
	configs[23]+=  162;
	configs[32]+=  241;
	bb.mover.u4s[0]^=0x8040200;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBWhite19() {
	configs[ 1]-=    6;
	configs[ 2]-=   18;
	configs[ 3]-=   54;
	configs[ 4]-=  162;
	configs[ 5]-=  486;
	configs[ 8]-=    6;
	configs[10]-=   18;
	configs[12]-=   54;
	configs[14]-=   54;
	configs[16]-=   18;
	configs[20]-=    6;
	configs[21]-=   18;
	configs[22]-=   54;
	configs[23]-=  162;
	configs[24]-=  486;
	configs[32]-=  727;
	bb.mover.u4s[0]^=0x8040200;
	bb.mover.u4s[1]^=0x2010;
}

void FlipFunctionBBBlack19() {
	configs[ 1]+=    6;
	configs[ 2]+=   18;
	configs[ 3]+=   54;
	configs[ 4]+=  162;
	configs[ 5]+=  486;
	configs[ 8]+=    6;
	configs[10]+=   18;
	configs[12]+=   54;
	configs[14]+=   54;
	configs[16]+=   18;
	configs[20]+=    6;
	configs[21]+=   18;
	configs[22]+=   54;
	configs[23]+=  162;
	configs[24]+=  486;
	configs[32]+=  727;
	bb.mover.u4s[0]^=0x8040200;
	bb.mover.u4s[1]^=0x2010;
}

void FlipFunctionBBWhite20() {
	configs[ 1]-=    6;
	configs[ 2]-=   18;
	configs[ 3]-=   54;
	configs[ 4]-=  162;
	configs[ 5]-=  486;
	configs[ 6]-= 1458;
	configs[ 8]-=    6;
	configs[10]-=   18;
	configs[12]-=   54;
	configs[14]-=   54;
	configs[16]-=   18;
	configs[18]-=    6;
	configs[20]-=    6;
	configs[21]-=   18;
	configs[22]-=   54;
	configs[23]-=  162;
	configs[24]-=  486;
	configs[25]-= 1458;
	configs[32]-= 2185;
	bb.mover.u4s[0]^=0x8040200;
	bb.mover.u4s[1]^=0x402010;
}

void FlipFunctionBBBlack20() {
	configs[ 1]+=    6;
	configs[ 2]+=   18;
	configs[ 3]+=   54;
	configs[ 4]+=  162;
	configs[ 5]+=  486;
	configs[ 6]+= 1458;
	configs[ 8]+=    6;
	configs[10]+=   18;
	configs[12]+=   54;
	configs[14]+=   54;
	configs[16]+=   18;
	configs[18]+=    6;
	configs[20]+=    6;
	configs[21]+=   18;
	configs[22]+=   54;
	configs[23]+=  162;
	configs[24]+=  486;
	configs[25]+= 1458;
	configs[32]+= 2185;
	bb.mover.u4s[0]^=0x8040200;
	bb.mover.u4s[1]^=0x402010;
}

void FlipFunctionBBWhite21() {
	configs[ 0]-=    3;
	bb.mover.u4s[0]^=0x2;
	bb.empty.u4s[0]^=0x2;
}

void FlipFunctionBBBlack21() {
	configs[ 0]+=    3;
	bb.mover.u4s[0]^=0x2;
	bb.empty.u4s[0]^=0x2;
}

void FlipFunctionBBWhite22() {
	configs[ 0]-=   21;
	configs[ 8]-=    2;
	configs[21]-=    2;
	configs[30]-=    2;
	bb.mover.u4s[0]^=0x6;
	bb.empty.u4s[0]^=0x2;
}

void FlipFunctionBBBlack22() {
	configs[ 0]+=   21;
	configs[ 8]+=    2;
	configs[21]+=    2;
	configs[30]+=    2;
	bb.mover.u4s[0]^=0x6;
	bb.empty.u4s[0]^=0x2;
}

void FlipFunctionBBWhite23() {
	configs[ 0]-=   75;
	configs[ 8]-=    2;
	configs[ 9]-=    2;
	configs[21]-=    2;
	configs[22]-=    2;
	configs[29]-=    2;
	configs[30]-=    2;
	bb.mover.u4s[0]^=0xE;
	bb.empty.u4s[0]^=0x2;
}

void FlipFunctionBBBlack23() {
	configs[ 0]+=   75;
	configs[ 8]+=    2;
	configs[ 9]+=    2;
	configs[21]+=    2;
	configs[22]+=    2;
	configs[29]+=    2;
	configs[30]+=    2;
	bb.mover.u4s[0]^=0xE;
	bb.empty.u4s[0]^=0x2;
}

void FlipFunctionBBWhite24() {
	configs[ 0]-=  237;
	configs[ 8]-=    2;
	configs[ 9]-=    2;
	configs[10]-=    2;
	configs[21]-=    2;
	configs[22]-=    2;
	configs[23]-=    2;
	configs[28]-=    2;
	configs[29]-=    2;
	configs[30]-=    2;
	bb.mover.u4s[0]^=0x1E;
	bb.empty.u4s[0]^=0x2;
}

void FlipFunctionBBBlack24() {
	configs[ 0]+=  237;
	configs[ 8]+=    2;
	configs[ 9]+=    2;
	configs[10]+=    2;
	configs[21]+=    2;
	configs[22]+=    2;
	configs[23]+=    2;
	configs[28]+=    2;
	configs[29]+=    2;
	configs[30]+=    2;
	bb.mover.u4s[0]^=0x1E;
	bb.empty.u4s[0]^=0x2;
}

void FlipFunctionBBWhite25() {
	configs[ 0]-=  723;
	configs[ 8]-=    2;
	configs[ 9]-=    2;
	configs[10]-=    2;
	configs[11]-=    2;
	configs[21]-=    2;
	configs[22]-=    2;
	configs[23]-=    2;
	configs[24]-=    2;
	configs[27]-=    2;
	configs[28]-=    2;
	configs[29]-=    2;
	configs[30]-=    2;
	bb.mover.u4s[0]^=0x3E;
	bb.empty.u4s[0]^=0x2;
}

void FlipFunctionBBBlack25() {
	configs[ 0]+=  723;
	configs[ 8]+=    2;
	configs[ 9]+=    2;
	configs[10]+=    2;
	configs[11]+=    2;
	configs[21]+=    2;
	configs[22]+=    2;
	configs[23]+=    2;
	configs[24]+=    2;
	configs[27]+=    2;
	configs[28]+=    2;
	configs[29]+=    2;
	configs[30]+=    2;
	bb.mover.u4s[0]^=0x3E;
	bb.empty.u4s[0]^=0x2;
}

void FlipFunctionBBWhite26() {
	configs[ 0]-= 2181;
	configs[ 8]-=    2;
	configs[ 9]-=    2;
	configs[10]-=    2;
	configs[11]-=    2;
	configs[12]-=    2;
	configs[21]-=    2;
	configs[22]-=    2;
	configs[23]-=    2;
	configs[24]-=    2;
	configs[25]-=    2;
	configs[27]-=    2;
	configs[28]-=    2;
	configs[29]-=    2;
	configs[30]-=    2;
	bb.mover.u4s[0]^=0x7E;
	bb.empty.u4s[0]^=0x2;
}

void FlipFunctionBBBlack26() {
	configs[ 0]+= 2181;
	configs[ 8]+=    2;
	configs[ 9]+=    2;
	configs[10]+=    2;
	configs[11]+=    2;
	configs[12]+=    2;
	configs[21]+=    2;
	configs[22]+=    2;
	configs[23]+=    2;
	configs[24]+=    2;
	configs[25]+=    2;
	configs[27]+=    2;
	configs[28]+=    2;
	configs[29]+=    2;
	configs[30]+=    2;
	bb.mover.u4s[0]^=0x7E;
	bb.empty.u4s[0]^=0x2;
}

void FlipFunctionBBWhite27() {
	configs[20]-=    1;
}

void FlipFunctionBBBlack27() {
	configs[20]+=    1;
}

void FlipFunctionBBWhite28() {
	configs[ 1]-=    6;
	configs[ 8]-=    6;
	configs[20]-=    7;
	configs[32]-=    6;
	bb.mover.u4s[0]^=0x200;
}

void FlipFunctionBBBlack28() {
	configs[ 1]+=    6;
	configs[ 8]+=    6;
	configs[20]+=    7;
	configs[32]+=    6;
	bb.mover.u4s[0]^=0x200;
}

void FlipFunctionBBWhite29() {
	configs[ 1]-=    6;
	configs[ 2]-=    6;
	configs[ 8]-=    6;
	configs[ 9]-=   18;
	configs[20]-=   25;
	configs[32]-=    6;
	configs[33]-=    6;
	bb.mover.u4s[0]^=0x20200;
}

void FlipFunctionBBBlack29() {
	configs[ 1]+=    6;
	configs[ 2]+=    6;
	configs[ 8]+=    6;
	configs[ 9]+=   18;
	configs[20]+=   25;
	configs[32]+=    6;
	configs[33]+=    6;
	bb.mover.u4s[0]^=0x20200;
}

void FlipFunctionBBWhite30() {
	configs[ 1]-=    6;
	configs[ 2]-=    6;
	configs[ 3]-=    6;
	configs[ 8]-=    6;
	configs[ 9]-=   18;
	configs[10]-=   54;
	configs[20]-=   79;
	configs[32]-=    6;
	configs[33]-=    6;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x2020200;
}

void FlipFunctionBBBlack30() {
	configs[ 1]+=    6;
	configs[ 2]+=    6;
	configs[ 3]+=    6;
	configs[ 8]+=    6;
	configs[ 9]+=   18;
	configs[10]+=   54;
	configs[20]+=   79;
	configs[32]+=    6;
	configs[33]+=    6;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x2020200;
}

void FlipFunctionBBWhite31() {
	configs[ 1]-=    6;
	configs[ 2]-=    6;
	configs[ 3]-=    6;
	configs[ 4]-=    6;
	configs[ 8]-=    6;
	configs[ 9]-=   18;
	configs[10]-=   54;
	configs[11]-=  162;
	configs[20]-=  241;
	configs[32]-=    6;
	configs[33]-=    6;
	configs[34]-=    6;
	configs[35]-=    6;
	bb.mover.u4s[0]^=0x2020200;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBBlack31() {
	configs[ 1]+=    6;
	configs[ 2]+=    6;
	configs[ 3]+=    6;
	configs[ 4]+=    6;
	configs[ 8]+=    6;
	configs[ 9]+=   18;
	configs[10]+=   54;
	configs[11]+=  162;
	configs[20]+=  241;
	configs[32]+=    6;
	configs[33]+=    6;
	configs[34]+=    6;
	configs[35]+=    6;
	bb.mover.u4s[0]^=0x2020200;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBWhite32() {
	configs[ 1]-=    6;
	configs[ 2]-=    6;
	configs[ 3]-=    6;
	configs[ 4]-=    6;
	configs[ 5]-=    6;
	configs[ 8]-=    6;
	configs[ 9]-=   18;
	configs[10]-=   54;
	configs[11]-=  162;
	configs[12]-=  486;
	configs[20]-=  727;
	configs[32]-=    6;
	configs[33]-=    6;
	configs[34]-=    6;
	configs[35]-=    6;
	configs[36]-=    6;
	bb.mover.u4s[0]^=0x2020200;
	bb.mover.u4s[1]^=0x202;
}

void FlipFunctionBBBlack32() {
	configs[ 1]+=    6;
	configs[ 2]+=    6;
	configs[ 3]+=    6;
	configs[ 4]+=    6;
	configs[ 5]+=    6;
	configs[ 8]+=    6;
	configs[ 9]+=   18;
	configs[10]+=   54;
	configs[11]+=  162;
	configs[12]+=  486;
	configs[20]+=  727;
	configs[32]+=    6;
	configs[33]+=    6;
	configs[34]+=    6;
	configs[35]+=    6;
	configs[36]+=    6;
	bb.mover.u4s[0]^=0x2020200;
	bb.mover.u4s[1]^=0x202;
}

void FlipFunctionBBWhite33() {
	configs[ 1]-=    6;
	configs[ 2]-=    6;
	configs[ 3]-=    6;
	configs[ 4]-=    6;
	configs[ 5]-=    6;
	configs[ 6]-=    6;
	configs[ 8]-=    6;
	configs[ 9]-=   18;
	configs[10]-=   54;
	configs[11]-=  162;
	configs[12]-=  486;
	configs[13]-= 1458;
	configs[20]-= 2185;
	configs[32]-=    6;
	configs[33]-=    6;
	configs[34]-=    6;
	configs[35]-=    6;
	configs[36]-=    6;
	configs[37]-=    6;
	bb.mover.u4s[0]^=0x2020200;
	bb.mover.u4s[1]^=0x20202;
}

void FlipFunctionBBBlack33() {
	configs[ 1]+=    6;
	configs[ 2]+=    6;
	configs[ 3]+=    6;
	configs[ 4]+=    6;
	configs[ 5]+=    6;
	configs[ 6]+=    6;
	configs[ 8]+=    6;
	configs[ 9]+=   18;
	configs[10]+=   54;
	configs[11]+=  162;
	configs[12]+=  486;
	configs[13]+= 1458;
	configs[20]+= 2185;
	configs[32]+=    6;
	configs[33]+=    6;
	configs[34]+=    6;
	configs[35]+=    6;
	configs[36]+=    6;
	configs[37]+=    6;
	bb.mover.u4s[0]^=0x2020200;
	bb.mover.u4s[1]^=0x20202;
}

void FlipFunctionBBWhite34() {
	configs[31]-=    1;
}

void FlipFunctionBBBlack34() {
	configs[31]+=    1;
}

void FlipFunctionBBWhite35() {
	configs[ 1]-=   18;
	configs[ 9]-=    6;
	configs[21]-=    6;
	configs[31]-=    7;
	bb.mover.u4s[0]^=0x400;
}

void FlipFunctionBBBlack35() {
	configs[ 1]+=   18;
	configs[ 9]+=    6;
	configs[21]+=    6;
	configs[31]+=    7;
	bb.mover.u4s[0]^=0x400;
}

void FlipFunctionBBWhite36() {
	configs[ 1]-=   18;
	configs[ 2]-=   54;
	configs[ 9]-=    6;
	configs[11]-=   18;
	configs[21]-=    6;
	configs[22]-=   18;
	configs[31]-=   25;
	bb.mover.u4s[0]^=0x80400;
}

void FlipFunctionBBBlack36() {
	configs[ 1]+=   18;
	configs[ 2]+=   54;
	configs[ 9]+=    6;
	configs[11]+=   18;
	configs[21]+=    6;
	configs[22]+=   18;
	configs[31]+=   25;
	bb.mover.u4s[0]^=0x80400;
}

void FlipFunctionBBWhite37() {
	configs[ 1]-=   18;
	configs[ 2]-=   54;
	configs[ 3]-=  162;
	configs[ 9]-=    6;
	configs[11]-=   18;
	configs[13]-=   54;
	configs[21]-=    6;
	configs[22]-=   18;
	configs[23]-=   54;
	configs[31]-=   79;
	bb.mover.u4s[0]^=0x10080400;
}

void FlipFunctionBBBlack37() {
	configs[ 1]+=   18;
	configs[ 2]+=   54;
	configs[ 3]+=  162;
	configs[ 9]+=    6;
	configs[11]+=   18;
	configs[13]+=   54;
	configs[21]+=    6;
	configs[22]+=   18;
	configs[23]+=   54;
	configs[31]+=   79;
	bb.mover.u4s[0]^=0x10080400;
}

void FlipFunctionBBWhite38() {
	configs[ 1]-=   18;
	configs[ 2]-=   54;
	configs[ 3]-=  162;
	configs[ 4]-=  486;
	configs[ 9]-=    6;
	configs[11]-=   18;
	configs[13]-=   54;
	configs[15]-=   18;
	configs[21]-=    6;
	configs[22]-=   18;
	configs[23]-=   54;
	configs[24]-=  162;
	configs[31]-=  241;
	bb.mover.u4s[0]^=0x10080400;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBBlack38() {
	configs[ 1]+=   18;
	configs[ 2]+=   54;
	configs[ 3]+=  162;
	configs[ 4]+=  486;
	configs[ 9]+=    6;
	configs[11]+=   18;
	configs[13]+=   54;
	configs[15]+=   18;
	configs[21]+=    6;
	configs[22]+=   18;
	configs[23]+=   54;
	configs[24]+=  162;
	configs[31]+=  241;
	bb.mover.u4s[0]^=0x10080400;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBWhite39() {
	configs[ 1]-=   18;
	configs[ 2]-=   54;
	configs[ 3]-=  162;
	configs[ 4]-=  486;
	configs[ 5]-= 1458;
	configs[ 9]-=    6;
	configs[11]-=   18;
	configs[13]-=   54;
	configs[15]-=   18;
	configs[17]-=    6;
	configs[21]-=    6;
	configs[22]-=   18;
	configs[23]-=   54;
	configs[24]-=  162;
	configs[25]-=  486;
	configs[31]-=  727;
	bb.mover.u4s[0]^=0x10080400;
	bb.mover.u4s[1]^=0x4020;
}

void FlipFunctionBBBlack39() {
	configs[ 1]+=   18;
	configs[ 2]+=   54;
	configs[ 3]+=  162;
	configs[ 4]+=  486;
	configs[ 5]+= 1458;
	configs[ 9]+=    6;
	configs[11]+=   18;
	configs[13]+=   54;
	configs[15]+=   18;
	configs[17]+=    6;
	configs[21]+=    6;
	configs[22]+=   18;
	configs[23]+=   54;
	configs[24]+=  162;
	configs[25]+=  486;
	configs[31]+=  727;
	bb.mover.u4s[0]^=0x10080400;
	bb.mover.u4s[1]^=0x4020;
}

void FlipFunctionBBWhite40() {
	configs[ 0]-=    9;
	bb.mover.u4s[0]^=0x4;
	bb.empty.u4s[0]^=0x4;
}

void FlipFunctionBBBlack40() {
	configs[ 0]+=    9;
	bb.mover.u4s[0]^=0x4;
	bb.empty.u4s[0]^=0x4;
}

void FlipFunctionBBWhite41() {
	configs[ 0]-=   63;
	configs[ 9]-=    2;
	configs[22]-=    2;
	configs[29]-=    2;
	bb.mover.u4s[0]^=0xC;
	bb.empty.u4s[0]^=0x4;
}

void FlipFunctionBBBlack41() {
	configs[ 0]+=   63;
	configs[ 9]+=    2;
	configs[22]+=    2;
	configs[29]+=    2;
	bb.mover.u4s[0]^=0xC;
	bb.empty.u4s[0]^=0x4;
}

void FlipFunctionBBWhite42() {
	configs[ 0]-=  225;
	configs[ 9]-=    2;
	configs[10]-=    2;
	configs[22]-=    2;
	configs[23]-=    2;
	configs[28]-=    2;
	configs[29]-=    2;
	bb.mover.u4s[0]^=0x1C;
	bb.empty.u4s[0]^=0x4;
}

void FlipFunctionBBBlack42() {
	configs[ 0]+=  225;
	configs[ 9]+=    2;
	configs[10]+=    2;
	configs[22]+=    2;
	configs[23]+=    2;
	configs[28]+=    2;
	configs[29]+=    2;
	bb.mover.u4s[0]^=0x1C;
	bb.empty.u4s[0]^=0x4;
}

void FlipFunctionBBWhite43() {
	configs[ 0]-=  711;
	configs[ 9]-=    2;
	configs[10]-=    2;
	configs[11]-=    2;
	configs[22]-=    2;
	configs[23]-=    2;
	configs[24]-=    2;
	configs[27]-=    2;
	configs[28]-=    2;
	configs[29]-=    2;
	bb.mover.u4s[0]^=0x3C;
	bb.empty.u4s[0]^=0x4;
}

void FlipFunctionBBBlack43() {
	configs[ 0]+=  711;
	configs[ 9]+=    2;
	configs[10]+=    2;
	configs[11]+=    2;
	configs[22]+=    2;
	configs[23]+=    2;
	configs[24]+=    2;
	configs[27]+=    2;
	configs[28]+=    2;
	configs[29]+=    2;
	bb.mover.u4s[0]^=0x3C;
	bb.empty.u4s[0]^=0x4;
}

void FlipFunctionBBWhite44() {
	configs[ 0]-= 2169;
	configs[ 9]-=    2;
	configs[10]-=    2;
	configs[11]-=    2;
	configs[12]-=    2;
	configs[22]-=    2;
	configs[23]-=    2;
	configs[24]-=    2;
	configs[25]-=    2;
	configs[27]-=    2;
	configs[28]-=    2;
	configs[29]-=    2;
	bb.mover.u4s[0]^=0x7C;
	bb.empty.u4s[0]^=0x4;
}

void FlipFunctionBBBlack44() {
	configs[ 0]+= 2169;
	configs[ 9]+=    2;
	configs[10]+=    2;
	configs[11]+=    2;
	configs[12]+=    2;
	configs[22]+=    2;
	configs[23]+=    2;
	configs[24]+=    2;
	configs[25]+=    2;
	configs[27]+=    2;
	configs[28]+=    2;
	configs[29]+=    2;
	bb.mover.u4s[0]^=0x7C;
	bb.empty.u4s[0]^=0x4;
}

void FlipFunctionBBWhite45() {
	configs[ 0]-=   15;
	configs[20]-=    2;
	configs[31]-=    2;
	bb.mover.u4s[0]^=0x6;
	bb.empty.u4s[0]^=0x4;
}

void FlipFunctionBBBlack45() {
	configs[ 0]+=   15;
	configs[20]+=    2;
	configs[31]+=    2;
	bb.mover.u4s[0]^=0x6;
	bb.empty.u4s[0]^=0x4;
}

void FlipFunctionBBWhite46() {
	configs[ 0]-=   69;
	configs[ 9]-=    2;
	configs[20]-=    2;
	configs[22]-=    2;
	configs[29]-=    2;
	configs[31]-=    2;
	bb.mover.u4s[0]^=0xE;
	bb.empty.u4s[0]^=0x4;
}

void FlipFunctionBBBlack46() {
	configs[ 0]+=   69;
	configs[ 9]+=    2;
	configs[20]+=    2;
	configs[22]+=    2;
	configs[29]+=    2;
	configs[31]+=    2;
	bb.mover.u4s[0]^=0xE;
	bb.empty.u4s[0]^=0x4;
}

void FlipFunctionBBWhite47() {
	configs[ 0]-=  231;
	configs[ 9]-=    2;
	configs[10]-=    2;
	configs[20]-=    2;
	configs[22]-=    2;
	configs[23]-=    2;
	configs[28]-=    2;
	configs[29]-=    2;
	configs[31]-=    2;
	bb.mover.u4s[0]^=0x1E;
	bb.empty.u4s[0]^=0x4;
}

void FlipFunctionBBBlack47() {
	configs[ 0]+=  231;
	configs[ 9]+=    2;
	configs[10]+=    2;
	configs[20]+=    2;
	configs[22]+=    2;
	configs[23]+=    2;
	configs[28]+=    2;
	configs[29]+=    2;
	configs[31]+=    2;
	bb.mover.u4s[0]^=0x1E;
	bb.empty.u4s[0]^=0x4;
}

void FlipFunctionBBWhite48() {
	configs[ 0]-=  717;
	configs[ 9]-=    2;
	configs[10]-=    2;
	configs[11]-=    2;
	configs[20]-=    2;
	configs[22]-=    2;
	configs[23]-=    2;
	configs[24]-=    2;
	configs[27]-=    2;
	configs[28]-=    2;
	configs[29]-=    2;
	configs[31]-=    2;
	bb.mover.u4s[0]^=0x3E;
	bb.empty.u4s[0]^=0x4;
}

void FlipFunctionBBBlack48() {
	configs[ 0]+=  717;
	configs[ 9]+=    2;
	configs[10]+=    2;
	configs[11]+=    2;
	configs[20]+=    2;
	configs[22]+=    2;
	configs[23]+=    2;
	configs[24]+=    2;
	configs[27]+=    2;
	configs[28]+=    2;
	configs[29]+=    2;
	configs[31]+=    2;
	bb.mover.u4s[0]^=0x3E;
	bb.empty.u4s[0]^=0x4;
}

void FlipFunctionBBWhite49() {
	configs[ 0]-= 2175;
	configs[ 9]-=    2;
	configs[10]-=    2;
	configs[11]-=    2;
	configs[12]-=    2;
	configs[20]-=    2;
	configs[22]-=    2;
	configs[23]-=    2;
	configs[24]-=    2;
	configs[25]-=    2;
	configs[27]-=    2;
	configs[28]-=    2;
	configs[29]-=    2;
	configs[31]-=    2;
	bb.mover.u4s[0]^=0x7E;
	bb.empty.u4s[0]^=0x4;
}

void FlipFunctionBBBlack49() {
	configs[ 0]+= 2175;
	configs[ 9]+=    2;
	configs[10]+=    2;
	configs[11]+=    2;
	configs[12]+=    2;
	configs[20]+=    2;
	configs[22]+=    2;
	configs[23]+=    2;
	configs[24]+=    2;
	configs[25]+=    2;
	configs[27]+=    2;
	configs[28]+=    2;
	configs[29]+=    2;
	configs[31]+=    2;
	bb.mover.u4s[0]^=0x7E;
	bb.empty.u4s[0]^=0x4;
}

void FlipFunctionBBWhite50() {
	configs[ 8]-=    1;
}

void FlipFunctionBBBlack50() {
	configs[ 8]+=    1;
}

void FlipFunctionBBWhite51() {
	configs[ 1]-=    6;
	configs[ 8]-=    7;
	configs[20]-=    6;
	configs[32]-=    6;
	bb.mover.u4s[0]^=0x200;
}

void FlipFunctionBBBlack51() {
	configs[ 1]+=    6;
	configs[ 8]+=    7;
	configs[20]+=    6;
	configs[32]+=    6;
	bb.mover.u4s[0]^=0x200;
}

void FlipFunctionBBWhite52() {
	configs[21]-=    1;
}

void FlipFunctionBBBlack52() {
	configs[21]+=    1;
}

void FlipFunctionBBWhite53() {
	configs[ 1]-=   18;
	configs[ 9]-=    6;
	configs[21]-=    7;
	configs[31]-=    6;
	bb.mover.u4s[0]^=0x400;
}

void FlipFunctionBBBlack53() {
	configs[ 1]+=   18;
	configs[ 9]+=    6;
	configs[21]+=    7;
	configs[31]+=    6;
	bb.mover.u4s[0]^=0x400;
}

void FlipFunctionBBWhite54() {
	configs[ 1]-=   18;
	configs[ 2]-=   18;
	configs[ 9]-=    6;
	configs[10]-=   18;
	configs[21]-=   25;
	configs[31]-=    6;
	configs[32]-=   18;
	bb.mover.u4s[0]^=0x40400;
}

void FlipFunctionBBBlack54() {
	configs[ 1]+=   18;
	configs[ 2]+=   18;
	configs[ 9]+=    6;
	configs[10]+=   18;
	configs[21]+=   25;
	configs[31]+=    6;
	configs[32]+=   18;
	bb.mover.u4s[0]^=0x40400;
}

void FlipFunctionBBWhite55() {
	configs[ 1]-=   18;
	configs[ 2]-=   18;
	configs[ 3]-=   18;
	configs[ 9]-=    6;
	configs[10]-=   18;
	configs[11]-=   54;
	configs[21]-=   79;
	configs[31]-=    6;
	configs[32]-=   18;
	configs[33]-=   18;
	bb.mover.u4s[0]^=0x4040400;
}

void FlipFunctionBBBlack55() {
	configs[ 1]+=   18;
	configs[ 2]+=   18;
	configs[ 3]+=   18;
	configs[ 9]+=    6;
	configs[10]+=   18;
	configs[11]+=   54;
	configs[21]+=   79;
	configs[31]+=    6;
	configs[32]+=   18;
	configs[33]+=   18;
	bb.mover.u4s[0]^=0x4040400;
}

void FlipFunctionBBWhite56() {
	configs[ 1]-=   18;
	configs[ 2]-=   18;
	configs[ 3]-=   18;
	configs[ 4]-=   18;
	configs[ 9]-=    6;
	configs[10]-=   18;
	configs[11]-=   54;
	configs[12]-=  162;
	configs[21]-=  241;
	configs[31]-=    6;
	configs[32]-=   18;
	configs[33]-=   18;
	configs[34]-=   18;
	bb.mover.u4s[0]^=0x4040400;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBBlack56() {
	configs[ 1]+=   18;
	configs[ 2]+=   18;
	configs[ 3]+=   18;
	configs[ 4]+=   18;
	configs[ 9]+=    6;
	configs[10]+=   18;
	configs[11]+=   54;
	configs[12]+=  162;
	configs[21]+=  241;
	configs[31]+=    6;
	configs[32]+=   18;
	configs[33]+=   18;
	configs[34]+=   18;
	bb.mover.u4s[0]^=0x4040400;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBWhite57() {
	configs[ 1]-=   18;
	configs[ 2]-=   18;
	configs[ 3]-=   18;
	configs[ 4]-=   18;
	configs[ 5]-=   18;
	configs[ 9]-=    6;
	configs[10]-=   18;
	configs[11]-=   54;
	configs[12]-=  162;
	configs[13]-=  486;
	configs[21]-=  727;
	configs[31]-=    6;
	configs[32]-=   18;
	configs[33]-=   18;
	configs[34]-=   18;
	configs[35]-=   18;
	bb.mover.u4s[0]^=0x4040400;
	bb.mover.u4s[1]^=0x404;
}

void FlipFunctionBBBlack57() {
	configs[ 1]+=   18;
	configs[ 2]+=   18;
	configs[ 3]+=   18;
	configs[ 4]+=   18;
	configs[ 5]+=   18;
	configs[ 9]+=    6;
	configs[10]+=   18;
	configs[11]+=   54;
	configs[12]+=  162;
	configs[13]+=  486;
	configs[21]+=  727;
	configs[31]+=    6;
	configs[32]+=   18;
	configs[33]+=   18;
	configs[34]+=   18;
	configs[35]+=   18;
	bb.mover.u4s[0]^=0x4040400;
	bb.mover.u4s[1]^=0x404;
}

void FlipFunctionBBWhite58() {
	configs[ 1]-=   18;
	configs[ 2]-=   18;
	configs[ 3]-=   18;
	configs[ 4]-=   18;
	configs[ 5]-=   18;
	configs[ 6]-=   18;
	configs[ 9]-=    6;
	configs[10]-=   18;
	configs[11]-=   54;
	configs[12]-=  162;
	configs[13]-=  486;
	configs[14]-=  486;
	configs[21]-= 2185;
	configs[31]-=    6;
	configs[32]-=   18;
	configs[33]-=   18;
	configs[34]-=   18;
	configs[35]-=   18;
	configs[36]-=   18;
	bb.mover.u4s[0]^=0x4040400;
	bb.mover.u4s[1]^=0x40404;
}

void FlipFunctionBBBlack58() {
	configs[ 1]+=   18;
	configs[ 2]+=   18;
	configs[ 3]+=   18;
	configs[ 4]+=   18;
	configs[ 5]+=   18;
	configs[ 6]+=   18;
	configs[ 9]+=    6;
	configs[10]+=   18;
	configs[11]+=   54;
	configs[12]+=  162;
	configs[13]+=  486;
	configs[14]+=  486;
	configs[21]+= 2185;
	configs[31]+=    6;
	configs[32]+=   18;
	configs[33]+=   18;
	configs[34]+=   18;
	configs[35]+=   18;
	configs[36]+=   18;
	bb.mover.u4s[0]^=0x4040400;
	bb.mover.u4s[1]^=0x40404;
}

void FlipFunctionBBWhite59() {
	configs[30]-=    1;
}

void FlipFunctionBBBlack59() {
	configs[30]+=    1;
}

void FlipFunctionBBWhite60() {
	configs[ 1]-=   54;
	configs[10]-=    6;
	configs[22]-=    6;
	configs[30]-=    7;
	bb.mover.u4s[0]^=0x800;
}

void FlipFunctionBBBlack60() {
	configs[ 1]+=   54;
	configs[10]+=    6;
	configs[22]+=    6;
	configs[30]+=    7;
	bb.mover.u4s[0]^=0x800;
}

void FlipFunctionBBWhite61() {
	configs[ 1]-=   54;
	configs[ 2]-=  162;
	configs[10]-=    6;
	configs[12]-=   18;
	configs[22]-=    6;
	configs[23]-=   18;
	configs[30]-=   25;
	bb.mover.u4s[0]^=0x100800;
}

void FlipFunctionBBBlack61() {
	configs[ 1]+=   54;
	configs[ 2]+=  162;
	configs[10]+=    6;
	configs[12]+=   18;
	configs[22]+=    6;
	configs[23]+=   18;
	configs[30]+=   25;
	bb.mover.u4s[0]^=0x100800;
}

void FlipFunctionBBWhite62() {
	configs[ 1]-=   54;
	configs[ 2]-=  162;
	configs[ 3]-=  486;
	configs[10]-=    6;
	configs[12]-=   18;
	configs[14]-=   18;
	configs[22]-=    6;
	configs[23]-=   18;
	configs[24]-=   54;
	configs[30]-=   79;
	bb.mover.u4s[0]^=0x20100800;
}

void FlipFunctionBBBlack62() {
	configs[ 1]+=   54;
	configs[ 2]+=  162;
	configs[ 3]+=  486;
	configs[10]+=    6;
	configs[12]+=   18;
	configs[14]+=   18;
	configs[22]+=    6;
	configs[23]+=   18;
	configs[24]+=   54;
	configs[30]+=   79;
	bb.mover.u4s[0]^=0x20100800;
}

void FlipFunctionBBWhite63() {
	configs[ 1]-=   54;
	configs[ 2]-=  162;
	configs[ 3]-=  486;
	configs[ 4]-= 1458;
	configs[10]-=    6;
	configs[12]-=   18;
	configs[14]-=   18;
	configs[16]-=    6;
	configs[22]-=    6;
	configs[23]-=   18;
	configs[24]-=   54;
	configs[25]-=  162;
	configs[30]-=  241;
	bb.mover.u4s[0]^=0x20100800;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBBlack63() {
	configs[ 1]+=   54;
	configs[ 2]+=  162;
	configs[ 3]+=  486;
	configs[ 4]+= 1458;
	configs[10]+=    6;
	configs[12]+=   18;
	configs[14]+=   18;
	configs[16]+=    6;
	configs[22]+=    6;
	configs[23]+=   18;
	configs[24]+=   54;
	configs[25]+=  162;
	configs[30]+=  241;
	bb.mover.u4s[0]^=0x20100800;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBWhite64() {
	configs[ 0]-=   27;
	bb.mover.u4s[0]^=0x8;
	bb.empty.u4s[0]^=0x8;
}

void FlipFunctionBBBlack64() {
	configs[ 0]+=   27;
	bb.mover.u4s[0]^=0x8;
	bb.empty.u4s[0]^=0x8;
}

void FlipFunctionBBWhite65() {
	configs[ 0]-=  189;
	configs[10]-=    2;
	configs[23]-=    2;
	configs[28]-=    2;
	bb.mover.u4s[0]^=0x18;
	bb.empty.u4s[0]^=0x8;
}

void FlipFunctionBBBlack65() {
	configs[ 0]+=  189;
	configs[10]+=    2;
	configs[23]+=    2;
	configs[28]+=    2;
	bb.mover.u4s[0]^=0x18;
	bb.empty.u4s[0]^=0x8;
}

void FlipFunctionBBWhite66() {
	configs[ 0]-=  675;
	configs[10]-=    2;
	configs[11]-=    2;
	configs[23]-=    2;
	configs[24]-=    2;
	configs[27]-=    2;
	configs[28]-=    2;
	bb.mover.u4s[0]^=0x38;
	bb.empty.u4s[0]^=0x8;
}

void FlipFunctionBBBlack66() {
	configs[ 0]+=  675;
	configs[10]+=    2;
	configs[11]+=    2;
	configs[23]+=    2;
	configs[24]+=    2;
	configs[27]+=    2;
	configs[28]+=    2;
	bb.mover.u4s[0]^=0x38;
	bb.empty.u4s[0]^=0x8;
}

void FlipFunctionBBWhite67() {
	configs[ 0]-= 2133;
	configs[10]-=    2;
	configs[11]-=    2;
	configs[12]-=    2;
	configs[23]-=    2;
	configs[24]-=    2;
	configs[25]-=    2;
	configs[27]-=    2;
	configs[28]-=    2;
	bb.mover.u4s[0]^=0x78;
	bb.empty.u4s[0]^=0x8;
}

void FlipFunctionBBBlack67() {
	configs[ 0]+= 2133;
	configs[10]+=    2;
	configs[11]+=    2;
	configs[12]+=    2;
	configs[23]+=    2;
	configs[24]+=    2;
	configs[25]+=    2;
	configs[27]+=    2;
	configs[28]+=    2;
	bb.mover.u4s[0]^=0x78;
	bb.empty.u4s[0]^=0x8;
}

void FlipFunctionBBWhite68() {
	configs[ 0]-=   45;
	configs[ 8]-=    2;
	configs[21]-=    2;
	configs[30]-=    2;
	bb.mover.u4s[0]^=0xC;
	bb.empty.u4s[0]^=0x8;
}

void FlipFunctionBBBlack68() {
	configs[ 0]+=   45;
	configs[ 8]+=    2;
	configs[21]+=    2;
	configs[30]+=    2;
	bb.mover.u4s[0]^=0xC;
	bb.empty.u4s[0]^=0x8;
}

void FlipFunctionBBWhite69() {
	configs[ 0]-=  207;
	configs[ 8]-=    2;
	configs[10]-=    2;
	configs[21]-=    2;
	configs[23]-=    2;
	configs[28]-=    2;
	configs[30]-=    2;
	bb.mover.u4s[0]^=0x1C;
	bb.empty.u4s[0]^=0x8;
}

void FlipFunctionBBBlack69() {
	configs[ 0]+=  207;
	configs[ 8]+=    2;
	configs[10]+=    2;
	configs[21]+=    2;
	configs[23]+=    2;
	configs[28]+=    2;
	configs[30]+=    2;
	bb.mover.u4s[0]^=0x1C;
	bb.empty.u4s[0]^=0x8;
}

void FlipFunctionBBWhite70() {
	configs[ 0]-=  693;
	configs[ 8]-=    2;
	configs[10]-=    2;
	configs[11]-=    2;
	configs[21]-=    2;
	configs[23]-=    2;
	configs[24]-=    2;
	configs[27]-=    2;
	configs[28]-=    2;
	configs[30]-=    2;
	bb.mover.u4s[0]^=0x3C;
	bb.empty.u4s[0]^=0x8;
}

void FlipFunctionBBBlack70() {
	configs[ 0]+=  693;
	configs[ 8]+=    2;
	configs[10]+=    2;
	configs[11]+=    2;
	configs[21]+=    2;
	configs[23]+=    2;
	configs[24]+=    2;
	configs[27]+=    2;
	configs[28]+=    2;
	configs[30]+=    2;
	bb.mover.u4s[0]^=0x3C;
	bb.empty.u4s[0]^=0x8;
}

void FlipFunctionBBWhite71() {
	configs[ 0]-= 2151;
	configs[ 8]-=    2;
	configs[10]-=    2;
	configs[11]-=    2;
	configs[12]-=    2;
	configs[21]-=    2;
	configs[23]-=    2;
	configs[24]-=    2;
	configs[25]-=    2;
	configs[27]-=    2;
	configs[28]-=    2;
	configs[30]-=    2;
	bb.mover.u4s[0]^=0x7C;
	bb.empty.u4s[0]^=0x8;
}

void FlipFunctionBBBlack71() {
	configs[ 0]+= 2151;
	configs[ 8]+=    2;
	configs[10]+=    2;
	configs[11]+=    2;
	configs[12]+=    2;
	configs[21]+=    2;
	configs[23]+=    2;
	configs[24]+=    2;
	configs[25]+=    2;
	configs[27]+=    2;
	configs[28]+=    2;
	configs[30]+=    2;
	bb.mover.u4s[0]^=0x7C;
	bb.empty.u4s[0]^=0x8;
}

void FlipFunctionBBWhite72() {
	configs[ 0]-=   51;
	configs[ 8]-=    2;
	configs[20]-=    2;
	configs[21]-=    2;
	configs[30]-=    2;
	configs[31]-=    2;
	bb.mover.u4s[0]^=0xE;
	bb.empty.u4s[0]^=0x8;
}

void FlipFunctionBBBlack72() {
	configs[ 0]+=   51;
	configs[ 8]+=    2;
	configs[20]+=    2;
	configs[21]+=    2;
	configs[30]+=    2;
	configs[31]+=    2;
	bb.mover.u4s[0]^=0xE;
	bb.empty.u4s[0]^=0x8;
}

void FlipFunctionBBWhite73() {
	configs[ 0]-=  213;
	configs[ 8]-=    2;
	configs[10]-=    2;
	configs[20]-=    2;
	configs[21]-=    2;
	configs[23]-=    2;
	configs[28]-=    2;
	configs[30]-=    2;
	configs[31]-=    2;
	bb.mover.u4s[0]^=0x1E;
	bb.empty.u4s[0]^=0x8;
}

void FlipFunctionBBBlack73() {
	configs[ 0]+=  213;
	configs[ 8]+=    2;
	configs[10]+=    2;
	configs[20]+=    2;
	configs[21]+=    2;
	configs[23]+=    2;
	configs[28]+=    2;
	configs[30]+=    2;
	configs[31]+=    2;
	bb.mover.u4s[0]^=0x1E;
	bb.empty.u4s[0]^=0x8;
}

void FlipFunctionBBWhite74() {
	configs[ 0]-=  699;
	configs[ 8]-=    2;
	configs[10]-=    2;
	configs[11]-=    2;
	configs[20]-=    2;
	configs[21]-=    2;
	configs[23]-=    2;
	configs[24]-=    2;
	configs[27]-=    2;
	configs[28]-=    2;
	configs[30]-=    2;
	configs[31]-=    2;
	bb.mover.u4s[0]^=0x3E;
	bb.empty.u4s[0]^=0x8;
}

void FlipFunctionBBBlack74() {
	configs[ 0]+=  699;
	configs[ 8]+=    2;
	configs[10]+=    2;
	configs[11]+=    2;
	configs[20]+=    2;
	configs[21]+=    2;
	configs[23]+=    2;
	configs[24]+=    2;
	configs[27]+=    2;
	configs[28]+=    2;
	configs[30]+=    2;
	configs[31]+=    2;
	bb.mover.u4s[0]^=0x3E;
	bb.empty.u4s[0]^=0x8;
}

void FlipFunctionBBWhite75() {
	configs[ 0]-= 2157;
	configs[ 8]-=    2;
	configs[10]-=    2;
	configs[11]-=    2;
	configs[12]-=    2;
	configs[20]-=    2;
	configs[21]-=    2;
	configs[23]-=    2;
	configs[24]-=    2;
	configs[25]-=    2;
	configs[27]-=    2;
	configs[28]-=    2;
	configs[30]-=    2;
	configs[31]-=    2;
	bb.mover.u4s[0]^=0x7E;
	bb.empty.u4s[0]^=0x8;
}

void FlipFunctionBBBlack75() {
	configs[ 0]+= 2157;
	configs[ 8]+=    2;
	configs[10]+=    2;
	configs[11]+=    2;
	configs[12]+=    2;
	configs[20]+=    2;
	configs[21]+=    2;
	configs[23]+=    2;
	configs[24]+=    2;
	configs[25]+=    2;
	configs[27]+=    2;
	configs[28]+=    2;
	configs[30]+=    2;
	configs[31]+=    2;
	bb.mover.u4s[0]^=0x7E;
	bb.empty.u4s[0]^=0x8;
}

void FlipFunctionBBWhite76() {
	configs[ 9]-=    1;
}

void FlipFunctionBBBlack76() {
	configs[ 9]+=    1;
}

void FlipFunctionBBWhite77() {
	configs[ 1]-=   18;
	configs[ 9]-=    7;
	configs[21]-=    6;
	configs[31]-=    6;
	bb.mover.u4s[0]^=0x400;
}

void FlipFunctionBBBlack77() {
	configs[ 1]+=   18;
	configs[ 9]+=    7;
	configs[21]+=    6;
	configs[31]+=    6;
	bb.mover.u4s[0]^=0x400;
}

void FlipFunctionBBWhite78() {
	configs[ 1]-=   18;
	configs[ 2]-=    6;
	configs[ 9]-=   25;
	configs[20]-=   18;
	configs[21]-=    6;
	configs[31]-=    6;
	configs[33]-=    6;
	bb.mover.u4s[0]^=0x20400;
}

void FlipFunctionBBBlack78() {
	configs[ 1]+=   18;
	configs[ 2]+=    6;
	configs[ 9]+=   25;
	configs[20]+=   18;
	configs[21]+=    6;
	configs[31]+=    6;
	configs[33]+=    6;
	bb.mover.u4s[0]^=0x20400;
}

void FlipFunctionBBWhite79() {
	configs[22]-=    1;
}

void FlipFunctionBBBlack79() {
	configs[22]+=    1;
}

void FlipFunctionBBWhite80() {
	configs[ 1]-=   54;
	configs[10]-=    6;
	configs[22]-=    7;
	configs[30]-=    6;
	bb.mover.u4s[0]^=0x800;
}

void FlipFunctionBBBlack80() {
	configs[ 1]+=   54;
	configs[10]+=    6;
	configs[22]+=    7;
	configs[30]+=    6;
	bb.mover.u4s[0]^=0x800;
}

void FlipFunctionBBWhite81() {
	configs[ 1]-=   54;
	configs[ 2]-=   54;
	configs[10]-=    6;
	configs[11]-=   18;
	configs[22]-=   25;
	configs[30]-=    6;
	configs[31]-=   18;
	bb.mover.u4s[0]^=0x80800;
}

void FlipFunctionBBBlack81() {
	configs[ 1]+=   54;
	configs[ 2]+=   54;
	configs[10]+=    6;
	configs[11]+=   18;
	configs[22]+=   25;
	configs[30]+=    6;
	configs[31]+=   18;
	bb.mover.u4s[0]^=0x80800;
}

void FlipFunctionBBWhite82() {
	configs[ 1]-=   54;
	configs[ 2]-=   54;
	configs[ 3]-=   54;
	configs[10]-=    6;
	configs[11]-=   18;
	configs[12]-=   54;
	configs[22]-=   79;
	configs[30]-=    6;
	configs[31]-=   18;
	configs[32]-=   54;
	bb.mover.u4s[0]^=0x8080800;
}

void FlipFunctionBBBlack82() {
	configs[ 1]+=   54;
	configs[ 2]+=   54;
	configs[ 3]+=   54;
	configs[10]+=    6;
	configs[11]+=   18;
	configs[12]+=   54;
	configs[22]+=   79;
	configs[30]+=    6;
	configs[31]+=   18;
	configs[32]+=   54;
	bb.mover.u4s[0]^=0x8080800;
}

void FlipFunctionBBWhite83() {
	configs[ 1]-=   54;
	configs[ 2]-=   54;
	configs[ 3]-=   54;
	configs[ 4]-=   54;
	configs[10]-=    6;
	configs[11]-=   18;
	configs[12]-=   54;
	configs[13]-=  162;
	configs[22]-=  241;
	configs[30]-=    6;
	configs[31]-=   18;
	configs[32]-=   54;
	configs[33]-=   54;
	bb.mover.u4s[0]^=0x8080800;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBBlack83() {
	configs[ 1]+=   54;
	configs[ 2]+=   54;
	configs[ 3]+=   54;
	configs[ 4]+=   54;
	configs[10]+=    6;
	configs[11]+=   18;
	configs[12]+=   54;
	configs[13]+=  162;
	configs[22]+=  241;
	configs[30]+=    6;
	configs[31]+=   18;
	configs[32]+=   54;
	configs[33]+=   54;
	bb.mover.u4s[0]^=0x8080800;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBWhite84() {
	configs[ 1]-=   54;
	configs[ 2]-=   54;
	configs[ 3]-=   54;
	configs[ 4]-=   54;
	configs[ 5]-=   54;
	configs[10]-=    6;
	configs[11]-=   18;
	configs[12]-=   54;
	configs[13]-=  162;
	configs[14]-=  162;
	configs[22]-=  727;
	configs[30]-=    6;
	configs[31]-=   18;
	configs[32]-=   54;
	configs[33]-=   54;
	configs[34]-=   54;
	bb.mover.u4s[0]^=0x8080800;
	bb.mover.u4s[1]^=0x808;
}

void FlipFunctionBBBlack84() {
	configs[ 1]+=   54;
	configs[ 2]+=   54;
	configs[ 3]+=   54;
	configs[ 4]+=   54;
	configs[ 5]+=   54;
	configs[10]+=    6;
	configs[11]+=   18;
	configs[12]+=   54;
	configs[13]+=  162;
	configs[14]+=  162;
	configs[22]+=  727;
	configs[30]+=    6;
	configs[31]+=   18;
	configs[32]+=   54;
	configs[33]+=   54;
	configs[34]+=   54;
	bb.mover.u4s[0]^=0x8080800;
	bb.mover.u4s[1]^=0x808;
}

void FlipFunctionBBWhite85() {
	configs[ 1]-=   54;
	configs[ 2]-=   54;
	configs[ 3]-=   54;
	configs[ 4]-=   54;
	configs[ 5]-=   54;
	configs[ 6]-=   54;
	configs[10]-=    6;
	configs[11]-=   18;
	configs[12]-=   54;
	configs[13]-=  162;
	configs[14]-=  162;
	configs[15]-=  162;
	configs[22]-= 2185;
	configs[30]-=    6;
	configs[31]-=   18;
	configs[32]-=   54;
	configs[33]-=   54;
	configs[34]-=   54;
	configs[35]-=   54;
	bb.mover.u4s[0]^=0x8080800;
	bb.mover.u4s[1]^=0x80808;
}

void FlipFunctionBBBlack85() {
	configs[ 1]+=   54;
	configs[ 2]+=   54;
	configs[ 3]+=   54;
	configs[ 4]+=   54;
	configs[ 5]+=   54;
	configs[ 6]+=   54;
	configs[10]+=    6;
	configs[11]+=   18;
	configs[12]+=   54;
	configs[13]+=  162;
	configs[14]+=  162;
	configs[15]+=  162;
	configs[22]+= 2185;
	configs[30]+=    6;
	configs[31]+=   18;
	configs[32]+=   54;
	configs[33]+=   54;
	configs[34]+=   54;
	configs[35]+=   54;
	bb.mover.u4s[0]^=0x8080800;
	bb.mover.u4s[1]^=0x80808;
}

void FlipFunctionBBWhite86() {
	configs[29]-=    1;
}

void FlipFunctionBBBlack86() {
	configs[29]+=    1;
}

void FlipFunctionBBWhite87() {
	configs[ 1]-=  162;
	configs[11]-=    6;
	configs[23]-=    6;
	configs[29]-=    7;
	bb.mover.u4s[0]^=0x1000;
}

void FlipFunctionBBBlack87() {
	configs[ 1]+=  162;
	configs[11]+=    6;
	configs[23]+=    6;
	configs[29]+=    7;
	bb.mover.u4s[0]^=0x1000;
}

void FlipFunctionBBWhite88() {
	configs[ 1]-=  162;
	configs[ 2]-=  486;
	configs[11]-=    6;
	configs[13]-=   18;
	configs[23]-=    6;
	configs[24]-=   18;
	configs[29]-=   25;
	bb.mover.u4s[0]^=0x201000;
}

void FlipFunctionBBBlack88() {
	configs[ 1]+=  162;
	configs[ 2]+=  486;
	configs[11]+=    6;
	configs[13]+=   18;
	configs[23]+=    6;
	configs[24]+=   18;
	configs[29]+=   25;
	bb.mover.u4s[0]^=0x201000;
}

void FlipFunctionBBWhite89() {
	configs[ 1]-=  162;
	configs[ 2]-=  486;
	configs[ 3]-= 1458;
	configs[11]-=    6;
	configs[13]-=   18;
	configs[15]-=    6;
	configs[23]-=    6;
	configs[24]-=   18;
	configs[25]-=   54;
	configs[29]-=   79;
	bb.mover.u4s[0]^=0x40201000;
}

void FlipFunctionBBBlack89() {
	configs[ 1]+=  162;
	configs[ 2]+=  486;
	configs[ 3]+= 1458;
	configs[11]+=    6;
	configs[13]+=   18;
	configs[15]+=    6;
	configs[23]+=    6;
	configs[24]+=   18;
	configs[25]+=   54;
	configs[29]+=   79;
	bb.mover.u4s[0]^=0x40201000;
}

void FlipFunctionBBWhite90() {
	configs[ 0]-=   81;
	bb.mover.u4s[0]^=0x10;
	bb.empty.u4s[0]^=0x10;
}

void FlipFunctionBBBlack90() {
	configs[ 0]+=   81;
	bb.mover.u4s[0]^=0x10;
	bb.empty.u4s[0]^=0x10;
}

void FlipFunctionBBWhite91() {
	configs[ 0]-=  567;
	configs[11]-=    2;
	configs[24]-=    2;
	configs[27]-=    2;
	bb.mover.u4s[0]^=0x30;
	bb.empty.u4s[0]^=0x10;
}

void FlipFunctionBBBlack91() {
	configs[ 0]+=  567;
	configs[11]+=    2;
	configs[24]+=    2;
	configs[27]+=    2;
	bb.mover.u4s[0]^=0x30;
	bb.empty.u4s[0]^=0x10;
}

void FlipFunctionBBWhite92() {
	configs[ 0]-= 2025;
	configs[11]-=    2;
	configs[12]-=    2;
	configs[24]-=    2;
	configs[25]-=    2;
	configs[27]-=    2;
	bb.mover.u4s[0]^=0x70;
	bb.empty.u4s[0]^=0x10;
}

void FlipFunctionBBBlack92() {
	configs[ 0]+= 2025;
	configs[11]+=    2;
	configs[12]+=    2;
	configs[24]+=    2;
	configs[25]+=    2;
	configs[27]+=    2;
	bb.mover.u4s[0]^=0x70;
	bb.empty.u4s[0]^=0x10;
}

void FlipFunctionBBWhite93() {
	configs[ 0]-=  135;
	configs[ 9]-=    2;
	configs[22]-=    2;
	configs[29]-=    2;
	bb.mover.u4s[0]^=0x18;
	bb.empty.u4s[0]^=0x10;
}

void FlipFunctionBBBlack93() {
	configs[ 0]+=  135;
	configs[ 9]+=    2;
	configs[22]+=    2;
	configs[29]+=    2;
	bb.mover.u4s[0]^=0x18;
	bb.empty.u4s[0]^=0x10;
}

void FlipFunctionBBWhite94() {
	configs[ 0]-=  621;
	configs[ 9]-=    2;
	configs[11]-=    2;
	configs[22]-=    2;
	configs[24]-=    2;
	configs[27]-=    2;
	configs[29]-=    2;
	bb.mover.u4s[0]^=0x38;
	bb.empty.u4s[0]^=0x10;
}

void FlipFunctionBBBlack94() {
	configs[ 0]+=  621;
	configs[ 9]+=    2;
	configs[11]+=    2;
	configs[22]+=    2;
	configs[24]+=    2;
	configs[27]+=    2;
	configs[29]+=    2;
	bb.mover.u4s[0]^=0x38;
	bb.empty.u4s[0]^=0x10;
}

void FlipFunctionBBWhite95() {
	configs[ 0]-= 2079;
	configs[ 9]-=    2;
	configs[11]-=    2;
	configs[12]-=    2;
	configs[22]-=    2;
	configs[24]-=    2;
	configs[25]-=    2;
	configs[27]-=    2;
	configs[29]-=    2;
	bb.mover.u4s[0]^=0x78;
	bb.empty.u4s[0]^=0x10;
}

void FlipFunctionBBBlack95() {
	configs[ 0]+= 2079;
	configs[ 9]+=    2;
	configs[11]+=    2;
	configs[12]+=    2;
	configs[22]+=    2;
	configs[24]+=    2;
	configs[25]+=    2;
	configs[27]+=    2;
	configs[29]+=    2;
	bb.mover.u4s[0]^=0x78;
	bb.empty.u4s[0]^=0x10;
}

void FlipFunctionBBWhite96() {
	configs[ 0]-=  153;
	configs[ 8]-=    2;
	configs[ 9]-=    2;
	configs[21]-=    2;
	configs[22]-=    2;
	configs[29]-=    2;
	configs[30]-=    2;
	bb.mover.u4s[0]^=0x1C;
	bb.empty.u4s[0]^=0x10;
}

void FlipFunctionBBBlack96() {
	configs[ 0]+=  153;
	configs[ 8]+=    2;
	configs[ 9]+=    2;
	configs[21]+=    2;
	configs[22]+=    2;
	configs[29]+=    2;
	configs[30]+=    2;
	bb.mover.u4s[0]^=0x1C;
	bb.empty.u4s[0]^=0x10;
}

void FlipFunctionBBWhite97() {
	configs[ 0]-=  639;
	configs[ 8]-=    2;
	configs[ 9]-=    2;
	configs[11]-=    2;
	configs[21]-=    2;
	configs[22]-=    2;
	configs[24]-=    2;
	configs[27]-=    2;
	configs[29]-=    2;
	configs[30]-=    2;
	bb.mover.u4s[0]^=0x3C;
	bb.empty.u4s[0]^=0x10;
}

void FlipFunctionBBBlack97() {
	configs[ 0]+=  639;
	configs[ 8]+=    2;
	configs[ 9]+=    2;
	configs[11]+=    2;
	configs[21]+=    2;
	configs[22]+=    2;
	configs[24]+=    2;
	configs[27]+=    2;
	configs[29]+=    2;
	configs[30]+=    2;
	bb.mover.u4s[0]^=0x3C;
	bb.empty.u4s[0]^=0x10;
}

void FlipFunctionBBWhite98() {
	configs[ 0]-= 2097;
	configs[ 8]-=    2;
	configs[ 9]-=    2;
	configs[11]-=    2;
	configs[12]-=    2;
	configs[21]-=    2;
	configs[22]-=    2;
	configs[24]-=    2;
	configs[25]-=    2;
	configs[27]-=    2;
	configs[29]-=    2;
	configs[30]-=    2;
	bb.mover.u4s[0]^=0x7C;
	bb.empty.u4s[0]^=0x10;
}

void FlipFunctionBBBlack98() {
	configs[ 0]+= 2097;
	configs[ 8]+=    2;
	configs[ 9]+=    2;
	configs[11]+=    2;
	configs[12]+=    2;
	configs[21]+=    2;
	configs[22]+=    2;
	configs[24]+=    2;
	configs[25]+=    2;
	configs[27]+=    2;
	configs[29]+=    2;
	configs[30]+=    2;
	bb.mover.u4s[0]^=0x7C;
	bb.empty.u4s[0]^=0x10;
}

void FlipFunctionBBWhite99() {
	configs[ 0]-=  159;
	configs[ 8]-=    2;
	configs[ 9]-=    2;
	configs[20]-=    2;
	configs[21]-=    2;
	configs[22]-=    2;
	configs[29]-=    2;
	configs[30]-=    2;
	configs[31]-=    2;
	bb.mover.u4s[0]^=0x1E;
	bb.empty.u4s[0]^=0x10;
}

void FlipFunctionBBBlack99() {
	configs[ 0]+=  159;
	configs[ 8]+=    2;
	configs[ 9]+=    2;
	configs[20]+=    2;
	configs[21]+=    2;
	configs[22]+=    2;
	configs[29]+=    2;
	configs[30]+=    2;
	configs[31]+=    2;
	bb.mover.u4s[0]^=0x1E;
	bb.empty.u4s[0]^=0x10;
}

void FlipFunctionBBWhite100() {
	configs[ 0]-=  645;
	configs[ 8]-=    2;
	configs[ 9]-=    2;
	configs[11]-=    2;
	configs[20]-=    2;
	configs[21]-=    2;
	configs[22]-=    2;
	configs[24]-=    2;
	configs[27]-=    2;
	configs[29]-=    2;
	configs[30]-=    2;
	configs[31]-=    2;
	bb.mover.u4s[0]^=0x3E;
	bb.empty.u4s[0]^=0x10;
}

void FlipFunctionBBBlack100() {
	configs[ 0]+=  645;
	configs[ 8]+=    2;
	configs[ 9]+=    2;
	configs[11]+=    2;
	configs[20]+=    2;
	configs[21]+=    2;
	configs[22]+=    2;
	configs[24]+=    2;
	configs[27]+=    2;
	configs[29]+=    2;
	configs[30]+=    2;
	configs[31]+=    2;
	bb.mover.u4s[0]^=0x3E;
	bb.empty.u4s[0]^=0x10;
}

void FlipFunctionBBWhite101() {
	configs[ 0]-= 2103;
	configs[ 8]-=    2;
	configs[ 9]-=    2;
	configs[11]-=    2;
	configs[12]-=    2;
	configs[20]-=    2;
	configs[21]-=    2;
	configs[22]-=    2;
	configs[24]-=    2;
	configs[25]-=    2;
	configs[27]-=    2;
	configs[29]-=    2;
	configs[30]-=    2;
	configs[31]-=    2;
	bb.mover.u4s[0]^=0x7E;
	bb.empty.u4s[0]^=0x10;
}

void FlipFunctionBBBlack101() {
	configs[ 0]+= 2103;
	configs[ 8]+=    2;
	configs[ 9]+=    2;
	configs[11]+=    2;
	configs[12]+=    2;
	configs[20]+=    2;
	configs[21]+=    2;
	configs[22]+=    2;
	configs[24]+=    2;
	configs[25]+=    2;
	configs[27]+=    2;
	configs[29]+=    2;
	configs[30]+=    2;
	configs[31]+=    2;
	bb.mover.u4s[0]^=0x7E;
	bb.empty.u4s[0]^=0x10;
}

void FlipFunctionBBWhite102() {
	configs[10]-=    1;
}

void FlipFunctionBBBlack102() {
	configs[10]+=    1;
}

void FlipFunctionBBWhite103() {
	configs[ 1]-=   54;
	configs[10]-=    7;
	configs[22]-=    6;
	configs[30]-=    6;
	bb.mover.u4s[0]^=0x800;
}

void FlipFunctionBBBlack103() {
	configs[ 1]+=   54;
	configs[10]+=    7;
	configs[22]+=    6;
	configs[30]+=    6;
	bb.mover.u4s[0]^=0x800;
}

void FlipFunctionBBWhite104() {
	configs[ 1]-=   54;
	configs[ 2]-=   18;
	configs[10]-=   25;
	configs[21]-=   18;
	configs[22]-=    6;
	configs[30]-=    6;
	configs[32]-=   18;
	bb.mover.u4s[0]^=0x40800;
}

void FlipFunctionBBBlack104() {
	configs[ 1]+=   54;
	configs[ 2]+=   18;
	configs[10]+=   25;
	configs[21]+=   18;
	configs[22]+=    6;
	configs[30]+=    6;
	configs[32]+=   18;
	bb.mover.u4s[0]^=0x40800;
}

void FlipFunctionBBWhite105() {
	configs[ 1]-=   54;
	configs[ 2]-=   18;
	configs[ 3]-=    6;
	configs[10]-=   79;
	configs[20]-=   54;
	configs[21]-=   18;
	configs[22]-=    6;
	configs[30]-=    6;
	configs[32]-=   18;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x2040800;
}

void FlipFunctionBBBlack105() {
	configs[ 1]+=   54;
	configs[ 2]+=   18;
	configs[ 3]+=    6;
	configs[10]+=   79;
	configs[20]+=   54;
	configs[21]+=   18;
	configs[22]+=    6;
	configs[30]+=    6;
	configs[32]+=   18;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x2040800;
}

void FlipFunctionBBWhite106() {
	configs[23]-=    1;
}

void FlipFunctionBBBlack106() {
	configs[23]+=    1;
}

void FlipFunctionBBWhite107() {
	configs[ 1]-=  162;
	configs[11]-=    6;
	configs[23]-=    7;
	configs[29]-=    6;
	bb.mover.u4s[0]^=0x1000;
}

void FlipFunctionBBBlack107() {
	configs[ 1]+=  162;
	configs[11]+=    6;
	configs[23]+=    7;
	configs[29]+=    6;
	bb.mover.u4s[0]^=0x1000;
}

void FlipFunctionBBWhite108() {
	configs[ 1]-=  162;
	configs[ 2]-=  162;
	configs[11]-=    6;
	configs[12]-=   18;
	configs[23]-=   25;
	configs[29]-=    6;
	configs[30]-=   18;
	bb.mover.u4s[0]^=0x101000;
}

void FlipFunctionBBBlack108() {
	configs[ 1]+=  162;
	configs[ 2]+=  162;
	configs[11]+=    6;
	configs[12]+=   18;
	configs[23]+=   25;
	configs[29]+=    6;
	configs[30]+=   18;
	bb.mover.u4s[0]^=0x101000;
}

void FlipFunctionBBWhite109() {
	configs[ 1]-=  162;
	configs[ 2]-=  162;
	configs[ 3]-=  162;
	configs[11]-=    6;
	configs[12]-=   18;
	configs[13]-=   54;
	configs[23]-=   79;
	configs[29]-=    6;
	configs[30]-=   18;
	configs[31]-=   54;
	bb.mover.u4s[0]^=0x10101000;
}

void FlipFunctionBBBlack109() {
	configs[ 1]+=  162;
	configs[ 2]+=  162;
	configs[ 3]+=  162;
	configs[11]+=    6;
	configs[12]+=   18;
	configs[13]+=   54;
	configs[23]+=   79;
	configs[29]+=    6;
	configs[30]+=   18;
	configs[31]+=   54;
	bb.mover.u4s[0]^=0x10101000;
}

void FlipFunctionBBWhite110() {
	configs[ 1]-=  162;
	configs[ 2]-=  162;
	configs[ 3]-=  162;
	configs[ 4]-=  162;
	configs[11]-=    6;
	configs[12]-=   18;
	configs[13]-=   54;
	configs[14]-=   54;
	configs[23]-=  241;
	configs[29]-=    6;
	configs[30]-=   18;
	configs[31]-=   54;
	configs[32]-=  162;
	bb.mover.u4s[0]^=0x10101000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBBlack110() {
	configs[ 1]+=  162;
	configs[ 2]+=  162;
	configs[ 3]+=  162;
	configs[ 4]+=  162;
	configs[11]+=    6;
	configs[12]+=   18;
	configs[13]+=   54;
	configs[14]+=   54;
	configs[23]+=  241;
	configs[29]+=    6;
	configs[30]+=   18;
	configs[31]+=   54;
	configs[32]+=  162;
	bb.mover.u4s[0]^=0x10101000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBWhite111() {
	configs[ 1]-=  162;
	configs[ 2]-=  162;
	configs[ 3]-=  162;
	configs[ 4]-=  162;
	configs[ 5]-=  162;
	configs[11]-=    6;
	configs[12]-=   18;
	configs[13]-=   54;
	configs[14]-=   54;
	configs[15]-=   54;
	configs[23]-=  727;
	configs[29]-=    6;
	configs[30]-=   18;
	configs[31]-=   54;
	configs[32]-=  162;
	configs[33]-=  162;
	bb.mover.u4s[0]^=0x10101000;
	bb.mover.u4s[1]^=0x1010;
}

void FlipFunctionBBBlack111() {
	configs[ 1]+=  162;
	configs[ 2]+=  162;
	configs[ 3]+=  162;
	configs[ 4]+=  162;
	configs[ 5]+=  162;
	configs[11]+=    6;
	configs[12]+=   18;
	configs[13]+=   54;
	configs[14]+=   54;
	configs[15]+=   54;
	configs[23]+=  727;
	configs[29]+=    6;
	configs[30]+=   18;
	configs[31]+=   54;
	configs[32]+=  162;
	configs[33]+=  162;
	bb.mover.u4s[0]^=0x10101000;
	bb.mover.u4s[1]^=0x1010;
}

void FlipFunctionBBWhite112() {
	configs[ 1]-=  162;
	configs[ 2]-=  162;
	configs[ 3]-=  162;
	configs[ 4]-=  162;
	configs[ 5]-=  162;
	configs[ 6]-=  162;
	configs[11]-=    6;
	configs[12]-=   18;
	configs[13]-=   54;
	configs[14]-=   54;
	configs[15]-=   54;
	configs[16]-=   54;
	configs[23]-= 2185;
	configs[29]-=    6;
	configs[30]-=   18;
	configs[31]-=   54;
	configs[32]-=  162;
	configs[33]-=  162;
	configs[34]-=  162;
	bb.mover.u4s[0]^=0x10101000;
	bb.mover.u4s[1]^=0x101010;
}

void FlipFunctionBBBlack112() {
	configs[ 1]+=  162;
	configs[ 2]+=  162;
	configs[ 3]+=  162;
	configs[ 4]+=  162;
	configs[ 5]+=  162;
	configs[ 6]+=  162;
	configs[11]+=    6;
	configs[12]+=   18;
	configs[13]+=   54;
	configs[14]+=   54;
	configs[15]+=   54;
	configs[16]+=   54;
	configs[23]+= 2185;
	configs[29]+=    6;
	configs[30]+=   18;
	configs[31]+=   54;
	configs[32]+=  162;
	configs[33]+=  162;
	configs[34]+=  162;
	bb.mover.u4s[0]^=0x10101000;
	bb.mover.u4s[1]^=0x101010;
}

void FlipFunctionBBWhite113() {
	configs[28]-=    1;
}

void FlipFunctionBBBlack113() {
	configs[28]+=    1;
}

void FlipFunctionBBWhite114() {
	configs[ 1]-=  486;
	configs[12]-=    6;
	configs[24]-=    6;
	configs[28]-=    7;
	bb.mover.u4s[0]^=0x2000;
}

void FlipFunctionBBBlack114() {
	configs[ 1]+=  486;
	configs[12]+=    6;
	configs[24]+=    6;
	configs[28]+=    7;
	bb.mover.u4s[0]^=0x2000;
}

void FlipFunctionBBWhite115() {
	configs[ 1]-=  486;
	configs[ 2]-= 1458;
	configs[12]-=    6;
	configs[14]-=    6;
	configs[24]-=    6;
	configs[25]-=   18;
	configs[28]-=   25;
	bb.mover.u4s[0]^=0x402000;
}

void FlipFunctionBBBlack115() {
	configs[ 1]+=  486;
	configs[ 2]+= 1458;
	configs[12]+=    6;
	configs[14]+=    6;
	configs[24]+=    6;
	configs[25]+=   18;
	configs[28]+=   25;
	bb.mover.u4s[0]^=0x402000;
}

void FlipFunctionBBWhite116() {
	configs[ 0]-=  243;
	bb.mover.u4s[0]^=0x20;
	bb.empty.u4s[0]^=0x20;
}

void FlipFunctionBBBlack116() {
	configs[ 0]+=  243;
	bb.mover.u4s[0]^=0x20;
	bb.empty.u4s[0]^=0x20;
}

void FlipFunctionBBWhite117() {
	configs[ 0]-= 1701;
	configs[12]-=    2;
	configs[25]-=    2;
	bb.mover.u4s[0]^=0x60;
	bb.empty.u4s[0]^=0x20;
}

void FlipFunctionBBBlack117() {
	configs[ 0]+= 1701;
	configs[12]+=    2;
	configs[25]+=    2;
	bb.mover.u4s[0]^=0x60;
	bb.empty.u4s[0]^=0x20;
}

void FlipFunctionBBWhite118() {
	configs[ 0]-=  405;
	configs[10]-=    2;
	configs[23]-=    2;
	configs[28]-=    2;
	bb.mover.u4s[0]^=0x30;
	bb.empty.u4s[0]^=0x20;
}

void FlipFunctionBBBlack118() {
	configs[ 0]+=  405;
	configs[10]+=    2;
	configs[23]+=    2;
	configs[28]+=    2;
	bb.mover.u4s[0]^=0x30;
	bb.empty.u4s[0]^=0x20;
}

void FlipFunctionBBWhite119() {
	configs[ 0]-= 1863;
	configs[10]-=    2;
	configs[12]-=    2;
	configs[23]-=    2;
	configs[25]-=    2;
	configs[28]-=    2;
	bb.mover.u4s[0]^=0x70;
	bb.empty.u4s[0]^=0x20;
}

void FlipFunctionBBBlack119() {
	configs[ 0]+= 1863;
	configs[10]+=    2;
	configs[12]+=    2;
	configs[23]+=    2;
	configs[25]+=    2;
	configs[28]+=    2;
	bb.mover.u4s[0]^=0x70;
	bb.empty.u4s[0]^=0x20;
}

void FlipFunctionBBWhite120() {
	configs[ 0]-=  459;
	configs[ 9]-=    2;
	configs[10]-=    2;
	configs[22]-=    2;
	configs[23]-=    2;
	configs[28]-=    2;
	configs[29]-=    2;
	bb.mover.u4s[0]^=0x38;
	bb.empty.u4s[0]^=0x20;
}

void FlipFunctionBBBlack120() {
	configs[ 0]+=  459;
	configs[ 9]+=    2;
	configs[10]+=    2;
	configs[22]+=    2;
	configs[23]+=    2;
	configs[28]+=    2;
	configs[29]+=    2;
	bb.mover.u4s[0]^=0x38;
	bb.empty.u4s[0]^=0x20;
}

void FlipFunctionBBWhite121() {
	configs[ 0]-= 1917;
	configs[ 9]-=    2;
	configs[10]-=    2;
	configs[12]-=    2;
	configs[22]-=    2;
	configs[23]-=    2;
	configs[25]-=    2;
	configs[28]-=    2;
	configs[29]-=    2;
	bb.mover.u4s[0]^=0x78;
	bb.empty.u4s[0]^=0x20;
}

void FlipFunctionBBBlack121() {
	configs[ 0]+= 1917;
	configs[ 9]+=    2;
	configs[10]+=    2;
	configs[12]+=    2;
	configs[22]+=    2;
	configs[23]+=    2;
	configs[25]+=    2;
	configs[28]+=    2;
	configs[29]+=    2;
	bb.mover.u4s[0]^=0x78;
	bb.empty.u4s[0]^=0x20;
}

void FlipFunctionBBWhite122() {
	configs[ 0]-=  477;
	configs[ 8]-=    2;
	configs[ 9]-=    2;
	configs[10]-=    2;
	configs[21]-=    2;
	configs[22]-=    2;
	configs[23]-=    2;
	configs[28]-=    2;
	configs[29]-=    2;
	configs[30]-=    2;
	bb.mover.u4s[0]^=0x3C;
	bb.empty.u4s[0]^=0x20;
}

void FlipFunctionBBBlack122() {
	configs[ 0]+=  477;
	configs[ 8]+=    2;
	configs[ 9]+=    2;
	configs[10]+=    2;
	configs[21]+=    2;
	configs[22]+=    2;
	configs[23]+=    2;
	configs[28]+=    2;
	configs[29]+=    2;
	configs[30]+=    2;
	bb.mover.u4s[0]^=0x3C;
	bb.empty.u4s[0]^=0x20;
}

void FlipFunctionBBWhite123() {
	configs[ 0]-= 1935;
	configs[ 8]-=    2;
	configs[ 9]-=    2;
	configs[10]-=    2;
	configs[12]-=    2;
	configs[21]-=    2;
	configs[22]-=    2;
	configs[23]-=    2;
	configs[25]-=    2;
	configs[28]-=    2;
	configs[29]-=    2;
	configs[30]-=    2;
	bb.mover.u4s[0]^=0x7C;
	bb.empty.u4s[0]^=0x20;
}

void FlipFunctionBBBlack123() {
	configs[ 0]+= 1935;
	configs[ 8]+=    2;
	configs[ 9]+=    2;
	configs[10]+=    2;
	configs[12]+=    2;
	configs[21]+=    2;
	configs[22]+=    2;
	configs[23]+=    2;
	configs[25]+=    2;
	configs[28]+=    2;
	configs[29]+=    2;
	configs[30]+=    2;
	bb.mover.u4s[0]^=0x7C;
	bb.empty.u4s[0]^=0x20;
}

void FlipFunctionBBWhite124() {
	configs[ 0]-=  483;
	configs[ 8]-=    2;
	configs[ 9]-=    2;
	configs[10]-=    2;
	configs[20]-=    2;
	configs[21]-=    2;
	configs[22]-=    2;
	configs[23]-=    2;
	configs[28]-=    2;
	configs[29]-=    2;
	configs[30]-=    2;
	configs[31]-=    2;
	bb.mover.u4s[0]^=0x3E;
	bb.empty.u4s[0]^=0x20;
}

void FlipFunctionBBBlack124() {
	configs[ 0]+=  483;
	configs[ 8]+=    2;
	configs[ 9]+=    2;
	configs[10]+=    2;
	configs[20]+=    2;
	configs[21]+=    2;
	configs[22]+=    2;
	configs[23]+=    2;
	configs[28]+=    2;
	configs[29]+=    2;
	configs[30]+=    2;
	configs[31]+=    2;
	bb.mover.u4s[0]^=0x3E;
	bb.empty.u4s[0]^=0x20;
}

void FlipFunctionBBWhite125() {
	configs[ 0]-= 1941;
	configs[ 8]-=    2;
	configs[ 9]-=    2;
	configs[10]-=    2;
	configs[12]-=    2;
	configs[20]-=    2;
	configs[21]-=    2;
	configs[22]-=    2;
	configs[23]-=    2;
	configs[25]-=    2;
	configs[28]-=    2;
	configs[29]-=    2;
	configs[30]-=    2;
	configs[31]-=    2;
	bb.mover.u4s[0]^=0x7E;
	bb.empty.u4s[0]^=0x20;
}

void FlipFunctionBBBlack125() {
	configs[ 0]+= 1941;
	configs[ 8]+=    2;
	configs[ 9]+=    2;
	configs[10]+=    2;
	configs[12]+=    2;
	configs[20]+=    2;
	configs[21]+=    2;
	configs[22]+=    2;
	configs[23]+=    2;
	configs[25]+=    2;
	configs[28]+=    2;
	configs[29]+=    2;
	configs[30]+=    2;
	configs[31]+=    2;
	bb.mover.u4s[0]^=0x7E;
	bb.empty.u4s[0]^=0x20;
}

void FlipFunctionBBWhite126() {
	configs[11]-=    1;
}

void FlipFunctionBBBlack126() {
	configs[11]+=    1;
}

void FlipFunctionBBWhite127() {
	configs[ 1]-=  162;
	configs[11]-=    7;
	configs[23]-=    6;
	configs[29]-=    6;
	bb.mover.u4s[0]^=0x1000;
}

void FlipFunctionBBBlack127() {
	configs[ 1]+=  162;
	configs[11]+=    7;
	configs[23]+=    6;
	configs[29]+=    6;
	bb.mover.u4s[0]^=0x1000;
}

void FlipFunctionBBWhite128() {
	configs[ 1]-=  162;
	configs[ 2]-=   54;
	configs[11]-=   25;
	configs[22]-=   18;
	configs[23]-=    6;
	configs[29]-=    6;
	configs[31]-=   18;
	bb.mover.u4s[0]^=0x81000;
}

void FlipFunctionBBBlack128() {
	configs[ 1]+=  162;
	configs[ 2]+=   54;
	configs[11]+=   25;
	configs[22]+=   18;
	configs[23]+=    6;
	configs[29]+=    6;
	configs[31]+=   18;
	bb.mover.u4s[0]^=0x81000;
}

void FlipFunctionBBWhite129() {
	configs[ 1]-=  162;
	configs[ 2]-=   54;
	configs[ 3]-=   18;
	configs[11]-=   79;
	configs[21]-=   54;
	configs[22]-=   18;
	configs[23]-=    6;
	configs[29]-=    6;
	configs[31]-=   18;
	configs[33]-=   18;
	bb.mover.u4s[0]^=0x4081000;
}

void FlipFunctionBBBlack129() {
	configs[ 1]+=  162;
	configs[ 2]+=   54;
	configs[ 3]+=   18;
	configs[11]+=   79;
	configs[21]+=   54;
	configs[22]+=   18;
	configs[23]+=    6;
	configs[29]+=    6;
	configs[31]+=   18;
	configs[33]+=   18;
	bb.mover.u4s[0]^=0x4081000;
}

void FlipFunctionBBWhite130() {
	configs[ 1]-=  162;
	configs[ 2]-=   54;
	configs[ 3]-=   18;
	configs[ 4]-=    6;
	configs[11]-=  241;
	configs[20]-=  162;
	configs[21]-=   54;
	configs[22]-=   18;
	configs[23]-=    6;
	configs[29]-=    6;
	configs[31]-=   18;
	configs[33]-=   18;
	configs[35]-=    6;
	bb.mover.u4s[0]^=0x4081000;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBBlack130() {
	configs[ 1]+=  162;
	configs[ 2]+=   54;
	configs[ 3]+=   18;
	configs[ 4]+=    6;
	configs[11]+=  241;
	configs[20]+=  162;
	configs[21]+=   54;
	configs[22]+=   18;
	configs[23]+=    6;
	configs[29]+=    6;
	configs[31]+=   18;
	configs[33]+=   18;
	configs[35]+=    6;
	bb.mover.u4s[0]^=0x4081000;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBWhite131() {
	configs[24]-=    1;
}

void FlipFunctionBBBlack131() {
	configs[24]+=    1;
}

void FlipFunctionBBWhite132() {
	configs[ 1]-=  486;
	configs[12]-=    6;
	configs[24]-=    7;
	configs[28]-=    6;
	bb.mover.u4s[0]^=0x2000;
}

void FlipFunctionBBBlack132() {
	configs[ 1]+=  486;
	configs[12]+=    6;
	configs[24]+=    7;
	configs[28]+=    6;
	bb.mover.u4s[0]^=0x2000;
}

void FlipFunctionBBWhite133() {
	configs[ 1]-=  486;
	configs[ 2]-=  486;
	configs[12]-=    6;
	configs[13]-=   18;
	configs[24]-=   25;
	configs[28]-=    6;
	configs[29]-=   18;
	bb.mover.u4s[0]^=0x202000;
}

void FlipFunctionBBBlack133() {
	configs[ 1]+=  486;
	configs[ 2]+=  486;
	configs[12]+=    6;
	configs[13]+=   18;
	configs[24]+=   25;
	configs[28]+=    6;
	configs[29]+=   18;
	bb.mover.u4s[0]^=0x202000;
}

void FlipFunctionBBWhite134() {
	configs[ 1]-=  486;
	configs[ 2]-=  486;
	configs[ 3]-=  486;
	configs[12]-=    6;
	configs[13]-=   18;
	configs[14]-=   18;
	configs[24]-=   79;
	configs[28]-=    6;
	configs[29]-=   18;
	configs[30]-=   54;
	bb.mover.u4s[0]^=0x20202000;
}

void FlipFunctionBBBlack134() {
	configs[ 1]+=  486;
	configs[ 2]+=  486;
	configs[ 3]+=  486;
	configs[12]+=    6;
	configs[13]+=   18;
	configs[14]+=   18;
	configs[24]+=   79;
	configs[28]+=    6;
	configs[29]+=   18;
	configs[30]+=   54;
	bb.mover.u4s[0]^=0x20202000;
}

void FlipFunctionBBWhite135() {
	configs[ 1]-=  486;
	configs[ 2]-=  486;
	configs[ 3]-=  486;
	configs[ 4]-=  486;
	configs[12]-=    6;
	configs[13]-=   18;
	configs[14]-=   18;
	configs[15]-=   18;
	configs[24]-=  241;
	configs[28]-=    6;
	configs[29]-=   18;
	configs[30]-=   54;
	configs[31]-=  162;
	bb.mover.u4s[0]^=0x20202000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBBlack135() {
	configs[ 1]+=  486;
	configs[ 2]+=  486;
	configs[ 3]+=  486;
	configs[ 4]+=  486;
	configs[12]+=    6;
	configs[13]+=   18;
	configs[14]+=   18;
	configs[15]+=   18;
	configs[24]+=  241;
	configs[28]+=    6;
	configs[29]+=   18;
	configs[30]+=   54;
	configs[31]+=  162;
	bb.mover.u4s[0]^=0x20202000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBWhite136() {
	configs[ 1]-=  486;
	configs[ 2]-=  486;
	configs[ 3]-=  486;
	configs[ 4]-=  486;
	configs[ 5]-=  486;
	configs[12]-=    6;
	configs[13]-=   18;
	configs[14]-=   18;
	configs[15]-=   18;
	configs[16]-=   18;
	configs[24]-=  727;
	configs[28]-=    6;
	configs[29]-=   18;
	configs[30]-=   54;
	configs[31]-=  162;
	configs[32]-=  486;
	bb.mover.u4s[0]^=0x20202000;
	bb.mover.u4s[1]^=0x2020;
}

void FlipFunctionBBBlack136() {
	configs[ 1]+=  486;
	configs[ 2]+=  486;
	configs[ 3]+=  486;
	configs[ 4]+=  486;
	configs[ 5]+=  486;
	configs[12]+=    6;
	configs[13]+=   18;
	configs[14]+=   18;
	configs[15]+=   18;
	configs[16]+=   18;
	configs[24]+=  727;
	configs[28]+=    6;
	configs[29]+=   18;
	configs[30]+=   54;
	configs[31]+=  162;
	configs[32]+=  486;
	bb.mover.u4s[0]^=0x20202000;
	bb.mover.u4s[1]^=0x2020;
}

void FlipFunctionBBWhite137() {
	configs[ 1]-=  486;
	configs[ 2]-=  486;
	configs[ 3]-=  486;
	configs[ 4]-=  486;
	configs[ 5]-=  486;
	configs[ 6]-=  486;
	configs[12]-=    6;
	configs[13]-=   18;
	configs[14]-=   18;
	configs[15]-=   18;
	configs[16]-=   18;
	configs[17]-=   18;
	configs[24]-= 2185;
	configs[28]-=    6;
	configs[29]-=   18;
	configs[30]-=   54;
	configs[31]-=  162;
	configs[32]-=  486;
	configs[33]-=  486;
	bb.mover.u4s[0]^=0x20202000;
	bb.mover.u4s[1]^=0x202020;
}

void FlipFunctionBBBlack137() {
	configs[ 1]+=  486;
	configs[ 2]+=  486;
	configs[ 3]+=  486;
	configs[ 4]+=  486;
	configs[ 5]+=  486;
	configs[ 6]+=  486;
	configs[12]+=    6;
	configs[13]+=   18;
	configs[14]+=   18;
	configs[15]+=   18;
	configs[16]+=   18;
	configs[17]+=   18;
	configs[24]+= 2185;
	configs[28]+=    6;
	configs[29]+=   18;
	configs[30]+=   54;
	configs[31]+=  162;
	configs[32]+=  486;
	configs[33]+=  486;
	bb.mover.u4s[0]^=0x20202000;
	bb.mover.u4s[1]^=0x202020;
}

void FlipFunctionBBWhite138() {
	configs[27]-=    1;
}

void FlipFunctionBBBlack138() {
	configs[27]+=    1;
}

void FlipFunctionBBWhite139() {
	configs[ 1]-= 1458;
	configs[13]-=    6;
	configs[25]-=    6;
	configs[27]-=    7;
	bb.mover.u4s[0]^=0x4000;
}

void FlipFunctionBBBlack139() {
	configs[ 1]+= 1458;
	configs[13]+=    6;
	configs[25]+=    6;
	configs[27]+=    7;
	bb.mover.u4s[0]^=0x4000;
}

void FlipFunctionBBWhite140() {
	configs[ 0]-=  729;
	bb.mover.u4s[0]^=0x40;
	bb.empty.u4s[0]^=0x40;
}

void FlipFunctionBBBlack140() {
	configs[ 0]+=  729;
	bb.mover.u4s[0]^=0x40;
	bb.empty.u4s[0]^=0x40;
}

void FlipFunctionBBWhite141() {
	configs[ 0]-= 1215;
	configs[11]-=    2;
	configs[24]-=    2;
	configs[27]-=    2;
	bb.mover.u4s[0]^=0x60;
	bb.empty.u4s[0]^=0x40;
}

void FlipFunctionBBBlack141() {
	configs[ 0]+= 1215;
	configs[11]+=    2;
	configs[24]+=    2;
	configs[27]+=    2;
	bb.mover.u4s[0]^=0x60;
	bb.empty.u4s[0]^=0x40;
}

void FlipFunctionBBWhite142() {
	configs[ 0]-= 1377;
	configs[10]-=    2;
	configs[11]-=    2;
	configs[23]-=    2;
	configs[24]-=    2;
	configs[27]-=    2;
	configs[28]-=    2;
	bb.mover.u4s[0]^=0x70;
	bb.empty.u4s[0]^=0x40;
}

void FlipFunctionBBBlack142() {
	configs[ 0]+= 1377;
	configs[10]+=    2;
	configs[11]+=    2;
	configs[23]+=    2;
	configs[24]+=    2;
	configs[27]+=    2;
	configs[28]+=    2;
	bb.mover.u4s[0]^=0x70;
	bb.empty.u4s[0]^=0x40;
}

void FlipFunctionBBWhite143() {
	configs[ 0]-= 1431;
	configs[ 9]-=    2;
	configs[10]-=    2;
	configs[11]-=    2;
	configs[22]-=    2;
	configs[23]-=    2;
	configs[24]-=    2;
	configs[27]-=    2;
	configs[28]-=    2;
	configs[29]-=    2;
	bb.mover.u4s[0]^=0x78;
	bb.empty.u4s[0]^=0x40;
}

void FlipFunctionBBBlack143() {
	configs[ 0]+= 1431;
	configs[ 9]+=    2;
	configs[10]+=    2;
	configs[11]+=    2;
	configs[22]+=    2;
	configs[23]+=    2;
	configs[24]+=    2;
	configs[27]+=    2;
	configs[28]+=    2;
	configs[29]+=    2;
	bb.mover.u4s[0]^=0x78;
	bb.empty.u4s[0]^=0x40;
}

void FlipFunctionBBWhite144() {
	configs[ 0]-= 1449;
	configs[ 8]-=    2;
	configs[ 9]-=    2;
	configs[10]-=    2;
	configs[11]-=    2;
	configs[21]-=    2;
	configs[22]-=    2;
	configs[23]-=    2;
	configs[24]-=    2;
	configs[27]-=    2;
	configs[28]-=    2;
	configs[29]-=    2;
	configs[30]-=    2;
	bb.mover.u4s[0]^=0x7C;
	bb.empty.u4s[0]^=0x40;
}

void FlipFunctionBBBlack144() {
	configs[ 0]+= 1449;
	configs[ 8]+=    2;
	configs[ 9]+=    2;
	configs[10]+=    2;
	configs[11]+=    2;
	configs[21]+=    2;
	configs[22]+=    2;
	configs[23]+=    2;
	configs[24]+=    2;
	configs[27]+=    2;
	configs[28]+=    2;
	configs[29]+=    2;
	configs[30]+=    2;
	bb.mover.u4s[0]^=0x7C;
	bb.empty.u4s[0]^=0x40;
}

void FlipFunctionBBWhite145() {
	configs[ 0]-= 1455;
	configs[ 8]-=    2;
	configs[ 9]-=    2;
	configs[10]-=    2;
	configs[11]-=    2;
	configs[20]-=    2;
	configs[21]-=    2;
	configs[22]-=    2;
	configs[23]-=    2;
	configs[24]-=    2;
	configs[27]-=    2;
	configs[28]-=    2;
	configs[29]-=    2;
	configs[30]-=    2;
	configs[31]-=    2;
	bb.mover.u4s[0]^=0x7E;
	bb.empty.u4s[0]^=0x40;
}

void FlipFunctionBBBlack145() {
	configs[ 0]+= 1455;
	configs[ 8]+=    2;
	configs[ 9]+=    2;
	configs[10]+=    2;
	configs[11]+=    2;
	configs[20]+=    2;
	configs[21]+=    2;
	configs[22]+=    2;
	configs[23]+=    2;
	configs[24]+=    2;
	configs[27]+=    2;
	configs[28]+=    2;
	configs[29]+=    2;
	configs[30]+=    2;
	configs[31]+=    2;
	bb.mover.u4s[0]^=0x7E;
	bb.empty.u4s[0]^=0x40;
}

void FlipFunctionBBWhite146() {
	configs[12]-=    1;
}

void FlipFunctionBBBlack146() {
	configs[12]+=    1;
}

void FlipFunctionBBWhite147() {
	configs[ 1]-=  486;
	configs[12]-=    7;
	configs[24]-=    6;
	configs[28]-=    6;
	bb.mover.u4s[0]^=0x2000;
}

void FlipFunctionBBBlack147() {
	configs[ 1]+=  486;
	configs[12]+=    7;
	configs[24]+=    6;
	configs[28]+=    6;
	bb.mover.u4s[0]^=0x2000;
}

void FlipFunctionBBWhite148() {
	configs[ 1]-=  486;
	configs[ 2]-=  162;
	configs[12]-=   25;
	configs[23]-=   18;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[30]-=   18;
	bb.mover.u4s[0]^=0x102000;
}

void FlipFunctionBBBlack148() {
	configs[ 1]+=  486;
	configs[ 2]+=  162;
	configs[12]+=   25;
	configs[23]+=   18;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[30]+=   18;
	bb.mover.u4s[0]^=0x102000;
}

void FlipFunctionBBWhite149() {
	configs[ 1]-=  486;
	configs[ 2]-=  162;
	configs[ 3]-=   54;
	configs[12]-=   79;
	configs[22]-=   54;
	configs[23]-=   18;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[30]-=   18;
	configs[32]-=   54;
	bb.mover.u4s[0]^=0x8102000;
}

void FlipFunctionBBBlack149() {
	configs[ 1]+=  486;
	configs[ 2]+=  162;
	configs[ 3]+=   54;
	configs[12]+=   79;
	configs[22]+=   54;
	configs[23]+=   18;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[30]+=   18;
	configs[32]+=   54;
	bb.mover.u4s[0]^=0x8102000;
}

void FlipFunctionBBWhite150() {
	configs[ 1]-=  486;
	configs[ 2]-=  162;
	configs[ 3]-=   54;
	configs[ 4]-=   18;
	configs[12]-=  241;
	configs[21]-=  162;
	configs[22]-=   54;
	configs[23]-=   18;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[30]-=   18;
	configs[32]-=   54;
	configs[34]-=   18;
	bb.mover.u4s[0]^=0x8102000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBBlack150() {
	configs[ 1]+=  486;
	configs[ 2]+=  162;
	configs[ 3]+=   54;
	configs[ 4]+=   18;
	configs[12]+=  241;
	configs[21]+=  162;
	configs[22]+=   54;
	configs[23]+=   18;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[30]+=   18;
	configs[32]+=   54;
	configs[34]+=   18;
	bb.mover.u4s[0]^=0x8102000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBWhite151() {
	configs[ 1]-=  486;
	configs[ 2]-=  162;
	configs[ 3]-=   54;
	configs[ 4]-=   18;
	configs[ 5]-=    6;
	configs[12]-=  727;
	configs[20]-=  486;
	configs[21]-=  162;
	configs[22]-=   54;
	configs[23]-=   18;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[30]-=   18;
	configs[32]-=   54;
	configs[34]-=   18;
	configs[36]-=    6;
	bb.mover.u4s[0]^=0x8102000;
	bb.mover.u4s[1]^=0x204;
}

void FlipFunctionBBBlack151() {
	configs[ 1]+=  486;
	configs[ 2]+=  162;
	configs[ 3]+=   54;
	configs[ 4]+=   18;
	configs[ 5]+=    6;
	configs[12]+=  727;
	configs[20]+=  486;
	configs[21]+=  162;
	configs[22]+=   54;
	configs[23]+=   18;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[30]+=   18;
	configs[32]+=   54;
	configs[34]+=   18;
	configs[36]+=    6;
	bb.mover.u4s[0]^=0x8102000;
	bb.mover.u4s[1]^=0x204;
}

void FlipFunctionBBWhite152() {
	configs[25]-=    1;
}

void FlipFunctionBBBlack152() {
	configs[25]+=    1;
}

void FlipFunctionBBWhite153() {
	configs[ 1]-= 1458;
	configs[13]-=    6;
	configs[25]-=    7;
	configs[27]-=    6;
	bb.mover.u4s[0]^=0x4000;
}

void FlipFunctionBBBlack153() {
	configs[ 1]+= 1458;
	configs[13]+=    6;
	configs[25]+=    7;
	configs[27]+=    6;
	bb.mover.u4s[0]^=0x4000;
}

void FlipFunctionBBWhite154() {
	configs[ 1]-= 1458;
	configs[ 2]-= 1458;
	configs[13]-=    6;
	configs[14]-=    6;
	configs[25]-=   25;
	configs[27]-=    6;
	configs[28]-=   18;
	bb.mover.u4s[0]^=0x404000;
}

void FlipFunctionBBBlack154() {
	configs[ 1]+= 1458;
	configs[ 2]+= 1458;
	configs[13]+=    6;
	configs[14]+=    6;
	configs[25]+=   25;
	configs[27]+=    6;
	configs[28]+=   18;
	bb.mover.u4s[0]^=0x404000;
}

void FlipFunctionBBWhite155() {
	configs[ 1]-= 1458;
	configs[ 2]-= 1458;
	configs[ 3]-= 1458;
	configs[13]-=    6;
	configs[14]-=    6;
	configs[15]-=    6;
	configs[25]-=   79;
	configs[27]-=    6;
	configs[28]-=   18;
	configs[29]-=   54;
	bb.mover.u4s[0]^=0x40404000;
}

void FlipFunctionBBBlack155() {
	configs[ 1]+= 1458;
	configs[ 2]+= 1458;
	configs[ 3]+= 1458;
	configs[13]+=    6;
	configs[14]+=    6;
	configs[15]+=    6;
	configs[25]+=   79;
	configs[27]+=    6;
	configs[28]+=   18;
	configs[29]+=   54;
	bb.mover.u4s[0]^=0x40404000;
}

void FlipFunctionBBWhite156() {
	configs[ 1]-= 1458;
	configs[ 2]-= 1458;
	configs[ 3]-= 1458;
	configs[ 4]-= 1458;
	configs[13]-=    6;
	configs[14]-=    6;
	configs[15]-=    6;
	configs[16]-=    6;
	configs[25]-=  241;
	configs[27]-=    6;
	configs[28]-=   18;
	configs[29]-=   54;
	configs[30]-=  162;
	bb.mover.u4s[0]^=0x40404000;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBBlack156() {
	configs[ 1]+= 1458;
	configs[ 2]+= 1458;
	configs[ 3]+= 1458;
	configs[ 4]+= 1458;
	configs[13]+=    6;
	configs[14]+=    6;
	configs[15]+=    6;
	configs[16]+=    6;
	configs[25]+=  241;
	configs[27]+=    6;
	configs[28]+=   18;
	configs[29]+=   54;
	configs[30]+=  162;
	bb.mover.u4s[0]^=0x40404000;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBWhite157() {
	configs[ 1]-= 1458;
	configs[ 2]-= 1458;
	configs[ 3]-= 1458;
	configs[ 4]-= 1458;
	configs[ 5]-= 1458;
	configs[13]-=    6;
	configs[14]-=    6;
	configs[15]-=    6;
	configs[16]-=    6;
	configs[17]-=    6;
	configs[25]-=  727;
	configs[27]-=    6;
	configs[28]-=   18;
	configs[29]-=   54;
	configs[30]-=  162;
	configs[31]-=  486;
	bb.mover.u4s[0]^=0x40404000;
	bb.mover.u4s[1]^=0x4040;
}

void FlipFunctionBBBlack157() {
	configs[ 1]+= 1458;
	configs[ 2]+= 1458;
	configs[ 3]+= 1458;
	configs[ 4]+= 1458;
	configs[ 5]+= 1458;
	configs[13]+=    6;
	configs[14]+=    6;
	configs[15]+=    6;
	configs[16]+=    6;
	configs[17]+=    6;
	configs[25]+=  727;
	configs[27]+=    6;
	configs[28]+=   18;
	configs[29]+=   54;
	configs[30]+=  162;
	configs[31]+=  486;
	bb.mover.u4s[0]^=0x40404000;
	bb.mover.u4s[1]^=0x4040;
}

void FlipFunctionBBWhite158() {
	configs[ 1]-= 1458;
	configs[ 2]-= 1458;
	configs[ 3]-= 1458;
	configs[ 4]-= 1458;
	configs[ 5]-= 1458;
	configs[ 6]-= 1458;
	configs[13]-=    6;
	configs[14]-=    6;
	configs[15]-=    6;
	configs[16]-=    6;
	configs[17]-=    6;
	configs[18]-=    6;
	configs[25]-= 2185;
	configs[27]-=    6;
	configs[28]-=   18;
	configs[29]-=   54;
	configs[30]-=  162;
	configs[31]-=  486;
	configs[32]-= 1458;
	bb.mover.u4s[0]^=0x40404000;
	bb.mover.u4s[1]^=0x404040;
}

void FlipFunctionBBBlack158() {
	configs[ 1]+= 1458;
	configs[ 2]+= 1458;
	configs[ 3]+= 1458;
	configs[ 4]+= 1458;
	configs[ 5]+= 1458;
	configs[ 6]+= 1458;
	configs[13]+=    6;
	configs[14]+=    6;
	configs[15]+=    6;
	configs[16]+=    6;
	configs[17]+=    6;
	configs[18]+=    6;
	configs[25]+= 2185;
	configs[27]+=    6;
	configs[28]+=   18;
	configs[29]+=   54;
	configs[30]+=  162;
	configs[31]+=  486;
	configs[32]+= 1458;
	bb.mover.u4s[0]^=0x40404000;
	bb.mover.u4s[1]^=0x404040;
}

void FlipFunctionBBWhite159() {
	configs[ 0]-= 2187;
	bb.mover.u4s[0]^=0x80;
	bb.empty.u4s[0]^=0x80;
}

void FlipFunctionBBBlack159() {
	configs[ 0]+= 2187;
	bb.mover.u4s[0]^=0x80;
	bb.empty.u4s[0]^=0x80;
}

void FlipFunctionBBWhite160() {
	configs[ 0]-= 3645;
	configs[12]-=    2;
	configs[25]-=    2;
	bb.mover.u4s[0]^=0xC0;
	bb.empty.u4s[0]^=0x80;
}

void FlipFunctionBBBlack160() {
	configs[ 0]+= 3645;
	configs[12]+=    2;
	configs[25]+=    2;
	bb.mover.u4s[0]^=0xC0;
	bb.empty.u4s[0]^=0x80;
}

void FlipFunctionBBWhite161() {
	configs[ 0]-= 4131;
	configs[11]-=    2;
	configs[12]-=    2;
	configs[24]-=    2;
	configs[25]-=    2;
	configs[27]-=    2;
	bb.mover.u4s[0]^=0xE0;
	bb.empty.u4s[0]^=0x80;
}

void FlipFunctionBBBlack161() {
	configs[ 0]+= 4131;
	configs[11]+=    2;
	configs[12]+=    2;
	configs[24]+=    2;
	configs[25]+=    2;
	configs[27]+=    2;
	bb.mover.u4s[0]^=0xE0;
	bb.empty.u4s[0]^=0x80;
}

void FlipFunctionBBWhite162() {
	configs[ 0]-= 4293;
	configs[10]-=    2;
	configs[11]-=    2;
	configs[12]-=    2;
	configs[23]-=    2;
	configs[24]-=    2;
	configs[25]-=    2;
	configs[27]-=    2;
	configs[28]-=    2;
	bb.mover.u4s[0]^=0xF0;
	bb.empty.u4s[0]^=0x80;
}

void FlipFunctionBBBlack162() {
	configs[ 0]+= 4293;
	configs[10]+=    2;
	configs[11]+=    2;
	configs[12]+=    2;
	configs[23]+=    2;
	configs[24]+=    2;
	configs[25]+=    2;
	configs[27]+=    2;
	configs[28]+=    2;
	bb.mover.u4s[0]^=0xF0;
	bb.empty.u4s[0]^=0x80;
}

void FlipFunctionBBWhite163() {
	configs[ 0]-= 4347;
	configs[ 9]-=    2;
	configs[10]-=    2;
	configs[11]-=    2;
	configs[12]-=    2;
	configs[22]-=    2;
	configs[23]-=    2;
	configs[24]-=    2;
	configs[25]-=    2;
	configs[27]-=    2;
	configs[28]-=    2;
	configs[29]-=    2;
	bb.mover.u4s[0]^=0xF8;
	bb.empty.u4s[0]^=0x80;
}

void FlipFunctionBBBlack163() {
	configs[ 0]+= 4347;
	configs[ 9]+=    2;
	configs[10]+=    2;
	configs[11]+=    2;
	configs[12]+=    2;
	configs[22]+=    2;
	configs[23]+=    2;
	configs[24]+=    2;
	configs[25]+=    2;
	configs[27]+=    2;
	configs[28]+=    2;
	configs[29]+=    2;
	bb.mover.u4s[0]^=0xF8;
	bb.empty.u4s[0]^=0x80;
}

void FlipFunctionBBWhite164() {
	configs[ 0]-= 4365;
	configs[ 8]-=    2;
	configs[ 9]-=    2;
	configs[10]-=    2;
	configs[11]-=    2;
	configs[12]-=    2;
	configs[21]-=    2;
	configs[22]-=    2;
	configs[23]-=    2;
	configs[24]-=    2;
	configs[25]-=    2;
	configs[27]-=    2;
	configs[28]-=    2;
	configs[29]-=    2;
	configs[30]-=    2;
	bb.mover.u4s[0]^=0xFC;
	bb.empty.u4s[0]^=0x80;
}

void FlipFunctionBBBlack164() {
	configs[ 0]+= 4365;
	configs[ 8]+=    2;
	configs[ 9]+=    2;
	configs[10]+=    2;
	configs[11]+=    2;
	configs[12]+=    2;
	configs[21]+=    2;
	configs[22]+=    2;
	configs[23]+=    2;
	configs[24]+=    2;
	configs[25]+=    2;
	configs[27]+=    2;
	configs[28]+=    2;
	configs[29]+=    2;
	configs[30]+=    2;
	bb.mover.u4s[0]^=0xFC;
	bb.empty.u4s[0]^=0x80;
}

void FlipFunctionBBWhite165() {
	configs[ 0]-= 4371;
	configs[ 8]-=    2;
	configs[ 9]-=    2;
	configs[10]-=    2;
	configs[11]-=    2;
	configs[12]-=    2;
	configs[20]-=    2;
	configs[21]-=    2;
	configs[22]-=    2;
	configs[23]-=    2;
	configs[24]-=    2;
	configs[25]-=    2;
	configs[27]-=    2;
	configs[28]-=    2;
	configs[29]-=    2;
	configs[30]-=    2;
	configs[31]-=    2;
	bb.mover.u4s[0]^=0xFE;
	bb.empty.u4s[0]^=0x80;
}

void FlipFunctionBBBlack165() {
	configs[ 0]+= 4371;
	configs[ 8]+=    2;
	configs[ 9]+=    2;
	configs[10]+=    2;
	configs[11]+=    2;
	configs[12]+=    2;
	configs[20]+=    2;
	configs[21]+=    2;
	configs[22]+=    2;
	configs[23]+=    2;
	configs[24]+=    2;
	configs[25]+=    2;
	configs[27]+=    2;
	configs[28]+=    2;
	configs[29]+=    2;
	configs[30]+=    2;
	configs[31]+=    2;
	bb.mover.u4s[0]^=0xFE;
	bb.empty.u4s[0]^=0x80;
}

void FlipFunctionBBWhite166() {
	configs[13]-=    1;
}

void FlipFunctionBBBlack166() {
	configs[13]+=    1;
}

void FlipFunctionBBWhite167() {
	configs[ 1]-= 1458;
	configs[13]-=    7;
	configs[25]-=    6;
	configs[27]-=    6;
	bb.mover.u4s[0]^=0x4000;
}

void FlipFunctionBBBlack167() {
	configs[ 1]+= 1458;
	configs[13]+=    7;
	configs[25]+=    6;
	configs[27]+=    6;
	bb.mover.u4s[0]^=0x4000;
}

void FlipFunctionBBWhite168() {
	configs[ 1]-= 1458;
	configs[ 2]-=  486;
	configs[13]-=   25;
	configs[24]-=   18;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[29]-=   18;
	bb.mover.u4s[0]^=0x204000;
}

void FlipFunctionBBBlack168() {
	configs[ 1]+= 1458;
	configs[ 2]+=  486;
	configs[13]+=   25;
	configs[24]+=   18;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[29]+=   18;
	bb.mover.u4s[0]^=0x204000;
}

void FlipFunctionBBWhite169() {
	configs[ 1]-= 1458;
	configs[ 2]-=  486;
	configs[ 3]-=  162;
	configs[13]-=   79;
	configs[23]-=   54;
	configs[24]-=   18;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[29]-=   18;
	configs[31]-=   54;
	bb.mover.u4s[0]^=0x10204000;
}

void FlipFunctionBBBlack169() {
	configs[ 1]+= 1458;
	configs[ 2]+=  486;
	configs[ 3]+=  162;
	configs[13]+=   79;
	configs[23]+=   54;
	configs[24]+=   18;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[29]+=   18;
	configs[31]+=   54;
	bb.mover.u4s[0]^=0x10204000;
}

void FlipFunctionBBWhite170() {
	configs[ 1]-= 1458;
	configs[ 2]-=  486;
	configs[ 3]-=  162;
	configs[ 4]-=   54;
	configs[13]-=  241;
	configs[22]-=  162;
	configs[23]-=   54;
	configs[24]-=   18;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[29]-=   18;
	configs[31]-=   54;
	configs[33]-=   54;
	bb.mover.u4s[0]^=0x10204000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBBlack170() {
	configs[ 1]+= 1458;
	configs[ 2]+=  486;
	configs[ 3]+=  162;
	configs[ 4]+=   54;
	configs[13]+=  241;
	configs[22]+=  162;
	configs[23]+=   54;
	configs[24]+=   18;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[29]+=   18;
	configs[31]+=   54;
	configs[33]+=   54;
	bb.mover.u4s[0]^=0x10204000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBWhite171() {
	configs[ 1]-= 1458;
	configs[ 2]-=  486;
	configs[ 3]-=  162;
	configs[ 4]-=   54;
	configs[ 5]-=   18;
	configs[13]-=  727;
	configs[21]-=  486;
	configs[22]-=  162;
	configs[23]-=   54;
	configs[24]-=   18;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[29]-=   18;
	configs[31]-=   54;
	configs[33]-=   54;
	configs[35]-=   18;
	bb.mover.u4s[0]^=0x10204000;
	bb.mover.u4s[1]^=0x408;
}

void FlipFunctionBBBlack171() {
	configs[ 1]+= 1458;
	configs[ 2]+=  486;
	configs[ 3]+=  162;
	configs[ 4]+=   54;
	configs[ 5]+=   18;
	configs[13]+=  727;
	configs[21]+=  486;
	configs[22]+=  162;
	configs[23]+=   54;
	configs[24]+=   18;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[29]+=   18;
	configs[31]+=   54;
	configs[33]+=   54;
	configs[35]+=   18;
	bb.mover.u4s[0]^=0x10204000;
	bb.mover.u4s[1]^=0x408;
}

void FlipFunctionBBWhite172() {
	configs[ 1]-= 1458;
	configs[ 2]-=  486;
	configs[ 3]-=  162;
	configs[ 4]-=   54;
	configs[ 5]-=   18;
	configs[ 6]-=    6;
	configs[13]-= 2185;
	configs[20]-= 1458;
	configs[21]-=  486;
	configs[22]-=  162;
	configs[23]-=   54;
	configs[24]-=   18;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[29]-=   18;
	configs[31]-=   54;
	configs[33]-=   54;
	configs[35]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[0]^=0x10204000;
	bb.mover.u4s[1]^=0x20408;
}

void FlipFunctionBBBlack172() {
	configs[ 1]+= 1458;
	configs[ 2]+=  486;
	configs[ 3]+=  162;
	configs[ 4]+=   54;
	configs[ 5]+=   18;
	configs[ 6]+=    6;
	configs[13]+= 2185;
	configs[20]+= 1458;
	configs[21]+=  486;
	configs[22]+=  162;
	configs[23]+=   54;
	configs[24]+=   18;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[29]+=   18;
	configs[31]+=   54;
	configs[33]+=   54;
	configs[35]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[0]^=0x10204000;
	bb.mover.u4s[1]^=0x20408;
}

void FlipFunctionBBWhite173() {
	configs[26]-=    1;
}

void FlipFunctionBBBlack173() {
	configs[26]+=    1;
}

void FlipFunctionBBWhite174() {
	configs[ 1]-= 4374;
	configs[14]-=    2;
	configs[26]-=    7;
	bb.mover.u4s[0]^=0x8000;
}

void FlipFunctionBBBlack174() {
	configs[ 1]+= 4374;
	configs[14]+=    2;
	configs[26]+=    7;
	bb.mover.u4s[0]^=0x8000;
}

void FlipFunctionBBWhite175() {
	configs[ 1]-= 4374;
	configs[ 2]-= 4374;
	configs[14]-=    2;
	configs[15]-=    2;
	configs[26]-=   25;
	configs[27]-=   18;
	bb.mover.u4s[0]^=0x808000;
}

void FlipFunctionBBBlack175() {
	configs[ 1]+= 4374;
	configs[ 2]+= 4374;
	configs[14]+=    2;
	configs[15]+=    2;
	configs[26]+=   25;
	configs[27]+=   18;
	bb.mover.u4s[0]^=0x808000;
}

void FlipFunctionBBWhite176() {
	configs[ 1]-= 4374;
	configs[ 2]-= 4374;
	configs[ 3]-= 4374;
	configs[14]-=    2;
	configs[15]-=    2;
	configs[16]-=    2;
	configs[26]-=   79;
	configs[27]-=   18;
	configs[28]-=   54;
	bb.mover.u4s[0]^=0x80808000;
}

void FlipFunctionBBBlack176() {
	configs[ 1]+= 4374;
	configs[ 2]+= 4374;
	configs[ 3]+= 4374;
	configs[14]+=    2;
	configs[15]+=    2;
	configs[16]+=    2;
	configs[26]+=   79;
	configs[27]+=   18;
	configs[28]+=   54;
	bb.mover.u4s[0]^=0x80808000;
}

void FlipFunctionBBWhite177() {
	configs[ 1]-= 4374;
	configs[ 2]-= 4374;
	configs[ 3]-= 4374;
	configs[ 4]-= 4374;
	configs[14]-=    2;
	configs[15]-=    2;
	configs[16]-=    2;
	configs[17]-=    2;
	configs[26]-=  241;
	configs[27]-=   18;
	configs[28]-=   54;
	configs[29]-=  162;
	bb.mover.u4s[0]^=0x80808000;
	bb.mover.u4s[1]^=0x80;
}

void FlipFunctionBBBlack177() {
	configs[ 1]+= 4374;
	configs[ 2]+= 4374;
	configs[ 3]+= 4374;
	configs[ 4]+= 4374;
	configs[14]+=    2;
	configs[15]+=    2;
	configs[16]+=    2;
	configs[17]+=    2;
	configs[26]+=  241;
	configs[27]+=   18;
	configs[28]+=   54;
	configs[29]+=  162;
	bb.mover.u4s[0]^=0x80808000;
	bb.mover.u4s[1]^=0x80;
}

void FlipFunctionBBWhite178() {
	configs[ 1]-= 4374;
	configs[ 2]-= 4374;
	configs[ 3]-= 4374;
	configs[ 4]-= 4374;
	configs[ 5]-= 4374;
	configs[14]-=    2;
	configs[15]-=    2;
	configs[16]-=    2;
	configs[17]-=    2;
	configs[18]-=    2;
	configs[26]-=  727;
	configs[27]-=   18;
	configs[28]-=   54;
	configs[29]-=  162;
	configs[30]-=  486;
	bb.mover.u4s[0]^=0x80808000;
	bb.mover.u4s[1]^=0x8080;
}

void FlipFunctionBBBlack178() {
	configs[ 1]+= 4374;
	configs[ 2]+= 4374;
	configs[ 3]+= 4374;
	configs[ 4]+= 4374;
	configs[ 5]+= 4374;
	configs[14]+=    2;
	configs[15]+=    2;
	configs[16]+=    2;
	configs[17]+=    2;
	configs[18]+=    2;
	configs[26]+=  727;
	configs[27]+=   18;
	configs[28]+=   54;
	configs[29]+=  162;
	configs[30]+=  486;
	bb.mover.u4s[0]^=0x80808000;
	bb.mover.u4s[1]^=0x8080;
}

void FlipFunctionBBWhite179() {
	configs[ 1]-= 4374;
	configs[ 2]-= 4374;
	configs[ 3]-= 4374;
	configs[ 4]-= 4374;
	configs[ 5]-= 4374;
	configs[ 6]-= 4374;
	configs[14]-=    2;
	configs[15]-=    2;
	configs[16]-=    2;
	configs[17]-=    2;
	configs[18]-=    2;
	configs[26]-= 2185;
	configs[27]-=   18;
	configs[28]-=   54;
	configs[29]-=  162;
	configs[30]-=  486;
	configs[31]-= 1458;
	bb.mover.u4s[0]^=0x80808000;
	bb.mover.u4s[1]^=0x808080;
}

void FlipFunctionBBBlack179() {
	configs[ 1]+= 4374;
	configs[ 2]+= 4374;
	configs[ 3]+= 4374;
	configs[ 4]+= 4374;
	configs[ 5]+= 4374;
	configs[ 6]+= 4374;
	configs[14]+=    2;
	configs[15]+=    2;
	configs[16]+=    2;
	configs[17]+=    2;
	configs[18]+=    2;
	configs[26]+= 2185;
	configs[27]+=   18;
	configs[28]+=   54;
	configs[29]+=  162;
	configs[30]+=  486;
	configs[31]+= 1458;
	bb.mover.u4s[0]^=0x80808000;
	bb.mover.u4s[1]^=0x808080;
}

void FlipFunctionBBWhite180() {
	configs[ 1]-=    1;
	bb.mover.u4s[0]^=0x100;
	bb.empty.u4s[0]^=0x100;
}

void FlipFunctionBBBlack180() {
	configs[ 1]+=    1;
	bb.mover.u4s[0]^=0x100;
	bb.empty.u4s[0]^=0x100;
}

void FlipFunctionBBWhite181() {
	configs[ 1]-=    7;
	configs[ 8]-=    6;
	configs[20]-=    6;
	configs[32]-=    6;
	bb.mover.u4s[0]^=0x300;
	bb.empty.u4s[0]^=0x100;
}

void FlipFunctionBBBlack181() {
	configs[ 1]+=    7;
	configs[ 8]+=    6;
	configs[20]+=    6;
	configs[32]+=    6;
	bb.mover.u4s[0]^=0x300;
	bb.empty.u4s[0]^=0x100;
}

void FlipFunctionBBWhite182() {
	configs[ 1]-=   25;
	configs[ 8]-=    6;
	configs[ 9]-=    6;
	configs[20]-=    6;
	configs[21]-=    6;
	configs[31]-=    6;
	configs[32]-=    6;
	bb.mover.u4s[0]^=0x700;
	bb.empty.u4s[0]^=0x100;
}

void FlipFunctionBBBlack182() {
	configs[ 1]+=   25;
	configs[ 8]+=    6;
	configs[ 9]+=    6;
	configs[20]+=    6;
	configs[21]+=    6;
	configs[31]+=    6;
	configs[32]+=    6;
	bb.mover.u4s[0]^=0x700;
	bb.empty.u4s[0]^=0x100;
}

void FlipFunctionBBWhite183() {
	configs[ 1]-=   79;
	configs[ 8]-=    6;
	configs[ 9]-=    6;
	configs[10]-=    6;
	configs[20]-=    6;
	configs[21]-=    6;
	configs[22]-=    6;
	configs[30]-=    6;
	configs[31]-=    6;
	configs[32]-=    6;
	bb.mover.u4s[0]^=0xF00;
	bb.empty.u4s[0]^=0x100;
}

void FlipFunctionBBBlack183() {
	configs[ 1]+=   79;
	configs[ 8]+=    6;
	configs[ 9]+=    6;
	configs[10]+=    6;
	configs[20]+=    6;
	configs[21]+=    6;
	configs[22]+=    6;
	configs[30]+=    6;
	configs[31]+=    6;
	configs[32]+=    6;
	bb.mover.u4s[0]^=0xF00;
	bb.empty.u4s[0]^=0x100;
}

void FlipFunctionBBWhite184() {
	configs[ 1]-=  241;
	configs[ 8]-=    6;
	configs[ 9]-=    6;
	configs[10]-=    6;
	configs[11]-=    6;
	configs[20]-=    6;
	configs[21]-=    6;
	configs[22]-=    6;
	configs[23]-=    6;
	configs[29]-=    6;
	configs[30]-=    6;
	configs[31]-=    6;
	configs[32]-=    6;
	bb.mover.u4s[0]^=0x1F00;
	bb.empty.u4s[0]^=0x100;
}

void FlipFunctionBBBlack184() {
	configs[ 1]+=  241;
	configs[ 8]+=    6;
	configs[ 9]+=    6;
	configs[10]+=    6;
	configs[11]+=    6;
	configs[20]+=    6;
	configs[21]+=    6;
	configs[22]+=    6;
	configs[23]+=    6;
	configs[29]+=    6;
	configs[30]+=    6;
	configs[31]+=    6;
	configs[32]+=    6;
	bb.mover.u4s[0]^=0x1F00;
	bb.empty.u4s[0]^=0x100;
}

void FlipFunctionBBWhite185() {
	configs[ 1]-=  727;
	configs[ 8]-=    6;
	configs[ 9]-=    6;
	configs[10]-=    6;
	configs[11]-=    6;
	configs[12]-=    6;
	configs[20]-=    6;
	configs[21]-=    6;
	configs[22]-=    6;
	configs[23]-=    6;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[29]-=    6;
	configs[30]-=    6;
	configs[31]-=    6;
	configs[32]-=    6;
	bb.mover.u4s[0]^=0x3F00;
	bb.empty.u4s[0]^=0x100;
}

void FlipFunctionBBBlack185() {
	configs[ 1]+=  727;
	configs[ 8]+=    6;
	configs[ 9]+=    6;
	configs[10]+=    6;
	configs[11]+=    6;
	configs[12]+=    6;
	configs[20]+=    6;
	configs[21]+=    6;
	configs[22]+=    6;
	configs[23]+=    6;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[29]+=    6;
	configs[30]+=    6;
	configs[31]+=    6;
	configs[32]+=    6;
	bb.mover.u4s[0]^=0x3F00;
	bb.empty.u4s[0]^=0x100;
}

void FlipFunctionBBWhite186() {
	configs[ 1]-= 2185;
	configs[ 8]-=    6;
	configs[ 9]-=    6;
	configs[10]-=    6;
	configs[11]-=    6;
	configs[12]-=    6;
	configs[13]-=    6;
	configs[20]-=    6;
	configs[21]-=    6;
	configs[22]-=    6;
	configs[23]-=    6;
	configs[24]-=    6;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[28]-=    6;
	configs[29]-=    6;
	configs[30]-=    6;
	configs[31]-=    6;
	configs[32]-=    6;
	bb.mover.u4s[0]^=0x7F00;
	bb.empty.u4s[0]^=0x100;
}

void FlipFunctionBBBlack186() {
	configs[ 1]+= 2185;
	configs[ 8]+=    6;
	configs[ 9]+=    6;
	configs[10]+=    6;
	configs[11]+=    6;
	configs[12]+=    6;
	configs[13]+=    6;
	configs[20]+=    6;
	configs[21]+=    6;
	configs[22]+=    6;
	configs[23]+=    6;
	configs[24]+=    6;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[28]+=    6;
	configs[29]+=    6;
	configs[30]+=    6;
	configs[31]+=    6;
	configs[32]+=    6;
	bb.mover.u4s[0]^=0x7F00;
	bb.empty.u4s[0]^=0x100;
}

void FlipFunctionBBWhite187() {
	configs[19]-=    3;
}

void FlipFunctionBBBlack187() {
	configs[19]+=    3;
}

void FlipFunctionBBWhite188() {
	configs[ 2]-=    2;
	configs[ 8]-=   18;
	configs[19]-=   21;
	configs[34]-=    2;
	bb.mover.u4s[0]^=0x10000;
}

void FlipFunctionBBBlack188() {
	configs[ 2]+=    2;
	configs[ 8]+=   18;
	configs[19]+=   21;
	configs[34]+=    2;
	bb.mover.u4s[0]^=0x10000;
}

void FlipFunctionBBWhite189() {
	configs[ 2]-=    2;
	configs[ 3]-=    2;
	configs[ 8]-=   18;
	configs[ 9]-=   54;
	configs[19]-=   75;
	configs[34]-=    2;
	configs[35]-=    2;
	bb.mover.u4s[0]^=0x1010000;
}

void FlipFunctionBBBlack189() {
	configs[ 2]+=    2;
	configs[ 3]+=    2;
	configs[ 8]+=   18;
	configs[ 9]+=   54;
	configs[19]+=   75;
	configs[34]+=    2;
	configs[35]+=    2;
	bb.mover.u4s[0]^=0x1010000;
}

void FlipFunctionBBWhite190() {
	configs[ 2]-=    2;
	configs[ 3]-=    2;
	configs[ 4]-=    2;
	configs[ 8]-=   18;
	configs[ 9]-=   54;
	configs[10]-=  162;
	configs[19]-=  237;
	configs[34]-=    2;
	configs[35]-=    2;
	configs[36]-=    2;
	bb.mover.u4s[0]^=0x1010000;
	bb.mover.u4s[1]^=0x1;
}

void FlipFunctionBBBlack190() {
	configs[ 2]+=    2;
	configs[ 3]+=    2;
	configs[ 4]+=    2;
	configs[ 8]+=   18;
	configs[ 9]+=   54;
	configs[10]+=  162;
	configs[19]+=  237;
	configs[34]+=    2;
	configs[35]+=    2;
	configs[36]+=    2;
	bb.mover.u4s[0]^=0x1010000;
	bb.mover.u4s[1]^=0x1;
}

void FlipFunctionBBWhite191() {
	configs[ 2]-=    2;
	configs[ 3]-=    2;
	configs[ 4]-=    2;
	configs[ 5]-=    2;
	configs[ 8]-=   18;
	configs[ 9]-=   54;
	configs[10]-=  162;
	configs[11]-=  486;
	configs[19]-=  723;
	configs[34]-=    2;
	configs[35]-=    2;
	configs[36]-=    2;
	configs[37]-=    2;
	bb.mover.u4s[0]^=0x1010000;
	bb.mover.u4s[1]^=0x101;
}

void FlipFunctionBBBlack191() {
	configs[ 2]+=    2;
	configs[ 3]+=    2;
	configs[ 4]+=    2;
	configs[ 5]+=    2;
	configs[ 8]+=   18;
	configs[ 9]+=   54;
	configs[10]+=  162;
	configs[11]+=  486;
	configs[19]+=  723;
	configs[34]+=    2;
	configs[35]+=    2;
	configs[36]+=    2;
	configs[37]+=    2;
	bb.mover.u4s[0]^=0x1010000;
	bb.mover.u4s[1]^=0x101;
}

void FlipFunctionBBWhite192() {
	configs[ 2]-=    2;
	configs[ 3]-=    2;
	configs[ 4]-=    2;
	configs[ 5]-=    2;
	configs[ 6]-=    2;
	configs[ 8]-=   18;
	configs[ 9]-=   54;
	configs[10]-=  162;
	configs[11]-=  486;
	configs[12]-= 1458;
	configs[19]-= 2181;
	configs[34]-=    2;
	configs[35]-=    2;
	configs[36]-=    2;
	configs[37]-=    2;
	bb.mover.u4s[0]^=0x1010000;
	bb.mover.u4s[1]^=0x10101;
}

void FlipFunctionBBBlack192() {
	configs[ 2]+=    2;
	configs[ 3]+=    2;
	configs[ 4]+=    2;
	configs[ 5]+=    2;
	configs[ 6]+=    2;
	configs[ 8]+=   18;
	configs[ 9]+=   54;
	configs[10]+=  162;
	configs[11]+=  486;
	configs[12]+= 1458;
	configs[19]+= 2181;
	configs[34]+=    2;
	configs[35]+=    2;
	configs[36]+=    2;
	configs[37]+=    2;
	bb.mover.u4s[0]^=0x1010000;
	bb.mover.u4s[1]^=0x10101;
}

void FlipFunctionBBWhite193() {
	configs[33]-=    1;
}

void FlipFunctionBBBlack193() {
	configs[33]+=    1;
}

void FlipFunctionBBWhite194() {
	configs[ 2]-=    6;
	configs[ 9]-=   18;
	configs[20]-=   18;
	configs[33]-=    7;
	bb.mover.u4s[0]^=0x20000;
}

void FlipFunctionBBBlack194() {
	configs[ 2]+=    6;
	configs[ 9]+=   18;
	configs[20]+=   18;
	configs[33]+=    7;
	bb.mover.u4s[0]^=0x20000;
}

void FlipFunctionBBWhite195() {
	configs[ 2]-=    6;
	configs[ 3]-=   18;
	configs[ 9]-=   18;
	configs[11]-=   54;
	configs[20]-=   18;
	configs[21]-=   54;
	configs[33]-=   25;
	bb.mover.u4s[0]^=0x4020000;
}

void FlipFunctionBBBlack195() {
	configs[ 2]+=    6;
	configs[ 3]+=   18;
	configs[ 9]+=   18;
	configs[11]+=   54;
	configs[20]+=   18;
	configs[21]+=   54;
	configs[33]+=   25;
	bb.mover.u4s[0]^=0x4020000;
}

void FlipFunctionBBWhite196() {
	configs[ 2]-=    6;
	configs[ 3]-=   18;
	configs[ 4]-=   54;
	configs[ 9]-=   18;
	configs[11]-=   54;
	configs[13]-=  162;
	configs[20]-=   18;
	configs[21]-=   54;
	configs[22]-=  162;
	configs[33]-=   79;
	bb.mover.u4s[0]^=0x4020000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBBlack196() {
	configs[ 2]+=    6;
	configs[ 3]+=   18;
	configs[ 4]+=   54;
	configs[ 9]+=   18;
	configs[11]+=   54;
	configs[13]+=  162;
	configs[20]+=   18;
	configs[21]+=   54;
	configs[22]+=  162;
	configs[33]+=   79;
	bb.mover.u4s[0]^=0x4020000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBWhite197() {
	configs[ 2]-=    6;
	configs[ 3]-=   18;
	configs[ 4]-=   54;
	configs[ 5]-=  162;
	configs[ 9]-=   18;
	configs[11]-=   54;
	configs[13]-=  162;
	configs[15]-=   54;
	configs[20]-=   18;
	configs[21]-=   54;
	configs[22]-=  162;
	configs[23]-=  486;
	configs[33]-=  241;
	bb.mover.u4s[0]^=0x4020000;
	bb.mover.u4s[1]^=0x1008;
}

void FlipFunctionBBBlack197() {
	configs[ 2]+=    6;
	configs[ 3]+=   18;
	configs[ 4]+=   54;
	configs[ 5]+=  162;
	configs[ 9]+=   18;
	configs[11]+=   54;
	configs[13]+=  162;
	configs[15]+=   54;
	configs[20]+=   18;
	configs[21]+=   54;
	configs[22]+=  162;
	configs[23]+=  486;
	configs[33]+=  241;
	bb.mover.u4s[0]^=0x4020000;
	bb.mover.u4s[1]^=0x1008;
}

void FlipFunctionBBWhite198() {
	configs[ 2]-=    6;
	configs[ 3]-=   18;
	configs[ 4]-=   54;
	configs[ 5]-=  162;
	configs[ 6]-=  486;
	configs[ 9]-=   18;
	configs[11]-=   54;
	configs[13]-=  162;
	configs[15]-=   54;
	configs[17]-=   18;
	configs[20]-=   18;
	configs[21]-=   54;
	configs[22]-=  162;
	configs[23]-=  486;
	configs[24]-= 1458;
	configs[33]-=  727;
	bb.mover.u4s[0]^=0x4020000;
	bb.mover.u4s[1]^=0x201008;
}

void FlipFunctionBBBlack198() {
	configs[ 2]+=    6;
	configs[ 3]+=   18;
	configs[ 4]+=   54;
	configs[ 5]+=  162;
	configs[ 6]+=  486;
	configs[ 9]+=   18;
	configs[11]+=   54;
	configs[13]+=  162;
	configs[15]+=   54;
	configs[17]+=   18;
	configs[20]+=   18;
	configs[21]+=   54;
	configs[22]+=  162;
	configs[23]+=  486;
	configs[24]+= 1458;
	configs[33]+=  727;
	bb.mover.u4s[0]^=0x4020000;
	bb.mover.u4s[1]^=0x201008;
}

void FlipFunctionBBWhite199() {
	configs[ 1]-=    3;
	bb.mover.u4s[0]^=0x200;
	bb.empty.u4s[0]^=0x200;
}

void FlipFunctionBBBlack199() {
	configs[ 1]+=    3;
	bb.mover.u4s[0]^=0x200;
	bb.empty.u4s[0]^=0x200;
}

void FlipFunctionBBWhite200() {
	configs[ 1]-=   21;
	configs[ 9]-=    6;
	configs[21]-=    6;
	configs[31]-=    6;
	bb.mover.u4s[0]^=0x600;
	bb.empty.u4s[0]^=0x200;
}

void FlipFunctionBBBlack200() {
	configs[ 1]+=   21;
	configs[ 9]+=    6;
	configs[21]+=    6;
	configs[31]+=    6;
	bb.mover.u4s[0]^=0x600;
	bb.empty.u4s[0]^=0x200;
}

void FlipFunctionBBWhite201() {
	configs[ 1]-=   75;
	configs[ 9]-=    6;
	configs[10]-=    6;
	configs[21]-=    6;
	configs[22]-=    6;
	configs[30]-=    6;
	configs[31]-=    6;
	bb.mover.u4s[0]^=0xE00;
	bb.empty.u4s[0]^=0x200;
}

void FlipFunctionBBBlack201() {
	configs[ 1]+=   75;
	configs[ 9]+=    6;
	configs[10]+=    6;
	configs[21]+=    6;
	configs[22]+=    6;
	configs[30]+=    6;
	configs[31]+=    6;
	bb.mover.u4s[0]^=0xE00;
	bb.empty.u4s[0]^=0x200;
}

void FlipFunctionBBWhite202() {
	configs[ 1]-=  237;
	configs[ 9]-=    6;
	configs[10]-=    6;
	configs[11]-=    6;
	configs[21]-=    6;
	configs[22]-=    6;
	configs[23]-=    6;
	configs[29]-=    6;
	configs[30]-=    6;
	configs[31]-=    6;
	bb.mover.u4s[0]^=0x1E00;
	bb.empty.u4s[0]^=0x200;
}

void FlipFunctionBBBlack202() {
	configs[ 1]+=  237;
	configs[ 9]+=    6;
	configs[10]+=    6;
	configs[11]+=    6;
	configs[21]+=    6;
	configs[22]+=    6;
	configs[23]+=    6;
	configs[29]+=    6;
	configs[30]+=    6;
	configs[31]+=    6;
	bb.mover.u4s[0]^=0x1E00;
	bb.empty.u4s[0]^=0x200;
}

void FlipFunctionBBWhite203() {
	configs[ 1]-=  723;
	configs[ 9]-=    6;
	configs[10]-=    6;
	configs[11]-=    6;
	configs[12]-=    6;
	configs[21]-=    6;
	configs[22]-=    6;
	configs[23]-=    6;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[29]-=    6;
	configs[30]-=    6;
	configs[31]-=    6;
	bb.mover.u4s[0]^=0x3E00;
	bb.empty.u4s[0]^=0x200;
}

void FlipFunctionBBBlack203() {
	configs[ 1]+=  723;
	configs[ 9]+=    6;
	configs[10]+=    6;
	configs[11]+=    6;
	configs[12]+=    6;
	configs[21]+=    6;
	configs[22]+=    6;
	configs[23]+=    6;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[29]+=    6;
	configs[30]+=    6;
	configs[31]+=    6;
	bb.mover.u4s[0]^=0x3E00;
	bb.empty.u4s[0]^=0x200;
}

void FlipFunctionBBWhite204() {
	configs[ 1]-= 2181;
	configs[ 9]-=    6;
	configs[10]-=    6;
	configs[11]-=    6;
	configs[12]-=    6;
	configs[13]-=    6;
	configs[21]-=    6;
	configs[22]-=    6;
	configs[23]-=    6;
	configs[24]-=    6;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[28]-=    6;
	configs[29]-=    6;
	configs[30]-=    6;
	configs[31]-=    6;
	bb.mover.u4s[0]^=0x7E00;
	bb.empty.u4s[0]^=0x200;
}

void FlipFunctionBBBlack204() {
	configs[ 1]+= 2181;
	configs[ 9]+=    6;
	configs[10]+=    6;
	configs[11]+=    6;
	configs[12]+=    6;
	configs[13]+=    6;
	configs[21]+=    6;
	configs[22]+=    6;
	configs[23]+=    6;
	configs[24]+=    6;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[28]+=    6;
	configs[29]+=    6;
	configs[30]+=    6;
	configs[31]+=    6;
	bb.mover.u4s[0]^=0x7E00;
	bb.empty.u4s[0]^=0x200;
}

void FlipFunctionBBWhite205() {
	configs[ 8]-=    3;
}

void FlipFunctionBBBlack205() {
	configs[ 8]+=    3;
}

void FlipFunctionBBWhite206() {
	configs[20]-=    3;
}

void FlipFunctionBBBlack206() {
	configs[20]+=    3;
}

void FlipFunctionBBWhite207() {
	configs[ 2]-=    6;
	configs[ 9]-=   18;
	configs[20]-=   21;
	configs[33]-=    6;
	bb.mover.u4s[0]^=0x20000;
}

void FlipFunctionBBBlack207() {
	configs[ 2]+=    6;
	configs[ 9]+=   18;
	configs[20]+=   21;
	configs[33]+=    6;
	bb.mover.u4s[0]^=0x20000;
}

void FlipFunctionBBWhite208() {
	configs[ 2]-=    6;
	configs[ 3]-=    6;
	configs[ 9]-=   18;
	configs[10]-=   54;
	configs[20]-=   75;
	configs[33]-=    6;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x2020000;
}

void FlipFunctionBBBlack208() {
	configs[ 2]+=    6;
	configs[ 3]+=    6;
	configs[ 9]+=   18;
	configs[10]+=   54;
	configs[20]+=   75;
	configs[33]+=    6;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x2020000;
}

void FlipFunctionBBWhite209() {
	configs[ 2]-=    6;
	configs[ 3]-=    6;
	configs[ 4]-=    6;
	configs[ 9]-=   18;
	configs[10]-=   54;
	configs[11]-=  162;
	configs[20]-=  237;
	configs[33]-=    6;
	configs[34]-=    6;
	configs[35]-=    6;
	bb.mover.u4s[0]^=0x2020000;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBBlack209() {
	configs[ 2]+=    6;
	configs[ 3]+=    6;
	configs[ 4]+=    6;
	configs[ 9]+=   18;
	configs[10]+=   54;
	configs[11]+=  162;
	configs[20]+=  237;
	configs[33]+=    6;
	configs[34]+=    6;
	configs[35]+=    6;
	bb.mover.u4s[0]^=0x2020000;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBWhite210() {
	configs[ 2]-=    6;
	configs[ 3]-=    6;
	configs[ 4]-=    6;
	configs[ 5]-=    6;
	configs[ 9]-=   18;
	configs[10]-=   54;
	configs[11]-=  162;
	configs[12]-=  486;
	configs[20]-=  723;
	configs[33]-=    6;
	configs[34]-=    6;
	configs[35]-=    6;
	configs[36]-=    6;
	bb.mover.u4s[0]^=0x2020000;
	bb.mover.u4s[1]^=0x202;
}

void FlipFunctionBBBlack210() {
	configs[ 2]+=    6;
	configs[ 3]+=    6;
	configs[ 4]+=    6;
	configs[ 5]+=    6;
	configs[ 9]+=   18;
	configs[10]+=   54;
	configs[11]+=  162;
	configs[12]+=  486;
	configs[20]+=  723;
	configs[33]+=    6;
	configs[34]+=    6;
	configs[35]+=    6;
	configs[36]+=    6;
	bb.mover.u4s[0]^=0x2020000;
	bb.mover.u4s[1]^=0x202;
}

void FlipFunctionBBWhite211() {
	configs[ 2]-=    6;
	configs[ 3]-=    6;
	configs[ 4]-=    6;
	configs[ 5]-=    6;
	configs[ 6]-=    6;
	configs[ 9]-=   18;
	configs[10]-=   54;
	configs[11]-=  162;
	configs[12]-=  486;
	configs[13]-= 1458;
	configs[20]-= 2181;
	configs[33]-=    6;
	configs[34]-=    6;
	configs[35]-=    6;
	configs[36]-=    6;
	configs[37]-=    6;
	bb.mover.u4s[0]^=0x2020000;
	bb.mover.u4s[1]^=0x20202;
}

void FlipFunctionBBBlack211() {
	configs[ 2]+=    6;
	configs[ 3]+=    6;
	configs[ 4]+=    6;
	configs[ 5]+=    6;
	configs[ 6]+=    6;
	configs[ 9]+=   18;
	configs[10]+=   54;
	configs[11]+=  162;
	configs[12]+=  486;
	configs[13]+= 1458;
	configs[20]+= 2181;
	configs[33]+=    6;
	configs[34]+=    6;
	configs[35]+=    6;
	configs[36]+=    6;
	configs[37]+=    6;
	bb.mover.u4s[0]^=0x2020000;
	bb.mover.u4s[1]^=0x20202;
}

void FlipFunctionBBWhite212() {
	configs[32]-=    3;
}

void FlipFunctionBBBlack212() {
	configs[32]+=    3;
}

void FlipFunctionBBWhite213() {
	configs[ 2]-=   18;
	configs[10]-=   18;
	configs[21]-=   18;
	configs[32]-=   21;
	bb.mover.u4s[0]^=0x40000;
}

void FlipFunctionBBBlack213() {
	configs[ 2]+=   18;
	configs[10]+=   18;
	configs[21]+=   18;
	configs[32]+=   21;
	bb.mover.u4s[0]^=0x40000;
}

void FlipFunctionBBWhite214() {
	configs[ 2]-=   18;
	configs[ 3]-=   54;
	configs[10]-=   18;
	configs[12]-=   54;
	configs[21]-=   18;
	configs[22]-=   54;
	configs[32]-=   75;
	bb.mover.u4s[0]^=0x8040000;
}

void FlipFunctionBBBlack214() {
	configs[ 2]+=   18;
	configs[ 3]+=   54;
	configs[10]+=   18;
	configs[12]+=   54;
	configs[21]+=   18;
	configs[22]+=   54;
	configs[32]+=   75;
	bb.mover.u4s[0]^=0x8040000;
}

void FlipFunctionBBWhite215() {
	configs[ 2]-=   18;
	configs[ 3]-=   54;
	configs[ 4]-=  162;
	configs[10]-=   18;
	configs[12]-=   54;
	configs[14]-=   54;
	configs[21]-=   18;
	configs[22]-=   54;
	configs[23]-=  162;
	configs[32]-=  237;
	bb.mover.u4s[0]^=0x8040000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBBlack215() {
	configs[ 2]+=   18;
	configs[ 3]+=   54;
	configs[ 4]+=  162;
	configs[10]+=   18;
	configs[12]+=   54;
	configs[14]+=   54;
	configs[21]+=   18;
	configs[22]+=   54;
	configs[23]+=  162;
	configs[32]+=  237;
	bb.mover.u4s[0]^=0x8040000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBWhite216() {
	configs[ 2]-=   18;
	configs[ 3]-=   54;
	configs[ 4]-=  162;
	configs[ 5]-=  486;
	configs[10]-=   18;
	configs[12]-=   54;
	configs[14]-=   54;
	configs[16]-=   18;
	configs[21]-=   18;
	configs[22]-=   54;
	configs[23]-=  162;
	configs[24]-=  486;
	configs[32]-=  723;
	bb.mover.u4s[0]^=0x8040000;
	bb.mover.u4s[1]^=0x2010;
}

void FlipFunctionBBBlack216() {
	configs[ 2]+=   18;
	configs[ 3]+=   54;
	configs[ 4]+=  162;
	configs[ 5]+=  486;
	configs[10]+=   18;
	configs[12]+=   54;
	configs[14]+=   54;
	configs[16]+=   18;
	configs[21]+=   18;
	configs[22]+=   54;
	configs[23]+=  162;
	configs[24]+=  486;
	configs[32]+=  723;
	bb.mover.u4s[0]^=0x8040000;
	bb.mover.u4s[1]^=0x2010;
}

void FlipFunctionBBWhite217() {
	configs[ 2]-=   18;
	configs[ 3]-=   54;
	configs[ 4]-=  162;
	configs[ 5]-=  486;
	configs[ 6]-= 1458;
	configs[10]-=   18;
	configs[12]-=   54;
	configs[14]-=   54;
	configs[16]-=   18;
	configs[18]-=    6;
	configs[21]-=   18;
	configs[22]-=   54;
	configs[23]-=  162;
	configs[24]-=  486;
	configs[25]-= 1458;
	configs[32]-= 2181;
	bb.mover.u4s[0]^=0x8040000;
	bb.mover.u4s[1]^=0x402010;
}

void FlipFunctionBBBlack217() {
	configs[ 2]+=   18;
	configs[ 3]+=   54;
	configs[ 4]+=  162;
	configs[ 5]+=  486;
	configs[ 6]+= 1458;
	configs[10]+=   18;
	configs[12]+=   54;
	configs[14]+=   54;
	configs[16]+=   18;
	configs[18]+=    6;
	configs[21]+=   18;
	configs[22]+=   54;
	configs[23]+=  162;
	configs[24]+=  486;
	configs[25]+= 1458;
	configs[32]+= 2181;
	bb.mover.u4s[0]^=0x8040000;
	bb.mover.u4s[1]^=0x402010;
}

void FlipFunctionBBWhite218() {
	configs[ 1]-=    9;
	bb.mover.u4s[0]^=0x400;
	bb.empty.u4s[0]^=0x400;
}

void FlipFunctionBBBlack218() {
	configs[ 1]+=    9;
	bb.mover.u4s[0]^=0x400;
	bb.empty.u4s[0]^=0x400;
}

void FlipFunctionBBWhite219() {
	configs[ 1]-=   63;
	configs[10]-=    6;
	configs[22]-=    6;
	configs[30]-=    6;
	bb.mover.u4s[0]^=0xC00;
	bb.empty.u4s[0]^=0x400;
}

void FlipFunctionBBBlack219() {
	configs[ 1]+=   63;
	configs[10]+=    6;
	configs[22]+=    6;
	configs[30]+=    6;
	bb.mover.u4s[0]^=0xC00;
	bb.empty.u4s[0]^=0x400;
}

void FlipFunctionBBWhite220() {
	configs[ 1]-=  225;
	configs[10]-=    6;
	configs[11]-=    6;
	configs[22]-=    6;
	configs[23]-=    6;
	configs[29]-=    6;
	configs[30]-=    6;
	bb.mover.u4s[0]^=0x1C00;
	bb.empty.u4s[0]^=0x400;
}

void FlipFunctionBBBlack220() {
	configs[ 1]+=  225;
	configs[10]+=    6;
	configs[11]+=    6;
	configs[22]+=    6;
	configs[23]+=    6;
	configs[29]+=    6;
	configs[30]+=    6;
	bb.mover.u4s[0]^=0x1C00;
	bb.empty.u4s[0]^=0x400;
}

void FlipFunctionBBWhite221() {
	configs[ 1]-=  711;
	configs[10]-=    6;
	configs[11]-=    6;
	configs[12]-=    6;
	configs[22]-=    6;
	configs[23]-=    6;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[29]-=    6;
	configs[30]-=    6;
	bb.mover.u4s[0]^=0x3C00;
	bb.empty.u4s[0]^=0x400;
}

void FlipFunctionBBBlack221() {
	configs[ 1]+=  711;
	configs[10]+=    6;
	configs[11]+=    6;
	configs[12]+=    6;
	configs[22]+=    6;
	configs[23]+=    6;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[29]+=    6;
	configs[30]+=    6;
	bb.mover.u4s[0]^=0x3C00;
	bb.empty.u4s[0]^=0x400;
}

void FlipFunctionBBWhite222() {
	configs[ 1]-= 2169;
	configs[10]-=    6;
	configs[11]-=    6;
	configs[12]-=    6;
	configs[13]-=    6;
	configs[22]-=    6;
	configs[23]-=    6;
	configs[24]-=    6;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[28]-=    6;
	configs[29]-=    6;
	configs[30]-=    6;
	bb.mover.u4s[0]^=0x7C00;
	bb.empty.u4s[0]^=0x400;
}

void FlipFunctionBBBlack222() {
	configs[ 1]+= 2169;
	configs[10]+=    6;
	configs[11]+=    6;
	configs[12]+=    6;
	configs[13]+=    6;
	configs[22]+=    6;
	configs[23]+=    6;
	configs[24]+=    6;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[28]+=    6;
	configs[29]+=    6;
	configs[30]+=    6;
	bb.mover.u4s[0]^=0x7C00;
	bb.empty.u4s[0]^=0x400;
}

void FlipFunctionBBWhite223() {
	configs[ 1]-=   15;
	configs[ 8]-=    6;
	configs[20]-=    6;
	configs[32]-=    6;
	bb.mover.u4s[0]^=0x600;
	bb.empty.u4s[0]^=0x400;
}

void FlipFunctionBBBlack223() {
	configs[ 1]+=   15;
	configs[ 8]+=    6;
	configs[20]+=    6;
	configs[32]+=    6;
	bb.mover.u4s[0]^=0x600;
	bb.empty.u4s[0]^=0x400;
}

void FlipFunctionBBWhite224() {
	configs[ 1]-=   69;
	configs[ 8]-=    6;
	configs[10]-=    6;
	configs[20]-=    6;
	configs[22]-=    6;
	configs[30]-=    6;
	configs[32]-=    6;
	bb.mover.u4s[0]^=0xE00;
	bb.empty.u4s[0]^=0x400;
}

void FlipFunctionBBBlack224() {
	configs[ 1]+=   69;
	configs[ 8]+=    6;
	configs[10]+=    6;
	configs[20]+=    6;
	configs[22]+=    6;
	configs[30]+=    6;
	configs[32]+=    6;
	bb.mover.u4s[0]^=0xE00;
	bb.empty.u4s[0]^=0x400;
}

void FlipFunctionBBWhite225() {
	configs[ 1]-=  231;
	configs[ 8]-=    6;
	configs[10]-=    6;
	configs[11]-=    6;
	configs[20]-=    6;
	configs[22]-=    6;
	configs[23]-=    6;
	configs[29]-=    6;
	configs[30]-=    6;
	configs[32]-=    6;
	bb.mover.u4s[0]^=0x1E00;
	bb.empty.u4s[0]^=0x400;
}

void FlipFunctionBBBlack225() {
	configs[ 1]+=  231;
	configs[ 8]+=    6;
	configs[10]+=    6;
	configs[11]+=    6;
	configs[20]+=    6;
	configs[22]+=    6;
	configs[23]+=    6;
	configs[29]+=    6;
	configs[30]+=    6;
	configs[32]+=    6;
	bb.mover.u4s[0]^=0x1E00;
	bb.empty.u4s[0]^=0x400;
}

void FlipFunctionBBWhite226() {
	configs[ 1]-=  717;
	configs[ 8]-=    6;
	configs[10]-=    6;
	configs[11]-=    6;
	configs[12]-=    6;
	configs[20]-=    6;
	configs[22]-=    6;
	configs[23]-=    6;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[29]-=    6;
	configs[30]-=    6;
	configs[32]-=    6;
	bb.mover.u4s[0]^=0x3E00;
	bb.empty.u4s[0]^=0x400;
}

void FlipFunctionBBBlack226() {
	configs[ 1]+=  717;
	configs[ 8]+=    6;
	configs[10]+=    6;
	configs[11]+=    6;
	configs[12]+=    6;
	configs[20]+=    6;
	configs[22]+=    6;
	configs[23]+=    6;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[29]+=    6;
	configs[30]+=    6;
	configs[32]+=    6;
	bb.mover.u4s[0]^=0x3E00;
	bb.empty.u4s[0]^=0x400;
}

void FlipFunctionBBWhite227() {
	configs[ 1]-= 2175;
	configs[ 8]-=    6;
	configs[10]-=    6;
	configs[11]-=    6;
	configs[12]-=    6;
	configs[13]-=    6;
	configs[20]-=    6;
	configs[22]-=    6;
	configs[23]-=    6;
	configs[24]-=    6;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[28]-=    6;
	configs[29]-=    6;
	configs[30]-=    6;
	configs[32]-=    6;
	bb.mover.u4s[0]^=0x7E00;
	bb.empty.u4s[0]^=0x400;
}

void FlipFunctionBBBlack227() {
	configs[ 1]+= 2175;
	configs[ 8]+=    6;
	configs[10]+=    6;
	configs[11]+=    6;
	configs[12]+=    6;
	configs[13]+=    6;
	configs[20]+=    6;
	configs[22]+=    6;
	configs[23]+=    6;
	configs[24]+=    6;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[28]+=    6;
	configs[29]+=    6;
	configs[30]+=    6;
	configs[32]+=    6;
	bb.mover.u4s[0]^=0x7E00;
	bb.empty.u4s[0]^=0x400;
}

void FlipFunctionBBWhite228() {
	configs[ 9]-=    3;
}

void FlipFunctionBBBlack228() {
	configs[ 9]+=    3;
}

void FlipFunctionBBWhite229() {
	configs[ 2]-=    6;
	configs[ 9]-=   21;
	configs[20]-=   18;
	configs[33]-=    6;
	bb.mover.u4s[0]^=0x20000;
}

void FlipFunctionBBBlack229() {
	configs[ 2]+=    6;
	configs[ 9]+=   21;
	configs[20]+=   18;
	configs[33]+=    6;
	bb.mover.u4s[0]^=0x20000;
}

void FlipFunctionBBWhite230() {
	configs[21]-=    3;
}

void FlipFunctionBBBlack230() {
	configs[21]+=    3;
}

void FlipFunctionBBWhite231() {
	configs[ 2]-=   18;
	configs[10]-=   18;
	configs[21]-=   21;
	configs[32]-=   18;
	bb.mover.u4s[0]^=0x40000;
}

void FlipFunctionBBBlack231() {
	configs[ 2]+=   18;
	configs[10]+=   18;
	configs[21]+=   21;
	configs[32]+=   18;
	bb.mover.u4s[0]^=0x40000;
}

void FlipFunctionBBWhite232() {
	configs[ 2]-=   18;
	configs[ 3]-=   18;
	configs[10]-=   18;
	configs[11]-=   54;
	configs[21]-=   75;
	configs[32]-=   18;
	configs[33]-=   18;
	bb.mover.u4s[0]^=0x4040000;
}

void FlipFunctionBBBlack232() {
	configs[ 2]+=   18;
	configs[ 3]+=   18;
	configs[10]+=   18;
	configs[11]+=   54;
	configs[21]+=   75;
	configs[32]+=   18;
	configs[33]+=   18;
	bb.mover.u4s[0]^=0x4040000;
}

void FlipFunctionBBWhite233() {
	configs[ 2]-=   18;
	configs[ 3]-=   18;
	configs[ 4]-=   18;
	configs[10]-=   18;
	configs[11]-=   54;
	configs[12]-=  162;
	configs[21]-=  237;
	configs[32]-=   18;
	configs[33]-=   18;
	configs[34]-=   18;
	bb.mover.u4s[0]^=0x4040000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBBlack233() {
	configs[ 2]+=   18;
	configs[ 3]+=   18;
	configs[ 4]+=   18;
	configs[10]+=   18;
	configs[11]+=   54;
	configs[12]+=  162;
	configs[21]+=  237;
	configs[32]+=   18;
	configs[33]+=   18;
	configs[34]+=   18;
	bb.mover.u4s[0]^=0x4040000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBWhite234() {
	configs[ 2]-=   18;
	configs[ 3]-=   18;
	configs[ 4]-=   18;
	configs[ 5]-=   18;
	configs[10]-=   18;
	configs[11]-=   54;
	configs[12]-=  162;
	configs[13]-=  486;
	configs[21]-=  723;
	configs[32]-=   18;
	configs[33]-=   18;
	configs[34]-=   18;
	configs[35]-=   18;
	bb.mover.u4s[0]^=0x4040000;
	bb.mover.u4s[1]^=0x404;
}

void FlipFunctionBBBlack234() {
	configs[ 2]+=   18;
	configs[ 3]+=   18;
	configs[ 4]+=   18;
	configs[ 5]+=   18;
	configs[10]+=   18;
	configs[11]+=   54;
	configs[12]+=  162;
	configs[13]+=  486;
	configs[21]+=  723;
	configs[32]+=   18;
	configs[33]+=   18;
	configs[34]+=   18;
	configs[35]+=   18;
	bb.mover.u4s[0]^=0x4040000;
	bb.mover.u4s[1]^=0x404;
}

void FlipFunctionBBWhite235() {
	configs[ 2]-=   18;
	configs[ 3]-=   18;
	configs[ 4]-=   18;
	configs[ 5]-=   18;
	configs[ 6]-=   18;
	configs[10]-=   18;
	configs[11]-=   54;
	configs[12]-=  162;
	configs[13]-=  486;
	configs[14]-=  486;
	configs[21]-= 2181;
	configs[32]-=   18;
	configs[33]-=   18;
	configs[34]-=   18;
	configs[35]-=   18;
	configs[36]-=   18;
	bb.mover.u4s[0]^=0x4040000;
	bb.mover.u4s[1]^=0x40404;
}

void FlipFunctionBBBlack235() {
	configs[ 2]+=   18;
	configs[ 3]+=   18;
	configs[ 4]+=   18;
	configs[ 5]+=   18;
	configs[ 6]+=   18;
	configs[10]+=   18;
	configs[11]+=   54;
	configs[12]+=  162;
	configs[13]+=  486;
	configs[14]+=  486;
	configs[21]+= 2181;
	configs[32]+=   18;
	configs[33]+=   18;
	configs[34]+=   18;
	configs[35]+=   18;
	configs[36]+=   18;
	bb.mover.u4s[0]^=0x4040000;
	bb.mover.u4s[1]^=0x40404;
}

void FlipFunctionBBWhite236() {
	configs[31]-=    3;
}

void FlipFunctionBBBlack236() {
	configs[31]+=    3;
}

void FlipFunctionBBWhite237() {
	configs[ 2]-=   54;
	configs[11]-=   18;
	configs[22]-=   18;
	configs[31]-=   21;
	bb.mover.u4s[0]^=0x80000;
}

void FlipFunctionBBBlack237() {
	configs[ 2]+=   54;
	configs[11]+=   18;
	configs[22]+=   18;
	configs[31]+=   21;
	bb.mover.u4s[0]^=0x80000;
}

void FlipFunctionBBWhite238() {
	configs[ 2]-=   54;
	configs[ 3]-=  162;
	configs[11]-=   18;
	configs[13]-=   54;
	configs[22]-=   18;
	configs[23]-=   54;
	configs[31]-=   75;
	bb.mover.u4s[0]^=0x10080000;
}

void FlipFunctionBBBlack238() {
	configs[ 2]+=   54;
	configs[ 3]+=  162;
	configs[11]+=   18;
	configs[13]+=   54;
	configs[22]+=   18;
	configs[23]+=   54;
	configs[31]+=   75;
	bb.mover.u4s[0]^=0x10080000;
}

void FlipFunctionBBWhite239() {
	configs[ 2]-=   54;
	configs[ 3]-=  162;
	configs[ 4]-=  486;
	configs[11]-=   18;
	configs[13]-=   54;
	configs[15]-=   18;
	configs[22]-=   18;
	configs[23]-=   54;
	configs[24]-=  162;
	configs[31]-=  237;
	bb.mover.u4s[0]^=0x10080000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBBlack239() {
	configs[ 2]+=   54;
	configs[ 3]+=  162;
	configs[ 4]+=  486;
	configs[11]+=   18;
	configs[13]+=   54;
	configs[15]+=   18;
	configs[22]+=   18;
	configs[23]+=   54;
	configs[24]+=  162;
	configs[31]+=  237;
	bb.mover.u4s[0]^=0x10080000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBWhite240() {
	configs[ 2]-=   54;
	configs[ 3]-=  162;
	configs[ 4]-=  486;
	configs[ 5]-= 1458;
	configs[11]-=   18;
	configs[13]-=   54;
	configs[15]-=   18;
	configs[17]-=    6;
	configs[22]-=   18;
	configs[23]-=   54;
	configs[24]-=  162;
	configs[25]-=  486;
	configs[31]-=  723;
	bb.mover.u4s[0]^=0x10080000;
	bb.mover.u4s[1]^=0x4020;
}

void FlipFunctionBBBlack240() {
	configs[ 2]+=   54;
	configs[ 3]+=  162;
	configs[ 4]+=  486;
	configs[ 5]+= 1458;
	configs[11]+=   18;
	configs[13]+=   54;
	configs[15]+=   18;
	configs[17]+=    6;
	configs[22]+=   18;
	configs[23]+=   54;
	configs[24]+=  162;
	configs[25]+=  486;
	configs[31]+=  723;
	bb.mover.u4s[0]^=0x10080000;
	bb.mover.u4s[1]^=0x4020;
}

void FlipFunctionBBWhite241() {
	configs[ 1]-=   27;
	bb.mover.u4s[0]^=0x800;
	bb.empty.u4s[0]^=0x800;
}

void FlipFunctionBBBlack241() {
	configs[ 1]+=   27;
	bb.mover.u4s[0]^=0x800;
	bb.empty.u4s[0]^=0x800;
}

void FlipFunctionBBWhite242() {
	configs[ 1]-=  189;
	configs[11]-=    6;
	configs[23]-=    6;
	configs[29]-=    6;
	bb.mover.u4s[0]^=0x1800;
	bb.empty.u4s[0]^=0x800;
}

void FlipFunctionBBBlack242() {
	configs[ 1]+=  189;
	configs[11]+=    6;
	configs[23]+=    6;
	configs[29]+=    6;
	bb.mover.u4s[0]^=0x1800;
	bb.empty.u4s[0]^=0x800;
}

void FlipFunctionBBWhite243() {
	configs[ 1]-=  675;
	configs[11]-=    6;
	configs[12]-=    6;
	configs[23]-=    6;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[29]-=    6;
	bb.mover.u4s[0]^=0x3800;
	bb.empty.u4s[0]^=0x800;
}

void FlipFunctionBBBlack243() {
	configs[ 1]+=  675;
	configs[11]+=    6;
	configs[12]+=    6;
	configs[23]+=    6;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[29]+=    6;
	bb.mover.u4s[0]^=0x3800;
	bb.empty.u4s[0]^=0x800;
}

void FlipFunctionBBWhite244() {
	configs[ 1]-= 2133;
	configs[11]-=    6;
	configs[12]-=    6;
	configs[13]-=    6;
	configs[23]-=    6;
	configs[24]-=    6;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[28]-=    6;
	configs[29]-=    6;
	bb.mover.u4s[0]^=0x7800;
	bb.empty.u4s[0]^=0x800;
}

void FlipFunctionBBBlack244() {
	configs[ 1]+= 2133;
	configs[11]+=    6;
	configs[12]+=    6;
	configs[13]+=    6;
	configs[23]+=    6;
	configs[24]+=    6;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[28]+=    6;
	configs[29]+=    6;
	bb.mover.u4s[0]^=0x7800;
	bb.empty.u4s[0]^=0x800;
}

void FlipFunctionBBWhite245() {
	configs[ 1]-=   45;
	configs[ 9]-=    6;
	configs[21]-=    6;
	configs[31]-=    6;
	bb.mover.u4s[0]^=0xC00;
	bb.empty.u4s[0]^=0x800;
}

void FlipFunctionBBBlack245() {
	configs[ 1]+=   45;
	configs[ 9]+=    6;
	configs[21]+=    6;
	configs[31]+=    6;
	bb.mover.u4s[0]^=0xC00;
	bb.empty.u4s[0]^=0x800;
}

void FlipFunctionBBWhite246() {
	configs[ 1]-=  207;
	configs[ 9]-=    6;
	configs[11]-=    6;
	configs[21]-=    6;
	configs[23]-=    6;
	configs[29]-=    6;
	configs[31]-=    6;
	bb.mover.u4s[0]^=0x1C00;
	bb.empty.u4s[0]^=0x800;
}

void FlipFunctionBBBlack246() {
	configs[ 1]+=  207;
	configs[ 9]+=    6;
	configs[11]+=    6;
	configs[21]+=    6;
	configs[23]+=    6;
	configs[29]+=    6;
	configs[31]+=    6;
	bb.mover.u4s[0]^=0x1C00;
	bb.empty.u4s[0]^=0x800;
}

void FlipFunctionBBWhite247() {
	configs[ 1]-=  693;
	configs[ 9]-=    6;
	configs[11]-=    6;
	configs[12]-=    6;
	configs[21]-=    6;
	configs[23]-=    6;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[29]-=    6;
	configs[31]-=    6;
	bb.mover.u4s[0]^=0x3C00;
	bb.empty.u4s[0]^=0x800;
}

void FlipFunctionBBBlack247() {
	configs[ 1]+=  693;
	configs[ 9]+=    6;
	configs[11]+=    6;
	configs[12]+=    6;
	configs[21]+=    6;
	configs[23]+=    6;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[29]+=    6;
	configs[31]+=    6;
	bb.mover.u4s[0]^=0x3C00;
	bb.empty.u4s[0]^=0x800;
}

void FlipFunctionBBWhite248() {
	configs[ 1]-= 2151;
	configs[ 9]-=    6;
	configs[11]-=    6;
	configs[12]-=    6;
	configs[13]-=    6;
	configs[21]-=    6;
	configs[23]-=    6;
	configs[24]-=    6;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[28]-=    6;
	configs[29]-=    6;
	configs[31]-=    6;
	bb.mover.u4s[0]^=0x7C00;
	bb.empty.u4s[0]^=0x800;
}

void FlipFunctionBBBlack248() {
	configs[ 1]+= 2151;
	configs[ 9]+=    6;
	configs[11]+=    6;
	configs[12]+=    6;
	configs[13]+=    6;
	configs[21]+=    6;
	configs[23]+=    6;
	configs[24]+=    6;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[28]+=    6;
	configs[29]+=    6;
	configs[31]+=    6;
	bb.mover.u4s[0]^=0x7C00;
	bb.empty.u4s[0]^=0x800;
}

void FlipFunctionBBWhite249() {
	configs[ 1]-=   51;
	configs[ 8]-=    6;
	configs[ 9]-=    6;
	configs[20]-=    6;
	configs[21]-=    6;
	configs[31]-=    6;
	configs[32]-=    6;
	bb.mover.u4s[0]^=0xE00;
	bb.empty.u4s[0]^=0x800;
}

void FlipFunctionBBBlack249() {
	configs[ 1]+=   51;
	configs[ 8]+=    6;
	configs[ 9]+=    6;
	configs[20]+=    6;
	configs[21]+=    6;
	configs[31]+=    6;
	configs[32]+=    6;
	bb.mover.u4s[0]^=0xE00;
	bb.empty.u4s[0]^=0x800;
}

void FlipFunctionBBWhite250() {
	configs[ 1]-=  213;
	configs[ 8]-=    6;
	configs[ 9]-=    6;
	configs[11]-=    6;
	configs[20]-=    6;
	configs[21]-=    6;
	configs[23]-=    6;
	configs[29]-=    6;
	configs[31]-=    6;
	configs[32]-=    6;
	bb.mover.u4s[0]^=0x1E00;
	bb.empty.u4s[0]^=0x800;
}

void FlipFunctionBBBlack250() {
	configs[ 1]+=  213;
	configs[ 8]+=    6;
	configs[ 9]+=    6;
	configs[11]+=    6;
	configs[20]+=    6;
	configs[21]+=    6;
	configs[23]+=    6;
	configs[29]+=    6;
	configs[31]+=    6;
	configs[32]+=    6;
	bb.mover.u4s[0]^=0x1E00;
	bb.empty.u4s[0]^=0x800;
}

void FlipFunctionBBWhite251() {
	configs[ 1]-=  699;
	configs[ 8]-=    6;
	configs[ 9]-=    6;
	configs[11]-=    6;
	configs[12]-=    6;
	configs[20]-=    6;
	configs[21]-=    6;
	configs[23]-=    6;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[29]-=    6;
	configs[31]-=    6;
	configs[32]-=    6;
	bb.mover.u4s[0]^=0x3E00;
	bb.empty.u4s[0]^=0x800;
}

void FlipFunctionBBBlack251() {
	configs[ 1]+=  699;
	configs[ 8]+=    6;
	configs[ 9]+=    6;
	configs[11]+=    6;
	configs[12]+=    6;
	configs[20]+=    6;
	configs[21]+=    6;
	configs[23]+=    6;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[29]+=    6;
	configs[31]+=    6;
	configs[32]+=    6;
	bb.mover.u4s[0]^=0x3E00;
	bb.empty.u4s[0]^=0x800;
}

void FlipFunctionBBWhite252() {
	configs[ 1]-= 2157;
	configs[ 8]-=    6;
	configs[ 9]-=    6;
	configs[11]-=    6;
	configs[12]-=    6;
	configs[13]-=    6;
	configs[20]-=    6;
	configs[21]-=    6;
	configs[23]-=    6;
	configs[24]-=    6;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[28]-=    6;
	configs[29]-=    6;
	configs[31]-=    6;
	configs[32]-=    6;
	bb.mover.u4s[0]^=0x7E00;
	bb.empty.u4s[0]^=0x800;
}

void FlipFunctionBBBlack252() {
	configs[ 1]+= 2157;
	configs[ 8]+=    6;
	configs[ 9]+=    6;
	configs[11]+=    6;
	configs[12]+=    6;
	configs[13]+=    6;
	configs[20]+=    6;
	configs[21]+=    6;
	configs[23]+=    6;
	configs[24]+=    6;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[28]+=    6;
	configs[29]+=    6;
	configs[31]+=    6;
	configs[32]+=    6;
	bb.mover.u4s[0]^=0x7E00;
	bb.empty.u4s[0]^=0x800;
}

void FlipFunctionBBWhite253() {
	configs[10]-=    3;
}

void FlipFunctionBBBlack253() {
	configs[10]+=    3;
}

void FlipFunctionBBWhite254() {
	configs[ 2]-=   18;
	configs[10]-=   21;
	configs[21]-=   18;
	configs[32]-=   18;
	bb.mover.u4s[0]^=0x40000;
}

void FlipFunctionBBBlack254() {
	configs[ 2]+=   18;
	configs[10]+=   21;
	configs[21]+=   18;
	configs[32]+=   18;
	bb.mover.u4s[0]^=0x40000;
}

void FlipFunctionBBWhite255() {
	configs[ 2]-=   18;
	configs[ 3]-=    6;
	configs[10]-=   75;
	configs[20]-=   54;
	configs[21]-=   18;
	configs[32]-=   18;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x2040000;
}

void FlipFunctionBBBlack255() {
	configs[ 2]+=   18;
	configs[ 3]+=    6;
	configs[10]+=   75;
	configs[20]+=   54;
	configs[21]+=   18;
	configs[32]+=   18;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x2040000;
}

void FlipFunctionBBWhite256() {
	configs[22]-=    3;
}

void FlipFunctionBBBlack256() {
	configs[22]+=    3;
}

void FlipFunctionBBWhite257() {
	configs[ 2]-=   54;
	configs[11]-=   18;
	configs[22]-=   21;
	configs[31]-=   18;
	bb.mover.u4s[0]^=0x80000;
}

void FlipFunctionBBBlack257() {
	configs[ 2]+=   54;
	configs[11]+=   18;
	configs[22]+=   21;
	configs[31]+=   18;
	bb.mover.u4s[0]^=0x80000;
}

void FlipFunctionBBWhite258() {
	configs[ 2]-=   54;
	configs[ 3]-=   54;
	configs[11]-=   18;
	configs[12]-=   54;
	configs[22]-=   75;
	configs[31]-=   18;
	configs[32]-=   54;
	bb.mover.u4s[0]^=0x8080000;
}

void FlipFunctionBBBlack258() {
	configs[ 2]+=   54;
	configs[ 3]+=   54;
	configs[11]+=   18;
	configs[12]+=   54;
	configs[22]+=   75;
	configs[31]+=   18;
	configs[32]+=   54;
	bb.mover.u4s[0]^=0x8080000;
}

void FlipFunctionBBWhite259() {
	configs[ 2]-=   54;
	configs[ 3]-=   54;
	configs[ 4]-=   54;
	configs[11]-=   18;
	configs[12]-=   54;
	configs[13]-=  162;
	configs[22]-=  237;
	configs[31]-=   18;
	configs[32]-=   54;
	configs[33]-=   54;
	bb.mover.u4s[0]^=0x8080000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBBlack259() {
	configs[ 2]+=   54;
	configs[ 3]+=   54;
	configs[ 4]+=   54;
	configs[11]+=   18;
	configs[12]+=   54;
	configs[13]+=  162;
	configs[22]+=  237;
	configs[31]+=   18;
	configs[32]+=   54;
	configs[33]+=   54;
	bb.mover.u4s[0]^=0x8080000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBWhite260() {
	configs[ 2]-=   54;
	configs[ 3]-=   54;
	configs[ 4]-=   54;
	configs[ 5]-=   54;
	configs[11]-=   18;
	configs[12]-=   54;
	configs[13]-=  162;
	configs[14]-=  162;
	configs[22]-=  723;
	configs[31]-=   18;
	configs[32]-=   54;
	configs[33]-=   54;
	configs[34]-=   54;
	bb.mover.u4s[0]^=0x8080000;
	bb.mover.u4s[1]^=0x808;
}

void FlipFunctionBBBlack260() {
	configs[ 2]+=   54;
	configs[ 3]+=   54;
	configs[ 4]+=   54;
	configs[ 5]+=   54;
	configs[11]+=   18;
	configs[12]+=   54;
	configs[13]+=  162;
	configs[14]+=  162;
	configs[22]+=  723;
	configs[31]+=   18;
	configs[32]+=   54;
	configs[33]+=   54;
	configs[34]+=   54;
	bb.mover.u4s[0]^=0x8080000;
	bb.mover.u4s[1]^=0x808;
}

void FlipFunctionBBWhite261() {
	configs[ 2]-=   54;
	configs[ 3]-=   54;
	configs[ 4]-=   54;
	configs[ 5]-=   54;
	configs[ 6]-=   54;
	configs[11]-=   18;
	configs[12]-=   54;
	configs[13]-=  162;
	configs[14]-=  162;
	configs[15]-=  162;
	configs[22]-= 2181;
	configs[31]-=   18;
	configs[32]-=   54;
	configs[33]-=   54;
	configs[34]-=   54;
	configs[35]-=   54;
	bb.mover.u4s[0]^=0x8080000;
	bb.mover.u4s[1]^=0x80808;
}

void FlipFunctionBBBlack261() {
	configs[ 2]+=   54;
	configs[ 3]+=   54;
	configs[ 4]+=   54;
	configs[ 5]+=   54;
	configs[ 6]+=   54;
	configs[11]+=   18;
	configs[12]+=   54;
	configs[13]+=  162;
	configs[14]+=  162;
	configs[15]+=  162;
	configs[22]+= 2181;
	configs[31]+=   18;
	configs[32]+=   54;
	configs[33]+=   54;
	configs[34]+=   54;
	configs[35]+=   54;
	bb.mover.u4s[0]^=0x8080000;
	bb.mover.u4s[1]^=0x80808;
}

void FlipFunctionBBWhite262() {
	configs[30]-=    3;
}

void FlipFunctionBBBlack262() {
	configs[30]+=    3;
}

void FlipFunctionBBWhite263() {
	configs[ 2]-=  162;
	configs[12]-=   18;
	configs[23]-=   18;
	configs[30]-=   21;
	bb.mover.u4s[0]^=0x100000;
}

void FlipFunctionBBBlack263() {
	configs[ 2]+=  162;
	configs[12]+=   18;
	configs[23]+=   18;
	configs[30]+=   21;
	bb.mover.u4s[0]^=0x100000;
}

void FlipFunctionBBWhite264() {
	configs[ 2]-=  162;
	configs[ 3]-=  486;
	configs[12]-=   18;
	configs[14]-=   18;
	configs[23]-=   18;
	configs[24]-=   54;
	configs[30]-=   75;
	bb.mover.u4s[0]^=0x20100000;
}

void FlipFunctionBBBlack264() {
	configs[ 2]+=  162;
	configs[ 3]+=  486;
	configs[12]+=   18;
	configs[14]+=   18;
	configs[23]+=   18;
	configs[24]+=   54;
	configs[30]+=   75;
	bb.mover.u4s[0]^=0x20100000;
}

void FlipFunctionBBWhite265() {
	configs[ 2]-=  162;
	configs[ 3]-=  486;
	configs[ 4]-= 1458;
	configs[12]-=   18;
	configs[14]-=   18;
	configs[16]-=    6;
	configs[23]-=   18;
	configs[24]-=   54;
	configs[25]-=  162;
	configs[30]-=  237;
	bb.mover.u4s[0]^=0x20100000;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBBlack265() {
	configs[ 2]+=  162;
	configs[ 3]+=  486;
	configs[ 4]+= 1458;
	configs[12]+=   18;
	configs[14]+=   18;
	configs[16]+=    6;
	configs[23]+=   18;
	configs[24]+=   54;
	configs[25]+=  162;
	configs[30]+=  237;
	bb.mover.u4s[0]^=0x20100000;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBWhite266() {
	configs[ 1]-=   81;
	bb.mover.u4s[0]^=0x1000;
	bb.empty.u4s[0]^=0x1000;
}

void FlipFunctionBBBlack266() {
	configs[ 1]+=   81;
	bb.mover.u4s[0]^=0x1000;
	bb.empty.u4s[0]^=0x1000;
}

void FlipFunctionBBWhite267() {
	configs[ 1]-=  567;
	configs[12]-=    6;
	configs[24]-=    6;
	configs[28]-=    6;
	bb.mover.u4s[0]^=0x3000;
	bb.empty.u4s[0]^=0x1000;
}

void FlipFunctionBBBlack267() {
	configs[ 1]+=  567;
	configs[12]+=    6;
	configs[24]+=    6;
	configs[28]+=    6;
	bb.mover.u4s[0]^=0x3000;
	bb.empty.u4s[0]^=0x1000;
}

void FlipFunctionBBWhite268() {
	configs[ 1]-= 2025;
	configs[12]-=    6;
	configs[13]-=    6;
	configs[24]-=    6;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[28]-=    6;
	bb.mover.u4s[0]^=0x7000;
	bb.empty.u4s[0]^=0x1000;
}

void FlipFunctionBBBlack268() {
	configs[ 1]+= 2025;
	configs[12]+=    6;
	configs[13]+=    6;
	configs[24]+=    6;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[28]+=    6;
	bb.mover.u4s[0]^=0x7000;
	bb.empty.u4s[0]^=0x1000;
}

void FlipFunctionBBWhite269() {
	configs[ 1]-=  135;
	configs[10]-=    6;
	configs[22]-=    6;
	configs[30]-=    6;
	bb.mover.u4s[0]^=0x1800;
	bb.empty.u4s[0]^=0x1000;
}

void FlipFunctionBBBlack269() {
	configs[ 1]+=  135;
	configs[10]+=    6;
	configs[22]+=    6;
	configs[30]+=    6;
	bb.mover.u4s[0]^=0x1800;
	bb.empty.u4s[0]^=0x1000;
}

void FlipFunctionBBWhite270() {
	configs[ 1]-=  621;
	configs[10]-=    6;
	configs[12]-=    6;
	configs[22]-=    6;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[30]-=    6;
	bb.mover.u4s[0]^=0x3800;
	bb.empty.u4s[0]^=0x1000;
}

void FlipFunctionBBBlack270() {
	configs[ 1]+=  621;
	configs[10]+=    6;
	configs[12]+=    6;
	configs[22]+=    6;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[30]+=    6;
	bb.mover.u4s[0]^=0x3800;
	bb.empty.u4s[0]^=0x1000;
}

void FlipFunctionBBWhite271() {
	configs[ 1]-= 2079;
	configs[10]-=    6;
	configs[12]-=    6;
	configs[13]-=    6;
	configs[22]-=    6;
	configs[24]-=    6;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[28]-=    6;
	configs[30]-=    6;
	bb.mover.u4s[0]^=0x7800;
	bb.empty.u4s[0]^=0x1000;
}

void FlipFunctionBBBlack271() {
	configs[ 1]+= 2079;
	configs[10]+=    6;
	configs[12]+=    6;
	configs[13]+=    6;
	configs[22]+=    6;
	configs[24]+=    6;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[28]+=    6;
	configs[30]+=    6;
	bb.mover.u4s[0]^=0x7800;
	bb.empty.u4s[0]^=0x1000;
}

void FlipFunctionBBWhite272() {
	configs[ 1]-=  153;
	configs[ 9]-=    6;
	configs[10]-=    6;
	configs[21]-=    6;
	configs[22]-=    6;
	configs[30]-=    6;
	configs[31]-=    6;
	bb.mover.u4s[0]^=0x1C00;
	bb.empty.u4s[0]^=0x1000;
}

void FlipFunctionBBBlack272() {
	configs[ 1]+=  153;
	configs[ 9]+=    6;
	configs[10]+=    6;
	configs[21]+=    6;
	configs[22]+=    6;
	configs[30]+=    6;
	configs[31]+=    6;
	bb.mover.u4s[0]^=0x1C00;
	bb.empty.u4s[0]^=0x1000;
}

void FlipFunctionBBWhite273() {
	configs[ 1]-=  639;
	configs[ 9]-=    6;
	configs[10]-=    6;
	configs[12]-=    6;
	configs[21]-=    6;
	configs[22]-=    6;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[30]-=    6;
	configs[31]-=    6;
	bb.mover.u4s[0]^=0x3C00;
	bb.empty.u4s[0]^=0x1000;
}

void FlipFunctionBBBlack273() {
	configs[ 1]+=  639;
	configs[ 9]+=    6;
	configs[10]+=    6;
	configs[12]+=    6;
	configs[21]+=    6;
	configs[22]+=    6;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[30]+=    6;
	configs[31]+=    6;
	bb.mover.u4s[0]^=0x3C00;
	bb.empty.u4s[0]^=0x1000;
}

void FlipFunctionBBWhite274() {
	configs[ 1]-= 2097;
	configs[ 9]-=    6;
	configs[10]-=    6;
	configs[12]-=    6;
	configs[13]-=    6;
	configs[21]-=    6;
	configs[22]-=    6;
	configs[24]-=    6;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[28]-=    6;
	configs[30]-=    6;
	configs[31]-=    6;
	bb.mover.u4s[0]^=0x7C00;
	bb.empty.u4s[0]^=0x1000;
}

void FlipFunctionBBBlack274() {
	configs[ 1]+= 2097;
	configs[ 9]+=    6;
	configs[10]+=    6;
	configs[12]+=    6;
	configs[13]+=    6;
	configs[21]+=    6;
	configs[22]+=    6;
	configs[24]+=    6;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[28]+=    6;
	configs[30]+=    6;
	configs[31]+=    6;
	bb.mover.u4s[0]^=0x7C00;
	bb.empty.u4s[0]^=0x1000;
}

void FlipFunctionBBWhite275() {
	configs[ 1]-=  159;
	configs[ 8]-=    6;
	configs[ 9]-=    6;
	configs[10]-=    6;
	configs[20]-=    6;
	configs[21]-=    6;
	configs[22]-=    6;
	configs[30]-=    6;
	configs[31]-=    6;
	configs[32]-=    6;
	bb.mover.u4s[0]^=0x1E00;
	bb.empty.u4s[0]^=0x1000;
}

void FlipFunctionBBBlack275() {
	configs[ 1]+=  159;
	configs[ 8]+=    6;
	configs[ 9]+=    6;
	configs[10]+=    6;
	configs[20]+=    6;
	configs[21]+=    6;
	configs[22]+=    6;
	configs[30]+=    6;
	configs[31]+=    6;
	configs[32]+=    6;
	bb.mover.u4s[0]^=0x1E00;
	bb.empty.u4s[0]^=0x1000;
}

void FlipFunctionBBWhite276() {
	configs[ 1]-=  645;
	configs[ 8]-=    6;
	configs[ 9]-=    6;
	configs[10]-=    6;
	configs[12]-=    6;
	configs[20]-=    6;
	configs[21]-=    6;
	configs[22]-=    6;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[30]-=    6;
	configs[31]-=    6;
	configs[32]-=    6;
	bb.mover.u4s[0]^=0x3E00;
	bb.empty.u4s[0]^=0x1000;
}

void FlipFunctionBBBlack276() {
	configs[ 1]+=  645;
	configs[ 8]+=    6;
	configs[ 9]+=    6;
	configs[10]+=    6;
	configs[12]+=    6;
	configs[20]+=    6;
	configs[21]+=    6;
	configs[22]+=    6;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[30]+=    6;
	configs[31]+=    6;
	configs[32]+=    6;
	bb.mover.u4s[0]^=0x3E00;
	bb.empty.u4s[0]^=0x1000;
}

void FlipFunctionBBWhite277() {
	configs[ 1]-= 2103;
	configs[ 8]-=    6;
	configs[ 9]-=    6;
	configs[10]-=    6;
	configs[12]-=    6;
	configs[13]-=    6;
	configs[20]-=    6;
	configs[21]-=    6;
	configs[22]-=    6;
	configs[24]-=    6;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[28]-=    6;
	configs[30]-=    6;
	configs[31]-=    6;
	configs[32]-=    6;
	bb.mover.u4s[0]^=0x7E00;
	bb.empty.u4s[0]^=0x1000;
}

void FlipFunctionBBBlack277() {
	configs[ 1]+= 2103;
	configs[ 8]+=    6;
	configs[ 9]+=    6;
	configs[10]+=    6;
	configs[12]+=    6;
	configs[13]+=    6;
	configs[20]+=    6;
	configs[21]+=    6;
	configs[22]+=    6;
	configs[24]+=    6;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[28]+=    6;
	configs[30]+=    6;
	configs[31]+=    6;
	configs[32]+=    6;
	bb.mover.u4s[0]^=0x7E00;
	bb.empty.u4s[0]^=0x1000;
}

void FlipFunctionBBWhite278() {
	configs[11]-=    3;
}

void FlipFunctionBBBlack278() {
	configs[11]+=    3;
}

void FlipFunctionBBWhite279() {
	configs[ 2]-=   54;
	configs[11]-=   21;
	configs[22]-=   18;
	configs[31]-=   18;
	bb.mover.u4s[0]^=0x80000;
}

void FlipFunctionBBBlack279() {
	configs[ 2]+=   54;
	configs[11]+=   21;
	configs[22]+=   18;
	configs[31]+=   18;
	bb.mover.u4s[0]^=0x80000;
}

void FlipFunctionBBWhite280() {
	configs[ 2]-=   54;
	configs[ 3]-=   18;
	configs[11]-=   75;
	configs[21]-=   54;
	configs[22]-=   18;
	configs[31]-=   18;
	configs[33]-=   18;
	bb.mover.u4s[0]^=0x4080000;
}

void FlipFunctionBBBlack280() {
	configs[ 2]+=   54;
	configs[ 3]+=   18;
	configs[11]+=   75;
	configs[21]+=   54;
	configs[22]+=   18;
	configs[31]+=   18;
	configs[33]+=   18;
	bb.mover.u4s[0]^=0x4080000;
}

void FlipFunctionBBWhite281() {
	configs[ 2]-=   54;
	configs[ 3]-=   18;
	configs[ 4]-=    6;
	configs[11]-=  237;
	configs[20]-=  162;
	configs[21]-=   54;
	configs[22]-=   18;
	configs[31]-=   18;
	configs[33]-=   18;
	configs[35]-=    6;
	bb.mover.u4s[0]^=0x4080000;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBBlack281() {
	configs[ 2]+=   54;
	configs[ 3]+=   18;
	configs[ 4]+=    6;
	configs[11]+=  237;
	configs[20]+=  162;
	configs[21]+=   54;
	configs[22]+=   18;
	configs[31]+=   18;
	configs[33]+=   18;
	configs[35]+=    6;
	bb.mover.u4s[0]^=0x4080000;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBWhite282() {
	configs[23]-=    3;
}

void FlipFunctionBBBlack282() {
	configs[23]+=    3;
}

void FlipFunctionBBWhite283() {
	configs[ 2]-=  162;
	configs[12]-=   18;
	configs[23]-=   21;
	configs[30]-=   18;
	bb.mover.u4s[0]^=0x100000;
}

void FlipFunctionBBBlack283() {
	configs[ 2]+=  162;
	configs[12]+=   18;
	configs[23]+=   21;
	configs[30]+=   18;
	bb.mover.u4s[0]^=0x100000;
}

void FlipFunctionBBWhite284() {
	configs[ 2]-=  162;
	configs[ 3]-=  162;
	configs[12]-=   18;
	configs[13]-=   54;
	configs[23]-=   75;
	configs[30]-=   18;
	configs[31]-=   54;
	bb.mover.u4s[0]^=0x10100000;
}

void FlipFunctionBBBlack284() {
	configs[ 2]+=  162;
	configs[ 3]+=  162;
	configs[12]+=   18;
	configs[13]+=   54;
	configs[23]+=   75;
	configs[30]+=   18;
	configs[31]+=   54;
	bb.mover.u4s[0]^=0x10100000;
}

void FlipFunctionBBWhite285() {
	configs[ 2]-=  162;
	configs[ 3]-=  162;
	configs[ 4]-=  162;
	configs[12]-=   18;
	configs[13]-=   54;
	configs[14]-=   54;
	configs[23]-=  237;
	configs[30]-=   18;
	configs[31]-=   54;
	configs[32]-=  162;
	bb.mover.u4s[0]^=0x10100000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBBlack285() {
	configs[ 2]+=  162;
	configs[ 3]+=  162;
	configs[ 4]+=  162;
	configs[12]+=   18;
	configs[13]+=   54;
	configs[14]+=   54;
	configs[23]+=  237;
	configs[30]+=   18;
	configs[31]+=   54;
	configs[32]+=  162;
	bb.mover.u4s[0]^=0x10100000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBWhite286() {
	configs[ 2]-=  162;
	configs[ 3]-=  162;
	configs[ 4]-=  162;
	configs[ 5]-=  162;
	configs[12]-=   18;
	configs[13]-=   54;
	configs[14]-=   54;
	configs[15]-=   54;
	configs[23]-=  723;
	configs[30]-=   18;
	configs[31]-=   54;
	configs[32]-=  162;
	configs[33]-=  162;
	bb.mover.u4s[0]^=0x10100000;
	bb.mover.u4s[1]^=0x1010;
}

void FlipFunctionBBBlack286() {
	configs[ 2]+=  162;
	configs[ 3]+=  162;
	configs[ 4]+=  162;
	configs[ 5]+=  162;
	configs[12]+=   18;
	configs[13]+=   54;
	configs[14]+=   54;
	configs[15]+=   54;
	configs[23]+=  723;
	configs[30]+=   18;
	configs[31]+=   54;
	configs[32]+=  162;
	configs[33]+=  162;
	bb.mover.u4s[0]^=0x10100000;
	bb.mover.u4s[1]^=0x1010;
}

void FlipFunctionBBWhite287() {
	configs[ 2]-=  162;
	configs[ 3]-=  162;
	configs[ 4]-=  162;
	configs[ 5]-=  162;
	configs[ 6]-=  162;
	configs[12]-=   18;
	configs[13]-=   54;
	configs[14]-=   54;
	configs[15]-=   54;
	configs[16]-=   54;
	configs[23]-= 2181;
	configs[30]-=   18;
	configs[31]-=   54;
	configs[32]-=  162;
	configs[33]-=  162;
	configs[34]-=  162;
	bb.mover.u4s[0]^=0x10100000;
	bb.mover.u4s[1]^=0x101010;
}

void FlipFunctionBBBlack287() {
	configs[ 2]+=  162;
	configs[ 3]+=  162;
	configs[ 4]+=  162;
	configs[ 5]+=  162;
	configs[ 6]+=  162;
	configs[12]+=   18;
	configs[13]+=   54;
	configs[14]+=   54;
	configs[15]+=   54;
	configs[16]+=   54;
	configs[23]+= 2181;
	configs[30]+=   18;
	configs[31]+=   54;
	configs[32]+=  162;
	configs[33]+=  162;
	configs[34]+=  162;
	bb.mover.u4s[0]^=0x10100000;
	bb.mover.u4s[1]^=0x101010;
}

void FlipFunctionBBWhite288() {
	configs[29]-=    3;
}

void FlipFunctionBBBlack288() {
	configs[29]+=    3;
}

void FlipFunctionBBWhite289() {
	configs[ 2]-=  486;
	configs[13]-=   18;
	configs[24]-=   18;
	configs[29]-=   21;
	bb.mover.u4s[0]^=0x200000;
}

void FlipFunctionBBBlack289() {
	configs[ 2]+=  486;
	configs[13]+=   18;
	configs[24]+=   18;
	configs[29]+=   21;
	bb.mover.u4s[0]^=0x200000;
}

void FlipFunctionBBWhite290() {
	configs[ 2]-=  486;
	configs[ 3]-= 1458;
	configs[13]-=   18;
	configs[15]-=    6;
	configs[24]-=   18;
	configs[25]-=   54;
	configs[29]-=   75;
	bb.mover.u4s[0]^=0x40200000;
}

void FlipFunctionBBBlack290() {
	configs[ 2]+=  486;
	configs[ 3]+= 1458;
	configs[13]+=   18;
	configs[15]+=    6;
	configs[24]+=   18;
	configs[25]+=   54;
	configs[29]+=   75;
	bb.mover.u4s[0]^=0x40200000;
}

void FlipFunctionBBWhite291() {
	configs[ 1]-=  243;
	bb.mover.u4s[0]^=0x2000;
	bb.empty.u4s[0]^=0x2000;
}

void FlipFunctionBBBlack291() {
	configs[ 1]+=  243;
	bb.mover.u4s[0]^=0x2000;
	bb.empty.u4s[0]^=0x2000;
}

void FlipFunctionBBWhite292() {
	configs[ 1]-= 1701;
	configs[13]-=    6;
	configs[25]-=    6;
	configs[27]-=    6;
	bb.mover.u4s[0]^=0x6000;
	bb.empty.u4s[0]^=0x2000;
}

void FlipFunctionBBBlack292() {
	configs[ 1]+= 1701;
	configs[13]+=    6;
	configs[25]+=    6;
	configs[27]+=    6;
	bb.mover.u4s[0]^=0x6000;
	bb.empty.u4s[0]^=0x2000;
}

void FlipFunctionBBWhite293() {
	configs[ 1]-=  405;
	configs[11]-=    6;
	configs[23]-=    6;
	configs[29]-=    6;
	bb.mover.u4s[0]^=0x3000;
	bb.empty.u4s[0]^=0x2000;
}

void FlipFunctionBBBlack293() {
	configs[ 1]+=  405;
	configs[11]+=    6;
	configs[23]+=    6;
	configs[29]+=    6;
	bb.mover.u4s[0]^=0x3000;
	bb.empty.u4s[0]^=0x2000;
}

void FlipFunctionBBWhite294() {
	configs[ 1]-= 1863;
	configs[11]-=    6;
	configs[13]-=    6;
	configs[23]-=    6;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[29]-=    6;
	bb.mover.u4s[0]^=0x7000;
	bb.empty.u4s[0]^=0x2000;
}

void FlipFunctionBBBlack294() {
	configs[ 1]+= 1863;
	configs[11]+=    6;
	configs[13]+=    6;
	configs[23]+=    6;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[29]+=    6;
	bb.mover.u4s[0]^=0x7000;
	bb.empty.u4s[0]^=0x2000;
}

void FlipFunctionBBWhite295() {
	configs[ 1]-=  459;
	configs[10]-=    6;
	configs[11]-=    6;
	configs[22]-=    6;
	configs[23]-=    6;
	configs[29]-=    6;
	configs[30]-=    6;
	bb.mover.u4s[0]^=0x3800;
	bb.empty.u4s[0]^=0x2000;
}

void FlipFunctionBBBlack295() {
	configs[ 1]+=  459;
	configs[10]+=    6;
	configs[11]+=    6;
	configs[22]+=    6;
	configs[23]+=    6;
	configs[29]+=    6;
	configs[30]+=    6;
	bb.mover.u4s[0]^=0x3800;
	bb.empty.u4s[0]^=0x2000;
}

void FlipFunctionBBWhite296() {
	configs[ 1]-= 1917;
	configs[10]-=    6;
	configs[11]-=    6;
	configs[13]-=    6;
	configs[22]-=    6;
	configs[23]-=    6;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[29]-=    6;
	configs[30]-=    6;
	bb.mover.u4s[0]^=0x7800;
	bb.empty.u4s[0]^=0x2000;
}

void FlipFunctionBBBlack296() {
	configs[ 1]+= 1917;
	configs[10]+=    6;
	configs[11]+=    6;
	configs[13]+=    6;
	configs[22]+=    6;
	configs[23]+=    6;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[29]+=    6;
	configs[30]+=    6;
	bb.mover.u4s[0]^=0x7800;
	bb.empty.u4s[0]^=0x2000;
}

void FlipFunctionBBWhite297() {
	configs[ 1]-=  477;
	configs[ 9]-=    6;
	configs[10]-=    6;
	configs[11]-=    6;
	configs[21]-=    6;
	configs[22]-=    6;
	configs[23]-=    6;
	configs[29]-=    6;
	configs[30]-=    6;
	configs[31]-=    6;
	bb.mover.u4s[0]^=0x3C00;
	bb.empty.u4s[0]^=0x2000;
}

void FlipFunctionBBBlack297() {
	configs[ 1]+=  477;
	configs[ 9]+=    6;
	configs[10]+=    6;
	configs[11]+=    6;
	configs[21]+=    6;
	configs[22]+=    6;
	configs[23]+=    6;
	configs[29]+=    6;
	configs[30]+=    6;
	configs[31]+=    6;
	bb.mover.u4s[0]^=0x3C00;
	bb.empty.u4s[0]^=0x2000;
}

void FlipFunctionBBWhite298() {
	configs[ 1]-= 1935;
	configs[ 9]-=    6;
	configs[10]-=    6;
	configs[11]-=    6;
	configs[13]-=    6;
	configs[21]-=    6;
	configs[22]-=    6;
	configs[23]-=    6;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[29]-=    6;
	configs[30]-=    6;
	configs[31]-=    6;
	bb.mover.u4s[0]^=0x7C00;
	bb.empty.u4s[0]^=0x2000;
}

void FlipFunctionBBBlack298() {
	configs[ 1]+= 1935;
	configs[ 9]+=    6;
	configs[10]+=    6;
	configs[11]+=    6;
	configs[13]+=    6;
	configs[21]+=    6;
	configs[22]+=    6;
	configs[23]+=    6;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[29]+=    6;
	configs[30]+=    6;
	configs[31]+=    6;
	bb.mover.u4s[0]^=0x7C00;
	bb.empty.u4s[0]^=0x2000;
}

void FlipFunctionBBWhite299() {
	configs[ 1]-=  483;
	configs[ 8]-=    6;
	configs[ 9]-=    6;
	configs[10]-=    6;
	configs[11]-=    6;
	configs[20]-=    6;
	configs[21]-=    6;
	configs[22]-=    6;
	configs[23]-=    6;
	configs[29]-=    6;
	configs[30]-=    6;
	configs[31]-=    6;
	configs[32]-=    6;
	bb.mover.u4s[0]^=0x3E00;
	bb.empty.u4s[0]^=0x2000;
}

void FlipFunctionBBBlack299() {
	configs[ 1]+=  483;
	configs[ 8]+=    6;
	configs[ 9]+=    6;
	configs[10]+=    6;
	configs[11]+=    6;
	configs[20]+=    6;
	configs[21]+=    6;
	configs[22]+=    6;
	configs[23]+=    6;
	configs[29]+=    6;
	configs[30]+=    6;
	configs[31]+=    6;
	configs[32]+=    6;
	bb.mover.u4s[0]^=0x3E00;
	bb.empty.u4s[0]^=0x2000;
}

void FlipFunctionBBWhite300() {
	configs[ 1]-= 1941;
	configs[ 8]-=    6;
	configs[ 9]-=    6;
	configs[10]-=    6;
	configs[11]-=    6;
	configs[13]-=    6;
	configs[20]-=    6;
	configs[21]-=    6;
	configs[22]-=    6;
	configs[23]-=    6;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[29]-=    6;
	configs[30]-=    6;
	configs[31]-=    6;
	configs[32]-=    6;
	bb.mover.u4s[0]^=0x7E00;
	bb.empty.u4s[0]^=0x2000;
}

void FlipFunctionBBBlack300() {
	configs[ 1]+= 1941;
	configs[ 8]+=    6;
	configs[ 9]+=    6;
	configs[10]+=    6;
	configs[11]+=    6;
	configs[13]+=    6;
	configs[20]+=    6;
	configs[21]+=    6;
	configs[22]+=    6;
	configs[23]+=    6;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[29]+=    6;
	configs[30]+=    6;
	configs[31]+=    6;
	configs[32]+=    6;
	bb.mover.u4s[0]^=0x7E00;
	bb.empty.u4s[0]^=0x2000;
}

void FlipFunctionBBWhite301() {
	configs[12]-=    3;
}

void FlipFunctionBBBlack301() {
	configs[12]+=    3;
}

void FlipFunctionBBWhite302() {
	configs[ 2]-=  162;
	configs[12]-=   21;
	configs[23]-=   18;
	configs[30]-=   18;
	bb.mover.u4s[0]^=0x100000;
}

void FlipFunctionBBBlack302() {
	configs[ 2]+=  162;
	configs[12]+=   21;
	configs[23]+=   18;
	configs[30]+=   18;
	bb.mover.u4s[0]^=0x100000;
}

void FlipFunctionBBWhite303() {
	configs[ 2]-=  162;
	configs[ 3]-=   54;
	configs[12]-=   75;
	configs[22]-=   54;
	configs[23]-=   18;
	configs[30]-=   18;
	configs[32]-=   54;
	bb.mover.u4s[0]^=0x8100000;
}

void FlipFunctionBBBlack303() {
	configs[ 2]+=  162;
	configs[ 3]+=   54;
	configs[12]+=   75;
	configs[22]+=   54;
	configs[23]+=   18;
	configs[30]+=   18;
	configs[32]+=   54;
	bb.mover.u4s[0]^=0x8100000;
}

void FlipFunctionBBWhite304() {
	configs[ 2]-=  162;
	configs[ 3]-=   54;
	configs[ 4]-=   18;
	configs[12]-=  237;
	configs[21]-=  162;
	configs[22]-=   54;
	configs[23]-=   18;
	configs[30]-=   18;
	configs[32]-=   54;
	configs[34]-=   18;
	bb.mover.u4s[0]^=0x8100000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBBlack304() {
	configs[ 2]+=  162;
	configs[ 3]+=   54;
	configs[ 4]+=   18;
	configs[12]+=  237;
	configs[21]+=  162;
	configs[22]+=   54;
	configs[23]+=   18;
	configs[30]+=   18;
	configs[32]+=   54;
	configs[34]+=   18;
	bb.mover.u4s[0]^=0x8100000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBWhite305() {
	configs[ 2]-=  162;
	configs[ 3]-=   54;
	configs[ 4]-=   18;
	configs[ 5]-=    6;
	configs[12]-=  723;
	configs[20]-=  486;
	configs[21]-=  162;
	configs[22]-=   54;
	configs[23]-=   18;
	configs[30]-=   18;
	configs[32]-=   54;
	configs[34]-=   18;
	configs[36]-=    6;
	bb.mover.u4s[0]^=0x8100000;
	bb.mover.u4s[1]^=0x204;
}

void FlipFunctionBBBlack305() {
	configs[ 2]+=  162;
	configs[ 3]+=   54;
	configs[ 4]+=   18;
	configs[ 5]+=    6;
	configs[12]+=  723;
	configs[20]+=  486;
	configs[21]+=  162;
	configs[22]+=   54;
	configs[23]+=   18;
	configs[30]+=   18;
	configs[32]+=   54;
	configs[34]+=   18;
	configs[36]+=    6;
	bb.mover.u4s[0]^=0x8100000;
	bb.mover.u4s[1]^=0x204;
}

void FlipFunctionBBWhite306() {
	configs[24]-=    3;
}

void FlipFunctionBBBlack306() {
	configs[24]+=    3;
}

void FlipFunctionBBWhite307() {
	configs[ 2]-=  486;
	configs[13]-=   18;
	configs[24]-=   21;
	configs[29]-=   18;
	bb.mover.u4s[0]^=0x200000;
}

void FlipFunctionBBBlack307() {
	configs[ 2]+=  486;
	configs[13]+=   18;
	configs[24]+=   21;
	configs[29]+=   18;
	bb.mover.u4s[0]^=0x200000;
}

void FlipFunctionBBWhite308() {
	configs[ 2]-=  486;
	configs[ 3]-=  486;
	configs[13]-=   18;
	configs[14]-=   18;
	configs[24]-=   75;
	configs[29]-=   18;
	configs[30]-=   54;
	bb.mover.u4s[0]^=0x20200000;
}

void FlipFunctionBBBlack308() {
	configs[ 2]+=  486;
	configs[ 3]+=  486;
	configs[13]+=   18;
	configs[14]+=   18;
	configs[24]+=   75;
	configs[29]+=   18;
	configs[30]+=   54;
	bb.mover.u4s[0]^=0x20200000;
}

void FlipFunctionBBWhite309() {
	configs[ 2]-=  486;
	configs[ 3]-=  486;
	configs[ 4]-=  486;
	configs[13]-=   18;
	configs[14]-=   18;
	configs[15]-=   18;
	configs[24]-=  237;
	configs[29]-=   18;
	configs[30]-=   54;
	configs[31]-=  162;
	bb.mover.u4s[0]^=0x20200000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBBlack309() {
	configs[ 2]+=  486;
	configs[ 3]+=  486;
	configs[ 4]+=  486;
	configs[13]+=   18;
	configs[14]+=   18;
	configs[15]+=   18;
	configs[24]+=  237;
	configs[29]+=   18;
	configs[30]+=   54;
	configs[31]+=  162;
	bb.mover.u4s[0]^=0x20200000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBWhite310() {
	configs[ 2]-=  486;
	configs[ 3]-=  486;
	configs[ 4]-=  486;
	configs[ 5]-=  486;
	configs[13]-=   18;
	configs[14]-=   18;
	configs[15]-=   18;
	configs[16]-=   18;
	configs[24]-=  723;
	configs[29]-=   18;
	configs[30]-=   54;
	configs[31]-=  162;
	configs[32]-=  486;
	bb.mover.u4s[0]^=0x20200000;
	bb.mover.u4s[1]^=0x2020;
}

void FlipFunctionBBBlack310() {
	configs[ 2]+=  486;
	configs[ 3]+=  486;
	configs[ 4]+=  486;
	configs[ 5]+=  486;
	configs[13]+=   18;
	configs[14]+=   18;
	configs[15]+=   18;
	configs[16]+=   18;
	configs[24]+=  723;
	configs[29]+=   18;
	configs[30]+=   54;
	configs[31]+=  162;
	configs[32]+=  486;
	bb.mover.u4s[0]^=0x20200000;
	bb.mover.u4s[1]^=0x2020;
}

void FlipFunctionBBWhite311() {
	configs[ 2]-=  486;
	configs[ 3]-=  486;
	configs[ 4]-=  486;
	configs[ 5]-=  486;
	configs[ 6]-=  486;
	configs[13]-=   18;
	configs[14]-=   18;
	configs[15]-=   18;
	configs[16]-=   18;
	configs[17]-=   18;
	configs[24]-= 2181;
	configs[29]-=   18;
	configs[30]-=   54;
	configs[31]-=  162;
	configs[32]-=  486;
	configs[33]-=  486;
	bb.mover.u4s[0]^=0x20200000;
	bb.mover.u4s[1]^=0x202020;
}

void FlipFunctionBBBlack311() {
	configs[ 2]+=  486;
	configs[ 3]+=  486;
	configs[ 4]+=  486;
	configs[ 5]+=  486;
	configs[ 6]+=  486;
	configs[13]+=   18;
	configs[14]+=   18;
	configs[15]+=   18;
	configs[16]+=   18;
	configs[17]+=   18;
	configs[24]+= 2181;
	configs[29]+=   18;
	configs[30]+=   54;
	configs[31]+=  162;
	configs[32]+=  486;
	configs[33]+=  486;
	bb.mover.u4s[0]^=0x20200000;
	bb.mover.u4s[1]^=0x202020;
}

void FlipFunctionBBWhite312() {
	configs[28]-=    3;
}

void FlipFunctionBBBlack312() {
	configs[28]+=    3;
}

void FlipFunctionBBWhite313() {
	configs[ 2]-= 1458;
	configs[14]-=    6;
	configs[25]-=   18;
	configs[28]-=   21;
	bb.mover.u4s[0]^=0x400000;
}

void FlipFunctionBBBlack313() {
	configs[ 2]+= 1458;
	configs[14]+=    6;
	configs[25]+=   18;
	configs[28]+=   21;
	bb.mover.u4s[0]^=0x400000;
}

void FlipFunctionBBWhite314() {
	configs[ 1]-=  729;
	bb.mover.u4s[0]^=0x4000;
	bb.empty.u4s[0]^=0x4000;
}

void FlipFunctionBBBlack314() {
	configs[ 1]+=  729;
	bb.mover.u4s[0]^=0x4000;
	bb.empty.u4s[0]^=0x4000;
}

void FlipFunctionBBWhite315() {
	configs[ 1]-= 1215;
	configs[12]-=    6;
	configs[24]-=    6;
	configs[28]-=    6;
	bb.mover.u4s[0]^=0x6000;
	bb.empty.u4s[0]^=0x4000;
}

void FlipFunctionBBBlack315() {
	configs[ 1]+= 1215;
	configs[12]+=    6;
	configs[24]+=    6;
	configs[28]+=    6;
	bb.mover.u4s[0]^=0x6000;
	bb.empty.u4s[0]^=0x4000;
}

void FlipFunctionBBWhite316() {
	configs[ 1]-= 1377;
	configs[11]-=    6;
	configs[12]-=    6;
	configs[23]-=    6;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[29]-=    6;
	bb.mover.u4s[0]^=0x7000;
	bb.empty.u4s[0]^=0x4000;
}

void FlipFunctionBBBlack316() {
	configs[ 1]+= 1377;
	configs[11]+=    6;
	configs[12]+=    6;
	configs[23]+=    6;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[29]+=    6;
	bb.mover.u4s[0]^=0x7000;
	bb.empty.u4s[0]^=0x4000;
}

void FlipFunctionBBWhite317() {
	configs[ 1]-= 1431;
	configs[10]-=    6;
	configs[11]-=    6;
	configs[12]-=    6;
	configs[22]-=    6;
	configs[23]-=    6;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[29]-=    6;
	configs[30]-=    6;
	bb.mover.u4s[0]^=0x7800;
	bb.empty.u4s[0]^=0x4000;
}

void FlipFunctionBBBlack317() {
	configs[ 1]+= 1431;
	configs[10]+=    6;
	configs[11]+=    6;
	configs[12]+=    6;
	configs[22]+=    6;
	configs[23]+=    6;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[29]+=    6;
	configs[30]+=    6;
	bb.mover.u4s[0]^=0x7800;
	bb.empty.u4s[0]^=0x4000;
}

void FlipFunctionBBWhite318() {
	configs[ 1]-= 1449;
	configs[ 9]-=    6;
	configs[10]-=    6;
	configs[11]-=    6;
	configs[12]-=    6;
	configs[21]-=    6;
	configs[22]-=    6;
	configs[23]-=    6;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[29]-=    6;
	configs[30]-=    6;
	configs[31]-=    6;
	bb.mover.u4s[0]^=0x7C00;
	bb.empty.u4s[0]^=0x4000;
}

void FlipFunctionBBBlack318() {
	configs[ 1]+= 1449;
	configs[ 9]+=    6;
	configs[10]+=    6;
	configs[11]+=    6;
	configs[12]+=    6;
	configs[21]+=    6;
	configs[22]+=    6;
	configs[23]+=    6;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[29]+=    6;
	configs[30]+=    6;
	configs[31]+=    6;
	bb.mover.u4s[0]^=0x7C00;
	bb.empty.u4s[0]^=0x4000;
}

void FlipFunctionBBWhite319() {
	configs[ 1]-= 1455;
	configs[ 8]-=    6;
	configs[ 9]-=    6;
	configs[10]-=    6;
	configs[11]-=    6;
	configs[12]-=    6;
	configs[20]-=    6;
	configs[21]-=    6;
	configs[22]-=    6;
	configs[23]-=    6;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[29]-=    6;
	configs[30]-=    6;
	configs[31]-=    6;
	configs[32]-=    6;
	bb.mover.u4s[0]^=0x7E00;
	bb.empty.u4s[0]^=0x4000;
}

void FlipFunctionBBBlack319() {
	configs[ 1]+= 1455;
	configs[ 8]+=    6;
	configs[ 9]+=    6;
	configs[10]+=    6;
	configs[11]+=    6;
	configs[12]+=    6;
	configs[20]+=    6;
	configs[21]+=    6;
	configs[22]+=    6;
	configs[23]+=    6;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[29]+=    6;
	configs[30]+=    6;
	configs[31]+=    6;
	configs[32]+=    6;
	bb.mover.u4s[0]^=0x7E00;
	bb.empty.u4s[0]^=0x4000;
}

void FlipFunctionBBWhite320() {
	configs[13]-=    3;
}

void FlipFunctionBBBlack320() {
	configs[13]+=    3;
}

void FlipFunctionBBWhite321() {
	configs[ 2]-=  486;
	configs[13]-=   21;
	configs[24]-=   18;
	configs[29]-=   18;
	bb.mover.u4s[0]^=0x200000;
}

void FlipFunctionBBBlack321() {
	configs[ 2]+=  486;
	configs[13]+=   21;
	configs[24]+=   18;
	configs[29]+=   18;
	bb.mover.u4s[0]^=0x200000;
}

void FlipFunctionBBWhite322() {
	configs[ 2]-=  486;
	configs[ 3]-=  162;
	configs[13]-=   75;
	configs[23]-=   54;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[31]-=   54;
	bb.mover.u4s[0]^=0x10200000;
}

void FlipFunctionBBBlack322() {
	configs[ 2]+=  486;
	configs[ 3]+=  162;
	configs[13]+=   75;
	configs[23]+=   54;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[31]+=   54;
	bb.mover.u4s[0]^=0x10200000;
}

void FlipFunctionBBWhite323() {
	configs[ 2]-=  486;
	configs[ 3]-=  162;
	configs[ 4]-=   54;
	configs[13]-=  237;
	configs[22]-=  162;
	configs[23]-=   54;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[31]-=   54;
	configs[33]-=   54;
	bb.mover.u4s[0]^=0x10200000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBBlack323() {
	configs[ 2]+=  486;
	configs[ 3]+=  162;
	configs[ 4]+=   54;
	configs[13]+=  237;
	configs[22]+=  162;
	configs[23]+=   54;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[31]+=   54;
	configs[33]+=   54;
	bb.mover.u4s[0]^=0x10200000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBWhite324() {
	configs[ 2]-=  486;
	configs[ 3]-=  162;
	configs[ 4]-=   54;
	configs[ 5]-=   18;
	configs[13]-=  723;
	configs[21]-=  486;
	configs[22]-=  162;
	configs[23]-=   54;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[31]-=   54;
	configs[33]-=   54;
	configs[35]-=   18;
	bb.mover.u4s[0]^=0x10200000;
	bb.mover.u4s[1]^=0x408;
}

void FlipFunctionBBBlack324() {
	configs[ 2]+=  486;
	configs[ 3]+=  162;
	configs[ 4]+=   54;
	configs[ 5]+=   18;
	configs[13]+=  723;
	configs[21]+=  486;
	configs[22]+=  162;
	configs[23]+=   54;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[31]+=   54;
	configs[33]+=   54;
	configs[35]+=   18;
	bb.mover.u4s[0]^=0x10200000;
	bb.mover.u4s[1]^=0x408;
}

void FlipFunctionBBWhite325() {
	configs[ 2]-=  486;
	configs[ 3]-=  162;
	configs[ 4]-=   54;
	configs[ 5]-=   18;
	configs[ 6]-=    6;
	configs[13]-= 2181;
	configs[20]-= 1458;
	configs[21]-=  486;
	configs[22]-=  162;
	configs[23]-=   54;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[31]-=   54;
	configs[33]-=   54;
	configs[35]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[0]^=0x10200000;
	bb.mover.u4s[1]^=0x20408;
}

void FlipFunctionBBBlack325() {
	configs[ 2]+=  486;
	configs[ 3]+=  162;
	configs[ 4]+=   54;
	configs[ 5]+=   18;
	configs[ 6]+=    6;
	configs[13]+= 2181;
	configs[20]+= 1458;
	configs[21]+=  486;
	configs[22]+=  162;
	configs[23]+=   54;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[31]+=   54;
	configs[33]+=   54;
	configs[35]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[0]^=0x10200000;
	bb.mover.u4s[1]^=0x20408;
}

void FlipFunctionBBWhite326() {
	configs[25]-=    3;
}

void FlipFunctionBBBlack326() {
	configs[25]+=    3;
}

void FlipFunctionBBWhite327() {
	configs[ 2]-= 1458;
	configs[14]-=    6;
	configs[25]-=   21;
	configs[28]-=   18;
	bb.mover.u4s[0]^=0x400000;
}

void FlipFunctionBBBlack327() {
	configs[ 2]+= 1458;
	configs[14]+=    6;
	configs[25]+=   21;
	configs[28]+=   18;
	bb.mover.u4s[0]^=0x400000;
}

void FlipFunctionBBWhite328() {
	configs[ 2]-= 1458;
	configs[ 3]-= 1458;
	configs[14]-=    6;
	configs[15]-=    6;
	configs[25]-=   75;
	configs[28]-=   18;
	configs[29]-=   54;
	bb.mover.u4s[0]^=0x40400000;
}

void FlipFunctionBBBlack328() {
	configs[ 2]+= 1458;
	configs[ 3]+= 1458;
	configs[14]+=    6;
	configs[15]+=    6;
	configs[25]+=   75;
	configs[28]+=   18;
	configs[29]+=   54;
	bb.mover.u4s[0]^=0x40400000;
}

void FlipFunctionBBWhite329() {
	configs[ 2]-= 1458;
	configs[ 3]-= 1458;
	configs[ 4]-= 1458;
	configs[14]-=    6;
	configs[15]-=    6;
	configs[16]-=    6;
	configs[25]-=  237;
	configs[28]-=   18;
	configs[29]-=   54;
	configs[30]-=  162;
	bb.mover.u4s[0]^=0x40400000;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBBlack329() {
	configs[ 2]+= 1458;
	configs[ 3]+= 1458;
	configs[ 4]+= 1458;
	configs[14]+=    6;
	configs[15]+=    6;
	configs[16]+=    6;
	configs[25]+=  237;
	configs[28]+=   18;
	configs[29]+=   54;
	configs[30]+=  162;
	bb.mover.u4s[0]^=0x40400000;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBWhite330() {
	configs[ 2]-= 1458;
	configs[ 3]-= 1458;
	configs[ 4]-= 1458;
	configs[ 5]-= 1458;
	configs[14]-=    6;
	configs[15]-=    6;
	configs[16]-=    6;
	configs[17]-=    6;
	configs[25]-=  723;
	configs[28]-=   18;
	configs[29]-=   54;
	configs[30]-=  162;
	configs[31]-=  486;
	bb.mover.u4s[0]^=0x40400000;
	bb.mover.u4s[1]^=0x4040;
}

void FlipFunctionBBBlack330() {
	configs[ 2]+= 1458;
	configs[ 3]+= 1458;
	configs[ 4]+= 1458;
	configs[ 5]+= 1458;
	configs[14]+=    6;
	configs[15]+=    6;
	configs[16]+=    6;
	configs[17]+=    6;
	configs[25]+=  723;
	configs[28]+=   18;
	configs[29]+=   54;
	configs[30]+=  162;
	configs[31]+=  486;
	bb.mover.u4s[0]^=0x40400000;
	bb.mover.u4s[1]^=0x4040;
}

void FlipFunctionBBWhite331() {
	configs[ 2]-= 1458;
	configs[ 3]-= 1458;
	configs[ 4]-= 1458;
	configs[ 5]-= 1458;
	configs[ 6]-= 1458;
	configs[14]-=    6;
	configs[15]-=    6;
	configs[16]-=    6;
	configs[17]-=    6;
	configs[18]-=    6;
	configs[25]-= 2181;
	configs[28]-=   18;
	configs[29]-=   54;
	configs[30]-=  162;
	configs[31]-=  486;
	configs[32]-= 1458;
	bb.mover.u4s[0]^=0x40400000;
	bb.mover.u4s[1]^=0x404040;
}

void FlipFunctionBBBlack331() {
	configs[ 2]+= 1458;
	configs[ 3]+= 1458;
	configs[ 4]+= 1458;
	configs[ 5]+= 1458;
	configs[ 6]+= 1458;
	configs[14]+=    6;
	configs[15]+=    6;
	configs[16]+=    6;
	configs[17]+=    6;
	configs[18]+=    6;
	configs[25]+= 2181;
	configs[28]+=   18;
	configs[29]+=   54;
	configs[30]+=  162;
	configs[31]+=  486;
	configs[32]+= 1458;
	bb.mover.u4s[0]^=0x40400000;
	bb.mover.u4s[1]^=0x404040;
}

void FlipFunctionBBWhite332() {
	configs[27]-=    3;
}

void FlipFunctionBBBlack332() {
	configs[27]+=    3;
}

void FlipFunctionBBWhite333() {
	configs[ 1]-= 2187;
	bb.mover.u4s[0]^=0x8000;
	bb.empty.u4s[0]^=0x8000;
}

void FlipFunctionBBBlack333() {
	configs[ 1]+= 2187;
	bb.mover.u4s[0]^=0x8000;
	bb.empty.u4s[0]^=0x8000;
}

void FlipFunctionBBWhite334() {
	configs[ 1]-= 3645;
	configs[13]-=    6;
	configs[25]-=    6;
	configs[27]-=    6;
	bb.mover.u4s[0]^=0xC000;
	bb.empty.u4s[0]^=0x8000;
}

void FlipFunctionBBBlack334() {
	configs[ 1]+= 3645;
	configs[13]+=    6;
	configs[25]+=    6;
	configs[27]+=    6;
	bb.mover.u4s[0]^=0xC000;
	bb.empty.u4s[0]^=0x8000;
}

void FlipFunctionBBWhite335() {
	configs[ 1]-= 4131;
	configs[12]-=    6;
	configs[13]-=    6;
	configs[24]-=    6;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[28]-=    6;
	bb.mover.u4s[0]^=0xE000;
	bb.empty.u4s[0]^=0x8000;
}

void FlipFunctionBBBlack335() {
	configs[ 1]+= 4131;
	configs[12]+=    6;
	configs[13]+=    6;
	configs[24]+=    6;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[28]+=    6;
	bb.mover.u4s[0]^=0xE000;
	bb.empty.u4s[0]^=0x8000;
}

void FlipFunctionBBWhite336() {
	configs[ 1]-= 4293;
	configs[11]-=    6;
	configs[12]-=    6;
	configs[13]-=    6;
	configs[23]-=    6;
	configs[24]-=    6;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[28]-=    6;
	configs[29]-=    6;
	bb.mover.u4s[0]^=0xF000;
	bb.empty.u4s[0]^=0x8000;
}

void FlipFunctionBBBlack336() {
	configs[ 1]+= 4293;
	configs[11]+=    6;
	configs[12]+=    6;
	configs[13]+=    6;
	configs[23]+=    6;
	configs[24]+=    6;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[28]+=    6;
	configs[29]+=    6;
	bb.mover.u4s[0]^=0xF000;
	bb.empty.u4s[0]^=0x8000;
}

void FlipFunctionBBWhite337() {
	configs[ 1]-= 4347;
	configs[10]-=    6;
	configs[11]-=    6;
	configs[12]-=    6;
	configs[13]-=    6;
	configs[22]-=    6;
	configs[23]-=    6;
	configs[24]-=    6;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[28]-=    6;
	configs[29]-=    6;
	configs[30]-=    6;
	bb.mover.u4s[0]^=0xF800;
	bb.empty.u4s[0]^=0x8000;
}

void FlipFunctionBBBlack337() {
	configs[ 1]+= 4347;
	configs[10]+=    6;
	configs[11]+=    6;
	configs[12]+=    6;
	configs[13]+=    6;
	configs[22]+=    6;
	configs[23]+=    6;
	configs[24]+=    6;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[28]+=    6;
	configs[29]+=    6;
	configs[30]+=    6;
	bb.mover.u4s[0]^=0xF800;
	bb.empty.u4s[0]^=0x8000;
}

void FlipFunctionBBWhite338() {
	configs[ 1]-= 4365;
	configs[ 9]-=    6;
	configs[10]-=    6;
	configs[11]-=    6;
	configs[12]-=    6;
	configs[13]-=    6;
	configs[21]-=    6;
	configs[22]-=    6;
	configs[23]-=    6;
	configs[24]-=    6;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[28]-=    6;
	configs[29]-=    6;
	configs[30]-=    6;
	configs[31]-=    6;
	bb.mover.u4s[0]^=0xFC00;
	bb.empty.u4s[0]^=0x8000;
}

void FlipFunctionBBBlack338() {
	configs[ 1]+= 4365;
	configs[ 9]+=    6;
	configs[10]+=    6;
	configs[11]+=    6;
	configs[12]+=    6;
	configs[13]+=    6;
	configs[21]+=    6;
	configs[22]+=    6;
	configs[23]+=    6;
	configs[24]+=    6;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[28]+=    6;
	configs[29]+=    6;
	configs[30]+=    6;
	configs[31]+=    6;
	bb.mover.u4s[0]^=0xFC00;
	bb.empty.u4s[0]^=0x8000;
}

void FlipFunctionBBWhite339() {
	configs[ 1]-= 4371;
	configs[ 8]-=    6;
	configs[ 9]-=    6;
	configs[10]-=    6;
	configs[11]-=    6;
	configs[12]-=    6;
	configs[13]-=    6;
	configs[20]-=    6;
	configs[21]-=    6;
	configs[22]-=    6;
	configs[23]-=    6;
	configs[24]-=    6;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[28]-=    6;
	configs[29]-=    6;
	configs[30]-=    6;
	configs[31]-=    6;
	configs[32]-=    6;
	bb.mover.u4s[0]^=0xFE00;
	bb.empty.u4s[0]^=0x8000;
}

void FlipFunctionBBBlack339() {
	configs[ 1]+= 4371;
	configs[ 8]+=    6;
	configs[ 9]+=    6;
	configs[10]+=    6;
	configs[11]+=    6;
	configs[12]+=    6;
	configs[13]+=    6;
	configs[20]+=    6;
	configs[21]+=    6;
	configs[22]+=    6;
	configs[23]+=    6;
	configs[24]+=    6;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[28]+=    6;
	configs[29]+=    6;
	configs[30]+=    6;
	configs[31]+=    6;
	configs[32]+=    6;
	bb.mover.u4s[0]^=0xFE00;
	bb.empty.u4s[0]^=0x8000;
}

void FlipFunctionBBWhite340() {
	configs[14]-=    1;
}

void FlipFunctionBBBlack340() {
	configs[14]+=    1;
}

void FlipFunctionBBWhite341() {
	configs[ 2]-= 1458;
	configs[14]-=    7;
	configs[25]-=   18;
	configs[28]-=   18;
	bb.mover.u4s[0]^=0x400000;
}

void FlipFunctionBBBlack341() {
	configs[ 2]+= 1458;
	configs[14]+=    7;
	configs[25]+=   18;
	configs[28]+=   18;
	bb.mover.u4s[0]^=0x400000;
}

void FlipFunctionBBWhite342() {
	configs[ 2]-= 1458;
	configs[ 3]-=  486;
	configs[14]-=   25;
	configs[24]-=   54;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[30]-=   54;
	bb.mover.u4s[0]^=0x20400000;
}

void FlipFunctionBBBlack342() {
	configs[ 2]+= 1458;
	configs[ 3]+=  486;
	configs[14]+=   25;
	configs[24]+=   54;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[30]+=   54;
	bb.mover.u4s[0]^=0x20400000;
}

void FlipFunctionBBWhite343() {
	configs[ 2]-= 1458;
	configs[ 3]-=  486;
	configs[ 4]-=  162;
	configs[14]-=   79;
	configs[23]-=  162;
	configs[24]-=   54;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[30]-=   54;
	configs[32]-=  162;
	bb.mover.u4s[0]^=0x20400000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBBlack343() {
	configs[ 2]+= 1458;
	configs[ 3]+=  486;
	configs[ 4]+=  162;
	configs[14]+=   79;
	configs[23]+=  162;
	configs[24]+=   54;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[30]+=   54;
	configs[32]+=  162;
	bb.mover.u4s[0]^=0x20400000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBWhite344() {
	configs[ 2]-= 1458;
	configs[ 3]-=  486;
	configs[ 4]-=  162;
	configs[ 5]-=   54;
	configs[14]-=  241;
	configs[22]-=  486;
	configs[23]-=  162;
	configs[24]-=   54;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[30]-=   54;
	configs[32]-=  162;
	configs[34]-=   54;
	bb.mover.u4s[0]^=0x20400000;
	bb.mover.u4s[1]^=0x810;
}

void FlipFunctionBBBlack344() {
	configs[ 2]+= 1458;
	configs[ 3]+=  486;
	configs[ 4]+=  162;
	configs[ 5]+=   54;
	configs[14]+=  241;
	configs[22]+=  486;
	configs[23]+=  162;
	configs[24]+=   54;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[30]+=   54;
	configs[32]+=  162;
	configs[34]+=   54;
	bb.mover.u4s[0]^=0x20400000;
	bb.mover.u4s[1]^=0x810;
}

void FlipFunctionBBWhite345() {
	configs[ 2]-= 1458;
	configs[ 3]-=  486;
	configs[ 4]-=  162;
	configs[ 5]-=   54;
	configs[ 6]-=   18;
	configs[14]-=  727;
	configs[21]-= 1458;
	configs[22]-=  486;
	configs[23]-=  162;
	configs[24]-=   54;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[30]-=   54;
	configs[32]-=  162;
	configs[34]-=   54;
	configs[36]-=   18;
	bb.mover.u4s[0]^=0x20400000;
	bb.mover.u4s[1]^=0x40810;
}

void FlipFunctionBBBlack345() {
	configs[ 2]+= 1458;
	configs[ 3]+=  486;
	configs[ 4]+=  162;
	configs[ 5]+=   54;
	configs[ 6]+=   18;
	configs[14]+=  727;
	configs[21]+= 1458;
	configs[22]+=  486;
	configs[23]+=  162;
	configs[24]+=   54;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[30]+=   54;
	configs[32]+=  162;
	configs[34]+=   54;
	configs[36]+=   18;
	bb.mover.u4s[0]^=0x20400000;
	bb.mover.u4s[1]^=0x40810;
}

void FlipFunctionBBWhite346() {
	configs[26]-=    3;
}

void FlipFunctionBBBlack346() {
	configs[26]+=    3;
}

void FlipFunctionBBWhite347() {
	configs[ 2]-= 4374;
	configs[15]-=    2;
	configs[26]-=   21;
	configs[27]-=   18;
	bb.mover.u4s[0]^=0x800000;
}

void FlipFunctionBBBlack347() {
	configs[ 2]+= 4374;
	configs[15]+=    2;
	configs[26]+=   21;
	configs[27]+=   18;
	bb.mover.u4s[0]^=0x800000;
}

void FlipFunctionBBWhite348() {
	configs[ 2]-= 4374;
	configs[ 3]-= 4374;
	configs[15]-=    2;
	configs[16]-=    2;
	configs[26]-=   75;
	configs[27]-=   18;
	configs[28]-=   54;
	bb.mover.u4s[0]^=0x80800000;
}

void FlipFunctionBBBlack348() {
	configs[ 2]+= 4374;
	configs[ 3]+= 4374;
	configs[15]+=    2;
	configs[16]+=    2;
	configs[26]+=   75;
	configs[27]+=   18;
	configs[28]+=   54;
	bb.mover.u4s[0]^=0x80800000;
}

void FlipFunctionBBWhite349() {
	configs[ 2]-= 4374;
	configs[ 3]-= 4374;
	configs[ 4]-= 4374;
	configs[15]-=    2;
	configs[16]-=    2;
	configs[17]-=    2;
	configs[26]-=  237;
	configs[27]-=   18;
	configs[28]-=   54;
	configs[29]-=  162;
	bb.mover.u4s[0]^=0x80800000;
	bb.mover.u4s[1]^=0x80;
}

void FlipFunctionBBBlack349() {
	configs[ 2]+= 4374;
	configs[ 3]+= 4374;
	configs[ 4]+= 4374;
	configs[15]+=    2;
	configs[16]+=    2;
	configs[17]+=    2;
	configs[26]+=  237;
	configs[27]+=   18;
	configs[28]+=   54;
	configs[29]+=  162;
	bb.mover.u4s[0]^=0x80800000;
	bb.mover.u4s[1]^=0x80;
}

void FlipFunctionBBWhite350() {
	configs[ 2]-= 4374;
	configs[ 3]-= 4374;
	configs[ 4]-= 4374;
	configs[ 5]-= 4374;
	configs[15]-=    2;
	configs[16]-=    2;
	configs[17]-=    2;
	configs[18]-=    2;
	configs[26]-=  723;
	configs[27]-=   18;
	configs[28]-=   54;
	configs[29]-=  162;
	configs[30]-=  486;
	bb.mover.u4s[0]^=0x80800000;
	bb.mover.u4s[1]^=0x8080;
}

void FlipFunctionBBBlack350() {
	configs[ 2]+= 4374;
	configs[ 3]+= 4374;
	configs[ 4]+= 4374;
	configs[ 5]+= 4374;
	configs[15]+=    2;
	configs[16]+=    2;
	configs[17]+=    2;
	configs[18]+=    2;
	configs[26]+=  723;
	configs[27]+=   18;
	configs[28]+=   54;
	configs[29]+=  162;
	configs[30]+=  486;
	bb.mover.u4s[0]^=0x80800000;
	bb.mover.u4s[1]^=0x8080;
}

void FlipFunctionBBWhite351() {
	configs[ 2]-= 4374;
	configs[ 3]-= 4374;
	configs[ 4]-= 4374;
	configs[ 5]-= 4374;
	configs[ 6]-= 4374;
	configs[15]-=    2;
	configs[16]-=    2;
	configs[17]-=    2;
	configs[18]-=    2;
	configs[26]-= 2181;
	configs[27]-=   18;
	configs[28]-=   54;
	configs[29]-=  162;
	configs[30]-=  486;
	configs[31]-= 1458;
	bb.mover.u4s[0]^=0x80800000;
	bb.mover.u4s[1]^=0x808080;
}

void FlipFunctionBBBlack351() {
	configs[ 2]+= 4374;
	configs[ 3]+= 4374;
	configs[ 4]+= 4374;
	configs[ 5]+= 4374;
	configs[ 6]+= 4374;
	configs[15]+=    2;
	configs[16]+=    2;
	configs[17]+=    2;
	configs[18]+=    2;
	configs[26]+= 2181;
	configs[27]+=   18;
	configs[28]+=   54;
	configs[29]+=  162;
	configs[30]+=  486;
	configs[31]+= 1458;
	bb.mover.u4s[0]^=0x80800000;
	bb.mover.u4s[1]^=0x808080;
}

void FlipFunctionBBWhite352() {
	configs[ 2]-=    1;
	bb.mover.u4s[0]^=0x10000;
	bb.empty.u4s[0]^=0x10000;
}

void FlipFunctionBBBlack352() {
	configs[ 2]+=    1;
	bb.mover.u4s[0]^=0x10000;
	bb.empty.u4s[0]^=0x10000;
}

void FlipFunctionBBWhite353() {
	configs[ 2]-=    7;
	configs[ 9]-=   18;
	configs[20]-=   18;
	configs[33]-=    6;
	bb.mover.u4s[0]^=0x30000;
	bb.empty.u4s[0]^=0x10000;
}

void FlipFunctionBBBlack353() {
	configs[ 2]+=    7;
	configs[ 9]+=   18;
	configs[20]+=   18;
	configs[33]+=    6;
	bb.mover.u4s[0]^=0x30000;
	bb.empty.u4s[0]^=0x10000;
}

void FlipFunctionBBWhite354() {
	configs[ 2]-=   25;
	configs[ 9]-=   18;
	configs[10]-=   18;
	configs[20]-=   18;
	configs[21]-=   18;
	configs[32]-=   18;
	configs[33]-=    6;
	bb.mover.u4s[0]^=0x70000;
	bb.empty.u4s[0]^=0x10000;
}

void FlipFunctionBBBlack354() {
	configs[ 2]+=   25;
	configs[ 9]+=   18;
	configs[10]+=   18;
	configs[20]+=   18;
	configs[21]+=   18;
	configs[32]+=   18;
	configs[33]+=    6;
	bb.mover.u4s[0]^=0x70000;
	bb.empty.u4s[0]^=0x10000;
}

void FlipFunctionBBWhite355() {
	configs[ 2]-=   79;
	configs[ 9]-=   18;
	configs[10]-=   18;
	configs[11]-=   18;
	configs[20]-=   18;
	configs[21]-=   18;
	configs[22]-=   18;
	configs[31]-=   18;
	configs[32]-=   18;
	configs[33]-=    6;
	bb.mover.u4s[0]^=0xF0000;
	bb.empty.u4s[0]^=0x10000;
}

void FlipFunctionBBBlack355() {
	configs[ 2]+=   79;
	configs[ 9]+=   18;
	configs[10]+=   18;
	configs[11]+=   18;
	configs[20]+=   18;
	configs[21]+=   18;
	configs[22]+=   18;
	configs[31]+=   18;
	configs[32]+=   18;
	configs[33]+=    6;
	bb.mover.u4s[0]^=0xF0000;
	bb.empty.u4s[0]^=0x10000;
}

void FlipFunctionBBWhite356() {
	configs[ 2]-=  241;
	configs[ 9]-=   18;
	configs[10]-=   18;
	configs[11]-=   18;
	configs[12]-=   18;
	configs[20]-=   18;
	configs[21]-=   18;
	configs[22]-=   18;
	configs[23]-=   18;
	configs[30]-=   18;
	configs[31]-=   18;
	configs[32]-=   18;
	configs[33]-=    6;
	bb.mover.u4s[0]^=0x1F0000;
	bb.empty.u4s[0]^=0x10000;
}

void FlipFunctionBBBlack356() {
	configs[ 2]+=  241;
	configs[ 9]+=   18;
	configs[10]+=   18;
	configs[11]+=   18;
	configs[12]+=   18;
	configs[20]+=   18;
	configs[21]+=   18;
	configs[22]+=   18;
	configs[23]+=   18;
	configs[30]+=   18;
	configs[31]+=   18;
	configs[32]+=   18;
	configs[33]+=    6;
	bb.mover.u4s[0]^=0x1F0000;
	bb.empty.u4s[0]^=0x10000;
}

void FlipFunctionBBWhite357() {
	configs[ 2]-=  727;
	configs[ 9]-=   18;
	configs[10]-=   18;
	configs[11]-=   18;
	configs[12]-=   18;
	configs[13]-=   18;
	configs[20]-=   18;
	configs[21]-=   18;
	configs[22]-=   18;
	configs[23]-=   18;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[30]-=   18;
	configs[31]-=   18;
	configs[32]-=   18;
	configs[33]-=    6;
	bb.mover.u4s[0]^=0x3F0000;
	bb.empty.u4s[0]^=0x10000;
}

void FlipFunctionBBBlack357() {
	configs[ 2]+=  727;
	configs[ 9]+=   18;
	configs[10]+=   18;
	configs[11]+=   18;
	configs[12]+=   18;
	configs[13]+=   18;
	configs[20]+=   18;
	configs[21]+=   18;
	configs[22]+=   18;
	configs[23]+=   18;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[30]+=   18;
	configs[31]+=   18;
	configs[32]+=   18;
	configs[33]+=    6;
	bb.mover.u4s[0]^=0x3F0000;
	bb.empty.u4s[0]^=0x10000;
}

void FlipFunctionBBWhite358() {
	configs[ 2]-= 2185;
	configs[ 9]-=   18;
	configs[10]-=   18;
	configs[11]-=   18;
	configs[12]-=   18;
	configs[13]-=   18;
	configs[14]-=    6;
	configs[20]-=   18;
	configs[21]-=   18;
	configs[22]-=   18;
	configs[23]-=   18;
	configs[24]-=   18;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[29]-=   18;
	configs[30]-=   18;
	configs[31]-=   18;
	configs[32]-=   18;
	configs[33]-=    6;
	bb.mover.u4s[0]^=0x7F0000;
	bb.empty.u4s[0]^=0x10000;
}

void FlipFunctionBBBlack358() {
	configs[ 2]+= 2185;
	configs[ 9]+=   18;
	configs[10]+=   18;
	configs[11]+=   18;
	configs[12]+=   18;
	configs[13]+=   18;
	configs[14]+=    6;
	configs[20]+=   18;
	configs[21]+=   18;
	configs[22]+=   18;
	configs[23]+=   18;
	configs[24]+=   18;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[29]+=   18;
	configs[30]+=   18;
	configs[31]+=   18;
	configs[32]+=   18;
	configs[33]+=    6;
	bb.mover.u4s[0]^=0x7F0000;
	bb.empty.u4s[0]^=0x10000;
}

void FlipFunctionBBWhite359() {
	configs[ 8]-=    9;
}

void FlipFunctionBBBlack359() {
	configs[ 8]+=    9;
}

void FlipFunctionBBWhite360() {
	configs[ 1]-=    6;
	configs[ 8]-=   15;
	configs[20]-=    6;
	configs[32]-=    6;
	bb.mover.u4s[0]^=0x200;
}

void FlipFunctionBBBlack360() {
	configs[ 1]+=    6;
	configs[ 8]+=   15;
	configs[20]+=    6;
	configs[32]+=    6;
	bb.mover.u4s[0]^=0x200;
}

void FlipFunctionBBWhite361() {
	configs[19]-=    9;
}

void FlipFunctionBBBlack361() {
	configs[19]+=    9;
}

void FlipFunctionBBWhite362() {
	configs[ 3]-=    2;
	configs[ 9]-=   54;
	configs[19]-=   63;
	configs[35]-=    2;
	bb.mover.u4s[0]^=0x1000000;
}

void FlipFunctionBBBlack362() {
	configs[ 3]+=    2;
	configs[ 9]+=   54;
	configs[19]+=   63;
	configs[35]+=    2;
	bb.mover.u4s[0]^=0x1000000;
}

void FlipFunctionBBWhite363() {
	configs[ 3]-=    2;
	configs[ 4]-=    2;
	configs[ 9]-=   54;
	configs[10]-=  162;
	configs[19]-=  225;
	configs[35]-=    2;
	configs[36]-=    2;
	bb.mover.u4s[0]^=0x1000000;
	bb.mover.u4s[1]^=0x1;
}

void FlipFunctionBBBlack363() {
	configs[ 3]+=    2;
	configs[ 4]+=    2;
	configs[ 9]+=   54;
	configs[10]+=  162;
	configs[19]+=  225;
	configs[35]+=    2;
	configs[36]+=    2;
	bb.mover.u4s[0]^=0x1000000;
	bb.mover.u4s[1]^=0x1;
}

void FlipFunctionBBWhite364() {
	configs[ 3]-=    2;
	configs[ 4]-=    2;
	configs[ 5]-=    2;
	configs[ 9]-=   54;
	configs[10]-=  162;
	configs[11]-=  486;
	configs[19]-=  711;
	configs[35]-=    2;
	configs[36]-=    2;
	configs[37]-=    2;
	bb.mover.u4s[0]^=0x1000000;
	bb.mover.u4s[1]^=0x101;
}

void FlipFunctionBBBlack364() {
	configs[ 3]+=    2;
	configs[ 4]+=    2;
	configs[ 5]+=    2;
	configs[ 9]+=   54;
	configs[10]+=  162;
	configs[11]+=  486;
	configs[19]+=  711;
	configs[35]+=    2;
	configs[36]+=    2;
	configs[37]+=    2;
	bb.mover.u4s[0]^=0x1000000;
	bb.mover.u4s[1]^=0x101;
}

void FlipFunctionBBWhite365() {
	configs[ 3]-=    2;
	configs[ 4]-=    2;
	configs[ 5]-=    2;
	configs[ 6]-=    2;
	configs[ 9]-=   54;
	configs[10]-=  162;
	configs[11]-=  486;
	configs[12]-= 1458;
	configs[19]-= 2169;
	configs[35]-=    2;
	configs[36]-=    2;
	configs[37]-=    2;
	bb.mover.u4s[0]^=0x1000000;
	bb.mover.u4s[1]^=0x10101;
}

void FlipFunctionBBBlack365() {
	configs[ 3]+=    2;
	configs[ 4]+=    2;
	configs[ 5]+=    2;
	configs[ 6]+=    2;
	configs[ 9]+=   54;
	configs[10]+=  162;
	configs[11]+=  486;
	configs[12]+= 1458;
	configs[19]+= 2169;
	configs[35]+=    2;
	configs[36]+=    2;
	configs[37]+=    2;
	bb.mover.u4s[0]^=0x1000000;
	bb.mover.u4s[1]^=0x10101;
}

void FlipFunctionBBWhite366() {
	configs[ 1]-=    2;
	configs[19]-=   15;
	configs[33]-=    2;
	bb.mover.u4s[0]^=0x100;
}

void FlipFunctionBBBlack366() {
	configs[ 1]+=    2;
	configs[19]+=   15;
	configs[33]+=    2;
	bb.mover.u4s[0]^=0x100;
}

void FlipFunctionBBWhite367() {
	configs[ 1]-=    2;
	configs[ 3]-=    2;
	configs[ 9]-=   54;
	configs[19]-=   69;
	configs[33]-=    2;
	configs[35]-=    2;
	bb.mover.u4s[0]^=0x1000100;
}

void FlipFunctionBBBlack367() {
	configs[ 1]+=    2;
	configs[ 3]+=    2;
	configs[ 9]+=   54;
	configs[19]+=   69;
	configs[33]+=    2;
	configs[35]+=    2;
	bb.mover.u4s[0]^=0x1000100;
}

void FlipFunctionBBWhite368() {
	configs[ 1]-=    2;
	configs[ 3]-=    2;
	configs[ 4]-=    2;
	configs[ 9]-=   54;
	configs[10]-=  162;
	configs[19]-=  231;
	configs[33]-=    2;
	configs[35]-=    2;
	configs[36]-=    2;
	bb.mover.u4s[0]^=0x1000100;
	bb.mover.u4s[1]^=0x1;
}

void FlipFunctionBBBlack368() {
	configs[ 1]+=    2;
	configs[ 3]+=    2;
	configs[ 4]+=    2;
	configs[ 9]+=   54;
	configs[10]+=  162;
	configs[19]+=  231;
	configs[33]+=    2;
	configs[35]+=    2;
	configs[36]+=    2;
	bb.mover.u4s[0]^=0x1000100;
	bb.mover.u4s[1]^=0x1;
}

void FlipFunctionBBWhite369() {
	configs[ 1]-=    2;
	configs[ 3]-=    2;
	configs[ 4]-=    2;
	configs[ 5]-=    2;
	configs[ 9]-=   54;
	configs[10]-=  162;
	configs[11]-=  486;
	configs[19]-=  717;
	configs[33]-=    2;
	configs[35]-=    2;
	configs[36]-=    2;
	configs[37]-=    2;
	bb.mover.u4s[0]^=0x1000100;
	bb.mover.u4s[1]^=0x101;
}

void FlipFunctionBBBlack369() {
	configs[ 1]+=    2;
	configs[ 3]+=    2;
	configs[ 4]+=    2;
	configs[ 5]+=    2;
	configs[ 9]+=   54;
	configs[10]+=  162;
	configs[11]+=  486;
	configs[19]+=  717;
	configs[33]+=    2;
	configs[35]+=    2;
	configs[36]+=    2;
	configs[37]+=    2;
	bb.mover.u4s[0]^=0x1000100;
	bb.mover.u4s[1]^=0x101;
}

void FlipFunctionBBWhite370() {
	configs[ 1]-=    2;
	configs[ 3]-=    2;
	configs[ 4]-=    2;
	configs[ 5]-=    2;
	configs[ 6]-=    2;
	configs[ 9]-=   54;
	configs[10]-=  162;
	configs[11]-=  486;
	configs[12]-= 1458;
	configs[19]-= 2175;
	configs[33]-=    2;
	configs[35]-=    2;
	configs[36]-=    2;
	configs[37]-=    2;
	bb.mover.u4s[0]^=0x1000100;
	bb.mover.u4s[1]^=0x10101;
}

void FlipFunctionBBBlack370() {
	configs[ 1]+=    2;
	configs[ 3]+=    2;
	configs[ 4]+=    2;
	configs[ 5]+=    2;
	configs[ 6]+=    2;
	configs[ 9]+=   54;
	configs[10]+=  162;
	configs[11]+=  486;
	configs[12]+= 1458;
	configs[19]+= 2175;
	configs[33]+=    2;
	configs[35]+=    2;
	configs[36]+=    2;
	configs[37]+=    2;
	bb.mover.u4s[0]^=0x1000100;
	bb.mover.u4s[1]^=0x10101;
}

void FlipFunctionBBWhite371() {
	configs[34]-=    1;
}

void FlipFunctionBBBlack371() {
	configs[34]+=    1;
}

void FlipFunctionBBWhite372() {
	configs[ 3]-=    6;
	configs[10]-=   54;
	configs[20]-=   54;
	configs[34]-=    7;
	bb.mover.u4s[0]^=0x2000000;
}

void FlipFunctionBBBlack372() {
	configs[ 3]+=    6;
	configs[10]+=   54;
	configs[20]+=   54;
	configs[34]+=    7;
	bb.mover.u4s[0]^=0x2000000;
}

void FlipFunctionBBWhite373() {
	configs[ 3]-=    6;
	configs[ 4]-=   18;
	configs[10]-=   54;
	configs[12]-=  162;
	configs[20]-=   54;
	configs[21]-=  162;
	configs[34]-=   25;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBBlack373() {
	configs[ 3]+=    6;
	configs[ 4]+=   18;
	configs[10]+=   54;
	configs[12]+=  162;
	configs[20]+=   54;
	configs[21]+=  162;
	configs[34]+=   25;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBWhite374() {
	configs[ 3]-=    6;
	configs[ 4]-=   18;
	configs[ 5]-=   54;
	configs[10]-=   54;
	configs[12]-=  162;
	configs[14]-=  162;
	configs[20]-=   54;
	configs[21]-=  162;
	configs[22]-=  486;
	configs[34]-=   79;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x804;
}

void FlipFunctionBBBlack374() {
	configs[ 3]+=    6;
	configs[ 4]+=   18;
	configs[ 5]+=   54;
	configs[10]+=   54;
	configs[12]+=  162;
	configs[14]+=  162;
	configs[20]+=   54;
	configs[21]+=  162;
	configs[22]+=  486;
	configs[34]+=   79;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x804;
}

void FlipFunctionBBWhite375() {
	configs[ 3]-=    6;
	configs[ 4]-=   18;
	configs[ 5]-=   54;
	configs[ 6]-=  162;
	configs[10]-=   54;
	configs[12]-=  162;
	configs[14]-=  162;
	configs[16]-=   54;
	configs[20]-=   54;
	configs[21]-=  162;
	configs[22]-=  486;
	configs[23]-= 1458;
	configs[34]-=  241;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x100804;
}

void FlipFunctionBBBlack375() {
	configs[ 3]+=    6;
	configs[ 4]+=   18;
	configs[ 5]+=   54;
	configs[ 6]+=  162;
	configs[10]+=   54;
	configs[12]+=  162;
	configs[14]+=  162;
	configs[16]+=   54;
	configs[20]+=   54;
	configs[21]+=  162;
	configs[22]+=  486;
	configs[23]+= 1458;
	configs[34]+=  241;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x100804;
}

void FlipFunctionBBWhite376() {
	configs[ 2]-=    3;
	bb.mover.u4s[0]^=0x20000;
	bb.empty.u4s[0]^=0x20000;
}

void FlipFunctionBBBlack376() {
	configs[ 2]+=    3;
	bb.mover.u4s[0]^=0x20000;
	bb.empty.u4s[0]^=0x20000;
}

void FlipFunctionBBWhite377() {
	configs[ 2]-=   21;
	configs[10]-=   18;
	configs[21]-=   18;
	configs[32]-=   18;
	bb.mover.u4s[0]^=0x60000;
	bb.empty.u4s[0]^=0x20000;
}

void FlipFunctionBBBlack377() {
	configs[ 2]+=   21;
	configs[10]+=   18;
	configs[21]+=   18;
	configs[32]+=   18;
	bb.mover.u4s[0]^=0x60000;
	bb.empty.u4s[0]^=0x20000;
}

void FlipFunctionBBWhite378() {
	configs[ 2]-=   75;
	configs[10]-=   18;
	configs[11]-=   18;
	configs[21]-=   18;
	configs[22]-=   18;
	configs[31]-=   18;
	configs[32]-=   18;
	bb.mover.u4s[0]^=0xE0000;
	bb.empty.u4s[0]^=0x20000;
}

void FlipFunctionBBBlack378() {
	configs[ 2]+=   75;
	configs[10]+=   18;
	configs[11]+=   18;
	configs[21]+=   18;
	configs[22]+=   18;
	configs[31]+=   18;
	configs[32]+=   18;
	bb.mover.u4s[0]^=0xE0000;
	bb.empty.u4s[0]^=0x20000;
}

void FlipFunctionBBWhite379() {
	configs[ 2]-=  237;
	configs[10]-=   18;
	configs[11]-=   18;
	configs[12]-=   18;
	configs[21]-=   18;
	configs[22]-=   18;
	configs[23]-=   18;
	configs[30]-=   18;
	configs[31]-=   18;
	configs[32]-=   18;
	bb.mover.u4s[0]^=0x1E0000;
	bb.empty.u4s[0]^=0x20000;
}

void FlipFunctionBBBlack379() {
	configs[ 2]+=  237;
	configs[10]+=   18;
	configs[11]+=   18;
	configs[12]+=   18;
	configs[21]+=   18;
	configs[22]+=   18;
	configs[23]+=   18;
	configs[30]+=   18;
	configs[31]+=   18;
	configs[32]+=   18;
	bb.mover.u4s[0]^=0x1E0000;
	bb.empty.u4s[0]^=0x20000;
}

void FlipFunctionBBWhite380() {
	configs[ 2]-=  723;
	configs[10]-=   18;
	configs[11]-=   18;
	configs[12]-=   18;
	configs[13]-=   18;
	configs[21]-=   18;
	configs[22]-=   18;
	configs[23]-=   18;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[30]-=   18;
	configs[31]-=   18;
	configs[32]-=   18;
	bb.mover.u4s[0]^=0x3E0000;
	bb.empty.u4s[0]^=0x20000;
}

void FlipFunctionBBBlack380() {
	configs[ 2]+=  723;
	configs[10]+=   18;
	configs[11]+=   18;
	configs[12]+=   18;
	configs[13]+=   18;
	configs[21]+=   18;
	configs[22]+=   18;
	configs[23]+=   18;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[30]+=   18;
	configs[31]+=   18;
	configs[32]+=   18;
	bb.mover.u4s[0]^=0x3E0000;
	bb.empty.u4s[0]^=0x20000;
}

void FlipFunctionBBWhite381() {
	configs[ 2]-= 2181;
	configs[10]-=   18;
	configs[11]-=   18;
	configs[12]-=   18;
	configs[13]-=   18;
	configs[14]-=    6;
	configs[21]-=   18;
	configs[22]-=   18;
	configs[23]-=   18;
	configs[24]-=   18;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[29]-=   18;
	configs[30]-=   18;
	configs[31]-=   18;
	configs[32]-=   18;
	bb.mover.u4s[0]^=0x7E0000;
	bb.empty.u4s[0]^=0x20000;
}

void FlipFunctionBBBlack381() {
	configs[ 2]+= 2181;
	configs[10]+=   18;
	configs[11]+=   18;
	configs[12]+=   18;
	configs[13]+=   18;
	configs[14]+=    6;
	configs[21]+=   18;
	configs[22]+=   18;
	configs[23]+=   18;
	configs[24]+=   18;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[29]+=   18;
	configs[30]+=   18;
	configs[31]+=   18;
	configs[32]+=   18;
	bb.mover.u4s[0]^=0x7E0000;
	bb.empty.u4s[0]^=0x20000;
}

void FlipFunctionBBWhite382() {
	configs[ 9]-=    9;
}

void FlipFunctionBBBlack382() {
	configs[ 9]+=    9;
}

void FlipFunctionBBWhite383() {
	configs[ 1]-=   18;
	configs[ 9]-=   15;
	configs[21]-=    6;
	configs[31]-=    6;
	bb.mover.u4s[0]^=0x400;
}

void FlipFunctionBBBlack383() {
	configs[ 1]+=   18;
	configs[ 9]+=   15;
	configs[21]+=    6;
	configs[31]+=    6;
	bb.mover.u4s[0]^=0x400;
}

void FlipFunctionBBWhite384() {
	configs[20]-=    9;
}

void FlipFunctionBBBlack384() {
	configs[20]+=    9;
}

void FlipFunctionBBWhite385() {
	configs[ 3]-=    6;
	configs[10]-=   54;
	configs[20]-=   63;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x2000000;
}

void FlipFunctionBBBlack385() {
	configs[ 3]+=    6;
	configs[10]+=   54;
	configs[20]+=   63;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x2000000;
}

void FlipFunctionBBWhite386() {
	configs[ 3]-=    6;
	configs[ 4]-=    6;
	configs[10]-=   54;
	configs[11]-=  162;
	configs[20]-=  225;
	configs[34]-=    6;
	configs[35]-=    6;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBBlack386() {
	configs[ 3]+=    6;
	configs[ 4]+=    6;
	configs[10]+=   54;
	configs[11]+=  162;
	configs[20]+=  225;
	configs[34]+=    6;
	configs[35]+=    6;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBWhite387() {
	configs[ 3]-=    6;
	configs[ 4]-=    6;
	configs[ 5]-=    6;
	configs[10]-=   54;
	configs[11]-=  162;
	configs[12]-=  486;
	configs[20]-=  711;
	configs[34]-=    6;
	configs[35]-=    6;
	configs[36]-=    6;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x202;
}

void FlipFunctionBBBlack387() {
	configs[ 3]+=    6;
	configs[ 4]+=    6;
	configs[ 5]+=    6;
	configs[10]+=   54;
	configs[11]+=  162;
	configs[12]+=  486;
	configs[20]+=  711;
	configs[34]+=    6;
	configs[35]+=    6;
	configs[36]+=    6;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x202;
}

void FlipFunctionBBWhite388() {
	configs[ 3]-=    6;
	configs[ 4]-=    6;
	configs[ 5]-=    6;
	configs[ 6]-=    6;
	configs[10]-=   54;
	configs[11]-=  162;
	configs[12]-=  486;
	configs[13]-= 1458;
	configs[20]-= 2169;
	configs[34]-=    6;
	configs[35]-=    6;
	configs[36]-=    6;
	configs[37]-=    6;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x20202;
}

void FlipFunctionBBBlack388() {
	configs[ 3]+=    6;
	configs[ 4]+=    6;
	configs[ 5]+=    6;
	configs[ 6]+=    6;
	configs[10]+=   54;
	configs[11]+=  162;
	configs[12]+=  486;
	configs[13]+= 1458;
	configs[20]+= 2169;
	configs[34]+=    6;
	configs[35]+=    6;
	configs[36]+=    6;
	configs[37]+=    6;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x20202;
}

void FlipFunctionBBWhite389() {
	configs[ 1]-=    6;
	configs[ 8]-=    6;
	configs[20]-=   15;
	configs[32]-=    6;
	bb.mover.u4s[0]^=0x200;
}

void FlipFunctionBBBlack389() {
	configs[ 1]+=    6;
	configs[ 8]+=    6;
	configs[20]+=   15;
	configs[32]+=    6;
	bb.mover.u4s[0]^=0x200;
}

void FlipFunctionBBWhite390() {
	configs[ 1]-=    6;
	configs[ 3]-=    6;
	configs[ 8]-=    6;
	configs[10]-=   54;
	configs[20]-=   69;
	configs[32]-=    6;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x2000200;
}

void FlipFunctionBBBlack390() {
	configs[ 1]+=    6;
	configs[ 3]+=    6;
	configs[ 8]+=    6;
	configs[10]+=   54;
	configs[20]+=   69;
	configs[32]+=    6;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x2000200;
}

void FlipFunctionBBWhite391() {
	configs[ 1]-=    6;
	configs[ 3]-=    6;
	configs[ 4]-=    6;
	configs[ 8]-=    6;
	configs[10]-=   54;
	configs[11]-=  162;
	configs[20]-=  231;
	configs[32]-=    6;
	configs[34]-=    6;
	configs[35]-=    6;
	bb.mover.u4s[0]^=0x2000200;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBBlack391() {
	configs[ 1]+=    6;
	configs[ 3]+=    6;
	configs[ 4]+=    6;
	configs[ 8]+=    6;
	configs[10]+=   54;
	configs[11]+=  162;
	configs[20]+=  231;
	configs[32]+=    6;
	configs[34]+=    6;
	configs[35]+=    6;
	bb.mover.u4s[0]^=0x2000200;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBWhite392() {
	configs[ 1]-=    6;
	configs[ 3]-=    6;
	configs[ 4]-=    6;
	configs[ 5]-=    6;
	configs[ 8]-=    6;
	configs[10]-=   54;
	configs[11]-=  162;
	configs[12]-=  486;
	configs[20]-=  717;
	configs[32]-=    6;
	configs[34]-=    6;
	configs[35]-=    6;
	configs[36]-=    6;
	bb.mover.u4s[0]^=0x2000200;
	bb.mover.u4s[1]^=0x202;
}

void FlipFunctionBBBlack392() {
	configs[ 1]+=    6;
	configs[ 3]+=    6;
	configs[ 4]+=    6;
	configs[ 5]+=    6;
	configs[ 8]+=    6;
	configs[10]+=   54;
	configs[11]+=  162;
	configs[12]+=  486;
	configs[20]+=  717;
	configs[32]+=    6;
	configs[34]+=    6;
	configs[35]+=    6;
	configs[36]+=    6;
	bb.mover.u4s[0]^=0x2000200;
	bb.mover.u4s[1]^=0x202;
}

void FlipFunctionBBWhite393() {
	configs[ 1]-=    6;
	configs[ 3]-=    6;
	configs[ 4]-=    6;
	configs[ 5]-=    6;
	configs[ 6]-=    6;
	configs[ 8]-=    6;
	configs[10]-=   54;
	configs[11]-=  162;
	configs[12]-=  486;
	configs[13]-= 1458;
	configs[20]-= 2175;
	configs[32]-=    6;
	configs[34]-=    6;
	configs[35]-=    6;
	configs[36]-=    6;
	configs[37]-=    6;
	bb.mover.u4s[0]^=0x2000200;
	bb.mover.u4s[1]^=0x20202;
}

void FlipFunctionBBBlack393() {
	configs[ 1]+=    6;
	configs[ 3]+=    6;
	configs[ 4]+=    6;
	configs[ 5]+=    6;
	configs[ 6]+=    6;
	configs[ 8]+=    6;
	configs[10]+=   54;
	configs[11]+=  162;
	configs[12]+=  486;
	configs[13]+= 1458;
	configs[20]+= 2175;
	configs[32]+=    6;
	configs[34]+=    6;
	configs[35]+=    6;
	configs[36]+=    6;
	configs[37]+=    6;
	bb.mover.u4s[0]^=0x2000200;
	bb.mover.u4s[1]^=0x20202;
}

void FlipFunctionBBWhite394() {
	configs[33]-=    3;
}

void FlipFunctionBBBlack394() {
	configs[33]+=    3;
}

void FlipFunctionBBWhite395() {
	configs[ 3]-=   18;
	configs[11]-=   54;
	configs[21]-=   54;
	configs[33]-=   21;
	bb.mover.u4s[0]^=0x4000000;
}

void FlipFunctionBBBlack395() {
	configs[ 3]+=   18;
	configs[11]+=   54;
	configs[21]+=   54;
	configs[33]+=   21;
	bb.mover.u4s[0]^=0x4000000;
}

void FlipFunctionBBWhite396() {
	configs[ 3]-=   18;
	configs[ 4]-=   54;
	configs[11]-=   54;
	configs[13]-=  162;
	configs[21]-=   54;
	configs[22]-=  162;
	configs[33]-=   75;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBBlack396() {
	configs[ 3]+=   18;
	configs[ 4]+=   54;
	configs[11]+=   54;
	configs[13]+=  162;
	configs[21]+=   54;
	configs[22]+=  162;
	configs[33]+=   75;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBWhite397() {
	configs[ 3]-=   18;
	configs[ 4]-=   54;
	configs[ 5]-=  162;
	configs[11]-=   54;
	configs[13]-=  162;
	configs[15]-=   54;
	configs[21]-=   54;
	configs[22]-=  162;
	configs[23]-=  486;
	configs[33]-=  237;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x1008;
}

void FlipFunctionBBBlack397() {
	configs[ 3]+=   18;
	configs[ 4]+=   54;
	configs[ 5]+=  162;
	configs[11]+=   54;
	configs[13]+=  162;
	configs[15]+=   54;
	configs[21]+=   54;
	configs[22]+=  162;
	configs[23]+=  486;
	configs[33]+=  237;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x1008;
}

void FlipFunctionBBWhite398() {
	configs[ 3]-=   18;
	configs[ 4]-=   54;
	configs[ 5]-=  162;
	configs[ 6]-=  486;
	configs[11]-=   54;
	configs[13]-=  162;
	configs[15]-=   54;
	configs[17]-=   18;
	configs[21]-=   54;
	configs[22]-=  162;
	configs[23]-=  486;
	configs[24]-= 1458;
	configs[33]-=  723;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x201008;
}

void FlipFunctionBBBlack398() {
	configs[ 3]+=   18;
	configs[ 4]+=   54;
	configs[ 5]+=  162;
	configs[ 6]+=  486;
	configs[11]+=   54;
	configs[13]+=  162;
	configs[15]+=   54;
	configs[17]+=   18;
	configs[21]+=   54;
	configs[22]+=  162;
	configs[23]+=  486;
	configs[24]+= 1458;
	configs[33]+=  723;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x201008;
}

void FlipFunctionBBWhite399() {
	configs[ 2]-=    9;
	bb.mover.u4s[0]^=0x40000;
	bb.empty.u4s[0]^=0x40000;
}

void FlipFunctionBBBlack399() {
	configs[ 2]+=    9;
	bb.mover.u4s[0]^=0x40000;
	bb.empty.u4s[0]^=0x40000;
}

void FlipFunctionBBWhite400() {
	configs[ 2]-=   63;
	configs[11]-=   18;
	configs[22]-=   18;
	configs[31]-=   18;
	bb.mover.u4s[0]^=0xC0000;
	bb.empty.u4s[0]^=0x40000;
}

void FlipFunctionBBBlack400() {
	configs[ 2]+=   63;
	configs[11]+=   18;
	configs[22]+=   18;
	configs[31]+=   18;
	bb.mover.u4s[0]^=0xC0000;
	bb.empty.u4s[0]^=0x40000;
}

void FlipFunctionBBWhite401() {
	configs[ 2]-=  225;
	configs[11]-=   18;
	configs[12]-=   18;
	configs[22]-=   18;
	configs[23]-=   18;
	configs[30]-=   18;
	configs[31]-=   18;
	bb.mover.u4s[0]^=0x1C0000;
	bb.empty.u4s[0]^=0x40000;
}

void FlipFunctionBBBlack401() {
	configs[ 2]+=  225;
	configs[11]+=   18;
	configs[12]+=   18;
	configs[22]+=   18;
	configs[23]+=   18;
	configs[30]+=   18;
	configs[31]+=   18;
	bb.mover.u4s[0]^=0x1C0000;
	bb.empty.u4s[0]^=0x40000;
}

void FlipFunctionBBWhite402() {
	configs[ 2]-=  711;
	configs[11]-=   18;
	configs[12]-=   18;
	configs[13]-=   18;
	configs[22]-=   18;
	configs[23]-=   18;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[30]-=   18;
	configs[31]-=   18;
	bb.mover.u4s[0]^=0x3C0000;
	bb.empty.u4s[0]^=0x40000;
}

void FlipFunctionBBBlack402() {
	configs[ 2]+=  711;
	configs[11]+=   18;
	configs[12]+=   18;
	configs[13]+=   18;
	configs[22]+=   18;
	configs[23]+=   18;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[30]+=   18;
	configs[31]+=   18;
	bb.mover.u4s[0]^=0x3C0000;
	bb.empty.u4s[0]^=0x40000;
}

void FlipFunctionBBWhite403() {
	configs[ 2]-= 2169;
	configs[11]-=   18;
	configs[12]-=   18;
	configs[13]-=   18;
	configs[14]-=    6;
	configs[22]-=   18;
	configs[23]-=   18;
	configs[24]-=   18;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[29]-=   18;
	configs[30]-=   18;
	configs[31]-=   18;
	bb.mover.u4s[0]^=0x7C0000;
	bb.empty.u4s[0]^=0x40000;
}

void FlipFunctionBBBlack403() {
	configs[ 2]+= 2169;
	configs[11]+=   18;
	configs[12]+=   18;
	configs[13]+=   18;
	configs[14]+=    6;
	configs[22]+=   18;
	configs[23]+=   18;
	configs[24]+=   18;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[29]+=   18;
	configs[30]+=   18;
	configs[31]+=   18;
	bb.mover.u4s[0]^=0x7C0000;
	bb.empty.u4s[0]^=0x40000;
}

void FlipFunctionBBWhite404() {
	configs[ 2]-=   15;
	configs[ 9]-=   18;
	configs[20]-=   18;
	configs[33]-=    6;
	bb.mover.u4s[0]^=0x60000;
	bb.empty.u4s[0]^=0x40000;
}

void FlipFunctionBBBlack404() {
	configs[ 2]+=   15;
	configs[ 9]+=   18;
	configs[20]+=   18;
	configs[33]+=    6;
	bb.mover.u4s[0]^=0x60000;
	bb.empty.u4s[0]^=0x40000;
}

void FlipFunctionBBWhite405() {
	configs[ 2]-=   69;
	configs[ 9]-=   18;
	configs[11]-=   18;
	configs[20]-=   18;
	configs[22]-=   18;
	configs[31]-=   18;
	configs[33]-=    6;
	bb.mover.u4s[0]^=0xE0000;
	bb.empty.u4s[0]^=0x40000;
}

void FlipFunctionBBBlack405() {
	configs[ 2]+=   69;
	configs[ 9]+=   18;
	configs[11]+=   18;
	configs[20]+=   18;
	configs[22]+=   18;
	configs[31]+=   18;
	configs[33]+=    6;
	bb.mover.u4s[0]^=0xE0000;
	bb.empty.u4s[0]^=0x40000;
}

void FlipFunctionBBWhite406() {
	configs[ 2]-=  231;
	configs[ 9]-=   18;
	configs[11]-=   18;
	configs[12]-=   18;
	configs[20]-=   18;
	configs[22]-=   18;
	configs[23]-=   18;
	configs[30]-=   18;
	configs[31]-=   18;
	configs[33]-=    6;
	bb.mover.u4s[0]^=0x1E0000;
	bb.empty.u4s[0]^=0x40000;
}

void FlipFunctionBBBlack406() {
	configs[ 2]+=  231;
	configs[ 9]+=   18;
	configs[11]+=   18;
	configs[12]+=   18;
	configs[20]+=   18;
	configs[22]+=   18;
	configs[23]+=   18;
	configs[30]+=   18;
	configs[31]+=   18;
	configs[33]+=    6;
	bb.mover.u4s[0]^=0x1E0000;
	bb.empty.u4s[0]^=0x40000;
}

void FlipFunctionBBWhite407() {
	configs[ 2]-=  717;
	configs[ 9]-=   18;
	configs[11]-=   18;
	configs[12]-=   18;
	configs[13]-=   18;
	configs[20]-=   18;
	configs[22]-=   18;
	configs[23]-=   18;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[30]-=   18;
	configs[31]-=   18;
	configs[33]-=    6;
	bb.mover.u4s[0]^=0x3E0000;
	bb.empty.u4s[0]^=0x40000;
}

void FlipFunctionBBBlack407() {
	configs[ 2]+=  717;
	configs[ 9]+=   18;
	configs[11]+=   18;
	configs[12]+=   18;
	configs[13]+=   18;
	configs[20]+=   18;
	configs[22]+=   18;
	configs[23]+=   18;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[30]+=   18;
	configs[31]+=   18;
	configs[33]+=    6;
	bb.mover.u4s[0]^=0x3E0000;
	bb.empty.u4s[0]^=0x40000;
}

void FlipFunctionBBWhite408() {
	configs[ 2]-= 2175;
	configs[ 9]-=   18;
	configs[11]-=   18;
	configs[12]-=   18;
	configs[13]-=   18;
	configs[14]-=    6;
	configs[20]-=   18;
	configs[22]-=   18;
	configs[23]-=   18;
	configs[24]-=   18;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[29]-=   18;
	configs[30]-=   18;
	configs[31]-=   18;
	configs[33]-=    6;
	bb.mover.u4s[0]^=0x7E0000;
	bb.empty.u4s[0]^=0x40000;
}

void FlipFunctionBBBlack408() {
	configs[ 2]+= 2175;
	configs[ 9]+=   18;
	configs[11]+=   18;
	configs[12]+=   18;
	configs[13]+=   18;
	configs[14]+=    6;
	configs[20]+=   18;
	configs[22]+=   18;
	configs[23]+=   18;
	configs[24]+=   18;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[29]+=   18;
	configs[30]+=   18;
	configs[31]+=   18;
	configs[33]+=    6;
	bb.mover.u4s[0]^=0x7E0000;
	bb.empty.u4s[0]^=0x40000;
}

void FlipFunctionBBWhite409() {
	configs[10]-=    9;
}

void FlipFunctionBBBlack409() {
	configs[10]+=    9;
}

void FlipFunctionBBWhite410() {
	configs[ 3]-=    6;
	configs[10]-=   63;
	configs[20]-=   54;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x2000000;
}

void FlipFunctionBBBlack410() {
	configs[ 3]+=    6;
	configs[10]+=   63;
	configs[20]+=   54;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x2000000;
}

void FlipFunctionBBWhite411() {
	configs[ 1]-=   54;
	configs[10]-=   15;
	configs[22]-=    6;
	configs[30]-=    6;
	bb.mover.u4s[0]^=0x800;
}

void FlipFunctionBBBlack411() {
	configs[ 1]+=   54;
	configs[10]+=   15;
	configs[22]+=    6;
	configs[30]+=    6;
	bb.mover.u4s[0]^=0x800;
}

void FlipFunctionBBWhite412() {
	configs[ 1]-=   54;
	configs[ 3]-=    6;
	configs[10]-=   69;
	configs[20]-=   54;
	configs[22]-=    6;
	configs[30]-=    6;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x2000800;
}

void FlipFunctionBBBlack412() {
	configs[ 1]+=   54;
	configs[ 3]+=    6;
	configs[10]+=   69;
	configs[20]+=   54;
	configs[22]+=    6;
	configs[30]+=    6;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x2000800;
}

void FlipFunctionBBWhite413() {
	configs[21]-=    9;
}

void FlipFunctionBBBlack413() {
	configs[21]+=    9;
}

void FlipFunctionBBWhite414() {
	configs[ 3]-=   18;
	configs[11]-=   54;
	configs[21]-=   63;
	configs[33]-=   18;
	bb.mover.u4s[0]^=0x4000000;
}

void FlipFunctionBBBlack414() {
	configs[ 3]+=   18;
	configs[11]+=   54;
	configs[21]+=   63;
	configs[33]+=   18;
	bb.mover.u4s[0]^=0x4000000;
}

void FlipFunctionBBWhite415() {
	configs[ 3]-=   18;
	configs[ 4]-=   18;
	configs[11]-=   54;
	configs[12]-=  162;
	configs[21]-=  225;
	configs[33]-=   18;
	configs[34]-=   18;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBBlack415() {
	configs[ 3]+=   18;
	configs[ 4]+=   18;
	configs[11]+=   54;
	configs[12]+=  162;
	configs[21]+=  225;
	configs[33]+=   18;
	configs[34]+=   18;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBWhite416() {
	configs[ 3]-=   18;
	configs[ 4]-=   18;
	configs[ 5]-=   18;
	configs[11]-=   54;
	configs[12]-=  162;
	configs[13]-=  486;
	configs[21]-=  711;
	configs[33]-=   18;
	configs[34]-=   18;
	configs[35]-=   18;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x404;
}

void FlipFunctionBBBlack416() {
	configs[ 3]+=   18;
	configs[ 4]+=   18;
	configs[ 5]+=   18;
	configs[11]+=   54;
	configs[12]+=  162;
	configs[13]+=  486;
	configs[21]+=  711;
	configs[33]+=   18;
	configs[34]+=   18;
	configs[35]+=   18;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x404;
}

void FlipFunctionBBWhite417() {
	configs[ 3]-=   18;
	configs[ 4]-=   18;
	configs[ 5]-=   18;
	configs[ 6]-=   18;
	configs[11]-=   54;
	configs[12]-=  162;
	configs[13]-=  486;
	configs[14]-=  486;
	configs[21]-= 2169;
	configs[33]-=   18;
	configs[34]-=   18;
	configs[35]-=   18;
	configs[36]-=   18;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x40404;
}

void FlipFunctionBBBlack417() {
	configs[ 3]+=   18;
	configs[ 4]+=   18;
	configs[ 5]+=   18;
	configs[ 6]+=   18;
	configs[11]+=   54;
	configs[12]+=  162;
	configs[13]+=  486;
	configs[14]+=  486;
	configs[21]+= 2169;
	configs[33]+=   18;
	configs[34]+=   18;
	configs[35]+=   18;
	configs[36]+=   18;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x40404;
}

void FlipFunctionBBWhite418() {
	configs[ 1]-=   18;
	configs[ 9]-=    6;
	configs[21]-=   15;
	configs[31]-=    6;
	bb.mover.u4s[0]^=0x400;
}

void FlipFunctionBBBlack418() {
	configs[ 1]+=   18;
	configs[ 9]+=    6;
	configs[21]+=   15;
	configs[31]+=    6;
	bb.mover.u4s[0]^=0x400;
}

void FlipFunctionBBWhite419() {
	configs[ 1]-=   18;
	configs[ 3]-=   18;
	configs[ 9]-=    6;
	configs[11]-=   54;
	configs[21]-=   69;
	configs[31]-=    6;
	configs[33]-=   18;
	bb.mover.u4s[0]^=0x4000400;
}

void FlipFunctionBBBlack419() {
	configs[ 1]+=   18;
	configs[ 3]+=   18;
	configs[ 9]+=    6;
	configs[11]+=   54;
	configs[21]+=   69;
	configs[31]+=    6;
	configs[33]+=   18;
	bb.mover.u4s[0]^=0x4000400;
}

void FlipFunctionBBWhite420() {
	configs[ 1]-=   18;
	configs[ 3]-=   18;
	configs[ 4]-=   18;
	configs[ 9]-=    6;
	configs[11]-=   54;
	configs[12]-=  162;
	configs[21]-=  231;
	configs[31]-=    6;
	configs[33]-=   18;
	configs[34]-=   18;
	bb.mover.u4s[0]^=0x4000400;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBBlack420() {
	configs[ 1]+=   18;
	configs[ 3]+=   18;
	configs[ 4]+=   18;
	configs[ 9]+=    6;
	configs[11]+=   54;
	configs[12]+=  162;
	configs[21]+=  231;
	configs[31]+=    6;
	configs[33]+=   18;
	configs[34]+=   18;
	bb.mover.u4s[0]^=0x4000400;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBWhite421() {
	configs[ 1]-=   18;
	configs[ 3]-=   18;
	configs[ 4]-=   18;
	configs[ 5]-=   18;
	configs[ 9]-=    6;
	configs[11]-=   54;
	configs[12]-=  162;
	configs[13]-=  486;
	configs[21]-=  717;
	configs[31]-=    6;
	configs[33]-=   18;
	configs[34]-=   18;
	configs[35]-=   18;
	bb.mover.u4s[0]^=0x4000400;
	bb.mover.u4s[1]^=0x404;
}

void FlipFunctionBBBlack421() {
	configs[ 1]+=   18;
	configs[ 3]+=   18;
	configs[ 4]+=   18;
	configs[ 5]+=   18;
	configs[ 9]+=    6;
	configs[11]+=   54;
	configs[12]+=  162;
	configs[13]+=  486;
	configs[21]+=  717;
	configs[31]+=    6;
	configs[33]+=   18;
	configs[34]+=   18;
	configs[35]+=   18;
	bb.mover.u4s[0]^=0x4000400;
	bb.mover.u4s[1]^=0x404;
}

void FlipFunctionBBWhite422() {
	configs[ 1]-=   18;
	configs[ 3]-=   18;
	configs[ 4]-=   18;
	configs[ 5]-=   18;
	configs[ 6]-=   18;
	configs[ 9]-=    6;
	configs[11]-=   54;
	configs[12]-=  162;
	configs[13]-=  486;
	configs[14]-=  486;
	configs[21]-= 2175;
	configs[31]-=    6;
	configs[33]-=   18;
	configs[34]-=   18;
	configs[35]-=   18;
	configs[36]-=   18;
	bb.mover.u4s[0]^=0x4000400;
	bb.mover.u4s[1]^=0x40404;
}

void FlipFunctionBBBlack422() {
	configs[ 1]+=   18;
	configs[ 3]+=   18;
	configs[ 4]+=   18;
	configs[ 5]+=   18;
	configs[ 6]+=   18;
	configs[ 9]+=    6;
	configs[11]+=   54;
	configs[12]+=  162;
	configs[13]+=  486;
	configs[14]+=  486;
	configs[21]+= 2175;
	configs[31]+=    6;
	configs[33]+=   18;
	configs[34]+=   18;
	configs[35]+=   18;
	configs[36]+=   18;
	bb.mover.u4s[0]^=0x4000400;
	bb.mover.u4s[1]^=0x40404;
}

void FlipFunctionBBWhite423() {
	configs[32]-=    9;
}

void FlipFunctionBBBlack423() {
	configs[32]+=    9;
}

void FlipFunctionBBWhite424() {
	configs[ 3]-=   54;
	configs[12]-=   54;
	configs[22]-=   54;
	configs[32]-=   63;
	bb.mover.u4s[0]^=0x8000000;
}

void FlipFunctionBBBlack424() {
	configs[ 3]+=   54;
	configs[12]+=   54;
	configs[22]+=   54;
	configs[32]+=   63;
	bb.mover.u4s[0]^=0x8000000;
}

void FlipFunctionBBWhite425() {
	configs[ 3]-=   54;
	configs[ 4]-=  162;
	configs[12]-=   54;
	configs[14]-=   54;
	configs[22]-=   54;
	configs[23]-=  162;
	configs[32]-=  225;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBBlack425() {
	configs[ 3]+=   54;
	configs[ 4]+=  162;
	configs[12]+=   54;
	configs[14]+=   54;
	configs[22]+=   54;
	configs[23]+=  162;
	configs[32]+=  225;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBWhite426() {
	configs[ 3]-=   54;
	configs[ 4]-=  162;
	configs[ 5]-=  486;
	configs[12]-=   54;
	configs[14]-=   54;
	configs[16]-=   18;
	configs[22]-=   54;
	configs[23]-=  162;
	configs[24]-=  486;
	configs[32]-=  711;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x2010;
}

void FlipFunctionBBBlack426() {
	configs[ 3]+=   54;
	configs[ 4]+=  162;
	configs[ 5]+=  486;
	configs[12]+=   54;
	configs[14]+=   54;
	configs[16]+=   18;
	configs[22]+=   54;
	configs[23]+=  162;
	configs[24]+=  486;
	configs[32]+=  711;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x2010;
}

void FlipFunctionBBWhite427() {
	configs[ 3]-=   54;
	configs[ 4]-=  162;
	configs[ 5]-=  486;
	configs[ 6]-= 1458;
	configs[12]-=   54;
	configs[14]-=   54;
	configs[16]-=   18;
	configs[18]-=    6;
	configs[22]-=   54;
	configs[23]-=  162;
	configs[24]-=  486;
	configs[25]-= 1458;
	configs[32]-= 2169;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x402010;
}

void FlipFunctionBBBlack427() {
	configs[ 3]+=   54;
	configs[ 4]+=  162;
	configs[ 5]+=  486;
	configs[ 6]+= 1458;
	configs[12]+=   54;
	configs[14]+=   54;
	configs[16]+=   18;
	configs[18]+=    6;
	configs[22]+=   54;
	configs[23]+=  162;
	configs[24]+=  486;
	configs[25]+= 1458;
	configs[32]+= 2169;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x402010;
}

void FlipFunctionBBWhite428() {
	configs[ 1]-=    6;
	configs[ 8]-=    6;
	configs[20]-=    6;
	configs[32]-=   15;
	bb.mover.u4s[0]^=0x200;
}

void FlipFunctionBBBlack428() {
	configs[ 1]+=    6;
	configs[ 8]+=    6;
	configs[20]+=    6;
	configs[32]+=   15;
	bb.mover.u4s[0]^=0x200;
}

void FlipFunctionBBWhite429() {
	configs[ 1]-=    6;
	configs[ 3]-=   54;
	configs[ 8]-=    6;
	configs[12]-=   54;
	configs[20]-=    6;
	configs[22]-=   54;
	configs[32]-=   69;
	bb.mover.u4s[0]^=0x8000200;
}

void FlipFunctionBBBlack429() {
	configs[ 1]+=    6;
	configs[ 3]+=   54;
	configs[ 8]+=    6;
	configs[12]+=   54;
	configs[20]+=    6;
	configs[22]+=   54;
	configs[32]+=   69;
	bb.mover.u4s[0]^=0x8000200;
}

void FlipFunctionBBWhite430() {
	configs[ 1]-=    6;
	configs[ 3]-=   54;
	configs[ 4]-=  162;
	configs[ 8]-=    6;
	configs[12]-=   54;
	configs[14]-=   54;
	configs[20]-=    6;
	configs[22]-=   54;
	configs[23]-=  162;
	configs[32]-=  231;
	bb.mover.u4s[0]^=0x8000200;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBBlack430() {
	configs[ 1]+=    6;
	configs[ 3]+=   54;
	configs[ 4]+=  162;
	configs[ 8]+=    6;
	configs[12]+=   54;
	configs[14]+=   54;
	configs[20]+=    6;
	configs[22]+=   54;
	configs[23]+=  162;
	configs[32]+=  231;
	bb.mover.u4s[0]^=0x8000200;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBWhite431() {
	configs[ 1]-=    6;
	configs[ 3]-=   54;
	configs[ 4]-=  162;
	configs[ 5]-=  486;
	configs[ 8]-=    6;
	configs[12]-=   54;
	configs[14]-=   54;
	configs[16]-=   18;
	configs[20]-=    6;
	configs[22]-=   54;
	configs[23]-=  162;
	configs[24]-=  486;
	configs[32]-=  717;
	bb.mover.u4s[0]^=0x8000200;
	bb.mover.u4s[1]^=0x2010;
}

void FlipFunctionBBBlack431() {
	configs[ 1]+=    6;
	configs[ 3]+=   54;
	configs[ 4]+=  162;
	configs[ 5]+=  486;
	configs[ 8]+=    6;
	configs[12]+=   54;
	configs[14]+=   54;
	configs[16]+=   18;
	configs[20]+=    6;
	configs[22]+=   54;
	configs[23]+=  162;
	configs[24]+=  486;
	configs[32]+=  717;
	bb.mover.u4s[0]^=0x8000200;
	bb.mover.u4s[1]^=0x2010;
}

void FlipFunctionBBWhite432() {
	configs[ 1]-=    6;
	configs[ 3]-=   54;
	configs[ 4]-=  162;
	configs[ 5]-=  486;
	configs[ 6]-= 1458;
	configs[ 8]-=    6;
	configs[12]-=   54;
	configs[14]-=   54;
	configs[16]-=   18;
	configs[18]-=    6;
	configs[20]-=    6;
	configs[22]-=   54;
	configs[23]-=  162;
	configs[24]-=  486;
	configs[25]-= 1458;
	configs[32]-= 2175;
	bb.mover.u4s[0]^=0x8000200;
	bb.mover.u4s[1]^=0x402010;
}

void FlipFunctionBBBlack432() {
	configs[ 1]+=    6;
	configs[ 3]+=   54;
	configs[ 4]+=  162;
	configs[ 5]+=  486;
	configs[ 6]+= 1458;
	configs[ 8]+=    6;
	configs[12]+=   54;
	configs[14]+=   54;
	configs[16]+=   18;
	configs[18]+=    6;
	configs[20]+=    6;
	configs[22]+=   54;
	configs[23]+=  162;
	configs[24]+=  486;
	configs[25]+= 1458;
	configs[32]+= 2175;
	bb.mover.u4s[0]^=0x8000200;
	bb.mover.u4s[1]^=0x402010;
}

void FlipFunctionBBWhite433() {
	configs[ 2]-=   27;
	bb.mover.u4s[0]^=0x80000;
	bb.empty.u4s[0]^=0x80000;
}

void FlipFunctionBBBlack433() {
	configs[ 2]+=   27;
	bb.mover.u4s[0]^=0x80000;
	bb.empty.u4s[0]^=0x80000;
}

void FlipFunctionBBWhite434() {
	configs[ 2]-=  189;
	configs[12]-=   18;
	configs[23]-=   18;
	configs[30]-=   18;
	bb.mover.u4s[0]^=0x180000;
	bb.empty.u4s[0]^=0x80000;
}

void FlipFunctionBBBlack434() {
	configs[ 2]+=  189;
	configs[12]+=   18;
	configs[23]+=   18;
	configs[30]+=   18;
	bb.mover.u4s[0]^=0x180000;
	bb.empty.u4s[0]^=0x80000;
}

void FlipFunctionBBWhite435() {
	configs[ 2]-=  675;
	configs[12]-=   18;
	configs[13]-=   18;
	configs[23]-=   18;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[30]-=   18;
	bb.mover.u4s[0]^=0x380000;
	bb.empty.u4s[0]^=0x80000;
}

void FlipFunctionBBBlack435() {
	configs[ 2]+=  675;
	configs[12]+=   18;
	configs[13]+=   18;
	configs[23]+=   18;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[30]+=   18;
	bb.mover.u4s[0]^=0x380000;
	bb.empty.u4s[0]^=0x80000;
}

void FlipFunctionBBWhite436() {
	configs[ 2]-= 2133;
	configs[12]-=   18;
	configs[13]-=   18;
	configs[14]-=    6;
	configs[23]-=   18;
	configs[24]-=   18;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[29]-=   18;
	configs[30]-=   18;
	bb.mover.u4s[0]^=0x780000;
	bb.empty.u4s[0]^=0x80000;
}

void FlipFunctionBBBlack436() {
	configs[ 2]+= 2133;
	configs[12]+=   18;
	configs[13]+=   18;
	configs[14]+=    6;
	configs[23]+=   18;
	configs[24]+=   18;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[29]+=   18;
	configs[30]+=   18;
	bb.mover.u4s[0]^=0x780000;
	bb.empty.u4s[0]^=0x80000;
}

void FlipFunctionBBWhite437() {
	configs[ 2]-=   45;
	configs[10]-=   18;
	configs[21]-=   18;
	configs[32]-=   18;
	bb.mover.u4s[0]^=0xC0000;
	bb.empty.u4s[0]^=0x80000;
}

void FlipFunctionBBBlack437() {
	configs[ 2]+=   45;
	configs[10]+=   18;
	configs[21]+=   18;
	configs[32]+=   18;
	bb.mover.u4s[0]^=0xC0000;
	bb.empty.u4s[0]^=0x80000;
}

void FlipFunctionBBWhite438() {
	configs[ 2]-=  207;
	configs[10]-=   18;
	configs[12]-=   18;
	configs[21]-=   18;
	configs[23]-=   18;
	configs[30]-=   18;
	configs[32]-=   18;
	bb.mover.u4s[0]^=0x1C0000;
	bb.empty.u4s[0]^=0x80000;
}

void FlipFunctionBBBlack438() {
	configs[ 2]+=  207;
	configs[10]+=   18;
	configs[12]+=   18;
	configs[21]+=   18;
	configs[23]+=   18;
	configs[30]+=   18;
	configs[32]+=   18;
	bb.mover.u4s[0]^=0x1C0000;
	bb.empty.u4s[0]^=0x80000;
}

void FlipFunctionBBWhite439() {
	configs[ 2]-=  693;
	configs[10]-=   18;
	configs[12]-=   18;
	configs[13]-=   18;
	configs[21]-=   18;
	configs[23]-=   18;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[30]-=   18;
	configs[32]-=   18;
	bb.mover.u4s[0]^=0x3C0000;
	bb.empty.u4s[0]^=0x80000;
}

void FlipFunctionBBBlack439() {
	configs[ 2]+=  693;
	configs[10]+=   18;
	configs[12]+=   18;
	configs[13]+=   18;
	configs[21]+=   18;
	configs[23]+=   18;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[30]+=   18;
	configs[32]+=   18;
	bb.mover.u4s[0]^=0x3C0000;
	bb.empty.u4s[0]^=0x80000;
}

void FlipFunctionBBWhite440() {
	configs[ 2]-= 2151;
	configs[10]-=   18;
	configs[12]-=   18;
	configs[13]-=   18;
	configs[14]-=    6;
	configs[21]-=   18;
	configs[23]-=   18;
	configs[24]-=   18;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[29]-=   18;
	configs[30]-=   18;
	configs[32]-=   18;
	bb.mover.u4s[0]^=0x7C0000;
	bb.empty.u4s[0]^=0x80000;
}

void FlipFunctionBBBlack440() {
	configs[ 2]+= 2151;
	configs[10]+=   18;
	configs[12]+=   18;
	configs[13]+=   18;
	configs[14]+=    6;
	configs[21]+=   18;
	configs[23]+=   18;
	configs[24]+=   18;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[29]+=   18;
	configs[30]+=   18;
	configs[32]+=   18;
	bb.mover.u4s[0]^=0x7C0000;
	bb.empty.u4s[0]^=0x80000;
}

void FlipFunctionBBWhite441() {
	configs[ 2]-=   51;
	configs[ 9]-=   18;
	configs[10]-=   18;
	configs[20]-=   18;
	configs[21]-=   18;
	configs[32]-=   18;
	configs[33]-=    6;
	bb.mover.u4s[0]^=0xE0000;
	bb.empty.u4s[0]^=0x80000;
}

void FlipFunctionBBBlack441() {
	configs[ 2]+=   51;
	configs[ 9]+=   18;
	configs[10]+=   18;
	configs[20]+=   18;
	configs[21]+=   18;
	configs[32]+=   18;
	configs[33]+=    6;
	bb.mover.u4s[0]^=0xE0000;
	bb.empty.u4s[0]^=0x80000;
}

void FlipFunctionBBWhite442() {
	configs[ 2]-=  213;
	configs[ 9]-=   18;
	configs[10]-=   18;
	configs[12]-=   18;
	configs[20]-=   18;
	configs[21]-=   18;
	configs[23]-=   18;
	configs[30]-=   18;
	configs[32]-=   18;
	configs[33]-=    6;
	bb.mover.u4s[0]^=0x1E0000;
	bb.empty.u4s[0]^=0x80000;
}

void FlipFunctionBBBlack442() {
	configs[ 2]+=  213;
	configs[ 9]+=   18;
	configs[10]+=   18;
	configs[12]+=   18;
	configs[20]+=   18;
	configs[21]+=   18;
	configs[23]+=   18;
	configs[30]+=   18;
	configs[32]+=   18;
	configs[33]+=    6;
	bb.mover.u4s[0]^=0x1E0000;
	bb.empty.u4s[0]^=0x80000;
}

void FlipFunctionBBWhite443() {
	configs[ 2]-=  699;
	configs[ 9]-=   18;
	configs[10]-=   18;
	configs[12]-=   18;
	configs[13]-=   18;
	configs[20]-=   18;
	configs[21]-=   18;
	configs[23]-=   18;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[30]-=   18;
	configs[32]-=   18;
	configs[33]-=    6;
	bb.mover.u4s[0]^=0x3E0000;
	bb.empty.u4s[0]^=0x80000;
}

void FlipFunctionBBBlack443() {
	configs[ 2]+=  699;
	configs[ 9]+=   18;
	configs[10]+=   18;
	configs[12]+=   18;
	configs[13]+=   18;
	configs[20]+=   18;
	configs[21]+=   18;
	configs[23]+=   18;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[30]+=   18;
	configs[32]+=   18;
	configs[33]+=    6;
	bb.mover.u4s[0]^=0x3E0000;
	bb.empty.u4s[0]^=0x80000;
}

void FlipFunctionBBWhite444() {
	configs[ 2]-= 2157;
	configs[ 9]-=   18;
	configs[10]-=   18;
	configs[12]-=   18;
	configs[13]-=   18;
	configs[14]-=    6;
	configs[20]-=   18;
	configs[21]-=   18;
	configs[23]-=   18;
	configs[24]-=   18;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[29]-=   18;
	configs[30]-=   18;
	configs[32]-=   18;
	configs[33]-=    6;
	bb.mover.u4s[0]^=0x7E0000;
	bb.empty.u4s[0]^=0x80000;
}

void FlipFunctionBBBlack444() {
	configs[ 2]+= 2157;
	configs[ 9]+=   18;
	configs[10]+=   18;
	configs[12]+=   18;
	configs[13]+=   18;
	configs[14]+=    6;
	configs[20]+=   18;
	configs[21]+=   18;
	configs[23]+=   18;
	configs[24]+=   18;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[29]+=   18;
	configs[30]+=   18;
	configs[32]+=   18;
	configs[33]+=    6;
	bb.mover.u4s[0]^=0x7E0000;
	bb.empty.u4s[0]^=0x80000;
}

void FlipFunctionBBWhite445() {
	configs[11]-=    9;
}

void FlipFunctionBBBlack445() {
	configs[11]+=    9;
}

void FlipFunctionBBWhite446() {
	configs[ 3]-=   18;
	configs[11]-=   63;
	configs[21]-=   54;
	configs[33]-=   18;
	bb.mover.u4s[0]^=0x4000000;
}

void FlipFunctionBBBlack446() {
	configs[ 3]+=   18;
	configs[11]+=   63;
	configs[21]+=   54;
	configs[33]+=   18;
	bb.mover.u4s[0]^=0x4000000;
}

void FlipFunctionBBWhite447() {
	configs[ 3]-=   18;
	configs[ 4]-=    6;
	configs[11]-=  225;
	configs[20]-=  162;
	configs[21]-=   54;
	configs[33]-=   18;
	configs[35]-=    6;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBBlack447() {
	configs[ 3]+=   18;
	configs[ 4]+=    6;
	configs[11]+=  225;
	configs[20]+=  162;
	configs[21]+=   54;
	configs[33]+=   18;
	configs[35]+=    6;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBWhite448() {
	configs[ 1]-=  162;
	configs[11]-=   15;
	configs[23]-=    6;
	configs[29]-=    6;
	bb.mover.u4s[0]^=0x1000;
}

void FlipFunctionBBBlack448() {
	configs[ 1]+=  162;
	configs[11]+=   15;
	configs[23]+=    6;
	configs[29]+=    6;
	bb.mover.u4s[0]^=0x1000;
}

void FlipFunctionBBWhite449() {
	configs[ 1]-=  162;
	configs[ 3]-=   18;
	configs[11]-=   69;
	configs[21]-=   54;
	configs[23]-=    6;
	configs[29]-=    6;
	configs[33]-=   18;
	bb.mover.u4s[0]^=0x4001000;
}

void FlipFunctionBBBlack449() {
	configs[ 1]+=  162;
	configs[ 3]+=   18;
	configs[11]+=   69;
	configs[21]+=   54;
	configs[23]+=    6;
	configs[29]+=    6;
	configs[33]+=   18;
	bb.mover.u4s[0]^=0x4001000;
}

void FlipFunctionBBWhite450() {
	configs[ 1]-=  162;
	configs[ 3]-=   18;
	configs[ 4]-=    6;
	configs[11]-=  231;
	configs[20]-=  162;
	configs[21]-=   54;
	configs[23]-=    6;
	configs[29]-=    6;
	configs[33]-=   18;
	configs[35]-=    6;
	bb.mover.u4s[0]^=0x4001000;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBBlack450() {
	configs[ 1]+=  162;
	configs[ 3]+=   18;
	configs[ 4]+=    6;
	configs[11]+=  231;
	configs[20]+=  162;
	configs[21]+=   54;
	configs[23]+=    6;
	configs[29]+=    6;
	configs[33]+=   18;
	configs[35]+=    6;
	bb.mover.u4s[0]^=0x4001000;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBWhite451() {
	configs[22]-=    9;
}

void FlipFunctionBBBlack451() {
	configs[22]+=    9;
}

void FlipFunctionBBWhite452() {
	configs[ 3]-=   54;
	configs[12]-=   54;
	configs[22]-=   63;
	configs[32]-=   54;
	bb.mover.u4s[0]^=0x8000000;
}

void FlipFunctionBBBlack452() {
	configs[ 3]+=   54;
	configs[12]+=   54;
	configs[22]+=   63;
	configs[32]+=   54;
	bb.mover.u4s[0]^=0x8000000;
}

void FlipFunctionBBWhite453() {
	configs[ 3]-=   54;
	configs[ 4]-=   54;
	configs[12]-=   54;
	configs[13]-=  162;
	configs[22]-=  225;
	configs[32]-=   54;
	configs[33]-=   54;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBBlack453() {
	configs[ 3]+=   54;
	configs[ 4]+=   54;
	configs[12]+=   54;
	configs[13]+=  162;
	configs[22]+=  225;
	configs[32]+=   54;
	configs[33]+=   54;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBWhite454() {
	configs[ 3]-=   54;
	configs[ 4]-=   54;
	configs[ 5]-=   54;
	configs[12]-=   54;
	configs[13]-=  162;
	configs[14]-=  162;
	configs[22]-=  711;
	configs[32]-=   54;
	configs[33]-=   54;
	configs[34]-=   54;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x808;
}

void FlipFunctionBBBlack454() {
	configs[ 3]+=   54;
	configs[ 4]+=   54;
	configs[ 5]+=   54;
	configs[12]+=   54;
	configs[13]+=  162;
	configs[14]+=  162;
	configs[22]+=  711;
	configs[32]+=   54;
	configs[33]+=   54;
	configs[34]+=   54;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x808;
}

void FlipFunctionBBWhite455() {
	configs[ 3]-=   54;
	configs[ 4]-=   54;
	configs[ 5]-=   54;
	configs[ 6]-=   54;
	configs[12]-=   54;
	configs[13]-=  162;
	configs[14]-=  162;
	configs[15]-=  162;
	configs[22]-= 2169;
	configs[32]-=   54;
	configs[33]-=   54;
	configs[34]-=   54;
	configs[35]-=   54;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x80808;
}

void FlipFunctionBBBlack455() {
	configs[ 3]+=   54;
	configs[ 4]+=   54;
	configs[ 5]+=   54;
	configs[ 6]+=   54;
	configs[12]+=   54;
	configs[13]+=  162;
	configs[14]+=  162;
	configs[15]+=  162;
	configs[22]+= 2169;
	configs[32]+=   54;
	configs[33]+=   54;
	configs[34]+=   54;
	configs[35]+=   54;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x80808;
}

void FlipFunctionBBWhite456() {
	configs[ 1]-=   54;
	configs[10]-=    6;
	configs[22]-=   15;
	configs[30]-=    6;
	bb.mover.u4s[0]^=0x800;
}

void FlipFunctionBBBlack456() {
	configs[ 1]+=   54;
	configs[10]+=    6;
	configs[22]+=   15;
	configs[30]+=    6;
	bb.mover.u4s[0]^=0x800;
}

void FlipFunctionBBWhite457() {
	configs[ 1]-=   54;
	configs[ 3]-=   54;
	configs[10]-=    6;
	configs[12]-=   54;
	configs[22]-=   69;
	configs[30]-=    6;
	configs[32]-=   54;
	bb.mover.u4s[0]^=0x8000800;
}

void FlipFunctionBBBlack457() {
	configs[ 1]+=   54;
	configs[ 3]+=   54;
	configs[10]+=    6;
	configs[12]+=   54;
	configs[22]+=   69;
	configs[30]+=    6;
	configs[32]+=   54;
	bb.mover.u4s[0]^=0x8000800;
}

void FlipFunctionBBWhite458() {
	configs[ 1]-=   54;
	configs[ 3]-=   54;
	configs[ 4]-=   54;
	configs[10]-=    6;
	configs[12]-=   54;
	configs[13]-=  162;
	configs[22]-=  231;
	configs[30]-=    6;
	configs[32]-=   54;
	configs[33]-=   54;
	bb.mover.u4s[0]^=0x8000800;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBBlack458() {
	configs[ 1]+=   54;
	configs[ 3]+=   54;
	configs[ 4]+=   54;
	configs[10]+=    6;
	configs[12]+=   54;
	configs[13]+=  162;
	configs[22]+=  231;
	configs[30]+=    6;
	configs[32]+=   54;
	configs[33]+=   54;
	bb.mover.u4s[0]^=0x8000800;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBWhite459() {
	configs[ 1]-=   54;
	configs[ 3]-=   54;
	configs[ 4]-=   54;
	configs[ 5]-=   54;
	configs[10]-=    6;
	configs[12]-=   54;
	configs[13]-=  162;
	configs[14]-=  162;
	configs[22]-=  717;
	configs[30]-=    6;
	configs[32]-=   54;
	configs[33]-=   54;
	configs[34]-=   54;
	bb.mover.u4s[0]^=0x8000800;
	bb.mover.u4s[1]^=0x808;
}

void FlipFunctionBBBlack459() {
	configs[ 1]+=   54;
	configs[ 3]+=   54;
	configs[ 4]+=   54;
	configs[ 5]+=   54;
	configs[10]+=    6;
	configs[12]+=   54;
	configs[13]+=  162;
	configs[14]+=  162;
	configs[22]+=  717;
	configs[30]+=    6;
	configs[32]+=   54;
	configs[33]+=   54;
	configs[34]+=   54;
	bb.mover.u4s[0]^=0x8000800;
	bb.mover.u4s[1]^=0x808;
}

void FlipFunctionBBWhite460() {
	configs[ 1]-=   54;
	configs[ 3]-=   54;
	configs[ 4]-=   54;
	configs[ 5]-=   54;
	configs[ 6]-=   54;
	configs[10]-=    6;
	configs[12]-=   54;
	configs[13]-=  162;
	configs[14]-=  162;
	configs[15]-=  162;
	configs[22]-= 2175;
	configs[30]-=    6;
	configs[32]-=   54;
	configs[33]-=   54;
	configs[34]-=   54;
	configs[35]-=   54;
	bb.mover.u4s[0]^=0x8000800;
	bb.mover.u4s[1]^=0x80808;
}

void FlipFunctionBBBlack460() {
	configs[ 1]+=   54;
	configs[ 3]+=   54;
	configs[ 4]+=   54;
	configs[ 5]+=   54;
	configs[ 6]+=   54;
	configs[10]+=    6;
	configs[12]+=   54;
	configs[13]+=  162;
	configs[14]+=  162;
	configs[15]+=  162;
	configs[22]+= 2175;
	configs[30]+=    6;
	configs[32]+=   54;
	configs[33]+=   54;
	configs[34]+=   54;
	configs[35]+=   54;
	bb.mover.u4s[0]^=0x8000800;
	bb.mover.u4s[1]^=0x80808;
}

void FlipFunctionBBWhite461() {
	configs[31]-=    9;
}

void FlipFunctionBBBlack461() {
	configs[31]+=    9;
}

void FlipFunctionBBWhite462() {
	configs[ 3]-=  162;
	configs[13]-=   54;
	configs[23]-=   54;
	configs[31]-=   63;
	bb.mover.u4s[0]^=0x10000000;
}

void FlipFunctionBBBlack462() {
	configs[ 3]+=  162;
	configs[13]+=   54;
	configs[23]+=   54;
	configs[31]+=   63;
	bb.mover.u4s[0]^=0x10000000;
}

void FlipFunctionBBWhite463() {
	configs[ 3]-=  162;
	configs[ 4]-=  486;
	configs[13]-=   54;
	configs[15]-=   18;
	configs[23]-=   54;
	configs[24]-=  162;
	configs[31]-=  225;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBBlack463() {
	configs[ 3]+=  162;
	configs[ 4]+=  486;
	configs[13]+=   54;
	configs[15]+=   18;
	configs[23]+=   54;
	configs[24]+=  162;
	configs[31]+=  225;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBWhite464() {
	configs[ 3]-=  162;
	configs[ 4]-=  486;
	configs[ 5]-= 1458;
	configs[13]-=   54;
	configs[15]-=   18;
	configs[17]-=    6;
	configs[23]-=   54;
	configs[24]-=  162;
	configs[25]-=  486;
	configs[31]-=  711;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x4020;
}

void FlipFunctionBBBlack464() {
	configs[ 3]+=  162;
	configs[ 4]+=  486;
	configs[ 5]+= 1458;
	configs[13]+=   54;
	configs[15]+=   18;
	configs[17]+=    6;
	configs[23]+=   54;
	configs[24]+=  162;
	configs[25]+=  486;
	configs[31]+=  711;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x4020;
}

void FlipFunctionBBWhite465() {
	configs[ 1]-=   18;
	configs[ 9]-=    6;
	configs[21]-=    6;
	configs[31]-=   15;
	bb.mover.u4s[0]^=0x400;
}

void FlipFunctionBBBlack465() {
	configs[ 1]+=   18;
	configs[ 9]+=    6;
	configs[21]+=    6;
	configs[31]+=   15;
	bb.mover.u4s[0]^=0x400;
}

void FlipFunctionBBWhite466() {
	configs[ 1]-=   18;
	configs[ 3]-=  162;
	configs[ 9]-=    6;
	configs[13]-=   54;
	configs[21]-=    6;
	configs[23]-=   54;
	configs[31]-=   69;
	bb.mover.u4s[0]^=0x10000400;
}

void FlipFunctionBBBlack466() {
	configs[ 1]+=   18;
	configs[ 3]+=  162;
	configs[ 9]+=    6;
	configs[13]+=   54;
	configs[21]+=    6;
	configs[23]+=   54;
	configs[31]+=   69;
	bb.mover.u4s[0]^=0x10000400;
}

void FlipFunctionBBWhite467() {
	configs[ 1]-=   18;
	configs[ 3]-=  162;
	configs[ 4]-=  486;
	configs[ 9]-=    6;
	configs[13]-=   54;
	configs[15]-=   18;
	configs[21]-=    6;
	configs[23]-=   54;
	configs[24]-=  162;
	configs[31]-=  231;
	bb.mover.u4s[0]^=0x10000400;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBBlack467() {
	configs[ 1]+=   18;
	configs[ 3]+=  162;
	configs[ 4]+=  486;
	configs[ 9]+=    6;
	configs[13]+=   54;
	configs[15]+=   18;
	configs[21]+=    6;
	configs[23]+=   54;
	configs[24]+=  162;
	configs[31]+=  231;
	bb.mover.u4s[0]^=0x10000400;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBWhite468() {
	configs[ 1]-=   18;
	configs[ 3]-=  162;
	configs[ 4]-=  486;
	configs[ 5]-= 1458;
	configs[ 9]-=    6;
	configs[13]-=   54;
	configs[15]-=   18;
	configs[17]-=    6;
	configs[21]-=    6;
	configs[23]-=   54;
	configs[24]-=  162;
	configs[25]-=  486;
	configs[31]-=  717;
	bb.mover.u4s[0]^=0x10000400;
	bb.mover.u4s[1]^=0x4020;
}

void FlipFunctionBBBlack468() {
	configs[ 1]+=   18;
	configs[ 3]+=  162;
	configs[ 4]+=  486;
	configs[ 5]+= 1458;
	configs[ 9]+=    6;
	configs[13]+=   54;
	configs[15]+=   18;
	configs[17]+=    6;
	configs[21]+=    6;
	configs[23]+=   54;
	configs[24]+=  162;
	configs[25]+=  486;
	configs[31]+=  717;
	bb.mover.u4s[0]^=0x10000400;
	bb.mover.u4s[1]^=0x4020;
}

void FlipFunctionBBWhite469() {
	configs[ 2]-=   81;
	bb.mover.u4s[0]^=0x100000;
	bb.empty.u4s[0]^=0x100000;
}

void FlipFunctionBBBlack469() {
	configs[ 2]+=   81;
	bb.mover.u4s[0]^=0x100000;
	bb.empty.u4s[0]^=0x100000;
}

void FlipFunctionBBWhite470() {
	configs[ 2]-=  567;
	configs[13]-=   18;
	configs[24]-=   18;
	configs[29]-=   18;
	bb.mover.u4s[0]^=0x300000;
	bb.empty.u4s[0]^=0x100000;
}

void FlipFunctionBBBlack470() {
	configs[ 2]+=  567;
	configs[13]+=   18;
	configs[24]+=   18;
	configs[29]+=   18;
	bb.mover.u4s[0]^=0x300000;
	bb.empty.u4s[0]^=0x100000;
}

void FlipFunctionBBWhite471() {
	configs[ 2]-= 2025;
	configs[13]-=   18;
	configs[14]-=    6;
	configs[24]-=   18;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[29]-=   18;
	bb.mover.u4s[0]^=0x700000;
	bb.empty.u4s[0]^=0x100000;
}

void FlipFunctionBBBlack471() {
	configs[ 2]+= 2025;
	configs[13]+=   18;
	configs[14]+=    6;
	configs[24]+=   18;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[29]+=   18;
	bb.mover.u4s[0]^=0x700000;
	bb.empty.u4s[0]^=0x100000;
}

void FlipFunctionBBWhite472() {
	configs[ 2]-=  135;
	configs[11]-=   18;
	configs[22]-=   18;
	configs[31]-=   18;
	bb.mover.u4s[0]^=0x180000;
	bb.empty.u4s[0]^=0x100000;
}

void FlipFunctionBBBlack472() {
	configs[ 2]+=  135;
	configs[11]+=   18;
	configs[22]+=   18;
	configs[31]+=   18;
	bb.mover.u4s[0]^=0x180000;
	bb.empty.u4s[0]^=0x100000;
}

void FlipFunctionBBWhite473() {
	configs[ 2]-=  621;
	configs[11]-=   18;
	configs[13]-=   18;
	configs[22]-=   18;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[31]-=   18;
	bb.mover.u4s[0]^=0x380000;
	bb.empty.u4s[0]^=0x100000;
}

void FlipFunctionBBBlack473() {
	configs[ 2]+=  621;
	configs[11]+=   18;
	configs[13]+=   18;
	configs[22]+=   18;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[31]+=   18;
	bb.mover.u4s[0]^=0x380000;
	bb.empty.u4s[0]^=0x100000;
}

void FlipFunctionBBWhite474() {
	configs[ 2]-= 2079;
	configs[11]-=   18;
	configs[13]-=   18;
	configs[14]-=    6;
	configs[22]-=   18;
	configs[24]-=   18;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[29]-=   18;
	configs[31]-=   18;
	bb.mover.u4s[0]^=0x780000;
	bb.empty.u4s[0]^=0x100000;
}

void FlipFunctionBBBlack474() {
	configs[ 2]+= 2079;
	configs[11]+=   18;
	configs[13]+=   18;
	configs[14]+=    6;
	configs[22]+=   18;
	configs[24]+=   18;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[29]+=   18;
	configs[31]+=   18;
	bb.mover.u4s[0]^=0x780000;
	bb.empty.u4s[0]^=0x100000;
}

void FlipFunctionBBWhite475() {
	configs[ 2]-=  153;
	configs[10]-=   18;
	configs[11]-=   18;
	configs[21]-=   18;
	configs[22]-=   18;
	configs[31]-=   18;
	configs[32]-=   18;
	bb.mover.u4s[0]^=0x1C0000;
	bb.empty.u4s[0]^=0x100000;
}

void FlipFunctionBBBlack475() {
	configs[ 2]+=  153;
	configs[10]+=   18;
	configs[11]+=   18;
	configs[21]+=   18;
	configs[22]+=   18;
	configs[31]+=   18;
	configs[32]+=   18;
	bb.mover.u4s[0]^=0x1C0000;
	bb.empty.u4s[0]^=0x100000;
}

void FlipFunctionBBWhite476() {
	configs[ 2]-=  639;
	configs[10]-=   18;
	configs[11]-=   18;
	configs[13]-=   18;
	configs[21]-=   18;
	configs[22]-=   18;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[31]-=   18;
	configs[32]-=   18;
	bb.mover.u4s[0]^=0x3C0000;
	bb.empty.u4s[0]^=0x100000;
}

void FlipFunctionBBBlack476() {
	configs[ 2]+=  639;
	configs[10]+=   18;
	configs[11]+=   18;
	configs[13]+=   18;
	configs[21]+=   18;
	configs[22]+=   18;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[31]+=   18;
	configs[32]+=   18;
	bb.mover.u4s[0]^=0x3C0000;
	bb.empty.u4s[0]^=0x100000;
}

void FlipFunctionBBWhite477() {
	configs[ 2]-= 2097;
	configs[10]-=   18;
	configs[11]-=   18;
	configs[13]-=   18;
	configs[14]-=    6;
	configs[21]-=   18;
	configs[22]-=   18;
	configs[24]-=   18;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[29]-=   18;
	configs[31]-=   18;
	configs[32]-=   18;
	bb.mover.u4s[0]^=0x7C0000;
	bb.empty.u4s[0]^=0x100000;
}

void FlipFunctionBBBlack477() {
	configs[ 2]+= 2097;
	configs[10]+=   18;
	configs[11]+=   18;
	configs[13]+=   18;
	configs[14]+=    6;
	configs[21]+=   18;
	configs[22]+=   18;
	configs[24]+=   18;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[29]+=   18;
	configs[31]+=   18;
	configs[32]+=   18;
	bb.mover.u4s[0]^=0x7C0000;
	bb.empty.u4s[0]^=0x100000;
}

void FlipFunctionBBWhite478() {
	configs[ 2]-=  159;
	configs[ 9]-=   18;
	configs[10]-=   18;
	configs[11]-=   18;
	configs[20]-=   18;
	configs[21]-=   18;
	configs[22]-=   18;
	configs[31]-=   18;
	configs[32]-=   18;
	configs[33]-=    6;
	bb.mover.u4s[0]^=0x1E0000;
	bb.empty.u4s[0]^=0x100000;
}

void FlipFunctionBBBlack478() {
	configs[ 2]+=  159;
	configs[ 9]+=   18;
	configs[10]+=   18;
	configs[11]+=   18;
	configs[20]+=   18;
	configs[21]+=   18;
	configs[22]+=   18;
	configs[31]+=   18;
	configs[32]+=   18;
	configs[33]+=    6;
	bb.mover.u4s[0]^=0x1E0000;
	bb.empty.u4s[0]^=0x100000;
}

void FlipFunctionBBWhite479() {
	configs[ 2]-=  645;
	configs[ 9]-=   18;
	configs[10]-=   18;
	configs[11]-=   18;
	configs[13]-=   18;
	configs[20]-=   18;
	configs[21]-=   18;
	configs[22]-=   18;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[31]-=   18;
	configs[32]-=   18;
	configs[33]-=    6;
	bb.mover.u4s[0]^=0x3E0000;
	bb.empty.u4s[0]^=0x100000;
}

void FlipFunctionBBBlack479() {
	configs[ 2]+=  645;
	configs[ 9]+=   18;
	configs[10]+=   18;
	configs[11]+=   18;
	configs[13]+=   18;
	configs[20]+=   18;
	configs[21]+=   18;
	configs[22]+=   18;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[31]+=   18;
	configs[32]+=   18;
	configs[33]+=    6;
	bb.mover.u4s[0]^=0x3E0000;
	bb.empty.u4s[0]^=0x100000;
}

void FlipFunctionBBWhite480() {
	configs[ 2]-= 2103;
	configs[ 9]-=   18;
	configs[10]-=   18;
	configs[11]-=   18;
	configs[13]-=   18;
	configs[14]-=    6;
	configs[20]-=   18;
	configs[21]-=   18;
	configs[22]-=   18;
	configs[24]-=   18;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[29]-=   18;
	configs[31]-=   18;
	configs[32]-=   18;
	configs[33]-=    6;
	bb.mover.u4s[0]^=0x7E0000;
	bb.empty.u4s[0]^=0x100000;
}

void FlipFunctionBBBlack480() {
	configs[ 2]+= 2103;
	configs[ 9]+=   18;
	configs[10]+=   18;
	configs[11]+=   18;
	configs[13]+=   18;
	configs[14]+=    6;
	configs[20]+=   18;
	configs[21]+=   18;
	configs[22]+=   18;
	configs[24]+=   18;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[29]+=   18;
	configs[31]+=   18;
	configs[32]+=   18;
	configs[33]+=    6;
	bb.mover.u4s[0]^=0x7E0000;
	bb.empty.u4s[0]^=0x100000;
}

void FlipFunctionBBWhite481() {
	configs[12]-=    9;
}

void FlipFunctionBBBlack481() {
	configs[12]+=    9;
}

void FlipFunctionBBWhite482() {
	configs[ 3]-=   54;
	configs[12]-=   63;
	configs[22]-=   54;
	configs[32]-=   54;
	bb.mover.u4s[0]^=0x8000000;
}

void FlipFunctionBBBlack482() {
	configs[ 3]+=   54;
	configs[12]+=   63;
	configs[22]+=   54;
	configs[32]+=   54;
	bb.mover.u4s[0]^=0x8000000;
}

void FlipFunctionBBWhite483() {
	configs[ 3]-=   54;
	configs[ 4]-=   18;
	configs[12]-=  225;
	configs[21]-=  162;
	configs[22]-=   54;
	configs[32]-=   54;
	configs[34]-=   18;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBBlack483() {
	configs[ 3]+=   54;
	configs[ 4]+=   18;
	configs[12]+=  225;
	configs[21]+=  162;
	configs[22]+=   54;
	configs[32]+=   54;
	configs[34]+=   18;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBWhite484() {
	configs[ 3]-=   54;
	configs[ 4]-=   18;
	configs[ 5]-=    6;
	configs[12]-=  711;
	configs[20]-=  486;
	configs[21]-=  162;
	configs[22]-=   54;
	configs[32]-=   54;
	configs[34]-=   18;
	configs[36]-=    6;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x204;
}

void FlipFunctionBBBlack484() {
	configs[ 3]+=   54;
	configs[ 4]+=   18;
	configs[ 5]+=    6;
	configs[12]+=  711;
	configs[20]+=  486;
	configs[21]+=  162;
	configs[22]+=   54;
	configs[32]+=   54;
	configs[34]+=   18;
	configs[36]+=    6;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x204;
}

void FlipFunctionBBWhite485() {
	configs[ 1]-=  486;
	configs[12]-=   15;
	configs[24]-=    6;
	configs[28]-=    6;
	bb.mover.u4s[0]^=0x2000;
}

void FlipFunctionBBBlack485() {
	configs[ 1]+=  486;
	configs[12]+=   15;
	configs[24]+=    6;
	configs[28]+=    6;
	bb.mover.u4s[0]^=0x2000;
}

void FlipFunctionBBWhite486() {
	configs[ 1]-=  486;
	configs[ 3]-=   54;
	configs[12]-=   69;
	configs[22]-=   54;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[32]-=   54;
	bb.mover.u4s[0]^=0x8002000;
}

void FlipFunctionBBBlack486() {
	configs[ 1]+=  486;
	configs[ 3]+=   54;
	configs[12]+=   69;
	configs[22]+=   54;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[32]+=   54;
	bb.mover.u4s[0]^=0x8002000;
}

void FlipFunctionBBWhite487() {
	configs[ 1]-=  486;
	configs[ 3]-=   54;
	configs[ 4]-=   18;
	configs[12]-=  231;
	configs[21]-=  162;
	configs[22]-=   54;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[32]-=   54;
	configs[34]-=   18;
	bb.mover.u4s[0]^=0x8002000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBBlack487() {
	configs[ 1]+=  486;
	configs[ 3]+=   54;
	configs[ 4]+=   18;
	configs[12]+=  231;
	configs[21]+=  162;
	configs[22]+=   54;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[32]+=   54;
	configs[34]+=   18;
	bb.mover.u4s[0]^=0x8002000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBWhite488() {
	configs[ 1]-=  486;
	configs[ 3]-=   54;
	configs[ 4]-=   18;
	configs[ 5]-=    6;
	configs[12]-=  717;
	configs[20]-=  486;
	configs[21]-=  162;
	configs[22]-=   54;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[32]-=   54;
	configs[34]-=   18;
	configs[36]-=    6;
	bb.mover.u4s[0]^=0x8002000;
	bb.mover.u4s[1]^=0x204;
}

void FlipFunctionBBBlack488() {
	configs[ 1]+=  486;
	configs[ 3]+=   54;
	configs[ 4]+=   18;
	configs[ 5]+=    6;
	configs[12]+=  717;
	configs[20]+=  486;
	configs[21]+=  162;
	configs[22]+=   54;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[32]+=   54;
	configs[34]+=   18;
	configs[36]+=    6;
	bb.mover.u4s[0]^=0x8002000;
	bb.mover.u4s[1]^=0x204;
}

void FlipFunctionBBWhite489() {
	configs[23]-=    9;
}

void FlipFunctionBBBlack489() {
	configs[23]+=    9;
}

void FlipFunctionBBWhite490() {
	configs[ 3]-=  162;
	configs[13]-=   54;
	configs[23]-=   63;
	configs[31]-=   54;
	bb.mover.u4s[0]^=0x10000000;
}

void FlipFunctionBBBlack490() {
	configs[ 3]+=  162;
	configs[13]+=   54;
	configs[23]+=   63;
	configs[31]+=   54;
	bb.mover.u4s[0]^=0x10000000;
}

void FlipFunctionBBWhite491() {
	configs[ 3]-=  162;
	configs[ 4]-=  162;
	configs[13]-=   54;
	configs[14]-=   54;
	configs[23]-=  225;
	configs[31]-=   54;
	configs[32]-=  162;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBBlack491() {
	configs[ 3]+=  162;
	configs[ 4]+=  162;
	configs[13]+=   54;
	configs[14]+=   54;
	configs[23]+=  225;
	configs[31]+=   54;
	configs[32]+=  162;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBWhite492() {
	configs[ 3]-=  162;
	configs[ 4]-=  162;
	configs[ 5]-=  162;
	configs[13]-=   54;
	configs[14]-=   54;
	configs[15]-=   54;
	configs[23]-=  711;
	configs[31]-=   54;
	configs[32]-=  162;
	configs[33]-=  162;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x1010;
}

void FlipFunctionBBBlack492() {
	configs[ 3]+=  162;
	configs[ 4]+=  162;
	configs[ 5]+=  162;
	configs[13]+=   54;
	configs[14]+=   54;
	configs[15]+=   54;
	configs[23]+=  711;
	configs[31]+=   54;
	configs[32]+=  162;
	configs[33]+=  162;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x1010;
}

void FlipFunctionBBWhite493() {
	configs[ 3]-=  162;
	configs[ 4]-=  162;
	configs[ 5]-=  162;
	configs[ 6]-=  162;
	configs[13]-=   54;
	configs[14]-=   54;
	configs[15]-=   54;
	configs[16]-=   54;
	configs[23]-= 2169;
	configs[31]-=   54;
	configs[32]-=  162;
	configs[33]-=  162;
	configs[34]-=  162;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x101010;
}

void FlipFunctionBBBlack493() {
	configs[ 3]+=  162;
	configs[ 4]+=  162;
	configs[ 5]+=  162;
	configs[ 6]+=  162;
	configs[13]+=   54;
	configs[14]+=   54;
	configs[15]+=   54;
	configs[16]+=   54;
	configs[23]+= 2169;
	configs[31]+=   54;
	configs[32]+=  162;
	configs[33]+=  162;
	configs[34]+=  162;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x101010;
}

void FlipFunctionBBWhite494() {
	configs[ 1]-=  162;
	configs[11]-=    6;
	configs[23]-=   15;
	configs[29]-=    6;
	bb.mover.u4s[0]^=0x1000;
}

void FlipFunctionBBBlack494() {
	configs[ 1]+=  162;
	configs[11]+=    6;
	configs[23]+=   15;
	configs[29]+=    6;
	bb.mover.u4s[0]^=0x1000;
}

void FlipFunctionBBWhite495() {
	configs[ 1]-=  162;
	configs[ 3]-=  162;
	configs[11]-=    6;
	configs[13]-=   54;
	configs[23]-=   69;
	configs[29]-=    6;
	configs[31]-=   54;
	bb.mover.u4s[0]^=0x10001000;
}

void FlipFunctionBBBlack495() {
	configs[ 1]+=  162;
	configs[ 3]+=  162;
	configs[11]+=    6;
	configs[13]+=   54;
	configs[23]+=   69;
	configs[29]+=    6;
	configs[31]+=   54;
	bb.mover.u4s[0]^=0x10001000;
}

void FlipFunctionBBWhite496() {
	configs[ 1]-=  162;
	configs[ 3]-=  162;
	configs[ 4]-=  162;
	configs[11]-=    6;
	configs[13]-=   54;
	configs[14]-=   54;
	configs[23]-=  231;
	configs[29]-=    6;
	configs[31]-=   54;
	configs[32]-=  162;
	bb.mover.u4s[0]^=0x10001000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBBlack496() {
	configs[ 1]+=  162;
	configs[ 3]+=  162;
	configs[ 4]+=  162;
	configs[11]+=    6;
	configs[13]+=   54;
	configs[14]+=   54;
	configs[23]+=  231;
	configs[29]+=    6;
	configs[31]+=   54;
	configs[32]+=  162;
	bb.mover.u4s[0]^=0x10001000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBWhite497() {
	configs[ 1]-=  162;
	configs[ 3]-=  162;
	configs[ 4]-=  162;
	configs[ 5]-=  162;
	configs[11]-=    6;
	configs[13]-=   54;
	configs[14]-=   54;
	configs[15]-=   54;
	configs[23]-=  717;
	configs[29]-=    6;
	configs[31]-=   54;
	configs[32]-=  162;
	configs[33]-=  162;
	bb.mover.u4s[0]^=0x10001000;
	bb.mover.u4s[1]^=0x1010;
}

void FlipFunctionBBBlack497() {
	configs[ 1]+=  162;
	configs[ 3]+=  162;
	configs[ 4]+=  162;
	configs[ 5]+=  162;
	configs[11]+=    6;
	configs[13]+=   54;
	configs[14]+=   54;
	configs[15]+=   54;
	configs[23]+=  717;
	configs[29]+=    6;
	configs[31]+=   54;
	configs[32]+=  162;
	configs[33]+=  162;
	bb.mover.u4s[0]^=0x10001000;
	bb.mover.u4s[1]^=0x1010;
}

void FlipFunctionBBWhite498() {
	configs[ 1]-=  162;
	configs[ 3]-=  162;
	configs[ 4]-=  162;
	configs[ 5]-=  162;
	configs[ 6]-=  162;
	configs[11]-=    6;
	configs[13]-=   54;
	configs[14]-=   54;
	configs[15]-=   54;
	configs[16]-=   54;
	configs[23]-= 2175;
	configs[29]-=    6;
	configs[31]-=   54;
	configs[32]-=  162;
	configs[33]-=  162;
	configs[34]-=  162;
	bb.mover.u4s[0]^=0x10001000;
	bb.mover.u4s[1]^=0x101010;
}

void FlipFunctionBBBlack498() {
	configs[ 1]+=  162;
	configs[ 3]+=  162;
	configs[ 4]+=  162;
	configs[ 5]+=  162;
	configs[ 6]+=  162;
	configs[11]+=    6;
	configs[13]+=   54;
	configs[14]+=   54;
	configs[15]+=   54;
	configs[16]+=   54;
	configs[23]+= 2175;
	configs[29]+=    6;
	configs[31]+=   54;
	configs[32]+=  162;
	configs[33]+=  162;
	configs[34]+=  162;
	bb.mover.u4s[0]^=0x10001000;
	bb.mover.u4s[1]^=0x101010;
}

void FlipFunctionBBWhite499() {
	configs[30]-=    9;
}

void FlipFunctionBBBlack499() {
	configs[30]+=    9;
}

void FlipFunctionBBWhite500() {
	configs[ 3]-=  486;
	configs[14]-=   18;
	configs[24]-=   54;
	configs[30]-=   63;
	bb.mover.u4s[0]^=0x20000000;
}

void FlipFunctionBBBlack500() {
	configs[ 3]+=  486;
	configs[14]+=   18;
	configs[24]+=   54;
	configs[30]+=   63;
	bb.mover.u4s[0]^=0x20000000;
}

void FlipFunctionBBWhite501() {
	configs[ 3]-=  486;
	configs[ 4]-= 1458;
	configs[14]-=   18;
	configs[16]-=    6;
	configs[24]-=   54;
	configs[25]-=  162;
	configs[30]-=  225;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBBlack501() {
	configs[ 3]+=  486;
	configs[ 4]+= 1458;
	configs[14]+=   18;
	configs[16]+=    6;
	configs[24]+=   54;
	configs[25]+=  162;
	configs[30]+=  225;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBWhite502() {
	configs[ 1]-=   54;
	configs[10]-=    6;
	configs[22]-=    6;
	configs[30]-=   15;
	bb.mover.u4s[0]^=0x800;
}

void FlipFunctionBBBlack502() {
	configs[ 1]+=   54;
	configs[10]+=    6;
	configs[22]+=    6;
	configs[30]+=   15;
	bb.mover.u4s[0]^=0x800;
}

void FlipFunctionBBWhite503() {
	configs[ 1]-=   54;
	configs[ 3]-=  486;
	configs[10]-=    6;
	configs[14]-=   18;
	configs[22]-=    6;
	configs[24]-=   54;
	configs[30]-=   69;
	bb.mover.u4s[0]^=0x20000800;
}

void FlipFunctionBBBlack503() {
	configs[ 1]+=   54;
	configs[ 3]+=  486;
	configs[10]+=    6;
	configs[14]+=   18;
	configs[22]+=    6;
	configs[24]+=   54;
	configs[30]+=   69;
	bb.mover.u4s[0]^=0x20000800;
}

void FlipFunctionBBWhite504() {
	configs[ 1]-=   54;
	configs[ 3]-=  486;
	configs[ 4]-= 1458;
	configs[10]-=    6;
	configs[14]-=   18;
	configs[16]-=    6;
	configs[22]-=    6;
	configs[24]-=   54;
	configs[25]-=  162;
	configs[30]-=  231;
	bb.mover.u4s[0]^=0x20000800;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBBlack504() {
	configs[ 1]+=   54;
	configs[ 3]+=  486;
	configs[ 4]+= 1458;
	configs[10]+=    6;
	configs[14]+=   18;
	configs[16]+=    6;
	configs[22]+=    6;
	configs[24]+=   54;
	configs[25]+=  162;
	configs[30]+=  231;
	bb.mover.u4s[0]^=0x20000800;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBWhite505() {
	configs[ 2]-=  243;
	bb.mover.u4s[0]^=0x200000;
	bb.empty.u4s[0]^=0x200000;
}

void FlipFunctionBBBlack505() {
	configs[ 2]+=  243;
	bb.mover.u4s[0]^=0x200000;
	bb.empty.u4s[0]^=0x200000;
}

void FlipFunctionBBWhite506() {
	configs[ 2]-= 1701;
	configs[14]-=    6;
	configs[25]-=   18;
	configs[28]-=   18;
	bb.mover.u4s[0]^=0x600000;
	bb.empty.u4s[0]^=0x200000;
}

void FlipFunctionBBBlack506() {
	configs[ 2]+= 1701;
	configs[14]+=    6;
	configs[25]+=   18;
	configs[28]+=   18;
	bb.mover.u4s[0]^=0x600000;
	bb.empty.u4s[0]^=0x200000;
}

void FlipFunctionBBWhite507() {
	configs[ 2]-=  405;
	configs[12]-=   18;
	configs[23]-=   18;
	configs[30]-=   18;
	bb.mover.u4s[0]^=0x300000;
	bb.empty.u4s[0]^=0x200000;
}

void FlipFunctionBBBlack507() {
	configs[ 2]+=  405;
	configs[12]+=   18;
	configs[23]+=   18;
	configs[30]+=   18;
	bb.mover.u4s[0]^=0x300000;
	bb.empty.u4s[0]^=0x200000;
}

void FlipFunctionBBWhite508() {
	configs[ 2]-= 1863;
	configs[12]-=   18;
	configs[14]-=    6;
	configs[23]-=   18;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[30]-=   18;
	bb.mover.u4s[0]^=0x700000;
	bb.empty.u4s[0]^=0x200000;
}

void FlipFunctionBBBlack508() {
	configs[ 2]+= 1863;
	configs[12]+=   18;
	configs[14]+=    6;
	configs[23]+=   18;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[30]+=   18;
	bb.mover.u4s[0]^=0x700000;
	bb.empty.u4s[0]^=0x200000;
}

void FlipFunctionBBWhite509() {
	configs[ 2]-=  459;
	configs[11]-=   18;
	configs[12]-=   18;
	configs[22]-=   18;
	configs[23]-=   18;
	configs[30]-=   18;
	configs[31]-=   18;
	bb.mover.u4s[0]^=0x380000;
	bb.empty.u4s[0]^=0x200000;
}

void FlipFunctionBBBlack509() {
	configs[ 2]+=  459;
	configs[11]+=   18;
	configs[12]+=   18;
	configs[22]+=   18;
	configs[23]+=   18;
	configs[30]+=   18;
	configs[31]+=   18;
	bb.mover.u4s[0]^=0x380000;
	bb.empty.u4s[0]^=0x200000;
}

void FlipFunctionBBWhite510() {
	configs[ 2]-= 1917;
	configs[11]-=   18;
	configs[12]-=   18;
	configs[14]-=    6;
	configs[22]-=   18;
	configs[23]-=   18;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[30]-=   18;
	configs[31]-=   18;
	bb.mover.u4s[0]^=0x780000;
	bb.empty.u4s[0]^=0x200000;
}

void FlipFunctionBBBlack510() {
	configs[ 2]+= 1917;
	configs[11]+=   18;
	configs[12]+=   18;
	configs[14]+=    6;
	configs[22]+=   18;
	configs[23]+=   18;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[30]+=   18;
	configs[31]+=   18;
	bb.mover.u4s[0]^=0x780000;
	bb.empty.u4s[0]^=0x200000;
}

void FlipFunctionBBWhite511() {
	configs[ 2]-=  477;
	configs[10]-=   18;
	configs[11]-=   18;
	configs[12]-=   18;
	configs[21]-=   18;
	configs[22]-=   18;
	configs[23]-=   18;
	configs[30]-=   18;
	configs[31]-=   18;
	configs[32]-=   18;
	bb.mover.u4s[0]^=0x3C0000;
	bb.empty.u4s[0]^=0x200000;
}

void FlipFunctionBBBlack511() {
	configs[ 2]+=  477;
	configs[10]+=   18;
	configs[11]+=   18;
	configs[12]+=   18;
	configs[21]+=   18;
	configs[22]+=   18;
	configs[23]+=   18;
	configs[30]+=   18;
	configs[31]+=   18;
	configs[32]+=   18;
	bb.mover.u4s[0]^=0x3C0000;
	bb.empty.u4s[0]^=0x200000;
}

void FlipFunctionBBWhite512() {
	configs[ 2]-= 1935;
	configs[10]-=   18;
	configs[11]-=   18;
	configs[12]-=   18;
	configs[14]-=    6;
	configs[21]-=   18;
	configs[22]-=   18;
	configs[23]-=   18;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[30]-=   18;
	configs[31]-=   18;
	configs[32]-=   18;
	bb.mover.u4s[0]^=0x7C0000;
	bb.empty.u4s[0]^=0x200000;
}

void FlipFunctionBBBlack512() {
	configs[ 2]+= 1935;
	configs[10]+=   18;
	configs[11]+=   18;
	configs[12]+=   18;
	configs[14]+=    6;
	configs[21]+=   18;
	configs[22]+=   18;
	configs[23]+=   18;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[30]+=   18;
	configs[31]+=   18;
	configs[32]+=   18;
	bb.mover.u4s[0]^=0x7C0000;
	bb.empty.u4s[0]^=0x200000;
}

void FlipFunctionBBWhite513() {
	configs[ 2]-=  483;
	configs[ 9]-=   18;
	configs[10]-=   18;
	configs[11]-=   18;
	configs[12]-=   18;
	configs[20]-=   18;
	configs[21]-=   18;
	configs[22]-=   18;
	configs[23]-=   18;
	configs[30]-=   18;
	configs[31]-=   18;
	configs[32]-=   18;
	configs[33]-=    6;
	bb.mover.u4s[0]^=0x3E0000;
	bb.empty.u4s[0]^=0x200000;
}

void FlipFunctionBBBlack513() {
	configs[ 2]+=  483;
	configs[ 9]+=   18;
	configs[10]+=   18;
	configs[11]+=   18;
	configs[12]+=   18;
	configs[20]+=   18;
	configs[21]+=   18;
	configs[22]+=   18;
	configs[23]+=   18;
	configs[30]+=   18;
	configs[31]+=   18;
	configs[32]+=   18;
	configs[33]+=    6;
	bb.mover.u4s[0]^=0x3E0000;
	bb.empty.u4s[0]^=0x200000;
}

void FlipFunctionBBWhite514() {
	configs[ 2]-= 1941;
	configs[ 9]-=   18;
	configs[10]-=   18;
	configs[11]-=   18;
	configs[12]-=   18;
	configs[14]-=    6;
	configs[20]-=   18;
	configs[21]-=   18;
	configs[22]-=   18;
	configs[23]-=   18;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[30]-=   18;
	configs[31]-=   18;
	configs[32]-=   18;
	configs[33]-=    6;
	bb.mover.u4s[0]^=0x7E0000;
	bb.empty.u4s[0]^=0x200000;
}

void FlipFunctionBBBlack514() {
	configs[ 2]+= 1941;
	configs[ 9]+=   18;
	configs[10]+=   18;
	configs[11]+=   18;
	configs[12]+=   18;
	configs[14]+=    6;
	configs[20]+=   18;
	configs[21]+=   18;
	configs[22]+=   18;
	configs[23]+=   18;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[30]+=   18;
	configs[31]+=   18;
	configs[32]+=   18;
	configs[33]+=    6;
	bb.mover.u4s[0]^=0x7E0000;
	bb.empty.u4s[0]^=0x200000;
}

void FlipFunctionBBWhite515() {
	configs[13]-=    9;
}

void FlipFunctionBBBlack515() {
	configs[13]+=    9;
}

void FlipFunctionBBWhite516() {
	configs[ 3]-=  162;
	configs[13]-=   63;
	configs[23]-=   54;
	configs[31]-=   54;
	bb.mover.u4s[0]^=0x10000000;
}

void FlipFunctionBBBlack516() {
	configs[ 3]+=  162;
	configs[13]+=   63;
	configs[23]+=   54;
	configs[31]+=   54;
	bb.mover.u4s[0]^=0x10000000;
}

void FlipFunctionBBWhite517() {
	configs[ 3]-=  162;
	configs[ 4]-=   54;
	configs[13]-=  225;
	configs[22]-=  162;
	configs[23]-=   54;
	configs[31]-=   54;
	configs[33]-=   54;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBBlack517() {
	configs[ 3]+=  162;
	configs[ 4]+=   54;
	configs[13]+=  225;
	configs[22]+=  162;
	configs[23]+=   54;
	configs[31]+=   54;
	configs[33]+=   54;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBWhite518() {
	configs[ 3]-=  162;
	configs[ 4]-=   54;
	configs[ 5]-=   18;
	configs[13]-=  711;
	configs[21]-=  486;
	configs[22]-=  162;
	configs[23]-=   54;
	configs[31]-=   54;
	configs[33]-=   54;
	configs[35]-=   18;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x408;
}

void FlipFunctionBBBlack518() {
	configs[ 3]+=  162;
	configs[ 4]+=   54;
	configs[ 5]+=   18;
	configs[13]+=  711;
	configs[21]+=  486;
	configs[22]+=  162;
	configs[23]+=   54;
	configs[31]+=   54;
	configs[33]+=   54;
	configs[35]+=   18;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x408;
}

void FlipFunctionBBWhite519() {
	configs[ 3]-=  162;
	configs[ 4]-=   54;
	configs[ 5]-=   18;
	configs[ 6]-=    6;
	configs[13]-= 2169;
	configs[20]-= 1458;
	configs[21]-=  486;
	configs[22]-=  162;
	configs[23]-=   54;
	configs[31]-=   54;
	configs[33]-=   54;
	configs[35]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x20408;
}

void FlipFunctionBBBlack519() {
	configs[ 3]+=  162;
	configs[ 4]+=   54;
	configs[ 5]+=   18;
	configs[ 6]+=    6;
	configs[13]+= 2169;
	configs[20]+= 1458;
	configs[21]+=  486;
	configs[22]+=  162;
	configs[23]+=   54;
	configs[31]+=   54;
	configs[33]+=   54;
	configs[35]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x20408;
}

void FlipFunctionBBWhite520() {
	configs[ 1]-= 1458;
	configs[13]-=   15;
	configs[25]-=    6;
	configs[27]-=    6;
	bb.mover.u4s[0]^=0x4000;
}

void FlipFunctionBBBlack520() {
	configs[ 1]+= 1458;
	configs[13]+=   15;
	configs[25]+=    6;
	configs[27]+=    6;
	bb.mover.u4s[0]^=0x4000;
}

void FlipFunctionBBWhite521() {
	configs[ 1]-= 1458;
	configs[ 3]-=  162;
	configs[13]-=   69;
	configs[23]-=   54;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[31]-=   54;
	bb.mover.u4s[0]^=0x10004000;
}

void FlipFunctionBBBlack521() {
	configs[ 1]+= 1458;
	configs[ 3]+=  162;
	configs[13]+=   69;
	configs[23]+=   54;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[31]+=   54;
	bb.mover.u4s[0]^=0x10004000;
}

void FlipFunctionBBWhite522() {
	configs[ 1]-= 1458;
	configs[ 3]-=  162;
	configs[ 4]-=   54;
	configs[13]-=  231;
	configs[22]-=  162;
	configs[23]-=   54;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[31]-=   54;
	configs[33]-=   54;
	bb.mover.u4s[0]^=0x10004000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBBlack522() {
	configs[ 1]+= 1458;
	configs[ 3]+=  162;
	configs[ 4]+=   54;
	configs[13]+=  231;
	configs[22]+=  162;
	configs[23]+=   54;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[31]+=   54;
	configs[33]+=   54;
	bb.mover.u4s[0]^=0x10004000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBWhite523() {
	configs[ 1]-= 1458;
	configs[ 3]-=  162;
	configs[ 4]-=   54;
	configs[ 5]-=   18;
	configs[13]-=  717;
	configs[21]-=  486;
	configs[22]-=  162;
	configs[23]-=   54;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[31]-=   54;
	configs[33]-=   54;
	configs[35]-=   18;
	bb.mover.u4s[0]^=0x10004000;
	bb.mover.u4s[1]^=0x408;
}

void FlipFunctionBBBlack523() {
	configs[ 1]+= 1458;
	configs[ 3]+=  162;
	configs[ 4]+=   54;
	configs[ 5]+=   18;
	configs[13]+=  717;
	configs[21]+=  486;
	configs[22]+=  162;
	configs[23]+=   54;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[31]+=   54;
	configs[33]+=   54;
	configs[35]+=   18;
	bb.mover.u4s[0]^=0x10004000;
	bb.mover.u4s[1]^=0x408;
}

void FlipFunctionBBWhite524() {
	configs[ 1]-= 1458;
	configs[ 3]-=  162;
	configs[ 4]-=   54;
	configs[ 5]-=   18;
	configs[ 6]-=    6;
	configs[13]-= 2175;
	configs[20]-= 1458;
	configs[21]-=  486;
	configs[22]-=  162;
	configs[23]-=   54;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[31]-=   54;
	configs[33]-=   54;
	configs[35]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[0]^=0x10004000;
	bb.mover.u4s[1]^=0x20408;
}

void FlipFunctionBBBlack524() {
	configs[ 1]+= 1458;
	configs[ 3]+=  162;
	configs[ 4]+=   54;
	configs[ 5]+=   18;
	configs[ 6]+=    6;
	configs[13]+= 2175;
	configs[20]+= 1458;
	configs[21]+=  486;
	configs[22]+=  162;
	configs[23]+=   54;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[31]+=   54;
	configs[33]+=   54;
	configs[35]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[0]^=0x10004000;
	bb.mover.u4s[1]^=0x20408;
}

void FlipFunctionBBWhite525() {
	configs[24]-=    9;
}

void FlipFunctionBBBlack525() {
	configs[24]+=    9;
}

void FlipFunctionBBWhite526() {
	configs[ 3]-=  486;
	configs[14]-=   18;
	configs[24]-=   63;
	configs[30]-=   54;
	bb.mover.u4s[0]^=0x20000000;
}

void FlipFunctionBBBlack526() {
	configs[ 3]+=  486;
	configs[14]+=   18;
	configs[24]+=   63;
	configs[30]+=   54;
	bb.mover.u4s[0]^=0x20000000;
}

void FlipFunctionBBWhite527() {
	configs[ 3]-=  486;
	configs[ 4]-=  486;
	configs[14]-=   18;
	configs[15]-=   18;
	configs[24]-=  225;
	configs[30]-=   54;
	configs[31]-=  162;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBBlack527() {
	configs[ 3]+=  486;
	configs[ 4]+=  486;
	configs[14]+=   18;
	configs[15]+=   18;
	configs[24]+=  225;
	configs[30]+=   54;
	configs[31]+=  162;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBWhite528() {
	configs[ 3]-=  486;
	configs[ 4]-=  486;
	configs[ 5]-=  486;
	configs[14]-=   18;
	configs[15]-=   18;
	configs[16]-=   18;
	configs[24]-=  711;
	configs[30]-=   54;
	configs[31]-=  162;
	configs[32]-=  486;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x2020;
}

void FlipFunctionBBBlack528() {
	configs[ 3]+=  486;
	configs[ 4]+=  486;
	configs[ 5]+=  486;
	configs[14]+=   18;
	configs[15]+=   18;
	configs[16]+=   18;
	configs[24]+=  711;
	configs[30]+=   54;
	configs[31]+=  162;
	configs[32]+=  486;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x2020;
}

void FlipFunctionBBWhite529() {
	configs[ 3]-=  486;
	configs[ 4]-=  486;
	configs[ 5]-=  486;
	configs[ 6]-=  486;
	configs[14]-=   18;
	configs[15]-=   18;
	configs[16]-=   18;
	configs[17]-=   18;
	configs[24]-= 2169;
	configs[30]-=   54;
	configs[31]-=  162;
	configs[32]-=  486;
	configs[33]-=  486;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x202020;
}

void FlipFunctionBBBlack529() {
	configs[ 3]+=  486;
	configs[ 4]+=  486;
	configs[ 5]+=  486;
	configs[ 6]+=  486;
	configs[14]+=   18;
	configs[15]+=   18;
	configs[16]+=   18;
	configs[17]+=   18;
	configs[24]+= 2169;
	configs[30]+=   54;
	configs[31]+=  162;
	configs[32]+=  486;
	configs[33]+=  486;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x202020;
}

void FlipFunctionBBWhite530() {
	configs[ 1]-=  486;
	configs[12]-=    6;
	configs[24]-=   15;
	configs[28]-=    6;
	bb.mover.u4s[0]^=0x2000;
}

void FlipFunctionBBBlack530() {
	configs[ 1]+=  486;
	configs[12]+=    6;
	configs[24]+=   15;
	configs[28]+=    6;
	bb.mover.u4s[0]^=0x2000;
}

void FlipFunctionBBWhite531() {
	configs[ 1]-=  486;
	configs[ 3]-=  486;
	configs[12]-=    6;
	configs[14]-=   18;
	configs[24]-=   69;
	configs[28]-=    6;
	configs[30]-=   54;
	bb.mover.u4s[0]^=0x20002000;
}

void FlipFunctionBBBlack531() {
	configs[ 1]+=  486;
	configs[ 3]+=  486;
	configs[12]+=    6;
	configs[14]+=   18;
	configs[24]+=   69;
	configs[28]+=    6;
	configs[30]+=   54;
	bb.mover.u4s[0]^=0x20002000;
}

void FlipFunctionBBWhite532() {
	configs[ 1]-=  486;
	configs[ 3]-=  486;
	configs[ 4]-=  486;
	configs[12]-=    6;
	configs[14]-=   18;
	configs[15]-=   18;
	configs[24]-=  231;
	configs[28]-=    6;
	configs[30]-=   54;
	configs[31]-=  162;
	bb.mover.u4s[0]^=0x20002000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBBlack532() {
	configs[ 1]+=  486;
	configs[ 3]+=  486;
	configs[ 4]+=  486;
	configs[12]+=    6;
	configs[14]+=   18;
	configs[15]+=   18;
	configs[24]+=  231;
	configs[28]+=    6;
	configs[30]+=   54;
	configs[31]+=  162;
	bb.mover.u4s[0]^=0x20002000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBWhite533() {
	configs[ 1]-=  486;
	configs[ 3]-=  486;
	configs[ 4]-=  486;
	configs[ 5]-=  486;
	configs[12]-=    6;
	configs[14]-=   18;
	configs[15]-=   18;
	configs[16]-=   18;
	configs[24]-=  717;
	configs[28]-=    6;
	configs[30]-=   54;
	configs[31]-=  162;
	configs[32]-=  486;
	bb.mover.u4s[0]^=0x20002000;
	bb.mover.u4s[1]^=0x2020;
}

void FlipFunctionBBBlack533() {
	configs[ 1]+=  486;
	configs[ 3]+=  486;
	configs[ 4]+=  486;
	configs[ 5]+=  486;
	configs[12]+=    6;
	configs[14]+=   18;
	configs[15]+=   18;
	configs[16]+=   18;
	configs[24]+=  717;
	configs[28]+=    6;
	configs[30]+=   54;
	configs[31]+=  162;
	configs[32]+=  486;
	bb.mover.u4s[0]^=0x20002000;
	bb.mover.u4s[1]^=0x2020;
}

void FlipFunctionBBWhite534() {
	configs[ 1]-=  486;
	configs[ 3]-=  486;
	configs[ 4]-=  486;
	configs[ 5]-=  486;
	configs[ 6]-=  486;
	configs[12]-=    6;
	configs[14]-=   18;
	configs[15]-=   18;
	configs[16]-=   18;
	configs[17]-=   18;
	configs[24]-= 2175;
	configs[28]-=    6;
	configs[30]-=   54;
	configs[31]-=  162;
	configs[32]-=  486;
	configs[33]-=  486;
	bb.mover.u4s[0]^=0x20002000;
	bb.mover.u4s[1]^=0x202020;
}

void FlipFunctionBBBlack534() {
	configs[ 1]+=  486;
	configs[ 3]+=  486;
	configs[ 4]+=  486;
	configs[ 5]+=  486;
	configs[ 6]+=  486;
	configs[12]+=    6;
	configs[14]+=   18;
	configs[15]+=   18;
	configs[16]+=   18;
	configs[17]+=   18;
	configs[24]+= 2175;
	configs[28]+=    6;
	configs[30]+=   54;
	configs[31]+=  162;
	configs[32]+=  486;
	configs[33]+=  486;
	bb.mover.u4s[0]^=0x20002000;
	bb.mover.u4s[1]^=0x202020;
}

void FlipFunctionBBWhite535() {
	configs[29]-=    9;
}

void FlipFunctionBBBlack535() {
	configs[29]+=    9;
}

void FlipFunctionBBWhite536() {
	configs[ 3]-= 1458;
	configs[15]-=    6;
	configs[25]-=   54;
	configs[29]-=   63;
	bb.mover.u4s[0]^=0x40000000;
}

void FlipFunctionBBBlack536() {
	configs[ 3]+= 1458;
	configs[15]+=    6;
	configs[25]+=   54;
	configs[29]+=   63;
	bb.mover.u4s[0]^=0x40000000;
}

void FlipFunctionBBWhite537() {
	configs[ 1]-=  162;
	configs[11]-=    6;
	configs[23]-=    6;
	configs[29]-=   15;
	bb.mover.u4s[0]^=0x1000;
}

void FlipFunctionBBBlack537() {
	configs[ 1]+=  162;
	configs[11]+=    6;
	configs[23]+=    6;
	configs[29]+=   15;
	bb.mover.u4s[0]^=0x1000;
}

void FlipFunctionBBWhite538() {
	configs[ 1]-=  162;
	configs[ 3]-= 1458;
	configs[11]-=    6;
	configs[15]-=    6;
	configs[23]-=    6;
	configs[25]-=   54;
	configs[29]-=   69;
	bb.mover.u4s[0]^=0x40001000;
}

void FlipFunctionBBBlack538() {
	configs[ 1]+=  162;
	configs[ 3]+= 1458;
	configs[11]+=    6;
	configs[15]+=    6;
	configs[23]+=    6;
	configs[25]+=   54;
	configs[29]+=   69;
	bb.mover.u4s[0]^=0x40001000;
}

void FlipFunctionBBWhite539() {
	configs[ 2]-=  729;
	bb.mover.u4s[0]^=0x400000;
	bb.empty.u4s[0]^=0x400000;
}

void FlipFunctionBBBlack539() {
	configs[ 2]+=  729;
	bb.mover.u4s[0]^=0x400000;
	bb.empty.u4s[0]^=0x400000;
}

void FlipFunctionBBWhite540() {
	configs[ 2]-= 1215;
	configs[13]-=   18;
	configs[24]-=   18;
	configs[29]-=   18;
	bb.mover.u4s[0]^=0x600000;
	bb.empty.u4s[0]^=0x400000;
}

void FlipFunctionBBBlack540() {
	configs[ 2]+= 1215;
	configs[13]+=   18;
	configs[24]+=   18;
	configs[29]+=   18;
	bb.mover.u4s[0]^=0x600000;
	bb.empty.u4s[0]^=0x400000;
}

void FlipFunctionBBWhite541() {
	configs[ 2]-= 1377;
	configs[12]-=   18;
	configs[13]-=   18;
	configs[23]-=   18;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[30]-=   18;
	bb.mover.u4s[0]^=0x700000;
	bb.empty.u4s[0]^=0x400000;
}

void FlipFunctionBBBlack541() {
	configs[ 2]+= 1377;
	configs[12]+=   18;
	configs[13]+=   18;
	configs[23]+=   18;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[30]+=   18;
	bb.mover.u4s[0]^=0x700000;
	bb.empty.u4s[0]^=0x400000;
}

void FlipFunctionBBWhite542() {
	configs[ 2]-= 1431;
	configs[11]-=   18;
	configs[12]-=   18;
	configs[13]-=   18;
	configs[22]-=   18;
	configs[23]-=   18;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[30]-=   18;
	configs[31]-=   18;
	bb.mover.u4s[0]^=0x780000;
	bb.empty.u4s[0]^=0x400000;
}

void FlipFunctionBBBlack542() {
	configs[ 2]+= 1431;
	configs[11]+=   18;
	configs[12]+=   18;
	configs[13]+=   18;
	configs[22]+=   18;
	configs[23]+=   18;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[30]+=   18;
	configs[31]+=   18;
	bb.mover.u4s[0]^=0x780000;
	bb.empty.u4s[0]^=0x400000;
}

void FlipFunctionBBWhite543() {
	configs[ 2]-= 1449;
	configs[10]-=   18;
	configs[11]-=   18;
	configs[12]-=   18;
	configs[13]-=   18;
	configs[21]-=   18;
	configs[22]-=   18;
	configs[23]-=   18;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[30]-=   18;
	configs[31]-=   18;
	configs[32]-=   18;
	bb.mover.u4s[0]^=0x7C0000;
	bb.empty.u4s[0]^=0x400000;
}

void FlipFunctionBBBlack543() {
	configs[ 2]+= 1449;
	configs[10]+=   18;
	configs[11]+=   18;
	configs[12]+=   18;
	configs[13]+=   18;
	configs[21]+=   18;
	configs[22]+=   18;
	configs[23]+=   18;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[30]+=   18;
	configs[31]+=   18;
	configs[32]+=   18;
	bb.mover.u4s[0]^=0x7C0000;
	bb.empty.u4s[0]^=0x400000;
}

void FlipFunctionBBWhite544() {
	configs[ 2]-= 1455;
	configs[ 9]-=   18;
	configs[10]-=   18;
	configs[11]-=   18;
	configs[12]-=   18;
	configs[13]-=   18;
	configs[20]-=   18;
	configs[21]-=   18;
	configs[22]-=   18;
	configs[23]-=   18;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[30]-=   18;
	configs[31]-=   18;
	configs[32]-=   18;
	configs[33]-=    6;
	bb.mover.u4s[0]^=0x7E0000;
	bb.empty.u4s[0]^=0x400000;
}

void FlipFunctionBBBlack544() {
	configs[ 2]+= 1455;
	configs[ 9]+=   18;
	configs[10]+=   18;
	configs[11]+=   18;
	configs[12]+=   18;
	configs[13]+=   18;
	configs[20]+=   18;
	configs[21]+=   18;
	configs[22]+=   18;
	configs[23]+=   18;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[30]+=   18;
	configs[31]+=   18;
	configs[32]+=   18;
	configs[33]+=    6;
	bb.mover.u4s[0]^=0x7E0000;
	bb.empty.u4s[0]^=0x400000;
}

void FlipFunctionBBWhite545() {
	configs[14]-=    3;
}

void FlipFunctionBBBlack545() {
	configs[14]+=    3;
}

void FlipFunctionBBWhite546() {
	configs[ 3]-=  486;
	configs[14]-=   21;
	configs[24]-=   54;
	configs[30]-=   54;
	bb.mover.u4s[0]^=0x20000000;
}

void FlipFunctionBBBlack546() {
	configs[ 3]+=  486;
	configs[14]+=   21;
	configs[24]+=   54;
	configs[30]+=   54;
	bb.mover.u4s[0]^=0x20000000;
}

void FlipFunctionBBWhite547() {
	configs[ 3]-=  486;
	configs[ 4]-=  162;
	configs[14]-=   75;
	configs[23]-=  162;
	configs[24]-=   54;
	configs[30]-=   54;
	configs[32]-=  162;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBBlack547() {
	configs[ 3]+=  486;
	configs[ 4]+=  162;
	configs[14]+=   75;
	configs[23]+=  162;
	configs[24]+=   54;
	configs[30]+=   54;
	configs[32]+=  162;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBWhite548() {
	configs[ 3]-=  486;
	configs[ 4]-=  162;
	configs[ 5]-=   54;
	configs[14]-=  237;
	configs[22]-=  486;
	configs[23]-=  162;
	configs[24]-=   54;
	configs[30]-=   54;
	configs[32]-=  162;
	configs[34]-=   54;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x810;
}

void FlipFunctionBBBlack548() {
	configs[ 3]+=  486;
	configs[ 4]+=  162;
	configs[ 5]+=   54;
	configs[14]+=  237;
	configs[22]+=  486;
	configs[23]+=  162;
	configs[24]+=   54;
	configs[30]+=   54;
	configs[32]+=  162;
	configs[34]+=   54;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x810;
}

void FlipFunctionBBWhite549() {
	configs[ 3]-=  486;
	configs[ 4]-=  162;
	configs[ 5]-=   54;
	configs[ 6]-=   18;
	configs[14]-=  723;
	configs[21]-= 1458;
	configs[22]-=  486;
	configs[23]-=  162;
	configs[24]-=   54;
	configs[30]-=   54;
	configs[32]-=  162;
	configs[34]-=   54;
	configs[36]-=   18;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x40810;
}

void FlipFunctionBBBlack549() {
	configs[ 3]+=  486;
	configs[ 4]+=  162;
	configs[ 5]+=   54;
	configs[ 6]+=   18;
	configs[14]+=  723;
	configs[21]+= 1458;
	configs[22]+=  486;
	configs[23]+=  162;
	configs[24]+=   54;
	configs[30]+=   54;
	configs[32]+=  162;
	configs[34]+=   54;
	configs[36]+=   18;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x40810;
}

void FlipFunctionBBWhite550() {
	configs[25]-=    9;
}

void FlipFunctionBBBlack550() {
	configs[25]+=    9;
}

void FlipFunctionBBWhite551() {
	configs[ 3]-= 1458;
	configs[15]-=    6;
	configs[25]-=   63;
	configs[29]-=   54;
	bb.mover.u4s[0]^=0x40000000;
}

void FlipFunctionBBBlack551() {
	configs[ 3]+= 1458;
	configs[15]+=    6;
	configs[25]+=   63;
	configs[29]+=   54;
	bb.mover.u4s[0]^=0x40000000;
}

void FlipFunctionBBWhite552() {
	configs[ 3]-= 1458;
	configs[ 4]-= 1458;
	configs[15]-=    6;
	configs[16]-=    6;
	configs[25]-=  225;
	configs[29]-=   54;
	configs[30]-=  162;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBBlack552() {
	configs[ 3]+= 1458;
	configs[ 4]+= 1458;
	configs[15]+=    6;
	configs[16]+=    6;
	configs[25]+=  225;
	configs[29]+=   54;
	configs[30]+=  162;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBWhite553() {
	configs[ 3]-= 1458;
	configs[ 4]-= 1458;
	configs[ 5]-= 1458;
	configs[15]-=    6;
	configs[16]-=    6;
	configs[17]-=    6;
	configs[25]-=  711;
	configs[29]-=   54;
	configs[30]-=  162;
	configs[31]-=  486;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x4040;
}

void FlipFunctionBBBlack553() {
	configs[ 3]+= 1458;
	configs[ 4]+= 1458;
	configs[ 5]+= 1458;
	configs[15]+=    6;
	configs[16]+=    6;
	configs[17]+=    6;
	configs[25]+=  711;
	configs[29]+=   54;
	configs[30]+=  162;
	configs[31]+=  486;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x4040;
}

void FlipFunctionBBWhite554() {
	configs[ 3]-= 1458;
	configs[ 4]-= 1458;
	configs[ 5]-= 1458;
	configs[ 6]-= 1458;
	configs[15]-=    6;
	configs[16]-=    6;
	configs[17]-=    6;
	configs[18]-=    6;
	configs[25]-= 2169;
	configs[29]-=   54;
	configs[30]-=  162;
	configs[31]-=  486;
	configs[32]-= 1458;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x404040;
}

void FlipFunctionBBBlack554() {
	configs[ 3]+= 1458;
	configs[ 4]+= 1458;
	configs[ 5]+= 1458;
	configs[ 6]+= 1458;
	configs[15]+=    6;
	configs[16]+=    6;
	configs[17]+=    6;
	configs[18]+=    6;
	configs[25]+= 2169;
	configs[29]+=   54;
	configs[30]+=  162;
	configs[31]+=  486;
	configs[32]+= 1458;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x404040;
}

void FlipFunctionBBWhite555() {
	configs[ 1]-= 1458;
	configs[13]-=    6;
	configs[25]-=   15;
	configs[27]-=    6;
	bb.mover.u4s[0]^=0x4000;
}

void FlipFunctionBBBlack555() {
	configs[ 1]+= 1458;
	configs[13]+=    6;
	configs[25]+=   15;
	configs[27]+=    6;
	bb.mover.u4s[0]^=0x4000;
}

void FlipFunctionBBWhite556() {
	configs[ 1]-= 1458;
	configs[ 3]-= 1458;
	configs[13]-=    6;
	configs[15]-=    6;
	configs[25]-=   69;
	configs[27]-=    6;
	configs[29]-=   54;
	bb.mover.u4s[0]^=0x40004000;
}

void FlipFunctionBBBlack556() {
	configs[ 1]+= 1458;
	configs[ 3]+= 1458;
	configs[13]+=    6;
	configs[15]+=    6;
	configs[25]+=   69;
	configs[27]+=    6;
	configs[29]+=   54;
	bb.mover.u4s[0]^=0x40004000;
}

void FlipFunctionBBWhite557() {
	configs[ 1]-= 1458;
	configs[ 3]-= 1458;
	configs[ 4]-= 1458;
	configs[13]-=    6;
	configs[15]-=    6;
	configs[16]-=    6;
	configs[25]-=  231;
	configs[27]-=    6;
	configs[29]-=   54;
	configs[30]-=  162;
	bb.mover.u4s[0]^=0x40004000;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBBlack557() {
	configs[ 1]+= 1458;
	configs[ 3]+= 1458;
	configs[ 4]+= 1458;
	configs[13]+=    6;
	configs[15]+=    6;
	configs[16]+=    6;
	configs[25]+=  231;
	configs[27]+=    6;
	configs[29]+=   54;
	configs[30]+=  162;
	bb.mover.u4s[0]^=0x40004000;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBWhite558() {
	configs[ 1]-= 1458;
	configs[ 3]-= 1458;
	configs[ 4]-= 1458;
	configs[ 5]-= 1458;
	configs[13]-=    6;
	configs[15]-=    6;
	configs[16]-=    6;
	configs[17]-=    6;
	configs[25]-=  717;
	configs[27]-=    6;
	configs[29]-=   54;
	configs[30]-=  162;
	configs[31]-=  486;
	bb.mover.u4s[0]^=0x40004000;
	bb.mover.u4s[1]^=0x4040;
}

void FlipFunctionBBBlack558() {
	configs[ 1]+= 1458;
	configs[ 3]+= 1458;
	configs[ 4]+= 1458;
	configs[ 5]+= 1458;
	configs[13]+=    6;
	configs[15]+=    6;
	configs[16]+=    6;
	configs[17]+=    6;
	configs[25]+=  717;
	configs[27]+=    6;
	configs[29]+=   54;
	configs[30]+=  162;
	configs[31]+=  486;
	bb.mover.u4s[0]^=0x40004000;
	bb.mover.u4s[1]^=0x4040;
}

void FlipFunctionBBWhite559() {
	configs[ 1]-= 1458;
	configs[ 3]-= 1458;
	configs[ 4]-= 1458;
	configs[ 5]-= 1458;
	configs[ 6]-= 1458;
	configs[13]-=    6;
	configs[15]-=    6;
	configs[16]-=    6;
	configs[17]-=    6;
	configs[18]-=    6;
	configs[25]-= 2175;
	configs[27]-=    6;
	configs[29]-=   54;
	configs[30]-=  162;
	configs[31]-=  486;
	configs[32]-= 1458;
	bb.mover.u4s[0]^=0x40004000;
	bb.mover.u4s[1]^=0x404040;
}

void FlipFunctionBBBlack559() {
	configs[ 1]+= 1458;
	configs[ 3]+= 1458;
	configs[ 4]+= 1458;
	configs[ 5]+= 1458;
	configs[ 6]+= 1458;
	configs[13]+=    6;
	configs[15]+=    6;
	configs[16]+=    6;
	configs[17]+=    6;
	configs[18]+=    6;
	configs[25]+= 2175;
	configs[27]+=    6;
	configs[29]+=   54;
	configs[30]+=  162;
	configs[31]+=  486;
	configs[32]+= 1458;
	bb.mover.u4s[0]^=0x40004000;
	bb.mover.u4s[1]^=0x404040;
}

void FlipFunctionBBWhite560() {
	configs[28]-=    9;
}

void FlipFunctionBBBlack560() {
	configs[28]+=    9;
}

void FlipFunctionBBWhite561() {
	configs[ 1]-=  486;
	configs[12]-=    6;
	configs[24]-=    6;
	configs[28]-=   15;
	bb.mover.u4s[0]^=0x2000;
}

void FlipFunctionBBBlack561() {
	configs[ 1]+=  486;
	configs[12]+=    6;
	configs[24]+=    6;
	configs[28]+=   15;
	bb.mover.u4s[0]^=0x2000;
}

void FlipFunctionBBWhite562() {
	configs[ 2]-= 2187;
	bb.mover.u4s[0]^=0x800000;
	bb.empty.u4s[0]^=0x800000;
}

void FlipFunctionBBBlack562() {
	configs[ 2]+= 2187;
	bb.mover.u4s[0]^=0x800000;
	bb.empty.u4s[0]^=0x800000;
}

void FlipFunctionBBWhite563() {
	configs[ 2]-= 3645;
	configs[14]-=    6;
	configs[25]-=   18;
	configs[28]-=   18;
	bb.mover.u4s[0]^=0xC00000;
	bb.empty.u4s[0]^=0x800000;
}

void FlipFunctionBBBlack563() {
	configs[ 2]+= 3645;
	configs[14]+=    6;
	configs[25]+=   18;
	configs[28]+=   18;
	bb.mover.u4s[0]^=0xC00000;
	bb.empty.u4s[0]^=0x800000;
}

void FlipFunctionBBWhite564() {
	configs[ 2]-= 4131;
	configs[13]-=   18;
	configs[14]-=    6;
	configs[24]-=   18;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[29]-=   18;
	bb.mover.u4s[0]^=0xE00000;
	bb.empty.u4s[0]^=0x800000;
}

void FlipFunctionBBBlack564() {
	configs[ 2]+= 4131;
	configs[13]+=   18;
	configs[14]+=    6;
	configs[24]+=   18;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[29]+=   18;
	bb.mover.u4s[0]^=0xE00000;
	bb.empty.u4s[0]^=0x800000;
}

void FlipFunctionBBWhite565() {
	configs[ 2]-= 4293;
	configs[12]-=   18;
	configs[13]-=   18;
	configs[14]-=    6;
	configs[23]-=   18;
	configs[24]-=   18;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[29]-=   18;
	configs[30]-=   18;
	bb.mover.u4s[0]^=0xF00000;
	bb.empty.u4s[0]^=0x800000;
}

void FlipFunctionBBBlack565() {
	configs[ 2]+= 4293;
	configs[12]+=   18;
	configs[13]+=   18;
	configs[14]+=    6;
	configs[23]+=   18;
	configs[24]+=   18;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[29]+=   18;
	configs[30]+=   18;
	bb.mover.u4s[0]^=0xF00000;
	bb.empty.u4s[0]^=0x800000;
}

void FlipFunctionBBWhite566() {
	configs[ 2]-= 4347;
	configs[11]-=   18;
	configs[12]-=   18;
	configs[13]-=   18;
	configs[14]-=    6;
	configs[22]-=   18;
	configs[23]-=   18;
	configs[24]-=   18;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[29]-=   18;
	configs[30]-=   18;
	configs[31]-=   18;
	bb.mover.u4s[0]^=0xF80000;
	bb.empty.u4s[0]^=0x800000;
}

void FlipFunctionBBBlack566() {
	configs[ 2]+= 4347;
	configs[11]+=   18;
	configs[12]+=   18;
	configs[13]+=   18;
	configs[14]+=    6;
	configs[22]+=   18;
	configs[23]+=   18;
	configs[24]+=   18;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[29]+=   18;
	configs[30]+=   18;
	configs[31]+=   18;
	bb.mover.u4s[0]^=0xF80000;
	bb.empty.u4s[0]^=0x800000;
}

void FlipFunctionBBWhite567() {
	configs[ 2]-= 4365;
	configs[10]-=   18;
	configs[11]-=   18;
	configs[12]-=   18;
	configs[13]-=   18;
	configs[14]-=    6;
	configs[21]-=   18;
	configs[22]-=   18;
	configs[23]-=   18;
	configs[24]-=   18;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[29]-=   18;
	configs[30]-=   18;
	configs[31]-=   18;
	configs[32]-=   18;
	bb.mover.u4s[0]^=0xFC0000;
	bb.empty.u4s[0]^=0x800000;
}

void FlipFunctionBBBlack567() {
	configs[ 2]+= 4365;
	configs[10]+=   18;
	configs[11]+=   18;
	configs[12]+=   18;
	configs[13]+=   18;
	configs[14]+=    6;
	configs[21]+=   18;
	configs[22]+=   18;
	configs[23]+=   18;
	configs[24]+=   18;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[29]+=   18;
	configs[30]+=   18;
	configs[31]+=   18;
	configs[32]+=   18;
	bb.mover.u4s[0]^=0xFC0000;
	bb.empty.u4s[0]^=0x800000;
}

void FlipFunctionBBWhite568() {
	configs[ 2]-= 4371;
	configs[ 9]-=   18;
	configs[10]-=   18;
	configs[11]-=   18;
	configs[12]-=   18;
	configs[13]-=   18;
	configs[14]-=    6;
	configs[20]-=   18;
	configs[21]-=   18;
	configs[22]-=   18;
	configs[23]-=   18;
	configs[24]-=   18;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[29]-=   18;
	configs[30]-=   18;
	configs[31]-=   18;
	configs[32]-=   18;
	configs[33]-=    6;
	bb.mover.u4s[0]^=0xFE0000;
	bb.empty.u4s[0]^=0x800000;
}

void FlipFunctionBBBlack568() {
	configs[ 2]+= 4371;
	configs[ 9]+=   18;
	configs[10]+=   18;
	configs[11]+=   18;
	configs[12]+=   18;
	configs[13]+=   18;
	configs[14]+=    6;
	configs[20]+=   18;
	configs[21]+=   18;
	configs[22]+=   18;
	configs[23]+=   18;
	configs[24]+=   18;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[29]+=   18;
	configs[30]+=   18;
	configs[31]+=   18;
	configs[32]+=   18;
	configs[33]+=    6;
	bb.mover.u4s[0]^=0xFE0000;
	bb.empty.u4s[0]^=0x800000;
}

void FlipFunctionBBWhite569() {
	configs[15]-=    1;
}

void FlipFunctionBBBlack569() {
	configs[15]+=    1;
}

void FlipFunctionBBWhite570() {
	configs[ 3]-= 1458;
	configs[15]-=    7;
	configs[25]-=   54;
	configs[29]-=   54;
	bb.mover.u4s[0]^=0x40000000;
}

void FlipFunctionBBBlack570() {
	configs[ 3]+= 1458;
	configs[15]+=    7;
	configs[25]+=   54;
	configs[29]+=   54;
	bb.mover.u4s[0]^=0x40000000;
}

void FlipFunctionBBWhite571() {
	configs[ 3]-= 1458;
	configs[ 4]-=  486;
	configs[15]-=   25;
	configs[24]-=  162;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[31]-=  162;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBBlack571() {
	configs[ 3]+= 1458;
	configs[ 4]+=  486;
	configs[15]+=   25;
	configs[24]+=  162;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[31]+=  162;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBWhite572() {
	configs[ 3]-= 1458;
	configs[ 4]-=  486;
	configs[ 5]-=  162;
	configs[15]-=   79;
	configs[23]-=  486;
	configs[24]-=  162;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[31]-=  162;
	configs[33]-=  162;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x1020;
}

void FlipFunctionBBBlack572() {
	configs[ 3]+= 1458;
	configs[ 4]+=  486;
	configs[ 5]+=  162;
	configs[15]+=   79;
	configs[23]+=  486;
	configs[24]+=  162;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[31]+=  162;
	configs[33]+=  162;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x1020;
}

void FlipFunctionBBWhite573() {
	configs[ 3]-= 1458;
	configs[ 4]-=  486;
	configs[ 5]-=  162;
	configs[ 6]-=   54;
	configs[15]-=  241;
	configs[22]-= 1458;
	configs[23]-=  486;
	configs[24]-=  162;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[31]-=  162;
	configs[33]-=  162;
	configs[35]-=   54;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x81020;
}

void FlipFunctionBBBlack573() {
	configs[ 3]+= 1458;
	configs[ 4]+=  486;
	configs[ 5]+=  162;
	configs[ 6]+=   54;
	configs[15]+=  241;
	configs[22]+= 1458;
	configs[23]+=  486;
	configs[24]+=  162;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[31]+=  162;
	configs[33]+=  162;
	configs[35]+=   54;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x81020;
}

void FlipFunctionBBWhite574() {
	configs[26]-=    9;
}

void FlipFunctionBBBlack574() {
	configs[26]+=    9;
}

void FlipFunctionBBWhite575() {
	configs[ 3]-= 4374;
	configs[16]-=    2;
	configs[26]-=   63;
	configs[28]-=   54;
	bb.mover.u4s[0]^=0x80000000;
}

void FlipFunctionBBBlack575() {
	configs[ 3]+= 4374;
	configs[16]+=    2;
	configs[26]+=   63;
	configs[28]+=   54;
	bb.mover.u4s[0]^=0x80000000;
}

void FlipFunctionBBWhite576() {
	configs[ 3]-= 4374;
	configs[ 4]-= 4374;
	configs[16]-=    2;
	configs[17]-=    2;
	configs[26]-=  225;
	configs[28]-=   54;
	configs[29]-=  162;
	bb.mover.u4s[0]^=0x80000000;
	bb.mover.u4s[1]^=0x80;
}

void FlipFunctionBBBlack576() {
	configs[ 3]+= 4374;
	configs[ 4]+= 4374;
	configs[16]+=    2;
	configs[17]+=    2;
	configs[26]+=  225;
	configs[28]+=   54;
	configs[29]+=  162;
	bb.mover.u4s[0]^=0x80000000;
	bb.mover.u4s[1]^=0x80;
}

void FlipFunctionBBWhite577() {
	configs[ 3]-= 4374;
	configs[ 4]-= 4374;
	configs[ 5]-= 4374;
	configs[16]-=    2;
	configs[17]-=    2;
	configs[18]-=    2;
	configs[26]-=  711;
	configs[28]-=   54;
	configs[29]-=  162;
	configs[30]-=  486;
	bb.mover.u4s[0]^=0x80000000;
	bb.mover.u4s[1]^=0x8080;
}

void FlipFunctionBBBlack577() {
	configs[ 3]+= 4374;
	configs[ 4]+= 4374;
	configs[ 5]+= 4374;
	configs[16]+=    2;
	configs[17]+=    2;
	configs[18]+=    2;
	configs[26]+=  711;
	configs[28]+=   54;
	configs[29]+=  162;
	configs[30]+=  486;
	bb.mover.u4s[0]^=0x80000000;
	bb.mover.u4s[1]^=0x8080;
}

void FlipFunctionBBWhite578() {
	configs[ 3]-= 4374;
	configs[ 4]-= 4374;
	configs[ 5]-= 4374;
	configs[ 6]-= 4374;
	configs[16]-=    2;
	configs[17]-=    2;
	configs[18]-=    2;
	configs[26]-= 2169;
	configs[28]-=   54;
	configs[29]-=  162;
	configs[30]-=  486;
	configs[31]-= 1458;
	bb.mover.u4s[0]^=0x80000000;
	bb.mover.u4s[1]^=0x808080;
}

void FlipFunctionBBBlack578() {
	configs[ 3]+= 4374;
	configs[ 4]+= 4374;
	configs[ 5]+= 4374;
	configs[ 6]+= 4374;
	configs[16]+=    2;
	configs[17]+=    2;
	configs[18]+=    2;
	configs[26]+= 2169;
	configs[28]+=   54;
	configs[29]+=  162;
	configs[30]+=  486;
	configs[31]+= 1458;
	bb.mover.u4s[0]^=0x80000000;
	bb.mover.u4s[1]^=0x808080;
}

void FlipFunctionBBWhite579() {
	configs[ 1]-= 4374;
	configs[14]-=    2;
	configs[26]-=   15;
	bb.mover.u4s[0]^=0x8000;
}

void FlipFunctionBBBlack579() {
	configs[ 1]+= 4374;
	configs[14]+=    2;
	configs[26]+=   15;
	bb.mover.u4s[0]^=0x8000;
}

void FlipFunctionBBWhite580() {
	configs[ 1]-= 4374;
	configs[ 3]-= 4374;
	configs[14]-=    2;
	configs[16]-=    2;
	configs[26]-=   69;
	configs[28]-=   54;
	bb.mover.u4s[0]^=0x80008000;
}

void FlipFunctionBBBlack580() {
	configs[ 1]+= 4374;
	configs[ 3]+= 4374;
	configs[14]+=    2;
	configs[16]+=    2;
	configs[26]+=   69;
	configs[28]+=   54;
	bb.mover.u4s[0]^=0x80008000;
}

void FlipFunctionBBWhite581() {
	configs[ 1]-= 4374;
	configs[ 3]-= 4374;
	configs[ 4]-= 4374;
	configs[14]-=    2;
	configs[16]-=    2;
	configs[17]-=    2;
	configs[26]-=  231;
	configs[28]-=   54;
	configs[29]-=  162;
	bb.mover.u4s[0]^=0x80008000;
	bb.mover.u4s[1]^=0x80;
}

void FlipFunctionBBBlack581() {
	configs[ 1]+= 4374;
	configs[ 3]+= 4374;
	configs[ 4]+= 4374;
	configs[14]+=    2;
	configs[16]+=    2;
	configs[17]+=    2;
	configs[26]+=  231;
	configs[28]+=   54;
	configs[29]+=  162;
	bb.mover.u4s[0]^=0x80008000;
	bb.mover.u4s[1]^=0x80;
}

void FlipFunctionBBWhite582() {
	configs[ 1]-= 4374;
	configs[ 3]-= 4374;
	configs[ 4]-= 4374;
	configs[ 5]-= 4374;
	configs[14]-=    2;
	configs[16]-=    2;
	configs[17]-=    2;
	configs[18]-=    2;
	configs[26]-=  717;
	configs[28]-=   54;
	configs[29]-=  162;
	configs[30]-=  486;
	bb.mover.u4s[0]^=0x80008000;
	bb.mover.u4s[1]^=0x8080;
}

void FlipFunctionBBBlack582() {
	configs[ 1]+= 4374;
	configs[ 3]+= 4374;
	configs[ 4]+= 4374;
	configs[ 5]+= 4374;
	configs[14]+=    2;
	configs[16]+=    2;
	configs[17]+=    2;
	configs[18]+=    2;
	configs[26]+=  717;
	configs[28]+=   54;
	configs[29]+=  162;
	configs[30]+=  486;
	bb.mover.u4s[0]^=0x80008000;
	bb.mover.u4s[1]^=0x8080;
}

void FlipFunctionBBWhite583() {
	configs[ 1]-= 4374;
	configs[ 3]-= 4374;
	configs[ 4]-= 4374;
	configs[ 5]-= 4374;
	configs[ 6]-= 4374;
	configs[14]-=    2;
	configs[16]-=    2;
	configs[17]-=    2;
	configs[18]-=    2;
	configs[26]-= 2175;
	configs[28]-=   54;
	configs[29]-=  162;
	configs[30]-=  486;
	configs[31]-= 1458;
	bb.mover.u4s[0]^=0x80008000;
	bb.mover.u4s[1]^=0x808080;
}

void FlipFunctionBBBlack583() {
	configs[ 1]+= 4374;
	configs[ 3]+= 4374;
	configs[ 4]+= 4374;
	configs[ 5]+= 4374;
	configs[ 6]+= 4374;
	configs[14]+=    2;
	configs[16]+=    2;
	configs[17]+=    2;
	configs[18]+=    2;
	configs[26]+= 2175;
	configs[28]+=   54;
	configs[29]+=  162;
	configs[30]+=  486;
	configs[31]+= 1458;
	bb.mover.u4s[0]^=0x80008000;
	bb.mover.u4s[1]^=0x808080;
}

void FlipFunctionBBWhite584() {
	configs[27]-=    9;
}

void FlipFunctionBBBlack584() {
	configs[27]+=    9;
}

void FlipFunctionBBWhite585() {
	configs[ 1]-= 1458;
	configs[13]-=    6;
	configs[25]-=    6;
	configs[27]-=   15;
	bb.mover.u4s[0]^=0x4000;
}

void FlipFunctionBBBlack585() {
	configs[ 1]+= 1458;
	configs[13]+=    6;
	configs[25]+=    6;
	configs[27]+=   15;
	bb.mover.u4s[0]^=0x4000;
}

void FlipFunctionBBWhite586() {
	configs[ 3]-=    1;
	bb.mover.u4s[0]^=0x1000000;
	bb.empty.u4s[0]^=0x1000000;
}

void FlipFunctionBBBlack586() {
	configs[ 3]+=    1;
	bb.mover.u4s[0]^=0x1000000;
	bb.empty.u4s[0]^=0x1000000;
}

void FlipFunctionBBWhite587() {
	configs[ 3]-=    7;
	configs[10]-=   54;
	configs[20]-=   54;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x3000000;
	bb.empty.u4s[0]^=0x1000000;
}

void FlipFunctionBBBlack587() {
	configs[ 3]+=    7;
	configs[10]+=   54;
	configs[20]+=   54;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x3000000;
	bb.empty.u4s[0]^=0x1000000;
}

void FlipFunctionBBWhite588() {
	configs[ 3]-=   25;
	configs[10]-=   54;
	configs[11]-=   54;
	configs[20]-=   54;
	configs[21]-=   54;
	configs[33]-=   18;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x7000000;
	bb.empty.u4s[0]^=0x1000000;
}

void FlipFunctionBBBlack588() {
	configs[ 3]+=   25;
	configs[10]+=   54;
	configs[11]+=   54;
	configs[20]+=   54;
	configs[21]+=   54;
	configs[33]+=   18;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x7000000;
	bb.empty.u4s[0]^=0x1000000;
}

void FlipFunctionBBWhite589() {
	configs[ 3]-=   79;
	configs[10]-=   54;
	configs[11]-=   54;
	configs[12]-=   54;
	configs[20]-=   54;
	configs[21]-=   54;
	configs[22]-=   54;
	configs[32]-=   54;
	configs[33]-=   18;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0xF000000;
	bb.empty.u4s[0]^=0x1000000;
}

void FlipFunctionBBBlack589() {
	configs[ 3]+=   79;
	configs[10]+=   54;
	configs[11]+=   54;
	configs[12]+=   54;
	configs[20]+=   54;
	configs[21]+=   54;
	configs[22]+=   54;
	configs[32]+=   54;
	configs[33]+=   18;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0xF000000;
	bb.empty.u4s[0]^=0x1000000;
}

void FlipFunctionBBWhite590() {
	configs[ 3]-=  241;
	configs[10]-=   54;
	configs[11]-=   54;
	configs[12]-=   54;
	configs[13]-=   54;
	configs[20]-=   54;
	configs[21]-=   54;
	configs[22]-=   54;
	configs[23]-=   54;
	configs[31]-=   54;
	configs[32]-=   54;
	configs[33]-=   18;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x1F000000;
	bb.empty.u4s[0]^=0x1000000;
}

void FlipFunctionBBBlack590() {
	configs[ 3]+=  241;
	configs[10]+=   54;
	configs[11]+=   54;
	configs[12]+=   54;
	configs[13]+=   54;
	configs[20]+=   54;
	configs[21]+=   54;
	configs[22]+=   54;
	configs[23]+=   54;
	configs[31]+=   54;
	configs[32]+=   54;
	configs[33]+=   18;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x1F000000;
	bb.empty.u4s[0]^=0x1000000;
}

void FlipFunctionBBWhite591() {
	configs[ 3]-=  727;
	configs[10]-=   54;
	configs[11]-=   54;
	configs[12]-=   54;
	configs[13]-=   54;
	configs[14]-=   18;
	configs[20]-=   54;
	configs[21]-=   54;
	configs[22]-=   54;
	configs[23]-=   54;
	configs[24]-=   54;
	configs[30]-=   54;
	configs[31]-=   54;
	configs[32]-=   54;
	configs[33]-=   18;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x3F000000;
	bb.empty.u4s[0]^=0x1000000;
}

void FlipFunctionBBBlack591() {
	configs[ 3]+=  727;
	configs[10]+=   54;
	configs[11]+=   54;
	configs[12]+=   54;
	configs[13]+=   54;
	configs[14]+=   18;
	configs[20]+=   54;
	configs[21]+=   54;
	configs[22]+=   54;
	configs[23]+=   54;
	configs[24]+=   54;
	configs[30]+=   54;
	configs[31]+=   54;
	configs[32]+=   54;
	configs[33]+=   18;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x3F000000;
	bb.empty.u4s[0]^=0x1000000;
}

void FlipFunctionBBWhite592() {
	configs[ 3]-= 2185;
	configs[10]-=   54;
	configs[11]-=   54;
	configs[12]-=   54;
	configs[13]-=   54;
	configs[14]-=   18;
	configs[15]-=    6;
	configs[20]-=   54;
	configs[21]-=   54;
	configs[22]-=   54;
	configs[23]-=   54;
	configs[24]-=   54;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[30]-=   54;
	configs[31]-=   54;
	configs[32]-=   54;
	configs[33]-=   18;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x7F000000;
	bb.empty.u4s[0]^=0x1000000;
}

void FlipFunctionBBBlack592() {
	configs[ 3]+= 2185;
	configs[10]+=   54;
	configs[11]+=   54;
	configs[12]+=   54;
	configs[13]+=   54;
	configs[14]+=   18;
	configs[15]+=    6;
	configs[20]+=   54;
	configs[21]+=   54;
	configs[22]+=   54;
	configs[23]+=   54;
	configs[24]+=   54;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[30]+=   54;
	configs[31]+=   54;
	configs[32]+=   54;
	configs[33]+=   18;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x7F000000;
	bb.empty.u4s[0]^=0x1000000;
}

void FlipFunctionBBWhite593() {
	configs[ 9]-=   27;
}

void FlipFunctionBBBlack593() {
	configs[ 9]+=   27;
}

void FlipFunctionBBWhite594() {
	configs[ 2]-=    6;
	configs[ 9]-=   45;
	configs[20]-=   18;
	configs[33]-=    6;
	bb.mover.u4s[0]^=0x20000;
}

void FlipFunctionBBBlack594() {
	configs[ 2]+=    6;
	configs[ 9]+=   45;
	configs[20]+=   18;
	configs[33]+=    6;
	bb.mover.u4s[0]^=0x20000;
}

void FlipFunctionBBWhite595() {
	configs[ 1]-=   18;
	configs[ 2]-=    6;
	configs[ 9]-=   51;
	configs[20]-=   18;
	configs[21]-=    6;
	configs[31]-=    6;
	configs[33]-=    6;
	bb.mover.u4s[0]^=0x20400;
}

void FlipFunctionBBBlack595() {
	configs[ 1]+=   18;
	configs[ 2]+=    6;
	configs[ 9]+=   51;
	configs[20]+=   18;
	configs[21]+=    6;
	configs[31]+=    6;
	configs[33]+=    6;
	bb.mover.u4s[0]^=0x20400;
}

void FlipFunctionBBWhite596() {
	configs[19]-=   27;
}

void FlipFunctionBBBlack596() {
	configs[19]+=   27;
}

void FlipFunctionBBWhite597() {
	configs[ 4]-=    2;
	configs[10]-=  162;
	configs[19]-=  189;
	configs[36]-=    2;
	bb.mover.u4s[1]^=0x1;
}

void FlipFunctionBBBlack597() {
	configs[ 4]+=    2;
	configs[10]+=  162;
	configs[19]+=  189;
	configs[36]+=    2;
	bb.mover.u4s[1]^=0x1;
}

void FlipFunctionBBWhite598() {
	configs[ 4]-=    2;
	configs[ 5]-=    2;
	configs[10]-=  162;
	configs[11]-=  486;
	configs[19]-=  675;
	configs[36]-=    2;
	configs[37]-=    2;
	bb.mover.u4s[1]^=0x101;
}

void FlipFunctionBBBlack598() {
	configs[ 4]+=    2;
	configs[ 5]+=    2;
	configs[10]+=  162;
	configs[11]+=  486;
	configs[19]+=  675;
	configs[36]+=    2;
	configs[37]+=    2;
	bb.mover.u4s[1]^=0x101;
}

void FlipFunctionBBWhite599() {
	configs[ 4]-=    2;
	configs[ 5]-=    2;
	configs[ 6]-=    2;
	configs[10]-=  162;
	configs[11]-=  486;
	configs[12]-= 1458;
	configs[19]-= 2133;
	configs[36]-=    2;
	configs[37]-=    2;
	bb.mover.u4s[1]^=0x10101;
}

void FlipFunctionBBBlack599() {
	configs[ 4]+=    2;
	configs[ 5]+=    2;
	configs[ 6]+=    2;
	configs[10]+=  162;
	configs[11]+=  486;
	configs[12]+= 1458;
	configs[19]+= 2133;
	configs[36]+=    2;
	configs[37]+=    2;
	bb.mover.u4s[1]^=0x10101;
}

void FlipFunctionBBWhite600() {
	configs[ 2]-=    2;
	configs[ 8]-=   18;
	configs[19]-=   45;
	configs[34]-=    2;
	bb.mover.u4s[0]^=0x10000;
}

void FlipFunctionBBBlack600() {
	configs[ 2]+=    2;
	configs[ 8]+=   18;
	configs[19]+=   45;
	configs[34]+=    2;
	bb.mover.u4s[0]^=0x10000;
}

void FlipFunctionBBWhite601() {
	configs[ 2]-=    2;
	configs[ 4]-=    2;
	configs[ 8]-=   18;
	configs[10]-=  162;
	configs[19]-=  207;
	configs[34]-=    2;
	configs[36]-=    2;
	bb.mover.u4s[0]^=0x10000;
	bb.mover.u4s[1]^=0x1;
}

void FlipFunctionBBBlack601() {
	configs[ 2]+=    2;
	configs[ 4]+=    2;
	configs[ 8]+=   18;
	configs[10]+=  162;
	configs[19]+=  207;
	configs[34]+=    2;
	configs[36]+=    2;
	bb.mover.u4s[0]^=0x10000;
	bb.mover.u4s[1]^=0x1;
}

void FlipFunctionBBWhite602() {
	configs[ 2]-=    2;
	configs[ 4]-=    2;
	configs[ 5]-=    2;
	configs[ 8]-=   18;
	configs[10]-=  162;
	configs[11]-=  486;
	configs[19]-=  693;
	configs[34]-=    2;
	configs[36]-=    2;
	configs[37]-=    2;
	bb.mover.u4s[0]^=0x10000;
	bb.mover.u4s[1]^=0x101;
}

void FlipFunctionBBBlack602() {
	configs[ 2]+=    2;
	configs[ 4]+=    2;
	configs[ 5]+=    2;
	configs[ 8]+=   18;
	configs[10]+=  162;
	configs[11]+=  486;
	configs[19]+=  693;
	configs[34]+=    2;
	configs[36]+=    2;
	configs[37]+=    2;
	bb.mover.u4s[0]^=0x10000;
	bb.mover.u4s[1]^=0x101;
}

void FlipFunctionBBWhite603() {
	configs[ 2]-=    2;
	configs[ 4]-=    2;
	configs[ 5]-=    2;
	configs[ 6]-=    2;
	configs[ 8]-=   18;
	configs[10]-=  162;
	configs[11]-=  486;
	configs[12]-= 1458;
	configs[19]-= 2151;
	configs[34]-=    2;
	configs[36]-=    2;
	configs[37]-=    2;
	bb.mover.u4s[0]^=0x10000;
	bb.mover.u4s[1]^=0x10101;
}

void FlipFunctionBBBlack603() {
	configs[ 2]+=    2;
	configs[ 4]+=    2;
	configs[ 5]+=    2;
	configs[ 6]+=    2;
	configs[ 8]+=   18;
	configs[10]+=  162;
	configs[11]+=  486;
	configs[12]+= 1458;
	configs[19]+= 2151;
	configs[34]+=    2;
	configs[36]+=    2;
	configs[37]+=    2;
	bb.mover.u4s[0]^=0x10000;
	bb.mover.u4s[1]^=0x10101;
}

void FlipFunctionBBWhite604() {
	configs[ 1]-=    2;
	configs[ 2]-=    2;
	configs[ 8]-=   18;
	configs[19]-=   51;
	configs[33]-=    2;
	configs[34]-=    2;
	bb.mover.u4s[0]^=0x10100;
}

void FlipFunctionBBBlack604() {
	configs[ 1]+=    2;
	configs[ 2]+=    2;
	configs[ 8]+=   18;
	configs[19]+=   51;
	configs[33]+=    2;
	configs[34]+=    2;
	bb.mover.u4s[0]^=0x10100;
}

void FlipFunctionBBWhite605() {
	configs[ 1]-=    2;
	configs[ 2]-=    2;
	configs[ 4]-=    2;
	configs[ 8]-=   18;
	configs[10]-=  162;
	configs[19]-=  213;
	configs[33]-=    2;
	configs[34]-=    2;
	configs[36]-=    2;
	bb.mover.u4s[0]^=0x10100;
	bb.mover.u4s[1]^=0x1;
}

void FlipFunctionBBBlack605() {
	configs[ 1]+=    2;
	configs[ 2]+=    2;
	configs[ 4]+=    2;
	configs[ 8]+=   18;
	configs[10]+=  162;
	configs[19]+=  213;
	configs[33]+=    2;
	configs[34]+=    2;
	configs[36]+=    2;
	bb.mover.u4s[0]^=0x10100;
	bb.mover.u4s[1]^=0x1;
}

void FlipFunctionBBWhite606() {
	configs[ 1]-=    2;
	configs[ 2]-=    2;
	configs[ 4]-=    2;
	configs[ 5]-=    2;
	configs[ 8]-=   18;
	configs[10]-=  162;
	configs[11]-=  486;
	configs[19]-=  699;
	configs[33]-=    2;
	configs[34]-=    2;
	configs[36]-=    2;
	configs[37]-=    2;
	bb.mover.u4s[0]^=0x10100;
	bb.mover.u4s[1]^=0x101;
}

void FlipFunctionBBBlack606() {
	configs[ 1]+=    2;
	configs[ 2]+=    2;
	configs[ 4]+=    2;
	configs[ 5]+=    2;
	configs[ 8]+=   18;
	configs[10]+=  162;
	configs[11]+=  486;
	configs[19]+=  699;
	configs[33]+=    2;
	configs[34]+=    2;
	configs[36]+=    2;
	configs[37]+=    2;
	bb.mover.u4s[0]^=0x10100;
	bb.mover.u4s[1]^=0x101;
}

void FlipFunctionBBWhite607() {
	configs[ 1]-=    2;
	configs[ 2]-=    2;
	configs[ 4]-=    2;
	configs[ 5]-=    2;
	configs[ 6]-=    2;
	configs[ 8]-=   18;
	configs[10]-=  162;
	configs[11]-=  486;
	configs[12]-= 1458;
	configs[19]-= 2157;
	configs[33]-=    2;
	configs[34]-=    2;
	configs[36]-=    2;
	configs[37]-=    2;
	bb.mover.u4s[0]^=0x10100;
	bb.mover.u4s[1]^=0x10101;
}

void FlipFunctionBBBlack607() {
	configs[ 1]+=    2;
	configs[ 2]+=    2;
	configs[ 4]+=    2;
	configs[ 5]+=    2;
	configs[ 6]+=    2;
	configs[ 8]+=   18;
	configs[10]+=  162;
	configs[11]+=  486;
	configs[12]+= 1458;
	configs[19]+= 2157;
	configs[33]+=    2;
	configs[34]+=    2;
	configs[36]+=    2;
	configs[37]+=    2;
	bb.mover.u4s[0]^=0x10100;
	bb.mover.u4s[1]^=0x10101;
}

void FlipFunctionBBWhite608() {
	configs[35]-=    1;
}

void FlipFunctionBBBlack608() {
	configs[35]+=    1;
}

void FlipFunctionBBWhite609() {
	configs[ 4]-=    6;
	configs[11]-=  162;
	configs[20]-=  162;
	configs[35]-=    7;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBBlack609() {
	configs[ 4]+=    6;
	configs[11]+=  162;
	configs[20]+=  162;
	configs[35]+=    7;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBWhite610() {
	configs[ 4]-=    6;
	configs[ 5]-=   18;
	configs[11]-=  162;
	configs[13]-=  486;
	configs[20]-=  162;
	configs[21]-=  486;
	configs[35]-=   25;
	bb.mover.u4s[1]^=0x402;
}

void FlipFunctionBBBlack610() {
	configs[ 4]+=    6;
	configs[ 5]+=   18;
	configs[11]+=  162;
	configs[13]+=  486;
	configs[20]+=  162;
	configs[21]+=  486;
	configs[35]+=   25;
	bb.mover.u4s[1]^=0x402;
}

void FlipFunctionBBWhite611() {
	configs[ 4]-=    6;
	configs[ 5]-=   18;
	configs[ 6]-=   54;
	configs[11]-=  162;
	configs[13]-=  486;
	configs[15]-=  162;
	configs[20]-=  162;
	configs[21]-=  486;
	configs[22]-= 1458;
	configs[35]-=   79;
	bb.mover.u4s[1]^=0x80402;
}

void FlipFunctionBBBlack611() {
	configs[ 4]+=    6;
	configs[ 5]+=   18;
	configs[ 6]+=   54;
	configs[11]+=  162;
	configs[13]+=  486;
	configs[15]+=  162;
	configs[20]+=  162;
	configs[21]+=  486;
	configs[22]+= 1458;
	configs[35]+=   79;
	bb.mover.u4s[1]^=0x80402;
}

void FlipFunctionBBWhite612() {
	configs[ 3]-=    3;
	bb.mover.u4s[0]^=0x2000000;
	bb.empty.u4s[0]^=0x2000000;
}

void FlipFunctionBBBlack612() {
	configs[ 3]+=    3;
	bb.mover.u4s[0]^=0x2000000;
	bb.empty.u4s[0]^=0x2000000;
}

void FlipFunctionBBWhite613() {
	configs[ 3]-=   21;
	configs[11]-=   54;
	configs[21]-=   54;
	configs[33]-=   18;
	bb.mover.u4s[0]^=0x6000000;
	bb.empty.u4s[0]^=0x2000000;
}

void FlipFunctionBBBlack613() {
	configs[ 3]+=   21;
	configs[11]+=   54;
	configs[21]+=   54;
	configs[33]+=   18;
	bb.mover.u4s[0]^=0x6000000;
	bb.empty.u4s[0]^=0x2000000;
}

void FlipFunctionBBWhite614() {
	configs[ 3]-=   75;
	configs[11]-=   54;
	configs[12]-=   54;
	configs[21]-=   54;
	configs[22]-=   54;
	configs[32]-=   54;
	configs[33]-=   18;
	bb.mover.u4s[0]^=0xE000000;
	bb.empty.u4s[0]^=0x2000000;
}

void FlipFunctionBBBlack614() {
	configs[ 3]+=   75;
	configs[11]+=   54;
	configs[12]+=   54;
	configs[21]+=   54;
	configs[22]+=   54;
	configs[32]+=   54;
	configs[33]+=   18;
	bb.mover.u4s[0]^=0xE000000;
	bb.empty.u4s[0]^=0x2000000;
}

void FlipFunctionBBWhite615() {
	configs[ 3]-=  237;
	configs[11]-=   54;
	configs[12]-=   54;
	configs[13]-=   54;
	configs[21]-=   54;
	configs[22]-=   54;
	configs[23]-=   54;
	configs[31]-=   54;
	configs[32]-=   54;
	configs[33]-=   18;
	bb.mover.u4s[0]^=0x1E000000;
	bb.empty.u4s[0]^=0x2000000;
}

void FlipFunctionBBBlack615() {
	configs[ 3]+=  237;
	configs[11]+=   54;
	configs[12]+=   54;
	configs[13]+=   54;
	configs[21]+=   54;
	configs[22]+=   54;
	configs[23]+=   54;
	configs[31]+=   54;
	configs[32]+=   54;
	configs[33]+=   18;
	bb.mover.u4s[0]^=0x1E000000;
	bb.empty.u4s[0]^=0x2000000;
}

void FlipFunctionBBWhite616() {
	configs[ 3]-=  723;
	configs[11]-=   54;
	configs[12]-=   54;
	configs[13]-=   54;
	configs[14]-=   18;
	configs[21]-=   54;
	configs[22]-=   54;
	configs[23]-=   54;
	configs[24]-=   54;
	configs[30]-=   54;
	configs[31]-=   54;
	configs[32]-=   54;
	configs[33]-=   18;
	bb.mover.u4s[0]^=0x3E000000;
	bb.empty.u4s[0]^=0x2000000;
}

void FlipFunctionBBBlack616() {
	configs[ 3]+=  723;
	configs[11]+=   54;
	configs[12]+=   54;
	configs[13]+=   54;
	configs[14]+=   18;
	configs[21]+=   54;
	configs[22]+=   54;
	configs[23]+=   54;
	configs[24]+=   54;
	configs[30]+=   54;
	configs[31]+=   54;
	configs[32]+=   54;
	configs[33]+=   18;
	bb.mover.u4s[0]^=0x3E000000;
	bb.empty.u4s[0]^=0x2000000;
}

void FlipFunctionBBWhite617() {
	configs[ 3]-= 2181;
	configs[11]-=   54;
	configs[12]-=   54;
	configs[13]-=   54;
	configs[14]-=   18;
	configs[15]-=    6;
	configs[21]-=   54;
	configs[22]-=   54;
	configs[23]-=   54;
	configs[24]-=   54;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[30]-=   54;
	configs[31]-=   54;
	configs[32]-=   54;
	configs[33]-=   18;
	bb.mover.u4s[0]^=0x7E000000;
	bb.empty.u4s[0]^=0x2000000;
}

void FlipFunctionBBBlack617() {
	configs[ 3]+= 2181;
	configs[11]+=   54;
	configs[12]+=   54;
	configs[13]+=   54;
	configs[14]+=   18;
	configs[15]+=    6;
	configs[21]+=   54;
	configs[22]+=   54;
	configs[23]+=   54;
	configs[24]+=   54;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[30]+=   54;
	configs[31]+=   54;
	configs[32]+=   54;
	configs[33]+=   18;
	bb.mover.u4s[0]^=0x7E000000;
	bb.empty.u4s[0]^=0x2000000;
}

void FlipFunctionBBWhite618() {
	configs[10]-=   27;
}

void FlipFunctionBBBlack618() {
	configs[10]+=   27;
}

void FlipFunctionBBWhite619() {
	configs[ 2]-=   18;
	configs[10]-=   45;
	configs[21]-=   18;
	configs[32]-=   18;
	bb.mover.u4s[0]^=0x40000;
}

void FlipFunctionBBBlack619() {
	configs[ 2]+=   18;
	configs[10]+=   45;
	configs[21]+=   18;
	configs[32]+=   18;
	bb.mover.u4s[0]^=0x40000;
}

void FlipFunctionBBWhite620() {
	configs[ 1]-=   54;
	configs[ 2]-=   18;
	configs[10]-=   51;
	configs[21]-=   18;
	configs[22]-=    6;
	configs[30]-=    6;
	configs[32]-=   18;
	bb.mover.u4s[0]^=0x40800;
}

void FlipFunctionBBBlack620() {
	configs[ 1]+=   54;
	configs[ 2]+=   18;
	configs[10]+=   51;
	configs[21]+=   18;
	configs[22]+=    6;
	configs[30]+=    6;
	configs[32]+=   18;
	bb.mover.u4s[0]^=0x40800;
}

void FlipFunctionBBWhite621() {
	configs[20]-=   27;
}

void FlipFunctionBBBlack621() {
	configs[20]+=   27;
}

void FlipFunctionBBWhite622() {
	configs[ 4]-=    6;
	configs[11]-=  162;
	configs[20]-=  189;
	configs[35]-=    6;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBBlack622() {
	configs[ 4]+=    6;
	configs[11]+=  162;
	configs[20]+=  189;
	configs[35]+=    6;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBWhite623() {
	configs[ 4]-=    6;
	configs[ 5]-=    6;
	configs[11]-=  162;
	configs[12]-=  486;
	configs[20]-=  675;
	configs[35]-=    6;
	configs[36]-=    6;
	bb.mover.u4s[1]^=0x202;
}

void FlipFunctionBBBlack623() {
	configs[ 4]+=    6;
	configs[ 5]+=    6;
	configs[11]+=  162;
	configs[12]+=  486;
	configs[20]+=  675;
	configs[35]+=    6;
	configs[36]+=    6;
	bb.mover.u4s[1]^=0x202;
}

void FlipFunctionBBWhite624() {
	configs[ 4]-=    6;
	configs[ 5]-=    6;
	configs[ 6]-=    6;
	configs[11]-=  162;
	configs[12]-=  486;
	configs[13]-= 1458;
	configs[20]-= 2133;
	configs[35]-=    6;
	configs[36]-=    6;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x20202;
}

void FlipFunctionBBBlack624() {
	configs[ 4]+=    6;
	configs[ 5]+=    6;
	configs[ 6]+=    6;
	configs[11]+=  162;
	configs[12]+=  486;
	configs[13]+= 1458;
	configs[20]+= 2133;
	configs[35]+=    6;
	configs[36]+=    6;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x20202;
}

void FlipFunctionBBWhite625() {
	configs[ 2]-=    6;
	configs[ 9]-=   18;
	configs[20]-=   45;
	configs[33]-=    6;
	bb.mover.u4s[0]^=0x20000;
}

void FlipFunctionBBBlack625() {
	configs[ 2]+=    6;
	configs[ 9]+=   18;
	configs[20]+=   45;
	configs[33]+=    6;
	bb.mover.u4s[0]^=0x20000;
}

void FlipFunctionBBWhite626() {
	configs[ 2]-=    6;
	configs[ 4]-=    6;
	configs[ 9]-=   18;
	configs[11]-=  162;
	configs[20]-=  207;
	configs[33]-=    6;
	configs[35]-=    6;
	bb.mover.u4s[0]^=0x20000;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBBlack626() {
	configs[ 2]+=    6;
	configs[ 4]+=    6;
	configs[ 9]+=   18;
	configs[11]+=  162;
	configs[20]+=  207;
	configs[33]+=    6;
	configs[35]+=    6;
	bb.mover.u4s[0]^=0x20000;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBWhite627() {
	configs[ 2]-=    6;
	configs[ 4]-=    6;
	configs[ 5]-=    6;
	configs[ 9]-=   18;
	configs[11]-=  162;
	configs[12]-=  486;
	configs[20]-=  693;
	configs[33]-=    6;
	configs[35]-=    6;
	configs[36]-=    6;
	bb.mover.u4s[0]^=0x20000;
	bb.mover.u4s[1]^=0x202;
}

void FlipFunctionBBBlack627() {
	configs[ 2]+=    6;
	configs[ 4]+=    6;
	configs[ 5]+=    6;
	configs[ 9]+=   18;
	configs[11]+=  162;
	configs[12]+=  486;
	configs[20]+=  693;
	configs[33]+=    6;
	configs[35]+=    6;
	configs[36]+=    6;
	bb.mover.u4s[0]^=0x20000;
	bb.mover.u4s[1]^=0x202;
}

void FlipFunctionBBWhite628() {
	configs[ 2]-=    6;
	configs[ 4]-=    6;
	configs[ 5]-=    6;
	configs[ 6]-=    6;
	configs[ 9]-=   18;
	configs[11]-=  162;
	configs[12]-=  486;
	configs[13]-= 1458;
	configs[20]-= 2151;
	configs[33]-=    6;
	configs[35]-=    6;
	configs[36]-=    6;
	configs[37]-=    6;
	bb.mover.u4s[0]^=0x20000;
	bb.mover.u4s[1]^=0x20202;
}

void FlipFunctionBBBlack628() {
	configs[ 2]+=    6;
	configs[ 4]+=    6;
	configs[ 5]+=    6;
	configs[ 6]+=    6;
	configs[ 9]+=   18;
	configs[11]+=  162;
	configs[12]+=  486;
	configs[13]+= 1458;
	configs[20]+= 2151;
	configs[33]+=    6;
	configs[35]+=    6;
	configs[36]+=    6;
	configs[37]+=    6;
	bb.mover.u4s[0]^=0x20000;
	bb.mover.u4s[1]^=0x20202;
}

void FlipFunctionBBWhite629() {
	configs[ 1]-=    6;
	configs[ 2]-=    6;
	configs[ 8]-=    6;
	configs[ 9]-=   18;
	configs[20]-=   51;
	configs[32]-=    6;
	configs[33]-=    6;
	bb.mover.u4s[0]^=0x20200;
}

void FlipFunctionBBBlack629() {
	configs[ 1]+=    6;
	configs[ 2]+=    6;
	configs[ 8]+=    6;
	configs[ 9]+=   18;
	configs[20]+=   51;
	configs[32]+=    6;
	configs[33]+=    6;
	bb.mover.u4s[0]^=0x20200;
}

void FlipFunctionBBWhite630() {
	configs[ 1]-=    6;
	configs[ 2]-=    6;
	configs[ 4]-=    6;
	configs[ 8]-=    6;
	configs[ 9]-=   18;
	configs[11]-=  162;
	configs[20]-=  213;
	configs[32]-=    6;
	configs[33]-=    6;
	configs[35]-=    6;
	bb.mover.u4s[0]^=0x20200;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBBlack630() {
	configs[ 1]+=    6;
	configs[ 2]+=    6;
	configs[ 4]+=    6;
	configs[ 8]+=    6;
	configs[ 9]+=   18;
	configs[11]+=  162;
	configs[20]+=  213;
	configs[32]+=    6;
	configs[33]+=    6;
	configs[35]+=    6;
	bb.mover.u4s[0]^=0x20200;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBWhite631() {
	configs[ 1]-=    6;
	configs[ 2]-=    6;
	configs[ 4]-=    6;
	configs[ 5]-=    6;
	configs[ 8]-=    6;
	configs[ 9]-=   18;
	configs[11]-=  162;
	configs[12]-=  486;
	configs[20]-=  699;
	configs[32]-=    6;
	configs[33]-=    6;
	configs[35]-=    6;
	configs[36]-=    6;
	bb.mover.u4s[0]^=0x20200;
	bb.mover.u4s[1]^=0x202;
}

void FlipFunctionBBBlack631() {
	configs[ 1]+=    6;
	configs[ 2]+=    6;
	configs[ 4]+=    6;
	configs[ 5]+=    6;
	configs[ 8]+=    6;
	configs[ 9]+=   18;
	configs[11]+=  162;
	configs[12]+=  486;
	configs[20]+=  699;
	configs[32]+=    6;
	configs[33]+=    6;
	configs[35]+=    6;
	configs[36]+=    6;
	bb.mover.u4s[0]^=0x20200;
	bb.mover.u4s[1]^=0x202;
}

void FlipFunctionBBWhite632() {
	configs[ 1]-=    6;
	configs[ 2]-=    6;
	configs[ 4]-=    6;
	configs[ 5]-=    6;
	configs[ 6]-=    6;
	configs[ 8]-=    6;
	configs[ 9]-=   18;
	configs[11]-=  162;
	configs[12]-=  486;
	configs[13]-= 1458;
	configs[20]-= 2157;
	configs[32]-=    6;
	configs[33]-=    6;
	configs[35]-=    6;
	configs[36]-=    6;
	configs[37]-=    6;
	bb.mover.u4s[0]^=0x20200;
	bb.mover.u4s[1]^=0x20202;
}

void FlipFunctionBBBlack632() {
	configs[ 1]+=    6;
	configs[ 2]+=    6;
	configs[ 4]+=    6;
	configs[ 5]+=    6;
	configs[ 6]+=    6;
	configs[ 8]+=    6;
	configs[ 9]+=   18;
	configs[11]+=  162;
	configs[12]+=  486;
	configs[13]+= 1458;
	configs[20]+= 2157;
	configs[32]+=    6;
	configs[33]+=    6;
	configs[35]+=    6;
	configs[36]+=    6;
	configs[37]+=    6;
	bb.mover.u4s[0]^=0x20200;
	bb.mover.u4s[1]^=0x20202;
}

void FlipFunctionBBWhite633() {
	configs[34]-=    3;
}

void FlipFunctionBBBlack633() {
	configs[34]+=    3;
}

void FlipFunctionBBWhite634() {
	configs[ 4]-=   18;
	configs[12]-=  162;
	configs[21]-=  162;
	configs[34]-=   21;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBBlack634() {
	configs[ 4]+=   18;
	configs[12]+=  162;
	configs[21]+=  162;
	configs[34]+=   21;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBWhite635() {
	configs[ 4]-=   18;
	configs[ 5]-=   54;
	configs[12]-=  162;
	configs[14]-=  162;
	configs[21]-=  162;
	configs[22]-=  486;
	configs[34]-=   75;
	bb.mover.u4s[1]^=0x804;
}

void FlipFunctionBBBlack635() {
	configs[ 4]+=   18;
	configs[ 5]+=   54;
	configs[12]+=  162;
	configs[14]+=  162;
	configs[21]+=  162;
	configs[22]+=  486;
	configs[34]+=   75;
	bb.mover.u4s[1]^=0x804;
}

void FlipFunctionBBWhite636() {
	configs[ 4]-=   18;
	configs[ 5]-=   54;
	configs[ 6]-=  162;
	configs[12]-=  162;
	configs[14]-=  162;
	configs[16]-=   54;
	configs[21]-=  162;
	configs[22]-=  486;
	configs[23]-= 1458;
	configs[34]-=  237;
	bb.mover.u4s[1]^=0x100804;
}

void FlipFunctionBBBlack636() {
	configs[ 4]+=   18;
	configs[ 5]+=   54;
	configs[ 6]+=  162;
	configs[12]+=  162;
	configs[14]+=  162;
	configs[16]+=   54;
	configs[21]+=  162;
	configs[22]+=  486;
	configs[23]+= 1458;
	configs[34]+=  237;
	bb.mover.u4s[1]^=0x100804;
}

void FlipFunctionBBWhite637() {
	configs[ 3]-=    9;
	bb.mover.u4s[0]^=0x4000000;
	bb.empty.u4s[0]^=0x4000000;
}

void FlipFunctionBBBlack637() {
	configs[ 3]+=    9;
	bb.mover.u4s[0]^=0x4000000;
	bb.empty.u4s[0]^=0x4000000;
}

void FlipFunctionBBWhite638() {
	configs[ 3]-=   63;
	configs[12]-=   54;
	configs[22]-=   54;
	configs[32]-=   54;
	bb.mover.u4s[0]^=0xC000000;
	bb.empty.u4s[0]^=0x4000000;
}

void FlipFunctionBBBlack638() {
	configs[ 3]+=   63;
	configs[12]+=   54;
	configs[22]+=   54;
	configs[32]+=   54;
	bb.mover.u4s[0]^=0xC000000;
	bb.empty.u4s[0]^=0x4000000;
}

void FlipFunctionBBWhite639() {
	configs[ 3]-=  225;
	configs[12]-=   54;
	configs[13]-=   54;
	configs[22]-=   54;
	configs[23]-=   54;
	configs[31]-=   54;
	configs[32]-=   54;
	bb.mover.u4s[0]^=0x1C000000;
	bb.empty.u4s[0]^=0x4000000;
}

void FlipFunctionBBBlack639() {
	configs[ 3]+=  225;
	configs[12]+=   54;
	configs[13]+=   54;
	configs[22]+=   54;
	configs[23]+=   54;
	configs[31]+=   54;
	configs[32]+=   54;
	bb.mover.u4s[0]^=0x1C000000;
	bb.empty.u4s[0]^=0x4000000;
}

void FlipFunctionBBWhite640() {
	configs[ 3]-=  711;
	configs[12]-=   54;
	configs[13]-=   54;
	configs[14]-=   18;
	configs[22]-=   54;
	configs[23]-=   54;
	configs[24]-=   54;
	configs[30]-=   54;
	configs[31]-=   54;
	configs[32]-=   54;
	bb.mover.u4s[0]^=0x3C000000;
	bb.empty.u4s[0]^=0x4000000;
}

void FlipFunctionBBBlack640() {
	configs[ 3]+=  711;
	configs[12]+=   54;
	configs[13]+=   54;
	configs[14]+=   18;
	configs[22]+=   54;
	configs[23]+=   54;
	configs[24]+=   54;
	configs[30]+=   54;
	configs[31]+=   54;
	configs[32]+=   54;
	bb.mover.u4s[0]^=0x3C000000;
	bb.empty.u4s[0]^=0x4000000;
}

void FlipFunctionBBWhite641() {
	configs[ 3]-= 2169;
	configs[12]-=   54;
	configs[13]-=   54;
	configs[14]-=   18;
	configs[15]-=    6;
	configs[22]-=   54;
	configs[23]-=   54;
	configs[24]-=   54;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[30]-=   54;
	configs[31]-=   54;
	configs[32]-=   54;
	bb.mover.u4s[0]^=0x7C000000;
	bb.empty.u4s[0]^=0x4000000;
}

void FlipFunctionBBBlack641() {
	configs[ 3]+= 2169;
	configs[12]+=   54;
	configs[13]+=   54;
	configs[14]+=   18;
	configs[15]+=    6;
	configs[22]+=   54;
	configs[23]+=   54;
	configs[24]+=   54;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[30]+=   54;
	configs[31]+=   54;
	configs[32]+=   54;
	bb.mover.u4s[0]^=0x7C000000;
	bb.empty.u4s[0]^=0x4000000;
}

void FlipFunctionBBWhite642() {
	configs[ 3]-=   15;
	configs[10]-=   54;
	configs[20]-=   54;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x6000000;
	bb.empty.u4s[0]^=0x4000000;
}

void FlipFunctionBBBlack642() {
	configs[ 3]+=   15;
	configs[10]+=   54;
	configs[20]+=   54;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x6000000;
	bb.empty.u4s[0]^=0x4000000;
}

void FlipFunctionBBWhite643() {
	configs[ 3]-=   69;
	configs[10]-=   54;
	configs[12]-=   54;
	configs[20]-=   54;
	configs[22]-=   54;
	configs[32]-=   54;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0xE000000;
	bb.empty.u4s[0]^=0x4000000;
}

void FlipFunctionBBBlack643() {
	configs[ 3]+=   69;
	configs[10]+=   54;
	configs[12]+=   54;
	configs[20]+=   54;
	configs[22]+=   54;
	configs[32]+=   54;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0xE000000;
	bb.empty.u4s[0]^=0x4000000;
}

void FlipFunctionBBWhite644() {
	configs[ 3]-=  231;
	configs[10]-=   54;
	configs[12]-=   54;
	configs[13]-=   54;
	configs[20]-=   54;
	configs[22]-=   54;
	configs[23]-=   54;
	configs[31]-=   54;
	configs[32]-=   54;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x1E000000;
	bb.empty.u4s[0]^=0x4000000;
}

void FlipFunctionBBBlack644() {
	configs[ 3]+=  231;
	configs[10]+=   54;
	configs[12]+=   54;
	configs[13]+=   54;
	configs[20]+=   54;
	configs[22]+=   54;
	configs[23]+=   54;
	configs[31]+=   54;
	configs[32]+=   54;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x1E000000;
	bb.empty.u4s[0]^=0x4000000;
}

void FlipFunctionBBWhite645() {
	configs[ 3]-=  717;
	configs[10]-=   54;
	configs[12]-=   54;
	configs[13]-=   54;
	configs[14]-=   18;
	configs[20]-=   54;
	configs[22]-=   54;
	configs[23]-=   54;
	configs[24]-=   54;
	configs[30]-=   54;
	configs[31]-=   54;
	configs[32]-=   54;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x3E000000;
	bb.empty.u4s[0]^=0x4000000;
}

void FlipFunctionBBBlack645() {
	configs[ 3]+=  717;
	configs[10]+=   54;
	configs[12]+=   54;
	configs[13]+=   54;
	configs[14]+=   18;
	configs[20]+=   54;
	configs[22]+=   54;
	configs[23]+=   54;
	configs[24]+=   54;
	configs[30]+=   54;
	configs[31]+=   54;
	configs[32]+=   54;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x3E000000;
	bb.empty.u4s[0]^=0x4000000;
}

void FlipFunctionBBWhite646() {
	configs[ 3]-= 2175;
	configs[10]-=   54;
	configs[12]-=   54;
	configs[13]-=   54;
	configs[14]-=   18;
	configs[15]-=    6;
	configs[20]-=   54;
	configs[22]-=   54;
	configs[23]-=   54;
	configs[24]-=   54;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[30]-=   54;
	configs[31]-=   54;
	configs[32]-=   54;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x7E000000;
	bb.empty.u4s[0]^=0x4000000;
}

void FlipFunctionBBBlack646() {
	configs[ 3]+= 2175;
	configs[10]+=   54;
	configs[12]+=   54;
	configs[13]+=   54;
	configs[14]+=   18;
	configs[15]+=    6;
	configs[20]+=   54;
	configs[22]+=   54;
	configs[23]+=   54;
	configs[24]+=   54;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[30]+=   54;
	configs[31]+=   54;
	configs[32]+=   54;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x7E000000;
	bb.empty.u4s[0]^=0x4000000;
}

void FlipFunctionBBWhite647() {
	configs[11]-=   27;
}

void FlipFunctionBBBlack647() {
	configs[11]+=   27;
}

void FlipFunctionBBWhite648() {
	configs[ 4]-=    6;
	configs[11]-=  189;
	configs[20]-=  162;
	configs[35]-=    6;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBBlack648() {
	configs[ 4]+=    6;
	configs[11]+=  189;
	configs[20]+=  162;
	configs[35]+=    6;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBWhite649() {
	configs[ 2]-=   54;
	configs[11]-=   45;
	configs[22]-=   18;
	configs[31]-=   18;
	bb.mover.u4s[0]^=0x80000;
}

void FlipFunctionBBBlack649() {
	configs[ 2]+=   54;
	configs[11]+=   45;
	configs[22]+=   18;
	configs[31]+=   18;
	bb.mover.u4s[0]^=0x80000;
}

void FlipFunctionBBWhite650() {
	configs[ 2]-=   54;
	configs[ 4]-=    6;
	configs[11]-=  207;
	configs[20]-=  162;
	configs[22]-=   18;
	configs[31]-=   18;
	configs[35]-=    6;
	bb.mover.u4s[0]^=0x80000;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBBlack650() {
	configs[ 2]+=   54;
	configs[ 4]+=    6;
	configs[11]+=  207;
	configs[20]+=  162;
	configs[22]+=   18;
	configs[31]+=   18;
	configs[35]+=    6;
	bb.mover.u4s[0]^=0x80000;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBWhite651() {
	configs[ 1]-=  162;
	configs[ 2]-=   54;
	configs[11]-=   51;
	configs[22]-=   18;
	configs[23]-=    6;
	configs[29]-=    6;
	configs[31]-=   18;
	bb.mover.u4s[0]^=0x81000;
}

void FlipFunctionBBBlack651() {
	configs[ 1]+=  162;
	configs[ 2]+=   54;
	configs[11]+=   51;
	configs[22]+=   18;
	configs[23]+=    6;
	configs[29]+=    6;
	configs[31]+=   18;
	bb.mover.u4s[0]^=0x81000;
}

void FlipFunctionBBWhite652() {
	configs[ 1]-=  162;
	configs[ 2]-=   54;
	configs[ 4]-=    6;
	configs[11]-=  213;
	configs[20]-=  162;
	configs[22]-=   18;
	configs[23]-=    6;
	configs[29]-=    6;
	configs[31]-=   18;
	configs[35]-=    6;
	bb.mover.u4s[0]^=0x81000;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBBlack652() {
	configs[ 1]+=  162;
	configs[ 2]+=   54;
	configs[ 4]+=    6;
	configs[11]+=  213;
	configs[20]+=  162;
	configs[22]+=   18;
	configs[23]+=    6;
	configs[29]+=    6;
	configs[31]+=   18;
	configs[35]+=    6;
	bb.mover.u4s[0]^=0x81000;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBWhite653() {
	configs[21]-=   27;
}

void FlipFunctionBBBlack653() {
	configs[21]+=   27;
}

void FlipFunctionBBWhite654() {
	configs[ 4]-=   18;
	configs[12]-=  162;
	configs[21]-=  189;
	configs[34]-=   18;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBBlack654() {
	configs[ 4]+=   18;
	configs[12]+=  162;
	configs[21]+=  189;
	configs[34]+=   18;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBWhite655() {
	configs[ 4]-=   18;
	configs[ 5]-=   18;
	configs[12]-=  162;
	configs[13]-=  486;
	configs[21]-=  675;
	configs[34]-=   18;
	configs[35]-=   18;
	bb.mover.u4s[1]^=0x404;
}

void FlipFunctionBBBlack655() {
	configs[ 4]+=   18;
	configs[ 5]+=   18;
	configs[12]+=  162;
	configs[13]+=  486;
	configs[21]+=  675;
	configs[34]+=   18;
	configs[35]+=   18;
	bb.mover.u4s[1]^=0x404;
}

void FlipFunctionBBWhite656() {
	configs[ 4]-=   18;
	configs[ 5]-=   18;
	configs[ 6]-=   18;
	configs[12]-=  162;
	configs[13]-=  486;
	configs[14]-=  486;
	configs[21]-= 2133;
	configs[34]-=   18;
	configs[35]-=   18;
	configs[36]-=   18;
	bb.mover.u4s[1]^=0x40404;
}

void FlipFunctionBBBlack656() {
	configs[ 4]+=   18;
	configs[ 5]+=   18;
	configs[ 6]+=   18;
	configs[12]+=  162;
	configs[13]+=  486;
	configs[14]+=  486;
	configs[21]+= 2133;
	configs[34]+=   18;
	configs[35]+=   18;
	configs[36]+=   18;
	bb.mover.u4s[1]^=0x40404;
}

void FlipFunctionBBWhite657() {
	configs[ 2]-=   18;
	configs[10]-=   18;
	configs[21]-=   45;
	configs[32]-=   18;
	bb.mover.u4s[0]^=0x40000;
}

void FlipFunctionBBBlack657() {
	configs[ 2]+=   18;
	configs[10]+=   18;
	configs[21]+=   45;
	configs[32]+=   18;
	bb.mover.u4s[0]^=0x40000;
}

void FlipFunctionBBWhite658() {
	configs[ 2]-=   18;
	configs[ 4]-=   18;
	configs[10]-=   18;
	configs[12]-=  162;
	configs[21]-=  207;
	configs[32]-=   18;
	configs[34]-=   18;
	bb.mover.u4s[0]^=0x40000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBBlack658() {
	configs[ 2]+=   18;
	configs[ 4]+=   18;
	configs[10]+=   18;
	configs[12]+=  162;
	configs[21]+=  207;
	configs[32]+=   18;
	configs[34]+=   18;
	bb.mover.u4s[0]^=0x40000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBWhite659() {
	configs[ 2]-=   18;
	configs[ 4]-=   18;
	configs[ 5]-=   18;
	configs[10]-=   18;
	configs[12]-=  162;
	configs[13]-=  486;
	configs[21]-=  693;
	configs[32]-=   18;
	configs[34]-=   18;
	configs[35]-=   18;
	bb.mover.u4s[0]^=0x40000;
	bb.mover.u4s[1]^=0x404;
}

void FlipFunctionBBBlack659() {
	configs[ 2]+=   18;
	configs[ 4]+=   18;
	configs[ 5]+=   18;
	configs[10]+=   18;
	configs[12]+=  162;
	configs[13]+=  486;
	configs[21]+=  693;
	configs[32]+=   18;
	configs[34]+=   18;
	configs[35]+=   18;
	bb.mover.u4s[0]^=0x40000;
	bb.mover.u4s[1]^=0x404;
}

void FlipFunctionBBWhite660() {
	configs[ 2]-=   18;
	configs[ 4]-=   18;
	configs[ 5]-=   18;
	configs[ 6]-=   18;
	configs[10]-=   18;
	configs[12]-=  162;
	configs[13]-=  486;
	configs[14]-=  486;
	configs[21]-= 2151;
	configs[32]-=   18;
	configs[34]-=   18;
	configs[35]-=   18;
	configs[36]-=   18;
	bb.mover.u4s[0]^=0x40000;
	bb.mover.u4s[1]^=0x40404;
}

void FlipFunctionBBBlack660() {
	configs[ 2]+=   18;
	configs[ 4]+=   18;
	configs[ 5]+=   18;
	configs[ 6]+=   18;
	configs[10]+=   18;
	configs[12]+=  162;
	configs[13]+=  486;
	configs[14]+=  486;
	configs[21]+= 2151;
	configs[32]+=   18;
	configs[34]+=   18;
	configs[35]+=   18;
	configs[36]+=   18;
	bb.mover.u4s[0]^=0x40000;
	bb.mover.u4s[1]^=0x40404;
}

void FlipFunctionBBWhite661() {
	configs[ 1]-=   18;
	configs[ 2]-=   18;
	configs[ 9]-=    6;
	configs[10]-=   18;
	configs[21]-=   51;
	configs[31]-=    6;
	configs[32]-=   18;
	bb.mover.u4s[0]^=0x40400;
}

void FlipFunctionBBBlack661() {
	configs[ 1]+=   18;
	configs[ 2]+=   18;
	configs[ 9]+=    6;
	configs[10]+=   18;
	configs[21]+=   51;
	configs[31]+=    6;
	configs[32]+=   18;
	bb.mover.u4s[0]^=0x40400;
}

void FlipFunctionBBWhite662() {
	configs[ 1]-=   18;
	configs[ 2]-=   18;
	configs[ 4]-=   18;
	configs[ 9]-=    6;
	configs[10]-=   18;
	configs[12]-=  162;
	configs[21]-=  213;
	configs[31]-=    6;
	configs[32]-=   18;
	configs[34]-=   18;
	bb.mover.u4s[0]^=0x40400;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBBlack662() {
	configs[ 1]+=   18;
	configs[ 2]+=   18;
	configs[ 4]+=   18;
	configs[ 9]+=    6;
	configs[10]+=   18;
	configs[12]+=  162;
	configs[21]+=  213;
	configs[31]+=    6;
	configs[32]+=   18;
	configs[34]+=   18;
	bb.mover.u4s[0]^=0x40400;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBWhite663() {
	configs[ 1]-=   18;
	configs[ 2]-=   18;
	configs[ 4]-=   18;
	configs[ 5]-=   18;
	configs[ 9]-=    6;
	configs[10]-=   18;
	configs[12]-=  162;
	configs[13]-=  486;
	configs[21]-=  699;
	configs[31]-=    6;
	configs[32]-=   18;
	configs[34]-=   18;
	configs[35]-=   18;
	bb.mover.u4s[0]^=0x40400;
	bb.mover.u4s[1]^=0x404;
}

void FlipFunctionBBBlack663() {
	configs[ 1]+=   18;
	configs[ 2]+=   18;
	configs[ 4]+=   18;
	configs[ 5]+=   18;
	configs[ 9]+=    6;
	configs[10]+=   18;
	configs[12]+=  162;
	configs[13]+=  486;
	configs[21]+=  699;
	configs[31]+=    6;
	configs[32]+=   18;
	configs[34]+=   18;
	configs[35]+=   18;
	bb.mover.u4s[0]^=0x40400;
	bb.mover.u4s[1]^=0x404;
}

void FlipFunctionBBWhite664() {
	configs[ 1]-=   18;
	configs[ 2]-=   18;
	configs[ 4]-=   18;
	configs[ 5]-=   18;
	configs[ 6]-=   18;
	configs[ 9]-=    6;
	configs[10]-=   18;
	configs[12]-=  162;
	configs[13]-=  486;
	configs[14]-=  486;
	configs[21]-= 2157;
	configs[31]-=    6;
	configs[32]-=   18;
	configs[34]-=   18;
	configs[35]-=   18;
	configs[36]-=   18;
	bb.mover.u4s[0]^=0x40400;
	bb.mover.u4s[1]^=0x40404;
}

void FlipFunctionBBBlack664() {
	configs[ 1]+=   18;
	configs[ 2]+=   18;
	configs[ 4]+=   18;
	configs[ 5]+=   18;
	configs[ 6]+=   18;
	configs[ 9]+=    6;
	configs[10]+=   18;
	configs[12]+=  162;
	configs[13]+=  486;
	configs[14]+=  486;
	configs[21]+= 2157;
	configs[31]+=    6;
	configs[32]+=   18;
	configs[34]+=   18;
	configs[35]+=   18;
	configs[36]+=   18;
	bb.mover.u4s[0]^=0x40400;
	bb.mover.u4s[1]^=0x40404;
}

void FlipFunctionBBWhite665() {
	configs[33]-=    9;
}

void FlipFunctionBBBlack665() {
	configs[33]+=    9;
}

void FlipFunctionBBWhite666() {
	configs[ 4]-=   54;
	configs[13]-=  162;
	configs[22]-=  162;
	configs[33]-=   63;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBBlack666() {
	configs[ 4]+=   54;
	configs[13]+=  162;
	configs[22]+=  162;
	configs[33]+=   63;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBWhite667() {
	configs[ 4]-=   54;
	configs[ 5]-=  162;
	configs[13]-=  162;
	configs[15]-=   54;
	configs[22]-=  162;
	configs[23]-=  486;
	configs[33]-=  225;
	bb.mover.u4s[1]^=0x1008;
}

void FlipFunctionBBBlack667() {
	configs[ 4]+=   54;
	configs[ 5]+=  162;
	configs[13]+=  162;
	configs[15]+=   54;
	configs[22]+=  162;
	configs[23]+=  486;
	configs[33]+=  225;
	bb.mover.u4s[1]^=0x1008;
}

void FlipFunctionBBWhite668() {
	configs[ 4]-=   54;
	configs[ 5]-=  162;
	configs[ 6]-=  486;
	configs[13]-=  162;
	configs[15]-=   54;
	configs[17]-=   18;
	configs[22]-=  162;
	configs[23]-=  486;
	configs[24]-= 1458;
	configs[33]-=  711;
	bb.mover.u4s[1]^=0x201008;
}

void FlipFunctionBBBlack668() {
	configs[ 4]+=   54;
	configs[ 5]+=  162;
	configs[ 6]+=  486;
	configs[13]+=  162;
	configs[15]+=   54;
	configs[17]+=   18;
	configs[22]+=  162;
	configs[23]+=  486;
	configs[24]+= 1458;
	configs[33]+=  711;
	bb.mover.u4s[1]^=0x201008;
}

void FlipFunctionBBWhite669() {
	configs[ 2]-=    6;
	configs[ 9]-=   18;
	configs[20]-=   18;
	configs[33]-=   15;
	bb.mover.u4s[0]^=0x20000;
}

void FlipFunctionBBBlack669() {
	configs[ 2]+=    6;
	configs[ 9]+=   18;
	configs[20]+=   18;
	configs[33]+=   15;
	bb.mover.u4s[0]^=0x20000;
}

void FlipFunctionBBWhite670() {
	configs[ 2]-=    6;
	configs[ 4]-=   54;
	configs[ 9]-=   18;
	configs[13]-=  162;
	configs[20]-=   18;
	configs[22]-=  162;
	configs[33]-=   69;
	bb.mover.u4s[0]^=0x20000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBBlack670() {
	configs[ 2]+=    6;
	configs[ 4]+=   54;
	configs[ 9]+=   18;
	configs[13]+=  162;
	configs[20]+=   18;
	configs[22]+=  162;
	configs[33]+=   69;
	bb.mover.u4s[0]^=0x20000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBWhite671() {
	configs[ 2]-=    6;
	configs[ 4]-=   54;
	configs[ 5]-=  162;
	configs[ 9]-=   18;
	configs[13]-=  162;
	configs[15]-=   54;
	configs[20]-=   18;
	configs[22]-=  162;
	configs[23]-=  486;
	configs[33]-=  231;
	bb.mover.u4s[0]^=0x20000;
	bb.mover.u4s[1]^=0x1008;
}

void FlipFunctionBBBlack671() {
	configs[ 2]+=    6;
	configs[ 4]+=   54;
	configs[ 5]+=  162;
	configs[ 9]+=   18;
	configs[13]+=  162;
	configs[15]+=   54;
	configs[20]+=   18;
	configs[22]+=  162;
	configs[23]+=  486;
	configs[33]+=  231;
	bb.mover.u4s[0]^=0x20000;
	bb.mover.u4s[1]^=0x1008;
}

void FlipFunctionBBWhite672() {
	configs[ 2]-=    6;
	configs[ 4]-=   54;
	configs[ 5]-=  162;
	configs[ 6]-=  486;
	configs[ 9]-=   18;
	configs[13]-=  162;
	configs[15]-=   54;
	configs[17]-=   18;
	configs[20]-=   18;
	configs[22]-=  162;
	configs[23]-=  486;
	configs[24]-= 1458;
	configs[33]-=  717;
	bb.mover.u4s[0]^=0x20000;
	bb.mover.u4s[1]^=0x201008;
}

void FlipFunctionBBBlack672() {
	configs[ 2]+=    6;
	configs[ 4]+=   54;
	configs[ 5]+=  162;
	configs[ 6]+=  486;
	configs[ 9]+=   18;
	configs[13]+=  162;
	configs[15]+=   54;
	configs[17]+=   18;
	configs[20]+=   18;
	configs[22]+=  162;
	configs[23]+=  486;
	configs[24]+= 1458;
	configs[33]+=  717;
	bb.mover.u4s[0]^=0x20000;
	bb.mover.u4s[1]^=0x201008;
}

void FlipFunctionBBWhite673() {
	configs[ 3]-=   27;
	bb.mover.u4s[0]^=0x8000000;
	bb.empty.u4s[0]^=0x8000000;
}

void FlipFunctionBBBlack673() {
	configs[ 3]+=   27;
	bb.mover.u4s[0]^=0x8000000;
	bb.empty.u4s[0]^=0x8000000;
}

void FlipFunctionBBWhite674() {
	configs[ 3]-=  189;
	configs[13]-=   54;
	configs[23]-=   54;
	configs[31]-=   54;
	bb.mover.u4s[0]^=0x18000000;
	bb.empty.u4s[0]^=0x8000000;
}

void FlipFunctionBBBlack674() {
	configs[ 3]+=  189;
	configs[13]+=   54;
	configs[23]+=   54;
	configs[31]+=   54;
	bb.mover.u4s[0]^=0x18000000;
	bb.empty.u4s[0]^=0x8000000;
}

void FlipFunctionBBWhite675() {
	configs[ 3]-=  675;
	configs[13]-=   54;
	configs[14]-=   18;
	configs[23]-=   54;
	configs[24]-=   54;
	configs[30]-=   54;
	configs[31]-=   54;
	bb.mover.u4s[0]^=0x38000000;
	bb.empty.u4s[0]^=0x8000000;
}

void FlipFunctionBBBlack675() {
	configs[ 3]+=  675;
	configs[13]+=   54;
	configs[14]+=   18;
	configs[23]+=   54;
	configs[24]+=   54;
	configs[30]+=   54;
	configs[31]+=   54;
	bb.mover.u4s[0]^=0x38000000;
	bb.empty.u4s[0]^=0x8000000;
}

void FlipFunctionBBWhite676() {
	configs[ 3]-= 2133;
	configs[13]-=   54;
	configs[14]-=   18;
	configs[15]-=    6;
	configs[23]-=   54;
	configs[24]-=   54;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[30]-=   54;
	configs[31]-=   54;
	bb.mover.u4s[0]^=0x78000000;
	bb.empty.u4s[0]^=0x8000000;
}

void FlipFunctionBBBlack676() {
	configs[ 3]+= 2133;
	configs[13]+=   54;
	configs[14]+=   18;
	configs[15]+=    6;
	configs[23]+=   54;
	configs[24]+=   54;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[30]+=   54;
	configs[31]+=   54;
	bb.mover.u4s[0]^=0x78000000;
	bb.empty.u4s[0]^=0x8000000;
}

void FlipFunctionBBWhite677() {
	configs[ 3]-=   45;
	configs[11]-=   54;
	configs[21]-=   54;
	configs[33]-=   18;
	bb.mover.u4s[0]^=0xC000000;
	bb.empty.u4s[0]^=0x8000000;
}

void FlipFunctionBBBlack677() {
	configs[ 3]+=   45;
	configs[11]+=   54;
	configs[21]+=   54;
	configs[33]+=   18;
	bb.mover.u4s[0]^=0xC000000;
	bb.empty.u4s[0]^=0x8000000;
}

void FlipFunctionBBWhite678() {
	configs[ 3]-=  207;
	configs[11]-=   54;
	configs[13]-=   54;
	configs[21]-=   54;
	configs[23]-=   54;
	configs[31]-=   54;
	configs[33]-=   18;
	bb.mover.u4s[0]^=0x1C000000;
	bb.empty.u4s[0]^=0x8000000;
}

void FlipFunctionBBBlack678() {
	configs[ 3]+=  207;
	configs[11]+=   54;
	configs[13]+=   54;
	configs[21]+=   54;
	configs[23]+=   54;
	configs[31]+=   54;
	configs[33]+=   18;
	bb.mover.u4s[0]^=0x1C000000;
	bb.empty.u4s[0]^=0x8000000;
}

void FlipFunctionBBWhite679() {
	configs[ 3]-=  693;
	configs[11]-=   54;
	configs[13]-=   54;
	configs[14]-=   18;
	configs[21]-=   54;
	configs[23]-=   54;
	configs[24]-=   54;
	configs[30]-=   54;
	configs[31]-=   54;
	configs[33]-=   18;
	bb.mover.u4s[0]^=0x3C000000;
	bb.empty.u4s[0]^=0x8000000;
}

void FlipFunctionBBBlack679() {
	configs[ 3]+=  693;
	configs[11]+=   54;
	configs[13]+=   54;
	configs[14]+=   18;
	configs[21]+=   54;
	configs[23]+=   54;
	configs[24]+=   54;
	configs[30]+=   54;
	configs[31]+=   54;
	configs[33]+=   18;
	bb.mover.u4s[0]^=0x3C000000;
	bb.empty.u4s[0]^=0x8000000;
}

void FlipFunctionBBWhite680() {
	configs[ 3]-= 2151;
	configs[11]-=   54;
	configs[13]-=   54;
	configs[14]-=   18;
	configs[15]-=    6;
	configs[21]-=   54;
	configs[23]-=   54;
	configs[24]-=   54;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[30]-=   54;
	configs[31]-=   54;
	configs[33]-=   18;
	bb.mover.u4s[0]^=0x7C000000;
	bb.empty.u4s[0]^=0x8000000;
}

void FlipFunctionBBBlack680() {
	configs[ 3]+= 2151;
	configs[11]+=   54;
	configs[13]+=   54;
	configs[14]+=   18;
	configs[15]+=    6;
	configs[21]+=   54;
	configs[23]+=   54;
	configs[24]+=   54;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[30]+=   54;
	configs[31]+=   54;
	configs[33]+=   18;
	bb.mover.u4s[0]^=0x7C000000;
	bb.empty.u4s[0]^=0x8000000;
}

void FlipFunctionBBWhite681() {
	configs[ 3]-=   51;
	configs[10]-=   54;
	configs[11]-=   54;
	configs[20]-=   54;
	configs[21]-=   54;
	configs[33]-=   18;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0xE000000;
	bb.empty.u4s[0]^=0x8000000;
}

void FlipFunctionBBBlack681() {
	configs[ 3]+=   51;
	configs[10]+=   54;
	configs[11]+=   54;
	configs[20]+=   54;
	configs[21]+=   54;
	configs[33]+=   18;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0xE000000;
	bb.empty.u4s[0]^=0x8000000;
}

void FlipFunctionBBWhite682() {
	configs[ 3]-=  213;
	configs[10]-=   54;
	configs[11]-=   54;
	configs[13]-=   54;
	configs[20]-=   54;
	configs[21]-=   54;
	configs[23]-=   54;
	configs[31]-=   54;
	configs[33]-=   18;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x1E000000;
	bb.empty.u4s[0]^=0x8000000;
}

void FlipFunctionBBBlack682() {
	configs[ 3]+=  213;
	configs[10]+=   54;
	configs[11]+=   54;
	configs[13]+=   54;
	configs[20]+=   54;
	configs[21]+=   54;
	configs[23]+=   54;
	configs[31]+=   54;
	configs[33]+=   18;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x1E000000;
	bb.empty.u4s[0]^=0x8000000;
}

void FlipFunctionBBWhite683() {
	configs[ 3]-=  699;
	configs[10]-=   54;
	configs[11]-=   54;
	configs[13]-=   54;
	configs[14]-=   18;
	configs[20]-=   54;
	configs[21]-=   54;
	configs[23]-=   54;
	configs[24]-=   54;
	configs[30]-=   54;
	configs[31]-=   54;
	configs[33]-=   18;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x3E000000;
	bb.empty.u4s[0]^=0x8000000;
}

void FlipFunctionBBBlack683() {
	configs[ 3]+=  699;
	configs[10]+=   54;
	configs[11]+=   54;
	configs[13]+=   54;
	configs[14]+=   18;
	configs[20]+=   54;
	configs[21]+=   54;
	configs[23]+=   54;
	configs[24]+=   54;
	configs[30]+=   54;
	configs[31]+=   54;
	configs[33]+=   18;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x3E000000;
	bb.empty.u4s[0]^=0x8000000;
}

void FlipFunctionBBWhite684() {
	configs[ 3]-= 2157;
	configs[10]-=   54;
	configs[11]-=   54;
	configs[13]-=   54;
	configs[14]-=   18;
	configs[15]-=    6;
	configs[20]-=   54;
	configs[21]-=   54;
	configs[23]-=   54;
	configs[24]-=   54;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[30]-=   54;
	configs[31]-=   54;
	configs[33]-=   18;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x7E000000;
	bb.empty.u4s[0]^=0x8000000;
}

void FlipFunctionBBBlack684() {
	configs[ 3]+= 2157;
	configs[10]+=   54;
	configs[11]+=   54;
	configs[13]+=   54;
	configs[14]+=   18;
	configs[15]+=    6;
	configs[20]+=   54;
	configs[21]+=   54;
	configs[23]+=   54;
	configs[24]+=   54;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[30]+=   54;
	configs[31]+=   54;
	configs[33]+=   18;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x7E000000;
	bb.empty.u4s[0]^=0x8000000;
}

void FlipFunctionBBWhite685() {
	configs[12]-=   27;
}

void FlipFunctionBBBlack685() {
	configs[12]+=   27;
}

void FlipFunctionBBWhite686() {
	configs[ 4]-=   18;
	configs[12]-=  189;
	configs[21]-=  162;
	configs[34]-=   18;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBBlack686() {
	configs[ 4]+=   18;
	configs[12]+=  189;
	configs[21]+=  162;
	configs[34]+=   18;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBWhite687() {
	configs[ 4]-=   18;
	configs[ 5]-=    6;
	configs[12]-=  675;
	configs[20]-=  486;
	configs[21]-=  162;
	configs[34]-=   18;
	configs[36]-=    6;
	bb.mover.u4s[1]^=0x204;
}

void FlipFunctionBBBlack687() {
	configs[ 4]+=   18;
	configs[ 5]+=    6;
	configs[12]+=  675;
	configs[20]+=  486;
	configs[21]+=  162;
	configs[34]+=   18;
	configs[36]+=    6;
	bb.mover.u4s[1]^=0x204;
}

void FlipFunctionBBWhite688() {
	configs[ 2]-=  162;
	configs[12]-=   45;
	configs[23]-=   18;
	configs[30]-=   18;
	bb.mover.u4s[0]^=0x100000;
}

void FlipFunctionBBBlack688() {
	configs[ 2]+=  162;
	configs[12]+=   45;
	configs[23]+=   18;
	configs[30]+=   18;
	bb.mover.u4s[0]^=0x100000;
}

void FlipFunctionBBWhite689() {
	configs[ 2]-=  162;
	configs[ 4]-=   18;
	configs[12]-=  207;
	configs[21]-=  162;
	configs[23]-=   18;
	configs[30]-=   18;
	configs[34]-=   18;
	bb.mover.u4s[0]^=0x100000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBBlack689() {
	configs[ 2]+=  162;
	configs[ 4]+=   18;
	configs[12]+=  207;
	configs[21]+=  162;
	configs[23]+=   18;
	configs[30]+=   18;
	configs[34]+=   18;
	bb.mover.u4s[0]^=0x100000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBWhite690() {
	configs[ 2]-=  162;
	configs[ 4]-=   18;
	configs[ 5]-=    6;
	configs[12]-=  693;
	configs[20]-=  486;
	configs[21]-=  162;
	configs[23]-=   18;
	configs[30]-=   18;
	configs[34]-=   18;
	configs[36]-=    6;
	bb.mover.u4s[0]^=0x100000;
	bb.mover.u4s[1]^=0x204;
}

void FlipFunctionBBBlack690() {
	configs[ 2]+=  162;
	configs[ 4]+=   18;
	configs[ 5]+=    6;
	configs[12]+=  693;
	configs[20]+=  486;
	configs[21]+=  162;
	configs[23]+=   18;
	configs[30]+=   18;
	configs[34]+=   18;
	configs[36]+=    6;
	bb.mover.u4s[0]^=0x100000;
	bb.mover.u4s[1]^=0x204;
}

void FlipFunctionBBWhite691() {
	configs[ 1]-=  486;
	configs[ 2]-=  162;
	configs[12]-=   51;
	configs[23]-=   18;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[30]-=   18;
	bb.mover.u4s[0]^=0x102000;
}

void FlipFunctionBBBlack691() {
	configs[ 1]+=  486;
	configs[ 2]+=  162;
	configs[12]+=   51;
	configs[23]+=   18;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[30]+=   18;
	bb.mover.u4s[0]^=0x102000;
}

void FlipFunctionBBWhite692() {
	configs[ 1]-=  486;
	configs[ 2]-=  162;
	configs[ 4]-=   18;
	configs[12]-=  213;
	configs[21]-=  162;
	configs[23]-=   18;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[30]-=   18;
	configs[34]-=   18;
	bb.mover.u4s[0]^=0x102000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBBlack692() {
	configs[ 1]+=  486;
	configs[ 2]+=  162;
	configs[ 4]+=   18;
	configs[12]+=  213;
	configs[21]+=  162;
	configs[23]+=   18;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[30]+=   18;
	configs[34]+=   18;
	bb.mover.u4s[0]^=0x102000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBWhite693() {
	configs[ 1]-=  486;
	configs[ 2]-=  162;
	configs[ 4]-=   18;
	configs[ 5]-=    6;
	configs[12]-=  699;
	configs[20]-=  486;
	configs[21]-=  162;
	configs[23]-=   18;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[30]-=   18;
	configs[34]-=   18;
	configs[36]-=    6;
	bb.mover.u4s[0]^=0x102000;
	bb.mover.u4s[1]^=0x204;
}

void FlipFunctionBBBlack693() {
	configs[ 1]+=  486;
	configs[ 2]+=  162;
	configs[ 4]+=   18;
	configs[ 5]+=    6;
	configs[12]+=  699;
	configs[20]+=  486;
	configs[21]+=  162;
	configs[23]+=   18;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[30]+=   18;
	configs[34]+=   18;
	configs[36]+=    6;
	bb.mover.u4s[0]^=0x102000;
	bb.mover.u4s[1]^=0x204;
}

void FlipFunctionBBWhite694() {
	configs[22]-=   27;
}

void FlipFunctionBBBlack694() {
	configs[22]+=   27;
}

void FlipFunctionBBWhite695() {
	configs[ 4]-=   54;
	configs[13]-=  162;
	configs[22]-=  189;
	configs[33]-=   54;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBBlack695() {
	configs[ 4]+=   54;
	configs[13]+=  162;
	configs[22]+=  189;
	configs[33]+=   54;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBWhite696() {
	configs[ 4]-=   54;
	configs[ 5]-=   54;
	configs[13]-=  162;
	configs[14]-=  162;
	configs[22]-=  675;
	configs[33]-=   54;
	configs[34]-=   54;
	bb.mover.u4s[1]^=0x808;
}

void FlipFunctionBBBlack696() {
	configs[ 4]+=   54;
	configs[ 5]+=   54;
	configs[13]+=  162;
	configs[14]+=  162;
	configs[22]+=  675;
	configs[33]+=   54;
	configs[34]+=   54;
	bb.mover.u4s[1]^=0x808;
}

void FlipFunctionBBWhite697() {
	configs[ 4]-=   54;
	configs[ 5]-=   54;
	configs[ 6]-=   54;
	configs[13]-=  162;
	configs[14]-=  162;
	configs[15]-=  162;
	configs[22]-= 2133;
	configs[33]-=   54;
	configs[34]-=   54;
	configs[35]-=   54;
	bb.mover.u4s[1]^=0x80808;
}

void FlipFunctionBBBlack697() {
	configs[ 4]+=   54;
	configs[ 5]+=   54;
	configs[ 6]+=   54;
	configs[13]+=  162;
	configs[14]+=  162;
	configs[15]+=  162;
	configs[22]+= 2133;
	configs[33]+=   54;
	configs[34]+=   54;
	configs[35]+=   54;
	bb.mover.u4s[1]^=0x80808;
}

void FlipFunctionBBWhite698() {
	configs[ 2]-=   54;
	configs[11]-=   18;
	configs[22]-=   45;
	configs[31]-=   18;
	bb.mover.u4s[0]^=0x80000;
}

void FlipFunctionBBBlack698() {
	configs[ 2]+=   54;
	configs[11]+=   18;
	configs[22]+=   45;
	configs[31]+=   18;
	bb.mover.u4s[0]^=0x80000;
}

void FlipFunctionBBWhite699() {
	configs[ 2]-=   54;
	configs[ 4]-=   54;
	configs[11]-=   18;
	configs[13]-=  162;
	configs[22]-=  207;
	configs[31]-=   18;
	configs[33]-=   54;
	bb.mover.u4s[0]^=0x80000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBBlack699() {
	configs[ 2]+=   54;
	configs[ 4]+=   54;
	configs[11]+=   18;
	configs[13]+=  162;
	configs[22]+=  207;
	configs[31]+=   18;
	configs[33]+=   54;
	bb.mover.u4s[0]^=0x80000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBWhite700() {
	configs[ 2]-=   54;
	configs[ 4]-=   54;
	configs[ 5]-=   54;
	configs[11]-=   18;
	configs[13]-=  162;
	configs[14]-=  162;
	configs[22]-=  693;
	configs[31]-=   18;
	configs[33]-=   54;
	configs[34]-=   54;
	bb.mover.u4s[0]^=0x80000;
	bb.mover.u4s[1]^=0x808;
}

void FlipFunctionBBBlack700() {
	configs[ 2]+=   54;
	configs[ 4]+=   54;
	configs[ 5]+=   54;
	configs[11]+=   18;
	configs[13]+=  162;
	configs[14]+=  162;
	configs[22]+=  693;
	configs[31]+=   18;
	configs[33]+=   54;
	configs[34]+=   54;
	bb.mover.u4s[0]^=0x80000;
	bb.mover.u4s[1]^=0x808;
}

void FlipFunctionBBWhite701() {
	configs[ 2]-=   54;
	configs[ 4]-=   54;
	configs[ 5]-=   54;
	configs[ 6]-=   54;
	configs[11]-=   18;
	configs[13]-=  162;
	configs[14]-=  162;
	configs[15]-=  162;
	configs[22]-= 2151;
	configs[31]-=   18;
	configs[33]-=   54;
	configs[34]-=   54;
	configs[35]-=   54;
	bb.mover.u4s[0]^=0x80000;
	bb.mover.u4s[1]^=0x80808;
}

void FlipFunctionBBBlack701() {
	configs[ 2]+=   54;
	configs[ 4]+=   54;
	configs[ 5]+=   54;
	configs[ 6]+=   54;
	configs[11]+=   18;
	configs[13]+=  162;
	configs[14]+=  162;
	configs[15]+=  162;
	configs[22]+= 2151;
	configs[31]+=   18;
	configs[33]+=   54;
	configs[34]+=   54;
	configs[35]+=   54;
	bb.mover.u4s[0]^=0x80000;
	bb.mover.u4s[1]^=0x80808;
}

void FlipFunctionBBWhite702() {
	configs[ 1]-=   54;
	configs[ 2]-=   54;
	configs[10]-=    6;
	configs[11]-=   18;
	configs[22]-=   51;
	configs[30]-=    6;
	configs[31]-=   18;
	bb.mover.u4s[0]^=0x80800;
}

void FlipFunctionBBBlack702() {
	configs[ 1]+=   54;
	configs[ 2]+=   54;
	configs[10]+=    6;
	configs[11]+=   18;
	configs[22]+=   51;
	configs[30]+=    6;
	configs[31]+=   18;
	bb.mover.u4s[0]^=0x80800;
}

void FlipFunctionBBWhite703() {
	configs[ 1]-=   54;
	configs[ 2]-=   54;
	configs[ 4]-=   54;
	configs[10]-=    6;
	configs[11]-=   18;
	configs[13]-=  162;
	configs[22]-=  213;
	configs[30]-=    6;
	configs[31]-=   18;
	configs[33]-=   54;
	bb.mover.u4s[0]^=0x80800;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBBlack703() {
	configs[ 1]+=   54;
	configs[ 2]+=   54;
	configs[ 4]+=   54;
	configs[10]+=    6;
	configs[11]+=   18;
	configs[13]+=  162;
	configs[22]+=  213;
	configs[30]+=    6;
	configs[31]+=   18;
	configs[33]+=   54;
	bb.mover.u4s[0]^=0x80800;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBWhite704() {
	configs[ 1]-=   54;
	configs[ 2]-=   54;
	configs[ 4]-=   54;
	configs[ 5]-=   54;
	configs[10]-=    6;
	configs[11]-=   18;
	configs[13]-=  162;
	configs[14]-=  162;
	configs[22]-=  699;
	configs[30]-=    6;
	configs[31]-=   18;
	configs[33]-=   54;
	configs[34]-=   54;
	bb.mover.u4s[0]^=0x80800;
	bb.mover.u4s[1]^=0x808;
}

void FlipFunctionBBBlack704() {
	configs[ 1]+=   54;
	configs[ 2]+=   54;
	configs[ 4]+=   54;
	configs[ 5]+=   54;
	configs[10]+=    6;
	configs[11]+=   18;
	configs[13]+=  162;
	configs[14]+=  162;
	configs[22]+=  699;
	configs[30]+=    6;
	configs[31]+=   18;
	configs[33]+=   54;
	configs[34]+=   54;
	bb.mover.u4s[0]^=0x80800;
	bb.mover.u4s[1]^=0x808;
}

void FlipFunctionBBWhite705() {
	configs[ 1]-=   54;
	configs[ 2]-=   54;
	configs[ 4]-=   54;
	configs[ 5]-=   54;
	configs[ 6]-=   54;
	configs[10]-=    6;
	configs[11]-=   18;
	configs[13]-=  162;
	configs[14]-=  162;
	configs[15]-=  162;
	configs[22]-= 2157;
	configs[30]-=    6;
	configs[31]-=   18;
	configs[33]-=   54;
	configs[34]-=   54;
	configs[35]-=   54;
	bb.mover.u4s[0]^=0x80800;
	bb.mover.u4s[1]^=0x80808;
}

void FlipFunctionBBBlack705() {
	configs[ 1]+=   54;
	configs[ 2]+=   54;
	configs[ 4]+=   54;
	configs[ 5]+=   54;
	configs[ 6]+=   54;
	configs[10]+=    6;
	configs[11]+=   18;
	configs[13]+=  162;
	configs[14]+=  162;
	configs[15]+=  162;
	configs[22]+= 2157;
	configs[30]+=    6;
	configs[31]+=   18;
	configs[33]+=   54;
	configs[34]+=   54;
	configs[35]+=   54;
	bb.mover.u4s[0]^=0x80800;
	bb.mover.u4s[1]^=0x80808;
}

void FlipFunctionBBWhite706() {
	configs[32]-=   27;
}

void FlipFunctionBBBlack706() {
	configs[32]+=   27;
}

void FlipFunctionBBWhite707() {
	configs[ 4]-=  162;
	configs[14]-=   54;
	configs[23]-=  162;
	configs[32]-=  189;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBBlack707() {
	configs[ 4]+=  162;
	configs[14]+=   54;
	configs[23]+=  162;
	configs[32]+=  189;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBWhite708() {
	configs[ 4]-=  162;
	configs[ 5]-=  486;
	configs[14]-=   54;
	configs[16]-=   18;
	configs[23]-=  162;
	configs[24]-=  486;
	configs[32]-=  675;
	bb.mover.u4s[1]^=0x2010;
}

void FlipFunctionBBBlack708() {
	configs[ 4]+=  162;
	configs[ 5]+=  486;
	configs[14]+=   54;
	configs[16]+=   18;
	configs[23]+=  162;
	configs[24]+=  486;
	configs[32]+=  675;
	bb.mover.u4s[1]^=0x2010;
}

void FlipFunctionBBWhite709() {
	configs[ 4]-=  162;
	configs[ 5]-=  486;
	configs[ 6]-= 1458;
	configs[14]-=   54;
	configs[16]-=   18;
	configs[18]-=    6;
	configs[23]-=  162;
	configs[24]-=  486;
	configs[25]-= 1458;
	configs[32]-= 2133;
	bb.mover.u4s[1]^=0x402010;
}

void FlipFunctionBBBlack709() {
	configs[ 4]+=  162;
	configs[ 5]+=  486;
	configs[ 6]+= 1458;
	configs[14]+=   54;
	configs[16]+=   18;
	configs[18]+=    6;
	configs[23]+=  162;
	configs[24]+=  486;
	configs[25]+= 1458;
	configs[32]+= 2133;
	bb.mover.u4s[1]^=0x402010;
}

void FlipFunctionBBWhite710() {
	configs[ 2]-=   18;
	configs[10]-=   18;
	configs[21]-=   18;
	configs[32]-=   45;
	bb.mover.u4s[0]^=0x40000;
}

void FlipFunctionBBBlack710() {
	configs[ 2]+=   18;
	configs[10]+=   18;
	configs[21]+=   18;
	configs[32]+=   45;
	bb.mover.u4s[0]^=0x40000;
}

void FlipFunctionBBWhite711() {
	configs[ 2]-=   18;
	configs[ 4]-=  162;
	configs[10]-=   18;
	configs[14]-=   54;
	configs[21]-=   18;
	configs[23]-=  162;
	configs[32]-=  207;
	bb.mover.u4s[0]^=0x40000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBBlack711() {
	configs[ 2]+=   18;
	configs[ 4]+=  162;
	configs[10]+=   18;
	configs[14]+=   54;
	configs[21]+=   18;
	configs[23]+=  162;
	configs[32]+=  207;
	bb.mover.u4s[0]^=0x40000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBWhite712() {
	configs[ 2]-=   18;
	configs[ 4]-=  162;
	configs[ 5]-=  486;
	configs[10]-=   18;
	configs[14]-=   54;
	configs[16]-=   18;
	configs[21]-=   18;
	configs[23]-=  162;
	configs[24]-=  486;
	configs[32]-=  693;
	bb.mover.u4s[0]^=0x40000;
	bb.mover.u4s[1]^=0x2010;
}

void FlipFunctionBBBlack712() {
	configs[ 2]+=   18;
	configs[ 4]+=  162;
	configs[ 5]+=  486;
	configs[10]+=   18;
	configs[14]+=   54;
	configs[16]+=   18;
	configs[21]+=   18;
	configs[23]+=  162;
	configs[24]+=  486;
	configs[32]+=  693;
	bb.mover.u4s[0]^=0x40000;
	bb.mover.u4s[1]^=0x2010;
}

void FlipFunctionBBWhite713() {
	configs[ 2]-=   18;
	configs[ 4]-=  162;
	configs[ 5]-=  486;
	configs[ 6]-= 1458;
	configs[10]-=   18;
	configs[14]-=   54;
	configs[16]-=   18;
	configs[18]-=    6;
	configs[21]-=   18;
	configs[23]-=  162;
	configs[24]-=  486;
	configs[25]-= 1458;
	configs[32]-= 2151;
	bb.mover.u4s[0]^=0x40000;
	bb.mover.u4s[1]^=0x402010;
}

void FlipFunctionBBBlack713() {
	configs[ 2]+=   18;
	configs[ 4]+=  162;
	configs[ 5]+=  486;
	configs[ 6]+= 1458;
	configs[10]+=   18;
	configs[14]+=   54;
	configs[16]+=   18;
	configs[18]+=    6;
	configs[21]+=   18;
	configs[23]+=  162;
	configs[24]+=  486;
	configs[25]+= 1458;
	configs[32]+= 2151;
	bb.mover.u4s[0]^=0x40000;
	bb.mover.u4s[1]^=0x402010;
}

void FlipFunctionBBWhite714() {
	configs[ 1]-=    6;
	configs[ 2]-=   18;
	configs[ 8]-=    6;
	configs[10]-=   18;
	configs[20]-=    6;
	configs[21]-=   18;
	configs[32]-=   51;
	bb.mover.u4s[0]^=0x40200;
}

void FlipFunctionBBBlack714() {
	configs[ 1]+=    6;
	configs[ 2]+=   18;
	configs[ 8]+=    6;
	configs[10]+=   18;
	configs[20]+=    6;
	configs[21]+=   18;
	configs[32]+=   51;
	bb.mover.u4s[0]^=0x40200;
}

void FlipFunctionBBWhite715() {
	configs[ 1]-=    6;
	configs[ 2]-=   18;
	configs[ 4]-=  162;
	configs[ 8]-=    6;
	configs[10]-=   18;
	configs[14]-=   54;
	configs[20]-=    6;
	configs[21]-=   18;
	configs[23]-=  162;
	configs[32]-=  213;
	bb.mover.u4s[0]^=0x40200;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBBlack715() {
	configs[ 1]+=    6;
	configs[ 2]+=   18;
	configs[ 4]+=  162;
	configs[ 8]+=    6;
	configs[10]+=   18;
	configs[14]+=   54;
	configs[20]+=    6;
	configs[21]+=   18;
	configs[23]+=  162;
	configs[32]+=  213;
	bb.mover.u4s[0]^=0x40200;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBWhite716() {
	configs[ 1]-=    6;
	configs[ 2]-=   18;
	configs[ 4]-=  162;
	configs[ 5]-=  486;
	configs[ 8]-=    6;
	configs[10]-=   18;
	configs[14]-=   54;
	configs[16]-=   18;
	configs[20]-=    6;
	configs[21]-=   18;
	configs[23]-=  162;
	configs[24]-=  486;
	configs[32]-=  699;
	bb.mover.u4s[0]^=0x40200;
	bb.mover.u4s[1]^=0x2010;
}

void FlipFunctionBBBlack716() {
	configs[ 1]+=    6;
	configs[ 2]+=   18;
	configs[ 4]+=  162;
	configs[ 5]+=  486;
	configs[ 8]+=    6;
	configs[10]+=   18;
	configs[14]+=   54;
	configs[16]+=   18;
	configs[20]+=    6;
	configs[21]+=   18;
	configs[23]+=  162;
	configs[24]+=  486;
	configs[32]+=  699;
	bb.mover.u4s[0]^=0x40200;
	bb.mover.u4s[1]^=0x2010;
}

void FlipFunctionBBWhite717() {
	configs[ 1]-=    6;
	configs[ 2]-=   18;
	configs[ 4]-=  162;
	configs[ 5]-=  486;
	configs[ 6]-= 1458;
	configs[ 8]-=    6;
	configs[10]-=   18;
	configs[14]-=   54;
	configs[16]-=   18;
	configs[18]-=    6;
	configs[20]-=    6;
	configs[21]-=   18;
	configs[23]-=  162;
	configs[24]-=  486;
	configs[25]-= 1458;
	configs[32]-= 2157;
	bb.mover.u4s[0]^=0x40200;
	bb.mover.u4s[1]^=0x402010;
}

void FlipFunctionBBBlack717() {
	configs[ 1]+=    6;
	configs[ 2]+=   18;
	configs[ 4]+=  162;
	configs[ 5]+=  486;
	configs[ 6]+= 1458;
	configs[ 8]+=    6;
	configs[10]+=   18;
	configs[14]+=   54;
	configs[16]+=   18;
	configs[18]+=    6;
	configs[20]+=    6;
	configs[21]+=   18;
	configs[23]+=  162;
	configs[24]+=  486;
	configs[25]+= 1458;
	configs[32]+= 2157;
	bb.mover.u4s[0]^=0x40200;
	bb.mover.u4s[1]^=0x402010;
}

void FlipFunctionBBWhite718() {
	configs[ 3]-=   81;
	bb.mover.u4s[0]^=0x10000000;
	bb.empty.u4s[0]^=0x10000000;
}

void FlipFunctionBBBlack718() {
	configs[ 3]+=   81;
	bb.mover.u4s[0]^=0x10000000;
	bb.empty.u4s[0]^=0x10000000;
}

void FlipFunctionBBWhite719() {
	configs[ 3]-=  567;
	configs[14]-=   18;
	configs[24]-=   54;
	configs[30]-=   54;
	bb.mover.u4s[0]^=0x30000000;
	bb.empty.u4s[0]^=0x10000000;
}

void FlipFunctionBBBlack719() {
	configs[ 3]+=  567;
	configs[14]+=   18;
	configs[24]+=   54;
	configs[30]+=   54;
	bb.mover.u4s[0]^=0x30000000;
	bb.empty.u4s[0]^=0x10000000;
}

void FlipFunctionBBWhite720() {
	configs[ 3]-= 2025;
	configs[14]-=   18;
	configs[15]-=    6;
	configs[24]-=   54;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[30]-=   54;
	bb.mover.u4s[0]^=0x70000000;
	bb.empty.u4s[0]^=0x10000000;
}

void FlipFunctionBBBlack720() {
	configs[ 3]+= 2025;
	configs[14]+=   18;
	configs[15]+=    6;
	configs[24]+=   54;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[30]+=   54;
	bb.mover.u4s[0]^=0x70000000;
	bb.empty.u4s[0]^=0x10000000;
}

void FlipFunctionBBWhite721() {
	configs[ 3]-=  135;
	configs[12]-=   54;
	configs[22]-=   54;
	configs[32]-=   54;
	bb.mover.u4s[0]^=0x18000000;
	bb.empty.u4s[0]^=0x10000000;
}

void FlipFunctionBBBlack721() {
	configs[ 3]+=  135;
	configs[12]+=   54;
	configs[22]+=   54;
	configs[32]+=   54;
	bb.mover.u4s[0]^=0x18000000;
	bb.empty.u4s[0]^=0x10000000;
}

void FlipFunctionBBWhite722() {
	configs[ 3]-=  621;
	configs[12]-=   54;
	configs[14]-=   18;
	configs[22]-=   54;
	configs[24]-=   54;
	configs[30]-=   54;
	configs[32]-=   54;
	bb.mover.u4s[0]^=0x38000000;
	bb.empty.u4s[0]^=0x10000000;
}

void FlipFunctionBBBlack722() {
	configs[ 3]+=  621;
	configs[12]+=   54;
	configs[14]+=   18;
	configs[22]+=   54;
	configs[24]+=   54;
	configs[30]+=   54;
	configs[32]+=   54;
	bb.mover.u4s[0]^=0x38000000;
	bb.empty.u4s[0]^=0x10000000;
}

void FlipFunctionBBWhite723() {
	configs[ 3]-= 2079;
	configs[12]-=   54;
	configs[14]-=   18;
	configs[15]-=    6;
	configs[22]-=   54;
	configs[24]-=   54;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[30]-=   54;
	configs[32]-=   54;
	bb.mover.u4s[0]^=0x78000000;
	bb.empty.u4s[0]^=0x10000000;
}

void FlipFunctionBBBlack723() {
	configs[ 3]+= 2079;
	configs[12]+=   54;
	configs[14]+=   18;
	configs[15]+=    6;
	configs[22]+=   54;
	configs[24]+=   54;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[30]+=   54;
	configs[32]+=   54;
	bb.mover.u4s[0]^=0x78000000;
	bb.empty.u4s[0]^=0x10000000;
}

void FlipFunctionBBWhite724() {
	configs[ 3]-=  153;
	configs[11]-=   54;
	configs[12]-=   54;
	configs[21]-=   54;
	configs[22]-=   54;
	configs[32]-=   54;
	configs[33]-=   18;
	bb.mover.u4s[0]^=0x1C000000;
	bb.empty.u4s[0]^=0x10000000;
}

void FlipFunctionBBBlack724() {
	configs[ 3]+=  153;
	configs[11]+=   54;
	configs[12]+=   54;
	configs[21]+=   54;
	configs[22]+=   54;
	configs[32]+=   54;
	configs[33]+=   18;
	bb.mover.u4s[0]^=0x1C000000;
	bb.empty.u4s[0]^=0x10000000;
}

void FlipFunctionBBWhite725() {
	configs[ 3]-=  639;
	configs[11]-=   54;
	configs[12]-=   54;
	configs[14]-=   18;
	configs[21]-=   54;
	configs[22]-=   54;
	configs[24]-=   54;
	configs[30]-=   54;
	configs[32]-=   54;
	configs[33]-=   18;
	bb.mover.u4s[0]^=0x3C000000;
	bb.empty.u4s[0]^=0x10000000;
}

void FlipFunctionBBBlack725() {
	configs[ 3]+=  639;
	configs[11]+=   54;
	configs[12]+=   54;
	configs[14]+=   18;
	configs[21]+=   54;
	configs[22]+=   54;
	configs[24]+=   54;
	configs[30]+=   54;
	configs[32]+=   54;
	configs[33]+=   18;
	bb.mover.u4s[0]^=0x3C000000;
	bb.empty.u4s[0]^=0x10000000;
}

void FlipFunctionBBWhite726() {
	configs[ 3]-= 2097;
	configs[11]-=   54;
	configs[12]-=   54;
	configs[14]-=   18;
	configs[15]-=    6;
	configs[21]-=   54;
	configs[22]-=   54;
	configs[24]-=   54;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[30]-=   54;
	configs[32]-=   54;
	configs[33]-=   18;
	bb.mover.u4s[0]^=0x7C000000;
	bb.empty.u4s[0]^=0x10000000;
}

void FlipFunctionBBBlack726() {
	configs[ 3]+= 2097;
	configs[11]+=   54;
	configs[12]+=   54;
	configs[14]+=   18;
	configs[15]+=    6;
	configs[21]+=   54;
	configs[22]+=   54;
	configs[24]+=   54;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[30]+=   54;
	configs[32]+=   54;
	configs[33]+=   18;
	bb.mover.u4s[0]^=0x7C000000;
	bb.empty.u4s[0]^=0x10000000;
}

void FlipFunctionBBWhite727() {
	configs[ 3]-=  159;
	configs[10]-=   54;
	configs[11]-=   54;
	configs[12]-=   54;
	configs[20]-=   54;
	configs[21]-=   54;
	configs[22]-=   54;
	configs[32]-=   54;
	configs[33]-=   18;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x1E000000;
	bb.empty.u4s[0]^=0x10000000;
}

void FlipFunctionBBBlack727() {
	configs[ 3]+=  159;
	configs[10]+=   54;
	configs[11]+=   54;
	configs[12]+=   54;
	configs[20]+=   54;
	configs[21]+=   54;
	configs[22]+=   54;
	configs[32]+=   54;
	configs[33]+=   18;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x1E000000;
	bb.empty.u4s[0]^=0x10000000;
}

void FlipFunctionBBWhite728() {
	configs[ 3]-=  645;
	configs[10]-=   54;
	configs[11]-=   54;
	configs[12]-=   54;
	configs[14]-=   18;
	configs[20]-=   54;
	configs[21]-=   54;
	configs[22]-=   54;
	configs[24]-=   54;
	configs[30]-=   54;
	configs[32]-=   54;
	configs[33]-=   18;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x3E000000;
	bb.empty.u4s[0]^=0x10000000;
}

void FlipFunctionBBBlack728() {
	configs[ 3]+=  645;
	configs[10]+=   54;
	configs[11]+=   54;
	configs[12]+=   54;
	configs[14]+=   18;
	configs[20]+=   54;
	configs[21]+=   54;
	configs[22]+=   54;
	configs[24]+=   54;
	configs[30]+=   54;
	configs[32]+=   54;
	configs[33]+=   18;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x3E000000;
	bb.empty.u4s[0]^=0x10000000;
}

void FlipFunctionBBWhite729() {
	configs[ 3]-= 2103;
	configs[10]-=   54;
	configs[11]-=   54;
	configs[12]-=   54;
	configs[14]-=   18;
	configs[15]-=    6;
	configs[20]-=   54;
	configs[21]-=   54;
	configs[22]-=   54;
	configs[24]-=   54;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[30]-=   54;
	configs[32]-=   54;
	configs[33]-=   18;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x7E000000;
	bb.empty.u4s[0]^=0x10000000;
}

void FlipFunctionBBBlack729() {
	configs[ 3]+= 2103;
	configs[10]+=   54;
	configs[11]+=   54;
	configs[12]+=   54;
	configs[14]+=   18;
	configs[15]+=    6;
	configs[20]+=   54;
	configs[21]+=   54;
	configs[22]+=   54;
	configs[24]+=   54;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[30]+=   54;
	configs[32]+=   54;
	configs[33]+=   18;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x7E000000;
	bb.empty.u4s[0]^=0x10000000;
}

void FlipFunctionBBWhite730() {
	configs[13]-=   27;
}

void FlipFunctionBBBlack730() {
	configs[13]+=   27;
}

void FlipFunctionBBWhite731() {
	configs[ 4]-=   54;
	configs[13]-=  189;
	configs[22]-=  162;
	configs[33]-=   54;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBBlack731() {
	configs[ 4]+=   54;
	configs[13]+=  189;
	configs[22]+=  162;
	configs[33]+=   54;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBWhite732() {
	configs[ 4]-=   54;
	configs[ 5]-=   18;
	configs[13]-=  675;
	configs[21]-=  486;
	configs[22]-=  162;
	configs[33]-=   54;
	configs[35]-=   18;
	bb.mover.u4s[1]^=0x408;
}

void FlipFunctionBBBlack732() {
	configs[ 4]+=   54;
	configs[ 5]+=   18;
	configs[13]+=  675;
	configs[21]+=  486;
	configs[22]+=  162;
	configs[33]+=   54;
	configs[35]+=   18;
	bb.mover.u4s[1]^=0x408;
}

void FlipFunctionBBWhite733() {
	configs[ 4]-=   54;
	configs[ 5]-=   18;
	configs[ 6]-=    6;
	configs[13]-= 2133;
	configs[20]-= 1458;
	configs[21]-=  486;
	configs[22]-=  162;
	configs[33]-=   54;
	configs[35]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x20408;
}

void FlipFunctionBBBlack733() {
	configs[ 4]+=   54;
	configs[ 5]+=   18;
	configs[ 6]+=    6;
	configs[13]+= 2133;
	configs[20]+= 1458;
	configs[21]+=  486;
	configs[22]+=  162;
	configs[33]+=   54;
	configs[35]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x20408;
}

void FlipFunctionBBWhite734() {
	configs[ 2]-=  486;
	configs[13]-=   45;
	configs[24]-=   18;
	configs[29]-=   18;
	bb.mover.u4s[0]^=0x200000;
}

void FlipFunctionBBBlack734() {
	configs[ 2]+=  486;
	configs[13]+=   45;
	configs[24]+=   18;
	configs[29]+=   18;
	bb.mover.u4s[0]^=0x200000;
}

void FlipFunctionBBWhite735() {
	configs[ 2]-=  486;
	configs[ 4]-=   54;
	configs[13]-=  207;
	configs[22]-=  162;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[33]-=   54;
	bb.mover.u4s[0]^=0x200000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBBlack735() {
	configs[ 2]+=  486;
	configs[ 4]+=   54;
	configs[13]+=  207;
	configs[22]+=  162;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[33]+=   54;
	bb.mover.u4s[0]^=0x200000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBWhite736() {
	configs[ 2]-=  486;
	configs[ 4]-=   54;
	configs[ 5]-=   18;
	configs[13]-=  693;
	configs[21]-=  486;
	configs[22]-=  162;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[33]-=   54;
	configs[35]-=   18;
	bb.mover.u4s[0]^=0x200000;
	bb.mover.u4s[1]^=0x408;
}

void FlipFunctionBBBlack736() {
	configs[ 2]+=  486;
	configs[ 4]+=   54;
	configs[ 5]+=   18;
	configs[13]+=  693;
	configs[21]+=  486;
	configs[22]+=  162;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[33]+=   54;
	configs[35]+=   18;
	bb.mover.u4s[0]^=0x200000;
	bb.mover.u4s[1]^=0x408;
}

void FlipFunctionBBWhite737() {
	configs[ 2]-=  486;
	configs[ 4]-=   54;
	configs[ 5]-=   18;
	configs[ 6]-=    6;
	configs[13]-= 2151;
	configs[20]-= 1458;
	configs[21]-=  486;
	configs[22]-=  162;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[33]-=   54;
	configs[35]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[0]^=0x200000;
	bb.mover.u4s[1]^=0x20408;
}

void FlipFunctionBBBlack737() {
	configs[ 2]+=  486;
	configs[ 4]+=   54;
	configs[ 5]+=   18;
	configs[ 6]+=    6;
	configs[13]+= 2151;
	configs[20]+= 1458;
	configs[21]+=  486;
	configs[22]+=  162;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[33]+=   54;
	configs[35]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[0]^=0x200000;
	bb.mover.u4s[1]^=0x20408;
}

void FlipFunctionBBWhite738() {
	configs[ 1]-= 1458;
	configs[ 2]-=  486;
	configs[13]-=   51;
	configs[24]-=   18;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[29]-=   18;
	bb.mover.u4s[0]^=0x204000;
}

void FlipFunctionBBBlack738() {
	configs[ 1]+= 1458;
	configs[ 2]+=  486;
	configs[13]+=   51;
	configs[24]+=   18;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[29]+=   18;
	bb.mover.u4s[0]^=0x204000;
}

void FlipFunctionBBWhite739() {
	configs[ 1]-= 1458;
	configs[ 2]-=  486;
	configs[ 4]-=   54;
	configs[13]-=  213;
	configs[22]-=  162;
	configs[24]-=   18;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[29]-=   18;
	configs[33]-=   54;
	bb.mover.u4s[0]^=0x204000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBBlack739() {
	configs[ 1]+= 1458;
	configs[ 2]+=  486;
	configs[ 4]+=   54;
	configs[13]+=  213;
	configs[22]+=  162;
	configs[24]+=   18;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[29]+=   18;
	configs[33]+=   54;
	bb.mover.u4s[0]^=0x204000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBWhite740() {
	configs[ 1]-= 1458;
	configs[ 2]-=  486;
	configs[ 4]-=   54;
	configs[ 5]-=   18;
	configs[13]-=  699;
	configs[21]-=  486;
	configs[22]-=  162;
	configs[24]-=   18;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[29]-=   18;
	configs[33]-=   54;
	configs[35]-=   18;
	bb.mover.u4s[0]^=0x204000;
	bb.mover.u4s[1]^=0x408;
}

void FlipFunctionBBBlack740() {
	configs[ 1]+= 1458;
	configs[ 2]+=  486;
	configs[ 4]+=   54;
	configs[ 5]+=   18;
	configs[13]+=  699;
	configs[21]+=  486;
	configs[22]+=  162;
	configs[24]+=   18;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[29]+=   18;
	configs[33]+=   54;
	configs[35]+=   18;
	bb.mover.u4s[0]^=0x204000;
	bb.mover.u4s[1]^=0x408;
}

void FlipFunctionBBWhite741() {
	configs[ 1]-= 1458;
	configs[ 2]-=  486;
	configs[ 4]-=   54;
	configs[ 5]-=   18;
	configs[ 6]-=    6;
	configs[13]-= 2157;
	configs[20]-= 1458;
	configs[21]-=  486;
	configs[22]-=  162;
	configs[24]-=   18;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[29]-=   18;
	configs[33]-=   54;
	configs[35]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[0]^=0x204000;
	bb.mover.u4s[1]^=0x20408;
}

void FlipFunctionBBBlack741() {
	configs[ 1]+= 1458;
	configs[ 2]+=  486;
	configs[ 4]+=   54;
	configs[ 5]+=   18;
	configs[ 6]+=    6;
	configs[13]+= 2157;
	configs[20]+= 1458;
	configs[21]+=  486;
	configs[22]+=  162;
	configs[24]+=   18;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[29]+=   18;
	configs[33]+=   54;
	configs[35]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[0]^=0x204000;
	bb.mover.u4s[1]^=0x20408;
}

void FlipFunctionBBWhite742() {
	configs[23]-=   27;
}

void FlipFunctionBBBlack742() {
	configs[23]+=   27;
}

void FlipFunctionBBWhite743() {
	configs[ 4]-=  162;
	configs[14]-=   54;
	configs[23]-=  189;
	configs[32]-=  162;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBBlack743() {
	configs[ 4]+=  162;
	configs[14]+=   54;
	configs[23]+=  189;
	configs[32]+=  162;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBWhite744() {
	configs[ 4]-=  162;
	configs[ 5]-=  162;
	configs[14]-=   54;
	configs[15]-=   54;
	configs[23]-=  675;
	configs[32]-=  162;
	configs[33]-=  162;
	bb.mover.u4s[1]^=0x1010;
}

void FlipFunctionBBBlack744() {
	configs[ 4]+=  162;
	configs[ 5]+=  162;
	configs[14]+=   54;
	configs[15]+=   54;
	configs[23]+=  675;
	configs[32]+=  162;
	configs[33]+=  162;
	bb.mover.u4s[1]^=0x1010;
}

void FlipFunctionBBWhite745() {
	configs[ 4]-=  162;
	configs[ 5]-=  162;
	configs[ 6]-=  162;
	configs[14]-=   54;
	configs[15]-=   54;
	configs[16]-=   54;
	configs[23]-= 2133;
	configs[32]-=  162;
	configs[33]-=  162;
	configs[34]-=  162;
	bb.mover.u4s[1]^=0x101010;
}

void FlipFunctionBBBlack745() {
	configs[ 4]+=  162;
	configs[ 5]+=  162;
	configs[ 6]+=  162;
	configs[14]+=   54;
	configs[15]+=   54;
	configs[16]+=   54;
	configs[23]+= 2133;
	configs[32]+=  162;
	configs[33]+=  162;
	configs[34]+=  162;
	bb.mover.u4s[1]^=0x101010;
}

void FlipFunctionBBWhite746() {
	configs[ 2]-=  162;
	configs[12]-=   18;
	configs[23]-=   45;
	configs[30]-=   18;
	bb.mover.u4s[0]^=0x100000;
}

void FlipFunctionBBBlack746() {
	configs[ 2]+=  162;
	configs[12]+=   18;
	configs[23]+=   45;
	configs[30]+=   18;
	bb.mover.u4s[0]^=0x100000;
}

void FlipFunctionBBWhite747() {
	configs[ 2]-=  162;
	configs[ 4]-=  162;
	configs[12]-=   18;
	configs[14]-=   54;
	configs[23]-=  207;
	configs[30]-=   18;
	configs[32]-=  162;
	bb.mover.u4s[0]^=0x100000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBBlack747() {
	configs[ 2]+=  162;
	configs[ 4]+=  162;
	configs[12]+=   18;
	configs[14]+=   54;
	configs[23]+=  207;
	configs[30]+=   18;
	configs[32]+=  162;
	bb.mover.u4s[0]^=0x100000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBWhite748() {
	configs[ 2]-=  162;
	configs[ 4]-=  162;
	configs[ 5]-=  162;
	configs[12]-=   18;
	configs[14]-=   54;
	configs[15]-=   54;
	configs[23]-=  693;
	configs[30]-=   18;
	configs[32]-=  162;
	configs[33]-=  162;
	bb.mover.u4s[0]^=0x100000;
	bb.mover.u4s[1]^=0x1010;
}

void FlipFunctionBBBlack748() {
	configs[ 2]+=  162;
	configs[ 4]+=  162;
	configs[ 5]+=  162;
	configs[12]+=   18;
	configs[14]+=   54;
	configs[15]+=   54;
	configs[23]+=  693;
	configs[30]+=   18;
	configs[32]+=  162;
	configs[33]+=  162;
	bb.mover.u4s[0]^=0x100000;
	bb.mover.u4s[1]^=0x1010;
}

void FlipFunctionBBWhite749() {
	configs[ 2]-=  162;
	configs[ 4]-=  162;
	configs[ 5]-=  162;
	configs[ 6]-=  162;
	configs[12]-=   18;
	configs[14]-=   54;
	configs[15]-=   54;
	configs[16]-=   54;
	configs[23]-= 2151;
	configs[30]-=   18;
	configs[32]-=  162;
	configs[33]-=  162;
	configs[34]-=  162;
	bb.mover.u4s[0]^=0x100000;
	bb.mover.u4s[1]^=0x101010;
}

void FlipFunctionBBBlack749() {
	configs[ 2]+=  162;
	configs[ 4]+=  162;
	configs[ 5]+=  162;
	configs[ 6]+=  162;
	configs[12]+=   18;
	configs[14]+=   54;
	configs[15]+=   54;
	configs[16]+=   54;
	configs[23]+= 2151;
	configs[30]+=   18;
	configs[32]+=  162;
	configs[33]+=  162;
	configs[34]+=  162;
	bb.mover.u4s[0]^=0x100000;
	bb.mover.u4s[1]^=0x101010;
}

void FlipFunctionBBWhite750() {
	configs[ 1]-=  162;
	configs[ 2]-=  162;
	configs[11]-=    6;
	configs[12]-=   18;
	configs[23]-=   51;
	configs[29]-=    6;
	configs[30]-=   18;
	bb.mover.u4s[0]^=0x101000;
}

void FlipFunctionBBBlack750() {
	configs[ 1]+=  162;
	configs[ 2]+=  162;
	configs[11]+=    6;
	configs[12]+=   18;
	configs[23]+=   51;
	configs[29]+=    6;
	configs[30]+=   18;
	bb.mover.u4s[0]^=0x101000;
}

void FlipFunctionBBWhite751() {
	configs[ 1]-=  162;
	configs[ 2]-=  162;
	configs[ 4]-=  162;
	configs[11]-=    6;
	configs[12]-=   18;
	configs[14]-=   54;
	configs[23]-=  213;
	configs[29]-=    6;
	configs[30]-=   18;
	configs[32]-=  162;
	bb.mover.u4s[0]^=0x101000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBBlack751() {
	configs[ 1]+=  162;
	configs[ 2]+=  162;
	configs[ 4]+=  162;
	configs[11]+=    6;
	configs[12]+=   18;
	configs[14]+=   54;
	configs[23]+=  213;
	configs[29]+=    6;
	configs[30]+=   18;
	configs[32]+=  162;
	bb.mover.u4s[0]^=0x101000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBWhite752() {
	configs[ 1]-=  162;
	configs[ 2]-=  162;
	configs[ 4]-=  162;
	configs[ 5]-=  162;
	configs[11]-=    6;
	configs[12]-=   18;
	configs[14]-=   54;
	configs[15]-=   54;
	configs[23]-=  699;
	configs[29]-=    6;
	configs[30]-=   18;
	configs[32]-=  162;
	configs[33]-=  162;
	bb.mover.u4s[0]^=0x101000;
	bb.mover.u4s[1]^=0x1010;
}

void FlipFunctionBBBlack752() {
	configs[ 1]+=  162;
	configs[ 2]+=  162;
	configs[ 4]+=  162;
	configs[ 5]+=  162;
	configs[11]+=    6;
	configs[12]+=   18;
	configs[14]+=   54;
	configs[15]+=   54;
	configs[23]+=  699;
	configs[29]+=    6;
	configs[30]+=   18;
	configs[32]+=  162;
	configs[33]+=  162;
	bb.mover.u4s[0]^=0x101000;
	bb.mover.u4s[1]^=0x1010;
}

void FlipFunctionBBWhite753() {
	configs[ 1]-=  162;
	configs[ 2]-=  162;
	configs[ 4]-=  162;
	configs[ 5]-=  162;
	configs[ 6]-=  162;
	configs[11]-=    6;
	configs[12]-=   18;
	configs[14]-=   54;
	configs[15]-=   54;
	configs[16]-=   54;
	configs[23]-= 2157;
	configs[29]-=    6;
	configs[30]-=   18;
	configs[32]-=  162;
	configs[33]-=  162;
	configs[34]-=  162;
	bb.mover.u4s[0]^=0x101000;
	bb.mover.u4s[1]^=0x101010;
}

void FlipFunctionBBBlack753() {
	configs[ 1]+=  162;
	configs[ 2]+=  162;
	configs[ 4]+=  162;
	configs[ 5]+=  162;
	configs[ 6]+=  162;
	configs[11]+=    6;
	configs[12]+=   18;
	configs[14]+=   54;
	configs[15]+=   54;
	configs[16]+=   54;
	configs[23]+= 2157;
	configs[29]+=    6;
	configs[30]+=   18;
	configs[32]+=  162;
	configs[33]+=  162;
	configs[34]+=  162;
	bb.mover.u4s[0]^=0x101000;
	bb.mover.u4s[1]^=0x101010;
}

void FlipFunctionBBWhite754() {
	configs[31]-=   27;
}

void FlipFunctionBBBlack754() {
	configs[31]+=   27;
}

void FlipFunctionBBWhite755() {
	configs[ 4]-=  486;
	configs[15]-=   18;
	configs[24]-=  162;
	configs[31]-=  189;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBBlack755() {
	configs[ 4]+=  486;
	configs[15]+=   18;
	configs[24]+=  162;
	configs[31]+=  189;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBWhite756() {
	configs[ 4]-=  486;
	configs[ 5]-= 1458;
	configs[15]-=   18;
	configs[17]-=    6;
	configs[24]-=  162;
	configs[25]-=  486;
	configs[31]-=  675;
	bb.mover.u4s[1]^=0x4020;
}

void FlipFunctionBBBlack756() {
	configs[ 4]+=  486;
	configs[ 5]+= 1458;
	configs[15]+=   18;
	configs[17]+=    6;
	configs[24]+=  162;
	configs[25]+=  486;
	configs[31]+=  675;
	bb.mover.u4s[1]^=0x4020;
}

void FlipFunctionBBWhite757() {
	configs[ 2]-=   54;
	configs[11]-=   18;
	configs[22]-=   18;
	configs[31]-=   45;
	bb.mover.u4s[0]^=0x80000;
}

void FlipFunctionBBBlack757() {
	configs[ 2]+=   54;
	configs[11]+=   18;
	configs[22]+=   18;
	configs[31]+=   45;
	bb.mover.u4s[0]^=0x80000;
}

void FlipFunctionBBWhite758() {
	configs[ 2]-=   54;
	configs[ 4]-=  486;
	configs[11]-=   18;
	configs[15]-=   18;
	configs[22]-=   18;
	configs[24]-=  162;
	configs[31]-=  207;
	bb.mover.u4s[0]^=0x80000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBBlack758() {
	configs[ 2]+=   54;
	configs[ 4]+=  486;
	configs[11]+=   18;
	configs[15]+=   18;
	configs[22]+=   18;
	configs[24]+=  162;
	configs[31]+=  207;
	bb.mover.u4s[0]^=0x80000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBWhite759() {
	configs[ 2]-=   54;
	configs[ 4]-=  486;
	configs[ 5]-= 1458;
	configs[11]-=   18;
	configs[15]-=   18;
	configs[17]-=    6;
	configs[22]-=   18;
	configs[24]-=  162;
	configs[25]-=  486;
	configs[31]-=  693;
	bb.mover.u4s[0]^=0x80000;
	bb.mover.u4s[1]^=0x4020;
}

void FlipFunctionBBBlack759() {
	configs[ 2]+=   54;
	configs[ 4]+=  486;
	configs[ 5]+= 1458;
	configs[11]+=   18;
	configs[15]+=   18;
	configs[17]+=    6;
	configs[22]+=   18;
	configs[24]+=  162;
	configs[25]+=  486;
	configs[31]+=  693;
	bb.mover.u4s[0]^=0x80000;
	bb.mover.u4s[1]^=0x4020;
}

void FlipFunctionBBWhite760() {
	configs[ 1]-=   18;
	configs[ 2]-=   54;
	configs[ 9]-=    6;
	configs[11]-=   18;
	configs[21]-=    6;
	configs[22]-=   18;
	configs[31]-=   51;
	bb.mover.u4s[0]^=0x80400;
}

void FlipFunctionBBBlack760() {
	configs[ 1]+=   18;
	configs[ 2]+=   54;
	configs[ 9]+=    6;
	configs[11]+=   18;
	configs[21]+=    6;
	configs[22]+=   18;
	configs[31]+=   51;
	bb.mover.u4s[0]^=0x80400;
}

void FlipFunctionBBWhite761() {
	configs[ 1]-=   18;
	configs[ 2]-=   54;
	configs[ 4]-=  486;
	configs[ 9]-=    6;
	configs[11]-=   18;
	configs[15]-=   18;
	configs[21]-=    6;
	configs[22]-=   18;
	configs[24]-=  162;
	configs[31]-=  213;
	bb.mover.u4s[0]^=0x80400;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBBlack761() {
	configs[ 1]+=   18;
	configs[ 2]+=   54;
	configs[ 4]+=  486;
	configs[ 9]+=    6;
	configs[11]+=   18;
	configs[15]+=   18;
	configs[21]+=    6;
	configs[22]+=   18;
	configs[24]+=  162;
	configs[31]+=  213;
	bb.mover.u4s[0]^=0x80400;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBWhite762() {
	configs[ 1]-=   18;
	configs[ 2]-=   54;
	configs[ 4]-=  486;
	configs[ 5]-= 1458;
	configs[ 9]-=    6;
	configs[11]-=   18;
	configs[15]-=   18;
	configs[17]-=    6;
	configs[21]-=    6;
	configs[22]-=   18;
	configs[24]-=  162;
	configs[25]-=  486;
	configs[31]-=  699;
	bb.mover.u4s[0]^=0x80400;
	bb.mover.u4s[1]^=0x4020;
}

void FlipFunctionBBBlack762() {
	configs[ 1]+=   18;
	configs[ 2]+=   54;
	configs[ 4]+=  486;
	configs[ 5]+= 1458;
	configs[ 9]+=    6;
	configs[11]+=   18;
	configs[15]+=   18;
	configs[17]+=    6;
	configs[21]+=    6;
	configs[22]+=   18;
	configs[24]+=  162;
	configs[25]+=  486;
	configs[31]+=  699;
	bb.mover.u4s[0]^=0x80400;
	bb.mover.u4s[1]^=0x4020;
}

void FlipFunctionBBWhite763() {
	configs[ 3]-=  243;
	bb.mover.u4s[0]^=0x20000000;
	bb.empty.u4s[0]^=0x20000000;
}

void FlipFunctionBBBlack763() {
	configs[ 3]+=  243;
	bb.mover.u4s[0]^=0x20000000;
	bb.empty.u4s[0]^=0x20000000;
}

void FlipFunctionBBWhite764() {
	configs[ 3]-= 1701;
	configs[15]-=    6;
	configs[25]-=   54;
	configs[29]-=   54;
	bb.mover.u4s[0]^=0x60000000;
	bb.empty.u4s[0]^=0x20000000;
}

void FlipFunctionBBBlack764() {
	configs[ 3]+= 1701;
	configs[15]+=    6;
	configs[25]+=   54;
	configs[29]+=   54;
	bb.mover.u4s[0]^=0x60000000;
	bb.empty.u4s[0]^=0x20000000;
}

void FlipFunctionBBWhite765() {
	configs[ 3]-=  405;
	configs[13]-=   54;
	configs[23]-=   54;
	configs[31]-=   54;
	bb.mover.u4s[0]^=0x30000000;
	bb.empty.u4s[0]^=0x20000000;
}

void FlipFunctionBBBlack765() {
	configs[ 3]+=  405;
	configs[13]+=   54;
	configs[23]+=   54;
	configs[31]+=   54;
	bb.mover.u4s[0]^=0x30000000;
	bb.empty.u4s[0]^=0x20000000;
}

void FlipFunctionBBWhite766() {
	configs[ 3]-= 1863;
	configs[13]-=   54;
	configs[15]-=    6;
	configs[23]-=   54;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[31]-=   54;
	bb.mover.u4s[0]^=0x70000000;
	bb.empty.u4s[0]^=0x20000000;
}

void FlipFunctionBBBlack766() {
	configs[ 3]+= 1863;
	configs[13]+=   54;
	configs[15]+=    6;
	configs[23]+=   54;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[31]+=   54;
	bb.mover.u4s[0]^=0x70000000;
	bb.empty.u4s[0]^=0x20000000;
}

void FlipFunctionBBWhite767() {
	configs[ 3]-=  459;
	configs[12]-=   54;
	configs[13]-=   54;
	configs[22]-=   54;
	configs[23]-=   54;
	configs[31]-=   54;
	configs[32]-=   54;
	bb.mover.u4s[0]^=0x38000000;
	bb.empty.u4s[0]^=0x20000000;
}

void FlipFunctionBBBlack767() {
	configs[ 3]+=  459;
	configs[12]+=   54;
	configs[13]+=   54;
	configs[22]+=   54;
	configs[23]+=   54;
	configs[31]+=   54;
	configs[32]+=   54;
	bb.mover.u4s[0]^=0x38000000;
	bb.empty.u4s[0]^=0x20000000;
}

void FlipFunctionBBWhite768() {
	configs[ 3]-= 1917;
	configs[12]-=   54;
	configs[13]-=   54;
	configs[15]-=    6;
	configs[22]-=   54;
	configs[23]-=   54;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[31]-=   54;
	configs[32]-=   54;
	bb.mover.u4s[0]^=0x78000000;
	bb.empty.u4s[0]^=0x20000000;
}

void FlipFunctionBBBlack768() {
	configs[ 3]+= 1917;
	configs[12]+=   54;
	configs[13]+=   54;
	configs[15]+=    6;
	configs[22]+=   54;
	configs[23]+=   54;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[31]+=   54;
	configs[32]+=   54;
	bb.mover.u4s[0]^=0x78000000;
	bb.empty.u4s[0]^=0x20000000;
}

void FlipFunctionBBWhite769() {
	configs[ 3]-=  477;
	configs[11]-=   54;
	configs[12]-=   54;
	configs[13]-=   54;
	configs[21]-=   54;
	configs[22]-=   54;
	configs[23]-=   54;
	configs[31]-=   54;
	configs[32]-=   54;
	configs[33]-=   18;
	bb.mover.u4s[0]^=0x3C000000;
	bb.empty.u4s[0]^=0x20000000;
}

void FlipFunctionBBBlack769() {
	configs[ 3]+=  477;
	configs[11]+=   54;
	configs[12]+=   54;
	configs[13]+=   54;
	configs[21]+=   54;
	configs[22]+=   54;
	configs[23]+=   54;
	configs[31]+=   54;
	configs[32]+=   54;
	configs[33]+=   18;
	bb.mover.u4s[0]^=0x3C000000;
	bb.empty.u4s[0]^=0x20000000;
}

void FlipFunctionBBWhite770() {
	configs[ 3]-= 1935;
	configs[11]-=   54;
	configs[12]-=   54;
	configs[13]-=   54;
	configs[15]-=    6;
	configs[21]-=   54;
	configs[22]-=   54;
	configs[23]-=   54;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[31]-=   54;
	configs[32]-=   54;
	configs[33]-=   18;
	bb.mover.u4s[0]^=0x7C000000;
	bb.empty.u4s[0]^=0x20000000;
}

void FlipFunctionBBBlack770() {
	configs[ 3]+= 1935;
	configs[11]+=   54;
	configs[12]+=   54;
	configs[13]+=   54;
	configs[15]+=    6;
	configs[21]+=   54;
	configs[22]+=   54;
	configs[23]+=   54;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[31]+=   54;
	configs[32]+=   54;
	configs[33]+=   18;
	bb.mover.u4s[0]^=0x7C000000;
	bb.empty.u4s[0]^=0x20000000;
}

void FlipFunctionBBWhite771() {
	configs[ 3]-=  483;
	configs[10]-=   54;
	configs[11]-=   54;
	configs[12]-=   54;
	configs[13]-=   54;
	configs[20]-=   54;
	configs[21]-=   54;
	configs[22]-=   54;
	configs[23]-=   54;
	configs[31]-=   54;
	configs[32]-=   54;
	configs[33]-=   18;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x3E000000;
	bb.empty.u4s[0]^=0x20000000;
}

void FlipFunctionBBBlack771() {
	configs[ 3]+=  483;
	configs[10]+=   54;
	configs[11]+=   54;
	configs[12]+=   54;
	configs[13]+=   54;
	configs[20]+=   54;
	configs[21]+=   54;
	configs[22]+=   54;
	configs[23]+=   54;
	configs[31]+=   54;
	configs[32]+=   54;
	configs[33]+=   18;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x3E000000;
	bb.empty.u4s[0]^=0x20000000;
}

void FlipFunctionBBWhite772() {
	configs[ 3]-= 1941;
	configs[10]-=   54;
	configs[11]-=   54;
	configs[12]-=   54;
	configs[13]-=   54;
	configs[15]-=    6;
	configs[20]-=   54;
	configs[21]-=   54;
	configs[22]-=   54;
	configs[23]-=   54;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[31]-=   54;
	configs[32]-=   54;
	configs[33]-=   18;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x7E000000;
	bb.empty.u4s[0]^=0x20000000;
}

void FlipFunctionBBBlack772() {
	configs[ 3]+= 1941;
	configs[10]+=   54;
	configs[11]+=   54;
	configs[12]+=   54;
	configs[13]+=   54;
	configs[15]+=    6;
	configs[20]+=   54;
	configs[21]+=   54;
	configs[22]+=   54;
	configs[23]+=   54;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[31]+=   54;
	configs[32]+=   54;
	configs[33]+=   18;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x7E000000;
	bb.empty.u4s[0]^=0x20000000;
}

void FlipFunctionBBWhite773() {
	configs[14]-=    9;
}

void FlipFunctionBBBlack773() {
	configs[14]+=    9;
}

void FlipFunctionBBWhite774() {
	configs[ 4]-=  162;
	configs[14]-=   63;
	configs[23]-=  162;
	configs[32]-=  162;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBBlack774() {
	configs[ 4]+=  162;
	configs[14]+=   63;
	configs[23]+=  162;
	configs[32]+=  162;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBWhite775() {
	configs[ 4]-=  162;
	configs[ 5]-=   54;
	configs[14]-=  225;
	configs[22]-=  486;
	configs[23]-=  162;
	configs[32]-=  162;
	configs[34]-=   54;
	bb.mover.u4s[1]^=0x810;
}

void FlipFunctionBBBlack775() {
	configs[ 4]+=  162;
	configs[ 5]+=   54;
	configs[14]+=  225;
	configs[22]+=  486;
	configs[23]+=  162;
	configs[32]+=  162;
	configs[34]+=   54;
	bb.mover.u4s[1]^=0x810;
}

void FlipFunctionBBWhite776() {
	configs[ 4]-=  162;
	configs[ 5]-=   54;
	configs[ 6]-=   18;
	configs[14]-=  711;
	configs[21]-= 1458;
	configs[22]-=  486;
	configs[23]-=  162;
	configs[32]-=  162;
	configs[34]-=   54;
	configs[36]-=   18;
	bb.mover.u4s[1]^=0x40810;
}

void FlipFunctionBBBlack776() {
	configs[ 4]+=  162;
	configs[ 5]+=   54;
	configs[ 6]+=   18;
	configs[14]+=  711;
	configs[21]+= 1458;
	configs[22]+=  486;
	configs[23]+=  162;
	configs[32]+=  162;
	configs[34]+=   54;
	configs[36]+=   18;
	bb.mover.u4s[1]^=0x40810;
}

void FlipFunctionBBWhite777() {
	configs[ 2]-= 1458;
	configs[14]-=   15;
	configs[25]-=   18;
	configs[28]-=   18;
	bb.mover.u4s[0]^=0x400000;
}

void FlipFunctionBBBlack777() {
	configs[ 2]+= 1458;
	configs[14]+=   15;
	configs[25]+=   18;
	configs[28]+=   18;
	bb.mover.u4s[0]^=0x400000;
}

void FlipFunctionBBWhite778() {
	configs[ 2]-= 1458;
	configs[ 4]-=  162;
	configs[14]-=   69;
	configs[23]-=  162;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[32]-=  162;
	bb.mover.u4s[0]^=0x400000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBBlack778() {
	configs[ 2]+= 1458;
	configs[ 4]+=  162;
	configs[14]+=   69;
	configs[23]+=  162;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[32]+=  162;
	bb.mover.u4s[0]^=0x400000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBWhite779() {
	configs[ 2]-= 1458;
	configs[ 4]-=  162;
	configs[ 5]-=   54;
	configs[14]-=  231;
	configs[22]-=  486;
	configs[23]-=  162;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[32]-=  162;
	configs[34]-=   54;
	bb.mover.u4s[0]^=0x400000;
	bb.mover.u4s[1]^=0x810;
}

void FlipFunctionBBBlack779() {
	configs[ 2]+= 1458;
	configs[ 4]+=  162;
	configs[ 5]+=   54;
	configs[14]+=  231;
	configs[22]+=  486;
	configs[23]+=  162;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[32]+=  162;
	configs[34]+=   54;
	bb.mover.u4s[0]^=0x400000;
	bb.mover.u4s[1]^=0x810;
}

void FlipFunctionBBWhite780() {
	configs[ 2]-= 1458;
	configs[ 4]-=  162;
	configs[ 5]-=   54;
	configs[ 6]-=   18;
	configs[14]-=  717;
	configs[21]-= 1458;
	configs[22]-=  486;
	configs[23]-=  162;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[32]-=  162;
	configs[34]-=   54;
	configs[36]-=   18;
	bb.mover.u4s[0]^=0x400000;
	bb.mover.u4s[1]^=0x40810;
}

void FlipFunctionBBBlack780() {
	configs[ 2]+= 1458;
	configs[ 4]+=  162;
	configs[ 5]+=   54;
	configs[ 6]+=   18;
	configs[14]+=  717;
	configs[21]+= 1458;
	configs[22]+=  486;
	configs[23]+=  162;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[32]+=  162;
	configs[34]+=   54;
	configs[36]+=   18;
	bb.mover.u4s[0]^=0x400000;
	bb.mover.u4s[1]^=0x40810;
}

void FlipFunctionBBWhite781() {
	configs[24]-=   27;
}

void FlipFunctionBBBlack781() {
	configs[24]+=   27;
}

void FlipFunctionBBWhite782() {
	configs[ 4]-=  486;
	configs[15]-=   18;
	configs[24]-=  189;
	configs[31]-=  162;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBBlack782() {
	configs[ 4]+=  486;
	configs[15]+=   18;
	configs[24]+=  189;
	configs[31]+=  162;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBWhite783() {
	configs[ 4]-=  486;
	configs[ 5]-=  486;
	configs[15]-=   18;
	configs[16]-=   18;
	configs[24]-=  675;
	configs[31]-=  162;
	configs[32]-=  486;
	bb.mover.u4s[1]^=0x2020;
}

void FlipFunctionBBBlack783() {
	configs[ 4]+=  486;
	configs[ 5]+=  486;
	configs[15]+=   18;
	configs[16]+=   18;
	configs[24]+=  675;
	configs[31]+=  162;
	configs[32]+=  486;
	bb.mover.u4s[1]^=0x2020;
}

void FlipFunctionBBWhite784() {
	configs[ 4]-=  486;
	configs[ 5]-=  486;
	configs[ 6]-=  486;
	configs[15]-=   18;
	configs[16]-=   18;
	configs[17]-=   18;
	configs[24]-= 2133;
	configs[31]-=  162;
	configs[32]-=  486;
	configs[33]-=  486;
	bb.mover.u4s[1]^=0x202020;
}

void FlipFunctionBBBlack784() {
	configs[ 4]+=  486;
	configs[ 5]+=  486;
	configs[ 6]+=  486;
	configs[15]+=   18;
	configs[16]+=   18;
	configs[17]+=   18;
	configs[24]+= 2133;
	configs[31]+=  162;
	configs[32]+=  486;
	configs[33]+=  486;
	bb.mover.u4s[1]^=0x202020;
}

void FlipFunctionBBWhite785() {
	configs[ 2]-=  486;
	configs[13]-=   18;
	configs[24]-=   45;
	configs[29]-=   18;
	bb.mover.u4s[0]^=0x200000;
}

void FlipFunctionBBBlack785() {
	configs[ 2]+=  486;
	configs[13]+=   18;
	configs[24]+=   45;
	configs[29]+=   18;
	bb.mover.u4s[0]^=0x200000;
}

void FlipFunctionBBWhite786() {
	configs[ 2]-=  486;
	configs[ 4]-=  486;
	configs[13]-=   18;
	configs[15]-=   18;
	configs[24]-=  207;
	configs[29]-=   18;
	configs[31]-=  162;
	bb.mover.u4s[0]^=0x200000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBBlack786() {
	configs[ 2]+=  486;
	configs[ 4]+=  486;
	configs[13]+=   18;
	configs[15]+=   18;
	configs[24]+=  207;
	configs[29]+=   18;
	configs[31]+=  162;
	bb.mover.u4s[0]^=0x200000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBWhite787() {
	configs[ 2]-=  486;
	configs[ 4]-=  486;
	configs[ 5]-=  486;
	configs[13]-=   18;
	configs[15]-=   18;
	configs[16]-=   18;
	configs[24]-=  693;
	configs[29]-=   18;
	configs[31]-=  162;
	configs[32]-=  486;
	bb.mover.u4s[0]^=0x200000;
	bb.mover.u4s[1]^=0x2020;
}

void FlipFunctionBBBlack787() {
	configs[ 2]+=  486;
	configs[ 4]+=  486;
	configs[ 5]+=  486;
	configs[13]+=   18;
	configs[15]+=   18;
	configs[16]+=   18;
	configs[24]+=  693;
	configs[29]+=   18;
	configs[31]+=  162;
	configs[32]+=  486;
	bb.mover.u4s[0]^=0x200000;
	bb.mover.u4s[1]^=0x2020;
}

void FlipFunctionBBWhite788() {
	configs[ 2]-=  486;
	configs[ 4]-=  486;
	configs[ 5]-=  486;
	configs[ 6]-=  486;
	configs[13]-=   18;
	configs[15]-=   18;
	configs[16]-=   18;
	configs[17]-=   18;
	configs[24]-= 2151;
	configs[29]-=   18;
	configs[31]-=  162;
	configs[32]-=  486;
	configs[33]-=  486;
	bb.mover.u4s[0]^=0x200000;
	bb.mover.u4s[1]^=0x202020;
}

void FlipFunctionBBBlack788() {
	configs[ 2]+=  486;
	configs[ 4]+=  486;
	configs[ 5]+=  486;
	configs[ 6]+=  486;
	configs[13]+=   18;
	configs[15]+=   18;
	configs[16]+=   18;
	configs[17]+=   18;
	configs[24]+= 2151;
	configs[29]+=   18;
	configs[31]+=  162;
	configs[32]+=  486;
	configs[33]+=  486;
	bb.mover.u4s[0]^=0x200000;
	bb.mover.u4s[1]^=0x202020;
}

void FlipFunctionBBWhite789() {
	configs[ 1]-=  486;
	configs[ 2]-=  486;
	configs[12]-=    6;
	configs[13]-=   18;
	configs[24]-=   51;
	configs[28]-=    6;
	configs[29]-=   18;
	bb.mover.u4s[0]^=0x202000;
}

void FlipFunctionBBBlack789() {
	configs[ 1]+=  486;
	configs[ 2]+=  486;
	configs[12]+=    6;
	configs[13]+=   18;
	configs[24]+=   51;
	configs[28]+=    6;
	configs[29]+=   18;
	bb.mover.u4s[0]^=0x202000;
}

void FlipFunctionBBWhite790() {
	configs[ 1]-=  486;
	configs[ 2]-=  486;
	configs[ 4]-=  486;
	configs[12]-=    6;
	configs[13]-=   18;
	configs[15]-=   18;
	configs[24]-=  213;
	configs[28]-=    6;
	configs[29]-=   18;
	configs[31]-=  162;
	bb.mover.u4s[0]^=0x202000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBBlack790() {
	configs[ 1]+=  486;
	configs[ 2]+=  486;
	configs[ 4]+=  486;
	configs[12]+=    6;
	configs[13]+=   18;
	configs[15]+=   18;
	configs[24]+=  213;
	configs[28]+=    6;
	configs[29]+=   18;
	configs[31]+=  162;
	bb.mover.u4s[0]^=0x202000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBWhite791() {
	configs[ 1]-=  486;
	configs[ 2]-=  486;
	configs[ 4]-=  486;
	configs[ 5]-=  486;
	configs[12]-=    6;
	configs[13]-=   18;
	configs[15]-=   18;
	configs[16]-=   18;
	configs[24]-=  699;
	configs[28]-=    6;
	configs[29]-=   18;
	configs[31]-=  162;
	configs[32]-=  486;
	bb.mover.u4s[0]^=0x202000;
	bb.mover.u4s[1]^=0x2020;
}

void FlipFunctionBBBlack791() {
	configs[ 1]+=  486;
	configs[ 2]+=  486;
	configs[ 4]+=  486;
	configs[ 5]+=  486;
	configs[12]+=    6;
	configs[13]+=   18;
	configs[15]+=   18;
	configs[16]+=   18;
	configs[24]+=  699;
	configs[28]+=    6;
	configs[29]+=   18;
	configs[31]+=  162;
	configs[32]+=  486;
	bb.mover.u4s[0]^=0x202000;
	bb.mover.u4s[1]^=0x2020;
}

void FlipFunctionBBWhite792() {
	configs[ 1]-=  486;
	configs[ 2]-=  486;
	configs[ 4]-=  486;
	configs[ 5]-=  486;
	configs[ 6]-=  486;
	configs[12]-=    6;
	configs[13]-=   18;
	configs[15]-=   18;
	configs[16]-=   18;
	configs[17]-=   18;
	configs[24]-= 2157;
	configs[28]-=    6;
	configs[29]-=   18;
	configs[31]-=  162;
	configs[32]-=  486;
	configs[33]-=  486;
	bb.mover.u4s[0]^=0x202000;
	bb.mover.u4s[1]^=0x202020;
}

void FlipFunctionBBBlack792() {
	configs[ 1]+=  486;
	configs[ 2]+=  486;
	configs[ 4]+=  486;
	configs[ 5]+=  486;
	configs[ 6]+=  486;
	configs[12]+=    6;
	configs[13]+=   18;
	configs[15]+=   18;
	configs[16]+=   18;
	configs[17]+=   18;
	configs[24]+= 2157;
	configs[28]+=    6;
	configs[29]+=   18;
	configs[31]+=  162;
	configs[32]+=  486;
	configs[33]+=  486;
	bb.mover.u4s[0]^=0x202000;
	bb.mover.u4s[1]^=0x202020;
}

void FlipFunctionBBWhite793() {
	configs[30]-=   27;
}

void FlipFunctionBBBlack793() {
	configs[30]+=   27;
}

void FlipFunctionBBWhite794() {
	configs[ 4]-= 1458;
	configs[16]-=    6;
	configs[25]-=  162;
	configs[30]-=  189;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBBlack794() {
	configs[ 4]+= 1458;
	configs[16]+=    6;
	configs[25]+=  162;
	configs[30]+=  189;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBWhite795() {
	configs[ 2]-=  162;
	configs[12]-=   18;
	configs[23]-=   18;
	configs[30]-=   45;
	bb.mover.u4s[0]^=0x100000;
}

void FlipFunctionBBBlack795() {
	configs[ 2]+=  162;
	configs[12]+=   18;
	configs[23]+=   18;
	configs[30]+=   45;
	bb.mover.u4s[0]^=0x100000;
}

void FlipFunctionBBWhite796() {
	configs[ 2]-=  162;
	configs[ 4]-= 1458;
	configs[12]-=   18;
	configs[16]-=    6;
	configs[23]-=   18;
	configs[25]-=  162;
	configs[30]-=  207;
	bb.mover.u4s[0]^=0x100000;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBBlack796() {
	configs[ 2]+=  162;
	configs[ 4]+= 1458;
	configs[12]+=   18;
	configs[16]+=    6;
	configs[23]+=   18;
	configs[25]+=  162;
	configs[30]+=  207;
	bb.mover.u4s[0]^=0x100000;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBWhite797() {
	configs[ 1]-=   54;
	configs[ 2]-=  162;
	configs[10]-=    6;
	configs[12]-=   18;
	configs[22]-=    6;
	configs[23]-=   18;
	configs[30]-=   51;
	bb.mover.u4s[0]^=0x100800;
}

void FlipFunctionBBBlack797() {
	configs[ 1]+=   54;
	configs[ 2]+=  162;
	configs[10]+=    6;
	configs[12]+=   18;
	configs[22]+=    6;
	configs[23]+=   18;
	configs[30]+=   51;
	bb.mover.u4s[0]^=0x100800;
}

void FlipFunctionBBWhite798() {
	configs[ 1]-=   54;
	configs[ 2]-=  162;
	configs[ 4]-= 1458;
	configs[10]-=    6;
	configs[12]-=   18;
	configs[16]-=    6;
	configs[22]-=    6;
	configs[23]-=   18;
	configs[25]-=  162;
	configs[30]-=  213;
	bb.mover.u4s[0]^=0x100800;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBBlack798() {
	configs[ 1]+=   54;
	configs[ 2]+=  162;
	configs[ 4]+= 1458;
	configs[10]+=    6;
	configs[12]+=   18;
	configs[16]+=    6;
	configs[22]+=    6;
	configs[23]+=   18;
	configs[25]+=  162;
	configs[30]+=  213;
	bb.mover.u4s[0]^=0x100800;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBWhite799() {
	configs[ 3]-=  729;
	bb.mover.u4s[0]^=0x40000000;
	bb.empty.u4s[0]^=0x40000000;
}

void FlipFunctionBBBlack799() {
	configs[ 3]+=  729;
	bb.mover.u4s[0]^=0x40000000;
	bb.empty.u4s[0]^=0x40000000;
}

void FlipFunctionBBWhite800() {
	configs[ 3]-= 1215;
	configs[14]-=   18;
	configs[24]-=   54;
	configs[30]-=   54;
	bb.mover.u4s[0]^=0x60000000;
	bb.empty.u4s[0]^=0x40000000;
}

void FlipFunctionBBBlack800() {
	configs[ 3]+= 1215;
	configs[14]+=   18;
	configs[24]+=   54;
	configs[30]+=   54;
	bb.mover.u4s[0]^=0x60000000;
	bb.empty.u4s[0]^=0x40000000;
}

void FlipFunctionBBWhite801() {
	configs[ 3]-= 1377;
	configs[13]-=   54;
	configs[14]-=   18;
	configs[23]-=   54;
	configs[24]-=   54;
	configs[30]-=   54;
	configs[31]-=   54;
	bb.mover.u4s[0]^=0x70000000;
	bb.empty.u4s[0]^=0x40000000;
}

void FlipFunctionBBBlack801() {
	configs[ 3]+= 1377;
	configs[13]+=   54;
	configs[14]+=   18;
	configs[23]+=   54;
	configs[24]+=   54;
	configs[30]+=   54;
	configs[31]+=   54;
	bb.mover.u4s[0]^=0x70000000;
	bb.empty.u4s[0]^=0x40000000;
}

void FlipFunctionBBWhite802() {
	configs[ 3]-= 1431;
	configs[12]-=   54;
	configs[13]-=   54;
	configs[14]-=   18;
	configs[22]-=   54;
	configs[23]-=   54;
	configs[24]-=   54;
	configs[30]-=   54;
	configs[31]-=   54;
	configs[32]-=   54;
	bb.mover.u4s[0]^=0x78000000;
	bb.empty.u4s[0]^=0x40000000;
}

void FlipFunctionBBBlack802() {
	configs[ 3]+= 1431;
	configs[12]+=   54;
	configs[13]+=   54;
	configs[14]+=   18;
	configs[22]+=   54;
	configs[23]+=   54;
	configs[24]+=   54;
	configs[30]+=   54;
	configs[31]+=   54;
	configs[32]+=   54;
	bb.mover.u4s[0]^=0x78000000;
	bb.empty.u4s[0]^=0x40000000;
}

void FlipFunctionBBWhite803() {
	configs[ 3]-= 1449;
	configs[11]-=   54;
	configs[12]-=   54;
	configs[13]-=   54;
	configs[14]-=   18;
	configs[21]-=   54;
	configs[22]-=   54;
	configs[23]-=   54;
	configs[24]-=   54;
	configs[30]-=   54;
	configs[31]-=   54;
	configs[32]-=   54;
	configs[33]-=   18;
	bb.mover.u4s[0]^=0x7C000000;
	bb.empty.u4s[0]^=0x40000000;
}

void FlipFunctionBBBlack803() {
	configs[ 3]+= 1449;
	configs[11]+=   54;
	configs[12]+=   54;
	configs[13]+=   54;
	configs[14]+=   18;
	configs[21]+=   54;
	configs[22]+=   54;
	configs[23]+=   54;
	configs[24]+=   54;
	configs[30]+=   54;
	configs[31]+=   54;
	configs[32]+=   54;
	configs[33]+=   18;
	bb.mover.u4s[0]^=0x7C000000;
	bb.empty.u4s[0]^=0x40000000;
}

void FlipFunctionBBWhite804() {
	configs[ 3]-= 1455;
	configs[10]-=   54;
	configs[11]-=   54;
	configs[12]-=   54;
	configs[13]-=   54;
	configs[14]-=   18;
	configs[20]-=   54;
	configs[21]-=   54;
	configs[22]-=   54;
	configs[23]-=   54;
	configs[24]-=   54;
	configs[30]-=   54;
	configs[31]-=   54;
	configs[32]-=   54;
	configs[33]-=   18;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x7E000000;
	bb.empty.u4s[0]^=0x40000000;
}

void FlipFunctionBBBlack804() {
	configs[ 3]+= 1455;
	configs[10]+=   54;
	configs[11]+=   54;
	configs[12]+=   54;
	configs[13]+=   54;
	configs[14]+=   18;
	configs[20]+=   54;
	configs[21]+=   54;
	configs[22]+=   54;
	configs[23]+=   54;
	configs[24]+=   54;
	configs[30]+=   54;
	configs[31]+=   54;
	configs[32]+=   54;
	configs[33]+=   18;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x7E000000;
	bb.empty.u4s[0]^=0x40000000;
}

void FlipFunctionBBWhite805() {
	configs[15]-=    3;
}

void FlipFunctionBBBlack805() {
	configs[15]+=    3;
}

void FlipFunctionBBWhite806() {
	configs[ 4]-=  486;
	configs[15]-=   21;
	configs[24]-=  162;
	configs[31]-=  162;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBBlack806() {
	configs[ 4]+=  486;
	configs[15]+=   21;
	configs[24]+=  162;
	configs[31]+=  162;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBWhite807() {
	configs[ 4]-=  486;
	configs[ 5]-=  162;
	configs[15]-=   75;
	configs[23]-=  486;
	configs[24]-=  162;
	configs[31]-=  162;
	configs[33]-=  162;
	bb.mover.u4s[1]^=0x1020;
}

void FlipFunctionBBBlack807() {
	configs[ 4]+=  486;
	configs[ 5]+=  162;
	configs[15]+=   75;
	configs[23]+=  486;
	configs[24]+=  162;
	configs[31]+=  162;
	configs[33]+=  162;
	bb.mover.u4s[1]^=0x1020;
}

void FlipFunctionBBWhite808() {
	configs[ 4]-=  486;
	configs[ 5]-=  162;
	configs[ 6]-=   54;
	configs[15]-=  237;
	configs[22]-= 1458;
	configs[23]-=  486;
	configs[24]-=  162;
	configs[31]-=  162;
	configs[33]-=  162;
	configs[35]-=   54;
	bb.mover.u4s[1]^=0x81020;
}

void FlipFunctionBBBlack808() {
	configs[ 4]+=  486;
	configs[ 5]+=  162;
	configs[ 6]+=   54;
	configs[15]+=  237;
	configs[22]+= 1458;
	configs[23]+=  486;
	configs[24]+=  162;
	configs[31]+=  162;
	configs[33]+=  162;
	configs[35]+=   54;
	bb.mover.u4s[1]^=0x81020;
}

void FlipFunctionBBWhite809() {
	configs[25]-=   27;
}

void FlipFunctionBBBlack809() {
	configs[25]+=   27;
}

void FlipFunctionBBWhite810() {
	configs[ 4]-= 1458;
	configs[16]-=    6;
	configs[25]-=  189;
	configs[30]-=  162;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBBlack810() {
	configs[ 4]+= 1458;
	configs[16]+=    6;
	configs[25]+=  189;
	configs[30]+=  162;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBWhite811() {
	configs[ 4]-= 1458;
	configs[ 5]-= 1458;
	configs[16]-=    6;
	configs[17]-=    6;
	configs[25]-=  675;
	configs[30]-=  162;
	configs[31]-=  486;
	bb.mover.u4s[1]^=0x4040;
}

void FlipFunctionBBBlack811() {
	configs[ 4]+= 1458;
	configs[ 5]+= 1458;
	configs[16]+=    6;
	configs[17]+=    6;
	configs[25]+=  675;
	configs[30]+=  162;
	configs[31]+=  486;
	bb.mover.u4s[1]^=0x4040;
}

void FlipFunctionBBWhite812() {
	configs[ 4]-= 1458;
	configs[ 5]-= 1458;
	configs[ 6]-= 1458;
	configs[16]-=    6;
	configs[17]-=    6;
	configs[18]-=    6;
	configs[25]-= 2133;
	configs[30]-=  162;
	configs[31]-=  486;
	configs[32]-= 1458;
	bb.mover.u4s[1]^=0x404040;
}

void FlipFunctionBBBlack812() {
	configs[ 4]+= 1458;
	configs[ 5]+= 1458;
	configs[ 6]+= 1458;
	configs[16]+=    6;
	configs[17]+=    6;
	configs[18]+=    6;
	configs[25]+= 2133;
	configs[30]+=  162;
	configs[31]+=  486;
	configs[32]+= 1458;
	bb.mover.u4s[1]^=0x404040;
}

void FlipFunctionBBWhite813() {
	configs[ 2]-= 1458;
	configs[14]-=    6;
	configs[25]-=   45;
	configs[28]-=   18;
	bb.mover.u4s[0]^=0x400000;
}

void FlipFunctionBBBlack813() {
	configs[ 2]+= 1458;
	configs[14]+=    6;
	configs[25]+=   45;
	configs[28]+=   18;
	bb.mover.u4s[0]^=0x400000;
}

void FlipFunctionBBWhite814() {
	configs[ 2]-= 1458;
	configs[ 4]-= 1458;
	configs[14]-=    6;
	configs[16]-=    6;
	configs[25]-=  207;
	configs[28]-=   18;
	configs[30]-=  162;
	bb.mover.u4s[0]^=0x400000;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBBlack814() {
	configs[ 2]+= 1458;
	configs[ 4]+= 1458;
	configs[14]+=    6;
	configs[16]+=    6;
	configs[25]+=  207;
	configs[28]+=   18;
	configs[30]+=  162;
	bb.mover.u4s[0]^=0x400000;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBWhite815() {
	configs[ 2]-= 1458;
	configs[ 4]-= 1458;
	configs[ 5]-= 1458;
	configs[14]-=    6;
	configs[16]-=    6;
	configs[17]-=    6;
	configs[25]-=  693;
	configs[28]-=   18;
	configs[30]-=  162;
	configs[31]-=  486;
	bb.mover.u4s[0]^=0x400000;
	bb.mover.u4s[1]^=0x4040;
}

void FlipFunctionBBBlack815() {
	configs[ 2]+= 1458;
	configs[ 4]+= 1458;
	configs[ 5]+= 1458;
	configs[14]+=    6;
	configs[16]+=    6;
	configs[17]+=    6;
	configs[25]+=  693;
	configs[28]+=   18;
	configs[30]+=  162;
	configs[31]+=  486;
	bb.mover.u4s[0]^=0x400000;
	bb.mover.u4s[1]^=0x4040;
}

void FlipFunctionBBWhite816() {
	configs[ 2]-= 1458;
	configs[ 4]-= 1458;
	configs[ 5]-= 1458;
	configs[ 6]-= 1458;
	configs[14]-=    6;
	configs[16]-=    6;
	configs[17]-=    6;
	configs[18]-=    6;
	configs[25]-= 2151;
	configs[28]-=   18;
	configs[30]-=  162;
	configs[31]-=  486;
	configs[32]-= 1458;
	bb.mover.u4s[0]^=0x400000;
	bb.mover.u4s[1]^=0x404040;
}

void FlipFunctionBBBlack816() {
	configs[ 2]+= 1458;
	configs[ 4]+= 1458;
	configs[ 5]+= 1458;
	configs[ 6]+= 1458;
	configs[14]+=    6;
	configs[16]+=    6;
	configs[17]+=    6;
	configs[18]+=    6;
	configs[25]+= 2151;
	configs[28]+=   18;
	configs[30]+=  162;
	configs[31]+=  486;
	configs[32]+= 1458;
	bb.mover.u4s[0]^=0x400000;
	bb.mover.u4s[1]^=0x404040;
}

void FlipFunctionBBWhite817() {
	configs[ 1]-= 1458;
	configs[ 2]-= 1458;
	configs[13]-=    6;
	configs[14]-=    6;
	configs[25]-=   51;
	configs[27]-=    6;
	configs[28]-=   18;
	bb.mover.u4s[0]^=0x404000;
}

void FlipFunctionBBBlack817() {
	configs[ 1]+= 1458;
	configs[ 2]+= 1458;
	configs[13]+=    6;
	configs[14]+=    6;
	configs[25]+=   51;
	configs[27]+=    6;
	configs[28]+=   18;
	bb.mover.u4s[0]^=0x404000;
}

void FlipFunctionBBWhite818() {
	configs[ 1]-= 1458;
	configs[ 2]-= 1458;
	configs[ 4]-= 1458;
	configs[13]-=    6;
	configs[14]-=    6;
	configs[16]-=    6;
	configs[25]-=  213;
	configs[27]-=    6;
	configs[28]-=   18;
	configs[30]-=  162;
	bb.mover.u4s[0]^=0x404000;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBBlack818() {
	configs[ 1]+= 1458;
	configs[ 2]+= 1458;
	configs[ 4]+= 1458;
	configs[13]+=    6;
	configs[14]+=    6;
	configs[16]+=    6;
	configs[25]+=  213;
	configs[27]+=    6;
	configs[28]+=   18;
	configs[30]+=  162;
	bb.mover.u4s[0]^=0x404000;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBWhite819() {
	configs[ 1]-= 1458;
	configs[ 2]-= 1458;
	configs[ 4]-= 1458;
	configs[ 5]-= 1458;
	configs[13]-=    6;
	configs[14]-=    6;
	configs[16]-=    6;
	configs[17]-=    6;
	configs[25]-=  699;
	configs[27]-=    6;
	configs[28]-=   18;
	configs[30]-=  162;
	configs[31]-=  486;
	bb.mover.u4s[0]^=0x404000;
	bb.mover.u4s[1]^=0x4040;
}

void FlipFunctionBBBlack819() {
	configs[ 1]+= 1458;
	configs[ 2]+= 1458;
	configs[ 4]+= 1458;
	configs[ 5]+= 1458;
	configs[13]+=    6;
	configs[14]+=    6;
	configs[16]+=    6;
	configs[17]+=    6;
	configs[25]+=  699;
	configs[27]+=    6;
	configs[28]+=   18;
	configs[30]+=  162;
	configs[31]+=  486;
	bb.mover.u4s[0]^=0x404000;
	bb.mover.u4s[1]^=0x4040;
}

void FlipFunctionBBWhite820() {
	configs[ 1]-= 1458;
	configs[ 2]-= 1458;
	configs[ 4]-= 1458;
	configs[ 5]-= 1458;
	configs[ 6]-= 1458;
	configs[13]-=    6;
	configs[14]-=    6;
	configs[16]-=    6;
	configs[17]-=    6;
	configs[18]-=    6;
	configs[25]-= 2157;
	configs[27]-=    6;
	configs[28]-=   18;
	configs[30]-=  162;
	configs[31]-=  486;
	configs[32]-= 1458;
	bb.mover.u4s[0]^=0x404000;
	bb.mover.u4s[1]^=0x404040;
}

void FlipFunctionBBBlack820() {
	configs[ 1]+= 1458;
	configs[ 2]+= 1458;
	configs[ 4]+= 1458;
	configs[ 5]+= 1458;
	configs[ 6]+= 1458;
	configs[13]+=    6;
	configs[14]+=    6;
	configs[16]+=    6;
	configs[17]+=    6;
	configs[18]+=    6;
	configs[25]+= 2157;
	configs[27]+=    6;
	configs[28]+=   18;
	configs[30]+=  162;
	configs[31]+=  486;
	configs[32]+= 1458;
	bb.mover.u4s[0]^=0x404000;
	bb.mover.u4s[1]^=0x404040;
}

void FlipFunctionBBWhite821() {
	configs[29]-=   27;
}

void FlipFunctionBBBlack821() {
	configs[29]+=   27;
}

void FlipFunctionBBWhite822() {
	configs[ 2]-=  486;
	configs[13]-=   18;
	configs[24]-=   18;
	configs[29]-=   45;
	bb.mover.u4s[0]^=0x200000;
}

void FlipFunctionBBBlack822() {
	configs[ 2]+=  486;
	configs[13]+=   18;
	configs[24]+=   18;
	configs[29]+=   45;
	bb.mover.u4s[0]^=0x200000;
}

void FlipFunctionBBWhite823() {
	configs[ 1]-=  162;
	configs[ 2]-=  486;
	configs[11]-=    6;
	configs[13]-=   18;
	configs[23]-=    6;
	configs[24]-=   18;
	configs[29]-=   51;
	bb.mover.u4s[0]^=0x201000;
}

void FlipFunctionBBBlack823() {
	configs[ 1]+=  162;
	configs[ 2]+=  486;
	configs[11]+=    6;
	configs[13]+=   18;
	configs[23]+=    6;
	configs[24]+=   18;
	configs[29]+=   51;
	bb.mover.u4s[0]^=0x201000;
}

void FlipFunctionBBWhite824() {
	configs[ 3]-= 2187;
	bb.mover.u4s[0]^=0x80000000;
	bb.empty.u4s[0]^=0x80000000;
}

void FlipFunctionBBBlack824() {
	configs[ 3]+= 2187;
	bb.mover.u4s[0]^=0x80000000;
	bb.empty.u4s[0]^=0x80000000;
}

void FlipFunctionBBWhite825() {
	configs[ 3]-= 3645;
	configs[15]-=    6;
	configs[25]-=   54;
	configs[29]-=   54;
	bb.mover.u4s[0]^=0xC0000000;
	bb.empty.u4s[0]^=0x80000000;
}

void FlipFunctionBBBlack825() {
	configs[ 3]+= 3645;
	configs[15]+=    6;
	configs[25]+=   54;
	configs[29]+=   54;
	bb.mover.u4s[0]^=0xC0000000;
	bb.empty.u4s[0]^=0x80000000;
}

void FlipFunctionBBWhite826() {
	configs[ 3]-= 4131;
	configs[14]-=   18;
	configs[15]-=    6;
	configs[24]-=   54;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[30]-=   54;
	bb.mover.u4s[0]^=0xE0000000;
	bb.empty.u4s[0]^=0x80000000;
}

void FlipFunctionBBBlack826() {
	configs[ 3]+= 4131;
	configs[14]+=   18;
	configs[15]+=    6;
	configs[24]+=   54;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[30]+=   54;
	bb.mover.u4s[0]^=0xE0000000;
	bb.empty.u4s[0]^=0x80000000;
}

void FlipFunctionBBWhite827() {
	configs[ 3]-= 4293;
	configs[13]-=   54;
	configs[14]-=   18;
	configs[15]-=    6;
	configs[23]-=   54;
	configs[24]-=   54;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[30]-=   54;
	configs[31]-=   54;
	bb.mover.u4s[0]^=0xF0000000;
	bb.empty.u4s[0]^=0x80000000;
}

void FlipFunctionBBBlack827() {
	configs[ 3]+= 4293;
	configs[13]+=   54;
	configs[14]+=   18;
	configs[15]+=    6;
	configs[23]+=   54;
	configs[24]+=   54;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[30]+=   54;
	configs[31]+=   54;
	bb.mover.u4s[0]^=0xF0000000;
	bb.empty.u4s[0]^=0x80000000;
}

void FlipFunctionBBWhite828() {
	configs[ 3]-= 4347;
	configs[12]-=   54;
	configs[13]-=   54;
	configs[14]-=   18;
	configs[15]-=    6;
	configs[22]-=   54;
	configs[23]-=   54;
	configs[24]-=   54;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[30]-=   54;
	configs[31]-=   54;
	configs[32]-=   54;
	bb.mover.u4s[0]^=0xF8000000;
	bb.empty.u4s[0]^=0x80000000;
}

void FlipFunctionBBBlack828() {
	configs[ 3]+= 4347;
	configs[12]+=   54;
	configs[13]+=   54;
	configs[14]+=   18;
	configs[15]+=    6;
	configs[22]+=   54;
	configs[23]+=   54;
	configs[24]+=   54;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[30]+=   54;
	configs[31]+=   54;
	configs[32]+=   54;
	bb.mover.u4s[0]^=0xF8000000;
	bb.empty.u4s[0]^=0x80000000;
}

void FlipFunctionBBWhite829() {
	configs[ 3]-= 4365;
	configs[11]-=   54;
	configs[12]-=   54;
	configs[13]-=   54;
	configs[14]-=   18;
	configs[15]-=    6;
	configs[21]-=   54;
	configs[22]-=   54;
	configs[23]-=   54;
	configs[24]-=   54;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[30]-=   54;
	configs[31]-=   54;
	configs[32]-=   54;
	configs[33]-=   18;
	bb.mover.u4s[0]^=0xFC000000;
	bb.empty.u4s[0]^=0x80000000;
}

void FlipFunctionBBBlack829() {
	configs[ 3]+= 4365;
	configs[11]+=   54;
	configs[12]+=   54;
	configs[13]+=   54;
	configs[14]+=   18;
	configs[15]+=    6;
	configs[21]+=   54;
	configs[22]+=   54;
	configs[23]+=   54;
	configs[24]+=   54;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[30]+=   54;
	configs[31]+=   54;
	configs[32]+=   54;
	configs[33]+=   18;
	bb.mover.u4s[0]^=0xFC000000;
	bb.empty.u4s[0]^=0x80000000;
}

void FlipFunctionBBWhite830() {
	configs[ 3]-= 4371;
	configs[10]-=   54;
	configs[11]-=   54;
	configs[12]-=   54;
	configs[13]-=   54;
	configs[14]-=   18;
	configs[15]-=    6;
	configs[20]-=   54;
	configs[21]-=   54;
	configs[22]-=   54;
	configs[23]-=   54;
	configs[24]-=   54;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[30]-=   54;
	configs[31]-=   54;
	configs[32]-=   54;
	configs[33]-=   18;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0xFE000000;
	bb.empty.u4s[0]^=0x80000000;
}

void FlipFunctionBBBlack830() {
	configs[ 3]+= 4371;
	configs[10]+=   54;
	configs[11]+=   54;
	configs[12]+=   54;
	configs[13]+=   54;
	configs[14]+=   18;
	configs[15]+=    6;
	configs[20]+=   54;
	configs[21]+=   54;
	configs[22]+=   54;
	configs[23]+=   54;
	configs[24]+=   54;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[30]+=   54;
	configs[31]+=   54;
	configs[32]+=   54;
	configs[33]+=   18;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0xFE000000;
	bb.empty.u4s[0]^=0x80000000;
}

void FlipFunctionBBWhite831() {
	configs[16]-=    1;
}

void FlipFunctionBBBlack831() {
	configs[16]+=    1;
}

void FlipFunctionBBWhite832() {
	configs[ 4]-= 1458;
	configs[16]-=    7;
	configs[25]-=  162;
	configs[30]-=  162;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBBlack832() {
	configs[ 4]+= 1458;
	configs[16]+=    7;
	configs[25]+=  162;
	configs[30]+=  162;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBWhite833() {
	configs[ 4]-= 1458;
	configs[ 5]-=  486;
	configs[16]-=   25;
	configs[24]-=  486;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[32]-=  486;
	bb.mover.u4s[1]^=0x2040;
}

void FlipFunctionBBBlack833() {
	configs[ 4]+= 1458;
	configs[ 5]+=  486;
	configs[16]+=   25;
	configs[24]+=  486;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[32]+=  486;
	bb.mover.u4s[1]^=0x2040;
}

void FlipFunctionBBWhite834() {
	configs[ 4]-= 1458;
	configs[ 5]-=  486;
	configs[ 6]-=  162;
	configs[16]-=   79;
	configs[23]-= 1458;
	configs[24]-=  486;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[32]-=  486;
	configs[34]-=  162;
	bb.mover.u4s[1]^=0x102040;
}

void FlipFunctionBBBlack834() {
	configs[ 4]+= 1458;
	configs[ 5]+=  486;
	configs[ 6]+=  162;
	configs[16]+=   79;
	configs[23]+= 1458;
	configs[24]+=  486;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[32]+=  486;
	configs[34]+=  162;
	bb.mover.u4s[1]^=0x102040;
}

void FlipFunctionBBWhite835() {
	configs[26]-=   27;
}

void FlipFunctionBBBlack835() {
	configs[26]+=   27;
}

void FlipFunctionBBWhite836() {
	configs[ 4]-= 4374;
	configs[17]-=    2;
	configs[26]-=  189;
	configs[29]-=  162;
	bb.mover.u4s[1]^=0x80;
}

void FlipFunctionBBBlack836() {
	configs[ 4]+= 4374;
	configs[17]+=    2;
	configs[26]+=  189;
	configs[29]+=  162;
	bb.mover.u4s[1]^=0x80;
}

void FlipFunctionBBWhite837() {
	configs[ 4]-= 4374;
	configs[ 5]-= 4374;
	configs[17]-=    2;
	configs[18]-=    2;
	configs[26]-=  675;
	configs[29]-=  162;
	configs[30]-=  486;
	bb.mover.u4s[1]^=0x8080;
}

void FlipFunctionBBBlack837() {
	configs[ 4]+= 4374;
	configs[ 5]+= 4374;
	configs[17]+=    2;
	configs[18]+=    2;
	configs[26]+=  675;
	configs[29]+=  162;
	configs[30]+=  486;
	bb.mover.u4s[1]^=0x8080;
}

void FlipFunctionBBWhite838() {
	configs[ 4]-= 4374;
	configs[ 5]-= 4374;
	configs[ 6]-= 4374;
	configs[17]-=    2;
	configs[18]-=    2;
	configs[26]-= 2133;
	configs[29]-=  162;
	configs[30]-=  486;
	configs[31]-= 1458;
	bb.mover.u4s[1]^=0x808080;
}

void FlipFunctionBBBlack838() {
	configs[ 4]+= 4374;
	configs[ 5]+= 4374;
	configs[ 6]+= 4374;
	configs[17]+=    2;
	configs[18]+=    2;
	configs[26]+= 2133;
	configs[29]+=  162;
	configs[30]+=  486;
	configs[31]+= 1458;
	bb.mover.u4s[1]^=0x808080;
}

void FlipFunctionBBWhite839() {
	configs[ 2]-= 4374;
	configs[15]-=    2;
	configs[26]-=   45;
	configs[27]-=   18;
	bb.mover.u4s[0]^=0x800000;
}

void FlipFunctionBBBlack839() {
	configs[ 2]+= 4374;
	configs[15]+=    2;
	configs[26]+=   45;
	configs[27]+=   18;
	bb.mover.u4s[0]^=0x800000;
}

void FlipFunctionBBWhite840() {
	configs[ 2]-= 4374;
	configs[ 4]-= 4374;
	configs[15]-=    2;
	configs[17]-=    2;
	configs[26]-=  207;
	configs[27]-=   18;
	configs[29]-=  162;
	bb.mover.u4s[0]^=0x800000;
	bb.mover.u4s[1]^=0x80;
}

void FlipFunctionBBBlack840() {
	configs[ 2]+= 4374;
	configs[ 4]+= 4374;
	configs[15]+=    2;
	configs[17]+=    2;
	configs[26]+=  207;
	configs[27]+=   18;
	configs[29]+=  162;
	bb.mover.u4s[0]^=0x800000;
	bb.mover.u4s[1]^=0x80;
}

void FlipFunctionBBWhite841() {
	configs[ 2]-= 4374;
	configs[ 4]-= 4374;
	configs[ 5]-= 4374;
	configs[15]-=    2;
	configs[17]-=    2;
	configs[18]-=    2;
	configs[26]-=  693;
	configs[27]-=   18;
	configs[29]-=  162;
	configs[30]-=  486;
	bb.mover.u4s[0]^=0x800000;
	bb.mover.u4s[1]^=0x8080;
}

void FlipFunctionBBBlack841() {
	configs[ 2]+= 4374;
	configs[ 4]+= 4374;
	configs[ 5]+= 4374;
	configs[15]+=    2;
	configs[17]+=    2;
	configs[18]+=    2;
	configs[26]+=  693;
	configs[27]+=   18;
	configs[29]+=  162;
	configs[30]+=  486;
	bb.mover.u4s[0]^=0x800000;
	bb.mover.u4s[1]^=0x8080;
}

void FlipFunctionBBWhite842() {
	configs[ 2]-= 4374;
	configs[ 4]-= 4374;
	configs[ 5]-= 4374;
	configs[ 6]-= 4374;
	configs[15]-=    2;
	configs[17]-=    2;
	configs[18]-=    2;
	configs[26]-= 2151;
	configs[27]-=   18;
	configs[29]-=  162;
	configs[30]-=  486;
	configs[31]-= 1458;
	bb.mover.u4s[0]^=0x800000;
	bb.mover.u4s[1]^=0x808080;
}

void FlipFunctionBBBlack842() {
	configs[ 2]+= 4374;
	configs[ 4]+= 4374;
	configs[ 5]+= 4374;
	configs[ 6]+= 4374;
	configs[15]+=    2;
	configs[17]+=    2;
	configs[18]+=    2;
	configs[26]+= 2151;
	configs[27]+=   18;
	configs[29]+=  162;
	configs[30]+=  486;
	configs[31]+= 1458;
	bb.mover.u4s[0]^=0x800000;
	bb.mover.u4s[1]^=0x808080;
}

void FlipFunctionBBWhite843() {
	configs[ 1]-= 4374;
	configs[ 2]-= 4374;
	configs[14]-=    2;
	configs[15]-=    2;
	configs[26]-=   51;
	configs[27]-=   18;
	bb.mover.u4s[0]^=0x808000;
}

void FlipFunctionBBBlack843() {
	configs[ 1]+= 4374;
	configs[ 2]+= 4374;
	configs[14]+=    2;
	configs[15]+=    2;
	configs[26]+=   51;
	configs[27]+=   18;
	bb.mover.u4s[0]^=0x808000;
}

void FlipFunctionBBWhite844() {
	configs[ 1]-= 4374;
	configs[ 2]-= 4374;
	configs[ 4]-= 4374;
	configs[14]-=    2;
	configs[15]-=    2;
	configs[17]-=    2;
	configs[26]-=  213;
	configs[27]-=   18;
	configs[29]-=  162;
	bb.mover.u4s[0]^=0x808000;
	bb.mover.u4s[1]^=0x80;
}

void FlipFunctionBBBlack844() {
	configs[ 1]+= 4374;
	configs[ 2]+= 4374;
	configs[ 4]+= 4374;
	configs[14]+=    2;
	configs[15]+=    2;
	configs[17]+=    2;
	configs[26]+=  213;
	configs[27]+=   18;
	configs[29]+=  162;
	bb.mover.u4s[0]^=0x808000;
	bb.mover.u4s[1]^=0x80;
}

void FlipFunctionBBWhite845() {
	configs[ 1]-= 4374;
	configs[ 2]-= 4374;
	configs[ 4]-= 4374;
	configs[ 5]-= 4374;
	configs[14]-=    2;
	configs[15]-=    2;
	configs[17]-=    2;
	configs[18]-=    2;
	configs[26]-=  699;
	configs[27]-=   18;
	configs[29]-=  162;
	configs[30]-=  486;
	bb.mover.u4s[0]^=0x808000;
	bb.mover.u4s[1]^=0x8080;
}

void FlipFunctionBBBlack845() {
	configs[ 1]+= 4374;
	configs[ 2]+= 4374;
	configs[ 4]+= 4374;
	configs[ 5]+= 4374;
	configs[14]+=    2;
	configs[15]+=    2;
	configs[17]+=    2;
	configs[18]+=    2;
	configs[26]+=  699;
	configs[27]+=   18;
	configs[29]+=  162;
	configs[30]+=  486;
	bb.mover.u4s[0]^=0x808000;
	bb.mover.u4s[1]^=0x8080;
}

void FlipFunctionBBWhite846() {
	configs[ 1]-= 4374;
	configs[ 2]-= 4374;
	configs[ 4]-= 4374;
	configs[ 5]-= 4374;
	configs[ 6]-= 4374;
	configs[14]-=    2;
	configs[15]-=    2;
	configs[17]-=    2;
	configs[18]-=    2;
	configs[26]-= 2157;
	configs[27]-=   18;
	configs[29]-=  162;
	configs[30]-=  486;
	configs[31]-= 1458;
	bb.mover.u4s[0]^=0x808000;
	bb.mover.u4s[1]^=0x808080;
}

void FlipFunctionBBBlack846() {
	configs[ 1]+= 4374;
	configs[ 2]+= 4374;
	configs[ 4]+= 4374;
	configs[ 5]+= 4374;
	configs[ 6]+= 4374;
	configs[14]+=    2;
	configs[15]+=    2;
	configs[17]+=    2;
	configs[18]+=    2;
	configs[26]+= 2157;
	configs[27]+=   18;
	configs[29]+=  162;
	configs[30]+=  486;
	configs[31]+= 1458;
	bb.mover.u4s[0]^=0x808000;
	bb.mover.u4s[1]^=0x808080;
}

void FlipFunctionBBWhite847() {
	configs[28]-=   27;
}

void FlipFunctionBBBlack847() {
	configs[28]+=   27;
}

void FlipFunctionBBWhite848() {
	configs[ 2]-= 1458;
	configs[14]-=    6;
	configs[25]-=   18;
	configs[28]-=   45;
	bb.mover.u4s[0]^=0x400000;
}

void FlipFunctionBBBlack848() {
	configs[ 2]+= 1458;
	configs[14]+=    6;
	configs[25]+=   18;
	configs[28]+=   45;
	bb.mover.u4s[0]^=0x400000;
}

void FlipFunctionBBWhite849() {
	configs[ 1]-=  486;
	configs[ 2]-= 1458;
	configs[12]-=    6;
	configs[14]-=    6;
	configs[24]-=    6;
	configs[25]-=   18;
	configs[28]-=   51;
	bb.mover.u4s[0]^=0x402000;
}

void FlipFunctionBBBlack849() {
	configs[ 1]+=  486;
	configs[ 2]+= 1458;
	configs[12]+=    6;
	configs[14]+=    6;
	configs[24]+=    6;
	configs[25]+=   18;
	configs[28]+=   51;
	bb.mover.u4s[0]^=0x402000;
}

void FlipFunctionBBWhite850() {
	configs[ 4]-=    1;
	bb.mover.u4s[1]^=0x1;
	bb.empty.u4s[1]^=0x1;
}

void FlipFunctionBBBlack850() {
	configs[ 4]+=    1;
	bb.mover.u4s[1]^=0x1;
	bb.empty.u4s[1]^=0x1;
}

void FlipFunctionBBWhite851() {
	configs[ 4]-=    7;
	configs[11]-=  162;
	configs[20]-=  162;
	configs[35]-=    6;
	bb.mover.u4s[1]^=0x3;
	bb.empty.u4s[1]^=0x1;
}

void FlipFunctionBBBlack851() {
	configs[ 4]+=    7;
	configs[11]+=  162;
	configs[20]+=  162;
	configs[35]+=    6;
	bb.mover.u4s[1]^=0x3;
	bb.empty.u4s[1]^=0x1;
}

void FlipFunctionBBWhite852() {
	configs[ 4]-=   25;
	configs[11]-=  162;
	configs[12]-=  162;
	configs[20]-=  162;
	configs[21]-=  162;
	configs[34]-=   18;
	configs[35]-=    6;
	bb.mover.u4s[1]^=0x7;
	bb.empty.u4s[1]^=0x1;
}

void FlipFunctionBBBlack852() {
	configs[ 4]+=   25;
	configs[11]+=  162;
	configs[12]+=  162;
	configs[20]+=  162;
	configs[21]+=  162;
	configs[34]+=   18;
	configs[35]+=    6;
	bb.mover.u4s[1]^=0x7;
	bb.empty.u4s[1]^=0x1;
}

void FlipFunctionBBWhite853() {
	configs[ 4]-=   79;
	configs[11]-=  162;
	configs[12]-=  162;
	configs[13]-=  162;
	configs[20]-=  162;
	configs[21]-=  162;
	configs[22]-=  162;
	configs[33]-=   54;
	configs[34]-=   18;
	configs[35]-=    6;
	bb.mover.u4s[1]^=0xF;
	bb.empty.u4s[1]^=0x1;
}

void FlipFunctionBBBlack853() {
	configs[ 4]+=   79;
	configs[11]+=  162;
	configs[12]+=  162;
	configs[13]+=  162;
	configs[20]+=  162;
	configs[21]+=  162;
	configs[22]+=  162;
	configs[33]+=   54;
	configs[34]+=   18;
	configs[35]+=    6;
	bb.mover.u4s[1]^=0xF;
	bb.empty.u4s[1]^=0x1;
}

void FlipFunctionBBWhite854() {
	configs[ 4]-=  241;
	configs[11]-=  162;
	configs[12]-=  162;
	configs[13]-=  162;
	configs[14]-=   54;
	configs[20]-=  162;
	configs[21]-=  162;
	configs[22]-=  162;
	configs[23]-=  162;
	configs[32]-=  162;
	configs[33]-=   54;
	configs[34]-=   18;
	configs[35]-=    6;
	bb.mover.u4s[1]^=0x1F;
	bb.empty.u4s[1]^=0x1;
}

void FlipFunctionBBBlack854() {
	configs[ 4]+=  241;
	configs[11]+=  162;
	configs[12]+=  162;
	configs[13]+=  162;
	configs[14]+=   54;
	configs[20]+=  162;
	configs[21]+=  162;
	configs[22]+=  162;
	configs[23]+=  162;
	configs[32]+=  162;
	configs[33]+=   54;
	configs[34]+=   18;
	configs[35]+=    6;
	bb.mover.u4s[1]^=0x1F;
	bb.empty.u4s[1]^=0x1;
}

void FlipFunctionBBWhite855() {
	configs[ 4]-=  727;
	configs[11]-=  162;
	configs[12]-=  162;
	configs[13]-=  162;
	configs[14]-=   54;
	configs[15]-=   18;
	configs[20]-=  162;
	configs[21]-=  162;
	configs[22]-=  162;
	configs[23]-=  162;
	configs[24]-=  162;
	configs[31]-=  162;
	configs[32]-=  162;
	configs[33]-=   54;
	configs[34]-=   18;
	configs[35]-=    6;
	bb.mover.u4s[1]^=0x3F;
	bb.empty.u4s[1]^=0x1;
}

void FlipFunctionBBBlack855() {
	configs[ 4]+=  727;
	configs[11]+=  162;
	configs[12]+=  162;
	configs[13]+=  162;
	configs[14]+=   54;
	configs[15]+=   18;
	configs[20]+=  162;
	configs[21]+=  162;
	configs[22]+=  162;
	configs[23]+=  162;
	configs[24]+=  162;
	configs[31]+=  162;
	configs[32]+=  162;
	configs[33]+=   54;
	configs[34]+=   18;
	configs[35]+=    6;
	bb.mover.u4s[1]^=0x3F;
	bb.empty.u4s[1]^=0x1;
}

void FlipFunctionBBWhite856() {
	configs[ 4]-= 2185;
	configs[11]-=  162;
	configs[12]-=  162;
	configs[13]-=  162;
	configs[14]-=   54;
	configs[15]-=   18;
	configs[16]-=    6;
	configs[20]-=  162;
	configs[21]-=  162;
	configs[22]-=  162;
	configs[23]-=  162;
	configs[24]-=  162;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[31]-=  162;
	configs[32]-=  162;
	configs[33]-=   54;
	configs[34]-=   18;
	configs[35]-=    6;
	bb.mover.u4s[1]^=0x7F;
	bb.empty.u4s[1]^=0x1;
}

void FlipFunctionBBBlack856() {
	configs[ 4]+= 2185;
	configs[11]+=  162;
	configs[12]+=  162;
	configs[13]+=  162;
	configs[14]+=   54;
	configs[15]+=   18;
	configs[16]+=    6;
	configs[20]+=  162;
	configs[21]+=  162;
	configs[22]+=  162;
	configs[23]+=  162;
	configs[24]+=  162;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[31]+=  162;
	configs[32]+=  162;
	configs[33]+=   54;
	configs[34]+=   18;
	configs[35]+=    6;
	bb.mover.u4s[1]^=0x7F;
	bb.empty.u4s[1]^=0x1;
}

void FlipFunctionBBWhite857() {
	configs[10]-=   81;
}

void FlipFunctionBBBlack857() {
	configs[10]+=   81;
}

void FlipFunctionBBWhite858() {
	configs[ 3]-=    6;
	configs[10]-=  135;
	configs[20]-=   54;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x2000000;
}

void FlipFunctionBBBlack858() {
	configs[ 3]+=    6;
	configs[10]+=  135;
	configs[20]+=   54;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x2000000;
}

void FlipFunctionBBWhite859() {
	configs[ 2]-=   18;
	configs[ 3]-=    6;
	configs[10]-=  153;
	configs[20]-=   54;
	configs[21]-=   18;
	configs[32]-=   18;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x2040000;
}

void FlipFunctionBBBlack859() {
	configs[ 2]+=   18;
	configs[ 3]+=    6;
	configs[10]+=  153;
	configs[20]+=   54;
	configs[21]+=   18;
	configs[32]+=   18;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x2040000;
}

void FlipFunctionBBWhite860() {
	configs[ 1]-=   54;
	configs[ 2]-=   18;
	configs[ 3]-=    6;
	configs[10]-=  159;
	configs[20]-=   54;
	configs[21]-=   18;
	configs[22]-=    6;
	configs[30]-=    6;
	configs[32]-=   18;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x2040800;
}

void FlipFunctionBBBlack860() {
	configs[ 1]+=   54;
	configs[ 2]+=   18;
	configs[ 3]+=    6;
	configs[10]+=  159;
	configs[20]+=   54;
	configs[21]+=   18;
	configs[22]+=    6;
	configs[30]+=    6;
	configs[32]+=   18;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x2040800;
}

void FlipFunctionBBWhite861() {
	configs[19]-=   81;
}

void FlipFunctionBBBlack861() {
	configs[19]+=   81;
}

void FlipFunctionBBWhite862() {
	configs[ 5]-=    2;
	configs[11]-=  486;
	configs[19]-=  567;
	configs[37]-=    2;
	bb.mover.u4s[1]^=0x100;
}

void FlipFunctionBBBlack862() {
	configs[ 5]+=    2;
	configs[11]+=  486;
	configs[19]+=  567;
	configs[37]+=    2;
	bb.mover.u4s[1]^=0x100;
}

void FlipFunctionBBWhite863() {
	configs[ 5]-=    2;
	configs[ 6]-=    2;
	configs[11]-=  486;
	configs[12]-= 1458;
	configs[19]-= 2025;
	configs[37]-=    2;
	bb.mover.u4s[1]^=0x10100;
}

void FlipFunctionBBBlack863() {
	configs[ 5]+=    2;
	configs[ 6]+=    2;
	configs[11]+=  486;
	configs[12]+= 1458;
	configs[19]+= 2025;
	configs[37]+=    2;
	bb.mover.u4s[1]^=0x10100;
}

void FlipFunctionBBWhite864() {
	configs[ 3]-=    2;
	configs[ 9]-=   54;
	configs[19]-=  135;
	configs[35]-=    2;
	bb.mover.u4s[0]^=0x1000000;
}

void FlipFunctionBBBlack864() {
	configs[ 3]+=    2;
	configs[ 9]+=   54;
	configs[19]+=  135;
	configs[35]+=    2;
	bb.mover.u4s[0]^=0x1000000;
}

void FlipFunctionBBWhite865() {
	configs[ 3]-=    2;
	configs[ 5]-=    2;
	configs[ 9]-=   54;
	configs[11]-=  486;
	configs[19]-=  621;
	configs[35]-=    2;
	configs[37]-=    2;
	bb.mover.u4s[0]^=0x1000000;
	bb.mover.u4s[1]^=0x100;
}

void FlipFunctionBBBlack865() {
	configs[ 3]+=    2;
	configs[ 5]+=    2;
	configs[ 9]+=   54;
	configs[11]+=  486;
	configs[19]+=  621;
	configs[35]+=    2;
	configs[37]+=    2;
	bb.mover.u4s[0]^=0x1000000;
	bb.mover.u4s[1]^=0x100;
}

void FlipFunctionBBWhite866() {
	configs[ 3]-=    2;
	configs[ 5]-=    2;
	configs[ 6]-=    2;
	configs[ 9]-=   54;
	configs[11]-=  486;
	configs[12]-= 1458;
	configs[19]-= 2079;
	configs[35]-=    2;
	configs[37]-=    2;
	bb.mover.u4s[0]^=0x1000000;
	bb.mover.u4s[1]^=0x10100;
}

void FlipFunctionBBBlack866() {
	configs[ 3]+=    2;
	configs[ 5]+=    2;
	configs[ 6]+=    2;
	configs[ 9]+=   54;
	configs[11]+=  486;
	configs[12]+= 1458;
	configs[19]+= 2079;
	configs[35]+=    2;
	configs[37]+=    2;
	bb.mover.u4s[0]^=0x1000000;
	bb.mover.u4s[1]^=0x10100;
}

void FlipFunctionBBWhite867() {
	configs[ 2]-=    2;
	configs[ 3]-=    2;
	configs[ 8]-=   18;
	configs[ 9]-=   54;
	configs[19]-=  153;
	configs[34]-=    2;
	configs[35]-=    2;
	bb.mover.u4s[0]^=0x1010000;
}

void FlipFunctionBBBlack867() {
	configs[ 2]+=    2;
	configs[ 3]+=    2;
	configs[ 8]+=   18;
	configs[ 9]+=   54;
	configs[19]+=  153;
	configs[34]+=    2;
	configs[35]+=    2;
	bb.mover.u4s[0]^=0x1010000;
}

void FlipFunctionBBWhite868() {
	configs[ 2]-=    2;
	configs[ 3]-=    2;
	configs[ 5]-=    2;
	configs[ 8]-=   18;
	configs[ 9]-=   54;
	configs[11]-=  486;
	configs[19]-=  639;
	configs[34]-=    2;
	configs[35]-=    2;
	configs[37]-=    2;
	bb.mover.u4s[0]^=0x1010000;
	bb.mover.u4s[1]^=0x100;
}

void FlipFunctionBBBlack868() {
	configs[ 2]+=    2;
	configs[ 3]+=    2;
	configs[ 5]+=    2;
	configs[ 8]+=   18;
	configs[ 9]+=   54;
	configs[11]+=  486;
	configs[19]+=  639;
	configs[34]+=    2;
	configs[35]+=    2;
	configs[37]+=    2;
	bb.mover.u4s[0]^=0x1010000;
	bb.mover.u4s[1]^=0x100;
}

void FlipFunctionBBWhite869() {
	configs[ 2]-=    2;
	configs[ 3]-=    2;
	configs[ 5]-=    2;
	configs[ 6]-=    2;
	configs[ 8]-=   18;
	configs[ 9]-=   54;
	configs[11]-=  486;
	configs[12]-= 1458;
	configs[19]-= 2097;
	configs[34]-=    2;
	configs[35]-=    2;
	configs[37]-=    2;
	bb.mover.u4s[0]^=0x1010000;
	bb.mover.u4s[1]^=0x10100;
}

void FlipFunctionBBBlack869() {
	configs[ 2]+=    2;
	configs[ 3]+=    2;
	configs[ 5]+=    2;
	configs[ 6]+=    2;
	configs[ 8]+=   18;
	configs[ 9]+=   54;
	configs[11]+=  486;
	configs[12]+= 1458;
	configs[19]+= 2097;
	configs[34]+=    2;
	configs[35]+=    2;
	configs[37]+=    2;
	bb.mover.u4s[0]^=0x1010000;
	bb.mover.u4s[1]^=0x10100;
}

void FlipFunctionBBWhite870() {
	configs[ 1]-=    2;
	configs[ 2]-=    2;
	configs[ 3]-=    2;
	configs[ 8]-=   18;
	configs[ 9]-=   54;
	configs[19]-=  159;
	configs[33]-=    2;
	configs[34]-=    2;
	configs[35]-=    2;
	bb.mover.u4s[0]^=0x1010100;
}

void FlipFunctionBBBlack870() {
	configs[ 1]+=    2;
	configs[ 2]+=    2;
	configs[ 3]+=    2;
	configs[ 8]+=   18;
	configs[ 9]+=   54;
	configs[19]+=  159;
	configs[33]+=    2;
	configs[34]+=    2;
	configs[35]+=    2;
	bb.mover.u4s[0]^=0x1010100;
}

void FlipFunctionBBWhite871() {
	configs[ 1]-=    2;
	configs[ 2]-=    2;
	configs[ 3]-=    2;
	configs[ 5]-=    2;
	configs[ 8]-=   18;
	configs[ 9]-=   54;
	configs[11]-=  486;
	configs[19]-=  645;
	configs[33]-=    2;
	configs[34]-=    2;
	configs[35]-=    2;
	configs[37]-=    2;
	bb.mover.u4s[0]^=0x1010100;
	bb.mover.u4s[1]^=0x100;
}

void FlipFunctionBBBlack871() {
	configs[ 1]+=    2;
	configs[ 2]+=    2;
	configs[ 3]+=    2;
	configs[ 5]+=    2;
	configs[ 8]+=   18;
	configs[ 9]+=   54;
	configs[11]+=  486;
	configs[19]+=  645;
	configs[33]+=    2;
	configs[34]+=    2;
	configs[35]+=    2;
	configs[37]+=    2;
	bb.mover.u4s[0]^=0x1010100;
	bb.mover.u4s[1]^=0x100;
}

void FlipFunctionBBWhite872() {
	configs[ 1]-=    2;
	configs[ 2]-=    2;
	configs[ 3]-=    2;
	configs[ 5]-=    2;
	configs[ 6]-=    2;
	configs[ 8]-=   18;
	configs[ 9]-=   54;
	configs[11]-=  486;
	configs[12]-= 1458;
	configs[19]-= 2103;
	configs[33]-=    2;
	configs[34]-=    2;
	configs[35]-=    2;
	configs[37]-=    2;
	bb.mover.u4s[0]^=0x1010100;
	bb.mover.u4s[1]^=0x10100;
}

void FlipFunctionBBBlack872() {
	configs[ 1]+=    2;
	configs[ 2]+=    2;
	configs[ 3]+=    2;
	configs[ 5]+=    2;
	configs[ 6]+=    2;
	configs[ 8]+=   18;
	configs[ 9]+=   54;
	configs[11]+=  486;
	configs[12]+= 1458;
	configs[19]+= 2103;
	configs[33]+=    2;
	configs[34]+=    2;
	configs[35]+=    2;
	configs[37]+=    2;
	bb.mover.u4s[0]^=0x1010100;
	bb.mover.u4s[1]^=0x10100;
}

void FlipFunctionBBWhite873() {
	configs[36]-=    1;
}

void FlipFunctionBBBlack873() {
	configs[36]+=    1;
}

void FlipFunctionBBWhite874() {
	configs[ 5]-=    6;
	configs[12]-=  486;
	configs[20]-=  486;
	configs[36]-=    7;
	bb.mover.u4s[1]^=0x200;
}

void FlipFunctionBBBlack874() {
	configs[ 5]+=    6;
	configs[12]+=  486;
	configs[20]+=  486;
	configs[36]+=    7;
	bb.mover.u4s[1]^=0x200;
}

void FlipFunctionBBWhite875() {
	configs[ 5]-=    6;
	configs[ 6]-=   18;
	configs[12]-=  486;
	configs[14]-=  486;
	configs[20]-=  486;
	configs[21]-= 1458;
	configs[36]-=   25;
	bb.mover.u4s[1]^=0x40200;
}

void FlipFunctionBBBlack875() {
	configs[ 5]+=    6;
	configs[ 6]+=   18;
	configs[12]+=  486;
	configs[14]+=  486;
	configs[20]+=  486;
	configs[21]+= 1458;
	configs[36]+=   25;
	bb.mover.u4s[1]^=0x40200;
}

void FlipFunctionBBWhite876() {
	configs[ 4]-=    3;
	bb.mover.u4s[1]^=0x2;
	bb.empty.u4s[1]^=0x2;
}

void FlipFunctionBBBlack876() {
	configs[ 4]+=    3;
	bb.mover.u4s[1]^=0x2;
	bb.empty.u4s[1]^=0x2;
}

void FlipFunctionBBWhite877() {
	configs[ 4]-=   21;
	configs[12]-=  162;
	configs[21]-=  162;
	configs[34]-=   18;
	bb.mover.u4s[1]^=0x6;
	bb.empty.u4s[1]^=0x2;
}

void FlipFunctionBBBlack877() {
	configs[ 4]+=   21;
	configs[12]+=  162;
	configs[21]+=  162;
	configs[34]+=   18;
	bb.mover.u4s[1]^=0x6;
	bb.empty.u4s[1]^=0x2;
}

void FlipFunctionBBWhite878() {
	configs[ 4]-=   75;
	configs[12]-=  162;
	configs[13]-=  162;
	configs[21]-=  162;
	configs[22]-=  162;
	configs[33]-=   54;
	configs[34]-=   18;
	bb.mover.u4s[1]^=0xE;
	bb.empty.u4s[1]^=0x2;
}

void FlipFunctionBBBlack878() {
	configs[ 4]+=   75;
	configs[12]+=  162;
	configs[13]+=  162;
	configs[21]+=  162;
	configs[22]+=  162;
	configs[33]+=   54;
	configs[34]+=   18;
	bb.mover.u4s[1]^=0xE;
	bb.empty.u4s[1]^=0x2;
}

void FlipFunctionBBWhite879() {
	configs[ 4]-=  237;
	configs[12]-=  162;
	configs[13]-=  162;
	configs[14]-=   54;
	configs[21]-=  162;
	configs[22]-=  162;
	configs[23]-=  162;
	configs[32]-=  162;
	configs[33]-=   54;
	configs[34]-=   18;
	bb.mover.u4s[1]^=0x1E;
	bb.empty.u4s[1]^=0x2;
}

void FlipFunctionBBBlack879() {
	configs[ 4]+=  237;
	configs[12]+=  162;
	configs[13]+=  162;
	configs[14]+=   54;
	configs[21]+=  162;
	configs[22]+=  162;
	configs[23]+=  162;
	configs[32]+=  162;
	configs[33]+=   54;
	configs[34]+=   18;
	bb.mover.u4s[1]^=0x1E;
	bb.empty.u4s[1]^=0x2;
}

void FlipFunctionBBWhite880() {
	configs[ 4]-=  723;
	configs[12]-=  162;
	configs[13]-=  162;
	configs[14]-=   54;
	configs[15]-=   18;
	configs[21]-=  162;
	configs[22]-=  162;
	configs[23]-=  162;
	configs[24]-=  162;
	configs[31]-=  162;
	configs[32]-=  162;
	configs[33]-=   54;
	configs[34]-=   18;
	bb.mover.u4s[1]^=0x3E;
	bb.empty.u4s[1]^=0x2;
}

void FlipFunctionBBBlack880() {
	configs[ 4]+=  723;
	configs[12]+=  162;
	configs[13]+=  162;
	configs[14]+=   54;
	configs[15]+=   18;
	configs[21]+=  162;
	configs[22]+=  162;
	configs[23]+=  162;
	configs[24]+=  162;
	configs[31]+=  162;
	configs[32]+=  162;
	configs[33]+=   54;
	configs[34]+=   18;
	bb.mover.u4s[1]^=0x3E;
	bb.empty.u4s[1]^=0x2;
}

void FlipFunctionBBWhite881() {
	configs[ 4]-= 2181;
	configs[12]-=  162;
	configs[13]-=  162;
	configs[14]-=   54;
	configs[15]-=   18;
	configs[16]-=    6;
	configs[21]-=  162;
	configs[22]-=  162;
	configs[23]-=  162;
	configs[24]-=  162;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[31]-=  162;
	configs[32]-=  162;
	configs[33]-=   54;
	configs[34]-=   18;
	bb.mover.u4s[1]^=0x7E;
	bb.empty.u4s[1]^=0x2;
}

void FlipFunctionBBBlack881() {
	configs[ 4]+= 2181;
	configs[12]+=  162;
	configs[13]+=  162;
	configs[14]+=   54;
	configs[15]+=   18;
	configs[16]+=    6;
	configs[21]+=  162;
	configs[22]+=  162;
	configs[23]+=  162;
	configs[24]+=  162;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[31]+=  162;
	configs[32]+=  162;
	configs[33]+=   54;
	configs[34]+=   18;
	bb.mover.u4s[1]^=0x7E;
	bb.empty.u4s[1]^=0x2;
}

void FlipFunctionBBWhite882() {
	configs[11]-=   81;
}

void FlipFunctionBBBlack882() {
	configs[11]+=   81;
}

void FlipFunctionBBWhite883() {
	configs[ 3]-=   18;
	configs[11]-=  135;
	configs[21]-=   54;
	configs[33]-=   18;
	bb.mover.u4s[0]^=0x4000000;
}

void FlipFunctionBBBlack883() {
	configs[ 3]+=   18;
	configs[11]+=  135;
	configs[21]+=   54;
	configs[33]+=   18;
	bb.mover.u4s[0]^=0x4000000;
}

void FlipFunctionBBWhite884() {
	configs[ 2]-=   54;
	configs[ 3]-=   18;
	configs[11]-=  153;
	configs[21]-=   54;
	configs[22]-=   18;
	configs[31]-=   18;
	configs[33]-=   18;
	bb.mover.u4s[0]^=0x4080000;
}

void FlipFunctionBBBlack884() {
	configs[ 2]+=   54;
	configs[ 3]+=   18;
	configs[11]+=  153;
	configs[21]+=   54;
	configs[22]+=   18;
	configs[31]+=   18;
	configs[33]+=   18;
	bb.mover.u4s[0]^=0x4080000;
}

void FlipFunctionBBWhite885() {
	configs[ 1]-=  162;
	configs[ 2]-=   54;
	configs[ 3]-=   18;
	configs[11]-=  159;
	configs[21]-=   54;
	configs[22]-=   18;
	configs[23]-=    6;
	configs[29]-=    6;
	configs[31]-=   18;
	configs[33]-=   18;
	bb.mover.u4s[0]^=0x4081000;
}

void FlipFunctionBBBlack885() {
	configs[ 1]+=  162;
	configs[ 2]+=   54;
	configs[ 3]+=   18;
	configs[11]+=  159;
	configs[21]+=   54;
	configs[22]+=   18;
	configs[23]+=    6;
	configs[29]+=    6;
	configs[31]+=   18;
	configs[33]+=   18;
	bb.mover.u4s[0]^=0x4081000;
}

void FlipFunctionBBWhite886() {
	configs[20]-=   81;
}

void FlipFunctionBBBlack886() {
	configs[20]+=   81;
}

void FlipFunctionBBWhite887() {
	configs[ 5]-=    6;
	configs[12]-=  486;
	configs[20]-=  567;
	configs[36]-=    6;
	bb.mover.u4s[1]^=0x200;
}

void FlipFunctionBBBlack887() {
	configs[ 5]+=    6;
	configs[12]+=  486;
	configs[20]+=  567;
	configs[36]+=    6;
	bb.mover.u4s[1]^=0x200;
}

void FlipFunctionBBWhite888() {
	configs[ 5]-=    6;
	configs[ 6]-=    6;
	configs[12]-=  486;
	configs[13]-= 1458;
	configs[20]-= 2025;
	configs[36]-=    6;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x20200;
}

void FlipFunctionBBBlack888() {
	configs[ 5]+=    6;
	configs[ 6]+=    6;
	configs[12]+=  486;
	configs[13]+= 1458;
	configs[20]+= 2025;
	configs[36]+=    6;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x20200;
}

void FlipFunctionBBWhite889() {
	configs[ 3]-=    6;
	configs[10]-=   54;
	configs[20]-=  135;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x2000000;
}

void FlipFunctionBBBlack889() {
	configs[ 3]+=    6;
	configs[10]+=   54;
	configs[20]+=  135;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x2000000;
}

void FlipFunctionBBWhite890() {
	configs[ 3]-=    6;
	configs[ 5]-=    6;
	configs[10]-=   54;
	configs[12]-=  486;
	configs[20]-=  621;
	configs[34]-=    6;
	configs[36]-=    6;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x200;
}

void FlipFunctionBBBlack890() {
	configs[ 3]+=    6;
	configs[ 5]+=    6;
	configs[10]+=   54;
	configs[12]+=  486;
	configs[20]+=  621;
	configs[34]+=    6;
	configs[36]+=    6;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x200;
}

void FlipFunctionBBWhite891() {
	configs[ 3]-=    6;
	configs[ 5]-=    6;
	configs[ 6]-=    6;
	configs[10]-=   54;
	configs[12]-=  486;
	configs[13]-= 1458;
	configs[20]-= 2079;
	configs[34]-=    6;
	configs[36]-=    6;
	configs[37]-=    6;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x20200;
}

void FlipFunctionBBBlack891() {
	configs[ 3]+=    6;
	configs[ 5]+=    6;
	configs[ 6]+=    6;
	configs[10]+=   54;
	configs[12]+=  486;
	configs[13]+= 1458;
	configs[20]+= 2079;
	configs[34]+=    6;
	configs[36]+=    6;
	configs[37]+=    6;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x20200;
}

void FlipFunctionBBWhite892() {
	configs[ 2]-=    6;
	configs[ 3]-=    6;
	configs[ 9]-=   18;
	configs[10]-=   54;
	configs[20]-=  153;
	configs[33]-=    6;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x2020000;
}

void FlipFunctionBBBlack892() {
	configs[ 2]+=    6;
	configs[ 3]+=    6;
	configs[ 9]+=   18;
	configs[10]+=   54;
	configs[20]+=  153;
	configs[33]+=    6;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x2020000;
}

void FlipFunctionBBWhite893() {
	configs[ 2]-=    6;
	configs[ 3]-=    6;
	configs[ 5]-=    6;
	configs[ 9]-=   18;
	configs[10]-=   54;
	configs[12]-=  486;
	configs[20]-=  639;
	configs[33]-=    6;
	configs[34]-=    6;
	configs[36]-=    6;
	bb.mover.u4s[0]^=0x2020000;
	bb.mover.u4s[1]^=0x200;
}

void FlipFunctionBBBlack893() {
	configs[ 2]+=    6;
	configs[ 3]+=    6;
	configs[ 5]+=    6;
	configs[ 9]+=   18;
	configs[10]+=   54;
	configs[12]+=  486;
	configs[20]+=  639;
	configs[33]+=    6;
	configs[34]+=    6;
	configs[36]+=    6;
	bb.mover.u4s[0]^=0x2020000;
	bb.mover.u4s[1]^=0x200;
}

void FlipFunctionBBWhite894() {
	configs[ 2]-=    6;
	configs[ 3]-=    6;
	configs[ 5]-=    6;
	configs[ 6]-=    6;
	configs[ 9]-=   18;
	configs[10]-=   54;
	configs[12]-=  486;
	configs[13]-= 1458;
	configs[20]-= 2097;
	configs[33]-=    6;
	configs[34]-=    6;
	configs[36]-=    6;
	configs[37]-=    6;
	bb.mover.u4s[0]^=0x2020000;
	bb.mover.u4s[1]^=0x20200;
}

void FlipFunctionBBBlack894() {
	configs[ 2]+=    6;
	configs[ 3]+=    6;
	configs[ 5]+=    6;
	configs[ 6]+=    6;
	configs[ 9]+=   18;
	configs[10]+=   54;
	configs[12]+=  486;
	configs[13]+= 1458;
	configs[20]+= 2097;
	configs[33]+=    6;
	configs[34]+=    6;
	configs[36]+=    6;
	configs[37]+=    6;
	bb.mover.u4s[0]^=0x2020000;
	bb.mover.u4s[1]^=0x20200;
}

void FlipFunctionBBWhite895() {
	configs[ 1]-=    6;
	configs[ 2]-=    6;
	configs[ 3]-=    6;
	configs[ 8]-=    6;
	configs[ 9]-=   18;
	configs[10]-=   54;
	configs[20]-=  159;
	configs[32]-=    6;
	configs[33]-=    6;
	configs[34]-=    6;
	bb.mover.u4s[0]^=0x2020200;
}

void FlipFunctionBBBlack895() {
	configs[ 1]+=    6;
	configs[ 2]+=    6;
	configs[ 3]+=    6;
	configs[ 8]+=    6;
	configs[ 9]+=   18;
	configs[10]+=   54;
	configs[20]+=  159;
	configs[32]+=    6;
	configs[33]+=    6;
	configs[34]+=    6;
	bb.mover.u4s[0]^=0x2020200;
}

void FlipFunctionBBWhite896() {
	configs[ 1]-=    6;
	configs[ 2]-=    6;
	configs[ 3]-=    6;
	configs[ 5]-=    6;
	configs[ 8]-=    6;
	configs[ 9]-=   18;
	configs[10]-=   54;
	configs[12]-=  486;
	configs[20]-=  645;
	configs[32]-=    6;
	configs[33]-=    6;
	configs[34]-=    6;
	configs[36]-=    6;
	bb.mover.u4s[0]^=0x2020200;
	bb.mover.u4s[1]^=0x200;
}

void FlipFunctionBBBlack896() {
	configs[ 1]+=    6;
	configs[ 2]+=    6;
	configs[ 3]+=    6;
	configs[ 5]+=    6;
	configs[ 8]+=    6;
	configs[ 9]+=   18;
	configs[10]+=   54;
	configs[12]+=  486;
	configs[20]+=  645;
	configs[32]+=    6;
	configs[33]+=    6;
	configs[34]+=    6;
	configs[36]+=    6;
	bb.mover.u4s[0]^=0x2020200;
	bb.mover.u4s[1]^=0x200;
}

void FlipFunctionBBWhite897() {
	configs[ 1]-=    6;
	configs[ 2]-=    6;
	configs[ 3]-=    6;
	configs[ 5]-=    6;
	configs[ 6]-=    6;
	configs[ 8]-=    6;
	configs[ 9]-=   18;
	configs[10]-=   54;
	configs[12]-=  486;
	configs[13]-= 1458;
	configs[20]-= 2103;
	configs[32]-=    6;
	configs[33]-=    6;
	configs[34]-=    6;
	configs[36]-=    6;
	configs[37]-=    6;
	bb.mover.u4s[0]^=0x2020200;
	bb.mover.u4s[1]^=0x20200;
}

void FlipFunctionBBBlack897() {
	configs[ 1]+=    6;
	configs[ 2]+=    6;
	configs[ 3]+=    6;
	configs[ 5]+=    6;
	configs[ 6]+=    6;
	configs[ 8]+=    6;
	configs[ 9]+=   18;
	configs[10]+=   54;
	configs[12]+=  486;
	configs[13]+= 1458;
	configs[20]+= 2103;
	configs[32]+=    6;
	configs[33]+=    6;
	configs[34]+=    6;
	configs[36]+=    6;
	configs[37]+=    6;
	bb.mover.u4s[0]^=0x2020200;
	bb.mover.u4s[1]^=0x20200;
}

void FlipFunctionBBWhite898() {
	configs[35]-=    3;
}

void FlipFunctionBBBlack898() {
	configs[35]+=    3;
}

void FlipFunctionBBWhite899() {
	configs[ 5]-=   18;
	configs[13]-=  486;
	configs[21]-=  486;
	configs[35]-=   21;
	bb.mover.u4s[1]^=0x400;
}

void FlipFunctionBBBlack899() {
	configs[ 5]+=   18;
	configs[13]+=  486;
	configs[21]+=  486;
	configs[35]+=   21;
	bb.mover.u4s[1]^=0x400;
}

void FlipFunctionBBWhite900() {
	configs[ 5]-=   18;
	configs[ 6]-=   54;
	configs[13]-=  486;
	configs[15]-=  162;
	configs[21]-=  486;
	configs[22]-= 1458;
	configs[35]-=   75;
	bb.mover.u4s[1]^=0x80400;
}

void FlipFunctionBBBlack900() {
	configs[ 5]+=   18;
	configs[ 6]+=   54;
	configs[13]+=  486;
	configs[15]+=  162;
	configs[21]+=  486;
	configs[22]+= 1458;
	configs[35]+=   75;
	bb.mover.u4s[1]^=0x80400;
}

void FlipFunctionBBWhite901() {
	configs[ 4]-=    9;
	bb.mover.u4s[1]^=0x4;
	bb.empty.u4s[1]^=0x4;
}

void FlipFunctionBBBlack901() {
	configs[ 4]+=    9;
	bb.mover.u4s[1]^=0x4;
	bb.empty.u4s[1]^=0x4;
}

void FlipFunctionBBWhite902() {
	configs[ 4]-=   63;
	configs[13]-=  162;
	configs[22]-=  162;
	configs[33]-=   54;
	bb.mover.u4s[1]^=0xC;
	bb.empty.u4s[1]^=0x4;
}

void FlipFunctionBBBlack902() {
	configs[ 4]+=   63;
	configs[13]+=  162;
	configs[22]+=  162;
	configs[33]+=   54;
	bb.mover.u4s[1]^=0xC;
	bb.empty.u4s[1]^=0x4;
}

void FlipFunctionBBWhite903() {
	configs[ 4]-=  225;
	configs[13]-=  162;
	configs[14]-=   54;
	configs[22]-=  162;
	configs[23]-=  162;
	configs[32]-=  162;
	configs[33]-=   54;
	bb.mover.u4s[1]^=0x1C;
	bb.empty.u4s[1]^=0x4;
}

void FlipFunctionBBBlack903() {
	configs[ 4]+=  225;
	configs[13]+=  162;
	configs[14]+=   54;
	configs[22]+=  162;
	configs[23]+=  162;
	configs[32]+=  162;
	configs[33]+=   54;
	bb.mover.u4s[1]^=0x1C;
	bb.empty.u4s[1]^=0x4;
}

void FlipFunctionBBWhite904() {
	configs[ 4]-=  711;
	configs[13]-=  162;
	configs[14]-=   54;
	configs[15]-=   18;
	configs[22]-=  162;
	configs[23]-=  162;
	configs[24]-=  162;
	configs[31]-=  162;
	configs[32]-=  162;
	configs[33]-=   54;
	bb.mover.u4s[1]^=0x3C;
	bb.empty.u4s[1]^=0x4;
}

void FlipFunctionBBBlack904() {
	configs[ 4]+=  711;
	configs[13]+=  162;
	configs[14]+=   54;
	configs[15]+=   18;
	configs[22]+=  162;
	configs[23]+=  162;
	configs[24]+=  162;
	configs[31]+=  162;
	configs[32]+=  162;
	configs[33]+=   54;
	bb.mover.u4s[1]^=0x3C;
	bb.empty.u4s[1]^=0x4;
}

void FlipFunctionBBWhite905() {
	configs[ 4]-= 2169;
	configs[13]-=  162;
	configs[14]-=   54;
	configs[15]-=   18;
	configs[16]-=    6;
	configs[22]-=  162;
	configs[23]-=  162;
	configs[24]-=  162;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[31]-=  162;
	configs[32]-=  162;
	configs[33]-=   54;
	bb.mover.u4s[1]^=0x7C;
	bb.empty.u4s[1]^=0x4;
}

void FlipFunctionBBBlack905() {
	configs[ 4]+= 2169;
	configs[13]+=  162;
	configs[14]+=   54;
	configs[15]+=   18;
	configs[16]+=    6;
	configs[22]+=  162;
	configs[23]+=  162;
	configs[24]+=  162;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[31]+=  162;
	configs[32]+=  162;
	configs[33]+=   54;
	bb.mover.u4s[1]^=0x7C;
	bb.empty.u4s[1]^=0x4;
}

void FlipFunctionBBWhite906() {
	configs[ 4]-=   15;
	configs[11]-=  162;
	configs[20]-=  162;
	configs[35]-=    6;
	bb.mover.u4s[1]^=0x6;
	bb.empty.u4s[1]^=0x4;
}

void FlipFunctionBBBlack906() {
	configs[ 4]+=   15;
	configs[11]+=  162;
	configs[20]+=  162;
	configs[35]+=    6;
	bb.mover.u4s[1]^=0x6;
	bb.empty.u4s[1]^=0x4;
}

void FlipFunctionBBWhite907() {
	configs[ 4]-=   69;
	configs[11]-=  162;
	configs[13]-=  162;
	configs[20]-=  162;
	configs[22]-=  162;
	configs[33]-=   54;
	configs[35]-=    6;
	bb.mover.u4s[1]^=0xE;
	bb.empty.u4s[1]^=0x4;
}

void FlipFunctionBBBlack907() {
	configs[ 4]+=   69;
	configs[11]+=  162;
	configs[13]+=  162;
	configs[20]+=  162;
	configs[22]+=  162;
	configs[33]+=   54;
	configs[35]+=    6;
	bb.mover.u4s[1]^=0xE;
	bb.empty.u4s[1]^=0x4;
}

void FlipFunctionBBWhite908() {
	configs[ 4]-=  231;
	configs[11]-=  162;
	configs[13]-=  162;
	configs[14]-=   54;
	configs[20]-=  162;
	configs[22]-=  162;
	configs[23]-=  162;
	configs[32]-=  162;
	configs[33]-=   54;
	configs[35]-=    6;
	bb.mover.u4s[1]^=0x1E;
	bb.empty.u4s[1]^=0x4;
}

void FlipFunctionBBBlack908() {
	configs[ 4]+=  231;
	configs[11]+=  162;
	configs[13]+=  162;
	configs[14]+=   54;
	configs[20]+=  162;
	configs[22]+=  162;
	configs[23]+=  162;
	configs[32]+=  162;
	configs[33]+=   54;
	configs[35]+=    6;
	bb.mover.u4s[1]^=0x1E;
	bb.empty.u4s[1]^=0x4;
}

void FlipFunctionBBWhite909() {
	configs[ 4]-=  717;
	configs[11]-=  162;
	configs[13]-=  162;
	configs[14]-=   54;
	configs[15]-=   18;
	configs[20]-=  162;
	configs[22]-=  162;
	configs[23]-=  162;
	configs[24]-=  162;
	configs[31]-=  162;
	configs[32]-=  162;
	configs[33]-=   54;
	configs[35]-=    6;
	bb.mover.u4s[1]^=0x3E;
	bb.empty.u4s[1]^=0x4;
}

void FlipFunctionBBBlack909() {
	configs[ 4]+=  717;
	configs[11]+=  162;
	configs[13]+=  162;
	configs[14]+=   54;
	configs[15]+=   18;
	configs[20]+=  162;
	configs[22]+=  162;
	configs[23]+=  162;
	configs[24]+=  162;
	configs[31]+=  162;
	configs[32]+=  162;
	configs[33]+=   54;
	configs[35]+=    6;
	bb.mover.u4s[1]^=0x3E;
	bb.empty.u4s[1]^=0x4;
}

void FlipFunctionBBWhite910() {
	configs[ 4]-= 2175;
	configs[11]-=  162;
	configs[13]-=  162;
	configs[14]-=   54;
	configs[15]-=   18;
	configs[16]-=    6;
	configs[20]-=  162;
	configs[22]-=  162;
	configs[23]-=  162;
	configs[24]-=  162;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[31]-=  162;
	configs[32]-=  162;
	configs[33]-=   54;
	configs[35]-=    6;
	bb.mover.u4s[1]^=0x7E;
	bb.empty.u4s[1]^=0x4;
}

void FlipFunctionBBBlack910() {
	configs[ 4]+= 2175;
	configs[11]+=  162;
	configs[13]+=  162;
	configs[14]+=   54;
	configs[15]+=   18;
	configs[16]+=    6;
	configs[20]+=  162;
	configs[22]+=  162;
	configs[23]+=  162;
	configs[24]+=  162;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[31]+=  162;
	configs[32]+=  162;
	configs[33]+=   54;
	configs[35]+=    6;
	bb.mover.u4s[1]^=0x7E;
	bb.empty.u4s[1]^=0x4;
}

void FlipFunctionBBWhite911() {
	configs[12]-=   81;
}

void FlipFunctionBBBlack911() {
	configs[12]+=   81;
}

void FlipFunctionBBWhite912() {
	configs[ 5]-=    6;
	configs[12]-=  567;
	configs[20]-=  486;
	configs[36]-=    6;
	bb.mover.u4s[1]^=0x200;
}

void FlipFunctionBBBlack912() {
	configs[ 5]+=    6;
	configs[12]+=  567;
	configs[20]+=  486;
	configs[36]+=    6;
	bb.mover.u4s[1]^=0x200;
}

void FlipFunctionBBWhite913() {
	configs[ 3]-=   54;
	configs[12]-=  135;
	configs[22]-=   54;
	configs[32]-=   54;
	bb.mover.u4s[0]^=0x8000000;
}

void FlipFunctionBBBlack913() {
	configs[ 3]+=   54;
	configs[12]+=  135;
	configs[22]+=   54;
	configs[32]+=   54;
	bb.mover.u4s[0]^=0x8000000;
}

void FlipFunctionBBWhite914() {
	configs[ 3]-=   54;
	configs[ 5]-=    6;
	configs[12]-=  621;
	configs[20]-=  486;
	configs[22]-=   54;
	configs[32]-=   54;
	configs[36]-=    6;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x200;
}

void FlipFunctionBBBlack914() {
	configs[ 3]+=   54;
	configs[ 5]+=    6;
	configs[12]+=  621;
	configs[20]+=  486;
	configs[22]+=   54;
	configs[32]+=   54;
	configs[36]+=    6;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x200;
}

void FlipFunctionBBWhite915() {
	configs[ 2]-=  162;
	configs[ 3]-=   54;
	configs[12]-=  153;
	configs[22]-=   54;
	configs[23]-=   18;
	configs[30]-=   18;
	configs[32]-=   54;
	bb.mover.u4s[0]^=0x8100000;
}

void FlipFunctionBBBlack915() {
	configs[ 2]+=  162;
	configs[ 3]+=   54;
	configs[12]+=  153;
	configs[22]+=   54;
	configs[23]+=   18;
	configs[30]+=   18;
	configs[32]+=   54;
	bb.mover.u4s[0]^=0x8100000;
}

void FlipFunctionBBWhite916() {
	configs[ 2]-=  162;
	configs[ 3]-=   54;
	configs[ 5]-=    6;
	configs[12]-=  639;
	configs[20]-=  486;
	configs[22]-=   54;
	configs[23]-=   18;
	configs[30]-=   18;
	configs[32]-=   54;
	configs[36]-=    6;
	bb.mover.u4s[0]^=0x8100000;
	bb.mover.u4s[1]^=0x200;
}

void FlipFunctionBBBlack916() {
	configs[ 2]+=  162;
	configs[ 3]+=   54;
	configs[ 5]+=    6;
	configs[12]+=  639;
	configs[20]+=  486;
	configs[22]+=   54;
	configs[23]+=   18;
	configs[30]+=   18;
	configs[32]+=   54;
	configs[36]+=    6;
	bb.mover.u4s[0]^=0x8100000;
	bb.mover.u4s[1]^=0x200;
}

void FlipFunctionBBWhite917() {
	configs[ 1]-=  486;
	configs[ 2]-=  162;
	configs[ 3]-=   54;
	configs[12]-=  159;
	configs[22]-=   54;
	configs[23]-=   18;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[30]-=   18;
	configs[32]-=   54;
	bb.mover.u4s[0]^=0x8102000;
}

void FlipFunctionBBBlack917() {
	configs[ 1]+=  486;
	configs[ 2]+=  162;
	configs[ 3]+=   54;
	configs[12]+=  159;
	configs[22]+=   54;
	configs[23]+=   18;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[30]+=   18;
	configs[32]+=   54;
	bb.mover.u4s[0]^=0x8102000;
}

void FlipFunctionBBWhite918() {
	configs[ 1]-=  486;
	configs[ 2]-=  162;
	configs[ 3]-=   54;
	configs[ 5]-=    6;
	configs[12]-=  645;
	configs[20]-=  486;
	configs[22]-=   54;
	configs[23]-=   18;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[30]-=   18;
	configs[32]-=   54;
	configs[36]-=    6;
	bb.mover.u4s[0]^=0x8102000;
	bb.mover.u4s[1]^=0x200;
}

void FlipFunctionBBBlack918() {
	configs[ 1]+=  486;
	configs[ 2]+=  162;
	configs[ 3]+=   54;
	configs[ 5]+=    6;
	configs[12]+=  645;
	configs[20]+=  486;
	configs[22]+=   54;
	configs[23]+=   18;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[30]+=   18;
	configs[32]+=   54;
	configs[36]+=    6;
	bb.mover.u4s[0]^=0x8102000;
	bb.mover.u4s[1]^=0x200;
}

void FlipFunctionBBWhite919() {
	configs[21]-=   81;
}

void FlipFunctionBBBlack919() {
	configs[21]+=   81;
}

void FlipFunctionBBWhite920() {
	configs[ 5]-=   18;
	configs[13]-=  486;
	configs[21]-=  567;
	configs[35]-=   18;
	bb.mover.u4s[1]^=0x400;
}

void FlipFunctionBBBlack920() {
	configs[ 5]+=   18;
	configs[13]+=  486;
	configs[21]+=  567;
	configs[35]+=   18;
	bb.mover.u4s[1]^=0x400;
}

void FlipFunctionBBWhite921() {
	configs[ 5]-=   18;
	configs[ 6]-=   18;
	configs[13]-=  486;
	configs[14]-=  486;
	configs[21]-= 2025;
	configs[35]-=   18;
	configs[36]-=   18;
	bb.mover.u4s[1]^=0x40400;
}

void FlipFunctionBBBlack921() {
	configs[ 5]+=   18;
	configs[ 6]+=   18;
	configs[13]+=  486;
	configs[14]+=  486;
	configs[21]+= 2025;
	configs[35]+=   18;
	configs[36]+=   18;
	bb.mover.u4s[1]^=0x40400;
}

void FlipFunctionBBWhite922() {
	configs[ 3]-=   18;
	configs[11]-=   54;
	configs[21]-=  135;
	configs[33]-=   18;
	bb.mover.u4s[0]^=0x4000000;
}

void FlipFunctionBBBlack922() {
	configs[ 3]+=   18;
	configs[11]+=   54;
	configs[21]+=  135;
	configs[33]+=   18;
	bb.mover.u4s[0]^=0x4000000;
}

void FlipFunctionBBWhite923() {
	configs[ 3]-=   18;
	configs[ 5]-=   18;
	configs[11]-=   54;
	configs[13]-=  486;
	configs[21]-=  621;
	configs[33]-=   18;
	configs[35]-=   18;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x400;
}

void FlipFunctionBBBlack923() {
	configs[ 3]+=   18;
	configs[ 5]+=   18;
	configs[11]+=   54;
	configs[13]+=  486;
	configs[21]+=  621;
	configs[33]+=   18;
	configs[35]+=   18;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x400;
}

void FlipFunctionBBWhite924() {
	configs[ 3]-=   18;
	configs[ 5]-=   18;
	configs[ 6]-=   18;
	configs[11]-=   54;
	configs[13]-=  486;
	configs[14]-=  486;
	configs[21]-= 2079;
	configs[33]-=   18;
	configs[35]-=   18;
	configs[36]-=   18;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x40400;
}

void FlipFunctionBBBlack924() {
	configs[ 3]+=   18;
	configs[ 5]+=   18;
	configs[ 6]+=   18;
	configs[11]+=   54;
	configs[13]+=  486;
	configs[14]+=  486;
	configs[21]+= 2079;
	configs[33]+=   18;
	configs[35]+=   18;
	configs[36]+=   18;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x40400;
}

void FlipFunctionBBWhite925() {
	configs[ 2]-=   18;
	configs[ 3]-=   18;
	configs[10]-=   18;
	configs[11]-=   54;
	configs[21]-=  153;
	configs[32]-=   18;
	configs[33]-=   18;
	bb.mover.u4s[0]^=0x4040000;
}

void FlipFunctionBBBlack925() {
	configs[ 2]+=   18;
	configs[ 3]+=   18;
	configs[10]+=   18;
	configs[11]+=   54;
	configs[21]+=  153;
	configs[32]+=   18;
	configs[33]+=   18;
	bb.mover.u4s[0]^=0x4040000;
}

void FlipFunctionBBWhite926() {
	configs[ 2]-=   18;
	configs[ 3]-=   18;
	configs[ 5]-=   18;
	configs[10]-=   18;
	configs[11]-=   54;
	configs[13]-=  486;
	configs[21]-=  639;
	configs[32]-=   18;
	configs[33]-=   18;
	configs[35]-=   18;
	bb.mover.u4s[0]^=0x4040000;
	bb.mover.u4s[1]^=0x400;
}

void FlipFunctionBBBlack926() {
	configs[ 2]+=   18;
	configs[ 3]+=   18;
	configs[ 5]+=   18;
	configs[10]+=   18;
	configs[11]+=   54;
	configs[13]+=  486;
	configs[21]+=  639;
	configs[32]+=   18;
	configs[33]+=   18;
	configs[35]+=   18;
	bb.mover.u4s[0]^=0x4040000;
	bb.mover.u4s[1]^=0x400;
}

void FlipFunctionBBWhite927() {
	configs[ 2]-=   18;
	configs[ 3]-=   18;
	configs[ 5]-=   18;
	configs[ 6]-=   18;
	configs[10]-=   18;
	configs[11]-=   54;
	configs[13]-=  486;
	configs[14]-=  486;
	configs[21]-= 2097;
	configs[32]-=   18;
	configs[33]-=   18;
	configs[35]-=   18;
	configs[36]-=   18;
	bb.mover.u4s[0]^=0x4040000;
	bb.mover.u4s[1]^=0x40400;
}

void FlipFunctionBBBlack927() {
	configs[ 2]+=   18;
	configs[ 3]+=   18;
	configs[ 5]+=   18;
	configs[ 6]+=   18;
	configs[10]+=   18;
	configs[11]+=   54;
	configs[13]+=  486;
	configs[14]+=  486;
	configs[21]+= 2097;
	configs[32]+=   18;
	configs[33]+=   18;
	configs[35]+=   18;
	configs[36]+=   18;
	bb.mover.u4s[0]^=0x4040000;
	bb.mover.u4s[1]^=0x40400;
}

void FlipFunctionBBWhite928() {
	configs[ 1]-=   18;
	configs[ 2]-=   18;
	configs[ 3]-=   18;
	configs[ 9]-=    6;
	configs[10]-=   18;
	configs[11]-=   54;
	configs[21]-=  159;
	configs[31]-=    6;
	configs[32]-=   18;
	configs[33]-=   18;
	bb.mover.u4s[0]^=0x4040400;
}

void FlipFunctionBBBlack928() {
	configs[ 1]+=   18;
	configs[ 2]+=   18;
	configs[ 3]+=   18;
	configs[ 9]+=    6;
	configs[10]+=   18;
	configs[11]+=   54;
	configs[21]+=  159;
	configs[31]+=    6;
	configs[32]+=   18;
	configs[33]+=   18;
	bb.mover.u4s[0]^=0x4040400;
}

void FlipFunctionBBWhite929() {
	configs[ 1]-=   18;
	configs[ 2]-=   18;
	configs[ 3]-=   18;
	configs[ 5]-=   18;
	configs[ 9]-=    6;
	configs[10]-=   18;
	configs[11]-=   54;
	configs[13]-=  486;
	configs[21]-=  645;
	configs[31]-=    6;
	configs[32]-=   18;
	configs[33]-=   18;
	configs[35]-=   18;
	bb.mover.u4s[0]^=0x4040400;
	bb.mover.u4s[1]^=0x400;
}

void FlipFunctionBBBlack929() {
	configs[ 1]+=   18;
	configs[ 2]+=   18;
	configs[ 3]+=   18;
	configs[ 5]+=   18;
	configs[ 9]+=    6;
	configs[10]+=   18;
	configs[11]+=   54;
	configs[13]+=  486;
	configs[21]+=  645;
	configs[31]+=    6;
	configs[32]+=   18;
	configs[33]+=   18;
	configs[35]+=   18;
	bb.mover.u4s[0]^=0x4040400;
	bb.mover.u4s[1]^=0x400;
}

void FlipFunctionBBWhite930() {
	configs[ 1]-=   18;
	configs[ 2]-=   18;
	configs[ 3]-=   18;
	configs[ 5]-=   18;
	configs[ 6]-=   18;
	configs[ 9]-=    6;
	configs[10]-=   18;
	configs[11]-=   54;
	configs[13]-=  486;
	configs[14]-=  486;
	configs[21]-= 2103;
	configs[31]-=    6;
	configs[32]-=   18;
	configs[33]-=   18;
	configs[35]-=   18;
	configs[36]-=   18;
	bb.mover.u4s[0]^=0x4040400;
	bb.mover.u4s[1]^=0x40400;
}

void FlipFunctionBBBlack930() {
	configs[ 1]+=   18;
	configs[ 2]+=   18;
	configs[ 3]+=   18;
	configs[ 5]+=   18;
	configs[ 6]+=   18;
	configs[ 9]+=    6;
	configs[10]+=   18;
	configs[11]+=   54;
	configs[13]+=  486;
	configs[14]+=  486;
	configs[21]+= 2103;
	configs[31]+=    6;
	configs[32]+=   18;
	configs[33]+=   18;
	configs[35]+=   18;
	configs[36]+=   18;
	bb.mover.u4s[0]^=0x4040400;
	bb.mover.u4s[1]^=0x40400;
}

void FlipFunctionBBWhite931() {
	configs[34]-=    9;
}

void FlipFunctionBBBlack931() {
	configs[34]+=    9;
}

void FlipFunctionBBWhite932() {
	configs[ 5]-=   54;
	configs[14]-=  162;
	configs[22]-=  486;
	configs[34]-=   63;
	bb.mover.u4s[1]^=0x800;
}

void FlipFunctionBBBlack932() {
	configs[ 5]+=   54;
	configs[14]+=  162;
	configs[22]+=  486;
	configs[34]+=   63;
	bb.mover.u4s[1]^=0x800;
}

void FlipFunctionBBWhite933() {
	configs[ 5]-=   54;
	configs[ 6]-=  162;
	configs[14]-=  162;
	configs[16]-=   54;
	configs[22]-=  486;
	configs[23]-= 1458;
	configs[34]-=  225;
	bb.mover.u4s[1]^=0x100800;
}

void FlipFunctionBBBlack933() {
	configs[ 5]+=   54;
	configs[ 6]+=  162;
	configs[14]+=  162;
	configs[16]+=   54;
	configs[22]+=  486;
	configs[23]+= 1458;
	configs[34]+=  225;
	bb.mover.u4s[1]^=0x100800;
}

void FlipFunctionBBWhite934() {
	configs[ 3]-=    6;
	configs[10]-=   54;
	configs[20]-=   54;
	configs[34]-=   15;
	bb.mover.u4s[0]^=0x2000000;
}

void FlipFunctionBBBlack934() {
	configs[ 3]+=    6;
	configs[10]+=   54;
	configs[20]+=   54;
	configs[34]+=   15;
	bb.mover.u4s[0]^=0x2000000;
}

void FlipFunctionBBWhite935() {
	configs[ 3]-=    6;
	configs[ 5]-=   54;
	configs[10]-=   54;
	configs[14]-=  162;
	configs[20]-=   54;
	configs[22]-=  486;
	configs[34]-=   69;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x800;
}

void FlipFunctionBBBlack935() {
	configs[ 3]+=    6;
	configs[ 5]+=   54;
	configs[10]+=   54;
	configs[14]+=  162;
	configs[20]+=   54;
	configs[22]+=  486;
	configs[34]+=   69;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x800;
}

void FlipFunctionBBWhite936() {
	configs[ 3]-=    6;
	configs[ 5]-=   54;
	configs[ 6]-=  162;
	configs[10]-=   54;
	configs[14]-=  162;
	configs[16]-=   54;
	configs[20]-=   54;
	configs[22]-=  486;
	configs[23]-= 1458;
	configs[34]-=  231;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x100800;
}

void FlipFunctionBBBlack936() {
	configs[ 3]+=    6;
	configs[ 5]+=   54;
	configs[ 6]+=  162;
	configs[10]+=   54;
	configs[14]+=  162;
	configs[16]+=   54;
	configs[20]+=   54;
	configs[22]+=  486;
	configs[23]+= 1458;
	configs[34]+=  231;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x100800;
}

void FlipFunctionBBWhite937() {
	configs[ 4]-=   27;
	bb.mover.u4s[1]^=0x8;
	bb.empty.u4s[1]^=0x8;
}

void FlipFunctionBBBlack937() {
	configs[ 4]+=   27;
	bb.mover.u4s[1]^=0x8;
	bb.empty.u4s[1]^=0x8;
}

void FlipFunctionBBWhite938() {
	configs[ 4]-=  189;
	configs[14]-=   54;
	configs[23]-=  162;
	configs[32]-=  162;
	bb.mover.u4s[1]^=0x18;
	bb.empty.u4s[1]^=0x8;
}

void FlipFunctionBBBlack938() {
	configs[ 4]+=  189;
	configs[14]+=   54;
	configs[23]+=  162;
	configs[32]+=  162;
	bb.mover.u4s[1]^=0x18;
	bb.empty.u4s[1]^=0x8;
}

void FlipFunctionBBWhite939() {
	configs[ 4]-=  675;
	configs[14]-=   54;
	configs[15]-=   18;
	configs[23]-=  162;
	configs[24]-=  162;
	configs[31]-=  162;
	configs[32]-=  162;
	bb.mover.u4s[1]^=0x38;
	bb.empty.u4s[1]^=0x8;
}

void FlipFunctionBBBlack939() {
	configs[ 4]+=  675;
	configs[14]+=   54;
	configs[15]+=   18;
	configs[23]+=  162;
	configs[24]+=  162;
	configs[31]+=  162;
	configs[32]+=  162;
	bb.mover.u4s[1]^=0x38;
	bb.empty.u4s[1]^=0x8;
}

void FlipFunctionBBWhite940() {
	configs[ 4]-= 2133;
	configs[14]-=   54;
	configs[15]-=   18;
	configs[16]-=    6;
	configs[23]-=  162;
	configs[24]-=  162;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[31]-=  162;
	configs[32]-=  162;
	bb.mover.u4s[1]^=0x78;
	bb.empty.u4s[1]^=0x8;
}

void FlipFunctionBBBlack940() {
	configs[ 4]+= 2133;
	configs[14]+=   54;
	configs[15]+=   18;
	configs[16]+=    6;
	configs[23]+=  162;
	configs[24]+=  162;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[31]+=  162;
	configs[32]+=  162;
	bb.mover.u4s[1]^=0x78;
	bb.empty.u4s[1]^=0x8;
}

void FlipFunctionBBWhite941() {
	configs[ 4]-=   45;
	configs[12]-=  162;
	configs[21]-=  162;
	configs[34]-=   18;
	bb.mover.u4s[1]^=0xC;
	bb.empty.u4s[1]^=0x8;
}

void FlipFunctionBBBlack941() {
	configs[ 4]+=   45;
	configs[12]+=  162;
	configs[21]+=  162;
	configs[34]+=   18;
	bb.mover.u4s[1]^=0xC;
	bb.empty.u4s[1]^=0x8;
}

void FlipFunctionBBWhite942() {
	configs[ 4]-=  207;
	configs[12]-=  162;
	configs[14]-=   54;
	configs[21]-=  162;
	configs[23]-=  162;
	configs[32]-=  162;
	configs[34]-=   18;
	bb.mover.u4s[1]^=0x1C;
	bb.empty.u4s[1]^=0x8;
}

void FlipFunctionBBBlack942() {
	configs[ 4]+=  207;
	configs[12]+=  162;
	configs[14]+=   54;
	configs[21]+=  162;
	configs[23]+=  162;
	configs[32]+=  162;
	configs[34]+=   18;
	bb.mover.u4s[1]^=0x1C;
	bb.empty.u4s[1]^=0x8;
}

void FlipFunctionBBWhite943() {
	configs[ 4]-=  693;
	configs[12]-=  162;
	configs[14]-=   54;
	configs[15]-=   18;
	configs[21]-=  162;
	configs[23]-=  162;
	configs[24]-=  162;
	configs[31]-=  162;
	configs[32]-=  162;
	configs[34]-=   18;
	bb.mover.u4s[1]^=0x3C;
	bb.empty.u4s[1]^=0x8;
}

void FlipFunctionBBBlack943() {
	configs[ 4]+=  693;
	configs[12]+=  162;
	configs[14]+=   54;
	configs[15]+=   18;
	configs[21]+=  162;
	configs[23]+=  162;
	configs[24]+=  162;
	configs[31]+=  162;
	configs[32]+=  162;
	configs[34]+=   18;
	bb.mover.u4s[1]^=0x3C;
	bb.empty.u4s[1]^=0x8;
}

void FlipFunctionBBWhite944() {
	configs[ 4]-= 2151;
	configs[12]-=  162;
	configs[14]-=   54;
	configs[15]-=   18;
	configs[16]-=    6;
	configs[21]-=  162;
	configs[23]-=  162;
	configs[24]-=  162;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[31]-=  162;
	configs[32]-=  162;
	configs[34]-=   18;
	bb.mover.u4s[1]^=0x7C;
	bb.empty.u4s[1]^=0x8;
}

void FlipFunctionBBBlack944() {
	configs[ 4]+= 2151;
	configs[12]+=  162;
	configs[14]+=   54;
	configs[15]+=   18;
	configs[16]+=    6;
	configs[21]+=  162;
	configs[23]+=  162;
	configs[24]+=  162;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[31]+=  162;
	configs[32]+=  162;
	configs[34]+=   18;
	bb.mover.u4s[1]^=0x7C;
	bb.empty.u4s[1]^=0x8;
}

void FlipFunctionBBWhite945() {
	configs[ 4]-=   51;
	configs[11]-=  162;
	configs[12]-=  162;
	configs[20]-=  162;
	configs[21]-=  162;
	configs[34]-=   18;
	configs[35]-=    6;
	bb.mover.u4s[1]^=0xE;
	bb.empty.u4s[1]^=0x8;
}

void FlipFunctionBBBlack945() {
	configs[ 4]+=   51;
	configs[11]+=  162;
	configs[12]+=  162;
	configs[20]+=  162;
	configs[21]+=  162;
	configs[34]+=   18;
	configs[35]+=    6;
	bb.mover.u4s[1]^=0xE;
	bb.empty.u4s[1]^=0x8;
}

void FlipFunctionBBWhite946() {
	configs[ 4]-=  213;
	configs[11]-=  162;
	configs[12]-=  162;
	configs[14]-=   54;
	configs[20]-=  162;
	configs[21]-=  162;
	configs[23]-=  162;
	configs[32]-=  162;
	configs[34]-=   18;
	configs[35]-=    6;
	bb.mover.u4s[1]^=0x1E;
	bb.empty.u4s[1]^=0x8;
}

void FlipFunctionBBBlack946() {
	configs[ 4]+=  213;
	configs[11]+=  162;
	configs[12]+=  162;
	configs[14]+=   54;
	configs[20]+=  162;
	configs[21]+=  162;
	configs[23]+=  162;
	configs[32]+=  162;
	configs[34]+=   18;
	configs[35]+=    6;
	bb.mover.u4s[1]^=0x1E;
	bb.empty.u4s[1]^=0x8;
}

void FlipFunctionBBWhite947() {
	configs[ 4]-=  699;
	configs[11]-=  162;
	configs[12]-=  162;
	configs[14]-=   54;
	configs[15]-=   18;
	configs[20]-=  162;
	configs[21]-=  162;
	configs[23]-=  162;
	configs[24]-=  162;
	configs[31]-=  162;
	configs[32]-=  162;
	configs[34]-=   18;
	configs[35]-=    6;
	bb.mover.u4s[1]^=0x3E;
	bb.empty.u4s[1]^=0x8;
}

void FlipFunctionBBBlack947() {
	configs[ 4]+=  699;
	configs[11]+=  162;
	configs[12]+=  162;
	configs[14]+=   54;
	configs[15]+=   18;
	configs[20]+=  162;
	configs[21]+=  162;
	configs[23]+=  162;
	configs[24]+=  162;
	configs[31]+=  162;
	configs[32]+=  162;
	configs[34]+=   18;
	configs[35]+=    6;
	bb.mover.u4s[1]^=0x3E;
	bb.empty.u4s[1]^=0x8;
}

void FlipFunctionBBWhite948() {
	configs[ 4]-= 2157;
	configs[11]-=  162;
	configs[12]-=  162;
	configs[14]-=   54;
	configs[15]-=   18;
	configs[16]-=    6;
	configs[20]-=  162;
	configs[21]-=  162;
	configs[23]-=  162;
	configs[24]-=  162;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[31]-=  162;
	configs[32]-=  162;
	configs[34]-=   18;
	configs[35]-=    6;
	bb.mover.u4s[1]^=0x7E;
	bb.empty.u4s[1]^=0x8;
}

void FlipFunctionBBBlack948() {
	configs[ 4]+= 2157;
	configs[11]+=  162;
	configs[12]+=  162;
	configs[14]+=   54;
	configs[15]+=   18;
	configs[16]+=    6;
	configs[20]+=  162;
	configs[21]+=  162;
	configs[23]+=  162;
	configs[24]+=  162;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[31]+=  162;
	configs[32]+=  162;
	configs[34]+=   18;
	configs[35]+=    6;
	bb.mover.u4s[1]^=0x7E;
	bb.empty.u4s[1]^=0x8;
}

void FlipFunctionBBWhite949() {
	configs[13]-=   81;
}

void FlipFunctionBBBlack949() {
	configs[13]+=   81;
}

void FlipFunctionBBWhite950() {
	configs[ 5]-=   18;
	configs[13]-=  567;
	configs[21]-=  486;
	configs[35]-=   18;
	bb.mover.u4s[1]^=0x400;
}

void FlipFunctionBBBlack950() {
	configs[ 5]+=   18;
	configs[13]+=  567;
	configs[21]+=  486;
	configs[35]+=   18;
	bb.mover.u4s[1]^=0x400;
}

void FlipFunctionBBWhite951() {
	configs[ 5]-=   18;
	configs[ 6]-=    6;
	configs[13]-= 2025;
	configs[20]-= 1458;
	configs[21]-=  486;
	configs[35]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x20400;
}

void FlipFunctionBBBlack951() {
	configs[ 5]+=   18;
	configs[ 6]+=    6;
	configs[13]+= 2025;
	configs[20]+= 1458;
	configs[21]+=  486;
	configs[35]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x20400;
}

void FlipFunctionBBWhite952() {
	configs[ 3]-=  162;
	configs[13]-=  135;
	configs[23]-=   54;
	configs[31]-=   54;
	bb.mover.u4s[0]^=0x10000000;
}

void FlipFunctionBBBlack952() {
	configs[ 3]+=  162;
	configs[13]+=  135;
	configs[23]+=   54;
	configs[31]+=   54;
	bb.mover.u4s[0]^=0x10000000;
}

void FlipFunctionBBWhite953() {
	configs[ 3]-=  162;
	configs[ 5]-=   18;
	configs[13]-=  621;
	configs[21]-=  486;
	configs[23]-=   54;
	configs[31]-=   54;
	configs[35]-=   18;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x400;
}

void FlipFunctionBBBlack953() {
	configs[ 3]+=  162;
	configs[ 5]+=   18;
	configs[13]+=  621;
	configs[21]+=  486;
	configs[23]+=   54;
	configs[31]+=   54;
	configs[35]+=   18;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x400;
}

void FlipFunctionBBWhite954() {
	configs[ 3]-=  162;
	configs[ 5]-=   18;
	configs[ 6]-=    6;
	configs[13]-= 2079;
	configs[20]-= 1458;
	configs[21]-=  486;
	configs[23]-=   54;
	configs[31]-=   54;
	configs[35]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x20400;
}

void FlipFunctionBBBlack954() {
	configs[ 3]+=  162;
	configs[ 5]+=   18;
	configs[ 6]+=    6;
	configs[13]+= 2079;
	configs[20]+= 1458;
	configs[21]+=  486;
	configs[23]+=   54;
	configs[31]+=   54;
	configs[35]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x20400;
}

void FlipFunctionBBWhite955() {
	configs[ 2]-=  486;
	configs[ 3]-=  162;
	configs[13]-=  153;
	configs[23]-=   54;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[31]-=   54;
	bb.mover.u4s[0]^=0x10200000;
}

void FlipFunctionBBBlack955() {
	configs[ 2]+=  486;
	configs[ 3]+=  162;
	configs[13]+=  153;
	configs[23]+=   54;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[31]+=   54;
	bb.mover.u4s[0]^=0x10200000;
}

void FlipFunctionBBWhite956() {
	configs[ 2]-=  486;
	configs[ 3]-=  162;
	configs[ 5]-=   18;
	configs[13]-=  639;
	configs[21]-=  486;
	configs[23]-=   54;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[31]-=   54;
	configs[35]-=   18;
	bb.mover.u4s[0]^=0x10200000;
	bb.mover.u4s[1]^=0x400;
}

void FlipFunctionBBBlack956() {
	configs[ 2]+=  486;
	configs[ 3]+=  162;
	configs[ 5]+=   18;
	configs[13]+=  639;
	configs[21]+=  486;
	configs[23]+=   54;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[31]+=   54;
	configs[35]+=   18;
	bb.mover.u4s[0]^=0x10200000;
	bb.mover.u4s[1]^=0x400;
}

void FlipFunctionBBWhite957() {
	configs[ 2]-=  486;
	configs[ 3]-=  162;
	configs[ 5]-=   18;
	configs[ 6]-=    6;
	configs[13]-= 2097;
	configs[20]-= 1458;
	configs[21]-=  486;
	configs[23]-=   54;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[31]-=   54;
	configs[35]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[0]^=0x10200000;
	bb.mover.u4s[1]^=0x20400;
}

void FlipFunctionBBBlack957() {
	configs[ 2]+=  486;
	configs[ 3]+=  162;
	configs[ 5]+=   18;
	configs[ 6]+=    6;
	configs[13]+= 2097;
	configs[20]+= 1458;
	configs[21]+=  486;
	configs[23]+=   54;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[31]+=   54;
	configs[35]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[0]^=0x10200000;
	bb.mover.u4s[1]^=0x20400;
}

void FlipFunctionBBWhite958() {
	configs[ 1]-= 1458;
	configs[ 2]-=  486;
	configs[ 3]-=  162;
	configs[13]-=  159;
	configs[23]-=   54;
	configs[24]-=   18;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[29]-=   18;
	configs[31]-=   54;
	bb.mover.u4s[0]^=0x10204000;
}

void FlipFunctionBBBlack958() {
	configs[ 1]+= 1458;
	configs[ 2]+=  486;
	configs[ 3]+=  162;
	configs[13]+=  159;
	configs[23]+=   54;
	configs[24]+=   18;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[29]+=   18;
	configs[31]+=   54;
	bb.mover.u4s[0]^=0x10204000;
}

void FlipFunctionBBWhite959() {
	configs[ 1]-= 1458;
	configs[ 2]-=  486;
	configs[ 3]-=  162;
	configs[ 5]-=   18;
	configs[13]-=  645;
	configs[21]-=  486;
	configs[23]-=   54;
	configs[24]-=   18;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[29]-=   18;
	configs[31]-=   54;
	configs[35]-=   18;
	bb.mover.u4s[0]^=0x10204000;
	bb.mover.u4s[1]^=0x400;
}

void FlipFunctionBBBlack959() {
	configs[ 1]+= 1458;
	configs[ 2]+=  486;
	configs[ 3]+=  162;
	configs[ 5]+=   18;
	configs[13]+=  645;
	configs[21]+=  486;
	configs[23]+=   54;
	configs[24]+=   18;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[29]+=   18;
	configs[31]+=   54;
	configs[35]+=   18;
	bb.mover.u4s[0]^=0x10204000;
	bb.mover.u4s[1]^=0x400;
}

void FlipFunctionBBWhite960() {
	configs[ 1]-= 1458;
	configs[ 2]-=  486;
	configs[ 3]-=  162;
	configs[ 5]-=   18;
	configs[ 6]-=    6;
	configs[13]-= 2103;
	configs[20]-= 1458;
	configs[21]-=  486;
	configs[23]-=   54;
	configs[24]-=   18;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[29]-=   18;
	configs[31]-=   54;
	configs[35]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[0]^=0x10204000;
	bb.mover.u4s[1]^=0x20400;
}

void FlipFunctionBBBlack960() {
	configs[ 1]+= 1458;
	configs[ 2]+=  486;
	configs[ 3]+=  162;
	configs[ 5]+=   18;
	configs[ 6]+=    6;
	configs[13]+= 2103;
	configs[20]+= 1458;
	configs[21]+=  486;
	configs[23]+=   54;
	configs[24]+=   18;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[29]+=   18;
	configs[31]+=   54;
	configs[35]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[0]^=0x10204000;
	bb.mover.u4s[1]^=0x20400;
}

void FlipFunctionBBWhite961() {
	configs[22]-=   81;
}

void FlipFunctionBBBlack961() {
	configs[22]+=   81;
}

void FlipFunctionBBWhite962() {
	configs[ 5]-=   54;
	configs[14]-=  162;
	configs[22]-=  567;
	configs[34]-=   54;
	bb.mover.u4s[1]^=0x800;
}

void FlipFunctionBBBlack962() {
	configs[ 5]+=   54;
	configs[14]+=  162;
	configs[22]+=  567;
	configs[34]+=   54;
	bb.mover.u4s[1]^=0x800;
}

void FlipFunctionBBWhite963() {
	configs[ 5]-=   54;
	configs[ 6]-=   54;
	configs[14]-=  162;
	configs[15]-=  162;
	configs[22]-= 2025;
	configs[34]-=   54;
	configs[35]-=   54;
	bb.mover.u4s[1]^=0x80800;
}

void FlipFunctionBBBlack963() {
	configs[ 5]+=   54;
	configs[ 6]+=   54;
	configs[14]+=  162;
	configs[15]+=  162;
	configs[22]+= 2025;
	configs[34]+=   54;
	configs[35]+=   54;
	bb.mover.u4s[1]^=0x80800;
}

void FlipFunctionBBWhite964() {
	configs[ 3]-=   54;
	configs[12]-=   54;
	configs[22]-=  135;
	configs[32]-=   54;
	bb.mover.u4s[0]^=0x8000000;
}

void FlipFunctionBBBlack964() {
	configs[ 3]+=   54;
	configs[12]+=   54;
	configs[22]+=  135;
	configs[32]+=   54;
	bb.mover.u4s[0]^=0x8000000;
}

void FlipFunctionBBWhite965() {
	configs[ 3]-=   54;
	configs[ 5]-=   54;
	configs[12]-=   54;
	configs[14]-=  162;
	configs[22]-=  621;
	configs[32]-=   54;
	configs[34]-=   54;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x800;
}

void FlipFunctionBBBlack965() {
	configs[ 3]+=   54;
	configs[ 5]+=   54;
	configs[12]+=   54;
	configs[14]+=  162;
	configs[22]+=  621;
	configs[32]+=   54;
	configs[34]+=   54;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x800;
}

void FlipFunctionBBWhite966() {
	configs[ 3]-=   54;
	configs[ 5]-=   54;
	configs[ 6]-=   54;
	configs[12]-=   54;
	configs[14]-=  162;
	configs[15]-=  162;
	configs[22]-= 2079;
	configs[32]-=   54;
	configs[34]-=   54;
	configs[35]-=   54;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x80800;
}

void FlipFunctionBBBlack966() {
	configs[ 3]+=   54;
	configs[ 5]+=   54;
	configs[ 6]+=   54;
	configs[12]+=   54;
	configs[14]+=  162;
	configs[15]+=  162;
	configs[22]+= 2079;
	configs[32]+=   54;
	configs[34]+=   54;
	configs[35]+=   54;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x80800;
}

void FlipFunctionBBWhite967() {
	configs[ 2]-=   54;
	configs[ 3]-=   54;
	configs[11]-=   18;
	configs[12]-=   54;
	configs[22]-=  153;
	configs[31]-=   18;
	configs[32]-=   54;
	bb.mover.u4s[0]^=0x8080000;
}

void FlipFunctionBBBlack967() {
	configs[ 2]+=   54;
	configs[ 3]+=   54;
	configs[11]+=   18;
	configs[12]+=   54;
	configs[22]+=  153;
	configs[31]+=   18;
	configs[32]+=   54;
	bb.mover.u4s[0]^=0x8080000;
}

void FlipFunctionBBWhite968() {
	configs[ 2]-=   54;
	configs[ 3]-=   54;
	configs[ 5]-=   54;
	configs[11]-=   18;
	configs[12]-=   54;
	configs[14]-=  162;
	configs[22]-=  639;
	configs[31]-=   18;
	configs[32]-=   54;
	configs[34]-=   54;
	bb.mover.u4s[0]^=0x8080000;
	bb.mover.u4s[1]^=0x800;
}

void FlipFunctionBBBlack968() {
	configs[ 2]+=   54;
	configs[ 3]+=   54;
	configs[ 5]+=   54;
	configs[11]+=   18;
	configs[12]+=   54;
	configs[14]+=  162;
	configs[22]+=  639;
	configs[31]+=   18;
	configs[32]+=   54;
	configs[34]+=   54;
	bb.mover.u4s[0]^=0x8080000;
	bb.mover.u4s[1]^=0x800;
}

void FlipFunctionBBWhite969() {
	configs[ 2]-=   54;
	configs[ 3]-=   54;
	configs[ 5]-=   54;
	configs[ 6]-=   54;
	configs[11]-=   18;
	configs[12]-=   54;
	configs[14]-=  162;
	configs[15]-=  162;
	configs[22]-= 2097;
	configs[31]-=   18;
	configs[32]-=   54;
	configs[34]-=   54;
	configs[35]-=   54;
	bb.mover.u4s[0]^=0x8080000;
	bb.mover.u4s[1]^=0x80800;
}

void FlipFunctionBBBlack969() {
	configs[ 2]+=   54;
	configs[ 3]+=   54;
	configs[ 5]+=   54;
	configs[ 6]+=   54;
	configs[11]+=   18;
	configs[12]+=   54;
	configs[14]+=  162;
	configs[15]+=  162;
	configs[22]+= 2097;
	configs[31]+=   18;
	configs[32]+=   54;
	configs[34]+=   54;
	configs[35]+=   54;
	bb.mover.u4s[0]^=0x8080000;
	bb.mover.u4s[1]^=0x80800;
}

void FlipFunctionBBWhite970() {
	configs[ 1]-=   54;
	configs[ 2]-=   54;
	configs[ 3]-=   54;
	configs[10]-=    6;
	configs[11]-=   18;
	configs[12]-=   54;
	configs[22]-=  159;
	configs[30]-=    6;
	configs[31]-=   18;
	configs[32]-=   54;
	bb.mover.u4s[0]^=0x8080800;
}

void FlipFunctionBBBlack970() {
	configs[ 1]+=   54;
	configs[ 2]+=   54;
	configs[ 3]+=   54;
	configs[10]+=    6;
	configs[11]+=   18;
	configs[12]+=   54;
	configs[22]+=  159;
	configs[30]+=    6;
	configs[31]+=   18;
	configs[32]+=   54;
	bb.mover.u4s[0]^=0x8080800;
}

void FlipFunctionBBWhite971() {
	configs[ 1]-=   54;
	configs[ 2]-=   54;
	configs[ 3]-=   54;
	configs[ 5]-=   54;
	configs[10]-=    6;
	configs[11]-=   18;
	configs[12]-=   54;
	configs[14]-=  162;
	configs[22]-=  645;
	configs[30]-=    6;
	configs[31]-=   18;
	configs[32]-=   54;
	configs[34]-=   54;
	bb.mover.u4s[0]^=0x8080800;
	bb.mover.u4s[1]^=0x800;
}

void FlipFunctionBBBlack971() {
	configs[ 1]+=   54;
	configs[ 2]+=   54;
	configs[ 3]+=   54;
	configs[ 5]+=   54;
	configs[10]+=    6;
	configs[11]+=   18;
	configs[12]+=   54;
	configs[14]+=  162;
	configs[22]+=  645;
	configs[30]+=    6;
	configs[31]+=   18;
	configs[32]+=   54;
	configs[34]+=   54;
	bb.mover.u4s[0]^=0x8080800;
	bb.mover.u4s[1]^=0x800;
}

void FlipFunctionBBWhite972() {
	configs[ 1]-=   54;
	configs[ 2]-=   54;
	configs[ 3]-=   54;
	configs[ 5]-=   54;
	configs[ 6]-=   54;
	configs[10]-=    6;
	configs[11]-=   18;
	configs[12]-=   54;
	configs[14]-=  162;
	configs[15]-=  162;
	configs[22]-= 2103;
	configs[30]-=    6;
	configs[31]-=   18;
	configs[32]-=   54;
	configs[34]-=   54;
	configs[35]-=   54;
	bb.mover.u4s[0]^=0x8080800;
	bb.mover.u4s[1]^=0x80800;
}

void FlipFunctionBBBlack972() {
	configs[ 1]+=   54;
	configs[ 2]+=   54;
	configs[ 3]+=   54;
	configs[ 5]+=   54;
	configs[ 6]+=   54;
	configs[10]+=    6;
	configs[11]+=   18;
	configs[12]+=   54;
	configs[14]+=  162;
	configs[15]+=  162;
	configs[22]+= 2103;
	configs[30]+=    6;
	configs[31]+=   18;
	configs[32]+=   54;
	configs[34]+=   54;
	configs[35]+=   54;
	bb.mover.u4s[0]^=0x8080800;
	bb.mover.u4s[1]^=0x80800;
}

void FlipFunctionBBWhite973() {
	configs[33]-=   27;
}

void FlipFunctionBBBlack973() {
	configs[33]+=   27;
}

void FlipFunctionBBWhite974() {
	configs[ 5]-=  162;
	configs[15]-=   54;
	configs[23]-=  486;
	configs[33]-=  189;
	bb.mover.u4s[1]^=0x1000;
}

void FlipFunctionBBBlack974() {
	configs[ 5]+=  162;
	configs[15]+=   54;
	configs[23]+=  486;
	configs[33]+=  189;
	bb.mover.u4s[1]^=0x1000;
}

void FlipFunctionBBWhite975() {
	configs[ 5]-=  162;
	configs[ 6]-=  486;
	configs[15]-=   54;
	configs[17]-=   18;
	configs[23]-=  486;
	configs[24]-= 1458;
	configs[33]-=  675;
	bb.mover.u4s[1]^=0x201000;
}

void FlipFunctionBBBlack975() {
	configs[ 5]+=  162;
	configs[ 6]+=  486;
	configs[15]+=   54;
	configs[17]+=   18;
	configs[23]+=  486;
	configs[24]+= 1458;
	configs[33]+=  675;
	bb.mover.u4s[1]^=0x201000;
}

void FlipFunctionBBWhite976() {
	configs[ 3]-=   18;
	configs[11]-=   54;
	configs[21]-=   54;
	configs[33]-=   45;
	bb.mover.u4s[0]^=0x4000000;
}

void FlipFunctionBBBlack976() {
	configs[ 3]+=   18;
	configs[11]+=   54;
	configs[21]+=   54;
	configs[33]+=   45;
	bb.mover.u4s[0]^=0x4000000;
}

void FlipFunctionBBWhite977() {
	configs[ 3]-=   18;
	configs[ 5]-=  162;
	configs[11]-=   54;
	configs[15]-=   54;
	configs[21]-=   54;
	configs[23]-=  486;
	configs[33]-=  207;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x1000;
}

void FlipFunctionBBBlack977() {
	configs[ 3]+=   18;
	configs[ 5]+=  162;
	configs[11]+=   54;
	configs[15]+=   54;
	configs[21]+=   54;
	configs[23]+=  486;
	configs[33]+=  207;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x1000;
}

void FlipFunctionBBWhite978() {
	configs[ 3]-=   18;
	configs[ 5]-=  162;
	configs[ 6]-=  486;
	configs[11]-=   54;
	configs[15]-=   54;
	configs[17]-=   18;
	configs[21]-=   54;
	configs[23]-=  486;
	configs[24]-= 1458;
	configs[33]-=  693;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x201000;
}

void FlipFunctionBBBlack978() {
	configs[ 3]+=   18;
	configs[ 5]+=  162;
	configs[ 6]+=  486;
	configs[11]+=   54;
	configs[15]+=   54;
	configs[17]+=   18;
	configs[21]+=   54;
	configs[23]+=  486;
	configs[24]+= 1458;
	configs[33]+=  693;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x201000;
}

void FlipFunctionBBWhite979() {
	configs[ 2]-=    6;
	configs[ 3]-=   18;
	configs[ 9]-=   18;
	configs[11]-=   54;
	configs[20]-=   18;
	configs[21]-=   54;
	configs[33]-=   51;
	bb.mover.u4s[0]^=0x4020000;
}

void FlipFunctionBBBlack979() {
	configs[ 2]+=    6;
	configs[ 3]+=   18;
	configs[ 9]+=   18;
	configs[11]+=   54;
	configs[20]+=   18;
	configs[21]+=   54;
	configs[33]+=   51;
	bb.mover.u4s[0]^=0x4020000;
}

void FlipFunctionBBWhite980() {
	configs[ 2]-=    6;
	configs[ 3]-=   18;
	configs[ 5]-=  162;
	configs[ 9]-=   18;
	configs[11]-=   54;
	configs[15]-=   54;
	configs[20]-=   18;
	configs[21]-=   54;
	configs[23]-=  486;
	configs[33]-=  213;
	bb.mover.u4s[0]^=0x4020000;
	bb.mover.u4s[1]^=0x1000;
}

void FlipFunctionBBBlack980() {
	configs[ 2]+=    6;
	configs[ 3]+=   18;
	configs[ 5]+=  162;
	configs[ 9]+=   18;
	configs[11]+=   54;
	configs[15]+=   54;
	configs[20]+=   18;
	configs[21]+=   54;
	configs[23]+=  486;
	configs[33]+=  213;
	bb.mover.u4s[0]^=0x4020000;
	bb.mover.u4s[1]^=0x1000;
}

void FlipFunctionBBWhite981() {
	configs[ 2]-=    6;
	configs[ 3]-=   18;
	configs[ 5]-=  162;
	configs[ 6]-=  486;
	configs[ 9]-=   18;
	configs[11]-=   54;
	configs[15]-=   54;
	configs[17]-=   18;
	configs[20]-=   18;
	configs[21]-=   54;
	configs[23]-=  486;
	configs[24]-= 1458;
	configs[33]-=  699;
	bb.mover.u4s[0]^=0x4020000;
	bb.mover.u4s[1]^=0x201000;
}

void FlipFunctionBBBlack981() {
	configs[ 2]+=    6;
	configs[ 3]+=   18;
	configs[ 5]+=  162;
	configs[ 6]+=  486;
	configs[ 9]+=   18;
	configs[11]+=   54;
	configs[15]+=   54;
	configs[17]+=   18;
	configs[20]+=   18;
	configs[21]+=   54;
	configs[23]+=  486;
	configs[24]+= 1458;
	configs[33]+=  699;
	bb.mover.u4s[0]^=0x4020000;
	bb.mover.u4s[1]^=0x201000;
}

void FlipFunctionBBWhite982() {
	configs[ 4]-=   81;
	bb.mover.u4s[1]^=0x10;
	bb.empty.u4s[1]^=0x10;
}

void FlipFunctionBBBlack982() {
	configs[ 4]+=   81;
	bb.mover.u4s[1]^=0x10;
	bb.empty.u4s[1]^=0x10;
}

void FlipFunctionBBWhite983() {
	configs[ 4]-=  567;
	configs[15]-=   18;
	configs[24]-=  162;
	configs[31]-=  162;
	bb.mover.u4s[1]^=0x30;
	bb.empty.u4s[1]^=0x10;
}

void FlipFunctionBBBlack983() {
	configs[ 4]+=  567;
	configs[15]+=   18;
	configs[24]+=  162;
	configs[31]+=  162;
	bb.mover.u4s[1]^=0x30;
	bb.empty.u4s[1]^=0x10;
}

void FlipFunctionBBWhite984() {
	configs[ 4]-= 2025;
	configs[15]-=   18;
	configs[16]-=    6;
	configs[24]-=  162;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[31]-=  162;
	bb.mover.u4s[1]^=0x70;
	bb.empty.u4s[1]^=0x10;
}

void FlipFunctionBBBlack984() {
	configs[ 4]+= 2025;
	configs[15]+=   18;
	configs[16]+=    6;
	configs[24]+=  162;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[31]+=  162;
	bb.mover.u4s[1]^=0x70;
	bb.empty.u4s[1]^=0x10;
}

void FlipFunctionBBWhite985() {
	configs[ 4]-=  135;
	configs[13]-=  162;
	configs[22]-=  162;
	configs[33]-=   54;
	bb.mover.u4s[1]^=0x18;
	bb.empty.u4s[1]^=0x10;
}

void FlipFunctionBBBlack985() {
	configs[ 4]+=  135;
	configs[13]+=  162;
	configs[22]+=  162;
	configs[33]+=   54;
	bb.mover.u4s[1]^=0x18;
	bb.empty.u4s[1]^=0x10;
}

void FlipFunctionBBWhite986() {
	configs[ 4]-=  621;
	configs[13]-=  162;
	configs[15]-=   18;
	configs[22]-=  162;
	configs[24]-=  162;
	configs[31]-=  162;
	configs[33]-=   54;
	bb.mover.u4s[1]^=0x38;
	bb.empty.u4s[1]^=0x10;
}

void FlipFunctionBBBlack986() {
	configs[ 4]+=  621;
	configs[13]+=  162;
	configs[15]+=   18;
	configs[22]+=  162;
	configs[24]+=  162;
	configs[31]+=  162;
	configs[33]+=   54;
	bb.mover.u4s[1]^=0x38;
	bb.empty.u4s[1]^=0x10;
}

void FlipFunctionBBWhite987() {
	configs[ 4]-= 2079;
	configs[13]-=  162;
	configs[15]-=   18;
	configs[16]-=    6;
	configs[22]-=  162;
	configs[24]-=  162;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[31]-=  162;
	configs[33]-=   54;
	bb.mover.u4s[1]^=0x78;
	bb.empty.u4s[1]^=0x10;
}

void FlipFunctionBBBlack987() {
	configs[ 4]+= 2079;
	configs[13]+=  162;
	configs[15]+=   18;
	configs[16]+=    6;
	configs[22]+=  162;
	configs[24]+=  162;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[31]+=  162;
	configs[33]+=   54;
	bb.mover.u4s[1]^=0x78;
	bb.empty.u4s[1]^=0x10;
}

void FlipFunctionBBWhite988() {
	configs[ 4]-=  153;
	configs[12]-=  162;
	configs[13]-=  162;
	configs[21]-=  162;
	configs[22]-=  162;
	configs[33]-=   54;
	configs[34]-=   18;
	bb.mover.u4s[1]^=0x1C;
	bb.empty.u4s[1]^=0x10;
}

void FlipFunctionBBBlack988() {
	configs[ 4]+=  153;
	configs[12]+=  162;
	configs[13]+=  162;
	configs[21]+=  162;
	configs[22]+=  162;
	configs[33]+=   54;
	configs[34]+=   18;
	bb.mover.u4s[1]^=0x1C;
	bb.empty.u4s[1]^=0x10;
}

void FlipFunctionBBWhite989() {
	configs[ 4]-=  639;
	configs[12]-=  162;
	configs[13]-=  162;
	configs[15]-=   18;
	configs[21]-=  162;
	configs[22]-=  162;
	configs[24]-=  162;
	configs[31]-=  162;
	configs[33]-=   54;
	configs[34]-=   18;
	bb.mover.u4s[1]^=0x3C;
	bb.empty.u4s[1]^=0x10;
}

void FlipFunctionBBBlack989() {
	configs[ 4]+=  639;
	configs[12]+=  162;
	configs[13]+=  162;
	configs[15]+=   18;
	configs[21]+=  162;
	configs[22]+=  162;
	configs[24]+=  162;
	configs[31]+=  162;
	configs[33]+=   54;
	configs[34]+=   18;
	bb.mover.u4s[1]^=0x3C;
	bb.empty.u4s[1]^=0x10;
}

void FlipFunctionBBWhite990() {
	configs[ 4]-= 2097;
	configs[12]-=  162;
	configs[13]-=  162;
	configs[15]-=   18;
	configs[16]-=    6;
	configs[21]-=  162;
	configs[22]-=  162;
	configs[24]-=  162;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[31]-=  162;
	configs[33]-=   54;
	configs[34]-=   18;
	bb.mover.u4s[1]^=0x7C;
	bb.empty.u4s[1]^=0x10;
}

void FlipFunctionBBBlack990() {
	configs[ 4]+= 2097;
	configs[12]+=  162;
	configs[13]+=  162;
	configs[15]+=   18;
	configs[16]+=    6;
	configs[21]+=  162;
	configs[22]+=  162;
	configs[24]+=  162;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[31]+=  162;
	configs[33]+=   54;
	configs[34]+=   18;
	bb.mover.u4s[1]^=0x7C;
	bb.empty.u4s[1]^=0x10;
}

void FlipFunctionBBWhite991() {
	configs[ 4]-=  159;
	configs[11]-=  162;
	configs[12]-=  162;
	configs[13]-=  162;
	configs[20]-=  162;
	configs[21]-=  162;
	configs[22]-=  162;
	configs[33]-=   54;
	configs[34]-=   18;
	configs[35]-=    6;
	bb.mover.u4s[1]^=0x1E;
	bb.empty.u4s[1]^=0x10;
}

void FlipFunctionBBBlack991() {
	configs[ 4]+=  159;
	configs[11]+=  162;
	configs[12]+=  162;
	configs[13]+=  162;
	configs[20]+=  162;
	configs[21]+=  162;
	configs[22]+=  162;
	configs[33]+=   54;
	configs[34]+=   18;
	configs[35]+=    6;
	bb.mover.u4s[1]^=0x1E;
	bb.empty.u4s[1]^=0x10;
}

void FlipFunctionBBWhite992() {
	configs[ 4]-=  645;
	configs[11]-=  162;
	configs[12]-=  162;
	configs[13]-=  162;
	configs[15]-=   18;
	configs[20]-=  162;
	configs[21]-=  162;
	configs[22]-=  162;
	configs[24]-=  162;
	configs[31]-=  162;
	configs[33]-=   54;
	configs[34]-=   18;
	configs[35]-=    6;
	bb.mover.u4s[1]^=0x3E;
	bb.empty.u4s[1]^=0x10;
}

void FlipFunctionBBBlack992() {
	configs[ 4]+=  645;
	configs[11]+=  162;
	configs[12]+=  162;
	configs[13]+=  162;
	configs[15]+=   18;
	configs[20]+=  162;
	configs[21]+=  162;
	configs[22]+=  162;
	configs[24]+=  162;
	configs[31]+=  162;
	configs[33]+=   54;
	configs[34]+=   18;
	configs[35]+=    6;
	bb.mover.u4s[1]^=0x3E;
	bb.empty.u4s[1]^=0x10;
}

void FlipFunctionBBWhite993() {
	configs[ 4]-= 2103;
	configs[11]-=  162;
	configs[12]-=  162;
	configs[13]-=  162;
	configs[15]-=   18;
	configs[16]-=    6;
	configs[20]-=  162;
	configs[21]-=  162;
	configs[22]-=  162;
	configs[24]-=  162;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[31]-=  162;
	configs[33]-=   54;
	configs[34]-=   18;
	configs[35]-=    6;
	bb.mover.u4s[1]^=0x7E;
	bb.empty.u4s[1]^=0x10;
}

void FlipFunctionBBBlack993() {
	configs[ 4]+= 2103;
	configs[11]+=  162;
	configs[12]+=  162;
	configs[13]+=  162;
	configs[15]+=   18;
	configs[16]+=    6;
	configs[20]+=  162;
	configs[21]+=  162;
	configs[22]+=  162;
	configs[24]+=  162;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[31]+=  162;
	configs[33]+=   54;
	configs[34]+=   18;
	configs[35]+=    6;
	bb.mover.u4s[1]^=0x7E;
	bb.empty.u4s[1]^=0x10;
}

void FlipFunctionBBWhite994() {
	configs[14]-=   27;
}

void FlipFunctionBBBlack994() {
	configs[14]+=   27;
}

void FlipFunctionBBWhite995() {
	configs[ 5]-=   54;
	configs[14]-=  189;
	configs[22]-=  486;
	configs[34]-=   54;
	bb.mover.u4s[1]^=0x800;
}

void FlipFunctionBBBlack995() {
	configs[ 5]+=   54;
	configs[14]+=  189;
	configs[22]+=  486;
	configs[34]+=   54;
	bb.mover.u4s[1]^=0x800;
}

void FlipFunctionBBWhite996() {
	configs[ 5]-=   54;
	configs[ 6]-=   18;
	configs[14]-=  675;
	configs[21]-= 1458;
	configs[22]-=  486;
	configs[34]-=   54;
	configs[36]-=   18;
	bb.mover.u4s[1]^=0x40800;
}

void FlipFunctionBBBlack996() {
	configs[ 5]+=   54;
	configs[ 6]+=   18;
	configs[14]+=  675;
	configs[21]+= 1458;
	configs[22]+=  486;
	configs[34]+=   54;
	configs[36]+=   18;
	bb.mover.u4s[1]^=0x40800;
}

void FlipFunctionBBWhite997() {
	configs[ 3]-=  486;
	configs[14]-=   45;
	configs[24]-=   54;
	configs[30]-=   54;
	bb.mover.u4s[0]^=0x20000000;
}

void FlipFunctionBBBlack997() {
	configs[ 3]+=  486;
	configs[14]+=   45;
	configs[24]+=   54;
	configs[30]+=   54;
	bb.mover.u4s[0]^=0x20000000;
}

void FlipFunctionBBWhite998() {
	configs[ 3]-=  486;
	configs[ 5]-=   54;
	configs[14]-=  207;
	configs[22]-=  486;
	configs[24]-=   54;
	configs[30]-=   54;
	configs[34]-=   54;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x800;
}

void FlipFunctionBBBlack998() {
	configs[ 3]+=  486;
	configs[ 5]+=   54;
	configs[14]+=  207;
	configs[22]+=  486;
	configs[24]+=   54;
	configs[30]+=   54;
	configs[34]+=   54;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x800;
}

void FlipFunctionBBWhite999() {
	configs[ 3]-=  486;
	configs[ 5]-=   54;
	configs[ 6]-=   18;
	configs[14]-=  693;
	configs[21]-= 1458;
	configs[22]-=  486;
	configs[24]-=   54;
	configs[30]-=   54;
	configs[34]-=   54;
	configs[36]-=   18;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x40800;
}

void FlipFunctionBBBlack999() {
	configs[ 3]+=  486;
	configs[ 5]+=   54;
	configs[ 6]+=   18;
	configs[14]+=  693;
	configs[21]+= 1458;
	configs[22]+=  486;
	configs[24]+=   54;
	configs[30]+=   54;
	configs[34]+=   54;
	configs[36]+=   18;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x40800;
}

void FlipFunctionBBWhite1000() {
	configs[ 2]-= 1458;
	configs[ 3]-=  486;
	configs[14]-=   51;
	configs[24]-=   54;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[30]-=   54;
	bb.mover.u4s[0]^=0x20400000;
}

void FlipFunctionBBBlack1000() {
	configs[ 2]+= 1458;
	configs[ 3]+=  486;
	configs[14]+=   51;
	configs[24]+=   54;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[30]+=   54;
	bb.mover.u4s[0]^=0x20400000;
}

void FlipFunctionBBWhite1001() {
	configs[ 2]-= 1458;
	configs[ 3]-=  486;
	configs[ 5]-=   54;
	configs[14]-=  213;
	configs[22]-=  486;
	configs[24]-=   54;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[30]-=   54;
	configs[34]-=   54;
	bb.mover.u4s[0]^=0x20400000;
	bb.mover.u4s[1]^=0x800;
}

void FlipFunctionBBBlack1001() {
	configs[ 2]+= 1458;
	configs[ 3]+=  486;
	configs[ 5]+=   54;
	configs[14]+=  213;
	configs[22]+=  486;
	configs[24]+=   54;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[30]+=   54;
	configs[34]+=   54;
	bb.mover.u4s[0]^=0x20400000;
	bb.mover.u4s[1]^=0x800;
}

void FlipFunctionBBWhite1002() {
	configs[ 2]-= 1458;
	configs[ 3]-=  486;
	configs[ 5]-=   54;
	configs[ 6]-=   18;
	configs[14]-=  699;
	configs[21]-= 1458;
	configs[22]-=  486;
	configs[24]-=   54;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[30]-=   54;
	configs[34]-=   54;
	configs[36]-=   18;
	bb.mover.u4s[0]^=0x20400000;
	bb.mover.u4s[1]^=0x40800;
}

void FlipFunctionBBBlack1002() {
	configs[ 2]+= 1458;
	configs[ 3]+=  486;
	configs[ 5]+=   54;
	configs[ 6]+=   18;
	configs[14]+=  699;
	configs[21]+= 1458;
	configs[22]+=  486;
	configs[24]+=   54;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[30]+=   54;
	configs[34]+=   54;
	configs[36]+=   18;
	bb.mover.u4s[0]^=0x20400000;
	bb.mover.u4s[1]^=0x40800;
}

void FlipFunctionBBWhite1003() {
	configs[23]-=   81;
}

void FlipFunctionBBBlack1003() {
	configs[23]+=   81;
}

void FlipFunctionBBWhite1004() {
	configs[ 5]-=  162;
	configs[15]-=   54;
	configs[23]-=  567;
	configs[33]-=  162;
	bb.mover.u4s[1]^=0x1000;
}

void FlipFunctionBBBlack1004() {
	configs[ 5]+=  162;
	configs[15]+=   54;
	configs[23]+=  567;
	configs[33]+=  162;
	bb.mover.u4s[1]^=0x1000;
}

void FlipFunctionBBWhite1005() {
	configs[ 5]-=  162;
	configs[ 6]-=  162;
	configs[15]-=   54;
	configs[16]-=   54;
	configs[23]-= 2025;
	configs[33]-=  162;
	configs[34]-=  162;
	bb.mover.u4s[1]^=0x101000;
}

void FlipFunctionBBBlack1005() {
	configs[ 5]+=  162;
	configs[ 6]+=  162;
	configs[15]+=   54;
	configs[16]+=   54;
	configs[23]+= 2025;
	configs[33]+=  162;
	configs[34]+=  162;
	bb.mover.u4s[1]^=0x101000;
}

void FlipFunctionBBWhite1006() {
	configs[ 3]-=  162;
	configs[13]-=   54;
	configs[23]-=  135;
	configs[31]-=   54;
	bb.mover.u4s[0]^=0x10000000;
}

void FlipFunctionBBBlack1006() {
	configs[ 3]+=  162;
	configs[13]+=   54;
	configs[23]+=  135;
	configs[31]+=   54;
	bb.mover.u4s[0]^=0x10000000;
}

void FlipFunctionBBWhite1007() {
	configs[ 3]-=  162;
	configs[ 5]-=  162;
	configs[13]-=   54;
	configs[15]-=   54;
	configs[23]-=  621;
	configs[31]-=   54;
	configs[33]-=  162;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x1000;
}

void FlipFunctionBBBlack1007() {
	configs[ 3]+=  162;
	configs[ 5]+=  162;
	configs[13]+=   54;
	configs[15]+=   54;
	configs[23]+=  621;
	configs[31]+=   54;
	configs[33]+=  162;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x1000;
}

void FlipFunctionBBWhite1008() {
	configs[ 3]-=  162;
	configs[ 5]-=  162;
	configs[ 6]-=  162;
	configs[13]-=   54;
	configs[15]-=   54;
	configs[16]-=   54;
	configs[23]-= 2079;
	configs[31]-=   54;
	configs[33]-=  162;
	configs[34]-=  162;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x101000;
}

void FlipFunctionBBBlack1008() {
	configs[ 3]+=  162;
	configs[ 5]+=  162;
	configs[ 6]+=  162;
	configs[13]+=   54;
	configs[15]+=   54;
	configs[16]+=   54;
	configs[23]+= 2079;
	configs[31]+=   54;
	configs[33]+=  162;
	configs[34]+=  162;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x101000;
}

void FlipFunctionBBWhite1009() {
	configs[ 2]-=  162;
	configs[ 3]-=  162;
	configs[12]-=   18;
	configs[13]-=   54;
	configs[23]-=  153;
	configs[30]-=   18;
	configs[31]-=   54;
	bb.mover.u4s[0]^=0x10100000;
}

void FlipFunctionBBBlack1009() {
	configs[ 2]+=  162;
	configs[ 3]+=  162;
	configs[12]+=   18;
	configs[13]+=   54;
	configs[23]+=  153;
	configs[30]+=   18;
	configs[31]+=   54;
	bb.mover.u4s[0]^=0x10100000;
}

void FlipFunctionBBWhite1010() {
	configs[ 2]-=  162;
	configs[ 3]-=  162;
	configs[ 5]-=  162;
	configs[12]-=   18;
	configs[13]-=   54;
	configs[15]-=   54;
	configs[23]-=  639;
	configs[30]-=   18;
	configs[31]-=   54;
	configs[33]-=  162;
	bb.mover.u4s[0]^=0x10100000;
	bb.mover.u4s[1]^=0x1000;
}

void FlipFunctionBBBlack1010() {
	configs[ 2]+=  162;
	configs[ 3]+=  162;
	configs[ 5]+=  162;
	configs[12]+=   18;
	configs[13]+=   54;
	configs[15]+=   54;
	configs[23]+=  639;
	configs[30]+=   18;
	configs[31]+=   54;
	configs[33]+=  162;
	bb.mover.u4s[0]^=0x10100000;
	bb.mover.u4s[1]^=0x1000;
}

void FlipFunctionBBWhite1011() {
	configs[ 2]-=  162;
	configs[ 3]-=  162;
	configs[ 5]-=  162;
	configs[ 6]-=  162;
	configs[12]-=   18;
	configs[13]-=   54;
	configs[15]-=   54;
	configs[16]-=   54;
	configs[23]-= 2097;
	configs[30]-=   18;
	configs[31]-=   54;
	configs[33]-=  162;
	configs[34]-=  162;
	bb.mover.u4s[0]^=0x10100000;
	bb.mover.u4s[1]^=0x101000;
}

void FlipFunctionBBBlack1011() {
	configs[ 2]+=  162;
	configs[ 3]+=  162;
	configs[ 5]+=  162;
	configs[ 6]+=  162;
	configs[12]+=   18;
	configs[13]+=   54;
	configs[15]+=   54;
	configs[16]+=   54;
	configs[23]+= 2097;
	configs[30]+=   18;
	configs[31]+=   54;
	configs[33]+=  162;
	configs[34]+=  162;
	bb.mover.u4s[0]^=0x10100000;
	bb.mover.u4s[1]^=0x101000;
}

void FlipFunctionBBWhite1012() {
	configs[ 1]-=  162;
	configs[ 2]-=  162;
	configs[ 3]-=  162;
	configs[11]-=    6;
	configs[12]-=   18;
	configs[13]-=   54;
	configs[23]-=  159;
	configs[29]-=    6;
	configs[30]-=   18;
	configs[31]-=   54;
	bb.mover.u4s[0]^=0x10101000;
}

void FlipFunctionBBBlack1012() {
	configs[ 1]+=  162;
	configs[ 2]+=  162;
	configs[ 3]+=  162;
	configs[11]+=    6;
	configs[12]+=   18;
	configs[13]+=   54;
	configs[23]+=  159;
	configs[29]+=    6;
	configs[30]+=   18;
	configs[31]+=   54;
	bb.mover.u4s[0]^=0x10101000;
}

void FlipFunctionBBWhite1013() {
	configs[ 1]-=  162;
	configs[ 2]-=  162;
	configs[ 3]-=  162;
	configs[ 5]-=  162;
	configs[11]-=    6;
	configs[12]-=   18;
	configs[13]-=   54;
	configs[15]-=   54;
	configs[23]-=  645;
	configs[29]-=    6;
	configs[30]-=   18;
	configs[31]-=   54;
	configs[33]-=  162;
	bb.mover.u4s[0]^=0x10101000;
	bb.mover.u4s[1]^=0x1000;
}

void FlipFunctionBBBlack1013() {
	configs[ 1]+=  162;
	configs[ 2]+=  162;
	configs[ 3]+=  162;
	configs[ 5]+=  162;
	configs[11]+=    6;
	configs[12]+=   18;
	configs[13]+=   54;
	configs[15]+=   54;
	configs[23]+=  645;
	configs[29]+=    6;
	configs[30]+=   18;
	configs[31]+=   54;
	configs[33]+=  162;
	bb.mover.u4s[0]^=0x10101000;
	bb.mover.u4s[1]^=0x1000;
}

void FlipFunctionBBWhite1014() {
	configs[ 1]-=  162;
	configs[ 2]-=  162;
	configs[ 3]-=  162;
	configs[ 5]-=  162;
	configs[ 6]-=  162;
	configs[11]-=    6;
	configs[12]-=   18;
	configs[13]-=   54;
	configs[15]-=   54;
	configs[16]-=   54;
	configs[23]-= 2103;
	configs[29]-=    6;
	configs[30]-=   18;
	configs[31]-=   54;
	configs[33]-=  162;
	configs[34]-=  162;
	bb.mover.u4s[0]^=0x10101000;
	bb.mover.u4s[1]^=0x101000;
}

void FlipFunctionBBBlack1014() {
	configs[ 1]+=  162;
	configs[ 2]+=  162;
	configs[ 3]+=  162;
	configs[ 5]+=  162;
	configs[ 6]+=  162;
	configs[11]+=    6;
	configs[12]+=   18;
	configs[13]+=   54;
	configs[15]+=   54;
	configs[16]+=   54;
	configs[23]+= 2103;
	configs[29]+=    6;
	configs[30]+=   18;
	configs[31]+=   54;
	configs[33]+=  162;
	configs[34]+=  162;
	bb.mover.u4s[0]^=0x10101000;
	bb.mover.u4s[1]^=0x101000;
}

void FlipFunctionBBWhite1015() {
	configs[32]-=   81;
}

void FlipFunctionBBBlack1015() {
	configs[32]+=   81;
}

void FlipFunctionBBWhite1016() {
	configs[ 5]-=  486;
	configs[16]-=   18;
	configs[24]-=  486;
	configs[32]-=  567;
	bb.mover.u4s[1]^=0x2000;
}

void FlipFunctionBBBlack1016() {
	configs[ 5]+=  486;
	configs[16]+=   18;
	configs[24]+=  486;
	configs[32]+=  567;
	bb.mover.u4s[1]^=0x2000;
}

void FlipFunctionBBWhite1017() {
	configs[ 5]-=  486;
	configs[ 6]-= 1458;
	configs[16]-=   18;
	configs[18]-=    6;
	configs[24]-=  486;
	configs[25]-= 1458;
	configs[32]-= 2025;
	bb.mover.u4s[1]^=0x402000;
}

void FlipFunctionBBBlack1017() {
	configs[ 5]+=  486;
	configs[ 6]+= 1458;
	configs[16]+=   18;
	configs[18]+=    6;
	configs[24]+=  486;
	configs[25]+= 1458;
	configs[32]+= 2025;
	bb.mover.u4s[1]^=0x402000;
}

void FlipFunctionBBWhite1018() {
	configs[ 3]-=   54;
	configs[12]-=   54;
	configs[22]-=   54;
	configs[32]-=  135;
	bb.mover.u4s[0]^=0x8000000;
}

void FlipFunctionBBBlack1018() {
	configs[ 3]+=   54;
	configs[12]+=   54;
	configs[22]+=   54;
	configs[32]+=  135;
	bb.mover.u4s[0]^=0x8000000;
}

void FlipFunctionBBWhite1019() {
	configs[ 3]-=   54;
	configs[ 5]-=  486;
	configs[12]-=   54;
	configs[16]-=   18;
	configs[22]-=   54;
	configs[24]-=  486;
	configs[32]-=  621;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x2000;
}

void FlipFunctionBBBlack1019() {
	configs[ 3]+=   54;
	configs[ 5]+=  486;
	configs[12]+=   54;
	configs[16]+=   18;
	configs[22]+=   54;
	configs[24]+=  486;
	configs[32]+=  621;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x2000;
}

void FlipFunctionBBWhite1020() {
	configs[ 3]-=   54;
	configs[ 5]-=  486;
	configs[ 6]-= 1458;
	configs[12]-=   54;
	configs[16]-=   18;
	configs[18]-=    6;
	configs[22]-=   54;
	configs[24]-=  486;
	configs[25]-= 1458;
	configs[32]-= 2079;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x402000;
}

void FlipFunctionBBBlack1020() {
	configs[ 3]+=   54;
	configs[ 5]+=  486;
	configs[ 6]+= 1458;
	configs[12]+=   54;
	configs[16]+=   18;
	configs[18]+=    6;
	configs[22]+=   54;
	configs[24]+=  486;
	configs[25]+= 1458;
	configs[32]+= 2079;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x402000;
}

void FlipFunctionBBWhite1021() {
	configs[ 2]-=   18;
	configs[ 3]-=   54;
	configs[10]-=   18;
	configs[12]-=   54;
	configs[21]-=   18;
	configs[22]-=   54;
	configs[32]-=  153;
	bb.mover.u4s[0]^=0x8040000;
}

void FlipFunctionBBBlack1021() {
	configs[ 2]+=   18;
	configs[ 3]+=   54;
	configs[10]+=   18;
	configs[12]+=   54;
	configs[21]+=   18;
	configs[22]+=   54;
	configs[32]+=  153;
	bb.mover.u4s[0]^=0x8040000;
}

void FlipFunctionBBWhite1022() {
	configs[ 2]-=   18;
	configs[ 3]-=   54;
	configs[ 5]-=  486;
	configs[10]-=   18;
	configs[12]-=   54;
	configs[16]-=   18;
	configs[21]-=   18;
	configs[22]-=   54;
	configs[24]-=  486;
	configs[32]-=  639;
	bb.mover.u4s[0]^=0x8040000;
	bb.mover.u4s[1]^=0x2000;
}

void FlipFunctionBBBlack1022() {
	configs[ 2]+=   18;
	configs[ 3]+=   54;
	configs[ 5]+=  486;
	configs[10]+=   18;
	configs[12]+=   54;
	configs[16]+=   18;
	configs[21]+=   18;
	configs[22]+=   54;
	configs[24]+=  486;
	configs[32]+=  639;
	bb.mover.u4s[0]^=0x8040000;
	bb.mover.u4s[1]^=0x2000;
}

void FlipFunctionBBWhite1023() {
	configs[ 2]-=   18;
	configs[ 3]-=   54;
	configs[ 5]-=  486;
	configs[ 6]-= 1458;
	configs[10]-=   18;
	configs[12]-=   54;
	configs[16]-=   18;
	configs[18]-=    6;
	configs[21]-=   18;
	configs[22]-=   54;
	configs[24]-=  486;
	configs[25]-= 1458;
	configs[32]-= 2097;
	bb.mover.u4s[0]^=0x8040000;
	bb.mover.u4s[1]^=0x402000;
}

void FlipFunctionBBBlack1023() {
	configs[ 2]+=   18;
	configs[ 3]+=   54;
	configs[ 5]+=  486;
	configs[ 6]+= 1458;
	configs[10]+=   18;
	configs[12]+=   54;
	configs[16]+=   18;
	configs[18]+=    6;
	configs[21]+=   18;
	configs[22]+=   54;
	configs[24]+=  486;
	configs[25]+= 1458;
	configs[32]+= 2097;
	bb.mover.u4s[0]^=0x8040000;
	bb.mover.u4s[1]^=0x402000;
}

void FlipFunctionBBWhite1024() {
	configs[ 1]-=    6;
	configs[ 2]-=   18;
	configs[ 3]-=   54;
	configs[ 8]-=    6;
	configs[10]-=   18;
	configs[12]-=   54;
	configs[20]-=    6;
	configs[21]-=   18;
	configs[22]-=   54;
	configs[32]-=  159;
	bb.mover.u4s[0]^=0x8040200;
}

void FlipFunctionBBBlack1024() {
	configs[ 1]+=    6;
	configs[ 2]+=   18;
	configs[ 3]+=   54;
	configs[ 8]+=    6;
	configs[10]+=   18;
	configs[12]+=   54;
	configs[20]+=    6;
	configs[21]+=   18;
	configs[22]+=   54;
	configs[32]+=  159;
	bb.mover.u4s[0]^=0x8040200;
}

void FlipFunctionBBWhite1025() {
	configs[ 1]-=    6;
	configs[ 2]-=   18;
	configs[ 3]-=   54;
	configs[ 5]-=  486;
	configs[ 8]-=    6;
	configs[10]-=   18;
	configs[12]-=   54;
	configs[16]-=   18;
	configs[20]-=    6;
	configs[21]-=   18;
	configs[22]-=   54;
	configs[24]-=  486;
	configs[32]-=  645;
	bb.mover.u4s[0]^=0x8040200;
	bb.mover.u4s[1]^=0x2000;
}

void FlipFunctionBBBlack1025() {
	configs[ 1]+=    6;
	configs[ 2]+=   18;
	configs[ 3]+=   54;
	configs[ 5]+=  486;
	configs[ 8]+=    6;
	configs[10]+=   18;
	configs[12]+=   54;
	configs[16]+=   18;
	configs[20]+=    6;
	configs[21]+=   18;
	configs[22]+=   54;
	configs[24]+=  486;
	configs[32]+=  645;
	bb.mover.u4s[0]^=0x8040200;
	bb.mover.u4s[1]^=0x2000;
}

void FlipFunctionBBWhite1026() {
	configs[ 1]-=    6;
	configs[ 2]-=   18;
	configs[ 3]-=   54;
	configs[ 5]-=  486;
	configs[ 6]-= 1458;
	configs[ 8]-=    6;
	configs[10]-=   18;
	configs[12]-=   54;
	configs[16]-=   18;
	configs[18]-=    6;
	configs[20]-=    6;
	configs[21]-=   18;
	configs[22]-=   54;
	configs[24]-=  486;
	configs[25]-= 1458;
	configs[32]-= 2103;
	bb.mover.u4s[0]^=0x8040200;
	bb.mover.u4s[1]^=0x402000;
}

void FlipFunctionBBBlack1026() {
	configs[ 1]+=    6;
	configs[ 2]+=   18;
	configs[ 3]+=   54;
	configs[ 5]+=  486;
	configs[ 6]+= 1458;
	configs[ 8]+=    6;
	configs[10]+=   18;
	configs[12]+=   54;
	configs[16]+=   18;
	configs[18]+=    6;
	configs[20]+=    6;
	configs[21]+=   18;
	configs[22]+=   54;
	configs[24]+=  486;
	configs[25]+= 1458;
	configs[32]+= 2103;
	bb.mover.u4s[0]^=0x8040200;
	bb.mover.u4s[1]^=0x402000;
}

void FlipFunctionBBWhite1027() {
	configs[ 4]-=  243;
	bb.mover.u4s[1]^=0x20;
	bb.empty.u4s[1]^=0x20;
}

void FlipFunctionBBBlack1027() {
	configs[ 4]+=  243;
	bb.mover.u4s[1]^=0x20;
	bb.empty.u4s[1]^=0x20;
}

void FlipFunctionBBWhite1028() {
	configs[ 4]-= 1701;
	configs[16]-=    6;
	configs[25]-=  162;
	configs[30]-=  162;
	bb.mover.u4s[1]^=0x60;
	bb.empty.u4s[1]^=0x20;
}

void FlipFunctionBBBlack1028() {
	configs[ 4]+= 1701;
	configs[16]+=    6;
	configs[25]+=  162;
	configs[30]+=  162;
	bb.mover.u4s[1]^=0x60;
	bb.empty.u4s[1]^=0x20;
}

void FlipFunctionBBWhite1029() {
	configs[ 4]-=  405;
	configs[14]-=   54;
	configs[23]-=  162;
	configs[32]-=  162;
	bb.mover.u4s[1]^=0x30;
	bb.empty.u4s[1]^=0x20;
}

void FlipFunctionBBBlack1029() {
	configs[ 4]+=  405;
	configs[14]+=   54;
	configs[23]+=  162;
	configs[32]+=  162;
	bb.mover.u4s[1]^=0x30;
	bb.empty.u4s[1]^=0x20;
}

void FlipFunctionBBWhite1030() {
	configs[ 4]-= 1863;
	configs[14]-=   54;
	configs[16]-=    6;
	configs[23]-=  162;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[32]-=  162;
	bb.mover.u4s[1]^=0x70;
	bb.empty.u4s[1]^=0x20;
}

void FlipFunctionBBBlack1030() {
	configs[ 4]+= 1863;
	configs[14]+=   54;
	configs[16]+=    6;
	configs[23]+=  162;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[32]+=  162;
	bb.mover.u4s[1]^=0x70;
	bb.empty.u4s[1]^=0x20;
}

void FlipFunctionBBWhite1031() {
	configs[ 4]-=  459;
	configs[13]-=  162;
	configs[14]-=   54;
	configs[22]-=  162;
	configs[23]-=  162;
	configs[32]-=  162;
	configs[33]-=   54;
	bb.mover.u4s[1]^=0x38;
	bb.empty.u4s[1]^=0x20;
}

void FlipFunctionBBBlack1031() {
	configs[ 4]+=  459;
	configs[13]+=  162;
	configs[14]+=   54;
	configs[22]+=  162;
	configs[23]+=  162;
	configs[32]+=  162;
	configs[33]+=   54;
	bb.mover.u4s[1]^=0x38;
	bb.empty.u4s[1]^=0x20;
}

void FlipFunctionBBWhite1032() {
	configs[ 4]-= 1917;
	configs[13]-=  162;
	configs[14]-=   54;
	configs[16]-=    6;
	configs[22]-=  162;
	configs[23]-=  162;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[32]-=  162;
	configs[33]-=   54;
	bb.mover.u4s[1]^=0x78;
	bb.empty.u4s[1]^=0x20;
}

void FlipFunctionBBBlack1032() {
	configs[ 4]+= 1917;
	configs[13]+=  162;
	configs[14]+=   54;
	configs[16]+=    6;
	configs[22]+=  162;
	configs[23]+=  162;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[32]+=  162;
	configs[33]+=   54;
	bb.mover.u4s[1]^=0x78;
	bb.empty.u4s[1]^=0x20;
}

void FlipFunctionBBWhite1033() {
	configs[ 4]-=  477;
	configs[12]-=  162;
	configs[13]-=  162;
	configs[14]-=   54;
	configs[21]-=  162;
	configs[22]-=  162;
	configs[23]-=  162;
	configs[32]-=  162;
	configs[33]-=   54;
	configs[34]-=   18;
	bb.mover.u4s[1]^=0x3C;
	bb.empty.u4s[1]^=0x20;
}

void FlipFunctionBBBlack1033() {
	configs[ 4]+=  477;
	configs[12]+=  162;
	configs[13]+=  162;
	configs[14]+=   54;
	configs[21]+=  162;
	configs[22]+=  162;
	configs[23]+=  162;
	configs[32]+=  162;
	configs[33]+=   54;
	configs[34]+=   18;
	bb.mover.u4s[1]^=0x3C;
	bb.empty.u4s[1]^=0x20;
}

void FlipFunctionBBWhite1034() {
	configs[ 4]-= 1935;
	configs[12]-=  162;
	configs[13]-=  162;
	configs[14]-=   54;
	configs[16]-=    6;
	configs[21]-=  162;
	configs[22]-=  162;
	configs[23]-=  162;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[32]-=  162;
	configs[33]-=   54;
	configs[34]-=   18;
	bb.mover.u4s[1]^=0x7C;
	bb.empty.u4s[1]^=0x20;
}

void FlipFunctionBBBlack1034() {
	configs[ 4]+= 1935;
	configs[12]+=  162;
	configs[13]+=  162;
	configs[14]+=   54;
	configs[16]+=    6;
	configs[21]+=  162;
	configs[22]+=  162;
	configs[23]+=  162;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[32]+=  162;
	configs[33]+=   54;
	configs[34]+=   18;
	bb.mover.u4s[1]^=0x7C;
	bb.empty.u4s[1]^=0x20;
}

void FlipFunctionBBWhite1035() {
	configs[ 4]-=  483;
	configs[11]-=  162;
	configs[12]-=  162;
	configs[13]-=  162;
	configs[14]-=   54;
	configs[20]-=  162;
	configs[21]-=  162;
	configs[22]-=  162;
	configs[23]-=  162;
	configs[32]-=  162;
	configs[33]-=   54;
	configs[34]-=   18;
	configs[35]-=    6;
	bb.mover.u4s[1]^=0x3E;
	bb.empty.u4s[1]^=0x20;
}

void FlipFunctionBBBlack1035() {
	configs[ 4]+=  483;
	configs[11]+=  162;
	configs[12]+=  162;
	configs[13]+=  162;
	configs[14]+=   54;
	configs[20]+=  162;
	configs[21]+=  162;
	configs[22]+=  162;
	configs[23]+=  162;
	configs[32]+=  162;
	configs[33]+=   54;
	configs[34]+=   18;
	configs[35]+=    6;
	bb.mover.u4s[1]^=0x3E;
	bb.empty.u4s[1]^=0x20;
}

void FlipFunctionBBWhite1036() {
	configs[ 4]-= 1941;
	configs[11]-=  162;
	configs[12]-=  162;
	configs[13]-=  162;
	configs[14]-=   54;
	configs[16]-=    6;
	configs[20]-=  162;
	configs[21]-=  162;
	configs[22]-=  162;
	configs[23]-=  162;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[32]-=  162;
	configs[33]-=   54;
	configs[34]-=   18;
	configs[35]-=    6;
	bb.mover.u4s[1]^=0x7E;
	bb.empty.u4s[1]^=0x20;
}

void FlipFunctionBBBlack1036() {
	configs[ 4]+= 1941;
	configs[11]+=  162;
	configs[12]+=  162;
	configs[13]+=  162;
	configs[14]+=   54;
	configs[16]+=    6;
	configs[20]+=  162;
	configs[21]+=  162;
	configs[22]+=  162;
	configs[23]+=  162;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[32]+=  162;
	configs[33]+=   54;
	configs[34]+=   18;
	configs[35]+=    6;
	bb.mover.u4s[1]^=0x7E;
	bb.empty.u4s[1]^=0x20;
}

void FlipFunctionBBWhite1037() {
	configs[15]-=    9;
}

void FlipFunctionBBBlack1037() {
	configs[15]+=    9;
}

void FlipFunctionBBWhite1038() {
	configs[ 5]-=  162;
	configs[15]-=   63;
	configs[23]-=  486;
	configs[33]-=  162;
	bb.mover.u4s[1]^=0x1000;
}

void FlipFunctionBBBlack1038() {
	configs[ 5]+=  162;
	configs[15]+=   63;
	configs[23]+=  486;
	configs[33]+=  162;
	bb.mover.u4s[1]^=0x1000;
}

void FlipFunctionBBWhite1039() {
	configs[ 5]-=  162;
	configs[ 6]-=   54;
	configs[15]-=  225;
	configs[22]-= 1458;
	configs[23]-=  486;
	configs[33]-=  162;
	configs[35]-=   54;
	bb.mover.u4s[1]^=0x81000;
}

void FlipFunctionBBBlack1039() {
	configs[ 5]+=  162;
	configs[ 6]+=   54;
	configs[15]+=  225;
	configs[22]+= 1458;
	configs[23]+=  486;
	configs[33]+=  162;
	configs[35]+=   54;
	bb.mover.u4s[1]^=0x81000;
}

void FlipFunctionBBWhite1040() {
	configs[ 3]-= 1458;
	configs[15]-=   15;
	configs[25]-=   54;
	configs[29]-=   54;
	bb.mover.u4s[0]^=0x40000000;
}

void FlipFunctionBBBlack1040() {
	configs[ 3]+= 1458;
	configs[15]+=   15;
	configs[25]+=   54;
	configs[29]+=   54;
	bb.mover.u4s[0]^=0x40000000;
}

void FlipFunctionBBWhite1041() {
	configs[ 3]-= 1458;
	configs[ 5]-=  162;
	configs[15]-=   69;
	configs[23]-=  486;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[33]-=  162;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x1000;
}

void FlipFunctionBBBlack1041() {
	configs[ 3]+= 1458;
	configs[ 5]+=  162;
	configs[15]+=   69;
	configs[23]+=  486;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[33]+=  162;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x1000;
}

void FlipFunctionBBWhite1042() {
	configs[ 3]-= 1458;
	configs[ 5]-=  162;
	configs[ 6]-=   54;
	configs[15]-=  231;
	configs[22]-= 1458;
	configs[23]-=  486;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[33]-=  162;
	configs[35]-=   54;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x81000;
}

void FlipFunctionBBBlack1042() {
	configs[ 3]+= 1458;
	configs[ 5]+=  162;
	configs[ 6]+=   54;
	configs[15]+=  231;
	configs[22]+= 1458;
	configs[23]+=  486;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[33]+=  162;
	configs[35]+=   54;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x81000;
}

void FlipFunctionBBWhite1043() {
	configs[24]-=   81;
}

void FlipFunctionBBBlack1043() {
	configs[24]+=   81;
}

void FlipFunctionBBWhite1044() {
	configs[ 5]-=  486;
	configs[16]-=   18;
	configs[24]-=  567;
	configs[32]-=  486;
	bb.mover.u4s[1]^=0x2000;
}

void FlipFunctionBBBlack1044() {
	configs[ 5]+=  486;
	configs[16]+=   18;
	configs[24]+=  567;
	configs[32]+=  486;
	bb.mover.u4s[1]^=0x2000;
}

void FlipFunctionBBWhite1045() {
	configs[ 5]-=  486;
	configs[ 6]-=  486;
	configs[16]-=   18;
	configs[17]-=   18;
	configs[24]-= 2025;
	configs[32]-=  486;
	configs[33]-=  486;
	bb.mover.u4s[1]^=0x202000;
}

void FlipFunctionBBBlack1045() {
	configs[ 5]+=  486;
	configs[ 6]+=  486;
	configs[16]+=   18;
	configs[17]+=   18;
	configs[24]+= 2025;
	configs[32]+=  486;
	configs[33]+=  486;
	bb.mover.u4s[1]^=0x202000;
}

void FlipFunctionBBWhite1046() {
	configs[ 3]-=  486;
	configs[14]-=   18;
	configs[24]-=  135;
	configs[30]-=   54;
	bb.mover.u4s[0]^=0x20000000;
}

void FlipFunctionBBBlack1046() {
	configs[ 3]+=  486;
	configs[14]+=   18;
	configs[24]+=  135;
	configs[30]+=   54;
	bb.mover.u4s[0]^=0x20000000;
}

void FlipFunctionBBWhite1047() {
	configs[ 3]-=  486;
	configs[ 5]-=  486;
	configs[14]-=   18;
	configs[16]-=   18;
	configs[24]-=  621;
	configs[30]-=   54;
	configs[32]-=  486;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x2000;
}

void FlipFunctionBBBlack1047() {
	configs[ 3]+=  486;
	configs[ 5]+=  486;
	configs[14]+=   18;
	configs[16]+=   18;
	configs[24]+=  621;
	configs[30]+=   54;
	configs[32]+=  486;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x2000;
}

void FlipFunctionBBWhite1048() {
	configs[ 3]-=  486;
	configs[ 5]-=  486;
	configs[ 6]-=  486;
	configs[14]-=   18;
	configs[16]-=   18;
	configs[17]-=   18;
	configs[24]-= 2079;
	configs[30]-=   54;
	configs[32]-=  486;
	configs[33]-=  486;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x202000;
}

void FlipFunctionBBBlack1048() {
	configs[ 3]+=  486;
	configs[ 5]+=  486;
	configs[ 6]+=  486;
	configs[14]+=   18;
	configs[16]+=   18;
	configs[17]+=   18;
	configs[24]+= 2079;
	configs[30]+=   54;
	configs[32]+=  486;
	configs[33]+=  486;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x202000;
}

void FlipFunctionBBWhite1049() {
	configs[ 2]-=  486;
	configs[ 3]-=  486;
	configs[13]-=   18;
	configs[14]-=   18;
	configs[24]-=  153;
	configs[29]-=   18;
	configs[30]-=   54;
	bb.mover.u4s[0]^=0x20200000;
}

void FlipFunctionBBBlack1049() {
	configs[ 2]+=  486;
	configs[ 3]+=  486;
	configs[13]+=   18;
	configs[14]+=   18;
	configs[24]+=  153;
	configs[29]+=   18;
	configs[30]+=   54;
	bb.mover.u4s[0]^=0x20200000;
}

void FlipFunctionBBWhite1050() {
	configs[ 2]-=  486;
	configs[ 3]-=  486;
	configs[ 5]-=  486;
	configs[13]-=   18;
	configs[14]-=   18;
	configs[16]-=   18;
	configs[24]-=  639;
	configs[29]-=   18;
	configs[30]-=   54;
	configs[32]-=  486;
	bb.mover.u4s[0]^=0x20200000;
	bb.mover.u4s[1]^=0x2000;
}

void FlipFunctionBBBlack1050() {
	configs[ 2]+=  486;
	configs[ 3]+=  486;
	configs[ 5]+=  486;
	configs[13]+=   18;
	configs[14]+=   18;
	configs[16]+=   18;
	configs[24]+=  639;
	configs[29]+=   18;
	configs[30]+=   54;
	configs[32]+=  486;
	bb.mover.u4s[0]^=0x20200000;
	bb.mover.u4s[1]^=0x2000;
}

void FlipFunctionBBWhite1051() {
	configs[ 2]-=  486;
	configs[ 3]-=  486;
	configs[ 5]-=  486;
	configs[ 6]-=  486;
	configs[13]-=   18;
	configs[14]-=   18;
	configs[16]-=   18;
	configs[17]-=   18;
	configs[24]-= 2097;
	configs[29]-=   18;
	configs[30]-=   54;
	configs[32]-=  486;
	configs[33]-=  486;
	bb.mover.u4s[0]^=0x20200000;
	bb.mover.u4s[1]^=0x202000;
}

void FlipFunctionBBBlack1051() {
	configs[ 2]+=  486;
	configs[ 3]+=  486;
	configs[ 5]+=  486;
	configs[ 6]+=  486;
	configs[13]+=   18;
	configs[14]+=   18;
	configs[16]+=   18;
	configs[17]+=   18;
	configs[24]+= 2097;
	configs[29]+=   18;
	configs[30]+=   54;
	configs[32]+=  486;
	configs[33]+=  486;
	bb.mover.u4s[0]^=0x20200000;
	bb.mover.u4s[1]^=0x202000;
}

void FlipFunctionBBWhite1052() {
	configs[ 1]-=  486;
	configs[ 2]-=  486;
	configs[ 3]-=  486;
	configs[12]-=    6;
	configs[13]-=   18;
	configs[14]-=   18;
	configs[24]-=  159;
	configs[28]-=    6;
	configs[29]-=   18;
	configs[30]-=   54;
	bb.mover.u4s[0]^=0x20202000;
}

void FlipFunctionBBBlack1052() {
	configs[ 1]+=  486;
	configs[ 2]+=  486;
	configs[ 3]+=  486;
	configs[12]+=    6;
	configs[13]+=   18;
	configs[14]+=   18;
	configs[24]+=  159;
	configs[28]+=    6;
	configs[29]+=   18;
	configs[30]+=   54;
	bb.mover.u4s[0]^=0x20202000;
}

void FlipFunctionBBWhite1053() {
	configs[ 1]-=  486;
	configs[ 2]-=  486;
	configs[ 3]-=  486;
	configs[ 5]-=  486;
	configs[12]-=    6;
	configs[13]-=   18;
	configs[14]-=   18;
	configs[16]-=   18;
	configs[24]-=  645;
	configs[28]-=    6;
	configs[29]-=   18;
	configs[30]-=   54;
	configs[32]-=  486;
	bb.mover.u4s[0]^=0x20202000;
	bb.mover.u4s[1]^=0x2000;
}

void FlipFunctionBBBlack1053() {
	configs[ 1]+=  486;
	configs[ 2]+=  486;
	configs[ 3]+=  486;
	configs[ 5]+=  486;
	configs[12]+=    6;
	configs[13]+=   18;
	configs[14]+=   18;
	configs[16]+=   18;
	configs[24]+=  645;
	configs[28]+=    6;
	configs[29]+=   18;
	configs[30]+=   54;
	configs[32]+=  486;
	bb.mover.u4s[0]^=0x20202000;
	bb.mover.u4s[1]^=0x2000;
}

void FlipFunctionBBWhite1054() {
	configs[ 1]-=  486;
	configs[ 2]-=  486;
	configs[ 3]-=  486;
	configs[ 5]-=  486;
	configs[ 6]-=  486;
	configs[12]-=    6;
	configs[13]-=   18;
	configs[14]-=   18;
	configs[16]-=   18;
	configs[17]-=   18;
	configs[24]-= 2103;
	configs[28]-=    6;
	configs[29]-=   18;
	configs[30]-=   54;
	configs[32]-=  486;
	configs[33]-=  486;
	bb.mover.u4s[0]^=0x20202000;
	bb.mover.u4s[1]^=0x202000;
}

void FlipFunctionBBBlack1054() {
	configs[ 1]+=  486;
	configs[ 2]+=  486;
	configs[ 3]+=  486;
	configs[ 5]+=  486;
	configs[ 6]+=  486;
	configs[12]+=    6;
	configs[13]+=   18;
	configs[14]+=   18;
	configs[16]+=   18;
	configs[17]+=   18;
	configs[24]+= 2103;
	configs[28]+=    6;
	configs[29]+=   18;
	configs[30]+=   54;
	configs[32]+=  486;
	configs[33]+=  486;
	bb.mover.u4s[0]^=0x20202000;
	bb.mover.u4s[1]^=0x202000;
}

void FlipFunctionBBWhite1055() {
	configs[31]-=   81;
}

void FlipFunctionBBBlack1055() {
	configs[31]+=   81;
}

void FlipFunctionBBWhite1056() {
	configs[ 5]-= 1458;
	configs[17]-=    6;
	configs[25]-=  486;
	configs[31]-=  567;
	bb.mover.u4s[1]^=0x4000;
}

void FlipFunctionBBBlack1056() {
	configs[ 5]+= 1458;
	configs[17]+=    6;
	configs[25]+=  486;
	configs[31]+=  567;
	bb.mover.u4s[1]^=0x4000;
}

void FlipFunctionBBWhite1057() {
	configs[ 3]-=  162;
	configs[13]-=   54;
	configs[23]-=   54;
	configs[31]-=  135;
	bb.mover.u4s[0]^=0x10000000;
}

void FlipFunctionBBBlack1057() {
	configs[ 3]+=  162;
	configs[13]+=   54;
	configs[23]+=   54;
	configs[31]+=  135;
	bb.mover.u4s[0]^=0x10000000;
}

void FlipFunctionBBWhite1058() {
	configs[ 3]-=  162;
	configs[ 5]-= 1458;
	configs[13]-=   54;
	configs[17]-=    6;
	configs[23]-=   54;
	configs[25]-=  486;
	configs[31]-=  621;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x4000;
}

void FlipFunctionBBBlack1058() {
	configs[ 3]+=  162;
	configs[ 5]+= 1458;
	configs[13]+=   54;
	configs[17]+=    6;
	configs[23]+=   54;
	configs[25]+=  486;
	configs[31]+=  621;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x4000;
}

void FlipFunctionBBWhite1059() {
	configs[ 2]-=   54;
	configs[ 3]-=  162;
	configs[11]-=   18;
	configs[13]-=   54;
	configs[22]-=   18;
	configs[23]-=   54;
	configs[31]-=  153;
	bb.mover.u4s[0]^=0x10080000;
}

void FlipFunctionBBBlack1059() {
	configs[ 2]+=   54;
	configs[ 3]+=  162;
	configs[11]+=   18;
	configs[13]+=   54;
	configs[22]+=   18;
	configs[23]+=   54;
	configs[31]+=  153;
	bb.mover.u4s[0]^=0x10080000;
}

void FlipFunctionBBWhite1060() {
	configs[ 2]-=   54;
	configs[ 3]-=  162;
	configs[ 5]-= 1458;
	configs[11]-=   18;
	configs[13]-=   54;
	configs[17]-=    6;
	configs[22]-=   18;
	configs[23]-=   54;
	configs[25]-=  486;
	configs[31]-=  639;
	bb.mover.u4s[0]^=0x10080000;
	bb.mover.u4s[1]^=0x4000;
}

void FlipFunctionBBBlack1060() {
	configs[ 2]+=   54;
	configs[ 3]+=  162;
	configs[ 5]+= 1458;
	configs[11]+=   18;
	configs[13]+=   54;
	configs[17]+=    6;
	configs[22]+=   18;
	configs[23]+=   54;
	configs[25]+=  486;
	configs[31]+=  639;
	bb.mover.u4s[0]^=0x10080000;
	bb.mover.u4s[1]^=0x4000;
}

void FlipFunctionBBWhite1061() {
	configs[ 1]-=   18;
	configs[ 2]-=   54;
	configs[ 3]-=  162;
	configs[ 9]-=    6;
	configs[11]-=   18;
	configs[13]-=   54;
	configs[21]-=    6;
	configs[22]-=   18;
	configs[23]-=   54;
	configs[31]-=  159;
	bb.mover.u4s[0]^=0x10080400;
}

void FlipFunctionBBBlack1061() {
	configs[ 1]+=   18;
	configs[ 2]+=   54;
	configs[ 3]+=  162;
	configs[ 9]+=    6;
	configs[11]+=   18;
	configs[13]+=   54;
	configs[21]+=    6;
	configs[22]+=   18;
	configs[23]+=   54;
	configs[31]+=  159;
	bb.mover.u4s[0]^=0x10080400;
}

void FlipFunctionBBWhite1062() {
	configs[ 1]-=   18;
	configs[ 2]-=   54;
	configs[ 3]-=  162;
	configs[ 5]-= 1458;
	configs[ 9]-=    6;
	configs[11]-=   18;
	configs[13]-=   54;
	configs[17]-=    6;
	configs[21]-=    6;
	configs[22]-=   18;
	configs[23]-=   54;
	configs[25]-=  486;
	configs[31]-=  645;
	bb.mover.u4s[0]^=0x10080400;
	bb.mover.u4s[1]^=0x4000;
}

void FlipFunctionBBBlack1062() {
	configs[ 1]+=   18;
	configs[ 2]+=   54;
	configs[ 3]+=  162;
	configs[ 5]+= 1458;
	configs[ 9]+=    6;
	configs[11]+=   18;
	configs[13]+=   54;
	configs[17]+=    6;
	configs[21]+=    6;
	configs[22]+=   18;
	configs[23]+=   54;
	configs[25]+=  486;
	configs[31]+=  645;
	bb.mover.u4s[0]^=0x10080400;
	bb.mover.u4s[1]^=0x4000;
}

void FlipFunctionBBWhite1063() {
	configs[ 4]-=  729;
	bb.mover.u4s[1]^=0x40;
	bb.empty.u4s[1]^=0x40;
}

void FlipFunctionBBBlack1063() {
	configs[ 4]+=  729;
	bb.mover.u4s[1]^=0x40;
	bb.empty.u4s[1]^=0x40;
}

void FlipFunctionBBWhite1064() {
	configs[ 4]-= 1215;
	configs[15]-=   18;
	configs[24]-=  162;
	configs[31]-=  162;
	bb.mover.u4s[1]^=0x60;
	bb.empty.u4s[1]^=0x40;
}

void FlipFunctionBBBlack1064() {
	configs[ 4]+= 1215;
	configs[15]+=   18;
	configs[24]+=  162;
	configs[31]+=  162;
	bb.mover.u4s[1]^=0x60;
	bb.empty.u4s[1]^=0x40;
}

void FlipFunctionBBWhite1065() {
	configs[ 4]-= 1377;
	configs[14]-=   54;
	configs[15]-=   18;
	configs[23]-=  162;
	configs[24]-=  162;
	configs[31]-=  162;
	configs[32]-=  162;
	bb.mover.u4s[1]^=0x70;
	bb.empty.u4s[1]^=0x40;
}

void FlipFunctionBBBlack1065() {
	configs[ 4]+= 1377;
	configs[14]+=   54;
	configs[15]+=   18;
	configs[23]+=  162;
	configs[24]+=  162;
	configs[31]+=  162;
	configs[32]+=  162;
	bb.mover.u4s[1]^=0x70;
	bb.empty.u4s[1]^=0x40;
}

void FlipFunctionBBWhite1066() {
	configs[ 4]-= 1431;
	configs[13]-=  162;
	configs[14]-=   54;
	configs[15]-=   18;
	configs[22]-=  162;
	configs[23]-=  162;
	configs[24]-=  162;
	configs[31]-=  162;
	configs[32]-=  162;
	configs[33]-=   54;
	bb.mover.u4s[1]^=0x78;
	bb.empty.u4s[1]^=0x40;
}

void FlipFunctionBBBlack1066() {
	configs[ 4]+= 1431;
	configs[13]+=  162;
	configs[14]+=   54;
	configs[15]+=   18;
	configs[22]+=  162;
	configs[23]+=  162;
	configs[24]+=  162;
	configs[31]+=  162;
	configs[32]+=  162;
	configs[33]+=   54;
	bb.mover.u4s[1]^=0x78;
	bb.empty.u4s[1]^=0x40;
}

void FlipFunctionBBWhite1067() {
	configs[ 4]-= 1449;
	configs[12]-=  162;
	configs[13]-=  162;
	configs[14]-=   54;
	configs[15]-=   18;
	configs[21]-=  162;
	configs[22]-=  162;
	configs[23]-=  162;
	configs[24]-=  162;
	configs[31]-=  162;
	configs[32]-=  162;
	configs[33]-=   54;
	configs[34]-=   18;
	bb.mover.u4s[1]^=0x7C;
	bb.empty.u4s[1]^=0x40;
}

void FlipFunctionBBBlack1067() {
	configs[ 4]+= 1449;
	configs[12]+=  162;
	configs[13]+=  162;
	configs[14]+=   54;
	configs[15]+=   18;
	configs[21]+=  162;
	configs[22]+=  162;
	configs[23]+=  162;
	configs[24]+=  162;
	configs[31]+=  162;
	configs[32]+=  162;
	configs[33]+=   54;
	configs[34]+=   18;
	bb.mover.u4s[1]^=0x7C;
	bb.empty.u4s[1]^=0x40;
}

void FlipFunctionBBWhite1068() {
	configs[ 4]-= 1455;
	configs[11]-=  162;
	configs[12]-=  162;
	configs[13]-=  162;
	configs[14]-=   54;
	configs[15]-=   18;
	configs[20]-=  162;
	configs[21]-=  162;
	configs[22]-=  162;
	configs[23]-=  162;
	configs[24]-=  162;
	configs[31]-=  162;
	configs[32]-=  162;
	configs[33]-=   54;
	configs[34]-=   18;
	configs[35]-=    6;
	bb.mover.u4s[1]^=0x7E;
	bb.empty.u4s[1]^=0x40;
}

void FlipFunctionBBBlack1068() {
	configs[ 4]+= 1455;
	configs[11]+=  162;
	configs[12]+=  162;
	configs[13]+=  162;
	configs[14]+=   54;
	configs[15]+=   18;
	configs[20]+=  162;
	configs[21]+=  162;
	configs[22]+=  162;
	configs[23]+=  162;
	configs[24]+=  162;
	configs[31]+=  162;
	configs[32]+=  162;
	configs[33]+=   54;
	configs[34]+=   18;
	configs[35]+=    6;
	bb.mover.u4s[1]^=0x7E;
	bb.empty.u4s[1]^=0x40;
}

void FlipFunctionBBWhite1069() {
	configs[16]-=    3;
}

void FlipFunctionBBBlack1069() {
	configs[16]+=    3;
}

void FlipFunctionBBWhite1070() {
	configs[ 5]-=  486;
	configs[16]-=   21;
	configs[24]-=  486;
	configs[32]-=  486;
	bb.mover.u4s[1]^=0x2000;
}

void FlipFunctionBBBlack1070() {
	configs[ 5]+=  486;
	configs[16]+=   21;
	configs[24]+=  486;
	configs[32]+=  486;
	bb.mover.u4s[1]^=0x2000;
}

void FlipFunctionBBWhite1071() {
	configs[ 5]-=  486;
	configs[ 6]-=  162;
	configs[16]-=   75;
	configs[23]-= 1458;
	configs[24]-=  486;
	configs[32]-=  486;
	configs[34]-=  162;
	bb.mover.u4s[1]^=0x102000;
}

void FlipFunctionBBBlack1071() {
	configs[ 5]+=  486;
	configs[ 6]+=  162;
	configs[16]+=   75;
	configs[23]+= 1458;
	configs[24]+=  486;
	configs[32]+=  486;
	configs[34]+=  162;
	bb.mover.u4s[1]^=0x102000;
}

void FlipFunctionBBWhite1072() {
	configs[25]-=   81;
}

void FlipFunctionBBBlack1072() {
	configs[25]+=   81;
}

void FlipFunctionBBWhite1073() {
	configs[ 5]-= 1458;
	configs[17]-=    6;
	configs[25]-=  567;
	configs[31]-=  486;
	bb.mover.u4s[1]^=0x4000;
}

void FlipFunctionBBBlack1073() {
	configs[ 5]+= 1458;
	configs[17]+=    6;
	configs[25]+=  567;
	configs[31]+=  486;
	bb.mover.u4s[1]^=0x4000;
}

void FlipFunctionBBWhite1074() {
	configs[ 5]-= 1458;
	configs[ 6]-= 1458;
	configs[17]-=    6;
	configs[18]-=    6;
	configs[25]-= 2025;
	configs[31]-=  486;
	configs[32]-= 1458;
	bb.mover.u4s[1]^=0x404000;
}

void FlipFunctionBBBlack1074() {
	configs[ 5]+= 1458;
	configs[ 6]+= 1458;
	configs[17]+=    6;
	configs[18]+=    6;
	configs[25]+= 2025;
	configs[31]+=  486;
	configs[32]+= 1458;
	bb.mover.u4s[1]^=0x404000;
}

void FlipFunctionBBWhite1075() {
	configs[ 3]-= 1458;
	configs[15]-=    6;
	configs[25]-=  135;
	configs[29]-=   54;
	bb.mover.u4s[0]^=0x40000000;
}

void FlipFunctionBBBlack1075() {
	configs[ 3]+= 1458;
	configs[15]+=    6;
	configs[25]+=  135;
	configs[29]+=   54;
	bb.mover.u4s[0]^=0x40000000;
}

void FlipFunctionBBWhite1076() {
	configs[ 3]-= 1458;
	configs[ 5]-= 1458;
	configs[15]-=    6;
	configs[17]-=    6;
	configs[25]-=  621;
	configs[29]-=   54;
	configs[31]-=  486;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x4000;
}

void FlipFunctionBBBlack1076() {
	configs[ 3]+= 1458;
	configs[ 5]+= 1458;
	configs[15]+=    6;
	configs[17]+=    6;
	configs[25]+=  621;
	configs[29]+=   54;
	configs[31]+=  486;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x4000;
}

void FlipFunctionBBWhite1077() {
	configs[ 3]-= 1458;
	configs[ 5]-= 1458;
	configs[ 6]-= 1458;
	configs[15]-=    6;
	configs[17]-=    6;
	configs[18]-=    6;
	configs[25]-= 2079;
	configs[29]-=   54;
	configs[31]-=  486;
	configs[32]-= 1458;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x404000;
}

void FlipFunctionBBBlack1077() {
	configs[ 3]+= 1458;
	configs[ 5]+= 1458;
	configs[ 6]+= 1458;
	configs[15]+=    6;
	configs[17]+=    6;
	configs[18]+=    6;
	configs[25]+= 2079;
	configs[29]+=   54;
	configs[31]+=  486;
	configs[32]+= 1458;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x404000;
}

void FlipFunctionBBWhite1078() {
	configs[ 2]-= 1458;
	configs[ 3]-= 1458;
	configs[14]-=    6;
	configs[15]-=    6;
	configs[25]-=  153;
	configs[28]-=   18;
	configs[29]-=   54;
	bb.mover.u4s[0]^=0x40400000;
}

void FlipFunctionBBBlack1078() {
	configs[ 2]+= 1458;
	configs[ 3]+= 1458;
	configs[14]+=    6;
	configs[15]+=    6;
	configs[25]+=  153;
	configs[28]+=   18;
	configs[29]+=   54;
	bb.mover.u4s[0]^=0x40400000;
}

void FlipFunctionBBWhite1079() {
	configs[ 2]-= 1458;
	configs[ 3]-= 1458;
	configs[ 5]-= 1458;
	configs[14]-=    6;
	configs[15]-=    6;
	configs[17]-=    6;
	configs[25]-=  639;
	configs[28]-=   18;
	configs[29]-=   54;
	configs[31]-=  486;
	bb.mover.u4s[0]^=0x40400000;
	bb.mover.u4s[1]^=0x4000;
}

void FlipFunctionBBBlack1079() {
	configs[ 2]+= 1458;
	configs[ 3]+= 1458;
	configs[ 5]+= 1458;
	configs[14]+=    6;
	configs[15]+=    6;
	configs[17]+=    6;
	configs[25]+=  639;
	configs[28]+=   18;
	configs[29]+=   54;
	configs[31]+=  486;
	bb.mover.u4s[0]^=0x40400000;
	bb.mover.u4s[1]^=0x4000;
}

void FlipFunctionBBWhite1080() {
	configs[ 2]-= 1458;
	configs[ 3]-= 1458;
	configs[ 5]-= 1458;
	configs[ 6]-= 1458;
	configs[14]-=    6;
	configs[15]-=    6;
	configs[17]-=    6;
	configs[18]-=    6;
	configs[25]-= 2097;
	configs[28]-=   18;
	configs[29]-=   54;
	configs[31]-=  486;
	configs[32]-= 1458;
	bb.mover.u4s[0]^=0x40400000;
	bb.mover.u4s[1]^=0x404000;
}

void FlipFunctionBBBlack1080() {
	configs[ 2]+= 1458;
	configs[ 3]+= 1458;
	configs[ 5]+= 1458;
	configs[ 6]+= 1458;
	configs[14]+=    6;
	configs[15]+=    6;
	configs[17]+=    6;
	configs[18]+=    6;
	configs[25]+= 2097;
	configs[28]+=   18;
	configs[29]+=   54;
	configs[31]+=  486;
	configs[32]+= 1458;
	bb.mover.u4s[0]^=0x40400000;
	bb.mover.u4s[1]^=0x404000;
}

void FlipFunctionBBWhite1081() {
	configs[ 1]-= 1458;
	configs[ 2]-= 1458;
	configs[ 3]-= 1458;
	configs[13]-=    6;
	configs[14]-=    6;
	configs[15]-=    6;
	configs[25]-=  159;
	configs[27]-=    6;
	configs[28]-=   18;
	configs[29]-=   54;
	bb.mover.u4s[0]^=0x40404000;
}

void FlipFunctionBBBlack1081() {
	configs[ 1]+= 1458;
	configs[ 2]+= 1458;
	configs[ 3]+= 1458;
	configs[13]+=    6;
	configs[14]+=    6;
	configs[15]+=    6;
	configs[25]+=  159;
	configs[27]+=    6;
	configs[28]+=   18;
	configs[29]+=   54;
	bb.mover.u4s[0]^=0x40404000;
}

void FlipFunctionBBWhite1082() {
	configs[ 1]-= 1458;
	configs[ 2]-= 1458;
	configs[ 3]-= 1458;
	configs[ 5]-= 1458;
	configs[13]-=    6;
	configs[14]-=    6;
	configs[15]-=    6;
	configs[17]-=    6;
	configs[25]-=  645;
	configs[27]-=    6;
	configs[28]-=   18;
	configs[29]-=   54;
	configs[31]-=  486;
	bb.mover.u4s[0]^=0x40404000;
	bb.mover.u4s[1]^=0x4000;
}

void FlipFunctionBBBlack1082() {
	configs[ 1]+= 1458;
	configs[ 2]+= 1458;
	configs[ 3]+= 1458;
	configs[ 5]+= 1458;
	configs[13]+=    6;
	configs[14]+=    6;
	configs[15]+=    6;
	configs[17]+=    6;
	configs[25]+=  645;
	configs[27]+=    6;
	configs[28]+=   18;
	configs[29]+=   54;
	configs[31]+=  486;
	bb.mover.u4s[0]^=0x40404000;
	bb.mover.u4s[1]^=0x4000;
}

void FlipFunctionBBWhite1083() {
	configs[ 1]-= 1458;
	configs[ 2]-= 1458;
	configs[ 3]-= 1458;
	configs[ 5]-= 1458;
	configs[ 6]-= 1458;
	configs[13]-=    6;
	configs[14]-=    6;
	configs[15]-=    6;
	configs[17]-=    6;
	configs[18]-=    6;
	configs[25]-= 2103;
	configs[27]-=    6;
	configs[28]-=   18;
	configs[29]-=   54;
	configs[31]-=  486;
	configs[32]-= 1458;
	bb.mover.u4s[0]^=0x40404000;
	bb.mover.u4s[1]^=0x404000;
}

void FlipFunctionBBBlack1083() {
	configs[ 1]+= 1458;
	configs[ 2]+= 1458;
	configs[ 3]+= 1458;
	configs[ 5]+= 1458;
	configs[ 6]+= 1458;
	configs[13]+=    6;
	configs[14]+=    6;
	configs[15]+=    6;
	configs[17]+=    6;
	configs[18]+=    6;
	configs[25]+= 2103;
	configs[27]+=    6;
	configs[28]+=   18;
	configs[29]+=   54;
	configs[31]+=  486;
	configs[32]+= 1458;
	bb.mover.u4s[0]^=0x40404000;
	bb.mover.u4s[1]^=0x404000;
}

void FlipFunctionBBWhite1084() {
	configs[30]-=   81;
}

void FlipFunctionBBBlack1084() {
	configs[30]+=   81;
}

void FlipFunctionBBWhite1085() {
	configs[ 3]-=  486;
	configs[14]-=   18;
	configs[24]-=   54;
	configs[30]-=  135;
	bb.mover.u4s[0]^=0x20000000;
}

void FlipFunctionBBBlack1085() {
	configs[ 3]+=  486;
	configs[14]+=   18;
	configs[24]+=   54;
	configs[30]+=  135;
	bb.mover.u4s[0]^=0x20000000;
}

void FlipFunctionBBWhite1086() {
	configs[ 2]-=  162;
	configs[ 3]-=  486;
	configs[12]-=   18;
	configs[14]-=   18;
	configs[23]-=   18;
	configs[24]-=   54;
	configs[30]-=  153;
	bb.mover.u4s[0]^=0x20100000;
}

void FlipFunctionBBBlack1086() {
	configs[ 2]+=  162;
	configs[ 3]+=  486;
	configs[12]+=   18;
	configs[14]+=   18;
	configs[23]+=   18;
	configs[24]+=   54;
	configs[30]+=  153;
	bb.mover.u4s[0]^=0x20100000;
}

void FlipFunctionBBWhite1087() {
	configs[ 1]-=   54;
	configs[ 2]-=  162;
	configs[ 3]-=  486;
	configs[10]-=    6;
	configs[12]-=   18;
	configs[14]-=   18;
	configs[22]-=    6;
	configs[23]-=   18;
	configs[24]-=   54;
	configs[30]-=  159;
	bb.mover.u4s[0]^=0x20100800;
}

void FlipFunctionBBBlack1087() {
	configs[ 1]+=   54;
	configs[ 2]+=  162;
	configs[ 3]+=  486;
	configs[10]+=    6;
	configs[12]+=   18;
	configs[14]+=   18;
	configs[22]+=    6;
	configs[23]+=   18;
	configs[24]+=   54;
	configs[30]+=  159;
	bb.mover.u4s[0]^=0x20100800;
}

void FlipFunctionBBWhite1088() {
	configs[ 4]-= 2187;
	bb.mover.u4s[1]^=0x80;
	bb.empty.u4s[1]^=0x80;
}

void FlipFunctionBBBlack1088() {
	configs[ 4]+= 2187;
	bb.mover.u4s[1]^=0x80;
	bb.empty.u4s[1]^=0x80;
}

void FlipFunctionBBWhite1089() {
	configs[ 4]-= 3645;
	configs[16]-=    6;
	configs[25]-=  162;
	configs[30]-=  162;
	bb.mover.u4s[1]^=0xC0;
	bb.empty.u4s[1]^=0x80;
}

void FlipFunctionBBBlack1089() {
	configs[ 4]+= 3645;
	configs[16]+=    6;
	configs[25]+=  162;
	configs[30]+=  162;
	bb.mover.u4s[1]^=0xC0;
	bb.empty.u4s[1]^=0x80;
}

void FlipFunctionBBWhite1090() {
	configs[ 4]-= 4131;
	configs[15]-=   18;
	configs[16]-=    6;
	configs[24]-=  162;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[31]-=  162;
	bb.mover.u4s[1]^=0xE0;
	bb.empty.u4s[1]^=0x80;
}

void FlipFunctionBBBlack1090() {
	configs[ 4]+= 4131;
	configs[15]+=   18;
	configs[16]+=    6;
	configs[24]+=  162;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[31]+=  162;
	bb.mover.u4s[1]^=0xE0;
	bb.empty.u4s[1]^=0x80;
}

void FlipFunctionBBWhite1091() {
	configs[ 4]-= 4293;
	configs[14]-=   54;
	configs[15]-=   18;
	configs[16]-=    6;
	configs[23]-=  162;
	configs[24]-=  162;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[31]-=  162;
	configs[32]-=  162;
	bb.mover.u4s[1]^=0xF0;
	bb.empty.u4s[1]^=0x80;
}

void FlipFunctionBBBlack1091() {
	configs[ 4]+= 4293;
	configs[14]+=   54;
	configs[15]+=   18;
	configs[16]+=    6;
	configs[23]+=  162;
	configs[24]+=  162;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[31]+=  162;
	configs[32]+=  162;
	bb.mover.u4s[1]^=0xF0;
	bb.empty.u4s[1]^=0x80;
}

void FlipFunctionBBWhite1092() {
	configs[ 4]-= 4347;
	configs[13]-=  162;
	configs[14]-=   54;
	configs[15]-=   18;
	configs[16]-=    6;
	configs[22]-=  162;
	configs[23]-=  162;
	configs[24]-=  162;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[31]-=  162;
	configs[32]-=  162;
	configs[33]-=   54;
	bb.mover.u4s[1]^=0xF8;
	bb.empty.u4s[1]^=0x80;
}

void FlipFunctionBBBlack1092() {
	configs[ 4]+= 4347;
	configs[13]+=  162;
	configs[14]+=   54;
	configs[15]+=   18;
	configs[16]+=    6;
	configs[22]+=  162;
	configs[23]+=  162;
	configs[24]+=  162;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[31]+=  162;
	configs[32]+=  162;
	configs[33]+=   54;
	bb.mover.u4s[1]^=0xF8;
	bb.empty.u4s[1]^=0x80;
}

void FlipFunctionBBWhite1093() {
	configs[ 4]-= 4365;
	configs[12]-=  162;
	configs[13]-=  162;
	configs[14]-=   54;
	configs[15]-=   18;
	configs[16]-=    6;
	configs[21]-=  162;
	configs[22]-=  162;
	configs[23]-=  162;
	configs[24]-=  162;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[31]-=  162;
	configs[32]-=  162;
	configs[33]-=   54;
	configs[34]-=   18;
	bb.mover.u4s[1]^=0xFC;
	bb.empty.u4s[1]^=0x80;
}

void FlipFunctionBBBlack1093() {
	configs[ 4]+= 4365;
	configs[12]+=  162;
	configs[13]+=  162;
	configs[14]+=   54;
	configs[15]+=   18;
	configs[16]+=    6;
	configs[21]+=  162;
	configs[22]+=  162;
	configs[23]+=  162;
	configs[24]+=  162;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[31]+=  162;
	configs[32]+=  162;
	configs[33]+=   54;
	configs[34]+=   18;
	bb.mover.u4s[1]^=0xFC;
	bb.empty.u4s[1]^=0x80;
}

void FlipFunctionBBWhite1094() {
	configs[ 4]-= 4371;
	configs[11]-=  162;
	configs[12]-=  162;
	configs[13]-=  162;
	configs[14]-=   54;
	configs[15]-=   18;
	configs[16]-=    6;
	configs[20]-=  162;
	configs[21]-=  162;
	configs[22]-=  162;
	configs[23]-=  162;
	configs[24]-=  162;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[31]-=  162;
	configs[32]-=  162;
	configs[33]-=   54;
	configs[34]-=   18;
	configs[35]-=    6;
	bb.mover.u4s[1]^=0xFE;
	bb.empty.u4s[1]^=0x80;
}

void FlipFunctionBBBlack1094() {
	configs[ 4]+= 4371;
	configs[11]+=  162;
	configs[12]+=  162;
	configs[13]+=  162;
	configs[14]+=   54;
	configs[15]+=   18;
	configs[16]+=    6;
	configs[20]+=  162;
	configs[21]+=  162;
	configs[22]+=  162;
	configs[23]+=  162;
	configs[24]+=  162;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[31]+=  162;
	configs[32]+=  162;
	configs[33]+=   54;
	configs[34]+=   18;
	configs[35]+=    6;
	bb.mover.u4s[1]^=0xFE;
	bb.empty.u4s[1]^=0x80;
}

void FlipFunctionBBWhite1095() {
	configs[17]-=    1;
}

void FlipFunctionBBBlack1095() {
	configs[17]+=    1;
}

void FlipFunctionBBWhite1096() {
	configs[ 5]-= 1458;
	configs[17]-=    7;
	configs[25]-=  486;
	configs[31]-=  486;
	bb.mover.u4s[1]^=0x4000;
}

void FlipFunctionBBBlack1096() {
	configs[ 5]+= 1458;
	configs[17]+=    7;
	configs[25]+=  486;
	configs[31]+=  486;
	bb.mover.u4s[1]^=0x4000;
}

void FlipFunctionBBWhite1097() {
	configs[ 5]-= 1458;
	configs[ 6]-=  486;
	configs[17]-=   25;
	configs[24]-= 1458;
	configs[25]-=  486;
	configs[31]-=  486;
	configs[33]-=  486;
	bb.mover.u4s[1]^=0x204000;
}

void FlipFunctionBBBlack1097() {
	configs[ 5]+= 1458;
	configs[ 6]+=  486;
	configs[17]+=   25;
	configs[24]+= 1458;
	configs[25]+=  486;
	configs[31]+=  486;
	configs[33]+=  486;
	bb.mover.u4s[1]^=0x204000;
}

void FlipFunctionBBWhite1098() {
	configs[26]-=   81;
}

void FlipFunctionBBBlack1098() {
	configs[26]+=   81;
}

void FlipFunctionBBWhite1099() {
	configs[ 5]-= 4374;
	configs[18]-=    2;
	configs[26]-=  567;
	configs[30]-=  486;
	bb.mover.u4s[1]^=0x8000;
}

void FlipFunctionBBBlack1099() {
	configs[ 5]+= 4374;
	configs[18]+=    2;
	configs[26]+=  567;
	configs[30]+=  486;
	bb.mover.u4s[1]^=0x8000;
}

void FlipFunctionBBWhite1100() {
	configs[ 5]-= 4374;
	configs[ 6]-= 4374;
	configs[18]-=    2;
	configs[26]-= 2025;
	configs[30]-=  486;
	configs[31]-= 1458;
	bb.mover.u4s[1]^=0x808000;
}

void FlipFunctionBBBlack1100() {
	configs[ 5]+= 4374;
	configs[ 6]+= 4374;
	configs[18]+=    2;
	configs[26]+= 2025;
	configs[30]+=  486;
	configs[31]+= 1458;
	bb.mover.u4s[1]^=0x808000;
}

void FlipFunctionBBWhite1101() {
	configs[ 3]-= 4374;
	configs[16]-=    2;
	configs[26]-=  135;
	configs[28]-=   54;
	bb.mover.u4s[0]^=0x80000000;
}

void FlipFunctionBBBlack1101() {
	configs[ 3]+= 4374;
	configs[16]+=    2;
	configs[26]+=  135;
	configs[28]+=   54;
	bb.mover.u4s[0]^=0x80000000;
}

void FlipFunctionBBWhite1102() {
	configs[ 3]-= 4374;
	configs[ 5]-= 4374;
	configs[16]-=    2;
	configs[18]-=    2;
	configs[26]-=  621;
	configs[28]-=   54;
	configs[30]-=  486;
	bb.mover.u4s[0]^=0x80000000;
	bb.mover.u4s[1]^=0x8000;
}

void FlipFunctionBBBlack1102() {
	configs[ 3]+= 4374;
	configs[ 5]+= 4374;
	configs[16]+=    2;
	configs[18]+=    2;
	configs[26]+=  621;
	configs[28]+=   54;
	configs[30]+=  486;
	bb.mover.u4s[0]^=0x80000000;
	bb.mover.u4s[1]^=0x8000;
}

void FlipFunctionBBWhite1103() {
	configs[ 3]-= 4374;
	configs[ 5]-= 4374;
	configs[ 6]-= 4374;
	configs[16]-=    2;
	configs[18]-=    2;
	configs[26]-= 2079;
	configs[28]-=   54;
	configs[30]-=  486;
	configs[31]-= 1458;
	bb.mover.u4s[0]^=0x80000000;
	bb.mover.u4s[1]^=0x808000;
}

void FlipFunctionBBBlack1103() {
	configs[ 3]+= 4374;
	configs[ 5]+= 4374;
	configs[ 6]+= 4374;
	configs[16]+=    2;
	configs[18]+=    2;
	configs[26]+= 2079;
	configs[28]+=   54;
	configs[30]+=  486;
	configs[31]+= 1458;
	bb.mover.u4s[0]^=0x80000000;
	bb.mover.u4s[1]^=0x808000;
}

void FlipFunctionBBWhite1104() {
	configs[ 2]-= 4374;
	configs[ 3]-= 4374;
	configs[15]-=    2;
	configs[16]-=    2;
	configs[26]-=  153;
	configs[27]-=   18;
	configs[28]-=   54;
	bb.mover.u4s[0]^=0x80800000;
}

void FlipFunctionBBBlack1104() {
	configs[ 2]+= 4374;
	configs[ 3]+= 4374;
	configs[15]+=    2;
	configs[16]+=    2;
	configs[26]+=  153;
	configs[27]+=   18;
	configs[28]+=   54;
	bb.mover.u4s[0]^=0x80800000;
}

void FlipFunctionBBWhite1105() {
	configs[ 2]-= 4374;
	configs[ 3]-= 4374;
	configs[ 5]-= 4374;
	configs[15]-=    2;
	configs[16]-=    2;
	configs[18]-=    2;
	configs[26]-=  639;
	configs[27]-=   18;
	configs[28]-=   54;
	configs[30]-=  486;
	bb.mover.u4s[0]^=0x80800000;
	bb.mover.u4s[1]^=0x8000;
}

void FlipFunctionBBBlack1105() {
	configs[ 2]+= 4374;
	configs[ 3]+= 4374;
	configs[ 5]+= 4374;
	configs[15]+=    2;
	configs[16]+=    2;
	configs[18]+=    2;
	configs[26]+=  639;
	configs[27]+=   18;
	configs[28]+=   54;
	configs[30]+=  486;
	bb.mover.u4s[0]^=0x80800000;
	bb.mover.u4s[1]^=0x8000;
}

void FlipFunctionBBWhite1106() {
	configs[ 2]-= 4374;
	configs[ 3]-= 4374;
	configs[ 5]-= 4374;
	configs[ 6]-= 4374;
	configs[15]-=    2;
	configs[16]-=    2;
	configs[18]-=    2;
	configs[26]-= 2097;
	configs[27]-=   18;
	configs[28]-=   54;
	configs[30]-=  486;
	configs[31]-= 1458;
	bb.mover.u4s[0]^=0x80800000;
	bb.mover.u4s[1]^=0x808000;
}

void FlipFunctionBBBlack1106() {
	configs[ 2]+= 4374;
	configs[ 3]+= 4374;
	configs[ 5]+= 4374;
	configs[ 6]+= 4374;
	configs[15]+=    2;
	configs[16]+=    2;
	configs[18]+=    2;
	configs[26]+= 2097;
	configs[27]+=   18;
	configs[28]+=   54;
	configs[30]+=  486;
	configs[31]+= 1458;
	bb.mover.u4s[0]^=0x80800000;
	bb.mover.u4s[1]^=0x808000;
}

void FlipFunctionBBWhite1107() {
	configs[ 1]-= 4374;
	configs[ 2]-= 4374;
	configs[ 3]-= 4374;
	configs[14]-=    2;
	configs[15]-=    2;
	configs[16]-=    2;
	configs[26]-=  159;
	configs[27]-=   18;
	configs[28]-=   54;
	bb.mover.u4s[0]^=0x80808000;
}

void FlipFunctionBBBlack1107() {
	configs[ 1]+= 4374;
	configs[ 2]+= 4374;
	configs[ 3]+= 4374;
	configs[14]+=    2;
	configs[15]+=    2;
	configs[16]+=    2;
	configs[26]+=  159;
	configs[27]+=   18;
	configs[28]+=   54;
	bb.mover.u4s[0]^=0x80808000;
}

void FlipFunctionBBWhite1108() {
	configs[ 1]-= 4374;
	configs[ 2]-= 4374;
	configs[ 3]-= 4374;
	configs[ 5]-= 4374;
	configs[14]-=    2;
	configs[15]-=    2;
	configs[16]-=    2;
	configs[18]-=    2;
	configs[26]-=  645;
	configs[27]-=   18;
	configs[28]-=   54;
	configs[30]-=  486;
	bb.mover.u4s[0]^=0x80808000;
	bb.mover.u4s[1]^=0x8000;
}

void FlipFunctionBBBlack1108() {
	configs[ 1]+= 4374;
	configs[ 2]+= 4374;
	configs[ 3]+= 4374;
	configs[ 5]+= 4374;
	configs[14]+=    2;
	configs[15]+=    2;
	configs[16]+=    2;
	configs[18]+=    2;
	configs[26]+=  645;
	configs[27]+=   18;
	configs[28]+=   54;
	configs[30]+=  486;
	bb.mover.u4s[0]^=0x80808000;
	bb.mover.u4s[1]^=0x8000;
}

void FlipFunctionBBWhite1109() {
	configs[ 1]-= 4374;
	configs[ 2]-= 4374;
	configs[ 3]-= 4374;
	configs[ 5]-= 4374;
	configs[ 6]-= 4374;
	configs[14]-=    2;
	configs[15]-=    2;
	configs[16]-=    2;
	configs[18]-=    2;
	configs[26]-= 2103;
	configs[27]-=   18;
	configs[28]-=   54;
	configs[30]-=  486;
	configs[31]-= 1458;
	bb.mover.u4s[0]^=0x80808000;
	bb.mover.u4s[1]^=0x808000;
}

void FlipFunctionBBBlack1109() {
	configs[ 1]+= 4374;
	configs[ 2]+= 4374;
	configs[ 3]+= 4374;
	configs[ 5]+= 4374;
	configs[ 6]+= 4374;
	configs[14]+=    2;
	configs[15]+=    2;
	configs[16]+=    2;
	configs[18]+=    2;
	configs[26]+= 2103;
	configs[27]+=   18;
	configs[28]+=   54;
	configs[30]+=  486;
	configs[31]+= 1458;
	bb.mover.u4s[0]^=0x80808000;
	bb.mover.u4s[1]^=0x808000;
}

void FlipFunctionBBWhite1110() {
	configs[29]-=   81;
}

void FlipFunctionBBBlack1110() {
	configs[29]+=   81;
}

void FlipFunctionBBWhite1111() {
	configs[ 3]-= 1458;
	configs[15]-=    6;
	configs[25]-=   54;
	configs[29]-=  135;
	bb.mover.u4s[0]^=0x40000000;
}

void FlipFunctionBBBlack1111() {
	configs[ 3]+= 1458;
	configs[15]+=    6;
	configs[25]+=   54;
	configs[29]+=  135;
	bb.mover.u4s[0]^=0x40000000;
}

void FlipFunctionBBWhite1112() {
	configs[ 2]-=  486;
	configs[ 3]-= 1458;
	configs[13]-=   18;
	configs[15]-=    6;
	configs[24]-=   18;
	configs[25]-=   54;
	configs[29]-=  153;
	bb.mover.u4s[0]^=0x40200000;
}

void FlipFunctionBBBlack1112() {
	configs[ 2]+=  486;
	configs[ 3]+= 1458;
	configs[13]+=   18;
	configs[15]+=    6;
	configs[24]+=   18;
	configs[25]+=   54;
	configs[29]+=  153;
	bb.mover.u4s[0]^=0x40200000;
}

void FlipFunctionBBWhite1113() {
	configs[ 1]-=  162;
	configs[ 2]-=  486;
	configs[ 3]-= 1458;
	configs[11]-=    6;
	configs[13]-=   18;
	configs[15]-=    6;
	configs[23]-=    6;
	configs[24]-=   18;
	configs[25]-=   54;
	configs[29]-=  159;
	bb.mover.u4s[0]^=0x40201000;
}

void FlipFunctionBBBlack1113() {
	configs[ 1]+=  162;
	configs[ 2]+=  486;
	configs[ 3]+= 1458;
	configs[11]+=    6;
	configs[13]+=   18;
	configs[15]+=    6;
	configs[23]+=    6;
	configs[24]+=   18;
	configs[25]+=   54;
	configs[29]+=  159;
	bb.mover.u4s[0]^=0x40201000;
}

void FlipFunctionBBWhite1114() {
	configs[ 5]-=    1;
	bb.mover.u4s[1]^=0x100;
	bb.empty.u4s[1]^=0x100;
}

void FlipFunctionBBBlack1114() {
	configs[ 5]+=    1;
	bb.mover.u4s[1]^=0x100;
	bb.empty.u4s[1]^=0x100;
}

void FlipFunctionBBWhite1115() {
	configs[ 5]-=    7;
	configs[12]-=  486;
	configs[20]-=  486;
	configs[36]-=    6;
	bb.mover.u4s[1]^=0x300;
	bb.empty.u4s[1]^=0x100;
}

void FlipFunctionBBBlack1115() {
	configs[ 5]+=    7;
	configs[12]+=  486;
	configs[20]+=  486;
	configs[36]+=    6;
	bb.mover.u4s[1]^=0x300;
	bb.empty.u4s[1]^=0x100;
}

void FlipFunctionBBWhite1116() {
	configs[ 5]-=   25;
	configs[12]-=  486;
	configs[13]-=  486;
	configs[20]-=  486;
	configs[21]-=  486;
	configs[35]-=   18;
	configs[36]-=    6;
	bb.mover.u4s[1]^=0x700;
	bb.empty.u4s[1]^=0x100;
}

void FlipFunctionBBBlack1116() {
	configs[ 5]+=   25;
	configs[12]+=  486;
	configs[13]+=  486;
	configs[20]+=  486;
	configs[21]+=  486;
	configs[35]+=   18;
	configs[36]+=    6;
	bb.mover.u4s[1]^=0x700;
	bb.empty.u4s[1]^=0x100;
}

void FlipFunctionBBWhite1117() {
	configs[ 5]-=   79;
	configs[12]-=  486;
	configs[13]-=  486;
	configs[14]-=  162;
	configs[20]-=  486;
	configs[21]-=  486;
	configs[22]-=  486;
	configs[34]-=   54;
	configs[35]-=   18;
	configs[36]-=    6;
	bb.mover.u4s[1]^=0xF00;
	bb.empty.u4s[1]^=0x100;
}

void FlipFunctionBBBlack1117() {
	configs[ 5]+=   79;
	configs[12]+=  486;
	configs[13]+=  486;
	configs[14]+=  162;
	configs[20]+=  486;
	configs[21]+=  486;
	configs[22]+=  486;
	configs[34]+=   54;
	configs[35]+=   18;
	configs[36]+=    6;
	bb.mover.u4s[1]^=0xF00;
	bb.empty.u4s[1]^=0x100;
}

void FlipFunctionBBWhite1118() {
	configs[ 5]-=  241;
	configs[12]-=  486;
	configs[13]-=  486;
	configs[14]-=  162;
	configs[15]-=   54;
	configs[20]-=  486;
	configs[21]-=  486;
	configs[22]-=  486;
	configs[23]-=  486;
	configs[33]-=  162;
	configs[34]-=   54;
	configs[35]-=   18;
	configs[36]-=    6;
	bb.mover.u4s[1]^=0x1F00;
	bb.empty.u4s[1]^=0x100;
}

void FlipFunctionBBBlack1118() {
	configs[ 5]+=  241;
	configs[12]+=  486;
	configs[13]+=  486;
	configs[14]+=  162;
	configs[15]+=   54;
	configs[20]+=  486;
	configs[21]+=  486;
	configs[22]+=  486;
	configs[23]+=  486;
	configs[33]+=  162;
	configs[34]+=   54;
	configs[35]+=   18;
	configs[36]+=    6;
	bb.mover.u4s[1]^=0x1F00;
	bb.empty.u4s[1]^=0x100;
}

void FlipFunctionBBWhite1119() {
	configs[ 5]-=  727;
	configs[12]-=  486;
	configs[13]-=  486;
	configs[14]-=  162;
	configs[15]-=   54;
	configs[16]-=   18;
	configs[20]-=  486;
	configs[21]-=  486;
	configs[22]-=  486;
	configs[23]-=  486;
	configs[24]-=  486;
	configs[32]-=  486;
	configs[33]-=  162;
	configs[34]-=   54;
	configs[35]-=   18;
	configs[36]-=    6;
	bb.mover.u4s[1]^=0x3F00;
	bb.empty.u4s[1]^=0x100;
}

void FlipFunctionBBBlack1119() {
	configs[ 5]+=  727;
	configs[12]+=  486;
	configs[13]+=  486;
	configs[14]+=  162;
	configs[15]+=   54;
	configs[16]+=   18;
	configs[20]+=  486;
	configs[21]+=  486;
	configs[22]+=  486;
	configs[23]+=  486;
	configs[24]+=  486;
	configs[32]+=  486;
	configs[33]+=  162;
	configs[34]+=   54;
	configs[35]+=   18;
	configs[36]+=    6;
	bb.mover.u4s[1]^=0x3F00;
	bb.empty.u4s[1]^=0x100;
}

void FlipFunctionBBWhite1120() {
	configs[ 5]-= 2185;
	configs[12]-=  486;
	configs[13]-=  486;
	configs[14]-=  162;
	configs[15]-=   54;
	configs[16]-=   18;
	configs[17]-=    6;
	configs[20]-=  486;
	configs[21]-=  486;
	configs[22]-=  486;
	configs[23]-=  486;
	configs[24]-=  486;
	configs[25]-=  486;
	configs[31]-=  486;
	configs[32]-=  486;
	configs[33]-=  162;
	configs[34]-=   54;
	configs[35]-=   18;
	configs[36]-=    6;
	bb.mover.u4s[1]^=0x7F00;
	bb.empty.u4s[1]^=0x100;
}

void FlipFunctionBBBlack1120() {
	configs[ 5]+= 2185;
	configs[12]+=  486;
	configs[13]+=  486;
	configs[14]+=  162;
	configs[15]+=   54;
	configs[16]+=   18;
	configs[17]+=    6;
	configs[20]+=  486;
	configs[21]+=  486;
	configs[22]+=  486;
	configs[23]+=  486;
	configs[24]+=  486;
	configs[25]+=  486;
	configs[31]+=  486;
	configs[32]+=  486;
	configs[33]+=  162;
	configs[34]+=   54;
	configs[35]+=   18;
	configs[36]+=    6;
	bb.mover.u4s[1]^=0x7F00;
	bb.empty.u4s[1]^=0x100;
}

void FlipFunctionBBWhite1121() {
	configs[11]-=  243;
}

void FlipFunctionBBBlack1121() {
	configs[11]+=  243;
}

void FlipFunctionBBWhite1122() {
	configs[ 4]-=    6;
	configs[11]-=  405;
	configs[20]-=  162;
	configs[35]-=    6;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBBlack1122() {
	configs[ 4]+=    6;
	configs[11]+=  405;
	configs[20]+=  162;
	configs[35]+=    6;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBWhite1123() {
	configs[ 3]-=   18;
	configs[ 4]-=    6;
	configs[11]-=  459;
	configs[20]-=  162;
	configs[21]-=   54;
	configs[33]-=   18;
	configs[35]-=    6;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBBlack1123() {
	configs[ 3]+=   18;
	configs[ 4]+=    6;
	configs[11]+=  459;
	configs[20]+=  162;
	configs[21]+=   54;
	configs[33]+=   18;
	configs[35]+=    6;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBWhite1124() {
	configs[ 2]-=   54;
	configs[ 3]-=   18;
	configs[ 4]-=    6;
	configs[11]-=  477;
	configs[20]-=  162;
	configs[21]-=   54;
	configs[22]-=   18;
	configs[31]-=   18;
	configs[33]-=   18;
	configs[35]-=    6;
	bb.mover.u4s[0]^=0x4080000;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBBlack1124() {
	configs[ 2]+=   54;
	configs[ 3]+=   18;
	configs[ 4]+=    6;
	configs[11]+=  477;
	configs[20]+=  162;
	configs[21]+=   54;
	configs[22]+=   18;
	configs[31]+=   18;
	configs[33]+=   18;
	configs[35]+=    6;
	bb.mover.u4s[0]^=0x4080000;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBWhite1125() {
	configs[ 1]-=  162;
	configs[ 2]-=   54;
	configs[ 3]-=   18;
	configs[ 4]-=    6;
	configs[11]-=  483;
	configs[20]-=  162;
	configs[21]-=   54;
	configs[22]-=   18;
	configs[23]-=    6;
	configs[29]-=    6;
	configs[31]-=   18;
	configs[33]-=   18;
	configs[35]-=    6;
	bb.mover.u4s[0]^=0x4081000;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBBlack1125() {
	configs[ 1]+=  162;
	configs[ 2]+=   54;
	configs[ 3]+=   18;
	configs[ 4]+=    6;
	configs[11]+=  483;
	configs[20]+=  162;
	configs[21]+=   54;
	configs[22]+=   18;
	configs[23]+=    6;
	configs[29]+=    6;
	configs[31]+=   18;
	configs[33]+=   18;
	configs[35]+=    6;
	bb.mover.u4s[0]^=0x4081000;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBWhite1126() {
	configs[19]-=  243;
}

void FlipFunctionBBBlack1126() {
	configs[19]+=  243;
}

void FlipFunctionBBWhite1127() {
	configs[ 6]-=    2;
	configs[12]-= 1458;
	configs[19]-= 1701;
	bb.mover.u4s[1]^=0x10000;
}

void FlipFunctionBBBlack1127() {
	configs[ 6]+=    2;
	configs[12]+= 1458;
	configs[19]+= 1701;
	bb.mover.u4s[1]^=0x10000;
}

void FlipFunctionBBWhite1128() {
	configs[ 4]-=    2;
	configs[10]-=  162;
	configs[19]-=  405;
	configs[36]-=    2;
	bb.mover.u4s[1]^=0x1;
}

void FlipFunctionBBBlack1128() {
	configs[ 4]+=    2;
	configs[10]+=  162;
	configs[19]+=  405;
	configs[36]+=    2;
	bb.mover.u4s[1]^=0x1;
}

void FlipFunctionBBWhite1129() {
	configs[ 4]-=    2;
	configs[ 6]-=    2;
	configs[10]-=  162;
	configs[12]-= 1458;
	configs[19]-= 1863;
	configs[36]-=    2;
	bb.mover.u4s[1]^=0x10001;
}

void FlipFunctionBBBlack1129() {
	configs[ 4]+=    2;
	configs[ 6]+=    2;
	configs[10]+=  162;
	configs[12]+= 1458;
	configs[19]+= 1863;
	configs[36]+=    2;
	bb.mover.u4s[1]^=0x10001;
}

void FlipFunctionBBWhite1130() {
	configs[ 3]-=    2;
	configs[ 4]-=    2;
	configs[ 9]-=   54;
	configs[10]-=  162;
	configs[19]-=  459;
	configs[35]-=    2;
	configs[36]-=    2;
	bb.mover.u4s[0]^=0x1000000;
	bb.mover.u4s[1]^=0x1;
}

void FlipFunctionBBBlack1130() {
	configs[ 3]+=    2;
	configs[ 4]+=    2;
	configs[ 9]+=   54;
	configs[10]+=  162;
	configs[19]+=  459;
	configs[35]+=    2;
	configs[36]+=    2;
	bb.mover.u4s[0]^=0x1000000;
	bb.mover.u4s[1]^=0x1;
}

void FlipFunctionBBWhite1131() {
	configs[ 3]-=    2;
	configs[ 4]-=    2;
	configs[ 6]-=    2;
	configs[ 9]-=   54;
	configs[10]-=  162;
	configs[12]-= 1458;
	configs[19]-= 1917;
	configs[35]-=    2;
	configs[36]-=    2;
	bb.mover.u4s[0]^=0x1000000;
	bb.mover.u4s[1]^=0x10001;
}

void FlipFunctionBBBlack1131() {
	configs[ 3]+=    2;
	configs[ 4]+=    2;
	configs[ 6]+=    2;
	configs[ 9]+=   54;
	configs[10]+=  162;
	configs[12]+= 1458;
	configs[19]+= 1917;
	configs[35]+=    2;
	configs[36]+=    2;
	bb.mover.u4s[0]^=0x1000000;
	bb.mover.u4s[1]^=0x10001;
}

void FlipFunctionBBWhite1132() {
	configs[ 2]-=    2;
	configs[ 3]-=    2;
	configs[ 4]-=    2;
	configs[ 8]-=   18;
	configs[ 9]-=   54;
	configs[10]-=  162;
	configs[19]-=  477;
	configs[34]-=    2;
	configs[35]-=    2;
	configs[36]-=    2;
	bb.mover.u4s[0]^=0x1010000;
	bb.mover.u4s[1]^=0x1;
}

void FlipFunctionBBBlack1132() {
	configs[ 2]+=    2;
	configs[ 3]+=    2;
	configs[ 4]+=    2;
	configs[ 8]+=   18;
	configs[ 9]+=   54;
	configs[10]+=  162;
	configs[19]+=  477;
	configs[34]+=    2;
	configs[35]+=    2;
	configs[36]+=    2;
	bb.mover.u4s[0]^=0x1010000;
	bb.mover.u4s[1]^=0x1;
}

void FlipFunctionBBWhite1133() {
	configs[ 2]-=    2;
	configs[ 3]-=    2;
	configs[ 4]-=    2;
	configs[ 6]-=    2;
	configs[ 8]-=   18;
	configs[ 9]-=   54;
	configs[10]-=  162;
	configs[12]-= 1458;
	configs[19]-= 1935;
	configs[34]-=    2;
	configs[35]-=    2;
	configs[36]-=    2;
	bb.mover.u4s[0]^=0x1010000;
	bb.mover.u4s[1]^=0x10001;
}

void FlipFunctionBBBlack1133() {
	configs[ 2]+=    2;
	configs[ 3]+=    2;
	configs[ 4]+=    2;
	configs[ 6]+=    2;
	configs[ 8]+=   18;
	configs[ 9]+=   54;
	configs[10]+=  162;
	configs[12]+= 1458;
	configs[19]+= 1935;
	configs[34]+=    2;
	configs[35]+=    2;
	configs[36]+=    2;
	bb.mover.u4s[0]^=0x1010000;
	bb.mover.u4s[1]^=0x10001;
}

void FlipFunctionBBWhite1134() {
	configs[ 1]-=    2;
	configs[ 2]-=    2;
	configs[ 3]-=    2;
	configs[ 4]-=    2;
	configs[ 8]-=   18;
	configs[ 9]-=   54;
	configs[10]-=  162;
	configs[19]-=  483;
	configs[33]-=    2;
	configs[34]-=    2;
	configs[35]-=    2;
	configs[36]-=    2;
	bb.mover.u4s[0]^=0x1010100;
	bb.mover.u4s[1]^=0x1;
}

void FlipFunctionBBBlack1134() {
	configs[ 1]+=    2;
	configs[ 2]+=    2;
	configs[ 3]+=    2;
	configs[ 4]+=    2;
	configs[ 8]+=   18;
	configs[ 9]+=   54;
	configs[10]+=  162;
	configs[19]+=  483;
	configs[33]+=    2;
	configs[34]+=    2;
	configs[35]+=    2;
	configs[36]+=    2;
	bb.mover.u4s[0]^=0x1010100;
	bb.mover.u4s[1]^=0x1;
}

void FlipFunctionBBWhite1135() {
	configs[ 1]-=    2;
	configs[ 2]-=    2;
	configs[ 3]-=    2;
	configs[ 4]-=    2;
	configs[ 6]-=    2;
	configs[ 8]-=   18;
	configs[ 9]-=   54;
	configs[10]-=  162;
	configs[12]-= 1458;
	configs[19]-= 1941;
	configs[33]-=    2;
	configs[34]-=    2;
	configs[35]-=    2;
	configs[36]-=    2;
	bb.mover.u4s[0]^=0x1010100;
	bb.mover.u4s[1]^=0x10001;
}

void FlipFunctionBBBlack1135() {
	configs[ 1]+=    2;
	configs[ 2]+=    2;
	configs[ 3]+=    2;
	configs[ 4]+=    2;
	configs[ 6]+=    2;
	configs[ 8]+=   18;
	configs[ 9]+=   54;
	configs[10]+=  162;
	configs[12]+= 1458;
	configs[19]+= 1941;
	configs[33]+=    2;
	configs[34]+=    2;
	configs[35]+=    2;
	configs[36]+=    2;
	bb.mover.u4s[0]^=0x1010100;
	bb.mover.u4s[1]^=0x10001;
}

void FlipFunctionBBWhite1136() {
	configs[37]-=    1;
}

void FlipFunctionBBBlack1136() {
	configs[37]+=    1;
}

void FlipFunctionBBWhite1137() {
	configs[ 6]-=    6;
	configs[13]-= 1458;
	configs[20]-= 1458;
	configs[37]-=    7;
	bb.mover.u4s[1]^=0x20000;
}

void FlipFunctionBBBlack1137() {
	configs[ 6]+=    6;
	configs[13]+= 1458;
	configs[20]+= 1458;
	configs[37]+=    7;
	bb.mover.u4s[1]^=0x20000;
}

void FlipFunctionBBWhite1138() {
	configs[ 5]-=    3;
	bb.mover.u4s[1]^=0x200;
	bb.empty.u4s[1]^=0x200;
}

void FlipFunctionBBBlack1138() {
	configs[ 5]+=    3;
	bb.mover.u4s[1]^=0x200;
	bb.empty.u4s[1]^=0x200;
}

void FlipFunctionBBWhite1139() {
	configs[ 5]-=   21;
	configs[13]-=  486;
	configs[21]-=  486;
	configs[35]-=   18;
	bb.mover.u4s[1]^=0x600;
	bb.empty.u4s[1]^=0x200;
}

void FlipFunctionBBBlack1139() {
	configs[ 5]+=   21;
	configs[13]+=  486;
	configs[21]+=  486;
	configs[35]+=   18;
	bb.mover.u4s[1]^=0x600;
	bb.empty.u4s[1]^=0x200;
}

void FlipFunctionBBWhite1140() {
	configs[ 5]-=   75;
	configs[13]-=  486;
	configs[14]-=  162;
	configs[21]-=  486;
	configs[22]-=  486;
	configs[34]-=   54;
	configs[35]-=   18;
	bb.mover.u4s[1]^=0xE00;
	bb.empty.u4s[1]^=0x200;
}

void FlipFunctionBBBlack1140() {
	configs[ 5]+=   75;
	configs[13]+=  486;
	configs[14]+=  162;
	configs[21]+=  486;
	configs[22]+=  486;
	configs[34]+=   54;
	configs[35]+=   18;
	bb.mover.u4s[1]^=0xE00;
	bb.empty.u4s[1]^=0x200;
}

void FlipFunctionBBWhite1141() {
	configs[ 5]-=  237;
	configs[13]-=  486;
	configs[14]-=  162;
	configs[15]-=   54;
	configs[21]-=  486;
	configs[22]-=  486;
	configs[23]-=  486;
	configs[33]-=  162;
	configs[34]-=   54;
	configs[35]-=   18;
	bb.mover.u4s[1]^=0x1E00;
	bb.empty.u4s[1]^=0x200;
}

void FlipFunctionBBBlack1141() {
	configs[ 5]+=  237;
	configs[13]+=  486;
	configs[14]+=  162;
	configs[15]+=   54;
	configs[21]+=  486;
	configs[22]+=  486;
	configs[23]+=  486;
	configs[33]+=  162;
	configs[34]+=   54;
	configs[35]+=   18;
	bb.mover.u4s[1]^=0x1E00;
	bb.empty.u4s[1]^=0x200;
}

void FlipFunctionBBWhite1142() {
	configs[ 5]-=  723;
	configs[13]-=  486;
	configs[14]-=  162;
	configs[15]-=   54;
	configs[16]-=   18;
	configs[21]-=  486;
	configs[22]-=  486;
	configs[23]-=  486;
	configs[24]-=  486;
	configs[32]-=  486;
	configs[33]-=  162;
	configs[34]-=   54;
	configs[35]-=   18;
	bb.mover.u4s[1]^=0x3E00;
	bb.empty.u4s[1]^=0x200;
}

void FlipFunctionBBBlack1142() {
	configs[ 5]+=  723;
	configs[13]+=  486;
	configs[14]+=  162;
	configs[15]+=   54;
	configs[16]+=   18;
	configs[21]+=  486;
	configs[22]+=  486;
	configs[23]+=  486;
	configs[24]+=  486;
	configs[32]+=  486;
	configs[33]+=  162;
	configs[34]+=   54;
	configs[35]+=   18;
	bb.mover.u4s[1]^=0x3E00;
	bb.empty.u4s[1]^=0x200;
}

void FlipFunctionBBWhite1143() {
	configs[ 5]-= 2181;
	configs[13]-=  486;
	configs[14]-=  162;
	configs[15]-=   54;
	configs[16]-=   18;
	configs[17]-=    6;
	configs[21]-=  486;
	configs[22]-=  486;
	configs[23]-=  486;
	configs[24]-=  486;
	configs[25]-=  486;
	configs[31]-=  486;
	configs[32]-=  486;
	configs[33]-=  162;
	configs[34]-=   54;
	configs[35]-=   18;
	bb.mover.u4s[1]^=0x7E00;
	bb.empty.u4s[1]^=0x200;
}

void FlipFunctionBBBlack1143() {
	configs[ 5]+= 2181;
	configs[13]+=  486;
	configs[14]+=  162;
	configs[15]+=   54;
	configs[16]+=   18;
	configs[17]+=    6;
	configs[21]+=  486;
	configs[22]+=  486;
	configs[23]+=  486;
	configs[24]+=  486;
	configs[25]+=  486;
	configs[31]+=  486;
	configs[32]+=  486;
	configs[33]+=  162;
	configs[34]+=   54;
	configs[35]+=   18;
	bb.mover.u4s[1]^=0x7E00;
	bb.empty.u4s[1]^=0x200;
}

void FlipFunctionBBWhite1144() {
	configs[12]-=  243;
}

void FlipFunctionBBBlack1144() {
	configs[12]+=  243;
}

void FlipFunctionBBWhite1145() {
	configs[ 4]-=   18;
	configs[12]-=  405;
	configs[21]-=  162;
	configs[34]-=   18;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBBlack1145() {
	configs[ 4]+=   18;
	configs[12]+=  405;
	configs[21]+=  162;
	configs[34]+=   18;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBWhite1146() {
	configs[ 3]-=   54;
	configs[ 4]-=   18;
	configs[12]-=  459;
	configs[21]-=  162;
	configs[22]-=   54;
	configs[32]-=   54;
	configs[34]-=   18;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBBlack1146() {
	configs[ 3]+=   54;
	configs[ 4]+=   18;
	configs[12]+=  459;
	configs[21]+=  162;
	configs[22]+=   54;
	configs[32]+=   54;
	configs[34]+=   18;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBWhite1147() {
	configs[ 2]-=  162;
	configs[ 3]-=   54;
	configs[ 4]-=   18;
	configs[12]-=  477;
	configs[21]-=  162;
	configs[22]-=   54;
	configs[23]-=   18;
	configs[30]-=   18;
	configs[32]-=   54;
	configs[34]-=   18;
	bb.mover.u4s[0]^=0x8100000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBBlack1147() {
	configs[ 2]+=  162;
	configs[ 3]+=   54;
	configs[ 4]+=   18;
	configs[12]+=  477;
	configs[21]+=  162;
	configs[22]+=   54;
	configs[23]+=   18;
	configs[30]+=   18;
	configs[32]+=   54;
	configs[34]+=   18;
	bb.mover.u4s[0]^=0x8100000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBWhite1148() {
	configs[ 1]-=  486;
	configs[ 2]-=  162;
	configs[ 3]-=   54;
	configs[ 4]-=   18;
	configs[12]-=  483;
	configs[21]-=  162;
	configs[22]-=   54;
	configs[23]-=   18;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[30]-=   18;
	configs[32]-=   54;
	configs[34]-=   18;
	bb.mover.u4s[0]^=0x8102000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBBlack1148() {
	configs[ 1]+=  486;
	configs[ 2]+=  162;
	configs[ 3]+=   54;
	configs[ 4]+=   18;
	configs[12]+=  483;
	configs[21]+=  162;
	configs[22]+=   54;
	configs[23]+=   18;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[30]+=   18;
	configs[32]+=   54;
	configs[34]+=   18;
	bb.mover.u4s[0]^=0x8102000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBWhite1149() {
	configs[20]-=  243;
}

void FlipFunctionBBBlack1149() {
	configs[20]+=  243;
}

void FlipFunctionBBWhite1150() {
	configs[ 6]-=    6;
	configs[13]-= 1458;
	configs[20]-= 1701;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x20000;
}

void FlipFunctionBBBlack1150() {
	configs[ 6]+=    6;
	configs[13]+= 1458;
	configs[20]+= 1701;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x20000;
}

void FlipFunctionBBWhite1151() {
	configs[ 4]-=    6;
	configs[11]-=  162;
	configs[20]-=  405;
	configs[35]-=    6;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBBlack1151() {
	configs[ 4]+=    6;
	configs[11]+=  162;
	configs[20]+=  405;
	configs[35]+=    6;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBWhite1152() {
	configs[ 4]-=    6;
	configs[ 6]-=    6;
	configs[11]-=  162;
	configs[13]-= 1458;
	configs[20]-= 1863;
	configs[35]-=    6;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x20002;
}

void FlipFunctionBBBlack1152() {
	configs[ 4]+=    6;
	configs[ 6]+=    6;
	configs[11]+=  162;
	configs[13]+= 1458;
	configs[20]+= 1863;
	configs[35]+=    6;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x20002;
}

void FlipFunctionBBWhite1153() {
	configs[ 3]-=    6;
	configs[ 4]-=    6;
	configs[10]-=   54;
	configs[11]-=  162;
	configs[20]-=  459;
	configs[34]-=    6;
	configs[35]-=    6;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBBlack1153() {
	configs[ 3]+=    6;
	configs[ 4]+=    6;
	configs[10]+=   54;
	configs[11]+=  162;
	configs[20]+=  459;
	configs[34]+=    6;
	configs[35]+=    6;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBWhite1154() {
	configs[ 3]-=    6;
	configs[ 4]-=    6;
	configs[ 6]-=    6;
	configs[10]-=   54;
	configs[11]-=  162;
	configs[13]-= 1458;
	configs[20]-= 1917;
	configs[34]-=    6;
	configs[35]-=    6;
	configs[37]-=    6;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x20002;
}

void FlipFunctionBBBlack1154() {
	configs[ 3]+=    6;
	configs[ 4]+=    6;
	configs[ 6]+=    6;
	configs[10]+=   54;
	configs[11]+=  162;
	configs[13]+= 1458;
	configs[20]+= 1917;
	configs[34]+=    6;
	configs[35]+=    6;
	configs[37]+=    6;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x20002;
}

void FlipFunctionBBWhite1155() {
	configs[ 2]-=    6;
	configs[ 3]-=    6;
	configs[ 4]-=    6;
	configs[ 9]-=   18;
	configs[10]-=   54;
	configs[11]-=  162;
	configs[20]-=  477;
	configs[33]-=    6;
	configs[34]-=    6;
	configs[35]-=    6;
	bb.mover.u4s[0]^=0x2020000;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBBlack1155() {
	configs[ 2]+=    6;
	configs[ 3]+=    6;
	configs[ 4]+=    6;
	configs[ 9]+=   18;
	configs[10]+=   54;
	configs[11]+=  162;
	configs[20]+=  477;
	configs[33]+=    6;
	configs[34]+=    6;
	configs[35]+=    6;
	bb.mover.u4s[0]^=0x2020000;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBWhite1156() {
	configs[ 2]-=    6;
	configs[ 3]-=    6;
	configs[ 4]-=    6;
	configs[ 6]-=    6;
	configs[ 9]-=   18;
	configs[10]-=   54;
	configs[11]-=  162;
	configs[13]-= 1458;
	configs[20]-= 1935;
	configs[33]-=    6;
	configs[34]-=    6;
	configs[35]-=    6;
	configs[37]-=    6;
	bb.mover.u4s[0]^=0x2020000;
	bb.mover.u4s[1]^=0x20002;
}

void FlipFunctionBBBlack1156() {
	configs[ 2]+=    6;
	configs[ 3]+=    6;
	configs[ 4]+=    6;
	configs[ 6]+=    6;
	configs[ 9]+=   18;
	configs[10]+=   54;
	configs[11]+=  162;
	configs[13]+= 1458;
	configs[20]+= 1935;
	configs[33]+=    6;
	configs[34]+=    6;
	configs[35]+=    6;
	configs[37]+=    6;
	bb.mover.u4s[0]^=0x2020000;
	bb.mover.u4s[1]^=0x20002;
}

void FlipFunctionBBWhite1157() {
	configs[ 1]-=    6;
	configs[ 2]-=    6;
	configs[ 3]-=    6;
	configs[ 4]-=    6;
	configs[ 8]-=    6;
	configs[ 9]-=   18;
	configs[10]-=   54;
	configs[11]-=  162;
	configs[20]-=  483;
	configs[32]-=    6;
	configs[33]-=    6;
	configs[34]-=    6;
	configs[35]-=    6;
	bb.mover.u4s[0]^=0x2020200;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBBlack1157() {
	configs[ 1]+=    6;
	configs[ 2]+=    6;
	configs[ 3]+=    6;
	configs[ 4]+=    6;
	configs[ 8]+=    6;
	configs[ 9]+=   18;
	configs[10]+=   54;
	configs[11]+=  162;
	configs[20]+=  483;
	configs[32]+=    6;
	configs[33]+=    6;
	configs[34]+=    6;
	configs[35]+=    6;
	bb.mover.u4s[0]^=0x2020200;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBWhite1158() {
	configs[ 1]-=    6;
	configs[ 2]-=    6;
	configs[ 3]-=    6;
	configs[ 4]-=    6;
	configs[ 6]-=    6;
	configs[ 8]-=    6;
	configs[ 9]-=   18;
	configs[10]-=   54;
	configs[11]-=  162;
	configs[13]-= 1458;
	configs[20]-= 1941;
	configs[32]-=    6;
	configs[33]-=    6;
	configs[34]-=    6;
	configs[35]-=    6;
	configs[37]-=    6;
	bb.mover.u4s[0]^=0x2020200;
	bb.mover.u4s[1]^=0x20002;
}

void FlipFunctionBBBlack1158() {
	configs[ 1]+=    6;
	configs[ 2]+=    6;
	configs[ 3]+=    6;
	configs[ 4]+=    6;
	configs[ 6]+=    6;
	configs[ 8]+=    6;
	configs[ 9]+=   18;
	configs[10]+=   54;
	configs[11]+=  162;
	configs[13]+= 1458;
	configs[20]+= 1941;
	configs[32]+=    6;
	configs[33]+=    6;
	configs[34]+=    6;
	configs[35]+=    6;
	configs[37]+=    6;
	bb.mover.u4s[0]^=0x2020200;
	bb.mover.u4s[1]^=0x20002;
}

void FlipFunctionBBWhite1159() {
	configs[36]-=    3;
}

void FlipFunctionBBBlack1159() {
	configs[36]+=    3;
}

void FlipFunctionBBWhite1160() {
	configs[ 6]-=   18;
	configs[14]-=  486;
	configs[21]-= 1458;
	configs[36]-=   21;
	bb.mover.u4s[1]^=0x40000;
}

void FlipFunctionBBBlack1160() {
	configs[ 6]+=   18;
	configs[14]+=  486;
	configs[21]+= 1458;
	configs[36]+=   21;
	bb.mover.u4s[1]^=0x40000;
}

void FlipFunctionBBWhite1161() {
	configs[ 5]-=    9;
	bb.mover.u4s[1]^=0x400;
	bb.empty.u4s[1]^=0x400;
}

void FlipFunctionBBBlack1161() {
	configs[ 5]+=    9;
	bb.mover.u4s[1]^=0x400;
	bb.empty.u4s[1]^=0x400;
}

void FlipFunctionBBWhite1162() {
	configs[ 5]-=   63;
	configs[14]-=  162;
	configs[22]-=  486;
	configs[34]-=   54;
	bb.mover.u4s[1]^=0xC00;
	bb.empty.u4s[1]^=0x400;
}

void FlipFunctionBBBlack1162() {
	configs[ 5]+=   63;
	configs[14]+=  162;
	configs[22]+=  486;
	configs[34]+=   54;
	bb.mover.u4s[1]^=0xC00;
	bb.empty.u4s[1]^=0x400;
}

void FlipFunctionBBWhite1163() {
	configs[ 5]-=  225;
	configs[14]-=  162;
	configs[15]-=   54;
	configs[22]-=  486;
	configs[23]-=  486;
	configs[33]-=  162;
	configs[34]-=   54;
	bb.mover.u4s[1]^=0x1C00;
	bb.empty.u4s[1]^=0x400;
}

void FlipFunctionBBBlack1163() {
	configs[ 5]+=  225;
	configs[14]+=  162;
	configs[15]+=   54;
	configs[22]+=  486;
	configs[23]+=  486;
	configs[33]+=  162;
	configs[34]+=   54;
	bb.mover.u4s[1]^=0x1C00;
	bb.empty.u4s[1]^=0x400;
}

void FlipFunctionBBWhite1164() {
	configs[ 5]-=  711;
	configs[14]-=  162;
	configs[15]-=   54;
	configs[16]-=   18;
	configs[22]-=  486;
	configs[23]-=  486;
	configs[24]-=  486;
	configs[32]-=  486;
	configs[33]-=  162;
	configs[34]-=   54;
	bb.mover.u4s[1]^=0x3C00;
	bb.empty.u4s[1]^=0x400;
}

void FlipFunctionBBBlack1164() {
	configs[ 5]+=  711;
	configs[14]+=  162;
	configs[15]+=   54;
	configs[16]+=   18;
	configs[22]+=  486;
	configs[23]+=  486;
	configs[24]+=  486;
	configs[32]+=  486;
	configs[33]+=  162;
	configs[34]+=   54;
	bb.mover.u4s[1]^=0x3C00;
	bb.empty.u4s[1]^=0x400;
}

void FlipFunctionBBWhite1165() {
	configs[ 5]-= 2169;
	configs[14]-=  162;
	configs[15]-=   54;
	configs[16]-=   18;
	configs[17]-=    6;
	configs[22]-=  486;
	configs[23]-=  486;
	configs[24]-=  486;
	configs[25]-=  486;
	configs[31]-=  486;
	configs[32]-=  486;
	configs[33]-=  162;
	configs[34]-=   54;
	bb.mover.u4s[1]^=0x7C00;
	bb.empty.u4s[1]^=0x400;
}

void FlipFunctionBBBlack1165() {
	configs[ 5]+= 2169;
	configs[14]+=  162;
	configs[15]+=   54;
	configs[16]+=   18;
	configs[17]+=    6;
	configs[22]+=  486;
	configs[23]+=  486;
	configs[24]+=  486;
	configs[25]+=  486;
	configs[31]+=  486;
	configs[32]+=  486;
	configs[33]+=  162;
	configs[34]+=   54;
	bb.mover.u4s[1]^=0x7C00;
	bb.empty.u4s[1]^=0x400;
}

void FlipFunctionBBWhite1166() {
	configs[ 5]-=   15;
	configs[12]-=  486;
	configs[20]-=  486;
	configs[36]-=    6;
	bb.mover.u4s[1]^=0x600;
	bb.empty.u4s[1]^=0x400;
}

void FlipFunctionBBBlack1166() {
	configs[ 5]+=   15;
	configs[12]+=  486;
	configs[20]+=  486;
	configs[36]+=    6;
	bb.mover.u4s[1]^=0x600;
	bb.empty.u4s[1]^=0x400;
}

void FlipFunctionBBWhite1167() {
	configs[ 5]-=   69;
	configs[12]-=  486;
	configs[14]-=  162;
	configs[20]-=  486;
	configs[22]-=  486;
	configs[34]-=   54;
	configs[36]-=    6;
	bb.mover.u4s[1]^=0xE00;
	bb.empty.u4s[1]^=0x400;
}

void FlipFunctionBBBlack1167() {
	configs[ 5]+=   69;
	configs[12]+=  486;
	configs[14]+=  162;
	configs[20]+=  486;
	configs[22]+=  486;
	configs[34]+=   54;
	configs[36]+=    6;
	bb.mover.u4s[1]^=0xE00;
	bb.empty.u4s[1]^=0x400;
}

void FlipFunctionBBWhite1168() {
	configs[ 5]-=  231;
	configs[12]-=  486;
	configs[14]-=  162;
	configs[15]-=   54;
	configs[20]-=  486;
	configs[22]-=  486;
	configs[23]-=  486;
	configs[33]-=  162;
	configs[34]-=   54;
	configs[36]-=    6;
	bb.mover.u4s[1]^=0x1E00;
	bb.empty.u4s[1]^=0x400;
}

void FlipFunctionBBBlack1168() {
	configs[ 5]+=  231;
	configs[12]+=  486;
	configs[14]+=  162;
	configs[15]+=   54;
	configs[20]+=  486;
	configs[22]+=  486;
	configs[23]+=  486;
	configs[33]+=  162;
	configs[34]+=   54;
	configs[36]+=    6;
	bb.mover.u4s[1]^=0x1E00;
	bb.empty.u4s[1]^=0x400;
}

void FlipFunctionBBWhite1169() {
	configs[ 5]-=  717;
	configs[12]-=  486;
	configs[14]-=  162;
	configs[15]-=   54;
	configs[16]-=   18;
	configs[20]-=  486;
	configs[22]-=  486;
	configs[23]-=  486;
	configs[24]-=  486;
	configs[32]-=  486;
	configs[33]-=  162;
	configs[34]-=   54;
	configs[36]-=    6;
	bb.mover.u4s[1]^=0x3E00;
	bb.empty.u4s[1]^=0x400;
}

void FlipFunctionBBBlack1169() {
	configs[ 5]+=  717;
	configs[12]+=  486;
	configs[14]+=  162;
	configs[15]+=   54;
	configs[16]+=   18;
	configs[20]+=  486;
	configs[22]+=  486;
	configs[23]+=  486;
	configs[24]+=  486;
	configs[32]+=  486;
	configs[33]+=  162;
	configs[34]+=   54;
	configs[36]+=    6;
	bb.mover.u4s[1]^=0x3E00;
	bb.empty.u4s[1]^=0x400;
}

void FlipFunctionBBWhite1170() {
	configs[ 5]-= 2175;
	configs[12]-=  486;
	configs[14]-=  162;
	configs[15]-=   54;
	configs[16]-=   18;
	configs[17]-=    6;
	configs[20]-=  486;
	configs[22]-=  486;
	configs[23]-=  486;
	configs[24]-=  486;
	configs[25]-=  486;
	configs[31]-=  486;
	configs[32]-=  486;
	configs[33]-=  162;
	configs[34]-=   54;
	configs[36]-=    6;
	bb.mover.u4s[1]^=0x7E00;
	bb.empty.u4s[1]^=0x400;
}

void FlipFunctionBBBlack1170() {
	configs[ 5]+= 2175;
	configs[12]+=  486;
	configs[14]+=  162;
	configs[15]+=   54;
	configs[16]+=   18;
	configs[17]+=    6;
	configs[20]+=  486;
	configs[22]+=  486;
	configs[23]+=  486;
	configs[24]+=  486;
	configs[25]+=  486;
	configs[31]+=  486;
	configs[32]+=  486;
	configs[33]+=  162;
	configs[34]+=   54;
	configs[36]+=    6;
	bb.mover.u4s[1]^=0x7E00;
	bb.empty.u4s[1]^=0x400;
}

void FlipFunctionBBWhite1171() {
	configs[13]-=  243;
}

void FlipFunctionBBBlack1171() {
	configs[13]+=  243;
}

void FlipFunctionBBWhite1172() {
	configs[ 6]-=    6;
	configs[13]-= 1701;
	configs[20]-= 1458;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x20000;
}

void FlipFunctionBBBlack1172() {
	configs[ 6]+=    6;
	configs[13]+= 1701;
	configs[20]+= 1458;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x20000;
}

void FlipFunctionBBWhite1173() {
	configs[ 4]-=   54;
	configs[13]-=  405;
	configs[22]-=  162;
	configs[33]-=   54;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBBlack1173() {
	configs[ 4]+=   54;
	configs[13]+=  405;
	configs[22]+=  162;
	configs[33]+=   54;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBWhite1174() {
	configs[ 4]-=   54;
	configs[ 6]-=    6;
	configs[13]-= 1863;
	configs[20]-= 1458;
	configs[22]-=  162;
	configs[33]-=   54;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x20008;
}

void FlipFunctionBBBlack1174() {
	configs[ 4]+=   54;
	configs[ 6]+=    6;
	configs[13]+= 1863;
	configs[20]+= 1458;
	configs[22]+=  162;
	configs[33]+=   54;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x20008;
}

void FlipFunctionBBWhite1175() {
	configs[ 3]-=  162;
	configs[ 4]-=   54;
	configs[13]-=  459;
	configs[22]-=  162;
	configs[23]-=   54;
	configs[31]-=   54;
	configs[33]-=   54;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBBlack1175() {
	configs[ 3]+=  162;
	configs[ 4]+=   54;
	configs[13]+=  459;
	configs[22]+=  162;
	configs[23]+=   54;
	configs[31]+=   54;
	configs[33]+=   54;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBWhite1176() {
	configs[ 3]-=  162;
	configs[ 4]-=   54;
	configs[ 6]-=    6;
	configs[13]-= 1917;
	configs[20]-= 1458;
	configs[22]-=  162;
	configs[23]-=   54;
	configs[31]-=   54;
	configs[33]-=   54;
	configs[37]-=    6;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x20008;
}

void FlipFunctionBBBlack1176() {
	configs[ 3]+=  162;
	configs[ 4]+=   54;
	configs[ 6]+=    6;
	configs[13]+= 1917;
	configs[20]+= 1458;
	configs[22]+=  162;
	configs[23]+=   54;
	configs[31]+=   54;
	configs[33]+=   54;
	configs[37]+=    6;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x20008;
}

void FlipFunctionBBWhite1177() {
	configs[ 2]-=  486;
	configs[ 3]-=  162;
	configs[ 4]-=   54;
	configs[13]-=  477;
	configs[22]-=  162;
	configs[23]-=   54;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[31]-=   54;
	configs[33]-=   54;
	bb.mover.u4s[0]^=0x10200000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBBlack1177() {
	configs[ 2]+=  486;
	configs[ 3]+=  162;
	configs[ 4]+=   54;
	configs[13]+=  477;
	configs[22]+=  162;
	configs[23]+=   54;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[31]+=   54;
	configs[33]+=   54;
	bb.mover.u4s[0]^=0x10200000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBWhite1178() {
	configs[ 2]-=  486;
	configs[ 3]-=  162;
	configs[ 4]-=   54;
	configs[ 6]-=    6;
	configs[13]-= 1935;
	configs[20]-= 1458;
	configs[22]-=  162;
	configs[23]-=   54;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[31]-=   54;
	configs[33]-=   54;
	configs[37]-=    6;
	bb.mover.u4s[0]^=0x10200000;
	bb.mover.u4s[1]^=0x20008;
}

void FlipFunctionBBBlack1178() {
	configs[ 2]+=  486;
	configs[ 3]+=  162;
	configs[ 4]+=   54;
	configs[ 6]+=    6;
	configs[13]+= 1935;
	configs[20]+= 1458;
	configs[22]+=  162;
	configs[23]+=   54;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[31]+=   54;
	configs[33]+=   54;
	configs[37]+=    6;
	bb.mover.u4s[0]^=0x10200000;
	bb.mover.u4s[1]^=0x20008;
}

void FlipFunctionBBWhite1179() {
	configs[ 1]-= 1458;
	configs[ 2]-=  486;
	configs[ 3]-=  162;
	configs[ 4]-=   54;
	configs[13]-=  483;
	configs[22]-=  162;
	configs[23]-=   54;
	configs[24]-=   18;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[29]-=   18;
	configs[31]-=   54;
	configs[33]-=   54;
	bb.mover.u4s[0]^=0x10204000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBBlack1179() {
	configs[ 1]+= 1458;
	configs[ 2]+=  486;
	configs[ 3]+=  162;
	configs[ 4]+=   54;
	configs[13]+=  483;
	configs[22]+=  162;
	configs[23]+=   54;
	configs[24]+=   18;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[29]+=   18;
	configs[31]+=   54;
	configs[33]+=   54;
	bb.mover.u4s[0]^=0x10204000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBWhite1180() {
	configs[ 1]-= 1458;
	configs[ 2]-=  486;
	configs[ 3]-=  162;
	configs[ 4]-=   54;
	configs[ 6]-=    6;
	configs[13]-= 1941;
	configs[20]-= 1458;
	configs[22]-=  162;
	configs[23]-=   54;
	configs[24]-=   18;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[29]-=   18;
	configs[31]-=   54;
	configs[33]-=   54;
	configs[37]-=    6;
	bb.mover.u4s[0]^=0x10204000;
	bb.mover.u4s[1]^=0x20008;
}

void FlipFunctionBBBlack1180() {
	configs[ 1]+= 1458;
	configs[ 2]+=  486;
	configs[ 3]+=  162;
	configs[ 4]+=   54;
	configs[ 6]+=    6;
	configs[13]+= 1941;
	configs[20]+= 1458;
	configs[22]+=  162;
	configs[23]+=   54;
	configs[24]+=   18;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[29]+=   18;
	configs[31]+=   54;
	configs[33]+=   54;
	configs[37]+=    6;
	bb.mover.u4s[0]^=0x10204000;
	bb.mover.u4s[1]^=0x20008;
}

void FlipFunctionBBWhite1181() {
	configs[21]-=  243;
}

void FlipFunctionBBBlack1181() {
	configs[21]+=  243;
}

void FlipFunctionBBWhite1182() {
	configs[ 6]-=   18;
	configs[14]-=  486;
	configs[21]-= 1701;
	configs[36]-=   18;
	bb.mover.u4s[1]^=0x40000;
}

void FlipFunctionBBBlack1182() {
	configs[ 6]+=   18;
	configs[14]+=  486;
	configs[21]+= 1701;
	configs[36]+=   18;
	bb.mover.u4s[1]^=0x40000;
}

void FlipFunctionBBWhite1183() {
	configs[ 4]-=   18;
	configs[12]-=  162;
	configs[21]-=  405;
	configs[34]-=   18;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBBlack1183() {
	configs[ 4]+=   18;
	configs[12]+=  162;
	configs[21]+=  405;
	configs[34]+=   18;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBWhite1184() {
	configs[ 4]-=   18;
	configs[ 6]-=   18;
	configs[12]-=  162;
	configs[14]-=  486;
	configs[21]-= 1863;
	configs[34]-=   18;
	configs[36]-=   18;
	bb.mover.u4s[1]^=0x40004;
}

void FlipFunctionBBBlack1184() {
	configs[ 4]+=   18;
	configs[ 6]+=   18;
	configs[12]+=  162;
	configs[14]+=  486;
	configs[21]+= 1863;
	configs[34]+=   18;
	configs[36]+=   18;
	bb.mover.u4s[1]^=0x40004;
}

void FlipFunctionBBWhite1185() {
	configs[ 3]-=   18;
	configs[ 4]-=   18;
	configs[11]-=   54;
	configs[12]-=  162;
	configs[21]-=  459;
	configs[33]-=   18;
	configs[34]-=   18;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBBlack1185() {
	configs[ 3]+=   18;
	configs[ 4]+=   18;
	configs[11]+=   54;
	configs[12]+=  162;
	configs[21]+=  459;
	configs[33]+=   18;
	configs[34]+=   18;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBWhite1186() {
	configs[ 3]-=   18;
	configs[ 4]-=   18;
	configs[ 6]-=   18;
	configs[11]-=   54;
	configs[12]-=  162;
	configs[14]-=  486;
	configs[21]-= 1917;
	configs[33]-=   18;
	configs[34]-=   18;
	configs[36]-=   18;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x40004;
}

void FlipFunctionBBBlack1186() {
	configs[ 3]+=   18;
	configs[ 4]+=   18;
	configs[ 6]+=   18;
	configs[11]+=   54;
	configs[12]+=  162;
	configs[14]+=  486;
	configs[21]+= 1917;
	configs[33]+=   18;
	configs[34]+=   18;
	configs[36]+=   18;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x40004;
}

void FlipFunctionBBWhite1187() {
	configs[ 2]-=   18;
	configs[ 3]-=   18;
	configs[ 4]-=   18;
	configs[10]-=   18;
	configs[11]-=   54;
	configs[12]-=  162;
	configs[21]-=  477;
	configs[32]-=   18;
	configs[33]-=   18;
	configs[34]-=   18;
	bb.mover.u4s[0]^=0x4040000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBBlack1187() {
	configs[ 2]+=   18;
	configs[ 3]+=   18;
	configs[ 4]+=   18;
	configs[10]+=   18;
	configs[11]+=   54;
	configs[12]+=  162;
	configs[21]+=  477;
	configs[32]+=   18;
	configs[33]+=   18;
	configs[34]+=   18;
	bb.mover.u4s[0]^=0x4040000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBWhite1188() {
	configs[ 2]-=   18;
	configs[ 3]-=   18;
	configs[ 4]-=   18;
	configs[ 6]-=   18;
	configs[10]-=   18;
	configs[11]-=   54;
	configs[12]-=  162;
	configs[14]-=  486;
	configs[21]-= 1935;
	configs[32]-=   18;
	configs[33]-=   18;
	configs[34]-=   18;
	configs[36]-=   18;
	bb.mover.u4s[0]^=0x4040000;
	bb.mover.u4s[1]^=0x40004;
}

void FlipFunctionBBBlack1188() {
	configs[ 2]+=   18;
	configs[ 3]+=   18;
	configs[ 4]+=   18;
	configs[ 6]+=   18;
	configs[10]+=   18;
	configs[11]+=   54;
	configs[12]+=  162;
	configs[14]+=  486;
	configs[21]+= 1935;
	configs[32]+=   18;
	configs[33]+=   18;
	configs[34]+=   18;
	configs[36]+=   18;
	bb.mover.u4s[0]^=0x4040000;
	bb.mover.u4s[1]^=0x40004;
}

void FlipFunctionBBWhite1189() {
	configs[ 1]-=   18;
	configs[ 2]-=   18;
	configs[ 3]-=   18;
	configs[ 4]-=   18;
	configs[ 9]-=    6;
	configs[10]-=   18;
	configs[11]-=   54;
	configs[12]-=  162;
	configs[21]-=  483;
	configs[31]-=    6;
	configs[32]-=   18;
	configs[33]-=   18;
	configs[34]-=   18;
	bb.mover.u4s[0]^=0x4040400;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBBlack1189() {
	configs[ 1]+=   18;
	configs[ 2]+=   18;
	configs[ 3]+=   18;
	configs[ 4]+=   18;
	configs[ 9]+=    6;
	configs[10]+=   18;
	configs[11]+=   54;
	configs[12]+=  162;
	configs[21]+=  483;
	configs[31]+=    6;
	configs[32]+=   18;
	configs[33]+=   18;
	configs[34]+=   18;
	bb.mover.u4s[0]^=0x4040400;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBWhite1190() {
	configs[ 1]-=   18;
	configs[ 2]-=   18;
	configs[ 3]-=   18;
	configs[ 4]-=   18;
	configs[ 6]-=   18;
	configs[ 9]-=    6;
	configs[10]-=   18;
	configs[11]-=   54;
	configs[12]-=  162;
	configs[14]-=  486;
	configs[21]-= 1941;
	configs[31]-=    6;
	configs[32]-=   18;
	configs[33]-=   18;
	configs[34]-=   18;
	configs[36]-=   18;
	bb.mover.u4s[0]^=0x4040400;
	bb.mover.u4s[1]^=0x40004;
}

void FlipFunctionBBBlack1190() {
	configs[ 1]+=   18;
	configs[ 2]+=   18;
	configs[ 3]+=   18;
	configs[ 4]+=   18;
	configs[ 6]+=   18;
	configs[ 9]+=    6;
	configs[10]+=   18;
	configs[11]+=   54;
	configs[12]+=  162;
	configs[14]+=  486;
	configs[21]+= 1941;
	configs[31]+=    6;
	configs[32]+=   18;
	configs[33]+=   18;
	configs[34]+=   18;
	configs[36]+=   18;
	bb.mover.u4s[0]^=0x4040400;
	bb.mover.u4s[1]^=0x40004;
}

void FlipFunctionBBWhite1191() {
	configs[35]-=    9;
}

void FlipFunctionBBBlack1191() {
	configs[35]+=    9;
}

void FlipFunctionBBWhite1192() {
	configs[ 6]-=   54;
	configs[15]-=  162;
	configs[22]-= 1458;
	configs[35]-=   63;
	bb.mover.u4s[1]^=0x80000;
}

void FlipFunctionBBBlack1192() {
	configs[ 6]+=   54;
	configs[15]+=  162;
	configs[22]+= 1458;
	configs[35]+=   63;
	bb.mover.u4s[1]^=0x80000;
}

void FlipFunctionBBWhite1193() {
	configs[ 4]-=    6;
	configs[11]-=  162;
	configs[20]-=  162;
	configs[35]-=   15;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBBlack1193() {
	configs[ 4]+=    6;
	configs[11]+=  162;
	configs[20]+=  162;
	configs[35]+=   15;
	bb.mover.u4s[1]^=0x2;
}

void FlipFunctionBBWhite1194() {
	configs[ 4]-=    6;
	configs[ 6]-=   54;
	configs[11]-=  162;
	configs[15]-=  162;
	configs[20]-=  162;
	configs[22]-= 1458;
	configs[35]-=   69;
	bb.mover.u4s[1]^=0x80002;
}

void FlipFunctionBBBlack1194() {
	configs[ 4]+=    6;
	configs[ 6]+=   54;
	configs[11]+=  162;
	configs[15]+=  162;
	configs[20]+=  162;
	configs[22]+= 1458;
	configs[35]+=   69;
	bb.mover.u4s[1]^=0x80002;
}

void FlipFunctionBBWhite1195() {
	configs[ 5]-=   27;
	bb.mover.u4s[1]^=0x800;
	bb.empty.u4s[1]^=0x800;
}

void FlipFunctionBBBlack1195() {
	configs[ 5]+=   27;
	bb.mover.u4s[1]^=0x800;
	bb.empty.u4s[1]^=0x800;
}

void FlipFunctionBBWhite1196() {
	configs[ 5]-=  189;
	configs[15]-=   54;
	configs[23]-=  486;
	configs[33]-=  162;
	bb.mover.u4s[1]^=0x1800;
	bb.empty.u4s[1]^=0x800;
}

void FlipFunctionBBBlack1196() {
	configs[ 5]+=  189;
	configs[15]+=   54;
	configs[23]+=  486;
	configs[33]+=  162;
	bb.mover.u4s[1]^=0x1800;
	bb.empty.u4s[1]^=0x800;
}

void FlipFunctionBBWhite1197() {
	configs[ 5]-=  675;
	configs[15]-=   54;
	configs[16]-=   18;
	configs[23]-=  486;
	configs[24]-=  486;
	configs[32]-=  486;
	configs[33]-=  162;
	bb.mover.u4s[1]^=0x3800;
	bb.empty.u4s[1]^=0x800;
}

void FlipFunctionBBBlack1197() {
	configs[ 5]+=  675;
	configs[15]+=   54;
	configs[16]+=   18;
	configs[23]+=  486;
	configs[24]+=  486;
	configs[32]+=  486;
	configs[33]+=  162;
	bb.mover.u4s[1]^=0x3800;
	bb.empty.u4s[1]^=0x800;
}

void FlipFunctionBBWhite1198() {
	configs[ 5]-= 2133;
	configs[15]-=   54;
	configs[16]-=   18;
	configs[17]-=    6;
	configs[23]-=  486;
	configs[24]-=  486;
	configs[25]-=  486;
	configs[31]-=  486;
	configs[32]-=  486;
	configs[33]-=  162;
	bb.mover.u4s[1]^=0x7800;
	bb.empty.u4s[1]^=0x800;
}

void FlipFunctionBBBlack1198() {
	configs[ 5]+= 2133;
	configs[15]+=   54;
	configs[16]+=   18;
	configs[17]+=    6;
	configs[23]+=  486;
	configs[24]+=  486;
	configs[25]+=  486;
	configs[31]+=  486;
	configs[32]+=  486;
	configs[33]+=  162;
	bb.mover.u4s[1]^=0x7800;
	bb.empty.u4s[1]^=0x800;
}

void FlipFunctionBBWhite1199() {
	configs[ 5]-=   45;
	configs[13]-=  486;
	configs[21]-=  486;
	configs[35]-=   18;
	bb.mover.u4s[1]^=0xC00;
	bb.empty.u4s[1]^=0x800;
}

void FlipFunctionBBBlack1199() {
	configs[ 5]+=   45;
	configs[13]+=  486;
	configs[21]+=  486;
	configs[35]+=   18;
	bb.mover.u4s[1]^=0xC00;
	bb.empty.u4s[1]^=0x800;
}

void FlipFunctionBBWhite1200() {
	configs[ 5]-=  207;
	configs[13]-=  486;
	configs[15]-=   54;
	configs[21]-=  486;
	configs[23]-=  486;
	configs[33]-=  162;
	configs[35]-=   18;
	bb.mover.u4s[1]^=0x1C00;
	bb.empty.u4s[1]^=0x800;
}

void FlipFunctionBBBlack1200() {
	configs[ 5]+=  207;
	configs[13]+=  486;
	configs[15]+=   54;
	configs[21]+=  486;
	configs[23]+=  486;
	configs[33]+=  162;
	configs[35]+=   18;
	bb.mover.u4s[1]^=0x1C00;
	bb.empty.u4s[1]^=0x800;
}

void FlipFunctionBBWhite1201() {
	configs[ 5]-=  693;
	configs[13]-=  486;
	configs[15]-=   54;
	configs[16]-=   18;
	configs[21]-=  486;
	configs[23]-=  486;
	configs[24]-=  486;
	configs[32]-=  486;
	configs[33]-=  162;
	configs[35]-=   18;
	bb.mover.u4s[1]^=0x3C00;
	bb.empty.u4s[1]^=0x800;
}

void FlipFunctionBBBlack1201() {
	configs[ 5]+=  693;
	configs[13]+=  486;
	configs[15]+=   54;
	configs[16]+=   18;
	configs[21]+=  486;
	configs[23]+=  486;
	configs[24]+=  486;
	configs[32]+=  486;
	configs[33]+=  162;
	configs[35]+=   18;
	bb.mover.u4s[1]^=0x3C00;
	bb.empty.u4s[1]^=0x800;
}

void FlipFunctionBBWhite1202() {
	configs[ 5]-= 2151;
	configs[13]-=  486;
	configs[15]-=   54;
	configs[16]-=   18;
	configs[17]-=    6;
	configs[21]-=  486;
	configs[23]-=  486;
	configs[24]-=  486;
	configs[25]-=  486;
	configs[31]-=  486;
	configs[32]-=  486;
	configs[33]-=  162;
	configs[35]-=   18;
	bb.mover.u4s[1]^=0x7C00;
	bb.empty.u4s[1]^=0x800;
}

void FlipFunctionBBBlack1202() {
	configs[ 5]+= 2151;
	configs[13]+=  486;
	configs[15]+=   54;
	configs[16]+=   18;
	configs[17]+=    6;
	configs[21]+=  486;
	configs[23]+=  486;
	configs[24]+=  486;
	configs[25]+=  486;
	configs[31]+=  486;
	configs[32]+=  486;
	configs[33]+=  162;
	configs[35]+=   18;
	bb.mover.u4s[1]^=0x7C00;
	bb.empty.u4s[1]^=0x800;
}

void FlipFunctionBBWhite1203() {
	configs[ 5]-=   51;
	configs[12]-=  486;
	configs[13]-=  486;
	configs[20]-=  486;
	configs[21]-=  486;
	configs[35]-=   18;
	configs[36]-=    6;
	bb.mover.u4s[1]^=0xE00;
	bb.empty.u4s[1]^=0x800;
}

void FlipFunctionBBBlack1203() {
	configs[ 5]+=   51;
	configs[12]+=  486;
	configs[13]+=  486;
	configs[20]+=  486;
	configs[21]+=  486;
	configs[35]+=   18;
	configs[36]+=    6;
	bb.mover.u4s[1]^=0xE00;
	bb.empty.u4s[1]^=0x800;
}

void FlipFunctionBBWhite1204() {
	configs[ 5]-=  213;
	configs[12]-=  486;
	configs[13]-=  486;
	configs[15]-=   54;
	configs[20]-=  486;
	configs[21]-=  486;
	configs[23]-=  486;
	configs[33]-=  162;
	configs[35]-=   18;
	configs[36]-=    6;
	bb.mover.u4s[1]^=0x1E00;
	bb.empty.u4s[1]^=0x800;
}

void FlipFunctionBBBlack1204() {
	configs[ 5]+=  213;
	configs[12]+=  486;
	configs[13]+=  486;
	configs[15]+=   54;
	configs[20]+=  486;
	configs[21]+=  486;
	configs[23]+=  486;
	configs[33]+=  162;
	configs[35]+=   18;
	configs[36]+=    6;
	bb.mover.u4s[1]^=0x1E00;
	bb.empty.u4s[1]^=0x800;
}

void FlipFunctionBBWhite1205() {
	configs[ 5]-=  699;
	configs[12]-=  486;
	configs[13]-=  486;
	configs[15]-=   54;
	configs[16]-=   18;
	configs[20]-=  486;
	configs[21]-=  486;
	configs[23]-=  486;
	configs[24]-=  486;
	configs[32]-=  486;
	configs[33]-=  162;
	configs[35]-=   18;
	configs[36]-=    6;
	bb.mover.u4s[1]^=0x3E00;
	bb.empty.u4s[1]^=0x800;
}

void FlipFunctionBBBlack1205() {
	configs[ 5]+=  699;
	configs[12]+=  486;
	configs[13]+=  486;
	configs[15]+=   54;
	configs[16]+=   18;
	configs[20]+=  486;
	configs[21]+=  486;
	configs[23]+=  486;
	configs[24]+=  486;
	configs[32]+=  486;
	configs[33]+=  162;
	configs[35]+=   18;
	configs[36]+=    6;
	bb.mover.u4s[1]^=0x3E00;
	bb.empty.u4s[1]^=0x800;
}

void FlipFunctionBBWhite1206() {
	configs[ 5]-= 2157;
	configs[12]-=  486;
	configs[13]-=  486;
	configs[15]-=   54;
	configs[16]-=   18;
	configs[17]-=    6;
	configs[20]-=  486;
	configs[21]-=  486;
	configs[23]-=  486;
	configs[24]-=  486;
	configs[25]-=  486;
	configs[31]-=  486;
	configs[32]-=  486;
	configs[33]-=  162;
	configs[35]-=   18;
	configs[36]-=    6;
	bb.mover.u4s[1]^=0x7E00;
	bb.empty.u4s[1]^=0x800;
}

void FlipFunctionBBBlack1206() {
	configs[ 5]+= 2157;
	configs[12]+=  486;
	configs[13]+=  486;
	configs[15]+=   54;
	configs[16]+=   18;
	configs[17]+=    6;
	configs[20]+=  486;
	configs[21]+=  486;
	configs[23]+=  486;
	configs[24]+=  486;
	configs[25]+=  486;
	configs[31]+=  486;
	configs[32]+=  486;
	configs[33]+=  162;
	configs[35]+=   18;
	configs[36]+=    6;
	bb.mover.u4s[1]^=0x7E00;
	bb.empty.u4s[1]^=0x800;
}

void FlipFunctionBBWhite1207() {
	configs[14]-=   81;
}

void FlipFunctionBBBlack1207() {
	configs[14]+=   81;
}

void FlipFunctionBBWhite1208() {
	configs[ 6]-=   18;
	configs[14]-=  567;
	configs[21]-= 1458;
	configs[36]-=   18;
	bb.mover.u4s[1]^=0x40000;
}

void FlipFunctionBBBlack1208() {
	configs[ 6]+=   18;
	configs[14]+=  567;
	configs[21]+= 1458;
	configs[36]+=   18;
	bb.mover.u4s[1]^=0x40000;
}

void FlipFunctionBBWhite1209() {
	configs[ 4]-=  162;
	configs[14]-=  135;
	configs[23]-=  162;
	configs[32]-=  162;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBBlack1209() {
	configs[ 4]+=  162;
	configs[14]+=  135;
	configs[23]+=  162;
	configs[32]+=  162;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBWhite1210() {
	configs[ 4]-=  162;
	configs[ 6]-=   18;
	configs[14]-=  621;
	configs[21]-= 1458;
	configs[23]-=  162;
	configs[32]-=  162;
	configs[36]-=   18;
	bb.mover.u4s[1]^=0x40010;
}

void FlipFunctionBBBlack1210() {
	configs[ 4]+=  162;
	configs[ 6]+=   18;
	configs[14]+=  621;
	configs[21]+= 1458;
	configs[23]+=  162;
	configs[32]+=  162;
	configs[36]+=   18;
	bb.mover.u4s[1]^=0x40010;
}

void FlipFunctionBBWhite1211() {
	configs[ 3]-=  486;
	configs[ 4]-=  162;
	configs[14]-=  153;
	configs[23]-=  162;
	configs[24]-=   54;
	configs[30]-=   54;
	configs[32]-=  162;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBBlack1211() {
	configs[ 3]+=  486;
	configs[ 4]+=  162;
	configs[14]+=  153;
	configs[23]+=  162;
	configs[24]+=   54;
	configs[30]+=   54;
	configs[32]+=  162;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBWhite1212() {
	configs[ 3]-=  486;
	configs[ 4]-=  162;
	configs[ 6]-=   18;
	configs[14]-=  639;
	configs[21]-= 1458;
	configs[23]-=  162;
	configs[24]-=   54;
	configs[30]-=   54;
	configs[32]-=  162;
	configs[36]-=   18;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x40010;
}

void FlipFunctionBBBlack1212() {
	configs[ 3]+=  486;
	configs[ 4]+=  162;
	configs[ 6]+=   18;
	configs[14]+=  639;
	configs[21]+= 1458;
	configs[23]+=  162;
	configs[24]+=   54;
	configs[30]+=   54;
	configs[32]+=  162;
	configs[36]+=   18;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x40010;
}

void FlipFunctionBBWhite1213() {
	configs[ 2]-= 1458;
	configs[ 3]-=  486;
	configs[ 4]-=  162;
	configs[14]-=  159;
	configs[23]-=  162;
	configs[24]-=   54;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[30]-=   54;
	configs[32]-=  162;
	bb.mover.u4s[0]^=0x20400000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBBlack1213() {
	configs[ 2]+= 1458;
	configs[ 3]+=  486;
	configs[ 4]+=  162;
	configs[14]+=  159;
	configs[23]+=  162;
	configs[24]+=   54;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[30]+=   54;
	configs[32]+=  162;
	bb.mover.u4s[0]^=0x20400000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBWhite1214() {
	configs[ 2]-= 1458;
	configs[ 3]-=  486;
	configs[ 4]-=  162;
	configs[ 6]-=   18;
	configs[14]-=  645;
	configs[21]-= 1458;
	configs[23]-=  162;
	configs[24]-=   54;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[30]-=   54;
	configs[32]-=  162;
	configs[36]-=   18;
	bb.mover.u4s[0]^=0x20400000;
	bb.mover.u4s[1]^=0x40010;
}

void FlipFunctionBBBlack1214() {
	configs[ 2]+= 1458;
	configs[ 3]+=  486;
	configs[ 4]+=  162;
	configs[ 6]+=   18;
	configs[14]+=  645;
	configs[21]+= 1458;
	configs[23]+=  162;
	configs[24]+=   54;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[30]+=   54;
	configs[32]+=  162;
	configs[36]+=   18;
	bb.mover.u4s[0]^=0x20400000;
	bb.mover.u4s[1]^=0x40010;
}

void FlipFunctionBBWhite1215() {
	configs[22]-=  243;
}

void FlipFunctionBBBlack1215() {
	configs[22]+=  243;
}

void FlipFunctionBBWhite1216() {
	configs[ 6]-=   54;
	configs[15]-=  162;
	configs[22]-= 1701;
	configs[35]-=   54;
	bb.mover.u4s[1]^=0x80000;
}

void FlipFunctionBBBlack1216() {
	configs[ 6]+=   54;
	configs[15]+=  162;
	configs[22]+= 1701;
	configs[35]+=   54;
	bb.mover.u4s[1]^=0x80000;
}

void FlipFunctionBBWhite1217() {
	configs[ 4]-=   54;
	configs[13]-=  162;
	configs[22]-=  405;
	configs[33]-=   54;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBBlack1217() {
	configs[ 4]+=   54;
	configs[13]+=  162;
	configs[22]+=  405;
	configs[33]+=   54;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBWhite1218() {
	configs[ 4]-=   54;
	configs[ 6]-=   54;
	configs[13]-=  162;
	configs[15]-=  162;
	configs[22]-= 1863;
	configs[33]-=   54;
	configs[35]-=   54;
	bb.mover.u4s[1]^=0x80008;
}

void FlipFunctionBBBlack1218() {
	configs[ 4]+=   54;
	configs[ 6]+=   54;
	configs[13]+=  162;
	configs[15]+=  162;
	configs[22]+= 1863;
	configs[33]+=   54;
	configs[35]+=   54;
	bb.mover.u4s[1]^=0x80008;
}

void FlipFunctionBBWhite1219() {
	configs[ 3]-=   54;
	configs[ 4]-=   54;
	configs[12]-=   54;
	configs[13]-=  162;
	configs[22]-=  459;
	configs[32]-=   54;
	configs[33]-=   54;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBBlack1219() {
	configs[ 3]+=   54;
	configs[ 4]+=   54;
	configs[12]+=   54;
	configs[13]+=  162;
	configs[22]+=  459;
	configs[32]+=   54;
	configs[33]+=   54;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBWhite1220() {
	configs[ 3]-=   54;
	configs[ 4]-=   54;
	configs[ 6]-=   54;
	configs[12]-=   54;
	configs[13]-=  162;
	configs[15]-=  162;
	configs[22]-= 1917;
	configs[32]-=   54;
	configs[33]-=   54;
	configs[35]-=   54;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x80008;
}

void FlipFunctionBBBlack1220() {
	configs[ 3]+=   54;
	configs[ 4]+=   54;
	configs[ 6]+=   54;
	configs[12]+=   54;
	configs[13]+=  162;
	configs[15]+=  162;
	configs[22]+= 1917;
	configs[32]+=   54;
	configs[33]+=   54;
	configs[35]+=   54;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x80008;
}

void FlipFunctionBBWhite1221() {
	configs[ 2]-=   54;
	configs[ 3]-=   54;
	configs[ 4]-=   54;
	configs[11]-=   18;
	configs[12]-=   54;
	configs[13]-=  162;
	configs[22]-=  477;
	configs[31]-=   18;
	configs[32]-=   54;
	configs[33]-=   54;
	bb.mover.u4s[0]^=0x8080000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBBlack1221() {
	configs[ 2]+=   54;
	configs[ 3]+=   54;
	configs[ 4]+=   54;
	configs[11]+=   18;
	configs[12]+=   54;
	configs[13]+=  162;
	configs[22]+=  477;
	configs[31]+=   18;
	configs[32]+=   54;
	configs[33]+=   54;
	bb.mover.u4s[0]^=0x8080000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBWhite1222() {
	configs[ 2]-=   54;
	configs[ 3]-=   54;
	configs[ 4]-=   54;
	configs[ 6]-=   54;
	configs[11]-=   18;
	configs[12]-=   54;
	configs[13]-=  162;
	configs[15]-=  162;
	configs[22]-= 1935;
	configs[31]-=   18;
	configs[32]-=   54;
	configs[33]-=   54;
	configs[35]-=   54;
	bb.mover.u4s[0]^=0x8080000;
	bb.mover.u4s[1]^=0x80008;
}

void FlipFunctionBBBlack1222() {
	configs[ 2]+=   54;
	configs[ 3]+=   54;
	configs[ 4]+=   54;
	configs[ 6]+=   54;
	configs[11]+=   18;
	configs[12]+=   54;
	configs[13]+=  162;
	configs[15]+=  162;
	configs[22]+= 1935;
	configs[31]+=   18;
	configs[32]+=   54;
	configs[33]+=   54;
	configs[35]+=   54;
	bb.mover.u4s[0]^=0x8080000;
	bb.mover.u4s[1]^=0x80008;
}

void FlipFunctionBBWhite1223() {
	configs[ 1]-=   54;
	configs[ 2]-=   54;
	configs[ 3]-=   54;
	configs[ 4]-=   54;
	configs[10]-=    6;
	configs[11]-=   18;
	configs[12]-=   54;
	configs[13]-=  162;
	configs[22]-=  483;
	configs[30]-=    6;
	configs[31]-=   18;
	configs[32]-=   54;
	configs[33]-=   54;
	bb.mover.u4s[0]^=0x8080800;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBBlack1223() {
	configs[ 1]+=   54;
	configs[ 2]+=   54;
	configs[ 3]+=   54;
	configs[ 4]+=   54;
	configs[10]+=    6;
	configs[11]+=   18;
	configs[12]+=   54;
	configs[13]+=  162;
	configs[22]+=  483;
	configs[30]+=    6;
	configs[31]+=   18;
	configs[32]+=   54;
	configs[33]+=   54;
	bb.mover.u4s[0]^=0x8080800;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBWhite1224() {
	configs[ 1]-=   54;
	configs[ 2]-=   54;
	configs[ 3]-=   54;
	configs[ 4]-=   54;
	configs[ 6]-=   54;
	configs[10]-=    6;
	configs[11]-=   18;
	configs[12]-=   54;
	configs[13]-=  162;
	configs[15]-=  162;
	configs[22]-= 1941;
	configs[30]-=    6;
	configs[31]-=   18;
	configs[32]-=   54;
	configs[33]-=   54;
	configs[35]-=   54;
	bb.mover.u4s[0]^=0x8080800;
	bb.mover.u4s[1]^=0x80008;
}

void FlipFunctionBBBlack1224() {
	configs[ 1]+=   54;
	configs[ 2]+=   54;
	configs[ 3]+=   54;
	configs[ 4]+=   54;
	configs[ 6]+=   54;
	configs[10]+=    6;
	configs[11]+=   18;
	configs[12]+=   54;
	configs[13]+=  162;
	configs[15]+=  162;
	configs[22]+= 1941;
	configs[30]+=    6;
	configs[31]+=   18;
	configs[32]+=   54;
	configs[33]+=   54;
	configs[35]+=   54;
	bb.mover.u4s[0]^=0x8080800;
	bb.mover.u4s[1]^=0x80008;
}

void FlipFunctionBBWhite1225() {
	configs[34]-=   27;
}

void FlipFunctionBBBlack1225() {
	configs[34]+=   27;
}

void FlipFunctionBBWhite1226() {
	configs[ 6]-=  162;
	configs[16]-=   54;
	configs[23]-= 1458;
	configs[34]-=  189;
	bb.mover.u4s[1]^=0x100000;
}

void FlipFunctionBBBlack1226() {
	configs[ 6]+=  162;
	configs[16]+=   54;
	configs[23]+= 1458;
	configs[34]+=  189;
	bb.mover.u4s[1]^=0x100000;
}

void FlipFunctionBBWhite1227() {
	configs[ 4]-=   18;
	configs[12]-=  162;
	configs[21]-=  162;
	configs[34]-=   45;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBBlack1227() {
	configs[ 4]+=   18;
	configs[12]+=  162;
	configs[21]+=  162;
	configs[34]+=   45;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBWhite1228() {
	configs[ 4]-=   18;
	configs[ 6]-=  162;
	configs[12]-=  162;
	configs[16]-=   54;
	configs[21]-=  162;
	configs[23]-= 1458;
	configs[34]-=  207;
	bb.mover.u4s[1]^=0x100004;
}

void FlipFunctionBBBlack1228() {
	configs[ 4]+=   18;
	configs[ 6]+=  162;
	configs[12]+=  162;
	configs[16]+=   54;
	configs[21]+=  162;
	configs[23]+= 1458;
	configs[34]+=  207;
	bb.mover.u4s[1]^=0x100004;
}

void FlipFunctionBBWhite1229() {
	configs[ 3]-=    6;
	configs[ 4]-=   18;
	configs[10]-=   54;
	configs[12]-=  162;
	configs[20]-=   54;
	configs[21]-=  162;
	configs[34]-=   51;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBBlack1229() {
	configs[ 3]+=    6;
	configs[ 4]+=   18;
	configs[10]+=   54;
	configs[12]+=  162;
	configs[20]+=   54;
	configs[21]+=  162;
	configs[34]+=   51;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x4;
}

void FlipFunctionBBWhite1230() {
	configs[ 3]-=    6;
	configs[ 4]-=   18;
	configs[ 6]-=  162;
	configs[10]-=   54;
	configs[12]-=  162;
	configs[16]-=   54;
	configs[20]-=   54;
	configs[21]-=  162;
	configs[23]-= 1458;
	configs[34]-=  213;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x100004;
}

void FlipFunctionBBBlack1230() {
	configs[ 3]+=    6;
	configs[ 4]+=   18;
	configs[ 6]+=  162;
	configs[10]+=   54;
	configs[12]+=  162;
	configs[16]+=   54;
	configs[20]+=   54;
	configs[21]+=  162;
	configs[23]+= 1458;
	configs[34]+=  213;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x100004;
}

void FlipFunctionBBWhite1231() {
	configs[ 5]-=   81;
	bb.mover.u4s[1]^=0x1000;
	bb.empty.u4s[1]^=0x1000;
}

void FlipFunctionBBBlack1231() {
	configs[ 5]+=   81;
	bb.mover.u4s[1]^=0x1000;
	bb.empty.u4s[1]^=0x1000;
}

void FlipFunctionBBWhite1232() {
	configs[ 5]-=  567;
	configs[16]-=   18;
	configs[24]-=  486;
	configs[32]-=  486;
	bb.mover.u4s[1]^=0x3000;
	bb.empty.u4s[1]^=0x1000;
}

void FlipFunctionBBBlack1232() {
	configs[ 5]+=  567;
	configs[16]+=   18;
	configs[24]+=  486;
	configs[32]+=  486;
	bb.mover.u4s[1]^=0x3000;
	bb.empty.u4s[1]^=0x1000;
}

void FlipFunctionBBWhite1233() {
	configs[ 5]-= 2025;
	configs[16]-=   18;
	configs[17]-=    6;
	configs[24]-=  486;
	configs[25]-=  486;
	configs[31]-=  486;
	configs[32]-=  486;
	bb.mover.u4s[1]^=0x7000;
	bb.empty.u4s[1]^=0x1000;
}

void FlipFunctionBBBlack1233() {
	configs[ 5]+= 2025;
	configs[16]+=   18;
	configs[17]+=    6;
	configs[24]+=  486;
	configs[25]+=  486;
	configs[31]+=  486;
	configs[32]+=  486;
	bb.mover.u4s[1]^=0x7000;
	bb.empty.u4s[1]^=0x1000;
}

void FlipFunctionBBWhite1234() {
	configs[ 5]-=  135;
	configs[14]-=  162;
	configs[22]-=  486;
	configs[34]-=   54;
	bb.mover.u4s[1]^=0x1800;
	bb.empty.u4s[1]^=0x1000;
}

void FlipFunctionBBBlack1234() {
	configs[ 5]+=  135;
	configs[14]+=  162;
	configs[22]+=  486;
	configs[34]+=   54;
	bb.mover.u4s[1]^=0x1800;
	bb.empty.u4s[1]^=0x1000;
}

void FlipFunctionBBWhite1235() {
	configs[ 5]-=  621;
	configs[14]-=  162;
	configs[16]-=   18;
	configs[22]-=  486;
	configs[24]-=  486;
	configs[32]-=  486;
	configs[34]-=   54;
	bb.mover.u4s[1]^=0x3800;
	bb.empty.u4s[1]^=0x1000;
}

void FlipFunctionBBBlack1235() {
	configs[ 5]+=  621;
	configs[14]+=  162;
	configs[16]+=   18;
	configs[22]+=  486;
	configs[24]+=  486;
	configs[32]+=  486;
	configs[34]+=   54;
	bb.mover.u4s[1]^=0x3800;
	bb.empty.u4s[1]^=0x1000;
}

void FlipFunctionBBWhite1236() {
	configs[ 5]-= 2079;
	configs[14]-=  162;
	configs[16]-=   18;
	configs[17]-=    6;
	configs[22]-=  486;
	configs[24]-=  486;
	configs[25]-=  486;
	configs[31]-=  486;
	configs[32]-=  486;
	configs[34]-=   54;
	bb.mover.u4s[1]^=0x7800;
	bb.empty.u4s[1]^=0x1000;
}

void FlipFunctionBBBlack1236() {
	configs[ 5]+= 2079;
	configs[14]+=  162;
	configs[16]+=   18;
	configs[17]+=    6;
	configs[22]+=  486;
	configs[24]+=  486;
	configs[25]+=  486;
	configs[31]+=  486;
	configs[32]+=  486;
	configs[34]+=   54;
	bb.mover.u4s[1]^=0x7800;
	bb.empty.u4s[1]^=0x1000;
}

void FlipFunctionBBWhite1237() {
	configs[ 5]-=  153;
	configs[13]-=  486;
	configs[14]-=  162;
	configs[21]-=  486;
	configs[22]-=  486;
	configs[34]-=   54;
	configs[35]-=   18;
	bb.mover.u4s[1]^=0x1C00;
	bb.empty.u4s[1]^=0x1000;
}

void FlipFunctionBBBlack1237() {
	configs[ 5]+=  153;
	configs[13]+=  486;
	configs[14]+=  162;
	configs[21]+=  486;
	configs[22]+=  486;
	configs[34]+=   54;
	configs[35]+=   18;
	bb.mover.u4s[1]^=0x1C00;
	bb.empty.u4s[1]^=0x1000;
}

void FlipFunctionBBWhite1238() {
	configs[ 5]-=  639;
	configs[13]-=  486;
	configs[14]-=  162;
	configs[16]-=   18;
	configs[21]-=  486;
	configs[22]-=  486;
	configs[24]-=  486;
	configs[32]-=  486;
	configs[34]-=   54;
	configs[35]-=   18;
	bb.mover.u4s[1]^=0x3C00;
	bb.empty.u4s[1]^=0x1000;
}

void FlipFunctionBBBlack1238() {
	configs[ 5]+=  639;
	configs[13]+=  486;
	configs[14]+=  162;
	configs[16]+=   18;
	configs[21]+=  486;
	configs[22]+=  486;
	configs[24]+=  486;
	configs[32]+=  486;
	configs[34]+=   54;
	configs[35]+=   18;
	bb.mover.u4s[1]^=0x3C00;
	bb.empty.u4s[1]^=0x1000;
}

void FlipFunctionBBWhite1239() {
	configs[ 5]-= 2097;
	configs[13]-=  486;
	configs[14]-=  162;
	configs[16]-=   18;
	configs[17]-=    6;
	configs[21]-=  486;
	configs[22]-=  486;
	configs[24]-=  486;
	configs[25]-=  486;
	configs[31]-=  486;
	configs[32]-=  486;
	configs[34]-=   54;
	configs[35]-=   18;
	bb.mover.u4s[1]^=0x7C00;
	bb.empty.u4s[1]^=0x1000;
}

void FlipFunctionBBBlack1239() {
	configs[ 5]+= 2097;
	configs[13]+=  486;
	configs[14]+=  162;
	configs[16]+=   18;
	configs[17]+=    6;
	configs[21]+=  486;
	configs[22]+=  486;
	configs[24]+=  486;
	configs[25]+=  486;
	configs[31]+=  486;
	configs[32]+=  486;
	configs[34]+=   54;
	configs[35]+=   18;
	bb.mover.u4s[1]^=0x7C00;
	bb.empty.u4s[1]^=0x1000;
}

void FlipFunctionBBWhite1240() {
	configs[ 5]-=  159;
	configs[12]-=  486;
	configs[13]-=  486;
	configs[14]-=  162;
	configs[20]-=  486;
	configs[21]-=  486;
	configs[22]-=  486;
	configs[34]-=   54;
	configs[35]-=   18;
	configs[36]-=    6;
	bb.mover.u4s[1]^=0x1E00;
	bb.empty.u4s[1]^=0x1000;
}

void FlipFunctionBBBlack1240() {
	configs[ 5]+=  159;
	configs[12]+=  486;
	configs[13]+=  486;
	configs[14]+=  162;
	configs[20]+=  486;
	configs[21]+=  486;
	configs[22]+=  486;
	configs[34]+=   54;
	configs[35]+=   18;
	configs[36]+=    6;
	bb.mover.u4s[1]^=0x1E00;
	bb.empty.u4s[1]^=0x1000;
}

void FlipFunctionBBWhite1241() {
	configs[ 5]-=  645;
	configs[12]-=  486;
	configs[13]-=  486;
	configs[14]-=  162;
	configs[16]-=   18;
	configs[20]-=  486;
	configs[21]-=  486;
	configs[22]-=  486;
	configs[24]-=  486;
	configs[32]-=  486;
	configs[34]-=   54;
	configs[35]-=   18;
	configs[36]-=    6;
	bb.mover.u4s[1]^=0x3E00;
	bb.empty.u4s[1]^=0x1000;
}

void FlipFunctionBBBlack1241() {
	configs[ 5]+=  645;
	configs[12]+=  486;
	configs[13]+=  486;
	configs[14]+=  162;
	configs[16]+=   18;
	configs[20]+=  486;
	configs[21]+=  486;
	configs[22]+=  486;
	configs[24]+=  486;
	configs[32]+=  486;
	configs[34]+=   54;
	configs[35]+=   18;
	configs[36]+=    6;
	bb.mover.u4s[1]^=0x3E00;
	bb.empty.u4s[1]^=0x1000;
}

void FlipFunctionBBWhite1242() {
	configs[ 5]-= 2103;
	configs[12]-=  486;
	configs[13]-=  486;
	configs[14]-=  162;
	configs[16]-=   18;
	configs[17]-=    6;
	configs[20]-=  486;
	configs[21]-=  486;
	configs[22]-=  486;
	configs[24]-=  486;
	configs[25]-=  486;
	configs[31]-=  486;
	configs[32]-=  486;
	configs[34]-=   54;
	configs[35]-=   18;
	configs[36]-=    6;
	bb.mover.u4s[1]^=0x7E00;
	bb.empty.u4s[1]^=0x1000;
}

void FlipFunctionBBBlack1242() {
	configs[ 5]+= 2103;
	configs[12]+=  486;
	configs[13]+=  486;
	configs[14]+=  162;
	configs[16]+=   18;
	configs[17]+=    6;
	configs[20]+=  486;
	configs[21]+=  486;
	configs[22]+=  486;
	configs[24]+=  486;
	configs[25]+=  486;
	configs[31]+=  486;
	configs[32]+=  486;
	configs[34]+=   54;
	configs[35]+=   18;
	configs[36]+=    6;
	bb.mover.u4s[1]^=0x7E00;
	bb.empty.u4s[1]^=0x1000;
}

void FlipFunctionBBWhite1243() {
	configs[15]-=   27;
}

void FlipFunctionBBBlack1243() {
	configs[15]+=   27;
}

void FlipFunctionBBWhite1244() {
	configs[ 6]-=   54;
	configs[15]-=  189;
	configs[22]-= 1458;
	configs[35]-=   54;
	bb.mover.u4s[1]^=0x80000;
}

void FlipFunctionBBBlack1244() {
	configs[ 6]+=   54;
	configs[15]+=  189;
	configs[22]+= 1458;
	configs[35]+=   54;
	bb.mover.u4s[1]^=0x80000;
}

void FlipFunctionBBWhite1245() {
	configs[ 4]-=  486;
	configs[15]-=   45;
	configs[24]-=  162;
	configs[31]-=  162;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBBlack1245() {
	configs[ 4]+=  486;
	configs[15]+=   45;
	configs[24]+=  162;
	configs[31]+=  162;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBWhite1246() {
	configs[ 4]-=  486;
	configs[ 6]-=   54;
	configs[15]-=  207;
	configs[22]-= 1458;
	configs[24]-=  162;
	configs[31]-=  162;
	configs[35]-=   54;
	bb.mover.u4s[1]^=0x80020;
}

void FlipFunctionBBBlack1246() {
	configs[ 4]+=  486;
	configs[ 6]+=   54;
	configs[15]+=  207;
	configs[22]+= 1458;
	configs[24]+=  162;
	configs[31]+=  162;
	configs[35]+=   54;
	bb.mover.u4s[1]^=0x80020;
}

void FlipFunctionBBWhite1247() {
	configs[ 3]-= 1458;
	configs[ 4]-=  486;
	configs[15]-=   51;
	configs[24]-=  162;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[31]-=  162;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBBlack1247() {
	configs[ 3]+= 1458;
	configs[ 4]+=  486;
	configs[15]+=   51;
	configs[24]+=  162;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[31]+=  162;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBWhite1248() {
	configs[ 3]-= 1458;
	configs[ 4]-=  486;
	configs[ 6]-=   54;
	configs[15]-=  213;
	configs[22]-= 1458;
	configs[24]-=  162;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[31]-=  162;
	configs[35]-=   54;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x80020;
}

void FlipFunctionBBBlack1248() {
	configs[ 3]+= 1458;
	configs[ 4]+=  486;
	configs[ 6]+=   54;
	configs[15]+=  213;
	configs[22]+= 1458;
	configs[24]+=  162;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[31]+=  162;
	configs[35]+=   54;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x80020;
}

void FlipFunctionBBWhite1249() {
	configs[23]-=  243;
}

void FlipFunctionBBBlack1249() {
	configs[23]+=  243;
}

void FlipFunctionBBWhite1250() {
	configs[ 6]-=  162;
	configs[16]-=   54;
	configs[23]-= 1701;
	configs[34]-=  162;
	bb.mover.u4s[1]^=0x100000;
}

void FlipFunctionBBBlack1250() {
	configs[ 6]+=  162;
	configs[16]+=   54;
	configs[23]+= 1701;
	configs[34]+=  162;
	bb.mover.u4s[1]^=0x100000;
}

void FlipFunctionBBWhite1251() {
	configs[ 4]-=  162;
	configs[14]-=   54;
	configs[23]-=  405;
	configs[32]-=  162;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBBlack1251() {
	configs[ 4]+=  162;
	configs[14]+=   54;
	configs[23]+=  405;
	configs[32]+=  162;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBWhite1252() {
	configs[ 4]-=  162;
	configs[ 6]-=  162;
	configs[14]-=   54;
	configs[16]-=   54;
	configs[23]-= 1863;
	configs[32]-=  162;
	configs[34]-=  162;
	bb.mover.u4s[1]^=0x100010;
}

void FlipFunctionBBBlack1252() {
	configs[ 4]+=  162;
	configs[ 6]+=  162;
	configs[14]+=   54;
	configs[16]+=   54;
	configs[23]+= 1863;
	configs[32]+=  162;
	configs[34]+=  162;
	bb.mover.u4s[1]^=0x100010;
}

void FlipFunctionBBWhite1253() {
	configs[ 3]-=  162;
	configs[ 4]-=  162;
	configs[13]-=   54;
	configs[14]-=   54;
	configs[23]-=  459;
	configs[31]-=   54;
	configs[32]-=  162;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBBlack1253() {
	configs[ 3]+=  162;
	configs[ 4]+=  162;
	configs[13]+=   54;
	configs[14]+=   54;
	configs[23]+=  459;
	configs[31]+=   54;
	configs[32]+=  162;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBWhite1254() {
	configs[ 3]-=  162;
	configs[ 4]-=  162;
	configs[ 6]-=  162;
	configs[13]-=   54;
	configs[14]-=   54;
	configs[16]-=   54;
	configs[23]-= 1917;
	configs[31]-=   54;
	configs[32]-=  162;
	configs[34]-=  162;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x100010;
}

void FlipFunctionBBBlack1254() {
	configs[ 3]+=  162;
	configs[ 4]+=  162;
	configs[ 6]+=  162;
	configs[13]+=   54;
	configs[14]+=   54;
	configs[16]+=   54;
	configs[23]+= 1917;
	configs[31]+=   54;
	configs[32]+=  162;
	configs[34]+=  162;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x100010;
}

void FlipFunctionBBWhite1255() {
	configs[ 2]-=  162;
	configs[ 3]-=  162;
	configs[ 4]-=  162;
	configs[12]-=   18;
	configs[13]-=   54;
	configs[14]-=   54;
	configs[23]-=  477;
	configs[30]-=   18;
	configs[31]-=   54;
	configs[32]-=  162;
	bb.mover.u4s[0]^=0x10100000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBBlack1255() {
	configs[ 2]+=  162;
	configs[ 3]+=  162;
	configs[ 4]+=  162;
	configs[12]+=   18;
	configs[13]+=   54;
	configs[14]+=   54;
	configs[23]+=  477;
	configs[30]+=   18;
	configs[31]+=   54;
	configs[32]+=  162;
	bb.mover.u4s[0]^=0x10100000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBWhite1256() {
	configs[ 2]-=  162;
	configs[ 3]-=  162;
	configs[ 4]-=  162;
	configs[ 6]-=  162;
	configs[12]-=   18;
	configs[13]-=   54;
	configs[14]-=   54;
	configs[16]-=   54;
	configs[23]-= 1935;
	configs[30]-=   18;
	configs[31]-=   54;
	configs[32]-=  162;
	configs[34]-=  162;
	bb.mover.u4s[0]^=0x10100000;
	bb.mover.u4s[1]^=0x100010;
}

void FlipFunctionBBBlack1256() {
	configs[ 2]+=  162;
	configs[ 3]+=  162;
	configs[ 4]+=  162;
	configs[ 6]+=  162;
	configs[12]+=   18;
	configs[13]+=   54;
	configs[14]+=   54;
	configs[16]+=   54;
	configs[23]+= 1935;
	configs[30]+=   18;
	configs[31]+=   54;
	configs[32]+=  162;
	configs[34]+=  162;
	bb.mover.u4s[0]^=0x10100000;
	bb.mover.u4s[1]^=0x100010;
}

void FlipFunctionBBWhite1257() {
	configs[ 1]-=  162;
	configs[ 2]-=  162;
	configs[ 3]-=  162;
	configs[ 4]-=  162;
	configs[11]-=    6;
	configs[12]-=   18;
	configs[13]-=   54;
	configs[14]-=   54;
	configs[23]-=  483;
	configs[29]-=    6;
	configs[30]-=   18;
	configs[31]-=   54;
	configs[32]-=  162;
	bb.mover.u4s[0]^=0x10101000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBBlack1257() {
	configs[ 1]+=  162;
	configs[ 2]+=  162;
	configs[ 3]+=  162;
	configs[ 4]+=  162;
	configs[11]+=    6;
	configs[12]+=   18;
	configs[13]+=   54;
	configs[14]+=   54;
	configs[23]+=  483;
	configs[29]+=    6;
	configs[30]+=   18;
	configs[31]+=   54;
	configs[32]+=  162;
	bb.mover.u4s[0]^=0x10101000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBWhite1258() {
	configs[ 1]-=  162;
	configs[ 2]-=  162;
	configs[ 3]-=  162;
	configs[ 4]-=  162;
	configs[ 6]-=  162;
	configs[11]-=    6;
	configs[12]-=   18;
	configs[13]-=   54;
	configs[14]-=   54;
	configs[16]-=   54;
	configs[23]-= 1941;
	configs[29]-=    6;
	configs[30]-=   18;
	configs[31]-=   54;
	configs[32]-=  162;
	configs[34]-=  162;
	bb.mover.u4s[0]^=0x10101000;
	bb.mover.u4s[1]^=0x100010;
}

void FlipFunctionBBBlack1258() {
	configs[ 1]+=  162;
	configs[ 2]+=  162;
	configs[ 3]+=  162;
	configs[ 4]+=  162;
	configs[ 6]+=  162;
	configs[11]+=    6;
	configs[12]+=   18;
	configs[13]+=   54;
	configs[14]+=   54;
	configs[16]+=   54;
	configs[23]+= 1941;
	configs[29]+=    6;
	configs[30]+=   18;
	configs[31]+=   54;
	configs[32]+=  162;
	configs[34]+=  162;
	bb.mover.u4s[0]^=0x10101000;
	bb.mover.u4s[1]^=0x100010;
}

void FlipFunctionBBWhite1259() {
	configs[33]-=   81;
}

void FlipFunctionBBBlack1259() {
	configs[33]+=   81;
}

void FlipFunctionBBWhite1260() {
	configs[ 6]-=  486;
	configs[17]-=   18;
	configs[24]-= 1458;
	configs[33]-=  567;
	bb.mover.u4s[1]^=0x200000;
}

void FlipFunctionBBBlack1260() {
	configs[ 6]+=  486;
	configs[17]+=   18;
	configs[24]+= 1458;
	configs[33]+=  567;
	bb.mover.u4s[1]^=0x200000;
}

void FlipFunctionBBWhite1261() {
	configs[ 4]-=   54;
	configs[13]-=  162;
	configs[22]-=  162;
	configs[33]-=  135;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBBlack1261() {
	configs[ 4]+=   54;
	configs[13]+=  162;
	configs[22]+=  162;
	configs[33]+=  135;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBWhite1262() {
	configs[ 4]-=   54;
	configs[ 6]-=  486;
	configs[13]-=  162;
	configs[17]-=   18;
	configs[22]-=  162;
	configs[24]-= 1458;
	configs[33]-=  621;
	bb.mover.u4s[1]^=0x200008;
}

void FlipFunctionBBBlack1262() {
	configs[ 4]+=   54;
	configs[ 6]+=  486;
	configs[13]+=  162;
	configs[17]+=   18;
	configs[22]+=  162;
	configs[24]+= 1458;
	configs[33]+=  621;
	bb.mover.u4s[1]^=0x200008;
}

void FlipFunctionBBWhite1263() {
	configs[ 3]-=   18;
	configs[ 4]-=   54;
	configs[11]-=   54;
	configs[13]-=  162;
	configs[21]-=   54;
	configs[22]-=  162;
	configs[33]-=  153;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBBlack1263() {
	configs[ 3]+=   18;
	configs[ 4]+=   54;
	configs[11]+=   54;
	configs[13]+=  162;
	configs[21]+=   54;
	configs[22]+=  162;
	configs[33]+=  153;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBWhite1264() {
	configs[ 3]-=   18;
	configs[ 4]-=   54;
	configs[ 6]-=  486;
	configs[11]-=   54;
	configs[13]-=  162;
	configs[17]-=   18;
	configs[21]-=   54;
	configs[22]-=  162;
	configs[24]-= 1458;
	configs[33]-=  639;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x200008;
}

void FlipFunctionBBBlack1264() {
	configs[ 3]+=   18;
	configs[ 4]+=   54;
	configs[ 6]+=  486;
	configs[11]+=   54;
	configs[13]+=  162;
	configs[17]+=   18;
	configs[21]+=   54;
	configs[22]+=  162;
	configs[24]+= 1458;
	configs[33]+=  639;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x200008;
}

void FlipFunctionBBWhite1265() {
	configs[ 2]-=    6;
	configs[ 3]-=   18;
	configs[ 4]-=   54;
	configs[ 9]-=   18;
	configs[11]-=   54;
	configs[13]-=  162;
	configs[20]-=   18;
	configs[21]-=   54;
	configs[22]-=  162;
	configs[33]-=  159;
	bb.mover.u4s[0]^=0x4020000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBBlack1265() {
	configs[ 2]+=    6;
	configs[ 3]+=   18;
	configs[ 4]+=   54;
	configs[ 9]+=   18;
	configs[11]+=   54;
	configs[13]+=  162;
	configs[20]+=   18;
	configs[21]+=   54;
	configs[22]+=  162;
	configs[33]+=  159;
	bb.mover.u4s[0]^=0x4020000;
	bb.mover.u4s[1]^=0x8;
}

void FlipFunctionBBWhite1266() {
	configs[ 2]-=    6;
	configs[ 3]-=   18;
	configs[ 4]-=   54;
	configs[ 6]-=  486;
	configs[ 9]-=   18;
	configs[11]-=   54;
	configs[13]-=  162;
	configs[17]-=   18;
	configs[20]-=   18;
	configs[21]-=   54;
	configs[22]-=  162;
	configs[24]-= 1458;
	configs[33]-=  645;
	bb.mover.u4s[0]^=0x4020000;
	bb.mover.u4s[1]^=0x200008;
}

void FlipFunctionBBBlack1266() {
	configs[ 2]+=    6;
	configs[ 3]+=   18;
	configs[ 4]+=   54;
	configs[ 6]+=  486;
	configs[ 9]+=   18;
	configs[11]+=   54;
	configs[13]+=  162;
	configs[17]+=   18;
	configs[20]+=   18;
	configs[21]+=   54;
	configs[22]+=  162;
	configs[24]+= 1458;
	configs[33]+=  645;
	bb.mover.u4s[0]^=0x4020000;
	bb.mover.u4s[1]^=0x200008;
}

void FlipFunctionBBWhite1267() {
	configs[ 5]-=  243;
	bb.mover.u4s[1]^=0x2000;
	bb.empty.u4s[1]^=0x2000;
}

void FlipFunctionBBBlack1267() {
	configs[ 5]+=  243;
	bb.mover.u4s[1]^=0x2000;
	bb.empty.u4s[1]^=0x2000;
}

void FlipFunctionBBWhite1268() {
	configs[ 5]-= 1701;
	configs[17]-=    6;
	configs[25]-=  486;
	configs[31]-=  486;
	bb.mover.u4s[1]^=0x6000;
	bb.empty.u4s[1]^=0x2000;
}

void FlipFunctionBBBlack1268() {
	configs[ 5]+= 1701;
	configs[17]+=    6;
	configs[25]+=  486;
	configs[31]+=  486;
	bb.mover.u4s[1]^=0x6000;
	bb.empty.u4s[1]^=0x2000;
}

void FlipFunctionBBWhite1269() {
	configs[ 5]-=  405;
	configs[15]-=   54;
	configs[23]-=  486;
	configs[33]-=  162;
	bb.mover.u4s[1]^=0x3000;
	bb.empty.u4s[1]^=0x2000;
}

void FlipFunctionBBBlack1269() {
	configs[ 5]+=  405;
	configs[15]+=   54;
	configs[23]+=  486;
	configs[33]+=  162;
	bb.mover.u4s[1]^=0x3000;
	bb.empty.u4s[1]^=0x2000;
}

void FlipFunctionBBWhite1270() {
	configs[ 5]-= 1863;
	configs[15]-=   54;
	configs[17]-=    6;
	configs[23]-=  486;
	configs[25]-=  486;
	configs[31]-=  486;
	configs[33]-=  162;
	bb.mover.u4s[1]^=0x7000;
	bb.empty.u4s[1]^=0x2000;
}

void FlipFunctionBBBlack1270() {
	configs[ 5]+= 1863;
	configs[15]+=   54;
	configs[17]+=    6;
	configs[23]+=  486;
	configs[25]+=  486;
	configs[31]+=  486;
	configs[33]+=  162;
	bb.mover.u4s[1]^=0x7000;
	bb.empty.u4s[1]^=0x2000;
}

void FlipFunctionBBWhite1271() {
	configs[ 5]-=  459;
	configs[14]-=  162;
	configs[15]-=   54;
	configs[22]-=  486;
	configs[23]-=  486;
	configs[33]-=  162;
	configs[34]-=   54;
	bb.mover.u4s[1]^=0x3800;
	bb.empty.u4s[1]^=0x2000;
}

void FlipFunctionBBBlack1271() {
	configs[ 5]+=  459;
	configs[14]+=  162;
	configs[15]+=   54;
	configs[22]+=  486;
	configs[23]+=  486;
	configs[33]+=  162;
	configs[34]+=   54;
	bb.mover.u4s[1]^=0x3800;
	bb.empty.u4s[1]^=0x2000;
}

void FlipFunctionBBWhite1272() {
	configs[ 5]-= 1917;
	configs[14]-=  162;
	configs[15]-=   54;
	configs[17]-=    6;
	configs[22]-=  486;
	configs[23]-=  486;
	configs[25]-=  486;
	configs[31]-=  486;
	configs[33]-=  162;
	configs[34]-=   54;
	bb.mover.u4s[1]^=0x7800;
	bb.empty.u4s[1]^=0x2000;
}

void FlipFunctionBBBlack1272() {
	configs[ 5]+= 1917;
	configs[14]+=  162;
	configs[15]+=   54;
	configs[17]+=    6;
	configs[22]+=  486;
	configs[23]+=  486;
	configs[25]+=  486;
	configs[31]+=  486;
	configs[33]+=  162;
	configs[34]+=   54;
	bb.mover.u4s[1]^=0x7800;
	bb.empty.u4s[1]^=0x2000;
}

void FlipFunctionBBWhite1273() {
	configs[ 5]-=  477;
	configs[13]-=  486;
	configs[14]-=  162;
	configs[15]-=   54;
	configs[21]-=  486;
	configs[22]-=  486;
	configs[23]-=  486;
	configs[33]-=  162;
	configs[34]-=   54;
	configs[35]-=   18;
	bb.mover.u4s[1]^=0x3C00;
	bb.empty.u4s[1]^=0x2000;
}

void FlipFunctionBBBlack1273() {
	configs[ 5]+=  477;
	configs[13]+=  486;
	configs[14]+=  162;
	configs[15]+=   54;
	configs[21]+=  486;
	configs[22]+=  486;
	configs[23]+=  486;
	configs[33]+=  162;
	configs[34]+=   54;
	configs[35]+=   18;
	bb.mover.u4s[1]^=0x3C00;
	bb.empty.u4s[1]^=0x2000;
}

void FlipFunctionBBWhite1274() {
	configs[ 5]-= 1935;
	configs[13]-=  486;
	configs[14]-=  162;
	configs[15]-=   54;
	configs[17]-=    6;
	configs[21]-=  486;
	configs[22]-=  486;
	configs[23]-=  486;
	configs[25]-=  486;
	configs[31]-=  486;
	configs[33]-=  162;
	configs[34]-=   54;
	configs[35]-=   18;
	bb.mover.u4s[1]^=0x7C00;
	bb.empty.u4s[1]^=0x2000;
}

void FlipFunctionBBBlack1274() {
	configs[ 5]+= 1935;
	configs[13]+=  486;
	configs[14]+=  162;
	configs[15]+=   54;
	configs[17]+=    6;
	configs[21]+=  486;
	configs[22]+=  486;
	configs[23]+=  486;
	configs[25]+=  486;
	configs[31]+=  486;
	configs[33]+=  162;
	configs[34]+=   54;
	configs[35]+=   18;
	bb.mover.u4s[1]^=0x7C00;
	bb.empty.u4s[1]^=0x2000;
}

void FlipFunctionBBWhite1275() {
	configs[ 5]-=  483;
	configs[12]-=  486;
	configs[13]-=  486;
	configs[14]-=  162;
	configs[15]-=   54;
	configs[20]-=  486;
	configs[21]-=  486;
	configs[22]-=  486;
	configs[23]-=  486;
	configs[33]-=  162;
	configs[34]-=   54;
	configs[35]-=   18;
	configs[36]-=    6;
	bb.mover.u4s[1]^=0x3E00;
	bb.empty.u4s[1]^=0x2000;
}

void FlipFunctionBBBlack1275() {
	configs[ 5]+=  483;
	configs[12]+=  486;
	configs[13]+=  486;
	configs[14]+=  162;
	configs[15]+=   54;
	configs[20]+=  486;
	configs[21]+=  486;
	configs[22]+=  486;
	configs[23]+=  486;
	configs[33]+=  162;
	configs[34]+=   54;
	configs[35]+=   18;
	configs[36]+=    6;
	bb.mover.u4s[1]^=0x3E00;
	bb.empty.u4s[1]^=0x2000;
}

void FlipFunctionBBWhite1276() {
	configs[ 5]-= 1941;
	configs[12]-=  486;
	configs[13]-=  486;
	configs[14]-=  162;
	configs[15]-=   54;
	configs[17]-=    6;
	configs[20]-=  486;
	configs[21]-=  486;
	configs[22]-=  486;
	configs[23]-=  486;
	configs[25]-=  486;
	configs[31]-=  486;
	configs[33]-=  162;
	configs[34]-=   54;
	configs[35]-=   18;
	configs[36]-=    6;
	bb.mover.u4s[1]^=0x7E00;
	bb.empty.u4s[1]^=0x2000;
}

void FlipFunctionBBBlack1276() {
	configs[ 5]+= 1941;
	configs[12]+=  486;
	configs[13]+=  486;
	configs[14]+=  162;
	configs[15]+=   54;
	configs[17]+=    6;
	configs[20]+=  486;
	configs[21]+=  486;
	configs[22]+=  486;
	configs[23]+=  486;
	configs[25]+=  486;
	configs[31]+=  486;
	configs[33]+=  162;
	configs[34]+=   54;
	configs[35]+=   18;
	configs[36]+=    6;
	bb.mover.u4s[1]^=0x7E00;
	bb.empty.u4s[1]^=0x2000;
}

void FlipFunctionBBWhite1277() {
	configs[16]-=    9;
}

void FlipFunctionBBBlack1277() {
	configs[16]+=    9;
}

void FlipFunctionBBWhite1278() {
	configs[ 6]-=  162;
	configs[16]-=   63;
	configs[23]-= 1458;
	configs[34]-=  162;
	bb.mover.u4s[1]^=0x100000;
}

void FlipFunctionBBBlack1278() {
	configs[ 6]+=  162;
	configs[16]+=   63;
	configs[23]+= 1458;
	configs[34]+=  162;
	bb.mover.u4s[1]^=0x100000;
}

void FlipFunctionBBWhite1279() {
	configs[ 4]-= 1458;
	configs[16]-=   15;
	configs[25]-=  162;
	configs[30]-=  162;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBBlack1279() {
	configs[ 4]+= 1458;
	configs[16]+=   15;
	configs[25]+=  162;
	configs[30]+=  162;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBWhite1280() {
	configs[ 4]-= 1458;
	configs[ 6]-=  162;
	configs[16]-=   69;
	configs[23]-= 1458;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[34]-=  162;
	bb.mover.u4s[1]^=0x100040;
}

void FlipFunctionBBBlack1280() {
	configs[ 4]+= 1458;
	configs[ 6]+=  162;
	configs[16]+=   69;
	configs[23]+= 1458;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[34]+=  162;
	bb.mover.u4s[1]^=0x100040;
}

void FlipFunctionBBWhite1281() {
	configs[24]-=  243;
}

void FlipFunctionBBBlack1281() {
	configs[24]+=  243;
}

void FlipFunctionBBWhite1282() {
	configs[ 6]-=  486;
	configs[17]-=   18;
	configs[24]-= 1701;
	configs[33]-=  486;
	bb.mover.u4s[1]^=0x200000;
}

void FlipFunctionBBBlack1282() {
	configs[ 6]+=  486;
	configs[17]+=   18;
	configs[24]+= 1701;
	configs[33]+=  486;
	bb.mover.u4s[1]^=0x200000;
}

void FlipFunctionBBWhite1283() {
	configs[ 4]-=  486;
	configs[15]-=   18;
	configs[24]-=  405;
	configs[31]-=  162;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBBlack1283() {
	configs[ 4]+=  486;
	configs[15]+=   18;
	configs[24]+=  405;
	configs[31]+=  162;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBWhite1284() {
	configs[ 4]-=  486;
	configs[ 6]-=  486;
	configs[15]-=   18;
	configs[17]-=   18;
	configs[24]-= 1863;
	configs[31]-=  162;
	configs[33]-=  486;
	bb.mover.u4s[1]^=0x200020;
}

void FlipFunctionBBBlack1284() {
	configs[ 4]+=  486;
	configs[ 6]+=  486;
	configs[15]+=   18;
	configs[17]+=   18;
	configs[24]+= 1863;
	configs[31]+=  162;
	configs[33]+=  486;
	bb.mover.u4s[1]^=0x200020;
}

void FlipFunctionBBWhite1285() {
	configs[ 3]-=  486;
	configs[ 4]-=  486;
	configs[14]-=   18;
	configs[15]-=   18;
	configs[24]-=  459;
	configs[30]-=   54;
	configs[31]-=  162;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBBlack1285() {
	configs[ 3]+=  486;
	configs[ 4]+=  486;
	configs[14]+=   18;
	configs[15]+=   18;
	configs[24]+=  459;
	configs[30]+=   54;
	configs[31]+=  162;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBWhite1286() {
	configs[ 3]-=  486;
	configs[ 4]-=  486;
	configs[ 6]-=  486;
	configs[14]-=   18;
	configs[15]-=   18;
	configs[17]-=   18;
	configs[24]-= 1917;
	configs[30]-=   54;
	configs[31]-=  162;
	configs[33]-=  486;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x200020;
}

void FlipFunctionBBBlack1286() {
	configs[ 3]+=  486;
	configs[ 4]+=  486;
	configs[ 6]+=  486;
	configs[14]+=   18;
	configs[15]+=   18;
	configs[17]+=   18;
	configs[24]+= 1917;
	configs[30]+=   54;
	configs[31]+=  162;
	configs[33]+=  486;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x200020;
}

void FlipFunctionBBWhite1287() {
	configs[ 2]-=  486;
	configs[ 3]-=  486;
	configs[ 4]-=  486;
	configs[13]-=   18;
	configs[14]-=   18;
	configs[15]-=   18;
	configs[24]-=  477;
	configs[29]-=   18;
	configs[30]-=   54;
	configs[31]-=  162;
	bb.mover.u4s[0]^=0x20200000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBBlack1287() {
	configs[ 2]+=  486;
	configs[ 3]+=  486;
	configs[ 4]+=  486;
	configs[13]+=   18;
	configs[14]+=   18;
	configs[15]+=   18;
	configs[24]+=  477;
	configs[29]+=   18;
	configs[30]+=   54;
	configs[31]+=  162;
	bb.mover.u4s[0]^=0x20200000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBWhite1288() {
	configs[ 2]-=  486;
	configs[ 3]-=  486;
	configs[ 4]-=  486;
	configs[ 6]-=  486;
	configs[13]-=   18;
	configs[14]-=   18;
	configs[15]-=   18;
	configs[17]-=   18;
	configs[24]-= 1935;
	configs[29]-=   18;
	configs[30]-=   54;
	configs[31]-=  162;
	configs[33]-=  486;
	bb.mover.u4s[0]^=0x20200000;
	bb.mover.u4s[1]^=0x200020;
}

void FlipFunctionBBBlack1288() {
	configs[ 2]+=  486;
	configs[ 3]+=  486;
	configs[ 4]+=  486;
	configs[ 6]+=  486;
	configs[13]+=   18;
	configs[14]+=   18;
	configs[15]+=   18;
	configs[17]+=   18;
	configs[24]+= 1935;
	configs[29]+=   18;
	configs[30]+=   54;
	configs[31]+=  162;
	configs[33]+=  486;
	bb.mover.u4s[0]^=0x20200000;
	bb.mover.u4s[1]^=0x200020;
}

void FlipFunctionBBWhite1289() {
	configs[ 1]-=  486;
	configs[ 2]-=  486;
	configs[ 3]-=  486;
	configs[ 4]-=  486;
	configs[12]-=    6;
	configs[13]-=   18;
	configs[14]-=   18;
	configs[15]-=   18;
	configs[24]-=  483;
	configs[28]-=    6;
	configs[29]-=   18;
	configs[30]-=   54;
	configs[31]-=  162;
	bb.mover.u4s[0]^=0x20202000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBBlack1289() {
	configs[ 1]+=  486;
	configs[ 2]+=  486;
	configs[ 3]+=  486;
	configs[ 4]+=  486;
	configs[12]+=    6;
	configs[13]+=   18;
	configs[14]+=   18;
	configs[15]+=   18;
	configs[24]+=  483;
	configs[28]+=    6;
	configs[29]+=   18;
	configs[30]+=   54;
	configs[31]+=  162;
	bb.mover.u4s[0]^=0x20202000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBWhite1290() {
	configs[ 1]-=  486;
	configs[ 2]-=  486;
	configs[ 3]-=  486;
	configs[ 4]-=  486;
	configs[ 6]-=  486;
	configs[12]-=    6;
	configs[13]-=   18;
	configs[14]-=   18;
	configs[15]-=   18;
	configs[17]-=   18;
	configs[24]-= 1941;
	configs[28]-=    6;
	configs[29]-=   18;
	configs[30]-=   54;
	configs[31]-=  162;
	configs[33]-=  486;
	bb.mover.u4s[0]^=0x20202000;
	bb.mover.u4s[1]^=0x200020;
}

void FlipFunctionBBBlack1290() {
	configs[ 1]+=  486;
	configs[ 2]+=  486;
	configs[ 3]+=  486;
	configs[ 4]+=  486;
	configs[ 6]+=  486;
	configs[12]+=    6;
	configs[13]+=   18;
	configs[14]+=   18;
	configs[15]+=   18;
	configs[17]+=   18;
	configs[24]+= 1941;
	configs[28]+=    6;
	configs[29]+=   18;
	configs[30]+=   54;
	configs[31]+=  162;
	configs[33]+=  486;
	bb.mover.u4s[0]^=0x20202000;
	bb.mover.u4s[1]^=0x200020;
}

void FlipFunctionBBWhite1291() {
	configs[32]-=  243;
}

void FlipFunctionBBBlack1291() {
	configs[32]+=  243;
}

void FlipFunctionBBWhite1292() {
	configs[ 6]-= 1458;
	configs[18]-=    6;
	configs[25]-= 1458;
	configs[32]-= 1701;
	bb.mover.u4s[1]^=0x400000;
}

void FlipFunctionBBBlack1292() {
	configs[ 6]+= 1458;
	configs[18]+=    6;
	configs[25]+= 1458;
	configs[32]+= 1701;
	bb.mover.u4s[1]^=0x400000;
}

void FlipFunctionBBWhite1293() {
	configs[ 4]-=  162;
	configs[14]-=   54;
	configs[23]-=  162;
	configs[32]-=  405;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBBlack1293() {
	configs[ 4]+=  162;
	configs[14]+=   54;
	configs[23]+=  162;
	configs[32]+=  405;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBWhite1294() {
	configs[ 4]-=  162;
	configs[ 6]-= 1458;
	configs[14]-=   54;
	configs[18]-=    6;
	configs[23]-=  162;
	configs[25]-= 1458;
	configs[32]-= 1863;
	bb.mover.u4s[1]^=0x400010;
}

void FlipFunctionBBBlack1294() {
	configs[ 4]+=  162;
	configs[ 6]+= 1458;
	configs[14]+=   54;
	configs[18]+=    6;
	configs[23]+=  162;
	configs[25]+= 1458;
	configs[32]+= 1863;
	bb.mover.u4s[1]^=0x400010;
}

void FlipFunctionBBWhite1295() {
	configs[ 3]-=   54;
	configs[ 4]-=  162;
	configs[12]-=   54;
	configs[14]-=   54;
	configs[22]-=   54;
	configs[23]-=  162;
	configs[32]-=  459;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBBlack1295() {
	configs[ 3]+=   54;
	configs[ 4]+=  162;
	configs[12]+=   54;
	configs[14]+=   54;
	configs[22]+=   54;
	configs[23]+=  162;
	configs[32]+=  459;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBWhite1296() {
	configs[ 3]-=   54;
	configs[ 4]-=  162;
	configs[ 6]-= 1458;
	configs[12]-=   54;
	configs[14]-=   54;
	configs[18]-=    6;
	configs[22]-=   54;
	configs[23]-=  162;
	configs[25]-= 1458;
	configs[32]-= 1917;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x400010;
}

void FlipFunctionBBBlack1296() {
	configs[ 3]+=   54;
	configs[ 4]+=  162;
	configs[ 6]+= 1458;
	configs[12]+=   54;
	configs[14]+=   54;
	configs[18]+=    6;
	configs[22]+=   54;
	configs[23]+=  162;
	configs[25]+= 1458;
	configs[32]+= 1917;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x400010;
}

void FlipFunctionBBWhite1297() {
	configs[ 2]-=   18;
	configs[ 3]-=   54;
	configs[ 4]-=  162;
	configs[10]-=   18;
	configs[12]-=   54;
	configs[14]-=   54;
	configs[21]-=   18;
	configs[22]-=   54;
	configs[23]-=  162;
	configs[32]-=  477;
	bb.mover.u4s[0]^=0x8040000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBBlack1297() {
	configs[ 2]+=   18;
	configs[ 3]+=   54;
	configs[ 4]+=  162;
	configs[10]+=   18;
	configs[12]+=   54;
	configs[14]+=   54;
	configs[21]+=   18;
	configs[22]+=   54;
	configs[23]+=  162;
	configs[32]+=  477;
	bb.mover.u4s[0]^=0x8040000;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBWhite1298() {
	configs[ 2]-=   18;
	configs[ 3]-=   54;
	configs[ 4]-=  162;
	configs[ 6]-= 1458;
	configs[10]-=   18;
	configs[12]-=   54;
	configs[14]-=   54;
	configs[18]-=    6;
	configs[21]-=   18;
	configs[22]-=   54;
	configs[23]-=  162;
	configs[25]-= 1458;
	configs[32]-= 1935;
	bb.mover.u4s[0]^=0x8040000;
	bb.mover.u4s[1]^=0x400010;
}

void FlipFunctionBBBlack1298() {
	configs[ 2]+=   18;
	configs[ 3]+=   54;
	configs[ 4]+=  162;
	configs[ 6]+= 1458;
	configs[10]+=   18;
	configs[12]+=   54;
	configs[14]+=   54;
	configs[18]+=    6;
	configs[21]+=   18;
	configs[22]+=   54;
	configs[23]+=  162;
	configs[25]+= 1458;
	configs[32]+= 1935;
	bb.mover.u4s[0]^=0x8040000;
	bb.mover.u4s[1]^=0x400010;
}

void FlipFunctionBBWhite1299() {
	configs[ 1]-=    6;
	configs[ 2]-=   18;
	configs[ 3]-=   54;
	configs[ 4]-=  162;
	configs[ 8]-=    6;
	configs[10]-=   18;
	configs[12]-=   54;
	configs[14]-=   54;
	configs[20]-=    6;
	configs[21]-=   18;
	configs[22]-=   54;
	configs[23]-=  162;
	configs[32]-=  483;
	bb.mover.u4s[0]^=0x8040200;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBBlack1299() {
	configs[ 1]+=    6;
	configs[ 2]+=   18;
	configs[ 3]+=   54;
	configs[ 4]+=  162;
	configs[ 8]+=    6;
	configs[10]+=   18;
	configs[12]+=   54;
	configs[14]+=   54;
	configs[20]+=    6;
	configs[21]+=   18;
	configs[22]+=   54;
	configs[23]+=  162;
	configs[32]+=  483;
	bb.mover.u4s[0]^=0x8040200;
	bb.mover.u4s[1]^=0x10;
}

void FlipFunctionBBWhite1300() {
	configs[ 1]-=    6;
	configs[ 2]-=   18;
	configs[ 3]-=   54;
	configs[ 4]-=  162;
	configs[ 6]-= 1458;
	configs[ 8]-=    6;
	configs[10]-=   18;
	configs[12]-=   54;
	configs[14]-=   54;
	configs[18]-=    6;
	configs[20]-=    6;
	configs[21]-=   18;
	configs[22]-=   54;
	configs[23]-=  162;
	configs[25]-= 1458;
	configs[32]-= 1941;
	bb.mover.u4s[0]^=0x8040200;
	bb.mover.u4s[1]^=0x400010;
}

void FlipFunctionBBBlack1300() {
	configs[ 1]+=    6;
	configs[ 2]+=   18;
	configs[ 3]+=   54;
	configs[ 4]+=  162;
	configs[ 6]+= 1458;
	configs[ 8]+=    6;
	configs[10]+=   18;
	configs[12]+=   54;
	configs[14]+=   54;
	configs[18]+=    6;
	configs[20]+=    6;
	configs[21]+=   18;
	configs[22]+=   54;
	configs[23]+=  162;
	configs[25]+= 1458;
	configs[32]+= 1941;
	bb.mover.u4s[0]^=0x8040200;
	bb.mover.u4s[1]^=0x400010;
}

void FlipFunctionBBWhite1301() {
	configs[ 5]-=  729;
	bb.mover.u4s[1]^=0x4000;
	bb.empty.u4s[1]^=0x4000;
}

void FlipFunctionBBBlack1301() {
	configs[ 5]+=  729;
	bb.mover.u4s[1]^=0x4000;
	bb.empty.u4s[1]^=0x4000;
}

void FlipFunctionBBWhite1302() {
	configs[ 5]-= 1215;
	configs[16]-=   18;
	configs[24]-=  486;
	configs[32]-=  486;
	bb.mover.u4s[1]^=0x6000;
	bb.empty.u4s[1]^=0x4000;
}

void FlipFunctionBBBlack1302() {
	configs[ 5]+= 1215;
	configs[16]+=   18;
	configs[24]+=  486;
	configs[32]+=  486;
	bb.mover.u4s[1]^=0x6000;
	bb.empty.u4s[1]^=0x4000;
}

void FlipFunctionBBWhite1303() {
	configs[ 5]-= 1377;
	configs[15]-=   54;
	configs[16]-=   18;
	configs[23]-=  486;
	configs[24]-=  486;
	configs[32]-=  486;
	configs[33]-=  162;
	bb.mover.u4s[1]^=0x7000;
	bb.empty.u4s[1]^=0x4000;
}

void FlipFunctionBBBlack1303() {
	configs[ 5]+= 1377;
	configs[15]+=   54;
	configs[16]+=   18;
	configs[23]+=  486;
	configs[24]+=  486;
	configs[32]+=  486;
	configs[33]+=  162;
	bb.mover.u4s[1]^=0x7000;
	bb.empty.u4s[1]^=0x4000;
}

void FlipFunctionBBWhite1304() {
	configs[ 5]-= 1431;
	configs[14]-=  162;
	configs[15]-=   54;
	configs[16]-=   18;
	configs[22]-=  486;
	configs[23]-=  486;
	configs[24]-=  486;
	configs[32]-=  486;
	configs[33]-=  162;
	configs[34]-=   54;
	bb.mover.u4s[1]^=0x7800;
	bb.empty.u4s[1]^=0x4000;
}

void FlipFunctionBBBlack1304() {
	configs[ 5]+= 1431;
	configs[14]+=  162;
	configs[15]+=   54;
	configs[16]+=   18;
	configs[22]+=  486;
	configs[23]+=  486;
	configs[24]+=  486;
	configs[32]+=  486;
	configs[33]+=  162;
	configs[34]+=   54;
	bb.mover.u4s[1]^=0x7800;
	bb.empty.u4s[1]^=0x4000;
}

void FlipFunctionBBWhite1305() {
	configs[ 5]-= 1449;
	configs[13]-=  486;
	configs[14]-=  162;
	configs[15]-=   54;
	configs[16]-=   18;
	configs[21]-=  486;
	configs[22]-=  486;
	configs[23]-=  486;
	configs[24]-=  486;
	configs[32]-=  486;
	configs[33]-=  162;
	configs[34]-=   54;
	configs[35]-=   18;
	bb.mover.u4s[1]^=0x7C00;
	bb.empty.u4s[1]^=0x4000;
}

void FlipFunctionBBBlack1305() {
	configs[ 5]+= 1449;
	configs[13]+=  486;
	configs[14]+=  162;
	configs[15]+=   54;
	configs[16]+=   18;
	configs[21]+=  486;
	configs[22]+=  486;
	configs[23]+=  486;
	configs[24]+=  486;
	configs[32]+=  486;
	configs[33]+=  162;
	configs[34]+=   54;
	configs[35]+=   18;
	bb.mover.u4s[1]^=0x7C00;
	bb.empty.u4s[1]^=0x4000;
}

void FlipFunctionBBWhite1306() {
	configs[ 5]-= 1455;
	configs[12]-=  486;
	configs[13]-=  486;
	configs[14]-=  162;
	configs[15]-=   54;
	configs[16]-=   18;
	configs[20]-=  486;
	configs[21]-=  486;
	configs[22]-=  486;
	configs[23]-=  486;
	configs[24]-=  486;
	configs[32]-=  486;
	configs[33]-=  162;
	configs[34]-=   54;
	configs[35]-=   18;
	configs[36]-=    6;
	bb.mover.u4s[1]^=0x7E00;
	bb.empty.u4s[1]^=0x4000;
}

void FlipFunctionBBBlack1306() {
	configs[ 5]+= 1455;
	configs[12]+=  486;
	configs[13]+=  486;
	configs[14]+=  162;
	configs[15]+=   54;
	configs[16]+=   18;
	configs[20]+=  486;
	configs[21]+=  486;
	configs[22]+=  486;
	configs[23]+=  486;
	configs[24]+=  486;
	configs[32]+=  486;
	configs[33]+=  162;
	configs[34]+=   54;
	configs[35]+=   18;
	configs[36]+=    6;
	bb.mover.u4s[1]^=0x7E00;
	bb.empty.u4s[1]^=0x4000;
}

void FlipFunctionBBWhite1307() {
	configs[17]-=    3;
}

void FlipFunctionBBBlack1307() {
	configs[17]+=    3;
}

void FlipFunctionBBWhite1308() {
	configs[ 6]-=  486;
	configs[17]-=   21;
	configs[24]-= 1458;
	configs[33]-=  486;
	bb.mover.u4s[1]^=0x200000;
}

void FlipFunctionBBBlack1308() {
	configs[ 6]+=  486;
	configs[17]+=   21;
	configs[24]+= 1458;
	configs[33]+=  486;
	bb.mover.u4s[1]^=0x200000;
}

void FlipFunctionBBWhite1309() {
	configs[25]-=  243;
}

void FlipFunctionBBBlack1309() {
	configs[25]+=  243;
}

void FlipFunctionBBWhite1310() {
	configs[ 6]-= 1458;
	configs[18]-=    6;
	configs[25]-= 1701;
	configs[32]-= 1458;
	bb.mover.u4s[1]^=0x400000;
}

void FlipFunctionBBBlack1310() {
	configs[ 6]+= 1458;
	configs[18]+=    6;
	configs[25]+= 1701;
	configs[32]+= 1458;
	bb.mover.u4s[1]^=0x400000;
}

void FlipFunctionBBWhite1311() {
	configs[ 4]-= 1458;
	configs[16]-=    6;
	configs[25]-=  405;
	configs[30]-=  162;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBBlack1311() {
	configs[ 4]+= 1458;
	configs[16]+=    6;
	configs[25]+=  405;
	configs[30]+=  162;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBWhite1312() {
	configs[ 4]-= 1458;
	configs[ 6]-= 1458;
	configs[16]-=    6;
	configs[18]-=    6;
	configs[25]-= 1863;
	configs[30]-=  162;
	configs[32]-= 1458;
	bb.mover.u4s[1]^=0x400040;
}

void FlipFunctionBBBlack1312() {
	configs[ 4]+= 1458;
	configs[ 6]+= 1458;
	configs[16]+=    6;
	configs[18]+=    6;
	configs[25]+= 1863;
	configs[30]+=  162;
	configs[32]+= 1458;
	bb.mover.u4s[1]^=0x400040;
}

void FlipFunctionBBWhite1313() {
	configs[ 3]-= 1458;
	configs[ 4]-= 1458;
	configs[15]-=    6;
	configs[16]-=    6;
	configs[25]-=  459;
	configs[29]-=   54;
	configs[30]-=  162;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBBlack1313() {
	configs[ 3]+= 1458;
	configs[ 4]+= 1458;
	configs[15]+=    6;
	configs[16]+=    6;
	configs[25]+=  459;
	configs[29]+=   54;
	configs[30]+=  162;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBWhite1314() {
	configs[ 3]-= 1458;
	configs[ 4]-= 1458;
	configs[ 6]-= 1458;
	configs[15]-=    6;
	configs[16]-=    6;
	configs[18]-=    6;
	configs[25]-= 1917;
	configs[29]-=   54;
	configs[30]-=  162;
	configs[32]-= 1458;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x400040;
}

void FlipFunctionBBBlack1314() {
	configs[ 3]+= 1458;
	configs[ 4]+= 1458;
	configs[ 6]+= 1458;
	configs[15]+=    6;
	configs[16]+=    6;
	configs[18]+=    6;
	configs[25]+= 1917;
	configs[29]+=   54;
	configs[30]+=  162;
	configs[32]+= 1458;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x400040;
}

void FlipFunctionBBWhite1315() {
	configs[ 2]-= 1458;
	configs[ 3]-= 1458;
	configs[ 4]-= 1458;
	configs[14]-=    6;
	configs[15]-=    6;
	configs[16]-=    6;
	configs[25]-=  477;
	configs[28]-=   18;
	configs[29]-=   54;
	configs[30]-=  162;
	bb.mover.u4s[0]^=0x40400000;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBBlack1315() {
	configs[ 2]+= 1458;
	configs[ 3]+= 1458;
	configs[ 4]+= 1458;
	configs[14]+=    6;
	configs[15]+=    6;
	configs[16]+=    6;
	configs[25]+=  477;
	configs[28]+=   18;
	configs[29]+=   54;
	configs[30]+=  162;
	bb.mover.u4s[0]^=0x40400000;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBWhite1316() {
	configs[ 2]-= 1458;
	configs[ 3]-= 1458;
	configs[ 4]-= 1458;
	configs[ 6]-= 1458;
	configs[14]-=    6;
	configs[15]-=    6;
	configs[16]-=    6;
	configs[18]-=    6;
	configs[25]-= 1935;
	configs[28]-=   18;
	configs[29]-=   54;
	configs[30]-=  162;
	configs[32]-= 1458;
	bb.mover.u4s[0]^=0x40400000;
	bb.mover.u4s[1]^=0x400040;
}

void FlipFunctionBBBlack1316() {
	configs[ 2]+= 1458;
	configs[ 3]+= 1458;
	configs[ 4]+= 1458;
	configs[ 6]+= 1458;
	configs[14]+=    6;
	configs[15]+=    6;
	configs[16]+=    6;
	configs[18]+=    6;
	configs[25]+= 1935;
	configs[28]+=   18;
	configs[29]+=   54;
	configs[30]+=  162;
	configs[32]+= 1458;
	bb.mover.u4s[0]^=0x40400000;
	bb.mover.u4s[1]^=0x400040;
}

void FlipFunctionBBWhite1317() {
	configs[ 1]-= 1458;
	configs[ 2]-= 1458;
	configs[ 3]-= 1458;
	configs[ 4]-= 1458;
	configs[13]-=    6;
	configs[14]-=    6;
	configs[15]-=    6;
	configs[16]-=    6;
	configs[25]-=  483;
	configs[27]-=    6;
	configs[28]-=   18;
	configs[29]-=   54;
	configs[30]-=  162;
	bb.mover.u4s[0]^=0x40404000;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBBlack1317() {
	configs[ 1]+= 1458;
	configs[ 2]+= 1458;
	configs[ 3]+= 1458;
	configs[ 4]+= 1458;
	configs[13]+=    6;
	configs[14]+=    6;
	configs[15]+=    6;
	configs[16]+=    6;
	configs[25]+=  483;
	configs[27]+=    6;
	configs[28]+=   18;
	configs[29]+=   54;
	configs[30]+=  162;
	bb.mover.u4s[0]^=0x40404000;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBWhite1318() {
	configs[ 1]-= 1458;
	configs[ 2]-= 1458;
	configs[ 3]-= 1458;
	configs[ 4]-= 1458;
	configs[ 6]-= 1458;
	configs[13]-=    6;
	configs[14]-=    6;
	configs[15]-=    6;
	configs[16]-=    6;
	configs[18]-=    6;
	configs[25]-= 1941;
	configs[27]-=    6;
	configs[28]-=   18;
	configs[29]-=   54;
	configs[30]-=  162;
	configs[32]-= 1458;
	bb.mover.u4s[0]^=0x40404000;
	bb.mover.u4s[1]^=0x400040;
}

void FlipFunctionBBBlack1318() {
	configs[ 1]+= 1458;
	configs[ 2]+= 1458;
	configs[ 3]+= 1458;
	configs[ 4]+= 1458;
	configs[ 6]+= 1458;
	configs[13]+=    6;
	configs[14]+=    6;
	configs[15]+=    6;
	configs[16]+=    6;
	configs[18]+=    6;
	configs[25]+= 1941;
	configs[27]+=    6;
	configs[28]+=   18;
	configs[29]+=   54;
	configs[30]+=  162;
	configs[32]+= 1458;
	bb.mover.u4s[0]^=0x40404000;
	bb.mover.u4s[1]^=0x400040;
}

void FlipFunctionBBWhite1319() {
	configs[31]-=  243;
}

void FlipFunctionBBBlack1319() {
	configs[31]+=  243;
}

void FlipFunctionBBWhite1320() {
	configs[ 4]-=  486;
	configs[15]-=   18;
	configs[24]-=  162;
	configs[31]-=  405;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBBlack1320() {
	configs[ 4]+=  486;
	configs[15]+=   18;
	configs[24]+=  162;
	configs[31]+=  405;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBWhite1321() {
	configs[ 3]-=  162;
	configs[ 4]-=  486;
	configs[13]-=   54;
	configs[15]-=   18;
	configs[23]-=   54;
	configs[24]-=  162;
	configs[31]-=  459;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBBlack1321() {
	configs[ 3]+=  162;
	configs[ 4]+=  486;
	configs[13]+=   54;
	configs[15]+=   18;
	configs[23]+=   54;
	configs[24]+=  162;
	configs[31]+=  459;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBWhite1322() {
	configs[ 2]-=   54;
	configs[ 3]-=  162;
	configs[ 4]-=  486;
	configs[11]-=   18;
	configs[13]-=   54;
	configs[15]-=   18;
	configs[22]-=   18;
	configs[23]-=   54;
	configs[24]-=  162;
	configs[31]-=  477;
	bb.mover.u4s[0]^=0x10080000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBBlack1322() {
	configs[ 2]+=   54;
	configs[ 3]+=  162;
	configs[ 4]+=  486;
	configs[11]+=   18;
	configs[13]+=   54;
	configs[15]+=   18;
	configs[22]+=   18;
	configs[23]+=   54;
	configs[24]+=  162;
	configs[31]+=  477;
	bb.mover.u4s[0]^=0x10080000;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBWhite1323() {
	configs[ 1]-=   18;
	configs[ 2]-=   54;
	configs[ 3]-=  162;
	configs[ 4]-=  486;
	configs[ 9]-=    6;
	configs[11]-=   18;
	configs[13]-=   54;
	configs[15]-=   18;
	configs[21]-=    6;
	configs[22]-=   18;
	configs[23]-=   54;
	configs[24]-=  162;
	configs[31]-=  483;
	bb.mover.u4s[0]^=0x10080400;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBBlack1323() {
	configs[ 1]+=   18;
	configs[ 2]+=   54;
	configs[ 3]+=  162;
	configs[ 4]+=  486;
	configs[ 9]+=    6;
	configs[11]+=   18;
	configs[13]+=   54;
	configs[15]+=   18;
	configs[21]+=    6;
	configs[22]+=   18;
	configs[23]+=   54;
	configs[24]+=  162;
	configs[31]+=  483;
	bb.mover.u4s[0]^=0x10080400;
	bb.mover.u4s[1]^=0x20;
}

void FlipFunctionBBWhite1324() {
	configs[ 5]-= 2187;
	bb.mover.u4s[1]^=0x8000;
	bb.empty.u4s[1]^=0x8000;
}

void FlipFunctionBBBlack1324() {
	configs[ 5]+= 2187;
	bb.mover.u4s[1]^=0x8000;
	bb.empty.u4s[1]^=0x8000;
}

void FlipFunctionBBWhite1325() {
	configs[ 5]-= 3645;
	configs[17]-=    6;
	configs[25]-=  486;
	configs[31]-=  486;
	bb.mover.u4s[1]^=0xC000;
	bb.empty.u4s[1]^=0x8000;
}

void FlipFunctionBBBlack1325() {
	configs[ 5]+= 3645;
	configs[17]+=    6;
	configs[25]+=  486;
	configs[31]+=  486;
	bb.mover.u4s[1]^=0xC000;
	bb.empty.u4s[1]^=0x8000;
}

void FlipFunctionBBWhite1326() {
	configs[ 5]-= 4131;
	configs[16]-=   18;
	configs[17]-=    6;
	configs[24]-=  486;
	configs[25]-=  486;
	configs[31]-=  486;
	configs[32]-=  486;
	bb.mover.u4s[1]^=0xE000;
	bb.empty.u4s[1]^=0x8000;
}

void FlipFunctionBBBlack1326() {
	configs[ 5]+= 4131;
	configs[16]+=   18;
	configs[17]+=    6;
	configs[24]+=  486;
	configs[25]+=  486;
	configs[31]+=  486;
	configs[32]+=  486;
	bb.mover.u4s[1]^=0xE000;
	bb.empty.u4s[1]^=0x8000;
}

void FlipFunctionBBWhite1327() {
	configs[ 5]-= 4293;
	configs[15]-=   54;
	configs[16]-=   18;
	configs[17]-=    6;
	configs[23]-=  486;
	configs[24]-=  486;
	configs[25]-=  486;
	configs[31]-=  486;
	configs[32]-=  486;
	configs[33]-=  162;
	bb.mover.u4s[1]^=0xF000;
	bb.empty.u4s[1]^=0x8000;
}

void FlipFunctionBBBlack1327() {
	configs[ 5]+= 4293;
	configs[15]+=   54;
	configs[16]+=   18;
	configs[17]+=    6;
	configs[23]+=  486;
	configs[24]+=  486;
	configs[25]+=  486;
	configs[31]+=  486;
	configs[32]+=  486;
	configs[33]+=  162;
	bb.mover.u4s[1]^=0xF000;
	bb.empty.u4s[1]^=0x8000;
}

void FlipFunctionBBWhite1328() {
	configs[ 5]-= 4347;
	configs[14]-=  162;
	configs[15]-=   54;
	configs[16]-=   18;
	configs[17]-=    6;
	configs[22]-=  486;
	configs[23]-=  486;
	configs[24]-=  486;
	configs[25]-=  486;
	configs[31]-=  486;
	configs[32]-=  486;
	configs[33]-=  162;
	configs[34]-=   54;
	bb.mover.u4s[1]^=0xF800;
	bb.empty.u4s[1]^=0x8000;
}

void FlipFunctionBBBlack1328() {
	configs[ 5]+= 4347;
	configs[14]+=  162;
	configs[15]+=   54;
	configs[16]+=   18;
	configs[17]+=    6;
	configs[22]+=  486;
	configs[23]+=  486;
	configs[24]+=  486;
	configs[25]+=  486;
	configs[31]+=  486;
	configs[32]+=  486;
	configs[33]+=  162;
	configs[34]+=   54;
	bb.mover.u4s[1]^=0xF800;
	bb.empty.u4s[1]^=0x8000;
}

void FlipFunctionBBWhite1329() {
	configs[ 5]-= 4365;
	configs[13]-=  486;
	configs[14]-=  162;
	configs[15]-=   54;
	configs[16]-=   18;
	configs[17]-=    6;
	configs[21]-=  486;
	configs[22]-=  486;
	configs[23]-=  486;
	configs[24]-=  486;
	configs[25]-=  486;
	configs[31]-=  486;
	configs[32]-=  486;
	configs[33]-=  162;
	configs[34]-=   54;
	configs[35]-=   18;
	bb.mover.u4s[1]^=0xFC00;
	bb.empty.u4s[1]^=0x8000;
}

void FlipFunctionBBBlack1329() {
	configs[ 5]+= 4365;
	configs[13]+=  486;
	configs[14]+=  162;
	configs[15]+=   54;
	configs[16]+=   18;
	configs[17]+=    6;
	configs[21]+=  486;
	configs[22]+=  486;
	configs[23]+=  486;
	configs[24]+=  486;
	configs[25]+=  486;
	configs[31]+=  486;
	configs[32]+=  486;
	configs[33]+=  162;
	configs[34]+=   54;
	configs[35]+=   18;
	bb.mover.u4s[1]^=0xFC00;
	bb.empty.u4s[1]^=0x8000;
}

void FlipFunctionBBWhite1330() {
	configs[ 5]-= 4371;
	configs[12]-=  486;
	configs[13]-=  486;
	configs[14]-=  162;
	configs[15]-=   54;
	configs[16]-=   18;
	configs[17]-=    6;
	configs[20]-=  486;
	configs[21]-=  486;
	configs[22]-=  486;
	configs[23]-=  486;
	configs[24]-=  486;
	configs[25]-=  486;
	configs[31]-=  486;
	configs[32]-=  486;
	configs[33]-=  162;
	configs[34]-=   54;
	configs[35]-=   18;
	configs[36]-=    6;
	bb.mover.u4s[1]^=0xFE00;
	bb.empty.u4s[1]^=0x8000;
}

void FlipFunctionBBBlack1330() {
	configs[ 5]+= 4371;
	configs[12]+=  486;
	configs[13]+=  486;
	configs[14]+=  162;
	configs[15]+=   54;
	configs[16]+=   18;
	configs[17]+=    6;
	configs[20]+=  486;
	configs[21]+=  486;
	configs[22]+=  486;
	configs[23]+=  486;
	configs[24]+=  486;
	configs[25]+=  486;
	configs[31]+=  486;
	configs[32]+=  486;
	configs[33]+=  162;
	configs[34]+=   54;
	configs[35]+=   18;
	configs[36]+=    6;
	bb.mover.u4s[1]^=0xFE00;
	bb.empty.u4s[1]^=0x8000;
}

void FlipFunctionBBWhite1331() {
	configs[18]-=    1;
}

void FlipFunctionBBBlack1331() {
	configs[18]+=    1;
}

void FlipFunctionBBWhite1332() {
	configs[ 6]-= 1458;
	configs[18]-=    7;
	configs[25]-= 1458;
	configs[32]-= 1458;
	bb.mover.u4s[1]^=0x400000;
}

void FlipFunctionBBBlack1332() {
	configs[ 6]+= 1458;
	configs[18]+=    7;
	configs[25]+= 1458;
	configs[32]+= 1458;
	bb.mover.u4s[1]^=0x400000;
}

void FlipFunctionBBWhite1333() {
	configs[26]-=  243;
}

void FlipFunctionBBBlack1333() {
	configs[26]+=  243;
}

void FlipFunctionBBWhite1334() {
	configs[ 6]-= 4374;
	configs[26]-= 1701;
	configs[31]-= 1458;
	bb.mover.u4s[1]^=0x800000;
}

void FlipFunctionBBBlack1334() {
	configs[ 6]+= 4374;
	configs[26]+= 1701;
	configs[31]+= 1458;
	bb.mover.u4s[1]^=0x800000;
}

void FlipFunctionBBWhite1335() {
	configs[ 4]-= 4374;
	configs[17]-=    2;
	configs[26]-=  405;
	configs[29]-=  162;
	bb.mover.u4s[1]^=0x80;
}

void FlipFunctionBBBlack1335() {
	configs[ 4]+= 4374;
	configs[17]+=    2;
	configs[26]+=  405;
	configs[29]+=  162;
	bb.mover.u4s[1]^=0x80;
}

void FlipFunctionBBWhite1336() {
	configs[ 4]-= 4374;
	configs[ 6]-= 4374;
	configs[17]-=    2;
	configs[26]-= 1863;
	configs[29]-=  162;
	configs[31]-= 1458;
	bb.mover.u4s[1]^=0x800080;
}

void FlipFunctionBBBlack1336() {
	configs[ 4]+= 4374;
	configs[ 6]+= 4374;
	configs[17]+=    2;
	configs[26]+= 1863;
	configs[29]+=  162;
	configs[31]+= 1458;
	bb.mover.u4s[1]^=0x800080;
}

void FlipFunctionBBWhite1337() {
	configs[ 3]-= 4374;
	configs[ 4]-= 4374;
	configs[16]-=    2;
	configs[17]-=    2;
	configs[26]-=  459;
	configs[28]-=   54;
	configs[29]-=  162;
	bb.mover.u4s[0]^=0x80000000;
	bb.mover.u4s[1]^=0x80;
}

void FlipFunctionBBBlack1337() {
	configs[ 3]+= 4374;
	configs[ 4]+= 4374;
	configs[16]+=    2;
	configs[17]+=    2;
	configs[26]+=  459;
	configs[28]+=   54;
	configs[29]+=  162;
	bb.mover.u4s[0]^=0x80000000;
	bb.mover.u4s[1]^=0x80;
}

void FlipFunctionBBWhite1338() {
	configs[ 3]-= 4374;
	configs[ 4]-= 4374;
	configs[ 6]-= 4374;
	configs[16]-=    2;
	configs[17]-=    2;
	configs[26]-= 1917;
	configs[28]-=   54;
	configs[29]-=  162;
	configs[31]-= 1458;
	bb.mover.u4s[0]^=0x80000000;
	bb.mover.u4s[1]^=0x800080;
}

void FlipFunctionBBBlack1338() {
	configs[ 3]+= 4374;
	configs[ 4]+= 4374;
	configs[ 6]+= 4374;
	configs[16]+=    2;
	configs[17]+=    2;
	configs[26]+= 1917;
	configs[28]+=   54;
	configs[29]+=  162;
	configs[31]+= 1458;
	bb.mover.u4s[0]^=0x80000000;
	bb.mover.u4s[1]^=0x800080;
}

void FlipFunctionBBWhite1339() {
	configs[ 2]-= 4374;
	configs[ 3]-= 4374;
	configs[ 4]-= 4374;
	configs[15]-=    2;
	configs[16]-=    2;
	configs[17]-=    2;
	configs[26]-=  477;
	configs[27]-=   18;
	configs[28]-=   54;
	configs[29]-=  162;
	bb.mover.u4s[0]^=0x80800000;
	bb.mover.u4s[1]^=0x80;
}

void FlipFunctionBBBlack1339() {
	configs[ 2]+= 4374;
	configs[ 3]+= 4374;
	configs[ 4]+= 4374;
	configs[15]+=    2;
	configs[16]+=    2;
	configs[17]+=    2;
	configs[26]+=  477;
	configs[27]+=   18;
	configs[28]+=   54;
	configs[29]+=  162;
	bb.mover.u4s[0]^=0x80800000;
	bb.mover.u4s[1]^=0x80;
}

void FlipFunctionBBWhite1340() {
	configs[ 2]-= 4374;
	configs[ 3]-= 4374;
	configs[ 4]-= 4374;
	configs[ 6]-= 4374;
	configs[15]-=    2;
	configs[16]-=    2;
	configs[17]-=    2;
	configs[26]-= 1935;
	configs[27]-=   18;
	configs[28]-=   54;
	configs[29]-=  162;
	configs[31]-= 1458;
	bb.mover.u4s[0]^=0x80800000;
	bb.mover.u4s[1]^=0x800080;
}

void FlipFunctionBBBlack1340() {
	configs[ 2]+= 4374;
	configs[ 3]+= 4374;
	configs[ 4]+= 4374;
	configs[ 6]+= 4374;
	configs[15]+=    2;
	configs[16]+=    2;
	configs[17]+=    2;
	configs[26]+= 1935;
	configs[27]+=   18;
	configs[28]+=   54;
	configs[29]+=  162;
	configs[31]+= 1458;
	bb.mover.u4s[0]^=0x80800000;
	bb.mover.u4s[1]^=0x800080;
}

void FlipFunctionBBWhite1341() {
	configs[ 1]-= 4374;
	configs[ 2]-= 4374;
	configs[ 3]-= 4374;
	configs[ 4]-= 4374;
	configs[14]-=    2;
	configs[15]-=    2;
	configs[16]-=    2;
	configs[17]-=    2;
	configs[26]-=  483;
	configs[27]-=   18;
	configs[28]-=   54;
	configs[29]-=  162;
	bb.mover.u4s[0]^=0x80808000;
	bb.mover.u4s[1]^=0x80;
}

void FlipFunctionBBBlack1341() {
	configs[ 1]+= 4374;
	configs[ 2]+= 4374;
	configs[ 3]+= 4374;
	configs[ 4]+= 4374;
	configs[14]+=    2;
	configs[15]+=    2;
	configs[16]+=    2;
	configs[17]+=    2;
	configs[26]+=  483;
	configs[27]+=   18;
	configs[28]+=   54;
	configs[29]+=  162;
	bb.mover.u4s[0]^=0x80808000;
	bb.mover.u4s[1]^=0x80;
}

void FlipFunctionBBWhite1342() {
	configs[ 1]-= 4374;
	configs[ 2]-= 4374;
	configs[ 3]-= 4374;
	configs[ 4]-= 4374;
	configs[ 6]-= 4374;
	configs[14]-=    2;
	configs[15]-=    2;
	configs[16]-=    2;
	configs[17]-=    2;
	configs[26]-= 1941;
	configs[27]-=   18;
	configs[28]-=   54;
	configs[29]-=  162;
	configs[31]-= 1458;
	bb.mover.u4s[0]^=0x80808000;
	bb.mover.u4s[1]^=0x800080;
}

void FlipFunctionBBBlack1342() {
	configs[ 1]+= 4374;
	configs[ 2]+= 4374;
	configs[ 3]+= 4374;
	configs[ 4]+= 4374;
	configs[ 6]+= 4374;
	configs[14]+=    2;
	configs[15]+=    2;
	configs[16]+=    2;
	configs[17]+=    2;
	configs[26]+= 1941;
	configs[27]+=   18;
	configs[28]+=   54;
	configs[29]+=  162;
	configs[31]+= 1458;
	bb.mover.u4s[0]^=0x80808000;
	bb.mover.u4s[1]^=0x800080;
}

void FlipFunctionBBWhite1343() {
	configs[30]-=  243;
}

void FlipFunctionBBBlack1343() {
	configs[30]+=  243;
}

void FlipFunctionBBWhite1344() {
	configs[ 4]-= 1458;
	configs[16]-=    6;
	configs[25]-=  162;
	configs[30]-=  405;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBBlack1344() {
	configs[ 4]+= 1458;
	configs[16]+=    6;
	configs[25]+=  162;
	configs[30]+=  405;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBWhite1345() {
	configs[ 3]-=  486;
	configs[ 4]-= 1458;
	configs[14]-=   18;
	configs[16]-=    6;
	configs[24]-=   54;
	configs[25]-=  162;
	configs[30]-=  459;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBBlack1345() {
	configs[ 3]+=  486;
	configs[ 4]+= 1458;
	configs[14]+=   18;
	configs[16]+=    6;
	configs[24]+=   54;
	configs[25]+=  162;
	configs[30]+=  459;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBWhite1346() {
	configs[ 2]-=  162;
	configs[ 3]-=  486;
	configs[ 4]-= 1458;
	configs[12]-=   18;
	configs[14]-=   18;
	configs[16]-=    6;
	configs[23]-=   18;
	configs[24]-=   54;
	configs[25]-=  162;
	configs[30]-=  477;
	bb.mover.u4s[0]^=0x20100000;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBBlack1346() {
	configs[ 2]+=  162;
	configs[ 3]+=  486;
	configs[ 4]+= 1458;
	configs[12]+=   18;
	configs[14]+=   18;
	configs[16]+=    6;
	configs[23]+=   18;
	configs[24]+=   54;
	configs[25]+=  162;
	configs[30]+=  477;
	bb.mover.u4s[0]^=0x20100000;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBWhite1347() {
	configs[ 1]-=   54;
	configs[ 2]-=  162;
	configs[ 3]-=  486;
	configs[ 4]-= 1458;
	configs[10]-=    6;
	configs[12]-=   18;
	configs[14]-=   18;
	configs[16]-=    6;
	configs[22]-=    6;
	configs[23]-=   18;
	configs[24]-=   54;
	configs[25]-=  162;
	configs[30]-=  483;
	bb.mover.u4s[0]^=0x20100800;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBBlack1347() {
	configs[ 1]+=   54;
	configs[ 2]+=  162;
	configs[ 3]+=  486;
	configs[ 4]+= 1458;
	configs[10]+=    6;
	configs[12]+=   18;
	configs[14]+=   18;
	configs[16]+=    6;
	configs[22]+=    6;
	configs[23]+=   18;
	configs[24]+=   54;
	configs[25]+=  162;
	configs[30]+=  483;
	bb.mover.u4s[0]^=0x20100800;
	bb.mover.u4s[1]^=0x40;
}

void FlipFunctionBBWhite1348() {
	configs[ 6]-=    1;
	bb.mover.u4s[1]^=0x10000;
	bb.empty.u4s[1]^=0x10000;
}

void FlipFunctionBBBlack1348() {
	configs[ 6]+=    1;
	bb.mover.u4s[1]^=0x10000;
	bb.empty.u4s[1]^=0x10000;
}

void FlipFunctionBBWhite1349() {
	configs[ 6]-=    7;
	configs[13]-= 1458;
	configs[20]-= 1458;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x30000;
	bb.empty.u4s[1]^=0x10000;
}

void FlipFunctionBBBlack1349() {
	configs[ 6]+=    7;
	configs[13]+= 1458;
	configs[20]+= 1458;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x30000;
	bb.empty.u4s[1]^=0x10000;
}

void FlipFunctionBBWhite1350() {
	configs[ 6]-=   25;
	configs[13]-= 1458;
	configs[14]-=  486;
	configs[20]-= 1458;
	configs[21]-= 1458;
	configs[36]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x70000;
	bb.empty.u4s[1]^=0x10000;
}

void FlipFunctionBBBlack1350() {
	configs[ 6]+=   25;
	configs[13]+= 1458;
	configs[14]+=  486;
	configs[20]+= 1458;
	configs[21]+= 1458;
	configs[36]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x70000;
	bb.empty.u4s[1]^=0x10000;
}

void FlipFunctionBBWhite1351() {
	configs[ 6]-=   79;
	configs[13]-= 1458;
	configs[14]-=  486;
	configs[15]-=  162;
	configs[20]-= 1458;
	configs[21]-= 1458;
	configs[22]-= 1458;
	configs[35]-=   54;
	configs[36]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0xF0000;
	bb.empty.u4s[1]^=0x10000;
}

void FlipFunctionBBBlack1351() {
	configs[ 6]+=   79;
	configs[13]+= 1458;
	configs[14]+=  486;
	configs[15]+=  162;
	configs[20]+= 1458;
	configs[21]+= 1458;
	configs[22]+= 1458;
	configs[35]+=   54;
	configs[36]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0xF0000;
	bb.empty.u4s[1]^=0x10000;
}

void FlipFunctionBBWhite1352() {
	configs[ 6]-=  241;
	configs[13]-= 1458;
	configs[14]-=  486;
	configs[15]-=  162;
	configs[16]-=   54;
	configs[20]-= 1458;
	configs[21]-= 1458;
	configs[22]-= 1458;
	configs[23]-= 1458;
	configs[34]-=  162;
	configs[35]-=   54;
	configs[36]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x1F0000;
	bb.empty.u4s[1]^=0x10000;
}

void FlipFunctionBBBlack1352() {
	configs[ 6]+=  241;
	configs[13]+= 1458;
	configs[14]+=  486;
	configs[15]+=  162;
	configs[16]+=   54;
	configs[20]+= 1458;
	configs[21]+= 1458;
	configs[22]+= 1458;
	configs[23]+= 1458;
	configs[34]+=  162;
	configs[35]+=   54;
	configs[36]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x1F0000;
	bb.empty.u4s[1]^=0x10000;
}

void FlipFunctionBBWhite1353() {
	configs[ 6]-=  727;
	configs[13]-= 1458;
	configs[14]-=  486;
	configs[15]-=  162;
	configs[16]-=   54;
	configs[17]-=   18;
	configs[20]-= 1458;
	configs[21]-= 1458;
	configs[22]-= 1458;
	configs[23]-= 1458;
	configs[24]-= 1458;
	configs[33]-=  486;
	configs[34]-=  162;
	configs[35]-=   54;
	configs[36]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x3F0000;
	bb.empty.u4s[1]^=0x10000;
}

void FlipFunctionBBBlack1353() {
	configs[ 6]+=  727;
	configs[13]+= 1458;
	configs[14]+=  486;
	configs[15]+=  162;
	configs[16]+=   54;
	configs[17]+=   18;
	configs[20]+= 1458;
	configs[21]+= 1458;
	configs[22]+= 1458;
	configs[23]+= 1458;
	configs[24]+= 1458;
	configs[33]+=  486;
	configs[34]+=  162;
	configs[35]+=   54;
	configs[36]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x3F0000;
	bb.empty.u4s[1]^=0x10000;
}

void FlipFunctionBBWhite1354() {
	configs[ 6]-= 2185;
	configs[13]-= 1458;
	configs[14]-=  486;
	configs[15]-=  162;
	configs[16]-=   54;
	configs[17]-=   18;
	configs[18]-=    6;
	configs[20]-= 1458;
	configs[21]-= 1458;
	configs[22]-= 1458;
	configs[23]-= 1458;
	configs[24]-= 1458;
	configs[25]-= 1458;
	configs[32]-= 1458;
	configs[33]-=  486;
	configs[34]-=  162;
	configs[35]-=   54;
	configs[36]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x7F0000;
	bb.empty.u4s[1]^=0x10000;
}

void FlipFunctionBBBlack1354() {
	configs[ 6]+= 2185;
	configs[13]+= 1458;
	configs[14]+=  486;
	configs[15]+=  162;
	configs[16]+=   54;
	configs[17]+=   18;
	configs[18]+=    6;
	configs[20]+= 1458;
	configs[21]+= 1458;
	configs[22]+= 1458;
	configs[23]+= 1458;
	configs[24]+= 1458;
	configs[25]+= 1458;
	configs[32]+= 1458;
	configs[33]+=  486;
	configs[34]+=  162;
	configs[35]+=   54;
	configs[36]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x7F0000;
	bb.empty.u4s[1]^=0x10000;
}

void FlipFunctionBBWhite1355() {
	configs[12]-=  729;
}

void FlipFunctionBBBlack1355() {
	configs[12]+=  729;
}

void FlipFunctionBBWhite1356() {
	configs[ 5]-=    6;
	configs[12]-= 1215;
	configs[20]-=  486;
	configs[36]-=    6;
	bb.mover.u4s[1]^=0x200;
}

void FlipFunctionBBBlack1356() {
	configs[ 5]+=    6;
	configs[12]+= 1215;
	configs[20]+=  486;
	configs[36]+=    6;
	bb.mover.u4s[1]^=0x200;
}

void FlipFunctionBBWhite1357() {
	configs[ 4]-=   18;
	configs[ 5]-=    6;
	configs[12]-= 1377;
	configs[20]-=  486;
	configs[21]-=  162;
	configs[34]-=   18;
	configs[36]-=    6;
	bb.mover.u4s[1]^=0x204;
}

void FlipFunctionBBBlack1357() {
	configs[ 4]+=   18;
	configs[ 5]+=    6;
	configs[12]+= 1377;
	configs[20]+=  486;
	configs[21]+=  162;
	configs[34]+=   18;
	configs[36]+=    6;
	bb.mover.u4s[1]^=0x204;
}

void FlipFunctionBBWhite1358() {
	configs[ 3]-=   54;
	configs[ 4]-=   18;
	configs[ 5]-=    6;
	configs[12]-= 1431;
	configs[20]-=  486;
	configs[21]-=  162;
	configs[22]-=   54;
	configs[32]-=   54;
	configs[34]-=   18;
	configs[36]-=    6;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x204;
}

void FlipFunctionBBBlack1358() {
	configs[ 3]+=   54;
	configs[ 4]+=   18;
	configs[ 5]+=    6;
	configs[12]+= 1431;
	configs[20]+=  486;
	configs[21]+=  162;
	configs[22]+=   54;
	configs[32]+=   54;
	configs[34]+=   18;
	configs[36]+=    6;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x204;
}

void FlipFunctionBBWhite1359() {
	configs[ 2]-=  162;
	configs[ 3]-=   54;
	configs[ 4]-=   18;
	configs[ 5]-=    6;
	configs[12]-= 1449;
	configs[20]-=  486;
	configs[21]-=  162;
	configs[22]-=   54;
	configs[23]-=   18;
	configs[30]-=   18;
	configs[32]-=   54;
	configs[34]-=   18;
	configs[36]-=    6;
	bb.mover.u4s[0]^=0x8100000;
	bb.mover.u4s[1]^=0x204;
}

void FlipFunctionBBBlack1359() {
	configs[ 2]+=  162;
	configs[ 3]+=   54;
	configs[ 4]+=   18;
	configs[ 5]+=    6;
	configs[12]+= 1449;
	configs[20]+=  486;
	configs[21]+=  162;
	configs[22]+=   54;
	configs[23]+=   18;
	configs[30]+=   18;
	configs[32]+=   54;
	configs[34]+=   18;
	configs[36]+=    6;
	bb.mover.u4s[0]^=0x8100000;
	bb.mover.u4s[1]^=0x204;
}

void FlipFunctionBBWhite1360() {
	configs[ 1]-=  486;
	configs[ 2]-=  162;
	configs[ 3]-=   54;
	configs[ 4]-=   18;
	configs[ 5]-=    6;
	configs[12]-= 1455;
	configs[20]-=  486;
	configs[21]-=  162;
	configs[22]-=   54;
	configs[23]-=   18;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[30]-=   18;
	configs[32]-=   54;
	configs[34]-=   18;
	configs[36]-=    6;
	bb.mover.u4s[0]^=0x8102000;
	bb.mover.u4s[1]^=0x204;
}

void FlipFunctionBBBlack1360() {
	configs[ 1]+=  486;
	configs[ 2]+=  162;
	configs[ 3]+=   54;
	configs[ 4]+=   18;
	configs[ 5]+=    6;
	configs[12]+= 1455;
	configs[20]+=  486;
	configs[21]+=  162;
	configs[22]+=   54;
	configs[23]+=   18;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[30]+=   18;
	configs[32]+=   54;
	configs[34]+=   18;
	configs[36]+=    6;
	bb.mover.u4s[0]^=0x8102000;
	bb.mover.u4s[1]^=0x204;
}

void FlipFunctionBBWhite1361() {
	configs[19]-=  729;
}

void FlipFunctionBBBlack1361() {
	configs[19]+=  729;
}

void FlipFunctionBBWhite1362() {
	configs[ 5]-=    2;
	configs[11]-=  486;
	configs[19]-= 1215;
	configs[37]-=    2;
	bb.mover.u4s[1]^=0x100;
}

void FlipFunctionBBBlack1362() {
	configs[ 5]+=    2;
	configs[11]+=  486;
	configs[19]+= 1215;
	configs[37]+=    2;
	bb.mover.u4s[1]^=0x100;
}

void FlipFunctionBBWhite1363() {
	configs[ 4]-=    2;
	configs[ 5]-=    2;
	configs[10]-=  162;
	configs[11]-=  486;
	configs[19]-= 1377;
	configs[36]-=    2;
	configs[37]-=    2;
	bb.mover.u4s[1]^=0x101;
}

void FlipFunctionBBBlack1363() {
	configs[ 4]+=    2;
	configs[ 5]+=    2;
	configs[10]+=  162;
	configs[11]+=  486;
	configs[19]+= 1377;
	configs[36]+=    2;
	configs[37]+=    2;
	bb.mover.u4s[1]^=0x101;
}

void FlipFunctionBBWhite1364() {
	configs[ 3]-=    2;
	configs[ 4]-=    2;
	configs[ 5]-=    2;
	configs[ 9]-=   54;
	configs[10]-=  162;
	configs[11]-=  486;
	configs[19]-= 1431;
	configs[35]-=    2;
	configs[36]-=    2;
	configs[37]-=    2;
	bb.mover.u4s[0]^=0x1000000;
	bb.mover.u4s[1]^=0x101;
}

void FlipFunctionBBBlack1364() {
	configs[ 3]+=    2;
	configs[ 4]+=    2;
	configs[ 5]+=    2;
	configs[ 9]+=   54;
	configs[10]+=  162;
	configs[11]+=  486;
	configs[19]+= 1431;
	configs[35]+=    2;
	configs[36]+=    2;
	configs[37]+=    2;
	bb.mover.u4s[0]^=0x1000000;
	bb.mover.u4s[1]^=0x101;
}

void FlipFunctionBBWhite1365() {
	configs[ 2]-=    2;
	configs[ 3]-=    2;
	configs[ 4]-=    2;
	configs[ 5]-=    2;
	configs[ 8]-=   18;
	configs[ 9]-=   54;
	configs[10]-=  162;
	configs[11]-=  486;
	configs[19]-= 1449;
	configs[34]-=    2;
	configs[35]-=    2;
	configs[36]-=    2;
	configs[37]-=    2;
	bb.mover.u4s[0]^=0x1010000;
	bb.mover.u4s[1]^=0x101;
}

void FlipFunctionBBBlack1365() {
	configs[ 2]+=    2;
	configs[ 3]+=    2;
	configs[ 4]+=    2;
	configs[ 5]+=    2;
	configs[ 8]+=   18;
	configs[ 9]+=   54;
	configs[10]+=  162;
	configs[11]+=  486;
	configs[19]+= 1449;
	configs[34]+=    2;
	configs[35]+=    2;
	configs[36]+=    2;
	configs[37]+=    2;
	bb.mover.u4s[0]^=0x1010000;
	bb.mover.u4s[1]^=0x101;
}

void FlipFunctionBBWhite1366() {
	configs[ 1]-=    2;
	configs[ 2]-=    2;
	configs[ 3]-=    2;
	configs[ 4]-=    2;
	configs[ 5]-=    2;
	configs[ 8]-=   18;
	configs[ 9]-=   54;
	configs[10]-=  162;
	configs[11]-=  486;
	configs[19]-= 1455;
	configs[33]-=    2;
	configs[34]-=    2;
	configs[35]-=    2;
	configs[36]-=    2;
	configs[37]-=    2;
	bb.mover.u4s[0]^=0x1010100;
	bb.mover.u4s[1]^=0x101;
}

void FlipFunctionBBBlack1366() {
	configs[ 1]+=    2;
	configs[ 2]+=    2;
	configs[ 3]+=    2;
	configs[ 4]+=    2;
	configs[ 5]+=    2;
	configs[ 8]+=   18;
	configs[ 9]+=   54;
	configs[10]+=  162;
	configs[11]+=  486;
	configs[19]+= 1455;
	configs[33]+=    2;
	configs[34]+=    2;
	configs[35]+=    2;
	configs[36]+=    2;
	configs[37]+=    2;
	bb.mover.u4s[0]^=0x1010100;
	bb.mover.u4s[1]^=0x101;
}

void FlipFunctionBBWhite1367() {
	configs[ 6]-=    3;
	bb.mover.u4s[1]^=0x20000;
	bb.empty.u4s[1]^=0x20000;
}

void FlipFunctionBBBlack1367() {
	configs[ 6]+=    3;
	bb.mover.u4s[1]^=0x20000;
	bb.empty.u4s[1]^=0x20000;
}

void FlipFunctionBBWhite1368() {
	configs[ 6]-=   21;
	configs[14]-=  486;
	configs[21]-= 1458;
	configs[36]-=   18;
	bb.mover.u4s[1]^=0x60000;
	bb.empty.u4s[1]^=0x20000;
}

void FlipFunctionBBBlack1368() {
	configs[ 6]+=   21;
	configs[14]+=  486;
	configs[21]+= 1458;
	configs[36]+=   18;
	bb.mover.u4s[1]^=0x60000;
	bb.empty.u4s[1]^=0x20000;
}

void FlipFunctionBBWhite1369() {
	configs[ 6]-=   75;
	configs[14]-=  486;
	configs[15]-=  162;
	configs[21]-= 1458;
	configs[22]-= 1458;
	configs[35]-=   54;
	configs[36]-=   18;
	bb.mover.u4s[1]^=0xE0000;
	bb.empty.u4s[1]^=0x20000;
}

void FlipFunctionBBBlack1369() {
	configs[ 6]+=   75;
	configs[14]+=  486;
	configs[15]+=  162;
	configs[21]+= 1458;
	configs[22]+= 1458;
	configs[35]+=   54;
	configs[36]+=   18;
	bb.mover.u4s[1]^=0xE0000;
	bb.empty.u4s[1]^=0x20000;
}

void FlipFunctionBBWhite1370() {
	configs[ 6]-=  237;
	configs[14]-=  486;
	configs[15]-=  162;
	configs[16]-=   54;
	configs[21]-= 1458;
	configs[22]-= 1458;
	configs[23]-= 1458;
	configs[34]-=  162;
	configs[35]-=   54;
	configs[36]-=   18;
	bb.mover.u4s[1]^=0x1E0000;
	bb.empty.u4s[1]^=0x20000;
}

void FlipFunctionBBBlack1370() {
	configs[ 6]+=  237;
	configs[14]+=  486;
	configs[15]+=  162;
	configs[16]+=   54;
	configs[21]+= 1458;
	configs[22]+= 1458;
	configs[23]+= 1458;
	configs[34]+=  162;
	configs[35]+=   54;
	configs[36]+=   18;
	bb.mover.u4s[1]^=0x1E0000;
	bb.empty.u4s[1]^=0x20000;
}

void FlipFunctionBBWhite1371() {
	configs[ 6]-=  723;
	configs[14]-=  486;
	configs[15]-=  162;
	configs[16]-=   54;
	configs[17]-=   18;
	configs[21]-= 1458;
	configs[22]-= 1458;
	configs[23]-= 1458;
	configs[24]-= 1458;
	configs[33]-=  486;
	configs[34]-=  162;
	configs[35]-=   54;
	configs[36]-=   18;
	bb.mover.u4s[1]^=0x3E0000;
	bb.empty.u4s[1]^=0x20000;
}

void FlipFunctionBBBlack1371() {
	configs[ 6]+=  723;
	configs[14]+=  486;
	configs[15]+=  162;
	configs[16]+=   54;
	configs[17]+=   18;
	configs[21]+= 1458;
	configs[22]+= 1458;
	configs[23]+= 1458;
	configs[24]+= 1458;
	configs[33]+=  486;
	configs[34]+=  162;
	configs[35]+=   54;
	configs[36]+=   18;
	bb.mover.u4s[1]^=0x3E0000;
	bb.empty.u4s[1]^=0x20000;
}

void FlipFunctionBBWhite1372() {
	configs[ 6]-= 2181;
	configs[14]-=  486;
	configs[15]-=  162;
	configs[16]-=   54;
	configs[17]-=   18;
	configs[18]-=    6;
	configs[21]-= 1458;
	configs[22]-= 1458;
	configs[23]-= 1458;
	configs[24]-= 1458;
	configs[25]-= 1458;
	configs[32]-= 1458;
	configs[33]-=  486;
	configs[34]-=  162;
	configs[35]-=   54;
	configs[36]-=   18;
	bb.mover.u4s[1]^=0x7E0000;
	bb.empty.u4s[1]^=0x20000;
}

void FlipFunctionBBBlack1372() {
	configs[ 6]+= 2181;
	configs[14]+=  486;
	configs[15]+=  162;
	configs[16]+=   54;
	configs[17]+=   18;
	configs[18]+=    6;
	configs[21]+= 1458;
	configs[22]+= 1458;
	configs[23]+= 1458;
	configs[24]+= 1458;
	configs[25]+= 1458;
	configs[32]+= 1458;
	configs[33]+=  486;
	configs[34]+=  162;
	configs[35]+=   54;
	configs[36]+=   18;
	bb.mover.u4s[1]^=0x7E0000;
	bb.empty.u4s[1]^=0x20000;
}

void FlipFunctionBBWhite1373() {
	configs[13]-=  729;
}

void FlipFunctionBBBlack1373() {
	configs[13]+=  729;
}

void FlipFunctionBBWhite1374() {
	configs[ 5]-=   18;
	configs[13]-= 1215;
	configs[21]-=  486;
	configs[35]-=   18;
	bb.mover.u4s[1]^=0x400;
}

void FlipFunctionBBBlack1374() {
	configs[ 5]+=   18;
	configs[13]+= 1215;
	configs[21]+=  486;
	configs[35]+=   18;
	bb.mover.u4s[1]^=0x400;
}

void FlipFunctionBBWhite1375() {
	configs[ 4]-=   54;
	configs[ 5]-=   18;
	configs[13]-= 1377;
	configs[21]-=  486;
	configs[22]-=  162;
	configs[33]-=   54;
	configs[35]-=   18;
	bb.mover.u4s[1]^=0x408;
}

void FlipFunctionBBBlack1375() {
	configs[ 4]+=   54;
	configs[ 5]+=   18;
	configs[13]+= 1377;
	configs[21]+=  486;
	configs[22]+=  162;
	configs[33]+=   54;
	configs[35]+=   18;
	bb.mover.u4s[1]^=0x408;
}

void FlipFunctionBBWhite1376() {
	configs[ 3]-=  162;
	configs[ 4]-=   54;
	configs[ 5]-=   18;
	configs[13]-= 1431;
	configs[21]-=  486;
	configs[22]-=  162;
	configs[23]-=   54;
	configs[31]-=   54;
	configs[33]-=   54;
	configs[35]-=   18;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x408;
}

void FlipFunctionBBBlack1376() {
	configs[ 3]+=  162;
	configs[ 4]+=   54;
	configs[ 5]+=   18;
	configs[13]+= 1431;
	configs[21]+=  486;
	configs[22]+=  162;
	configs[23]+=   54;
	configs[31]+=   54;
	configs[33]+=   54;
	configs[35]+=   18;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x408;
}

void FlipFunctionBBWhite1377() {
	configs[ 2]-=  486;
	configs[ 3]-=  162;
	configs[ 4]-=   54;
	configs[ 5]-=   18;
	configs[13]-= 1449;
	configs[21]-=  486;
	configs[22]-=  162;
	configs[23]-=   54;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[31]-=   54;
	configs[33]-=   54;
	configs[35]-=   18;
	bb.mover.u4s[0]^=0x10200000;
	bb.mover.u4s[1]^=0x408;
}

void FlipFunctionBBBlack1377() {
	configs[ 2]+=  486;
	configs[ 3]+=  162;
	configs[ 4]+=   54;
	configs[ 5]+=   18;
	configs[13]+= 1449;
	configs[21]+=  486;
	configs[22]+=  162;
	configs[23]+=   54;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[31]+=   54;
	configs[33]+=   54;
	configs[35]+=   18;
	bb.mover.u4s[0]^=0x10200000;
	bb.mover.u4s[1]^=0x408;
}

void FlipFunctionBBWhite1378() {
	configs[ 1]-= 1458;
	configs[ 2]-=  486;
	configs[ 3]-=  162;
	configs[ 4]-=   54;
	configs[ 5]-=   18;
	configs[13]-= 1455;
	configs[21]-=  486;
	configs[22]-=  162;
	configs[23]-=   54;
	configs[24]-=   18;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[29]-=   18;
	configs[31]-=   54;
	configs[33]-=   54;
	configs[35]-=   18;
	bb.mover.u4s[0]^=0x10204000;
	bb.mover.u4s[1]^=0x408;
}

void FlipFunctionBBBlack1378() {
	configs[ 1]+= 1458;
	configs[ 2]+=  486;
	configs[ 3]+=  162;
	configs[ 4]+=   54;
	configs[ 5]+=   18;
	configs[13]+= 1455;
	configs[21]+=  486;
	configs[22]+=  162;
	configs[23]+=   54;
	configs[24]+=   18;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[29]+=   18;
	configs[31]+=   54;
	configs[33]+=   54;
	configs[35]+=   18;
	bb.mover.u4s[0]^=0x10204000;
	bb.mover.u4s[1]^=0x408;
}

void FlipFunctionBBWhite1379() {
	configs[20]-=  729;
}

void FlipFunctionBBBlack1379() {
	configs[20]+=  729;
}

void FlipFunctionBBWhite1380() {
	configs[ 5]-=    6;
	configs[12]-=  486;
	configs[20]-= 1215;
	configs[36]-=    6;
	bb.mover.u4s[1]^=0x200;
}

void FlipFunctionBBBlack1380() {
	configs[ 5]+=    6;
	configs[12]+=  486;
	configs[20]+= 1215;
	configs[36]+=    6;
	bb.mover.u4s[1]^=0x200;
}

void FlipFunctionBBWhite1381() {
	configs[ 4]-=    6;
	configs[ 5]-=    6;
	configs[11]-=  162;
	configs[12]-=  486;
	configs[20]-= 1377;
	configs[35]-=    6;
	configs[36]-=    6;
	bb.mover.u4s[1]^=0x202;
}

void FlipFunctionBBBlack1381() {
	configs[ 4]+=    6;
	configs[ 5]+=    6;
	configs[11]+=  162;
	configs[12]+=  486;
	configs[20]+= 1377;
	configs[35]+=    6;
	configs[36]+=    6;
	bb.mover.u4s[1]^=0x202;
}

void FlipFunctionBBWhite1382() {
	configs[ 3]-=    6;
	configs[ 4]-=    6;
	configs[ 5]-=    6;
	configs[10]-=   54;
	configs[11]-=  162;
	configs[12]-=  486;
	configs[20]-= 1431;
	configs[34]-=    6;
	configs[35]-=    6;
	configs[36]-=    6;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x202;
}

void FlipFunctionBBBlack1382() {
	configs[ 3]+=    6;
	configs[ 4]+=    6;
	configs[ 5]+=    6;
	configs[10]+=   54;
	configs[11]+=  162;
	configs[12]+=  486;
	configs[20]+= 1431;
	configs[34]+=    6;
	configs[35]+=    6;
	configs[36]+=    6;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x202;
}

void FlipFunctionBBWhite1383() {
	configs[ 2]-=    6;
	configs[ 3]-=    6;
	configs[ 4]-=    6;
	configs[ 5]-=    6;
	configs[ 9]-=   18;
	configs[10]-=   54;
	configs[11]-=  162;
	configs[12]-=  486;
	configs[20]-= 1449;
	configs[33]-=    6;
	configs[34]-=    6;
	configs[35]-=    6;
	configs[36]-=    6;
	bb.mover.u4s[0]^=0x2020000;
	bb.mover.u4s[1]^=0x202;
}

void FlipFunctionBBBlack1383() {
	configs[ 2]+=    6;
	configs[ 3]+=    6;
	configs[ 4]+=    6;
	configs[ 5]+=    6;
	configs[ 9]+=   18;
	configs[10]+=   54;
	configs[11]+=  162;
	configs[12]+=  486;
	configs[20]+= 1449;
	configs[33]+=    6;
	configs[34]+=    6;
	configs[35]+=    6;
	configs[36]+=    6;
	bb.mover.u4s[0]^=0x2020000;
	bb.mover.u4s[1]^=0x202;
}

void FlipFunctionBBWhite1384() {
	configs[ 1]-=    6;
	configs[ 2]-=    6;
	configs[ 3]-=    6;
	configs[ 4]-=    6;
	configs[ 5]-=    6;
	configs[ 8]-=    6;
	configs[ 9]-=   18;
	configs[10]-=   54;
	configs[11]-=  162;
	configs[12]-=  486;
	configs[20]-= 1455;
	configs[32]-=    6;
	configs[33]-=    6;
	configs[34]-=    6;
	configs[35]-=    6;
	configs[36]-=    6;
	bb.mover.u4s[0]^=0x2020200;
	bb.mover.u4s[1]^=0x202;
}

void FlipFunctionBBBlack1384() {
	configs[ 1]+=    6;
	configs[ 2]+=    6;
	configs[ 3]+=    6;
	configs[ 4]+=    6;
	configs[ 5]+=    6;
	configs[ 8]+=    6;
	configs[ 9]+=   18;
	configs[10]+=   54;
	configs[11]+=  162;
	configs[12]+=  486;
	configs[20]+= 1455;
	configs[32]+=    6;
	configs[33]+=    6;
	configs[34]+=    6;
	configs[35]+=    6;
	configs[36]+=    6;
	bb.mover.u4s[0]^=0x2020200;
	bb.mover.u4s[1]^=0x202;
}

void FlipFunctionBBWhite1385() {
	configs[37]-=    3;
}

void FlipFunctionBBBlack1385() {
	configs[37]+=    3;
}

void FlipFunctionBBWhite1386() {
	configs[ 6]-=    9;
	bb.mover.u4s[1]^=0x40000;
	bb.empty.u4s[1]^=0x40000;
}

void FlipFunctionBBBlack1386() {
	configs[ 6]+=    9;
	bb.mover.u4s[1]^=0x40000;
	bb.empty.u4s[1]^=0x40000;
}

void FlipFunctionBBWhite1387() {
	configs[ 6]-=   63;
	configs[15]-=  162;
	configs[22]-= 1458;
	configs[35]-=   54;
	bb.mover.u4s[1]^=0xC0000;
	bb.empty.u4s[1]^=0x40000;
}

void FlipFunctionBBBlack1387() {
	configs[ 6]+=   63;
	configs[15]+=  162;
	configs[22]+= 1458;
	configs[35]+=   54;
	bb.mover.u4s[1]^=0xC0000;
	bb.empty.u4s[1]^=0x40000;
}

void FlipFunctionBBWhite1388() {
	configs[ 6]-=  225;
	configs[15]-=  162;
	configs[16]-=   54;
	configs[22]-= 1458;
	configs[23]-= 1458;
	configs[34]-=  162;
	configs[35]-=   54;
	bb.mover.u4s[1]^=0x1C0000;
	bb.empty.u4s[1]^=0x40000;
}

void FlipFunctionBBBlack1388() {
	configs[ 6]+=  225;
	configs[15]+=  162;
	configs[16]+=   54;
	configs[22]+= 1458;
	configs[23]+= 1458;
	configs[34]+=  162;
	configs[35]+=   54;
	bb.mover.u4s[1]^=0x1C0000;
	bb.empty.u4s[1]^=0x40000;
}

void FlipFunctionBBWhite1389() {
	configs[ 6]-=  711;
	configs[15]-=  162;
	configs[16]-=   54;
	configs[17]-=   18;
	configs[22]-= 1458;
	configs[23]-= 1458;
	configs[24]-= 1458;
	configs[33]-=  486;
	configs[34]-=  162;
	configs[35]-=   54;
	bb.mover.u4s[1]^=0x3C0000;
	bb.empty.u4s[1]^=0x40000;
}

void FlipFunctionBBBlack1389() {
	configs[ 6]+=  711;
	configs[15]+=  162;
	configs[16]+=   54;
	configs[17]+=   18;
	configs[22]+= 1458;
	configs[23]+= 1458;
	configs[24]+= 1458;
	configs[33]+=  486;
	configs[34]+=  162;
	configs[35]+=   54;
	bb.mover.u4s[1]^=0x3C0000;
	bb.empty.u4s[1]^=0x40000;
}

void FlipFunctionBBWhite1390() {
	configs[ 6]-= 2169;
	configs[15]-=  162;
	configs[16]-=   54;
	configs[17]-=   18;
	configs[18]-=    6;
	configs[22]-= 1458;
	configs[23]-= 1458;
	configs[24]-= 1458;
	configs[25]-= 1458;
	configs[32]-= 1458;
	configs[33]-=  486;
	configs[34]-=  162;
	configs[35]-=   54;
	bb.mover.u4s[1]^=0x7C0000;
	bb.empty.u4s[1]^=0x40000;
}

void FlipFunctionBBBlack1390() {
	configs[ 6]+= 2169;
	configs[15]+=  162;
	configs[16]+=   54;
	configs[17]+=   18;
	configs[18]+=    6;
	configs[22]+= 1458;
	configs[23]+= 1458;
	configs[24]+= 1458;
	configs[25]+= 1458;
	configs[32]+= 1458;
	configs[33]+=  486;
	configs[34]+=  162;
	configs[35]+=   54;
	bb.mover.u4s[1]^=0x7C0000;
	bb.empty.u4s[1]^=0x40000;
}

void FlipFunctionBBWhite1391() {
	configs[ 6]-=   15;
	configs[13]-= 1458;
	configs[20]-= 1458;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x60000;
	bb.empty.u4s[1]^=0x40000;
}

void FlipFunctionBBBlack1391() {
	configs[ 6]+=   15;
	configs[13]+= 1458;
	configs[20]+= 1458;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x60000;
	bb.empty.u4s[1]^=0x40000;
}

void FlipFunctionBBWhite1392() {
	configs[ 6]-=   69;
	configs[13]-= 1458;
	configs[15]-=  162;
	configs[20]-= 1458;
	configs[22]-= 1458;
	configs[35]-=   54;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0xE0000;
	bb.empty.u4s[1]^=0x40000;
}

void FlipFunctionBBBlack1392() {
	configs[ 6]+=   69;
	configs[13]+= 1458;
	configs[15]+=  162;
	configs[20]+= 1458;
	configs[22]+= 1458;
	configs[35]+=   54;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0xE0000;
	bb.empty.u4s[1]^=0x40000;
}

void FlipFunctionBBWhite1393() {
	configs[ 6]-=  231;
	configs[13]-= 1458;
	configs[15]-=  162;
	configs[16]-=   54;
	configs[20]-= 1458;
	configs[22]-= 1458;
	configs[23]-= 1458;
	configs[34]-=  162;
	configs[35]-=   54;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x1E0000;
	bb.empty.u4s[1]^=0x40000;
}

void FlipFunctionBBBlack1393() {
	configs[ 6]+=  231;
	configs[13]+= 1458;
	configs[15]+=  162;
	configs[16]+=   54;
	configs[20]+= 1458;
	configs[22]+= 1458;
	configs[23]+= 1458;
	configs[34]+=  162;
	configs[35]+=   54;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x1E0000;
	bb.empty.u4s[1]^=0x40000;
}

void FlipFunctionBBWhite1394() {
	configs[ 6]-=  717;
	configs[13]-= 1458;
	configs[15]-=  162;
	configs[16]-=   54;
	configs[17]-=   18;
	configs[20]-= 1458;
	configs[22]-= 1458;
	configs[23]-= 1458;
	configs[24]-= 1458;
	configs[33]-=  486;
	configs[34]-=  162;
	configs[35]-=   54;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x3E0000;
	bb.empty.u4s[1]^=0x40000;
}

void FlipFunctionBBBlack1394() {
	configs[ 6]+=  717;
	configs[13]+= 1458;
	configs[15]+=  162;
	configs[16]+=   54;
	configs[17]+=   18;
	configs[20]+= 1458;
	configs[22]+= 1458;
	configs[23]+= 1458;
	configs[24]+= 1458;
	configs[33]+=  486;
	configs[34]+=  162;
	configs[35]+=   54;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x3E0000;
	bb.empty.u4s[1]^=0x40000;
}

void FlipFunctionBBWhite1395() {
	configs[ 6]-= 2175;
	configs[13]-= 1458;
	configs[15]-=  162;
	configs[16]-=   54;
	configs[17]-=   18;
	configs[18]-=    6;
	configs[20]-= 1458;
	configs[22]-= 1458;
	configs[23]-= 1458;
	configs[24]-= 1458;
	configs[25]-= 1458;
	configs[32]-= 1458;
	configs[33]-=  486;
	configs[34]-=  162;
	configs[35]-=   54;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x7E0000;
	bb.empty.u4s[1]^=0x40000;
}

void FlipFunctionBBBlack1395() {
	configs[ 6]+= 2175;
	configs[13]+= 1458;
	configs[15]+=  162;
	configs[16]+=   54;
	configs[17]+=   18;
	configs[18]+=    6;
	configs[20]+= 1458;
	configs[22]+= 1458;
	configs[23]+= 1458;
	configs[24]+= 1458;
	configs[25]+= 1458;
	configs[32]+= 1458;
	configs[33]+=  486;
	configs[34]+=  162;
	configs[35]+=   54;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x7E0000;
	bb.empty.u4s[1]^=0x40000;
}

void FlipFunctionBBWhite1396() {
	configs[14]-=  243;
}

void FlipFunctionBBBlack1396() {
	configs[14]+=  243;
}

void FlipFunctionBBWhite1397() {
	configs[ 5]-=   54;
	configs[14]-=  405;
	configs[22]-=  486;
	configs[34]-=   54;
	bb.mover.u4s[1]^=0x800;
}

void FlipFunctionBBBlack1397() {
	configs[ 5]+=   54;
	configs[14]+=  405;
	configs[22]+=  486;
	configs[34]+=   54;
	bb.mover.u4s[1]^=0x800;
}

void FlipFunctionBBWhite1398() {
	configs[ 4]-=  162;
	configs[ 5]-=   54;
	configs[14]-=  459;
	configs[22]-=  486;
	configs[23]-=  162;
	configs[32]-=  162;
	configs[34]-=   54;
	bb.mover.u4s[1]^=0x810;
}

void FlipFunctionBBBlack1398() {
	configs[ 4]+=  162;
	configs[ 5]+=   54;
	configs[14]+=  459;
	configs[22]+=  486;
	configs[23]+=  162;
	configs[32]+=  162;
	configs[34]+=   54;
	bb.mover.u4s[1]^=0x810;
}

void FlipFunctionBBWhite1399() {
	configs[ 3]-=  486;
	configs[ 4]-=  162;
	configs[ 5]-=   54;
	configs[14]-=  477;
	configs[22]-=  486;
	configs[23]-=  162;
	configs[24]-=   54;
	configs[30]-=   54;
	configs[32]-=  162;
	configs[34]-=   54;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x810;
}

void FlipFunctionBBBlack1399() {
	configs[ 3]+=  486;
	configs[ 4]+=  162;
	configs[ 5]+=   54;
	configs[14]+=  477;
	configs[22]+=  486;
	configs[23]+=  162;
	configs[24]+=   54;
	configs[30]+=   54;
	configs[32]+=  162;
	configs[34]+=   54;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x810;
}

void FlipFunctionBBWhite1400() {
	configs[ 2]-= 1458;
	configs[ 3]-=  486;
	configs[ 4]-=  162;
	configs[ 5]-=   54;
	configs[14]-=  483;
	configs[22]-=  486;
	configs[23]-=  162;
	configs[24]-=   54;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[30]-=   54;
	configs[32]-=  162;
	configs[34]-=   54;
	bb.mover.u4s[0]^=0x20400000;
	bb.mover.u4s[1]^=0x810;
}

void FlipFunctionBBBlack1400() {
	configs[ 2]+= 1458;
	configs[ 3]+=  486;
	configs[ 4]+=  162;
	configs[ 5]+=   54;
	configs[14]+=  483;
	configs[22]+=  486;
	configs[23]+=  162;
	configs[24]+=   54;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[30]+=   54;
	configs[32]+=  162;
	configs[34]+=   54;
	bb.mover.u4s[0]^=0x20400000;
	bb.mover.u4s[1]^=0x810;
}

void FlipFunctionBBWhite1401() {
	configs[21]-=  729;
}

void FlipFunctionBBBlack1401() {
	configs[21]+=  729;
}

void FlipFunctionBBWhite1402() {
	configs[ 5]-=   18;
	configs[13]-=  486;
	configs[21]-= 1215;
	configs[35]-=   18;
	bb.mover.u4s[1]^=0x400;
}

void FlipFunctionBBBlack1402() {
	configs[ 5]+=   18;
	configs[13]+=  486;
	configs[21]+= 1215;
	configs[35]+=   18;
	bb.mover.u4s[1]^=0x400;
}

void FlipFunctionBBWhite1403() {
	configs[ 4]-=   18;
	configs[ 5]-=   18;
	configs[12]-=  162;
	configs[13]-=  486;
	configs[21]-= 1377;
	configs[34]-=   18;
	configs[35]-=   18;
	bb.mover.u4s[1]^=0x404;
}

void FlipFunctionBBBlack1403() {
	configs[ 4]+=   18;
	configs[ 5]+=   18;
	configs[12]+=  162;
	configs[13]+=  486;
	configs[21]+= 1377;
	configs[34]+=   18;
	configs[35]+=   18;
	bb.mover.u4s[1]^=0x404;
}

void FlipFunctionBBWhite1404() {
	configs[ 3]-=   18;
	configs[ 4]-=   18;
	configs[ 5]-=   18;
	configs[11]-=   54;
	configs[12]-=  162;
	configs[13]-=  486;
	configs[21]-= 1431;
	configs[33]-=   18;
	configs[34]-=   18;
	configs[35]-=   18;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x404;
}

void FlipFunctionBBBlack1404() {
	configs[ 3]+=   18;
	configs[ 4]+=   18;
	configs[ 5]+=   18;
	configs[11]+=   54;
	configs[12]+=  162;
	configs[13]+=  486;
	configs[21]+= 1431;
	configs[33]+=   18;
	configs[34]+=   18;
	configs[35]+=   18;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x404;
}

void FlipFunctionBBWhite1405() {
	configs[ 2]-=   18;
	configs[ 3]-=   18;
	configs[ 4]-=   18;
	configs[ 5]-=   18;
	configs[10]-=   18;
	configs[11]-=   54;
	configs[12]-=  162;
	configs[13]-=  486;
	configs[21]-= 1449;
	configs[32]-=   18;
	configs[33]-=   18;
	configs[34]-=   18;
	configs[35]-=   18;
	bb.mover.u4s[0]^=0x4040000;
	bb.mover.u4s[1]^=0x404;
}

void FlipFunctionBBBlack1405() {
	configs[ 2]+=   18;
	configs[ 3]+=   18;
	configs[ 4]+=   18;
	configs[ 5]+=   18;
	configs[10]+=   18;
	configs[11]+=   54;
	configs[12]+=  162;
	configs[13]+=  486;
	configs[21]+= 1449;
	configs[32]+=   18;
	configs[33]+=   18;
	configs[34]+=   18;
	configs[35]+=   18;
	bb.mover.u4s[0]^=0x4040000;
	bb.mover.u4s[1]^=0x404;
}

void FlipFunctionBBWhite1406() {
	configs[ 1]-=   18;
	configs[ 2]-=   18;
	configs[ 3]-=   18;
	configs[ 4]-=   18;
	configs[ 5]-=   18;
	configs[ 9]-=    6;
	configs[10]-=   18;
	configs[11]-=   54;
	configs[12]-=  162;
	configs[13]-=  486;
	configs[21]-= 1455;
	configs[31]-=    6;
	configs[32]-=   18;
	configs[33]-=   18;
	configs[34]-=   18;
	configs[35]-=   18;
	bb.mover.u4s[0]^=0x4040400;
	bb.mover.u4s[1]^=0x404;
}

void FlipFunctionBBBlack1406() {
	configs[ 1]+=   18;
	configs[ 2]+=   18;
	configs[ 3]+=   18;
	configs[ 4]+=   18;
	configs[ 5]+=   18;
	configs[ 9]+=    6;
	configs[10]+=   18;
	configs[11]+=   54;
	configs[12]+=  162;
	configs[13]+=  486;
	configs[21]+= 1455;
	configs[31]+=    6;
	configs[32]+=   18;
	configs[33]+=   18;
	configs[34]+=   18;
	configs[35]+=   18;
	bb.mover.u4s[0]^=0x4040400;
	bb.mover.u4s[1]^=0x404;
}

void FlipFunctionBBWhite1407() {
	configs[36]-=    9;
}

void FlipFunctionBBBlack1407() {
	configs[36]+=    9;
}

void FlipFunctionBBWhite1408() {
	configs[ 5]-=    6;
	configs[12]-=  486;
	configs[20]-=  486;
	configs[36]-=   15;
	bb.mover.u4s[1]^=0x200;
}

void FlipFunctionBBBlack1408() {
	configs[ 5]+=    6;
	configs[12]+=  486;
	configs[20]+=  486;
	configs[36]+=   15;
	bb.mover.u4s[1]^=0x200;
}

void FlipFunctionBBWhite1409() {
	configs[ 6]-=   27;
	bb.mover.u4s[1]^=0x80000;
	bb.empty.u4s[1]^=0x80000;
}

void FlipFunctionBBBlack1409() {
	configs[ 6]+=   27;
	bb.mover.u4s[1]^=0x80000;
	bb.empty.u4s[1]^=0x80000;
}

void FlipFunctionBBWhite1410() {
	configs[ 6]-=  189;
	configs[16]-=   54;
	configs[23]-= 1458;
	configs[34]-=  162;
	bb.mover.u4s[1]^=0x180000;
	bb.empty.u4s[1]^=0x80000;
}

void FlipFunctionBBBlack1410() {
	configs[ 6]+=  189;
	configs[16]+=   54;
	configs[23]+= 1458;
	configs[34]+=  162;
	bb.mover.u4s[1]^=0x180000;
	bb.empty.u4s[1]^=0x80000;
}

void FlipFunctionBBWhite1411() {
	configs[ 6]-=  675;
	configs[16]-=   54;
	configs[17]-=   18;
	configs[23]-= 1458;
	configs[24]-= 1458;
	configs[33]-=  486;
	configs[34]-=  162;
	bb.mover.u4s[1]^=0x380000;
	bb.empty.u4s[1]^=0x80000;
}

void FlipFunctionBBBlack1411() {
	configs[ 6]+=  675;
	configs[16]+=   54;
	configs[17]+=   18;
	configs[23]+= 1458;
	configs[24]+= 1458;
	configs[33]+=  486;
	configs[34]+=  162;
	bb.mover.u4s[1]^=0x380000;
	bb.empty.u4s[1]^=0x80000;
}

void FlipFunctionBBWhite1412() {
	configs[ 6]-= 2133;
	configs[16]-=   54;
	configs[17]-=   18;
	configs[18]-=    6;
	configs[23]-= 1458;
	configs[24]-= 1458;
	configs[25]-= 1458;
	configs[32]-= 1458;
	configs[33]-=  486;
	configs[34]-=  162;
	bb.mover.u4s[1]^=0x780000;
	bb.empty.u4s[1]^=0x80000;
}

void FlipFunctionBBBlack1412() {
	configs[ 6]+= 2133;
	configs[16]+=   54;
	configs[17]+=   18;
	configs[18]+=    6;
	configs[23]+= 1458;
	configs[24]+= 1458;
	configs[25]+= 1458;
	configs[32]+= 1458;
	configs[33]+=  486;
	configs[34]+=  162;
	bb.mover.u4s[1]^=0x780000;
	bb.empty.u4s[1]^=0x80000;
}

void FlipFunctionBBWhite1413() {
	configs[ 6]-=   45;
	configs[14]-=  486;
	configs[21]-= 1458;
	configs[36]-=   18;
	bb.mover.u4s[1]^=0xC0000;
	bb.empty.u4s[1]^=0x80000;
}

void FlipFunctionBBBlack1413() {
	configs[ 6]+=   45;
	configs[14]+=  486;
	configs[21]+= 1458;
	configs[36]+=   18;
	bb.mover.u4s[1]^=0xC0000;
	bb.empty.u4s[1]^=0x80000;
}

void FlipFunctionBBWhite1414() {
	configs[ 6]-=  207;
	configs[14]-=  486;
	configs[16]-=   54;
	configs[21]-= 1458;
	configs[23]-= 1458;
	configs[34]-=  162;
	configs[36]-=   18;
	bb.mover.u4s[1]^=0x1C0000;
	bb.empty.u4s[1]^=0x80000;
}

void FlipFunctionBBBlack1414() {
	configs[ 6]+=  207;
	configs[14]+=  486;
	configs[16]+=   54;
	configs[21]+= 1458;
	configs[23]+= 1458;
	configs[34]+=  162;
	configs[36]+=   18;
	bb.mover.u4s[1]^=0x1C0000;
	bb.empty.u4s[1]^=0x80000;
}

void FlipFunctionBBWhite1415() {
	configs[ 6]-=  693;
	configs[14]-=  486;
	configs[16]-=   54;
	configs[17]-=   18;
	configs[21]-= 1458;
	configs[23]-= 1458;
	configs[24]-= 1458;
	configs[33]-=  486;
	configs[34]-=  162;
	configs[36]-=   18;
	bb.mover.u4s[1]^=0x3C0000;
	bb.empty.u4s[1]^=0x80000;
}

void FlipFunctionBBBlack1415() {
	configs[ 6]+=  693;
	configs[14]+=  486;
	configs[16]+=   54;
	configs[17]+=   18;
	configs[21]+= 1458;
	configs[23]+= 1458;
	configs[24]+= 1458;
	configs[33]+=  486;
	configs[34]+=  162;
	configs[36]+=   18;
	bb.mover.u4s[1]^=0x3C0000;
	bb.empty.u4s[1]^=0x80000;
}

void FlipFunctionBBWhite1416() {
	configs[ 6]-= 2151;
	configs[14]-=  486;
	configs[16]-=   54;
	configs[17]-=   18;
	configs[18]-=    6;
	configs[21]-= 1458;
	configs[23]-= 1458;
	configs[24]-= 1458;
	configs[25]-= 1458;
	configs[32]-= 1458;
	configs[33]-=  486;
	configs[34]-=  162;
	configs[36]-=   18;
	bb.mover.u4s[1]^=0x7C0000;
	bb.empty.u4s[1]^=0x80000;
}

void FlipFunctionBBBlack1416() {
	configs[ 6]+= 2151;
	configs[14]+=  486;
	configs[16]+=   54;
	configs[17]+=   18;
	configs[18]+=    6;
	configs[21]+= 1458;
	configs[23]+= 1458;
	configs[24]+= 1458;
	configs[25]+= 1458;
	configs[32]+= 1458;
	configs[33]+=  486;
	configs[34]+=  162;
	configs[36]+=   18;
	bb.mover.u4s[1]^=0x7C0000;
	bb.empty.u4s[1]^=0x80000;
}

void FlipFunctionBBWhite1417() {
	configs[ 6]-=   51;
	configs[13]-= 1458;
	configs[14]-=  486;
	configs[20]-= 1458;
	configs[21]-= 1458;
	configs[36]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0xE0000;
	bb.empty.u4s[1]^=0x80000;
}

void FlipFunctionBBBlack1417() {
	configs[ 6]+=   51;
	configs[13]+= 1458;
	configs[14]+=  486;
	configs[20]+= 1458;
	configs[21]+= 1458;
	configs[36]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0xE0000;
	bb.empty.u4s[1]^=0x80000;
}

void FlipFunctionBBWhite1418() {
	configs[ 6]-=  213;
	configs[13]-= 1458;
	configs[14]-=  486;
	configs[16]-=   54;
	configs[20]-= 1458;
	configs[21]-= 1458;
	configs[23]-= 1458;
	configs[34]-=  162;
	configs[36]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x1E0000;
	bb.empty.u4s[1]^=0x80000;
}

void FlipFunctionBBBlack1418() {
	configs[ 6]+=  213;
	configs[13]+= 1458;
	configs[14]+=  486;
	configs[16]+=   54;
	configs[20]+= 1458;
	configs[21]+= 1458;
	configs[23]+= 1458;
	configs[34]+=  162;
	configs[36]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x1E0000;
	bb.empty.u4s[1]^=0x80000;
}

void FlipFunctionBBWhite1419() {
	configs[ 6]-=  699;
	configs[13]-= 1458;
	configs[14]-=  486;
	configs[16]-=   54;
	configs[17]-=   18;
	configs[20]-= 1458;
	configs[21]-= 1458;
	configs[23]-= 1458;
	configs[24]-= 1458;
	configs[33]-=  486;
	configs[34]-=  162;
	configs[36]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x3E0000;
	bb.empty.u4s[1]^=0x80000;
}

void FlipFunctionBBBlack1419() {
	configs[ 6]+=  699;
	configs[13]+= 1458;
	configs[14]+=  486;
	configs[16]+=   54;
	configs[17]+=   18;
	configs[20]+= 1458;
	configs[21]+= 1458;
	configs[23]+= 1458;
	configs[24]+= 1458;
	configs[33]+=  486;
	configs[34]+=  162;
	configs[36]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x3E0000;
	bb.empty.u4s[1]^=0x80000;
}

void FlipFunctionBBWhite1420() {
	configs[ 6]-= 2157;
	configs[13]-= 1458;
	configs[14]-=  486;
	configs[16]-=   54;
	configs[17]-=   18;
	configs[18]-=    6;
	configs[20]-= 1458;
	configs[21]-= 1458;
	configs[23]-= 1458;
	configs[24]-= 1458;
	configs[25]-= 1458;
	configs[32]-= 1458;
	configs[33]-=  486;
	configs[34]-=  162;
	configs[36]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x7E0000;
	bb.empty.u4s[1]^=0x80000;
}

void FlipFunctionBBBlack1420() {
	configs[ 6]+= 2157;
	configs[13]+= 1458;
	configs[14]+=  486;
	configs[16]+=   54;
	configs[17]+=   18;
	configs[18]+=    6;
	configs[20]+= 1458;
	configs[21]+= 1458;
	configs[23]+= 1458;
	configs[24]+= 1458;
	configs[25]+= 1458;
	configs[32]+= 1458;
	configs[33]+=  486;
	configs[34]+=  162;
	configs[36]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x7E0000;
	bb.empty.u4s[1]^=0x80000;
}

void FlipFunctionBBWhite1421() {
	configs[15]-=   81;
}

void FlipFunctionBBBlack1421() {
	configs[15]+=   81;
}

void FlipFunctionBBWhite1422() {
	configs[ 5]-=  162;
	configs[15]-=  135;
	configs[23]-=  486;
	configs[33]-=  162;
	bb.mover.u4s[1]^=0x1000;
}

void FlipFunctionBBBlack1422() {
	configs[ 5]+=  162;
	configs[15]+=  135;
	configs[23]+=  486;
	configs[33]+=  162;
	bb.mover.u4s[1]^=0x1000;
}

void FlipFunctionBBWhite1423() {
	configs[ 4]-=  486;
	configs[ 5]-=  162;
	configs[15]-=  153;
	configs[23]-=  486;
	configs[24]-=  162;
	configs[31]-=  162;
	configs[33]-=  162;
	bb.mover.u4s[1]^=0x1020;
}

void FlipFunctionBBBlack1423() {
	configs[ 4]+=  486;
	configs[ 5]+=  162;
	configs[15]+=  153;
	configs[23]+=  486;
	configs[24]+=  162;
	configs[31]+=  162;
	configs[33]+=  162;
	bb.mover.u4s[1]^=0x1020;
}

void FlipFunctionBBWhite1424() {
	configs[ 3]-= 1458;
	configs[ 4]-=  486;
	configs[ 5]-=  162;
	configs[15]-=  159;
	configs[23]-=  486;
	configs[24]-=  162;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[31]-=  162;
	configs[33]-=  162;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x1020;
}

void FlipFunctionBBBlack1424() {
	configs[ 3]+= 1458;
	configs[ 4]+=  486;
	configs[ 5]+=  162;
	configs[15]+=  159;
	configs[23]+=  486;
	configs[24]+=  162;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[31]+=  162;
	configs[33]+=  162;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x1020;
}

void FlipFunctionBBWhite1425() {
	configs[22]-=  729;
}

void FlipFunctionBBBlack1425() {
	configs[22]+=  729;
}

void FlipFunctionBBWhite1426() {
	configs[ 5]-=   54;
	configs[14]-=  162;
	configs[22]-= 1215;
	configs[34]-=   54;
	bb.mover.u4s[1]^=0x800;
}

void FlipFunctionBBBlack1426() {
	configs[ 5]+=   54;
	configs[14]+=  162;
	configs[22]+= 1215;
	configs[34]+=   54;
	bb.mover.u4s[1]^=0x800;
}

void FlipFunctionBBWhite1427() {
	configs[ 4]-=   54;
	configs[ 5]-=   54;
	configs[13]-=  162;
	configs[14]-=  162;
	configs[22]-= 1377;
	configs[33]-=   54;
	configs[34]-=   54;
	bb.mover.u4s[1]^=0x808;
}

void FlipFunctionBBBlack1427() {
	configs[ 4]+=   54;
	configs[ 5]+=   54;
	configs[13]+=  162;
	configs[14]+=  162;
	configs[22]+= 1377;
	configs[33]+=   54;
	configs[34]+=   54;
	bb.mover.u4s[1]^=0x808;
}

void FlipFunctionBBWhite1428() {
	configs[ 3]-=   54;
	configs[ 4]-=   54;
	configs[ 5]-=   54;
	configs[12]-=   54;
	configs[13]-=  162;
	configs[14]-=  162;
	configs[22]-= 1431;
	configs[32]-=   54;
	configs[33]-=   54;
	configs[34]-=   54;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x808;
}

void FlipFunctionBBBlack1428() {
	configs[ 3]+=   54;
	configs[ 4]+=   54;
	configs[ 5]+=   54;
	configs[12]+=   54;
	configs[13]+=  162;
	configs[14]+=  162;
	configs[22]+= 1431;
	configs[32]+=   54;
	configs[33]+=   54;
	configs[34]+=   54;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x808;
}

void FlipFunctionBBWhite1429() {
	configs[ 2]-=   54;
	configs[ 3]-=   54;
	configs[ 4]-=   54;
	configs[ 5]-=   54;
	configs[11]-=   18;
	configs[12]-=   54;
	configs[13]-=  162;
	configs[14]-=  162;
	configs[22]-= 1449;
	configs[31]-=   18;
	configs[32]-=   54;
	configs[33]-=   54;
	configs[34]-=   54;
	bb.mover.u4s[0]^=0x8080000;
	bb.mover.u4s[1]^=0x808;
}

void FlipFunctionBBBlack1429() {
	configs[ 2]+=   54;
	configs[ 3]+=   54;
	configs[ 4]+=   54;
	configs[ 5]+=   54;
	configs[11]+=   18;
	configs[12]+=   54;
	configs[13]+=  162;
	configs[14]+=  162;
	configs[22]+= 1449;
	configs[31]+=   18;
	configs[32]+=   54;
	configs[33]+=   54;
	configs[34]+=   54;
	bb.mover.u4s[0]^=0x8080000;
	bb.mover.u4s[1]^=0x808;
}

void FlipFunctionBBWhite1430() {
	configs[ 1]-=   54;
	configs[ 2]-=   54;
	configs[ 3]-=   54;
	configs[ 4]-=   54;
	configs[ 5]-=   54;
	configs[10]-=    6;
	configs[11]-=   18;
	configs[12]-=   54;
	configs[13]-=  162;
	configs[14]-=  162;
	configs[22]-= 1455;
	configs[30]-=    6;
	configs[31]-=   18;
	configs[32]-=   54;
	configs[33]-=   54;
	configs[34]-=   54;
	bb.mover.u4s[0]^=0x8080800;
	bb.mover.u4s[1]^=0x808;
}

void FlipFunctionBBBlack1430() {
	configs[ 1]+=   54;
	configs[ 2]+=   54;
	configs[ 3]+=   54;
	configs[ 4]+=   54;
	configs[ 5]+=   54;
	configs[10]+=    6;
	configs[11]+=   18;
	configs[12]+=   54;
	configs[13]+=  162;
	configs[14]+=  162;
	configs[22]+= 1455;
	configs[30]+=    6;
	configs[31]+=   18;
	configs[32]+=   54;
	configs[33]+=   54;
	configs[34]+=   54;
	bb.mover.u4s[0]^=0x8080800;
	bb.mover.u4s[1]^=0x808;
}

void FlipFunctionBBWhite1431() {
	configs[35]-=   27;
}

void FlipFunctionBBBlack1431() {
	configs[35]+=   27;
}

void FlipFunctionBBWhite1432() {
	configs[ 5]-=   18;
	configs[13]-=  486;
	configs[21]-=  486;
	configs[35]-=   45;
	bb.mover.u4s[1]^=0x400;
}

void FlipFunctionBBBlack1432() {
	configs[ 5]+=   18;
	configs[13]+=  486;
	configs[21]+=  486;
	configs[35]+=   45;
	bb.mover.u4s[1]^=0x400;
}

void FlipFunctionBBWhite1433() {
	configs[ 4]-=    6;
	configs[ 5]-=   18;
	configs[11]-=  162;
	configs[13]-=  486;
	configs[20]-=  162;
	configs[21]-=  486;
	configs[35]-=   51;
	bb.mover.u4s[1]^=0x402;
}

void FlipFunctionBBBlack1433() {
	configs[ 4]+=    6;
	configs[ 5]+=   18;
	configs[11]+=  162;
	configs[13]+=  486;
	configs[20]+=  162;
	configs[21]+=  486;
	configs[35]+=   51;
	bb.mover.u4s[1]^=0x402;
}

void FlipFunctionBBWhite1434() {
	configs[ 6]-=   81;
	bb.mover.u4s[1]^=0x100000;
	bb.empty.u4s[1]^=0x100000;
}

void FlipFunctionBBBlack1434() {
	configs[ 6]+=   81;
	bb.mover.u4s[1]^=0x100000;
	bb.empty.u4s[1]^=0x100000;
}

void FlipFunctionBBWhite1435() {
	configs[ 6]-=  567;
	configs[17]-=   18;
	configs[24]-= 1458;
	configs[33]-=  486;
	bb.mover.u4s[1]^=0x300000;
	bb.empty.u4s[1]^=0x100000;
}

void FlipFunctionBBBlack1435() {
	configs[ 6]+=  567;
	configs[17]+=   18;
	configs[24]+= 1458;
	configs[33]+=  486;
	bb.mover.u4s[1]^=0x300000;
	bb.empty.u4s[1]^=0x100000;
}

void FlipFunctionBBWhite1436() {
	configs[ 6]-= 2025;
	configs[17]-=   18;
	configs[18]-=    6;
	configs[24]-= 1458;
	configs[25]-= 1458;
	configs[32]-= 1458;
	configs[33]-=  486;
	bb.mover.u4s[1]^=0x700000;
	bb.empty.u4s[1]^=0x100000;
}

void FlipFunctionBBBlack1436() {
	configs[ 6]+= 2025;
	configs[17]+=   18;
	configs[18]+=    6;
	configs[24]+= 1458;
	configs[25]+= 1458;
	configs[32]+= 1458;
	configs[33]+=  486;
	bb.mover.u4s[1]^=0x700000;
	bb.empty.u4s[1]^=0x100000;
}

void FlipFunctionBBWhite1437() {
	configs[ 6]-=  135;
	configs[15]-=  162;
	configs[22]-= 1458;
	configs[35]-=   54;
	bb.mover.u4s[1]^=0x180000;
	bb.empty.u4s[1]^=0x100000;
}

void FlipFunctionBBBlack1437() {
	configs[ 6]+=  135;
	configs[15]+=  162;
	configs[22]+= 1458;
	configs[35]+=   54;
	bb.mover.u4s[1]^=0x180000;
	bb.empty.u4s[1]^=0x100000;
}

void FlipFunctionBBWhite1438() {
	configs[ 6]-=  621;
	configs[15]-=  162;
	configs[17]-=   18;
	configs[22]-= 1458;
	configs[24]-= 1458;
	configs[33]-=  486;
	configs[35]-=   54;
	bb.mover.u4s[1]^=0x380000;
	bb.empty.u4s[1]^=0x100000;
}

void FlipFunctionBBBlack1438() {
	configs[ 6]+=  621;
	configs[15]+=  162;
	configs[17]+=   18;
	configs[22]+= 1458;
	configs[24]+= 1458;
	configs[33]+=  486;
	configs[35]+=   54;
	bb.mover.u4s[1]^=0x380000;
	bb.empty.u4s[1]^=0x100000;
}

void FlipFunctionBBWhite1439() {
	configs[ 6]-= 2079;
	configs[15]-=  162;
	configs[17]-=   18;
	configs[18]-=    6;
	configs[22]-= 1458;
	configs[24]-= 1458;
	configs[25]-= 1458;
	configs[32]-= 1458;
	configs[33]-=  486;
	configs[35]-=   54;
	bb.mover.u4s[1]^=0x780000;
	bb.empty.u4s[1]^=0x100000;
}

void FlipFunctionBBBlack1439() {
	configs[ 6]+= 2079;
	configs[15]+=  162;
	configs[17]+=   18;
	configs[18]+=    6;
	configs[22]+= 1458;
	configs[24]+= 1458;
	configs[25]+= 1458;
	configs[32]+= 1458;
	configs[33]+=  486;
	configs[35]+=   54;
	bb.mover.u4s[1]^=0x780000;
	bb.empty.u4s[1]^=0x100000;
}

void FlipFunctionBBWhite1440() {
	configs[ 6]-=  153;
	configs[14]-=  486;
	configs[15]-=  162;
	configs[21]-= 1458;
	configs[22]-= 1458;
	configs[35]-=   54;
	configs[36]-=   18;
	bb.mover.u4s[1]^=0x1C0000;
	bb.empty.u4s[1]^=0x100000;
}

void FlipFunctionBBBlack1440() {
	configs[ 6]+=  153;
	configs[14]+=  486;
	configs[15]+=  162;
	configs[21]+= 1458;
	configs[22]+= 1458;
	configs[35]+=   54;
	configs[36]+=   18;
	bb.mover.u4s[1]^=0x1C0000;
	bb.empty.u4s[1]^=0x100000;
}

void FlipFunctionBBWhite1441() {
	configs[ 6]-=  639;
	configs[14]-=  486;
	configs[15]-=  162;
	configs[17]-=   18;
	configs[21]-= 1458;
	configs[22]-= 1458;
	configs[24]-= 1458;
	configs[33]-=  486;
	configs[35]-=   54;
	configs[36]-=   18;
	bb.mover.u4s[1]^=0x3C0000;
	bb.empty.u4s[1]^=0x100000;
}

void FlipFunctionBBBlack1441() {
	configs[ 6]+=  639;
	configs[14]+=  486;
	configs[15]+=  162;
	configs[17]+=   18;
	configs[21]+= 1458;
	configs[22]+= 1458;
	configs[24]+= 1458;
	configs[33]+=  486;
	configs[35]+=   54;
	configs[36]+=   18;
	bb.mover.u4s[1]^=0x3C0000;
	bb.empty.u4s[1]^=0x100000;
}

void FlipFunctionBBWhite1442() {
	configs[ 6]-= 2097;
	configs[14]-=  486;
	configs[15]-=  162;
	configs[17]-=   18;
	configs[18]-=    6;
	configs[21]-= 1458;
	configs[22]-= 1458;
	configs[24]-= 1458;
	configs[25]-= 1458;
	configs[32]-= 1458;
	configs[33]-=  486;
	configs[35]-=   54;
	configs[36]-=   18;
	bb.mover.u4s[1]^=0x7C0000;
	bb.empty.u4s[1]^=0x100000;
}

void FlipFunctionBBBlack1442() {
	configs[ 6]+= 2097;
	configs[14]+=  486;
	configs[15]+=  162;
	configs[17]+=   18;
	configs[18]+=    6;
	configs[21]+= 1458;
	configs[22]+= 1458;
	configs[24]+= 1458;
	configs[25]+= 1458;
	configs[32]+= 1458;
	configs[33]+=  486;
	configs[35]+=   54;
	configs[36]+=   18;
	bb.mover.u4s[1]^=0x7C0000;
	bb.empty.u4s[1]^=0x100000;
}

void FlipFunctionBBWhite1443() {
	configs[ 6]-=  159;
	configs[13]-= 1458;
	configs[14]-=  486;
	configs[15]-=  162;
	configs[20]-= 1458;
	configs[21]-= 1458;
	configs[22]-= 1458;
	configs[35]-=   54;
	configs[36]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x1E0000;
	bb.empty.u4s[1]^=0x100000;
}

void FlipFunctionBBBlack1443() {
	configs[ 6]+=  159;
	configs[13]+= 1458;
	configs[14]+=  486;
	configs[15]+=  162;
	configs[20]+= 1458;
	configs[21]+= 1458;
	configs[22]+= 1458;
	configs[35]+=   54;
	configs[36]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x1E0000;
	bb.empty.u4s[1]^=0x100000;
}

void FlipFunctionBBWhite1444() {
	configs[ 6]-=  645;
	configs[13]-= 1458;
	configs[14]-=  486;
	configs[15]-=  162;
	configs[17]-=   18;
	configs[20]-= 1458;
	configs[21]-= 1458;
	configs[22]-= 1458;
	configs[24]-= 1458;
	configs[33]-=  486;
	configs[35]-=   54;
	configs[36]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x3E0000;
	bb.empty.u4s[1]^=0x100000;
}

void FlipFunctionBBBlack1444() {
	configs[ 6]+=  645;
	configs[13]+= 1458;
	configs[14]+=  486;
	configs[15]+=  162;
	configs[17]+=   18;
	configs[20]+= 1458;
	configs[21]+= 1458;
	configs[22]+= 1458;
	configs[24]+= 1458;
	configs[33]+=  486;
	configs[35]+=   54;
	configs[36]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x3E0000;
	bb.empty.u4s[1]^=0x100000;
}

void FlipFunctionBBWhite1445() {
	configs[ 6]-= 2103;
	configs[13]-= 1458;
	configs[14]-=  486;
	configs[15]-=  162;
	configs[17]-=   18;
	configs[18]-=    6;
	configs[20]-= 1458;
	configs[21]-= 1458;
	configs[22]-= 1458;
	configs[24]-= 1458;
	configs[25]-= 1458;
	configs[32]-= 1458;
	configs[33]-=  486;
	configs[35]-=   54;
	configs[36]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x7E0000;
	bb.empty.u4s[1]^=0x100000;
}

void FlipFunctionBBBlack1445() {
	configs[ 6]+= 2103;
	configs[13]+= 1458;
	configs[14]+=  486;
	configs[15]+=  162;
	configs[17]+=   18;
	configs[18]+=    6;
	configs[20]+= 1458;
	configs[21]+= 1458;
	configs[22]+= 1458;
	configs[24]+= 1458;
	configs[25]+= 1458;
	configs[32]+= 1458;
	configs[33]+=  486;
	configs[35]+=   54;
	configs[36]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x7E0000;
	bb.empty.u4s[1]^=0x100000;
}

void FlipFunctionBBWhite1446() {
	configs[16]-=   27;
}

void FlipFunctionBBBlack1446() {
	configs[16]+=   27;
}

void FlipFunctionBBWhite1447() {
	configs[ 5]-=  486;
	configs[16]-=   45;
	configs[24]-=  486;
	configs[32]-=  486;
	bb.mover.u4s[1]^=0x2000;
}

void FlipFunctionBBBlack1447() {
	configs[ 5]+=  486;
	configs[16]+=   45;
	configs[24]+=  486;
	configs[32]+=  486;
	bb.mover.u4s[1]^=0x2000;
}

void FlipFunctionBBWhite1448() {
	configs[ 4]-= 1458;
	configs[ 5]-=  486;
	configs[16]-=   51;
	configs[24]-=  486;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[32]-=  486;
	bb.mover.u4s[1]^=0x2040;
}

void FlipFunctionBBBlack1448() {
	configs[ 4]+= 1458;
	configs[ 5]+=  486;
	configs[16]+=   51;
	configs[24]+=  486;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[32]+=  486;
	bb.mover.u4s[1]^=0x2040;
}

void FlipFunctionBBWhite1449() {
	configs[23]-=  729;
}

void FlipFunctionBBBlack1449() {
	configs[23]+=  729;
}

void FlipFunctionBBWhite1450() {
	configs[ 5]-=  162;
	configs[15]-=   54;
	configs[23]-= 1215;
	configs[33]-=  162;
	bb.mover.u4s[1]^=0x1000;
}

void FlipFunctionBBBlack1450() {
	configs[ 5]+=  162;
	configs[15]+=   54;
	configs[23]+= 1215;
	configs[33]+=  162;
	bb.mover.u4s[1]^=0x1000;
}

void FlipFunctionBBWhite1451() {
	configs[ 4]-=  162;
	configs[ 5]-=  162;
	configs[14]-=   54;
	configs[15]-=   54;
	configs[23]-= 1377;
	configs[32]-=  162;
	configs[33]-=  162;
	bb.mover.u4s[1]^=0x1010;
}

void FlipFunctionBBBlack1451() {
	configs[ 4]+=  162;
	configs[ 5]+=  162;
	configs[14]+=   54;
	configs[15]+=   54;
	configs[23]+= 1377;
	configs[32]+=  162;
	configs[33]+=  162;
	bb.mover.u4s[1]^=0x1010;
}

void FlipFunctionBBWhite1452() {
	configs[ 3]-=  162;
	configs[ 4]-=  162;
	configs[ 5]-=  162;
	configs[13]-=   54;
	configs[14]-=   54;
	configs[15]-=   54;
	configs[23]-= 1431;
	configs[31]-=   54;
	configs[32]-=  162;
	configs[33]-=  162;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x1010;
}

void FlipFunctionBBBlack1452() {
	configs[ 3]+=  162;
	configs[ 4]+=  162;
	configs[ 5]+=  162;
	configs[13]+=   54;
	configs[14]+=   54;
	configs[15]+=   54;
	configs[23]+= 1431;
	configs[31]+=   54;
	configs[32]+=  162;
	configs[33]+=  162;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x1010;
}

void FlipFunctionBBWhite1453() {
	configs[ 2]-=  162;
	configs[ 3]-=  162;
	configs[ 4]-=  162;
	configs[ 5]-=  162;
	configs[12]-=   18;
	configs[13]-=   54;
	configs[14]-=   54;
	configs[15]-=   54;
	configs[23]-= 1449;
	configs[30]-=   18;
	configs[31]-=   54;
	configs[32]-=  162;
	configs[33]-=  162;
	bb.mover.u4s[0]^=0x10100000;
	bb.mover.u4s[1]^=0x1010;
}

void FlipFunctionBBBlack1453() {
	configs[ 2]+=  162;
	configs[ 3]+=  162;
	configs[ 4]+=  162;
	configs[ 5]+=  162;
	configs[12]+=   18;
	configs[13]+=   54;
	configs[14]+=   54;
	configs[15]+=   54;
	configs[23]+= 1449;
	configs[30]+=   18;
	configs[31]+=   54;
	configs[32]+=  162;
	configs[33]+=  162;
	bb.mover.u4s[0]^=0x10100000;
	bb.mover.u4s[1]^=0x1010;
}

void FlipFunctionBBWhite1454() {
	configs[ 1]-=  162;
	configs[ 2]-=  162;
	configs[ 3]-=  162;
	configs[ 4]-=  162;
	configs[ 5]-=  162;
	configs[11]-=    6;
	configs[12]-=   18;
	configs[13]-=   54;
	configs[14]-=   54;
	configs[15]-=   54;
	configs[23]-= 1455;
	configs[29]-=    6;
	configs[30]-=   18;
	configs[31]-=   54;
	configs[32]-=  162;
	configs[33]-=  162;
	bb.mover.u4s[0]^=0x10101000;
	bb.mover.u4s[1]^=0x1010;
}

void FlipFunctionBBBlack1454() {
	configs[ 1]+=  162;
	configs[ 2]+=  162;
	configs[ 3]+=  162;
	configs[ 4]+=  162;
	configs[ 5]+=  162;
	configs[11]+=    6;
	configs[12]+=   18;
	configs[13]+=   54;
	configs[14]+=   54;
	configs[15]+=   54;
	configs[23]+= 1455;
	configs[29]+=    6;
	configs[30]+=   18;
	configs[31]+=   54;
	configs[32]+=  162;
	configs[33]+=  162;
	bb.mover.u4s[0]^=0x10101000;
	bb.mover.u4s[1]^=0x1010;
}

void FlipFunctionBBWhite1455() {
	configs[34]-=   81;
}

void FlipFunctionBBBlack1455() {
	configs[34]+=   81;
}

void FlipFunctionBBWhite1456() {
	configs[ 5]-=   54;
	configs[14]-=  162;
	configs[22]-=  486;
	configs[34]-=  135;
	bb.mover.u4s[1]^=0x800;
}

void FlipFunctionBBBlack1456() {
	configs[ 5]+=   54;
	configs[14]+=  162;
	configs[22]+=  486;
	configs[34]+=  135;
	bb.mover.u4s[1]^=0x800;
}

void FlipFunctionBBWhite1457() {
	configs[ 4]-=   18;
	configs[ 5]-=   54;
	configs[12]-=  162;
	configs[14]-=  162;
	configs[21]-=  162;
	configs[22]-=  486;
	configs[34]-=  153;
	bb.mover.u4s[1]^=0x804;
}

void FlipFunctionBBBlack1457() {
	configs[ 4]+=   18;
	configs[ 5]+=   54;
	configs[12]+=  162;
	configs[14]+=  162;
	configs[21]+=  162;
	configs[22]+=  486;
	configs[34]+=  153;
	bb.mover.u4s[1]^=0x804;
}

void FlipFunctionBBWhite1458() {
	configs[ 3]-=    6;
	configs[ 4]-=   18;
	configs[ 5]-=   54;
	configs[10]-=   54;
	configs[12]-=  162;
	configs[14]-=  162;
	configs[20]-=   54;
	configs[21]-=  162;
	configs[22]-=  486;
	configs[34]-=  159;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x804;
}

void FlipFunctionBBBlack1458() {
	configs[ 3]+=    6;
	configs[ 4]+=   18;
	configs[ 5]+=   54;
	configs[10]+=   54;
	configs[12]+=  162;
	configs[14]+=  162;
	configs[20]+=   54;
	configs[21]+=  162;
	configs[22]+=  486;
	configs[34]+=  159;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x804;
}

void FlipFunctionBBWhite1459() {
	configs[ 6]-=  243;
	bb.mover.u4s[1]^=0x200000;
	bb.empty.u4s[1]^=0x200000;
}

void FlipFunctionBBBlack1459() {
	configs[ 6]+=  243;
	bb.mover.u4s[1]^=0x200000;
	bb.empty.u4s[1]^=0x200000;
}

void FlipFunctionBBWhite1460() {
	configs[ 6]-= 1701;
	configs[18]-=    6;
	configs[25]-= 1458;
	configs[32]-= 1458;
	bb.mover.u4s[1]^=0x600000;
	bb.empty.u4s[1]^=0x200000;
}

void FlipFunctionBBBlack1460() {
	configs[ 6]+= 1701;
	configs[18]+=    6;
	configs[25]+= 1458;
	configs[32]+= 1458;
	bb.mover.u4s[1]^=0x600000;
	bb.empty.u4s[1]^=0x200000;
}

void FlipFunctionBBWhite1461() {
	configs[ 6]-=  405;
	configs[16]-=   54;
	configs[23]-= 1458;
	configs[34]-=  162;
	bb.mover.u4s[1]^=0x300000;
	bb.empty.u4s[1]^=0x200000;
}

void FlipFunctionBBBlack1461() {
	configs[ 6]+=  405;
	configs[16]+=   54;
	configs[23]+= 1458;
	configs[34]+=  162;
	bb.mover.u4s[1]^=0x300000;
	bb.empty.u4s[1]^=0x200000;
}

void FlipFunctionBBWhite1462() {
	configs[ 6]-= 1863;
	configs[16]-=   54;
	configs[18]-=    6;
	configs[23]-= 1458;
	configs[25]-= 1458;
	configs[32]-= 1458;
	configs[34]-=  162;
	bb.mover.u4s[1]^=0x700000;
	bb.empty.u4s[1]^=0x200000;
}

void FlipFunctionBBBlack1462() {
	configs[ 6]+= 1863;
	configs[16]+=   54;
	configs[18]+=    6;
	configs[23]+= 1458;
	configs[25]+= 1458;
	configs[32]+= 1458;
	configs[34]+=  162;
	bb.mover.u4s[1]^=0x700000;
	bb.empty.u4s[1]^=0x200000;
}

void FlipFunctionBBWhite1463() {
	configs[ 6]-=  459;
	configs[15]-=  162;
	configs[16]-=   54;
	configs[22]-= 1458;
	configs[23]-= 1458;
	configs[34]-=  162;
	configs[35]-=   54;
	bb.mover.u4s[1]^=0x380000;
	bb.empty.u4s[1]^=0x200000;
}

void FlipFunctionBBBlack1463() {
	configs[ 6]+=  459;
	configs[15]+=  162;
	configs[16]+=   54;
	configs[22]+= 1458;
	configs[23]+= 1458;
	configs[34]+=  162;
	configs[35]+=   54;
	bb.mover.u4s[1]^=0x380000;
	bb.empty.u4s[1]^=0x200000;
}

void FlipFunctionBBWhite1464() {
	configs[ 6]-= 1917;
	configs[15]-=  162;
	configs[16]-=   54;
	configs[18]-=    6;
	configs[22]-= 1458;
	configs[23]-= 1458;
	configs[25]-= 1458;
	configs[32]-= 1458;
	configs[34]-=  162;
	configs[35]-=   54;
	bb.mover.u4s[1]^=0x780000;
	bb.empty.u4s[1]^=0x200000;
}

void FlipFunctionBBBlack1464() {
	configs[ 6]+= 1917;
	configs[15]+=  162;
	configs[16]+=   54;
	configs[18]+=    6;
	configs[22]+= 1458;
	configs[23]+= 1458;
	configs[25]+= 1458;
	configs[32]+= 1458;
	configs[34]+=  162;
	configs[35]+=   54;
	bb.mover.u4s[1]^=0x780000;
	bb.empty.u4s[1]^=0x200000;
}

void FlipFunctionBBWhite1465() {
	configs[ 6]-=  477;
	configs[14]-=  486;
	configs[15]-=  162;
	configs[16]-=   54;
	configs[21]-= 1458;
	configs[22]-= 1458;
	configs[23]-= 1458;
	configs[34]-=  162;
	configs[35]-=   54;
	configs[36]-=   18;
	bb.mover.u4s[1]^=0x3C0000;
	bb.empty.u4s[1]^=0x200000;
}

void FlipFunctionBBBlack1465() {
	configs[ 6]+=  477;
	configs[14]+=  486;
	configs[15]+=  162;
	configs[16]+=   54;
	configs[21]+= 1458;
	configs[22]+= 1458;
	configs[23]+= 1458;
	configs[34]+=  162;
	configs[35]+=   54;
	configs[36]+=   18;
	bb.mover.u4s[1]^=0x3C0000;
	bb.empty.u4s[1]^=0x200000;
}

void FlipFunctionBBWhite1466() {
	configs[ 6]-= 1935;
	configs[14]-=  486;
	configs[15]-=  162;
	configs[16]-=   54;
	configs[18]-=    6;
	configs[21]-= 1458;
	configs[22]-= 1458;
	configs[23]-= 1458;
	configs[25]-= 1458;
	configs[32]-= 1458;
	configs[34]-=  162;
	configs[35]-=   54;
	configs[36]-=   18;
	bb.mover.u4s[1]^=0x7C0000;
	bb.empty.u4s[1]^=0x200000;
}

void FlipFunctionBBBlack1466() {
	configs[ 6]+= 1935;
	configs[14]+=  486;
	configs[15]+=  162;
	configs[16]+=   54;
	configs[18]+=    6;
	configs[21]+= 1458;
	configs[22]+= 1458;
	configs[23]+= 1458;
	configs[25]+= 1458;
	configs[32]+= 1458;
	configs[34]+=  162;
	configs[35]+=   54;
	configs[36]+=   18;
	bb.mover.u4s[1]^=0x7C0000;
	bb.empty.u4s[1]^=0x200000;
}

void FlipFunctionBBWhite1467() {
	configs[ 6]-=  483;
	configs[13]-= 1458;
	configs[14]-=  486;
	configs[15]-=  162;
	configs[16]-=   54;
	configs[20]-= 1458;
	configs[21]-= 1458;
	configs[22]-= 1458;
	configs[23]-= 1458;
	configs[34]-=  162;
	configs[35]-=   54;
	configs[36]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x3E0000;
	bb.empty.u4s[1]^=0x200000;
}

void FlipFunctionBBBlack1467() {
	configs[ 6]+=  483;
	configs[13]+= 1458;
	configs[14]+=  486;
	configs[15]+=  162;
	configs[16]+=   54;
	configs[20]+= 1458;
	configs[21]+= 1458;
	configs[22]+= 1458;
	configs[23]+= 1458;
	configs[34]+=  162;
	configs[35]+=   54;
	configs[36]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x3E0000;
	bb.empty.u4s[1]^=0x200000;
}

void FlipFunctionBBWhite1468() {
	configs[ 6]-= 1941;
	configs[13]-= 1458;
	configs[14]-=  486;
	configs[15]-=  162;
	configs[16]-=   54;
	configs[18]-=    6;
	configs[20]-= 1458;
	configs[21]-= 1458;
	configs[22]-= 1458;
	configs[23]-= 1458;
	configs[25]-= 1458;
	configs[32]-= 1458;
	configs[34]-=  162;
	configs[35]-=   54;
	configs[36]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x7E0000;
	bb.empty.u4s[1]^=0x200000;
}

void FlipFunctionBBBlack1468() {
	configs[ 6]+= 1941;
	configs[13]+= 1458;
	configs[14]+=  486;
	configs[15]+=  162;
	configs[16]+=   54;
	configs[18]+=    6;
	configs[20]+= 1458;
	configs[21]+= 1458;
	configs[22]+= 1458;
	configs[23]+= 1458;
	configs[25]+= 1458;
	configs[32]+= 1458;
	configs[34]+=  162;
	configs[35]+=   54;
	configs[36]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x7E0000;
	bb.empty.u4s[1]^=0x200000;
}

void FlipFunctionBBWhite1469() {
	configs[17]-=    9;
}

void FlipFunctionBBBlack1469() {
	configs[17]+=    9;
}

void FlipFunctionBBWhite1470() {
	configs[ 5]-= 1458;
	configs[17]-=   15;
	configs[25]-=  486;
	configs[31]-=  486;
	bb.mover.u4s[1]^=0x4000;
}

void FlipFunctionBBBlack1470() {
	configs[ 5]+= 1458;
	configs[17]+=   15;
	configs[25]+=  486;
	configs[31]+=  486;
	bb.mover.u4s[1]^=0x4000;
}

void FlipFunctionBBWhite1471() {
	configs[24]-=  729;
}

void FlipFunctionBBBlack1471() {
	configs[24]+=  729;
}

void FlipFunctionBBWhite1472() {
	configs[ 5]-=  486;
	configs[16]-=   18;
	configs[24]-= 1215;
	configs[32]-=  486;
	bb.mover.u4s[1]^=0x2000;
}

void FlipFunctionBBBlack1472() {
	configs[ 5]+=  486;
	configs[16]+=   18;
	configs[24]+= 1215;
	configs[32]+=  486;
	bb.mover.u4s[1]^=0x2000;
}

void FlipFunctionBBWhite1473() {
	configs[ 4]-=  486;
	configs[ 5]-=  486;
	configs[15]-=   18;
	configs[16]-=   18;
	configs[24]-= 1377;
	configs[31]-=  162;
	configs[32]-=  486;
	bb.mover.u4s[1]^=0x2020;
}

void FlipFunctionBBBlack1473() {
	configs[ 4]+=  486;
	configs[ 5]+=  486;
	configs[15]+=   18;
	configs[16]+=   18;
	configs[24]+= 1377;
	configs[31]+=  162;
	configs[32]+=  486;
	bb.mover.u4s[1]^=0x2020;
}

void FlipFunctionBBWhite1474() {
	configs[ 3]-=  486;
	configs[ 4]-=  486;
	configs[ 5]-=  486;
	configs[14]-=   18;
	configs[15]-=   18;
	configs[16]-=   18;
	configs[24]-= 1431;
	configs[30]-=   54;
	configs[31]-=  162;
	configs[32]-=  486;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x2020;
}

void FlipFunctionBBBlack1474() {
	configs[ 3]+=  486;
	configs[ 4]+=  486;
	configs[ 5]+=  486;
	configs[14]+=   18;
	configs[15]+=   18;
	configs[16]+=   18;
	configs[24]+= 1431;
	configs[30]+=   54;
	configs[31]+=  162;
	configs[32]+=  486;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x2020;
}

void FlipFunctionBBWhite1475() {
	configs[ 2]-=  486;
	configs[ 3]-=  486;
	configs[ 4]-=  486;
	configs[ 5]-=  486;
	configs[13]-=   18;
	configs[14]-=   18;
	configs[15]-=   18;
	configs[16]-=   18;
	configs[24]-= 1449;
	configs[29]-=   18;
	configs[30]-=   54;
	configs[31]-=  162;
	configs[32]-=  486;
	bb.mover.u4s[0]^=0x20200000;
	bb.mover.u4s[1]^=0x2020;
}

void FlipFunctionBBBlack1475() {
	configs[ 2]+=  486;
	configs[ 3]+=  486;
	configs[ 4]+=  486;
	configs[ 5]+=  486;
	configs[13]+=   18;
	configs[14]+=   18;
	configs[15]+=   18;
	configs[16]+=   18;
	configs[24]+= 1449;
	configs[29]+=   18;
	configs[30]+=   54;
	configs[31]+=  162;
	configs[32]+=  486;
	bb.mover.u4s[0]^=0x20200000;
	bb.mover.u4s[1]^=0x2020;
}

void FlipFunctionBBWhite1476() {
	configs[ 1]-=  486;
	configs[ 2]-=  486;
	configs[ 3]-=  486;
	configs[ 4]-=  486;
	configs[ 5]-=  486;
	configs[12]-=    6;
	configs[13]-=   18;
	configs[14]-=   18;
	configs[15]-=   18;
	configs[16]-=   18;
	configs[24]-= 1455;
	configs[28]-=    6;
	configs[29]-=   18;
	configs[30]-=   54;
	configs[31]-=  162;
	configs[32]-=  486;
	bb.mover.u4s[0]^=0x20202000;
	bb.mover.u4s[1]^=0x2020;
}

void FlipFunctionBBBlack1476() {
	configs[ 1]+=  486;
	configs[ 2]+=  486;
	configs[ 3]+=  486;
	configs[ 4]+=  486;
	configs[ 5]+=  486;
	configs[12]+=    6;
	configs[13]+=   18;
	configs[14]+=   18;
	configs[15]+=   18;
	configs[16]+=   18;
	configs[24]+= 1455;
	configs[28]+=    6;
	configs[29]+=   18;
	configs[30]+=   54;
	configs[31]+=  162;
	configs[32]+=  486;
	bb.mover.u4s[0]^=0x20202000;
	bb.mover.u4s[1]^=0x2020;
}

void FlipFunctionBBWhite1477() {
	configs[33]-=  243;
}

void FlipFunctionBBBlack1477() {
	configs[33]+=  243;
}

void FlipFunctionBBWhite1478() {
	configs[ 5]-=  162;
	configs[15]-=   54;
	configs[23]-=  486;
	configs[33]-=  405;
	bb.mover.u4s[1]^=0x1000;
}

void FlipFunctionBBBlack1478() {
	configs[ 5]+=  162;
	configs[15]+=   54;
	configs[23]+=  486;
	configs[33]+=  405;
	bb.mover.u4s[1]^=0x1000;
}

void FlipFunctionBBWhite1479() {
	configs[ 4]-=   54;
	configs[ 5]-=  162;
	configs[13]-=  162;
	configs[15]-=   54;
	configs[22]-=  162;
	configs[23]-=  486;
	configs[33]-=  459;
	bb.mover.u4s[1]^=0x1008;
}

void FlipFunctionBBBlack1479() {
	configs[ 4]+=   54;
	configs[ 5]+=  162;
	configs[13]+=  162;
	configs[15]+=   54;
	configs[22]+=  162;
	configs[23]+=  486;
	configs[33]+=  459;
	bb.mover.u4s[1]^=0x1008;
}

void FlipFunctionBBWhite1480() {
	configs[ 3]-=   18;
	configs[ 4]-=   54;
	configs[ 5]-=  162;
	configs[11]-=   54;
	configs[13]-=  162;
	configs[15]-=   54;
	configs[21]-=   54;
	configs[22]-=  162;
	configs[23]-=  486;
	configs[33]-=  477;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x1008;
}

void FlipFunctionBBBlack1480() {
	configs[ 3]+=   18;
	configs[ 4]+=   54;
	configs[ 5]+=  162;
	configs[11]+=   54;
	configs[13]+=  162;
	configs[15]+=   54;
	configs[21]+=   54;
	configs[22]+=  162;
	configs[23]+=  486;
	configs[33]+=  477;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x1008;
}

void FlipFunctionBBWhite1481() {
	configs[ 2]-=    6;
	configs[ 3]-=   18;
	configs[ 4]-=   54;
	configs[ 5]-=  162;
	configs[ 9]-=   18;
	configs[11]-=   54;
	configs[13]-=  162;
	configs[15]-=   54;
	configs[20]-=   18;
	configs[21]-=   54;
	configs[22]-=  162;
	configs[23]-=  486;
	configs[33]-=  483;
	bb.mover.u4s[0]^=0x4020000;
	bb.mover.u4s[1]^=0x1008;
}

void FlipFunctionBBBlack1481() {
	configs[ 2]+=    6;
	configs[ 3]+=   18;
	configs[ 4]+=   54;
	configs[ 5]+=  162;
	configs[ 9]+=   18;
	configs[11]+=   54;
	configs[13]+=  162;
	configs[15]+=   54;
	configs[20]+=   18;
	configs[21]+=   54;
	configs[22]+=  162;
	configs[23]+=  486;
	configs[33]+=  483;
	bb.mover.u4s[0]^=0x4020000;
	bb.mover.u4s[1]^=0x1008;
}

void FlipFunctionBBWhite1482() {
	configs[ 6]-=  729;
	bb.mover.u4s[1]^=0x400000;
	bb.empty.u4s[1]^=0x400000;
}

void FlipFunctionBBBlack1482() {
	configs[ 6]+=  729;
	bb.mover.u4s[1]^=0x400000;
	bb.empty.u4s[1]^=0x400000;
}

void FlipFunctionBBWhite1483() {
	configs[ 6]-= 1215;
	configs[17]-=   18;
	configs[24]-= 1458;
	configs[33]-=  486;
	bb.mover.u4s[1]^=0x600000;
	bb.empty.u4s[1]^=0x400000;
}

void FlipFunctionBBBlack1483() {
	configs[ 6]+= 1215;
	configs[17]+=   18;
	configs[24]+= 1458;
	configs[33]+=  486;
	bb.mover.u4s[1]^=0x600000;
	bb.empty.u4s[1]^=0x400000;
}

void FlipFunctionBBWhite1484() {
	configs[ 6]-= 1377;
	configs[16]-=   54;
	configs[17]-=   18;
	configs[23]-= 1458;
	configs[24]-= 1458;
	configs[33]-=  486;
	configs[34]-=  162;
	bb.mover.u4s[1]^=0x700000;
	bb.empty.u4s[1]^=0x400000;
}

void FlipFunctionBBBlack1484() {
	configs[ 6]+= 1377;
	configs[16]+=   54;
	configs[17]+=   18;
	configs[23]+= 1458;
	configs[24]+= 1458;
	configs[33]+=  486;
	configs[34]+=  162;
	bb.mover.u4s[1]^=0x700000;
	bb.empty.u4s[1]^=0x400000;
}

void FlipFunctionBBWhite1485() {
	configs[ 6]-= 1431;
	configs[15]-=  162;
	configs[16]-=   54;
	configs[17]-=   18;
	configs[22]-= 1458;
	configs[23]-= 1458;
	configs[24]-= 1458;
	configs[33]-=  486;
	configs[34]-=  162;
	configs[35]-=   54;
	bb.mover.u4s[1]^=0x780000;
	bb.empty.u4s[1]^=0x400000;
}

void FlipFunctionBBBlack1485() {
	configs[ 6]+= 1431;
	configs[15]+=  162;
	configs[16]+=   54;
	configs[17]+=   18;
	configs[22]+= 1458;
	configs[23]+= 1458;
	configs[24]+= 1458;
	configs[33]+=  486;
	configs[34]+=  162;
	configs[35]+=   54;
	bb.mover.u4s[1]^=0x780000;
	bb.empty.u4s[1]^=0x400000;
}

void FlipFunctionBBWhite1486() {
	configs[ 6]-= 1449;
	configs[14]-=  486;
	configs[15]-=  162;
	configs[16]-=   54;
	configs[17]-=   18;
	configs[21]-= 1458;
	configs[22]-= 1458;
	configs[23]-= 1458;
	configs[24]-= 1458;
	configs[33]-=  486;
	configs[34]-=  162;
	configs[35]-=   54;
	configs[36]-=   18;
	bb.mover.u4s[1]^=0x7C0000;
	bb.empty.u4s[1]^=0x400000;
}

void FlipFunctionBBBlack1486() {
	configs[ 6]+= 1449;
	configs[14]+=  486;
	configs[15]+=  162;
	configs[16]+=   54;
	configs[17]+=   18;
	configs[21]+= 1458;
	configs[22]+= 1458;
	configs[23]+= 1458;
	configs[24]+= 1458;
	configs[33]+=  486;
	configs[34]+=  162;
	configs[35]+=   54;
	configs[36]+=   18;
	bb.mover.u4s[1]^=0x7C0000;
	bb.empty.u4s[1]^=0x400000;
}

void FlipFunctionBBWhite1487() {
	configs[ 6]-= 1455;
	configs[13]-= 1458;
	configs[14]-=  486;
	configs[15]-=  162;
	configs[16]-=   54;
	configs[17]-=   18;
	configs[20]-= 1458;
	configs[21]-= 1458;
	configs[22]-= 1458;
	configs[23]-= 1458;
	configs[24]-= 1458;
	configs[33]-=  486;
	configs[34]-=  162;
	configs[35]-=   54;
	configs[36]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x7E0000;
	bb.empty.u4s[1]^=0x400000;
}

void FlipFunctionBBBlack1487() {
	configs[ 6]+= 1455;
	configs[13]+= 1458;
	configs[14]+=  486;
	configs[15]+=  162;
	configs[16]+=   54;
	configs[17]+=   18;
	configs[20]+= 1458;
	configs[21]+= 1458;
	configs[22]+= 1458;
	configs[23]+= 1458;
	configs[24]+= 1458;
	configs[33]+=  486;
	configs[34]+=  162;
	configs[35]+=   54;
	configs[36]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x7E0000;
	bb.empty.u4s[1]^=0x400000;
}

void FlipFunctionBBWhite1488() {
	configs[18]-=    3;
}

void FlipFunctionBBBlack1488() {
	configs[18]+=    3;
}

void FlipFunctionBBWhite1489() {
	configs[25]-=  729;
}

void FlipFunctionBBBlack1489() {
	configs[25]+=  729;
}

void FlipFunctionBBWhite1490() {
	configs[ 5]-= 1458;
	configs[17]-=    6;
	configs[25]-= 1215;
	configs[31]-=  486;
	bb.mover.u4s[1]^=0x4000;
}

void FlipFunctionBBBlack1490() {
	configs[ 5]+= 1458;
	configs[17]+=    6;
	configs[25]+= 1215;
	configs[31]+=  486;
	bb.mover.u4s[1]^=0x4000;
}

void FlipFunctionBBWhite1491() {
	configs[ 4]-= 1458;
	configs[ 5]-= 1458;
	configs[16]-=    6;
	configs[17]-=    6;
	configs[25]-= 1377;
	configs[30]-=  162;
	configs[31]-=  486;
	bb.mover.u4s[1]^=0x4040;
}

void FlipFunctionBBBlack1491() {
	configs[ 4]+= 1458;
	configs[ 5]+= 1458;
	configs[16]+=    6;
	configs[17]+=    6;
	configs[25]+= 1377;
	configs[30]+=  162;
	configs[31]+=  486;
	bb.mover.u4s[1]^=0x4040;
}

void FlipFunctionBBWhite1492() {
	configs[ 3]-= 1458;
	configs[ 4]-= 1458;
	configs[ 5]-= 1458;
	configs[15]-=    6;
	configs[16]-=    6;
	configs[17]-=    6;
	configs[25]-= 1431;
	configs[29]-=   54;
	configs[30]-=  162;
	configs[31]-=  486;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x4040;
}

void FlipFunctionBBBlack1492() {
	configs[ 3]+= 1458;
	configs[ 4]+= 1458;
	configs[ 5]+= 1458;
	configs[15]+=    6;
	configs[16]+=    6;
	configs[17]+=    6;
	configs[25]+= 1431;
	configs[29]+=   54;
	configs[30]+=  162;
	configs[31]+=  486;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x4040;
}

void FlipFunctionBBWhite1493() {
	configs[ 2]-= 1458;
	configs[ 3]-= 1458;
	configs[ 4]-= 1458;
	configs[ 5]-= 1458;
	configs[14]-=    6;
	configs[15]-=    6;
	configs[16]-=    6;
	configs[17]-=    6;
	configs[25]-= 1449;
	configs[28]-=   18;
	configs[29]-=   54;
	configs[30]-=  162;
	configs[31]-=  486;
	bb.mover.u4s[0]^=0x40400000;
	bb.mover.u4s[1]^=0x4040;
}

void FlipFunctionBBBlack1493() {
	configs[ 2]+= 1458;
	configs[ 3]+= 1458;
	configs[ 4]+= 1458;
	configs[ 5]+= 1458;
	configs[14]+=    6;
	configs[15]+=    6;
	configs[16]+=    6;
	configs[17]+=    6;
	configs[25]+= 1449;
	configs[28]+=   18;
	configs[29]+=   54;
	configs[30]+=  162;
	configs[31]+=  486;
	bb.mover.u4s[0]^=0x40400000;
	bb.mover.u4s[1]^=0x4040;
}

void FlipFunctionBBWhite1494() {
	configs[ 1]-= 1458;
	configs[ 2]-= 1458;
	configs[ 3]-= 1458;
	configs[ 4]-= 1458;
	configs[ 5]-= 1458;
	configs[13]-=    6;
	configs[14]-=    6;
	configs[15]-=    6;
	configs[16]-=    6;
	configs[17]-=    6;
	configs[25]-= 1455;
	configs[27]-=    6;
	configs[28]-=   18;
	configs[29]-=   54;
	configs[30]-=  162;
	configs[31]-=  486;
	bb.mover.u4s[0]^=0x40404000;
	bb.mover.u4s[1]^=0x4040;
}

void FlipFunctionBBBlack1494() {
	configs[ 1]+= 1458;
	configs[ 2]+= 1458;
	configs[ 3]+= 1458;
	configs[ 4]+= 1458;
	configs[ 5]+= 1458;
	configs[13]+=    6;
	configs[14]+=    6;
	configs[15]+=    6;
	configs[16]+=    6;
	configs[17]+=    6;
	configs[25]+= 1455;
	configs[27]+=    6;
	configs[28]+=   18;
	configs[29]+=   54;
	configs[30]+=  162;
	configs[31]+=  486;
	bb.mover.u4s[0]^=0x40404000;
	bb.mover.u4s[1]^=0x4040;
}

void FlipFunctionBBWhite1495() {
	configs[32]-=  729;
}

void FlipFunctionBBBlack1495() {
	configs[32]+=  729;
}

void FlipFunctionBBWhite1496() {
	configs[ 5]-=  486;
	configs[16]-=   18;
	configs[24]-=  486;
	configs[32]-= 1215;
	bb.mover.u4s[1]^=0x2000;
}

void FlipFunctionBBBlack1496() {
	configs[ 5]+=  486;
	configs[16]+=   18;
	configs[24]+=  486;
	configs[32]+= 1215;
	bb.mover.u4s[1]^=0x2000;
}

void FlipFunctionBBWhite1497() {
	configs[ 4]-=  162;
	configs[ 5]-=  486;
	configs[14]-=   54;
	configs[16]-=   18;
	configs[23]-=  162;
	configs[24]-=  486;
	configs[32]-= 1377;
	bb.mover.u4s[1]^=0x2010;
}

void FlipFunctionBBBlack1497() {
	configs[ 4]+=  162;
	configs[ 5]+=  486;
	configs[14]+=   54;
	configs[16]+=   18;
	configs[23]+=  162;
	configs[24]+=  486;
	configs[32]+= 1377;
	bb.mover.u4s[1]^=0x2010;
}

void FlipFunctionBBWhite1498() {
	configs[ 3]-=   54;
	configs[ 4]-=  162;
	configs[ 5]-=  486;
	configs[12]-=   54;
	configs[14]-=   54;
	configs[16]-=   18;
	configs[22]-=   54;
	configs[23]-=  162;
	configs[24]-=  486;
	configs[32]-= 1431;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x2010;
}

void FlipFunctionBBBlack1498() {
	configs[ 3]+=   54;
	configs[ 4]+=  162;
	configs[ 5]+=  486;
	configs[12]+=   54;
	configs[14]+=   54;
	configs[16]+=   18;
	configs[22]+=   54;
	configs[23]+=  162;
	configs[24]+=  486;
	configs[32]+= 1431;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x2010;
}

void FlipFunctionBBWhite1499() {
	configs[ 2]-=   18;
	configs[ 3]-=   54;
	configs[ 4]-=  162;
	configs[ 5]-=  486;
	configs[10]-=   18;
	configs[12]-=   54;
	configs[14]-=   54;
	configs[16]-=   18;
	configs[21]-=   18;
	configs[22]-=   54;
	configs[23]-=  162;
	configs[24]-=  486;
	configs[32]-= 1449;
	bb.mover.u4s[0]^=0x8040000;
	bb.mover.u4s[1]^=0x2010;
}

void FlipFunctionBBBlack1499() {
	configs[ 2]+=   18;
	configs[ 3]+=   54;
	configs[ 4]+=  162;
	configs[ 5]+=  486;
	configs[10]+=   18;
	configs[12]+=   54;
	configs[14]+=   54;
	configs[16]+=   18;
	configs[21]+=   18;
	configs[22]+=   54;
	configs[23]+=  162;
	configs[24]+=  486;
	configs[32]+= 1449;
	bb.mover.u4s[0]^=0x8040000;
	bb.mover.u4s[1]^=0x2010;
}

void FlipFunctionBBWhite1500() {
	configs[ 1]-=    6;
	configs[ 2]-=   18;
	configs[ 3]-=   54;
	configs[ 4]-=  162;
	configs[ 5]-=  486;
	configs[ 8]-=    6;
	configs[10]-=   18;
	configs[12]-=   54;
	configs[14]-=   54;
	configs[16]-=   18;
	configs[20]-=    6;
	configs[21]-=   18;
	configs[22]-=   54;
	configs[23]-=  162;
	configs[24]-=  486;
	configs[32]-= 1455;
	bb.mover.u4s[0]^=0x8040200;
	bb.mover.u4s[1]^=0x2010;
}

void FlipFunctionBBBlack1500() {
	configs[ 1]+=    6;
	configs[ 2]+=   18;
	configs[ 3]+=   54;
	configs[ 4]+=  162;
	configs[ 5]+=  486;
	configs[ 8]+=    6;
	configs[10]+=   18;
	configs[12]+=   54;
	configs[14]+=   54;
	configs[16]+=   18;
	configs[20]+=    6;
	configs[21]+=   18;
	configs[22]+=   54;
	configs[23]+=  162;
	configs[24]+=  486;
	configs[32]+= 1455;
	bb.mover.u4s[0]^=0x8040200;
	bb.mover.u4s[1]^=0x2010;
}

void FlipFunctionBBWhite1501() {
	configs[ 6]-= 2187;
	bb.mover.u4s[1]^=0x800000;
	bb.empty.u4s[1]^=0x800000;
}

void FlipFunctionBBBlack1501() {
	configs[ 6]+= 2187;
	bb.mover.u4s[1]^=0x800000;
	bb.empty.u4s[1]^=0x800000;
}

void FlipFunctionBBWhite1502() {
	configs[ 6]-= 3645;
	configs[18]-=    6;
	configs[25]-= 1458;
	configs[32]-= 1458;
	bb.mover.u4s[1]^=0xC00000;
	bb.empty.u4s[1]^=0x800000;
}

void FlipFunctionBBBlack1502() {
	configs[ 6]+= 3645;
	configs[18]+=    6;
	configs[25]+= 1458;
	configs[32]+= 1458;
	bb.mover.u4s[1]^=0xC00000;
	bb.empty.u4s[1]^=0x800000;
}

void FlipFunctionBBWhite1503() {
	configs[ 6]-= 4131;
	configs[17]-=   18;
	configs[18]-=    6;
	configs[24]-= 1458;
	configs[25]-= 1458;
	configs[32]-= 1458;
	configs[33]-=  486;
	bb.mover.u4s[1]^=0xE00000;
	bb.empty.u4s[1]^=0x800000;
}

void FlipFunctionBBBlack1503() {
	configs[ 6]+= 4131;
	configs[17]+=   18;
	configs[18]+=    6;
	configs[24]+= 1458;
	configs[25]+= 1458;
	configs[32]+= 1458;
	configs[33]+=  486;
	bb.mover.u4s[1]^=0xE00000;
	bb.empty.u4s[1]^=0x800000;
}

void FlipFunctionBBWhite1504() {
	configs[ 6]-= 4293;
	configs[16]-=   54;
	configs[17]-=   18;
	configs[18]-=    6;
	configs[23]-= 1458;
	configs[24]-= 1458;
	configs[25]-= 1458;
	configs[32]-= 1458;
	configs[33]-=  486;
	configs[34]-=  162;
	bb.mover.u4s[1]^=0xF00000;
	bb.empty.u4s[1]^=0x800000;
}

void FlipFunctionBBBlack1504() {
	configs[ 6]+= 4293;
	configs[16]+=   54;
	configs[17]+=   18;
	configs[18]+=    6;
	configs[23]+= 1458;
	configs[24]+= 1458;
	configs[25]+= 1458;
	configs[32]+= 1458;
	configs[33]+=  486;
	configs[34]+=  162;
	bb.mover.u4s[1]^=0xF00000;
	bb.empty.u4s[1]^=0x800000;
}

void FlipFunctionBBWhite1505() {
	configs[ 6]-= 4347;
	configs[15]-=  162;
	configs[16]-=   54;
	configs[17]-=   18;
	configs[18]-=    6;
	configs[22]-= 1458;
	configs[23]-= 1458;
	configs[24]-= 1458;
	configs[25]-= 1458;
	configs[32]-= 1458;
	configs[33]-=  486;
	configs[34]-=  162;
	configs[35]-=   54;
	bb.mover.u4s[1]^=0xF80000;
	bb.empty.u4s[1]^=0x800000;
}

void FlipFunctionBBBlack1505() {
	configs[ 6]+= 4347;
	configs[15]+=  162;
	configs[16]+=   54;
	configs[17]+=   18;
	configs[18]+=    6;
	configs[22]+= 1458;
	configs[23]+= 1458;
	configs[24]+= 1458;
	configs[25]+= 1458;
	configs[32]+= 1458;
	configs[33]+=  486;
	configs[34]+=  162;
	configs[35]+=   54;
	bb.mover.u4s[1]^=0xF80000;
	bb.empty.u4s[1]^=0x800000;
}

void FlipFunctionBBWhite1506() {
	configs[ 6]-= 4365;
	configs[14]-=  486;
	configs[15]-=  162;
	configs[16]-=   54;
	configs[17]-=   18;
	configs[18]-=    6;
	configs[21]-= 1458;
	configs[22]-= 1458;
	configs[23]-= 1458;
	configs[24]-= 1458;
	configs[25]-= 1458;
	configs[32]-= 1458;
	configs[33]-=  486;
	configs[34]-=  162;
	configs[35]-=   54;
	configs[36]-=   18;
	bb.mover.u4s[1]^=0xFC0000;
	bb.empty.u4s[1]^=0x800000;
}

void FlipFunctionBBBlack1506() {
	configs[ 6]+= 4365;
	configs[14]+=  486;
	configs[15]+=  162;
	configs[16]+=   54;
	configs[17]+=   18;
	configs[18]+=    6;
	configs[21]+= 1458;
	configs[22]+= 1458;
	configs[23]+= 1458;
	configs[24]+= 1458;
	configs[25]+= 1458;
	configs[32]+= 1458;
	configs[33]+=  486;
	configs[34]+=  162;
	configs[35]+=   54;
	configs[36]+=   18;
	bb.mover.u4s[1]^=0xFC0000;
	bb.empty.u4s[1]^=0x800000;
}

void FlipFunctionBBWhite1507() {
	configs[ 6]-= 4371;
	configs[13]-= 1458;
	configs[14]-=  486;
	configs[15]-=  162;
	configs[16]-=   54;
	configs[17]-=   18;
	configs[18]-=    6;
	configs[20]-= 1458;
	configs[21]-= 1458;
	configs[22]-= 1458;
	configs[23]-= 1458;
	configs[24]-= 1458;
	configs[25]-= 1458;
	configs[32]-= 1458;
	configs[33]-=  486;
	configs[34]-=  162;
	configs[35]-=   54;
	configs[36]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0xFE0000;
	bb.empty.u4s[1]^=0x800000;
}

void FlipFunctionBBBlack1507() {
	configs[ 6]+= 4371;
	configs[13]+= 1458;
	configs[14]+=  486;
	configs[15]+=  162;
	configs[16]+=   54;
	configs[17]+=   18;
	configs[18]+=    6;
	configs[20]+= 1458;
	configs[21]+= 1458;
	configs[22]+= 1458;
	configs[23]+= 1458;
	configs[24]+= 1458;
	configs[25]+= 1458;
	configs[32]+= 1458;
	configs[33]+=  486;
	configs[34]+=  162;
	configs[35]+=   54;
	configs[36]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0xFE0000;
	bb.empty.u4s[1]^=0x800000;
}

void FlipFunctionBBWhite1508() {
	configs[26]-=  729;
}

void FlipFunctionBBBlack1508() {
	configs[26]+=  729;
}

void FlipFunctionBBWhite1509() {
	configs[ 5]-= 4374;
	configs[18]-=    2;
	configs[26]-= 1215;
	configs[30]-=  486;
	bb.mover.u4s[1]^=0x8000;
}

void FlipFunctionBBBlack1509() {
	configs[ 5]+= 4374;
	configs[18]+=    2;
	configs[26]+= 1215;
	configs[30]+=  486;
	bb.mover.u4s[1]^=0x8000;
}

void FlipFunctionBBWhite1510() {
	configs[ 4]-= 4374;
	configs[ 5]-= 4374;
	configs[17]-=    2;
	configs[18]-=    2;
	configs[26]-= 1377;
	configs[29]-=  162;
	configs[30]-=  486;
	bb.mover.u4s[1]^=0x8080;
}

void FlipFunctionBBBlack1510() {
	configs[ 4]+= 4374;
	configs[ 5]+= 4374;
	configs[17]+=    2;
	configs[18]+=    2;
	configs[26]+= 1377;
	configs[29]+=  162;
	configs[30]+=  486;
	bb.mover.u4s[1]^=0x8080;
}

void FlipFunctionBBWhite1511() {
	configs[ 3]-= 4374;
	configs[ 4]-= 4374;
	configs[ 5]-= 4374;
	configs[16]-=    2;
	configs[17]-=    2;
	configs[18]-=    2;
	configs[26]-= 1431;
	configs[28]-=   54;
	configs[29]-=  162;
	configs[30]-=  486;
	bb.mover.u4s[0]^=0x80000000;
	bb.mover.u4s[1]^=0x8080;
}

void FlipFunctionBBBlack1511() {
	configs[ 3]+= 4374;
	configs[ 4]+= 4374;
	configs[ 5]+= 4374;
	configs[16]+=    2;
	configs[17]+=    2;
	configs[18]+=    2;
	configs[26]+= 1431;
	configs[28]+=   54;
	configs[29]+=  162;
	configs[30]+=  486;
	bb.mover.u4s[0]^=0x80000000;
	bb.mover.u4s[1]^=0x8080;
}

void FlipFunctionBBWhite1512() {
	configs[ 2]-= 4374;
	configs[ 3]-= 4374;
	configs[ 4]-= 4374;
	configs[ 5]-= 4374;
	configs[15]-=    2;
	configs[16]-=    2;
	configs[17]-=    2;
	configs[18]-=    2;
	configs[26]-= 1449;
	configs[27]-=   18;
	configs[28]-=   54;
	configs[29]-=  162;
	configs[30]-=  486;
	bb.mover.u4s[0]^=0x80800000;
	bb.mover.u4s[1]^=0x8080;
}

void FlipFunctionBBBlack1512() {
	configs[ 2]+= 4374;
	configs[ 3]+= 4374;
	configs[ 4]+= 4374;
	configs[ 5]+= 4374;
	configs[15]+=    2;
	configs[16]+=    2;
	configs[17]+=    2;
	configs[18]+=    2;
	configs[26]+= 1449;
	configs[27]+=   18;
	configs[28]+=   54;
	configs[29]+=  162;
	configs[30]+=  486;
	bb.mover.u4s[0]^=0x80800000;
	bb.mover.u4s[1]^=0x8080;
}

void FlipFunctionBBWhite1513() {
	configs[ 1]-= 4374;
	configs[ 2]-= 4374;
	configs[ 3]-= 4374;
	configs[ 4]-= 4374;
	configs[ 5]-= 4374;
	configs[14]-=    2;
	configs[15]-=    2;
	configs[16]-=    2;
	configs[17]-=    2;
	configs[18]-=    2;
	configs[26]-= 1455;
	configs[27]-=   18;
	configs[28]-=   54;
	configs[29]-=  162;
	configs[30]-=  486;
	bb.mover.u4s[0]^=0x80808000;
	bb.mover.u4s[1]^=0x8080;
}

void FlipFunctionBBBlack1513() {
	configs[ 1]+= 4374;
	configs[ 2]+= 4374;
	configs[ 3]+= 4374;
	configs[ 4]+= 4374;
	configs[ 5]+= 4374;
	configs[14]+=    2;
	configs[15]+=    2;
	configs[16]+=    2;
	configs[17]+=    2;
	configs[18]+=    2;
	configs[26]+= 1455;
	configs[27]+=   18;
	configs[28]+=   54;
	configs[29]+=  162;
	configs[30]+=  486;
	bb.mover.u4s[0]^=0x80808000;
	bb.mover.u4s[1]^=0x8080;
}

void FlipFunctionBBWhite1514() {
	configs[31]-=  729;
}

void FlipFunctionBBBlack1514() {
	configs[31]+=  729;
}

void FlipFunctionBBWhite1515() {
	configs[ 5]-= 1458;
	configs[17]-=    6;
	configs[25]-=  486;
	configs[31]-= 1215;
	bb.mover.u4s[1]^=0x4000;
}

void FlipFunctionBBBlack1515() {
	configs[ 5]+= 1458;
	configs[17]+=    6;
	configs[25]+=  486;
	configs[31]+= 1215;
	bb.mover.u4s[1]^=0x4000;
}

void FlipFunctionBBWhite1516() {
	configs[ 4]-=  486;
	configs[ 5]-= 1458;
	configs[15]-=   18;
	configs[17]-=    6;
	configs[24]-=  162;
	configs[25]-=  486;
	configs[31]-= 1377;
	bb.mover.u4s[1]^=0x4020;
}

void FlipFunctionBBBlack1516() {
	configs[ 4]+=  486;
	configs[ 5]+= 1458;
	configs[15]+=   18;
	configs[17]+=    6;
	configs[24]+=  162;
	configs[25]+=  486;
	configs[31]+= 1377;
	bb.mover.u4s[1]^=0x4020;
}

void FlipFunctionBBWhite1517() {
	configs[ 3]-=  162;
	configs[ 4]-=  486;
	configs[ 5]-= 1458;
	configs[13]-=   54;
	configs[15]-=   18;
	configs[17]-=    6;
	configs[23]-=   54;
	configs[24]-=  162;
	configs[25]-=  486;
	configs[31]-= 1431;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x4020;
}

void FlipFunctionBBBlack1517() {
	configs[ 3]+=  162;
	configs[ 4]+=  486;
	configs[ 5]+= 1458;
	configs[13]+=   54;
	configs[15]+=   18;
	configs[17]+=    6;
	configs[23]+=   54;
	configs[24]+=  162;
	configs[25]+=  486;
	configs[31]+= 1431;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x4020;
}

void FlipFunctionBBWhite1518() {
	configs[ 2]-=   54;
	configs[ 3]-=  162;
	configs[ 4]-=  486;
	configs[ 5]-= 1458;
	configs[11]-=   18;
	configs[13]-=   54;
	configs[15]-=   18;
	configs[17]-=    6;
	configs[22]-=   18;
	configs[23]-=   54;
	configs[24]-=  162;
	configs[25]-=  486;
	configs[31]-= 1449;
	bb.mover.u4s[0]^=0x10080000;
	bb.mover.u4s[1]^=0x4020;
}

void FlipFunctionBBBlack1518() {
	configs[ 2]+=   54;
	configs[ 3]+=  162;
	configs[ 4]+=  486;
	configs[ 5]+= 1458;
	configs[11]+=   18;
	configs[13]+=   54;
	configs[15]+=   18;
	configs[17]+=    6;
	configs[22]+=   18;
	configs[23]+=   54;
	configs[24]+=  162;
	configs[25]+=  486;
	configs[31]+= 1449;
	bb.mover.u4s[0]^=0x10080000;
	bb.mover.u4s[1]^=0x4020;
}

void FlipFunctionBBWhite1519() {
	configs[ 1]-=   18;
	configs[ 2]-=   54;
	configs[ 3]-=  162;
	configs[ 4]-=  486;
	configs[ 5]-= 1458;
	configs[ 9]-=    6;
	configs[11]-=   18;
	configs[13]-=   54;
	configs[15]-=   18;
	configs[17]-=    6;
	configs[21]-=    6;
	configs[22]-=   18;
	configs[23]-=   54;
	configs[24]-=  162;
	configs[25]-=  486;
	configs[31]-= 1455;
	bb.mover.u4s[0]^=0x10080400;
	bb.mover.u4s[1]^=0x4020;
}

void FlipFunctionBBBlack1519() {
	configs[ 1]+=   18;
	configs[ 2]+=   54;
	configs[ 3]+=  162;
	configs[ 4]+=  486;
	configs[ 5]+= 1458;
	configs[ 9]+=    6;
	configs[11]+=   18;
	configs[13]+=   54;
	configs[15]+=   18;
	configs[17]+=    6;
	configs[21]+=    6;
	configs[22]+=   18;
	configs[23]+=   54;
	configs[24]+=  162;
	configs[25]+=  486;
	configs[31]+= 1455;
	bb.mover.u4s[0]^=0x10080400;
	bb.mover.u4s[1]^=0x4020;
}

void FlipFunctionBBWhite1520() {
	configs[ 7]-=    1;
	bb.mover.u4s[1]^=0x1000000;
	bb.empty.u4s[1]^=0x1000000;
}

void FlipFunctionBBBlack1520() {
	configs[ 7]+=    1;
	bb.mover.u4s[1]^=0x1000000;
	bb.empty.u4s[1]^=0x1000000;
}

void FlipFunctionBBWhite1521() {
	configs[ 7]-=    7;
	configs[14]-= 1458;
	configs[20]-= 4374;
	bb.mover.u4s[1]^=0x3000000;
	bb.empty.u4s[1]^=0x1000000;
}

void FlipFunctionBBBlack1521() {
	configs[ 7]+=    7;
	configs[14]+= 1458;
	configs[20]+= 4374;
	bb.mover.u4s[1]^=0x3000000;
	bb.empty.u4s[1]^=0x1000000;
}

void FlipFunctionBBWhite1522() {
	configs[ 7]-=   25;
	configs[14]-= 1458;
	configs[15]-=  486;
	configs[20]-= 4374;
	configs[21]-= 4374;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0x7000000;
	bb.empty.u4s[1]^=0x1000000;
}

void FlipFunctionBBBlack1522() {
	configs[ 7]+=   25;
	configs[14]+= 1458;
	configs[15]+=  486;
	configs[20]+= 4374;
	configs[21]+= 4374;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0x7000000;
	bb.empty.u4s[1]^=0x1000000;
}

void FlipFunctionBBWhite1523() {
	configs[ 7]-=   79;
	configs[14]-= 1458;
	configs[15]-=  486;
	configs[16]-=  162;
	configs[20]-= 4374;
	configs[21]-= 4374;
	configs[22]-= 4374;
	configs[36]-=   54;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0xF000000;
	bb.empty.u4s[1]^=0x1000000;
}

void FlipFunctionBBBlack1523() {
	configs[ 7]+=   79;
	configs[14]+= 1458;
	configs[15]+=  486;
	configs[16]+=  162;
	configs[20]+= 4374;
	configs[21]+= 4374;
	configs[22]+= 4374;
	configs[36]+=   54;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0xF000000;
	bb.empty.u4s[1]^=0x1000000;
}

void FlipFunctionBBWhite1524() {
	configs[ 7]-=  241;
	configs[14]-= 1458;
	configs[15]-=  486;
	configs[16]-=  162;
	configs[17]-=   54;
	configs[20]-= 4374;
	configs[21]-= 4374;
	configs[22]-= 4374;
	configs[23]-= 4374;
	configs[35]-=  162;
	configs[36]-=   54;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0x1F000000;
	bb.empty.u4s[1]^=0x1000000;
}

void FlipFunctionBBBlack1524() {
	configs[ 7]+=  241;
	configs[14]+= 1458;
	configs[15]+=  486;
	configs[16]+=  162;
	configs[17]+=   54;
	configs[20]+= 4374;
	configs[21]+= 4374;
	configs[22]+= 4374;
	configs[23]+= 4374;
	configs[35]+=  162;
	configs[36]+=   54;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0x1F000000;
	bb.empty.u4s[1]^=0x1000000;
}

void FlipFunctionBBWhite1525() {
	configs[ 7]-=  727;
	configs[14]-= 1458;
	configs[15]-=  486;
	configs[16]-=  162;
	configs[17]-=   54;
	configs[18]-=   18;
	configs[20]-= 4374;
	configs[21]-= 4374;
	configs[22]-= 4374;
	configs[23]-= 4374;
	configs[24]-= 4374;
	configs[34]-=  486;
	configs[35]-=  162;
	configs[36]-=   54;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0x3F000000;
	bb.empty.u4s[1]^=0x1000000;
}

void FlipFunctionBBBlack1525() {
	configs[ 7]+=  727;
	configs[14]+= 1458;
	configs[15]+=  486;
	configs[16]+=  162;
	configs[17]+=   54;
	configs[18]+=   18;
	configs[20]+= 4374;
	configs[21]+= 4374;
	configs[22]+= 4374;
	configs[23]+= 4374;
	configs[24]+= 4374;
	configs[34]+=  486;
	configs[35]+=  162;
	configs[36]+=   54;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0x3F000000;
	bb.empty.u4s[1]^=0x1000000;
}

void FlipFunctionBBWhite1526() {
	configs[ 7]-= 2185;
	configs[14]-= 1458;
	configs[15]-=  486;
	configs[16]-=  162;
	configs[17]-=   54;
	configs[18]-=   18;
	configs[20]-= 4374;
	configs[21]-= 4374;
	configs[22]-= 4374;
	configs[23]-= 4374;
	configs[24]-= 4374;
	configs[25]-= 4374;
	configs[33]-= 1458;
	configs[34]-=  486;
	configs[35]-=  162;
	configs[36]-=   54;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0x7F000000;
	bb.empty.u4s[1]^=0x1000000;
}

void FlipFunctionBBBlack1526() {
	configs[ 7]+= 2185;
	configs[14]+= 1458;
	configs[15]+=  486;
	configs[16]+=  162;
	configs[17]+=   54;
	configs[18]+=   18;
	configs[20]+= 4374;
	configs[21]+= 4374;
	configs[22]+= 4374;
	configs[23]+= 4374;
	configs[24]+= 4374;
	configs[25]+= 4374;
	configs[33]+= 1458;
	configs[34]+=  486;
	configs[35]+=  162;
	configs[36]+=   54;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0x7F000000;
	bb.empty.u4s[1]^=0x1000000;
}

void FlipFunctionBBWhite1527() {
	configs[13]-= 2187;
}

void FlipFunctionBBBlack1527() {
	configs[13]+= 2187;
}

void FlipFunctionBBWhite1528() {
	configs[ 6]-=    6;
	configs[13]-= 3645;
	configs[20]-= 1458;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x20000;
}

void FlipFunctionBBBlack1528() {
	configs[ 6]+=    6;
	configs[13]+= 3645;
	configs[20]+= 1458;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x20000;
}

void FlipFunctionBBWhite1529() {
	configs[ 5]-=   18;
	configs[ 6]-=    6;
	configs[13]-= 4131;
	configs[20]-= 1458;
	configs[21]-=  486;
	configs[35]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x20400;
}

void FlipFunctionBBBlack1529() {
	configs[ 5]+=   18;
	configs[ 6]+=    6;
	configs[13]+= 4131;
	configs[20]+= 1458;
	configs[21]+=  486;
	configs[35]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x20400;
}

void FlipFunctionBBWhite1530() {
	configs[ 4]-=   54;
	configs[ 5]-=   18;
	configs[ 6]-=    6;
	configs[13]-= 4293;
	configs[20]-= 1458;
	configs[21]-=  486;
	configs[22]-=  162;
	configs[33]-=   54;
	configs[35]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x20408;
}

void FlipFunctionBBBlack1530() {
	configs[ 4]+=   54;
	configs[ 5]+=   18;
	configs[ 6]+=    6;
	configs[13]+= 4293;
	configs[20]+= 1458;
	configs[21]+=  486;
	configs[22]+=  162;
	configs[33]+=   54;
	configs[35]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x20408;
}

void FlipFunctionBBWhite1531() {
	configs[ 3]-=  162;
	configs[ 4]-=   54;
	configs[ 5]-=   18;
	configs[ 6]-=    6;
	configs[13]-= 4347;
	configs[20]-= 1458;
	configs[21]-=  486;
	configs[22]-=  162;
	configs[23]-=   54;
	configs[31]-=   54;
	configs[33]-=   54;
	configs[35]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x20408;
}

void FlipFunctionBBBlack1531() {
	configs[ 3]+=  162;
	configs[ 4]+=   54;
	configs[ 5]+=   18;
	configs[ 6]+=    6;
	configs[13]+= 4347;
	configs[20]+= 1458;
	configs[21]+=  486;
	configs[22]+=  162;
	configs[23]+=   54;
	configs[31]+=   54;
	configs[33]+=   54;
	configs[35]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x20408;
}

void FlipFunctionBBWhite1532() {
	configs[ 2]-=  486;
	configs[ 3]-=  162;
	configs[ 4]-=   54;
	configs[ 5]-=   18;
	configs[ 6]-=    6;
	configs[13]-= 4365;
	configs[20]-= 1458;
	configs[21]-=  486;
	configs[22]-=  162;
	configs[23]-=   54;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[31]-=   54;
	configs[33]-=   54;
	configs[35]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[0]^=0x10200000;
	bb.mover.u4s[1]^=0x20408;
}

void FlipFunctionBBBlack1532() {
	configs[ 2]+=  486;
	configs[ 3]+=  162;
	configs[ 4]+=   54;
	configs[ 5]+=   18;
	configs[ 6]+=    6;
	configs[13]+= 4365;
	configs[20]+= 1458;
	configs[21]+=  486;
	configs[22]+=  162;
	configs[23]+=   54;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[31]+=   54;
	configs[33]+=   54;
	configs[35]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[0]^=0x10200000;
	bb.mover.u4s[1]^=0x20408;
}

void FlipFunctionBBWhite1533() {
	configs[ 1]-= 1458;
	configs[ 2]-=  486;
	configs[ 3]-=  162;
	configs[ 4]-=   54;
	configs[ 5]-=   18;
	configs[ 6]-=    6;
	configs[13]-= 4371;
	configs[20]-= 1458;
	configs[21]-=  486;
	configs[22]-=  162;
	configs[23]-=   54;
	configs[24]-=   18;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[29]-=   18;
	configs[31]-=   54;
	configs[33]-=   54;
	configs[35]-=   18;
	configs[37]-=    6;
	bb.mover.u4s[0]^=0x10204000;
	bb.mover.u4s[1]^=0x20408;
}

void FlipFunctionBBBlack1533() {
	configs[ 1]+= 1458;
	configs[ 2]+=  486;
	configs[ 3]+=  162;
	configs[ 4]+=   54;
	configs[ 5]+=   18;
	configs[ 6]+=    6;
	configs[13]+= 4371;
	configs[20]+= 1458;
	configs[21]+=  486;
	configs[22]+=  162;
	configs[23]+=   54;
	configs[24]+=   18;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[29]+=   18;
	configs[31]+=   54;
	configs[33]+=   54;
	configs[35]+=   18;
	configs[37]+=    6;
	bb.mover.u4s[0]^=0x10204000;
	bb.mover.u4s[1]^=0x20408;
}

void FlipFunctionBBWhite1534() {
	configs[19]-= 2187;
}

void FlipFunctionBBBlack1534() {
	configs[19]+= 2187;
}

void FlipFunctionBBWhite1535() {
	configs[ 6]-=    2;
	configs[12]-= 1458;
	configs[19]-= 3645;
	bb.mover.u4s[1]^=0x10000;
}

void FlipFunctionBBBlack1535() {
	configs[ 6]+=    2;
	configs[12]+= 1458;
	configs[19]+= 3645;
	bb.mover.u4s[1]^=0x10000;
}

void FlipFunctionBBWhite1536() {
	configs[ 5]-=    2;
	configs[ 6]-=    2;
	configs[11]-=  486;
	configs[12]-= 1458;
	configs[19]-= 4131;
	configs[37]-=    2;
	bb.mover.u4s[1]^=0x10100;
}

void FlipFunctionBBBlack1536() {
	configs[ 5]+=    2;
	configs[ 6]+=    2;
	configs[11]+=  486;
	configs[12]+= 1458;
	configs[19]+= 4131;
	configs[37]+=    2;
	bb.mover.u4s[1]^=0x10100;
}

void FlipFunctionBBWhite1537() {
	configs[ 4]-=    2;
	configs[ 5]-=    2;
	configs[ 6]-=    2;
	configs[10]-=  162;
	configs[11]-=  486;
	configs[12]-= 1458;
	configs[19]-= 4293;
	configs[36]-=    2;
	configs[37]-=    2;
	bb.mover.u4s[1]^=0x10101;
}

void FlipFunctionBBBlack1537() {
	configs[ 4]+=    2;
	configs[ 5]+=    2;
	configs[ 6]+=    2;
	configs[10]+=  162;
	configs[11]+=  486;
	configs[12]+= 1458;
	configs[19]+= 4293;
	configs[36]+=    2;
	configs[37]+=    2;
	bb.mover.u4s[1]^=0x10101;
}

void FlipFunctionBBWhite1538() {
	configs[ 3]-=    2;
	configs[ 4]-=    2;
	configs[ 5]-=    2;
	configs[ 6]-=    2;
	configs[ 9]-=   54;
	configs[10]-=  162;
	configs[11]-=  486;
	configs[12]-= 1458;
	configs[19]-= 4347;
	configs[35]-=    2;
	configs[36]-=    2;
	configs[37]-=    2;
	bb.mover.u4s[0]^=0x1000000;
	bb.mover.u4s[1]^=0x10101;
}

void FlipFunctionBBBlack1538() {
	configs[ 3]+=    2;
	configs[ 4]+=    2;
	configs[ 5]+=    2;
	configs[ 6]+=    2;
	configs[ 9]+=   54;
	configs[10]+=  162;
	configs[11]+=  486;
	configs[12]+= 1458;
	configs[19]+= 4347;
	configs[35]+=    2;
	configs[36]+=    2;
	configs[37]+=    2;
	bb.mover.u4s[0]^=0x1000000;
	bb.mover.u4s[1]^=0x10101;
}

void FlipFunctionBBWhite1539() {
	configs[ 2]-=    2;
	configs[ 3]-=    2;
	configs[ 4]-=    2;
	configs[ 5]-=    2;
	configs[ 6]-=    2;
	configs[ 8]-=   18;
	configs[ 9]-=   54;
	configs[10]-=  162;
	configs[11]-=  486;
	configs[12]-= 1458;
	configs[19]-= 4365;
	configs[34]-=    2;
	configs[35]-=    2;
	configs[36]-=    2;
	configs[37]-=    2;
	bb.mover.u4s[0]^=0x1010000;
	bb.mover.u4s[1]^=0x10101;
}

void FlipFunctionBBBlack1539() {
	configs[ 2]+=    2;
	configs[ 3]+=    2;
	configs[ 4]+=    2;
	configs[ 5]+=    2;
	configs[ 6]+=    2;
	configs[ 8]+=   18;
	configs[ 9]+=   54;
	configs[10]+=  162;
	configs[11]+=  486;
	configs[12]+= 1458;
	configs[19]+= 4365;
	configs[34]+=    2;
	configs[35]+=    2;
	configs[36]+=    2;
	configs[37]+=    2;
	bb.mover.u4s[0]^=0x1010000;
	bb.mover.u4s[1]^=0x10101;
}

void FlipFunctionBBWhite1540() {
	configs[ 1]-=    2;
	configs[ 2]-=    2;
	configs[ 3]-=    2;
	configs[ 4]-=    2;
	configs[ 5]-=    2;
	configs[ 6]-=    2;
	configs[ 8]-=   18;
	configs[ 9]-=   54;
	configs[10]-=  162;
	configs[11]-=  486;
	configs[12]-= 1458;
	configs[19]-= 4371;
	configs[33]-=    2;
	configs[34]-=    2;
	configs[35]-=    2;
	configs[36]-=    2;
	configs[37]-=    2;
	bb.mover.u4s[0]^=0x1010100;
	bb.mover.u4s[1]^=0x10101;
}

void FlipFunctionBBBlack1540() {
	configs[ 1]+=    2;
	configs[ 2]+=    2;
	configs[ 3]+=    2;
	configs[ 4]+=    2;
	configs[ 5]+=    2;
	configs[ 6]+=    2;
	configs[ 8]+=   18;
	configs[ 9]+=   54;
	configs[10]+=  162;
	configs[11]+=  486;
	configs[12]+= 1458;
	configs[19]+= 4371;
	configs[33]+=    2;
	configs[34]+=    2;
	configs[35]+=    2;
	configs[36]+=    2;
	configs[37]+=    2;
	bb.mover.u4s[0]^=0x1010100;
	bb.mover.u4s[1]^=0x10101;
}

void FlipFunctionBBWhite1541() {
	configs[ 7]-=    3;
	bb.mover.u4s[1]^=0x2000000;
	bb.empty.u4s[1]^=0x2000000;
}

void FlipFunctionBBBlack1541() {
	configs[ 7]+=    3;
	bb.mover.u4s[1]^=0x2000000;
	bb.empty.u4s[1]^=0x2000000;
}

void FlipFunctionBBWhite1542() {
	configs[ 7]-=   21;
	configs[15]-=  486;
	configs[21]-= 4374;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0x6000000;
	bb.empty.u4s[1]^=0x2000000;
}

void FlipFunctionBBBlack1542() {
	configs[ 7]+=   21;
	configs[15]+=  486;
	configs[21]+= 4374;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0x6000000;
	bb.empty.u4s[1]^=0x2000000;
}

void FlipFunctionBBWhite1543() {
	configs[ 7]-=   75;
	configs[15]-=  486;
	configs[16]-=  162;
	configs[21]-= 4374;
	configs[22]-= 4374;
	configs[36]-=   54;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0xE000000;
	bb.empty.u4s[1]^=0x2000000;
}

void FlipFunctionBBBlack1543() {
	configs[ 7]+=   75;
	configs[15]+=  486;
	configs[16]+=  162;
	configs[21]+= 4374;
	configs[22]+= 4374;
	configs[36]+=   54;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0xE000000;
	bb.empty.u4s[1]^=0x2000000;
}

void FlipFunctionBBWhite1544() {
	configs[ 7]-=  237;
	configs[15]-=  486;
	configs[16]-=  162;
	configs[17]-=   54;
	configs[21]-= 4374;
	configs[22]-= 4374;
	configs[23]-= 4374;
	configs[35]-=  162;
	configs[36]-=   54;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0x1E000000;
	bb.empty.u4s[1]^=0x2000000;
}

void FlipFunctionBBBlack1544() {
	configs[ 7]+=  237;
	configs[15]+=  486;
	configs[16]+=  162;
	configs[17]+=   54;
	configs[21]+= 4374;
	configs[22]+= 4374;
	configs[23]+= 4374;
	configs[35]+=  162;
	configs[36]+=   54;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0x1E000000;
	bb.empty.u4s[1]^=0x2000000;
}

void FlipFunctionBBWhite1545() {
	configs[ 7]-=  723;
	configs[15]-=  486;
	configs[16]-=  162;
	configs[17]-=   54;
	configs[18]-=   18;
	configs[21]-= 4374;
	configs[22]-= 4374;
	configs[23]-= 4374;
	configs[24]-= 4374;
	configs[34]-=  486;
	configs[35]-=  162;
	configs[36]-=   54;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0x3E000000;
	bb.empty.u4s[1]^=0x2000000;
}

void FlipFunctionBBBlack1545() {
	configs[ 7]+=  723;
	configs[15]+=  486;
	configs[16]+=  162;
	configs[17]+=   54;
	configs[18]+=   18;
	configs[21]+= 4374;
	configs[22]+= 4374;
	configs[23]+= 4374;
	configs[24]+= 4374;
	configs[34]+=  486;
	configs[35]+=  162;
	configs[36]+=   54;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0x3E000000;
	bb.empty.u4s[1]^=0x2000000;
}

void FlipFunctionBBWhite1546() {
	configs[ 7]-= 2181;
	configs[15]-=  486;
	configs[16]-=  162;
	configs[17]-=   54;
	configs[18]-=   18;
	configs[21]-= 4374;
	configs[22]-= 4374;
	configs[23]-= 4374;
	configs[24]-= 4374;
	configs[25]-= 4374;
	configs[33]-= 1458;
	configs[34]-=  486;
	configs[35]-=  162;
	configs[36]-=   54;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0x7E000000;
	bb.empty.u4s[1]^=0x2000000;
}

void FlipFunctionBBBlack1546() {
	configs[ 7]+= 2181;
	configs[15]+=  486;
	configs[16]+=  162;
	configs[17]+=   54;
	configs[18]+=   18;
	configs[21]+= 4374;
	configs[22]+= 4374;
	configs[23]+= 4374;
	configs[24]+= 4374;
	configs[25]+= 4374;
	configs[33]+= 1458;
	configs[34]+=  486;
	configs[35]+=  162;
	configs[36]+=   54;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0x7E000000;
	bb.empty.u4s[1]^=0x2000000;
}

void FlipFunctionBBWhite1547() {
	configs[14]-=  729;
}

void FlipFunctionBBBlack1547() {
	configs[14]+=  729;
}

void FlipFunctionBBWhite1548() {
	configs[ 6]-=   18;
	configs[14]-= 1215;
	configs[21]-= 1458;
	configs[36]-=   18;
	bb.mover.u4s[1]^=0x40000;
}

void FlipFunctionBBBlack1548() {
	configs[ 6]+=   18;
	configs[14]+= 1215;
	configs[21]+= 1458;
	configs[36]+=   18;
	bb.mover.u4s[1]^=0x40000;
}

void FlipFunctionBBWhite1549() {
	configs[ 5]-=   54;
	configs[ 6]-=   18;
	configs[14]-= 1377;
	configs[21]-= 1458;
	configs[22]-=  486;
	configs[34]-=   54;
	configs[36]-=   18;
	bb.mover.u4s[1]^=0x40800;
}

void FlipFunctionBBBlack1549() {
	configs[ 5]+=   54;
	configs[ 6]+=   18;
	configs[14]+= 1377;
	configs[21]+= 1458;
	configs[22]+=  486;
	configs[34]+=   54;
	configs[36]+=   18;
	bb.mover.u4s[1]^=0x40800;
}

void FlipFunctionBBWhite1550() {
	configs[ 4]-=  162;
	configs[ 5]-=   54;
	configs[ 6]-=   18;
	configs[14]-= 1431;
	configs[21]-= 1458;
	configs[22]-=  486;
	configs[23]-=  162;
	configs[32]-=  162;
	configs[34]-=   54;
	configs[36]-=   18;
	bb.mover.u4s[1]^=0x40810;
}

void FlipFunctionBBBlack1550() {
	configs[ 4]+=  162;
	configs[ 5]+=   54;
	configs[ 6]+=   18;
	configs[14]+= 1431;
	configs[21]+= 1458;
	configs[22]+=  486;
	configs[23]+=  162;
	configs[32]+=  162;
	configs[34]+=   54;
	configs[36]+=   18;
	bb.mover.u4s[1]^=0x40810;
}

void FlipFunctionBBWhite1551() {
	configs[ 3]-=  486;
	configs[ 4]-=  162;
	configs[ 5]-=   54;
	configs[ 6]-=   18;
	configs[14]-= 1449;
	configs[21]-= 1458;
	configs[22]-=  486;
	configs[23]-=  162;
	configs[24]-=   54;
	configs[30]-=   54;
	configs[32]-=  162;
	configs[34]-=   54;
	configs[36]-=   18;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x40810;
}

void FlipFunctionBBBlack1551() {
	configs[ 3]+=  486;
	configs[ 4]+=  162;
	configs[ 5]+=   54;
	configs[ 6]+=   18;
	configs[14]+= 1449;
	configs[21]+= 1458;
	configs[22]+=  486;
	configs[23]+=  162;
	configs[24]+=   54;
	configs[30]+=   54;
	configs[32]+=  162;
	configs[34]+=   54;
	configs[36]+=   18;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x40810;
}

void FlipFunctionBBWhite1552() {
	configs[ 2]-= 1458;
	configs[ 3]-=  486;
	configs[ 4]-=  162;
	configs[ 5]-=   54;
	configs[ 6]-=   18;
	configs[14]-= 1455;
	configs[21]-= 1458;
	configs[22]-=  486;
	configs[23]-=  162;
	configs[24]-=   54;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[30]-=   54;
	configs[32]-=  162;
	configs[34]-=   54;
	configs[36]-=   18;
	bb.mover.u4s[0]^=0x20400000;
	bb.mover.u4s[1]^=0x40810;
}

void FlipFunctionBBBlack1552() {
	configs[ 2]+= 1458;
	configs[ 3]+=  486;
	configs[ 4]+=  162;
	configs[ 5]+=   54;
	configs[ 6]+=   18;
	configs[14]+= 1455;
	configs[21]+= 1458;
	configs[22]+=  486;
	configs[23]+=  162;
	configs[24]+=   54;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[30]+=   54;
	configs[32]+=  162;
	configs[34]+=   54;
	configs[36]+=   18;
	bb.mover.u4s[0]^=0x20400000;
	bb.mover.u4s[1]^=0x40810;
}

void FlipFunctionBBWhite1553() {
	configs[20]-= 2187;
}

void FlipFunctionBBBlack1553() {
	configs[20]+= 2187;
}

void FlipFunctionBBWhite1554() {
	configs[ 6]-=    6;
	configs[13]-= 1458;
	configs[20]-= 3645;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x20000;
}

void FlipFunctionBBBlack1554() {
	configs[ 6]+=    6;
	configs[13]+= 1458;
	configs[20]+= 3645;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x20000;
}

void FlipFunctionBBWhite1555() {
	configs[ 5]-=    6;
	configs[ 6]-=    6;
	configs[12]-=  486;
	configs[13]-= 1458;
	configs[20]-= 4131;
	configs[36]-=    6;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x20200;
}

void FlipFunctionBBBlack1555() {
	configs[ 5]+=    6;
	configs[ 6]+=    6;
	configs[12]+=  486;
	configs[13]+= 1458;
	configs[20]+= 4131;
	configs[36]+=    6;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x20200;
}

void FlipFunctionBBWhite1556() {
	configs[ 4]-=    6;
	configs[ 5]-=    6;
	configs[ 6]-=    6;
	configs[11]-=  162;
	configs[12]-=  486;
	configs[13]-= 1458;
	configs[20]-= 4293;
	configs[35]-=    6;
	configs[36]-=    6;
	configs[37]-=    6;
	bb.mover.u4s[1]^=0x20202;
}

void FlipFunctionBBBlack1556() {
	configs[ 4]+=    6;
	configs[ 5]+=    6;
	configs[ 6]+=    6;
	configs[11]+=  162;
	configs[12]+=  486;
	configs[13]+= 1458;
	configs[20]+= 4293;
	configs[35]+=    6;
	configs[36]+=    6;
	configs[37]+=    6;
	bb.mover.u4s[1]^=0x20202;
}

void FlipFunctionBBWhite1557() {
	configs[ 3]-=    6;
	configs[ 4]-=    6;
	configs[ 5]-=    6;
	configs[ 6]-=    6;
	configs[10]-=   54;
	configs[11]-=  162;
	configs[12]-=  486;
	configs[13]-= 1458;
	configs[20]-= 4347;
	configs[34]-=    6;
	configs[35]-=    6;
	configs[36]-=    6;
	configs[37]-=    6;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x20202;
}

void FlipFunctionBBBlack1557() {
	configs[ 3]+=    6;
	configs[ 4]+=    6;
	configs[ 5]+=    6;
	configs[ 6]+=    6;
	configs[10]+=   54;
	configs[11]+=  162;
	configs[12]+=  486;
	configs[13]+= 1458;
	configs[20]+= 4347;
	configs[34]+=    6;
	configs[35]+=    6;
	configs[36]+=    6;
	configs[37]+=    6;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x20202;
}

void FlipFunctionBBWhite1558() {
	configs[ 2]-=    6;
	configs[ 3]-=    6;
	configs[ 4]-=    6;
	configs[ 5]-=    6;
	configs[ 6]-=    6;
	configs[ 9]-=   18;
	configs[10]-=   54;
	configs[11]-=  162;
	configs[12]-=  486;
	configs[13]-= 1458;
	configs[20]-= 4365;
	configs[33]-=    6;
	configs[34]-=    6;
	configs[35]-=    6;
	configs[36]-=    6;
	configs[37]-=    6;
	bb.mover.u4s[0]^=0x2020000;
	bb.mover.u4s[1]^=0x20202;
}

void FlipFunctionBBBlack1558() {
	configs[ 2]+=    6;
	configs[ 3]+=    6;
	configs[ 4]+=    6;
	configs[ 5]+=    6;
	configs[ 6]+=    6;
	configs[ 9]+=   18;
	configs[10]+=   54;
	configs[11]+=  162;
	configs[12]+=  486;
	configs[13]+= 1458;
	configs[20]+= 4365;
	configs[33]+=    6;
	configs[34]+=    6;
	configs[35]+=    6;
	configs[36]+=    6;
	configs[37]+=    6;
	bb.mover.u4s[0]^=0x2020000;
	bb.mover.u4s[1]^=0x20202;
}

void FlipFunctionBBWhite1559() {
	configs[ 1]-=    6;
	configs[ 2]-=    6;
	configs[ 3]-=    6;
	configs[ 4]-=    6;
	configs[ 5]-=    6;
	configs[ 6]-=    6;
	configs[ 8]-=    6;
	configs[ 9]-=   18;
	configs[10]-=   54;
	configs[11]-=  162;
	configs[12]-=  486;
	configs[13]-= 1458;
	configs[20]-= 4371;
	configs[32]-=    6;
	configs[33]-=    6;
	configs[34]-=    6;
	configs[35]-=    6;
	configs[36]-=    6;
	configs[37]-=    6;
	bb.mover.u4s[0]^=0x2020200;
	bb.mover.u4s[1]^=0x20202;
}

void FlipFunctionBBBlack1559() {
	configs[ 1]+=    6;
	configs[ 2]+=    6;
	configs[ 3]+=    6;
	configs[ 4]+=    6;
	configs[ 5]+=    6;
	configs[ 6]+=    6;
	configs[ 8]+=    6;
	configs[ 9]+=   18;
	configs[10]+=   54;
	configs[11]+=  162;
	configs[12]+=  486;
	configs[13]+= 1458;
	configs[20]+= 4371;
	configs[32]+=    6;
	configs[33]+=    6;
	configs[34]+=    6;
	configs[35]+=    6;
	configs[36]+=    6;
	configs[37]+=    6;
	bb.mover.u4s[0]^=0x2020200;
	bb.mover.u4s[1]^=0x20202;
}

void FlipFunctionBBWhite1560() {
	configs[ 7]-=    9;
	bb.mover.u4s[1]^=0x4000000;
	bb.empty.u4s[1]^=0x4000000;
}

void FlipFunctionBBBlack1560() {
	configs[ 7]+=    9;
	bb.mover.u4s[1]^=0x4000000;
	bb.empty.u4s[1]^=0x4000000;
}

void FlipFunctionBBWhite1561() {
	configs[ 7]-=   63;
	configs[16]-=  162;
	configs[22]-= 4374;
	configs[36]-=   54;
	bb.mover.u4s[1]^=0xC000000;
	bb.empty.u4s[1]^=0x4000000;
}

void FlipFunctionBBBlack1561() {
	configs[ 7]+=   63;
	configs[16]+=  162;
	configs[22]+= 4374;
	configs[36]+=   54;
	bb.mover.u4s[1]^=0xC000000;
	bb.empty.u4s[1]^=0x4000000;
}

void FlipFunctionBBWhite1562() {
	configs[ 7]-=  225;
	configs[16]-=  162;
	configs[17]-=   54;
	configs[22]-= 4374;
	configs[23]-= 4374;
	configs[35]-=  162;
	configs[36]-=   54;
	bb.mover.u4s[1]^=0x1C000000;
	bb.empty.u4s[1]^=0x4000000;
}

void FlipFunctionBBBlack1562() {
	configs[ 7]+=  225;
	configs[16]+=  162;
	configs[17]+=   54;
	configs[22]+= 4374;
	configs[23]+= 4374;
	configs[35]+=  162;
	configs[36]+=   54;
	bb.mover.u4s[1]^=0x1C000000;
	bb.empty.u4s[1]^=0x4000000;
}

void FlipFunctionBBWhite1563() {
	configs[ 7]-=  711;
	configs[16]-=  162;
	configs[17]-=   54;
	configs[18]-=   18;
	configs[22]-= 4374;
	configs[23]-= 4374;
	configs[24]-= 4374;
	configs[34]-=  486;
	configs[35]-=  162;
	configs[36]-=   54;
	bb.mover.u4s[1]^=0x3C000000;
	bb.empty.u4s[1]^=0x4000000;
}

void FlipFunctionBBBlack1563() {
	configs[ 7]+=  711;
	configs[16]+=  162;
	configs[17]+=   54;
	configs[18]+=   18;
	configs[22]+= 4374;
	configs[23]+= 4374;
	configs[24]+= 4374;
	configs[34]+=  486;
	configs[35]+=  162;
	configs[36]+=   54;
	bb.mover.u4s[1]^=0x3C000000;
	bb.empty.u4s[1]^=0x4000000;
}

void FlipFunctionBBWhite1564() {
	configs[ 7]-= 2169;
	configs[16]-=  162;
	configs[17]-=   54;
	configs[18]-=   18;
	configs[22]-= 4374;
	configs[23]-= 4374;
	configs[24]-= 4374;
	configs[25]-= 4374;
	configs[33]-= 1458;
	configs[34]-=  486;
	configs[35]-=  162;
	configs[36]-=   54;
	bb.mover.u4s[1]^=0x7C000000;
	bb.empty.u4s[1]^=0x4000000;
}

void FlipFunctionBBBlack1564() {
	configs[ 7]+= 2169;
	configs[16]+=  162;
	configs[17]+=   54;
	configs[18]+=   18;
	configs[22]+= 4374;
	configs[23]+= 4374;
	configs[24]+= 4374;
	configs[25]+= 4374;
	configs[33]+= 1458;
	configs[34]+=  486;
	configs[35]+=  162;
	configs[36]+=   54;
	bb.mover.u4s[1]^=0x7C000000;
	bb.empty.u4s[1]^=0x4000000;
}

void FlipFunctionBBWhite1565() {
	configs[ 7]-=   15;
	configs[14]-= 1458;
	configs[20]-= 4374;
	bb.mover.u4s[1]^=0x6000000;
	bb.empty.u4s[1]^=0x4000000;
}

void FlipFunctionBBBlack1565() {
	configs[ 7]+=   15;
	configs[14]+= 1458;
	configs[20]+= 4374;
	bb.mover.u4s[1]^=0x6000000;
	bb.empty.u4s[1]^=0x4000000;
}

void FlipFunctionBBWhite1566() {
	configs[ 7]-=   69;
	configs[14]-= 1458;
	configs[16]-=  162;
	configs[20]-= 4374;
	configs[22]-= 4374;
	configs[36]-=   54;
	bb.mover.u4s[1]^=0xE000000;
	bb.empty.u4s[1]^=0x4000000;
}

void FlipFunctionBBBlack1566() {
	configs[ 7]+=   69;
	configs[14]+= 1458;
	configs[16]+=  162;
	configs[20]+= 4374;
	configs[22]+= 4374;
	configs[36]+=   54;
	bb.mover.u4s[1]^=0xE000000;
	bb.empty.u4s[1]^=0x4000000;
}

void FlipFunctionBBWhite1567() {
	configs[ 7]-=  231;
	configs[14]-= 1458;
	configs[16]-=  162;
	configs[17]-=   54;
	configs[20]-= 4374;
	configs[22]-= 4374;
	configs[23]-= 4374;
	configs[35]-=  162;
	configs[36]-=   54;
	bb.mover.u4s[1]^=0x1E000000;
	bb.empty.u4s[1]^=0x4000000;
}

void FlipFunctionBBBlack1567() {
	configs[ 7]+=  231;
	configs[14]+= 1458;
	configs[16]+=  162;
	configs[17]+=   54;
	configs[20]+= 4374;
	configs[22]+= 4374;
	configs[23]+= 4374;
	configs[35]+=  162;
	configs[36]+=   54;
	bb.mover.u4s[1]^=0x1E000000;
	bb.empty.u4s[1]^=0x4000000;
}

void FlipFunctionBBWhite1568() {
	configs[ 7]-=  717;
	configs[14]-= 1458;
	configs[16]-=  162;
	configs[17]-=   54;
	configs[18]-=   18;
	configs[20]-= 4374;
	configs[22]-= 4374;
	configs[23]-= 4374;
	configs[24]-= 4374;
	configs[34]-=  486;
	configs[35]-=  162;
	configs[36]-=   54;
	bb.mover.u4s[1]^=0x3E000000;
	bb.empty.u4s[1]^=0x4000000;
}

void FlipFunctionBBBlack1568() {
	configs[ 7]+=  717;
	configs[14]+= 1458;
	configs[16]+=  162;
	configs[17]+=   54;
	configs[18]+=   18;
	configs[20]+= 4374;
	configs[22]+= 4374;
	configs[23]+= 4374;
	configs[24]+= 4374;
	configs[34]+=  486;
	configs[35]+=  162;
	configs[36]+=   54;
	bb.mover.u4s[1]^=0x3E000000;
	bb.empty.u4s[1]^=0x4000000;
}

void FlipFunctionBBWhite1569() {
	configs[ 7]-= 2175;
	configs[14]-= 1458;
	configs[16]-=  162;
	configs[17]-=   54;
	configs[18]-=   18;
	configs[20]-= 4374;
	configs[22]-= 4374;
	configs[23]-= 4374;
	configs[24]-= 4374;
	configs[25]-= 4374;
	configs[33]-= 1458;
	configs[34]-=  486;
	configs[35]-=  162;
	configs[36]-=   54;
	bb.mover.u4s[1]^=0x7E000000;
	bb.empty.u4s[1]^=0x4000000;
}

void FlipFunctionBBBlack1569() {
	configs[ 7]+= 2175;
	configs[14]+= 1458;
	configs[16]+=  162;
	configs[17]+=   54;
	configs[18]+=   18;
	configs[20]+= 4374;
	configs[22]+= 4374;
	configs[23]+= 4374;
	configs[24]+= 4374;
	configs[25]+= 4374;
	configs[33]+= 1458;
	configs[34]+=  486;
	configs[35]+=  162;
	configs[36]+=   54;
	bb.mover.u4s[1]^=0x7E000000;
	bb.empty.u4s[1]^=0x4000000;
}

void FlipFunctionBBWhite1570() {
	configs[15]-=  243;
}

void FlipFunctionBBBlack1570() {
	configs[15]+=  243;
}

void FlipFunctionBBWhite1571() {
	configs[ 6]-=   54;
	configs[15]-=  405;
	configs[22]-= 1458;
	configs[35]-=   54;
	bb.mover.u4s[1]^=0x80000;
}

void FlipFunctionBBBlack1571() {
	configs[ 6]+=   54;
	configs[15]+=  405;
	configs[22]+= 1458;
	configs[35]+=   54;
	bb.mover.u4s[1]^=0x80000;
}

void FlipFunctionBBWhite1572() {
	configs[ 5]-=  162;
	configs[ 6]-=   54;
	configs[15]-=  459;
	configs[22]-= 1458;
	configs[23]-=  486;
	configs[33]-=  162;
	configs[35]-=   54;
	bb.mover.u4s[1]^=0x81000;
}

void FlipFunctionBBBlack1572() {
	configs[ 5]+=  162;
	configs[ 6]+=   54;
	configs[15]+=  459;
	configs[22]+= 1458;
	configs[23]+=  486;
	configs[33]+=  162;
	configs[35]+=   54;
	bb.mover.u4s[1]^=0x81000;
}

void FlipFunctionBBWhite1573() {
	configs[ 4]-=  486;
	configs[ 5]-=  162;
	configs[ 6]-=   54;
	configs[15]-=  477;
	configs[22]-= 1458;
	configs[23]-=  486;
	configs[24]-=  162;
	configs[31]-=  162;
	configs[33]-=  162;
	configs[35]-=   54;
	bb.mover.u4s[1]^=0x81020;
}

void FlipFunctionBBBlack1573() {
	configs[ 4]+=  486;
	configs[ 5]+=  162;
	configs[ 6]+=   54;
	configs[15]+=  477;
	configs[22]+= 1458;
	configs[23]+=  486;
	configs[24]+=  162;
	configs[31]+=  162;
	configs[33]+=  162;
	configs[35]+=   54;
	bb.mover.u4s[1]^=0x81020;
}

void FlipFunctionBBWhite1574() {
	configs[ 3]-= 1458;
	configs[ 4]-=  486;
	configs[ 5]-=  162;
	configs[ 6]-=   54;
	configs[15]-=  483;
	configs[22]-= 1458;
	configs[23]-=  486;
	configs[24]-=  162;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[31]-=  162;
	configs[33]-=  162;
	configs[35]-=   54;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x81020;
}

void FlipFunctionBBBlack1574() {
	configs[ 3]+= 1458;
	configs[ 4]+=  486;
	configs[ 5]+=  162;
	configs[ 6]+=   54;
	configs[15]+=  483;
	configs[22]+= 1458;
	configs[23]+=  486;
	configs[24]+=  162;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[31]+=  162;
	configs[33]+=  162;
	configs[35]+=   54;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x81020;
}

void FlipFunctionBBWhite1575() {
	configs[21]-= 2187;
}

void FlipFunctionBBBlack1575() {
	configs[21]+= 2187;
}

void FlipFunctionBBWhite1576() {
	configs[ 6]-=   18;
	configs[14]-=  486;
	configs[21]-= 3645;
	configs[36]-=   18;
	bb.mover.u4s[1]^=0x40000;
}

void FlipFunctionBBBlack1576() {
	configs[ 6]+=   18;
	configs[14]+=  486;
	configs[21]+= 3645;
	configs[36]+=   18;
	bb.mover.u4s[1]^=0x40000;
}

void FlipFunctionBBWhite1577() {
	configs[ 5]-=   18;
	configs[ 6]-=   18;
	configs[13]-=  486;
	configs[14]-=  486;
	configs[21]-= 4131;
	configs[35]-=   18;
	configs[36]-=   18;
	bb.mover.u4s[1]^=0x40400;
}

void FlipFunctionBBBlack1577() {
	configs[ 5]+=   18;
	configs[ 6]+=   18;
	configs[13]+=  486;
	configs[14]+=  486;
	configs[21]+= 4131;
	configs[35]+=   18;
	configs[36]+=   18;
	bb.mover.u4s[1]^=0x40400;
}

void FlipFunctionBBWhite1578() {
	configs[ 4]-=   18;
	configs[ 5]-=   18;
	configs[ 6]-=   18;
	configs[12]-=  162;
	configs[13]-=  486;
	configs[14]-=  486;
	configs[21]-= 4293;
	configs[34]-=   18;
	configs[35]-=   18;
	configs[36]-=   18;
	bb.mover.u4s[1]^=0x40404;
}

void FlipFunctionBBBlack1578() {
	configs[ 4]+=   18;
	configs[ 5]+=   18;
	configs[ 6]+=   18;
	configs[12]+=  162;
	configs[13]+=  486;
	configs[14]+=  486;
	configs[21]+= 4293;
	configs[34]+=   18;
	configs[35]+=   18;
	configs[36]+=   18;
	bb.mover.u4s[1]^=0x40404;
}

void FlipFunctionBBWhite1579() {
	configs[ 3]-=   18;
	configs[ 4]-=   18;
	configs[ 5]-=   18;
	configs[ 6]-=   18;
	configs[11]-=   54;
	configs[12]-=  162;
	configs[13]-=  486;
	configs[14]-=  486;
	configs[21]-= 4347;
	configs[33]-=   18;
	configs[34]-=   18;
	configs[35]-=   18;
	configs[36]-=   18;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x40404;
}

void FlipFunctionBBBlack1579() {
	configs[ 3]+=   18;
	configs[ 4]+=   18;
	configs[ 5]+=   18;
	configs[ 6]+=   18;
	configs[11]+=   54;
	configs[12]+=  162;
	configs[13]+=  486;
	configs[14]+=  486;
	configs[21]+= 4347;
	configs[33]+=   18;
	configs[34]+=   18;
	configs[35]+=   18;
	configs[36]+=   18;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x40404;
}

void FlipFunctionBBWhite1580() {
	configs[ 2]-=   18;
	configs[ 3]-=   18;
	configs[ 4]-=   18;
	configs[ 5]-=   18;
	configs[ 6]-=   18;
	configs[10]-=   18;
	configs[11]-=   54;
	configs[12]-=  162;
	configs[13]-=  486;
	configs[14]-=  486;
	configs[21]-= 4365;
	configs[32]-=   18;
	configs[33]-=   18;
	configs[34]-=   18;
	configs[35]-=   18;
	configs[36]-=   18;
	bb.mover.u4s[0]^=0x4040000;
	bb.mover.u4s[1]^=0x40404;
}

void FlipFunctionBBBlack1580() {
	configs[ 2]+=   18;
	configs[ 3]+=   18;
	configs[ 4]+=   18;
	configs[ 5]+=   18;
	configs[ 6]+=   18;
	configs[10]+=   18;
	configs[11]+=   54;
	configs[12]+=  162;
	configs[13]+=  486;
	configs[14]+=  486;
	configs[21]+= 4365;
	configs[32]+=   18;
	configs[33]+=   18;
	configs[34]+=   18;
	configs[35]+=   18;
	configs[36]+=   18;
	bb.mover.u4s[0]^=0x4040000;
	bb.mover.u4s[1]^=0x40404;
}

void FlipFunctionBBWhite1581() {
	configs[ 1]-=   18;
	configs[ 2]-=   18;
	configs[ 3]-=   18;
	configs[ 4]-=   18;
	configs[ 5]-=   18;
	configs[ 6]-=   18;
	configs[ 9]-=    6;
	configs[10]-=   18;
	configs[11]-=   54;
	configs[12]-=  162;
	configs[13]-=  486;
	configs[14]-=  486;
	configs[21]-= 4371;
	configs[31]-=    6;
	configs[32]-=   18;
	configs[33]-=   18;
	configs[34]-=   18;
	configs[35]-=   18;
	configs[36]-=   18;
	bb.mover.u4s[0]^=0x4040400;
	bb.mover.u4s[1]^=0x40404;
}

void FlipFunctionBBBlack1581() {
	configs[ 1]+=   18;
	configs[ 2]+=   18;
	configs[ 3]+=   18;
	configs[ 4]+=   18;
	configs[ 5]+=   18;
	configs[ 6]+=   18;
	configs[ 9]+=    6;
	configs[10]+=   18;
	configs[11]+=   54;
	configs[12]+=  162;
	configs[13]+=  486;
	configs[14]+=  486;
	configs[21]+= 4371;
	configs[31]+=    6;
	configs[32]+=   18;
	configs[33]+=   18;
	configs[34]+=   18;
	configs[35]+=   18;
	configs[36]+=   18;
	bb.mover.u4s[0]^=0x4040400;
	bb.mover.u4s[1]^=0x40404;
}

void FlipFunctionBBWhite1582() {
	configs[37]-=    9;
}

void FlipFunctionBBBlack1582() {
	configs[37]+=    9;
}

void FlipFunctionBBWhite1583() {
	configs[ 6]-=    6;
	configs[13]-= 1458;
	configs[20]-= 1458;
	configs[37]-=   15;
	bb.mover.u4s[1]^=0x20000;
}

void FlipFunctionBBBlack1583() {
	configs[ 6]+=    6;
	configs[13]+= 1458;
	configs[20]+= 1458;
	configs[37]+=   15;
	bb.mover.u4s[1]^=0x20000;
}

void FlipFunctionBBWhite1584() {
	configs[ 7]-=   27;
	bb.mover.u4s[1]^=0x8000000;
	bb.empty.u4s[1]^=0x8000000;
}

void FlipFunctionBBBlack1584() {
	configs[ 7]+=   27;
	bb.mover.u4s[1]^=0x8000000;
	bb.empty.u4s[1]^=0x8000000;
}

void FlipFunctionBBWhite1585() {
	configs[ 7]-=  189;
	configs[17]-=   54;
	configs[23]-= 4374;
	configs[35]-=  162;
	bb.mover.u4s[1]^=0x18000000;
	bb.empty.u4s[1]^=0x8000000;
}

void FlipFunctionBBBlack1585() {
	configs[ 7]+=  189;
	configs[17]+=   54;
	configs[23]+= 4374;
	configs[35]+=  162;
	bb.mover.u4s[1]^=0x18000000;
	bb.empty.u4s[1]^=0x8000000;
}

void FlipFunctionBBWhite1586() {
	configs[ 7]-=  675;
	configs[17]-=   54;
	configs[18]-=   18;
	configs[23]-= 4374;
	configs[24]-= 4374;
	configs[34]-=  486;
	configs[35]-=  162;
	bb.mover.u4s[1]^=0x38000000;
	bb.empty.u4s[1]^=0x8000000;
}

void FlipFunctionBBBlack1586() {
	configs[ 7]+=  675;
	configs[17]+=   54;
	configs[18]+=   18;
	configs[23]+= 4374;
	configs[24]+= 4374;
	configs[34]+=  486;
	configs[35]+=  162;
	bb.mover.u4s[1]^=0x38000000;
	bb.empty.u4s[1]^=0x8000000;
}

void FlipFunctionBBWhite1587() {
	configs[ 7]-= 2133;
	configs[17]-=   54;
	configs[18]-=   18;
	configs[23]-= 4374;
	configs[24]-= 4374;
	configs[25]-= 4374;
	configs[33]-= 1458;
	configs[34]-=  486;
	configs[35]-=  162;
	bb.mover.u4s[1]^=0x78000000;
	bb.empty.u4s[1]^=0x8000000;
}

void FlipFunctionBBBlack1587() {
	configs[ 7]+= 2133;
	configs[17]+=   54;
	configs[18]+=   18;
	configs[23]+= 4374;
	configs[24]+= 4374;
	configs[25]+= 4374;
	configs[33]+= 1458;
	configs[34]+=  486;
	configs[35]+=  162;
	bb.mover.u4s[1]^=0x78000000;
	bb.empty.u4s[1]^=0x8000000;
}

void FlipFunctionBBWhite1588() {
	configs[ 7]-=   45;
	configs[15]-=  486;
	configs[21]-= 4374;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0xC000000;
	bb.empty.u4s[1]^=0x8000000;
}

void FlipFunctionBBBlack1588() {
	configs[ 7]+=   45;
	configs[15]+=  486;
	configs[21]+= 4374;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0xC000000;
	bb.empty.u4s[1]^=0x8000000;
}

void FlipFunctionBBWhite1589() {
	configs[ 7]-=  207;
	configs[15]-=  486;
	configs[17]-=   54;
	configs[21]-= 4374;
	configs[23]-= 4374;
	configs[35]-=  162;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0x1C000000;
	bb.empty.u4s[1]^=0x8000000;
}

void FlipFunctionBBBlack1589() {
	configs[ 7]+=  207;
	configs[15]+=  486;
	configs[17]+=   54;
	configs[21]+= 4374;
	configs[23]+= 4374;
	configs[35]+=  162;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0x1C000000;
	bb.empty.u4s[1]^=0x8000000;
}

void FlipFunctionBBWhite1590() {
	configs[ 7]-=  693;
	configs[15]-=  486;
	configs[17]-=   54;
	configs[18]-=   18;
	configs[21]-= 4374;
	configs[23]-= 4374;
	configs[24]-= 4374;
	configs[34]-=  486;
	configs[35]-=  162;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0x3C000000;
	bb.empty.u4s[1]^=0x8000000;
}

void FlipFunctionBBBlack1590() {
	configs[ 7]+=  693;
	configs[15]+=  486;
	configs[17]+=   54;
	configs[18]+=   18;
	configs[21]+= 4374;
	configs[23]+= 4374;
	configs[24]+= 4374;
	configs[34]+=  486;
	configs[35]+=  162;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0x3C000000;
	bb.empty.u4s[1]^=0x8000000;
}

void FlipFunctionBBWhite1591() {
	configs[ 7]-= 2151;
	configs[15]-=  486;
	configs[17]-=   54;
	configs[18]-=   18;
	configs[21]-= 4374;
	configs[23]-= 4374;
	configs[24]-= 4374;
	configs[25]-= 4374;
	configs[33]-= 1458;
	configs[34]-=  486;
	configs[35]-=  162;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0x7C000000;
	bb.empty.u4s[1]^=0x8000000;
}

void FlipFunctionBBBlack1591() {
	configs[ 7]+= 2151;
	configs[15]+=  486;
	configs[17]+=   54;
	configs[18]+=   18;
	configs[21]+= 4374;
	configs[23]+= 4374;
	configs[24]+= 4374;
	configs[25]+= 4374;
	configs[33]+= 1458;
	configs[34]+=  486;
	configs[35]+=  162;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0x7C000000;
	bb.empty.u4s[1]^=0x8000000;
}

void FlipFunctionBBWhite1592() {
	configs[ 7]-=   51;
	configs[14]-= 1458;
	configs[15]-=  486;
	configs[20]-= 4374;
	configs[21]-= 4374;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0xE000000;
	bb.empty.u4s[1]^=0x8000000;
}

void FlipFunctionBBBlack1592() {
	configs[ 7]+=   51;
	configs[14]+= 1458;
	configs[15]+=  486;
	configs[20]+= 4374;
	configs[21]+= 4374;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0xE000000;
	bb.empty.u4s[1]^=0x8000000;
}

void FlipFunctionBBWhite1593() {
	configs[ 7]-=  213;
	configs[14]-= 1458;
	configs[15]-=  486;
	configs[17]-=   54;
	configs[20]-= 4374;
	configs[21]-= 4374;
	configs[23]-= 4374;
	configs[35]-=  162;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0x1E000000;
	bb.empty.u4s[1]^=0x8000000;
}

void FlipFunctionBBBlack1593() {
	configs[ 7]+=  213;
	configs[14]+= 1458;
	configs[15]+=  486;
	configs[17]+=   54;
	configs[20]+= 4374;
	configs[21]+= 4374;
	configs[23]+= 4374;
	configs[35]+=  162;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0x1E000000;
	bb.empty.u4s[1]^=0x8000000;
}

void FlipFunctionBBWhite1594() {
	configs[ 7]-=  699;
	configs[14]-= 1458;
	configs[15]-=  486;
	configs[17]-=   54;
	configs[18]-=   18;
	configs[20]-= 4374;
	configs[21]-= 4374;
	configs[23]-= 4374;
	configs[24]-= 4374;
	configs[34]-=  486;
	configs[35]-=  162;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0x3E000000;
	bb.empty.u4s[1]^=0x8000000;
}

void FlipFunctionBBBlack1594() {
	configs[ 7]+=  699;
	configs[14]+= 1458;
	configs[15]+=  486;
	configs[17]+=   54;
	configs[18]+=   18;
	configs[20]+= 4374;
	configs[21]+= 4374;
	configs[23]+= 4374;
	configs[24]+= 4374;
	configs[34]+=  486;
	configs[35]+=  162;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0x3E000000;
	bb.empty.u4s[1]^=0x8000000;
}

void FlipFunctionBBWhite1595() {
	configs[ 7]-= 2157;
	configs[14]-= 1458;
	configs[15]-=  486;
	configs[17]-=   54;
	configs[18]-=   18;
	configs[20]-= 4374;
	configs[21]-= 4374;
	configs[23]-= 4374;
	configs[24]-= 4374;
	configs[25]-= 4374;
	configs[33]-= 1458;
	configs[34]-=  486;
	configs[35]-=  162;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0x7E000000;
	bb.empty.u4s[1]^=0x8000000;
}

void FlipFunctionBBBlack1595() {
	configs[ 7]+= 2157;
	configs[14]+= 1458;
	configs[15]+=  486;
	configs[17]+=   54;
	configs[18]+=   18;
	configs[20]+= 4374;
	configs[21]+= 4374;
	configs[23]+= 4374;
	configs[24]+= 4374;
	configs[25]+= 4374;
	configs[33]+= 1458;
	configs[34]+=  486;
	configs[35]+=  162;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0x7E000000;
	bb.empty.u4s[1]^=0x8000000;
}

void FlipFunctionBBWhite1596() {
	configs[16]-=   81;
}

void FlipFunctionBBBlack1596() {
	configs[16]+=   81;
}

void FlipFunctionBBWhite1597() {
	configs[ 6]-=  162;
	configs[16]-=  135;
	configs[23]-= 1458;
	configs[34]-=  162;
	bb.mover.u4s[1]^=0x100000;
}

void FlipFunctionBBBlack1597() {
	configs[ 6]+=  162;
	configs[16]+=  135;
	configs[23]+= 1458;
	configs[34]+=  162;
	bb.mover.u4s[1]^=0x100000;
}

void FlipFunctionBBWhite1598() {
	configs[ 5]-=  486;
	configs[ 6]-=  162;
	configs[16]-=  153;
	configs[23]-= 1458;
	configs[24]-=  486;
	configs[32]-=  486;
	configs[34]-=  162;
	bb.mover.u4s[1]^=0x102000;
}

void FlipFunctionBBBlack1598() {
	configs[ 5]+=  486;
	configs[ 6]+=  162;
	configs[16]+=  153;
	configs[23]+= 1458;
	configs[24]+=  486;
	configs[32]+=  486;
	configs[34]+=  162;
	bb.mover.u4s[1]^=0x102000;
}

void FlipFunctionBBWhite1599() {
	configs[ 4]-= 1458;
	configs[ 5]-=  486;
	configs[ 6]-=  162;
	configs[16]-=  159;
	configs[23]-= 1458;
	configs[24]-=  486;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[32]-=  486;
	configs[34]-=  162;
	bb.mover.u4s[1]^=0x102040;
}

void FlipFunctionBBBlack1599() {
	configs[ 4]+= 1458;
	configs[ 5]+=  486;
	configs[ 6]+=  162;
	configs[16]+=  159;
	configs[23]+= 1458;
	configs[24]+=  486;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[32]+=  486;
	configs[34]+=  162;
	bb.mover.u4s[1]^=0x102040;
}

void FlipFunctionBBWhite1600() {
	configs[22]-= 2187;
}

void FlipFunctionBBBlack1600() {
	configs[22]+= 2187;
}

void FlipFunctionBBWhite1601() {
	configs[ 6]-=   54;
	configs[15]-=  162;
	configs[22]-= 3645;
	configs[35]-=   54;
	bb.mover.u4s[1]^=0x80000;
}

void FlipFunctionBBBlack1601() {
	configs[ 6]+=   54;
	configs[15]+=  162;
	configs[22]+= 3645;
	configs[35]+=   54;
	bb.mover.u4s[1]^=0x80000;
}

void FlipFunctionBBWhite1602() {
	configs[ 5]-=   54;
	configs[ 6]-=   54;
	configs[14]-=  162;
	configs[15]-=  162;
	configs[22]-= 4131;
	configs[34]-=   54;
	configs[35]-=   54;
	bb.mover.u4s[1]^=0x80800;
}

void FlipFunctionBBBlack1602() {
	configs[ 5]+=   54;
	configs[ 6]+=   54;
	configs[14]+=  162;
	configs[15]+=  162;
	configs[22]+= 4131;
	configs[34]+=   54;
	configs[35]+=   54;
	bb.mover.u4s[1]^=0x80800;
}

void FlipFunctionBBWhite1603() {
	configs[ 4]-=   54;
	configs[ 5]-=   54;
	configs[ 6]-=   54;
	configs[13]-=  162;
	configs[14]-=  162;
	configs[15]-=  162;
	configs[22]-= 4293;
	configs[33]-=   54;
	configs[34]-=   54;
	configs[35]-=   54;
	bb.mover.u4s[1]^=0x80808;
}

void FlipFunctionBBBlack1603() {
	configs[ 4]+=   54;
	configs[ 5]+=   54;
	configs[ 6]+=   54;
	configs[13]+=  162;
	configs[14]+=  162;
	configs[15]+=  162;
	configs[22]+= 4293;
	configs[33]+=   54;
	configs[34]+=   54;
	configs[35]+=   54;
	bb.mover.u4s[1]^=0x80808;
}

void FlipFunctionBBWhite1604() {
	configs[ 3]-=   54;
	configs[ 4]-=   54;
	configs[ 5]-=   54;
	configs[ 6]-=   54;
	configs[12]-=   54;
	configs[13]-=  162;
	configs[14]-=  162;
	configs[15]-=  162;
	configs[22]-= 4347;
	configs[32]-=   54;
	configs[33]-=   54;
	configs[34]-=   54;
	configs[35]-=   54;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x80808;
}

void FlipFunctionBBBlack1604() {
	configs[ 3]+=   54;
	configs[ 4]+=   54;
	configs[ 5]+=   54;
	configs[ 6]+=   54;
	configs[12]+=   54;
	configs[13]+=  162;
	configs[14]+=  162;
	configs[15]+=  162;
	configs[22]+= 4347;
	configs[32]+=   54;
	configs[33]+=   54;
	configs[34]+=   54;
	configs[35]+=   54;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x80808;
}

void FlipFunctionBBWhite1605() {
	configs[ 2]-=   54;
	configs[ 3]-=   54;
	configs[ 4]-=   54;
	configs[ 5]-=   54;
	configs[ 6]-=   54;
	configs[11]-=   18;
	configs[12]-=   54;
	configs[13]-=  162;
	configs[14]-=  162;
	configs[15]-=  162;
	configs[22]-= 4365;
	configs[31]-=   18;
	configs[32]-=   54;
	configs[33]-=   54;
	configs[34]-=   54;
	configs[35]-=   54;
	bb.mover.u4s[0]^=0x8080000;
	bb.mover.u4s[1]^=0x80808;
}

void FlipFunctionBBBlack1605() {
	configs[ 2]+=   54;
	configs[ 3]+=   54;
	configs[ 4]+=   54;
	configs[ 5]+=   54;
	configs[ 6]+=   54;
	configs[11]+=   18;
	configs[12]+=   54;
	configs[13]+=  162;
	configs[14]+=  162;
	configs[15]+=  162;
	configs[22]+= 4365;
	configs[31]+=   18;
	configs[32]+=   54;
	configs[33]+=   54;
	configs[34]+=   54;
	configs[35]+=   54;
	bb.mover.u4s[0]^=0x8080000;
	bb.mover.u4s[1]^=0x80808;
}

void FlipFunctionBBWhite1606() {
	configs[ 1]-=   54;
	configs[ 2]-=   54;
	configs[ 3]-=   54;
	configs[ 4]-=   54;
	configs[ 5]-=   54;
	configs[ 6]-=   54;
	configs[10]-=    6;
	configs[11]-=   18;
	configs[12]-=   54;
	configs[13]-=  162;
	configs[14]-=  162;
	configs[15]-=  162;
	configs[22]-= 4371;
	configs[30]-=    6;
	configs[31]-=   18;
	configs[32]-=   54;
	configs[33]-=   54;
	configs[34]-=   54;
	configs[35]-=   54;
	bb.mover.u4s[0]^=0x8080800;
	bb.mover.u4s[1]^=0x80808;
}

void FlipFunctionBBBlack1606() {
	configs[ 1]+=   54;
	configs[ 2]+=   54;
	configs[ 3]+=   54;
	configs[ 4]+=   54;
	configs[ 5]+=   54;
	configs[ 6]+=   54;
	configs[10]+=    6;
	configs[11]+=   18;
	configs[12]+=   54;
	configs[13]+=  162;
	configs[14]+=  162;
	configs[15]+=  162;
	configs[22]+= 4371;
	configs[30]+=    6;
	configs[31]+=   18;
	configs[32]+=   54;
	configs[33]+=   54;
	configs[34]+=   54;
	configs[35]+=   54;
	bb.mover.u4s[0]^=0x8080800;
	bb.mover.u4s[1]^=0x80808;
}

void FlipFunctionBBWhite1607() {
	configs[36]-=   27;
}

void FlipFunctionBBBlack1607() {
	configs[36]+=   27;
}

void FlipFunctionBBWhite1608() {
	configs[ 6]-=   18;
	configs[14]-=  486;
	configs[21]-= 1458;
	configs[36]-=   45;
	bb.mover.u4s[1]^=0x40000;
}

void FlipFunctionBBBlack1608() {
	configs[ 6]+=   18;
	configs[14]+=  486;
	configs[21]+= 1458;
	configs[36]+=   45;
	bb.mover.u4s[1]^=0x40000;
}

void FlipFunctionBBWhite1609() {
	configs[ 5]-=    6;
	configs[ 6]-=   18;
	configs[12]-=  486;
	configs[14]-=  486;
	configs[20]-=  486;
	configs[21]-= 1458;
	configs[36]-=   51;
	bb.mover.u4s[1]^=0x40200;
}

void FlipFunctionBBBlack1609() {
	configs[ 5]+=    6;
	configs[ 6]+=   18;
	configs[12]+=  486;
	configs[14]+=  486;
	configs[20]+=  486;
	configs[21]+= 1458;
	configs[36]+=   51;
	bb.mover.u4s[1]^=0x40200;
}

void FlipFunctionBBWhite1610() {
	configs[ 7]-=   81;
	bb.mover.u4s[1]^=0x10000000;
	bb.empty.u4s[1]^=0x10000000;
}

void FlipFunctionBBBlack1610() {
	configs[ 7]+=   81;
	bb.mover.u4s[1]^=0x10000000;
	bb.empty.u4s[1]^=0x10000000;
}

void FlipFunctionBBWhite1611() {
	configs[ 7]-=  567;
	configs[18]-=   18;
	configs[24]-= 4374;
	configs[34]-=  486;
	bb.mover.u4s[1]^=0x30000000;
	bb.empty.u4s[1]^=0x10000000;
}

void FlipFunctionBBBlack1611() {
	configs[ 7]+=  567;
	configs[18]+=   18;
	configs[24]+= 4374;
	configs[34]+=  486;
	bb.mover.u4s[1]^=0x30000000;
	bb.empty.u4s[1]^=0x10000000;
}

void FlipFunctionBBWhite1612() {
	configs[ 7]-= 2025;
	configs[18]-=   18;
	configs[24]-= 4374;
	configs[25]-= 4374;
	configs[33]-= 1458;
	configs[34]-=  486;
	bb.mover.u4s[1]^=0x70000000;
	bb.empty.u4s[1]^=0x10000000;
}

void FlipFunctionBBBlack1612() {
	configs[ 7]+= 2025;
	configs[18]+=   18;
	configs[24]+= 4374;
	configs[25]+= 4374;
	configs[33]+= 1458;
	configs[34]+=  486;
	bb.mover.u4s[1]^=0x70000000;
	bb.empty.u4s[1]^=0x10000000;
}

void FlipFunctionBBWhite1613() {
	configs[ 7]-=  135;
	configs[16]-=  162;
	configs[22]-= 4374;
	configs[36]-=   54;
	bb.mover.u4s[1]^=0x18000000;
	bb.empty.u4s[1]^=0x10000000;
}

void FlipFunctionBBBlack1613() {
	configs[ 7]+=  135;
	configs[16]+=  162;
	configs[22]+= 4374;
	configs[36]+=   54;
	bb.mover.u4s[1]^=0x18000000;
	bb.empty.u4s[1]^=0x10000000;
}

void FlipFunctionBBWhite1614() {
	configs[ 7]-=  621;
	configs[16]-=  162;
	configs[18]-=   18;
	configs[22]-= 4374;
	configs[24]-= 4374;
	configs[34]-=  486;
	configs[36]-=   54;
	bb.mover.u4s[1]^=0x38000000;
	bb.empty.u4s[1]^=0x10000000;
}

void FlipFunctionBBBlack1614() {
	configs[ 7]+=  621;
	configs[16]+=  162;
	configs[18]+=   18;
	configs[22]+= 4374;
	configs[24]+= 4374;
	configs[34]+=  486;
	configs[36]+=   54;
	bb.mover.u4s[1]^=0x38000000;
	bb.empty.u4s[1]^=0x10000000;
}

void FlipFunctionBBWhite1615() {
	configs[ 7]-= 2079;
	configs[16]-=  162;
	configs[18]-=   18;
	configs[22]-= 4374;
	configs[24]-= 4374;
	configs[25]-= 4374;
	configs[33]-= 1458;
	configs[34]-=  486;
	configs[36]-=   54;
	bb.mover.u4s[1]^=0x78000000;
	bb.empty.u4s[1]^=0x10000000;
}

void FlipFunctionBBBlack1615() {
	configs[ 7]+= 2079;
	configs[16]+=  162;
	configs[18]+=   18;
	configs[22]+= 4374;
	configs[24]+= 4374;
	configs[25]+= 4374;
	configs[33]+= 1458;
	configs[34]+=  486;
	configs[36]+=   54;
	bb.mover.u4s[1]^=0x78000000;
	bb.empty.u4s[1]^=0x10000000;
}

void FlipFunctionBBWhite1616() {
	configs[ 7]-=  153;
	configs[15]-=  486;
	configs[16]-=  162;
	configs[21]-= 4374;
	configs[22]-= 4374;
	configs[36]-=   54;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0x1C000000;
	bb.empty.u4s[1]^=0x10000000;
}

void FlipFunctionBBBlack1616() {
	configs[ 7]+=  153;
	configs[15]+=  486;
	configs[16]+=  162;
	configs[21]+= 4374;
	configs[22]+= 4374;
	configs[36]+=   54;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0x1C000000;
	bb.empty.u4s[1]^=0x10000000;
}

void FlipFunctionBBWhite1617() {
	configs[ 7]-=  639;
	configs[15]-=  486;
	configs[16]-=  162;
	configs[18]-=   18;
	configs[21]-= 4374;
	configs[22]-= 4374;
	configs[24]-= 4374;
	configs[34]-=  486;
	configs[36]-=   54;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0x3C000000;
	bb.empty.u4s[1]^=0x10000000;
}

void FlipFunctionBBBlack1617() {
	configs[ 7]+=  639;
	configs[15]+=  486;
	configs[16]+=  162;
	configs[18]+=   18;
	configs[21]+= 4374;
	configs[22]+= 4374;
	configs[24]+= 4374;
	configs[34]+=  486;
	configs[36]+=   54;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0x3C000000;
	bb.empty.u4s[1]^=0x10000000;
}

void FlipFunctionBBWhite1618() {
	configs[ 7]-= 2097;
	configs[15]-=  486;
	configs[16]-=  162;
	configs[18]-=   18;
	configs[21]-= 4374;
	configs[22]-= 4374;
	configs[24]-= 4374;
	configs[25]-= 4374;
	configs[33]-= 1458;
	configs[34]-=  486;
	configs[36]-=   54;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0x7C000000;
	bb.empty.u4s[1]^=0x10000000;
}

void FlipFunctionBBBlack1618() {
	configs[ 7]+= 2097;
	configs[15]+=  486;
	configs[16]+=  162;
	configs[18]+=   18;
	configs[21]+= 4374;
	configs[22]+= 4374;
	configs[24]+= 4374;
	configs[25]+= 4374;
	configs[33]+= 1458;
	configs[34]+=  486;
	configs[36]+=   54;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0x7C000000;
	bb.empty.u4s[1]^=0x10000000;
}

void FlipFunctionBBWhite1619() {
	configs[ 7]-=  159;
	configs[14]-= 1458;
	configs[15]-=  486;
	configs[16]-=  162;
	configs[20]-= 4374;
	configs[21]-= 4374;
	configs[22]-= 4374;
	configs[36]-=   54;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0x1E000000;
	bb.empty.u4s[1]^=0x10000000;
}

void FlipFunctionBBBlack1619() {
	configs[ 7]+=  159;
	configs[14]+= 1458;
	configs[15]+=  486;
	configs[16]+=  162;
	configs[20]+= 4374;
	configs[21]+= 4374;
	configs[22]+= 4374;
	configs[36]+=   54;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0x1E000000;
	bb.empty.u4s[1]^=0x10000000;
}

void FlipFunctionBBWhite1620() {
	configs[ 7]-=  645;
	configs[14]-= 1458;
	configs[15]-=  486;
	configs[16]-=  162;
	configs[18]-=   18;
	configs[20]-= 4374;
	configs[21]-= 4374;
	configs[22]-= 4374;
	configs[24]-= 4374;
	configs[34]-=  486;
	configs[36]-=   54;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0x3E000000;
	bb.empty.u4s[1]^=0x10000000;
}

void FlipFunctionBBBlack1620() {
	configs[ 7]+=  645;
	configs[14]+= 1458;
	configs[15]+=  486;
	configs[16]+=  162;
	configs[18]+=   18;
	configs[20]+= 4374;
	configs[21]+= 4374;
	configs[22]+= 4374;
	configs[24]+= 4374;
	configs[34]+=  486;
	configs[36]+=   54;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0x3E000000;
	bb.empty.u4s[1]^=0x10000000;
}

void FlipFunctionBBWhite1621() {
	configs[ 7]-= 2103;
	configs[14]-= 1458;
	configs[15]-=  486;
	configs[16]-=  162;
	configs[18]-=   18;
	configs[20]-= 4374;
	configs[21]-= 4374;
	configs[22]-= 4374;
	configs[24]-= 4374;
	configs[25]-= 4374;
	configs[33]-= 1458;
	configs[34]-=  486;
	configs[36]-=   54;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0x7E000000;
	bb.empty.u4s[1]^=0x10000000;
}

void FlipFunctionBBBlack1621() {
	configs[ 7]+= 2103;
	configs[14]+= 1458;
	configs[15]+=  486;
	configs[16]+=  162;
	configs[18]+=   18;
	configs[20]+= 4374;
	configs[21]+= 4374;
	configs[22]+= 4374;
	configs[24]+= 4374;
	configs[25]+= 4374;
	configs[33]+= 1458;
	configs[34]+=  486;
	configs[36]+=   54;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0x7E000000;
	bb.empty.u4s[1]^=0x10000000;
}

void FlipFunctionBBWhite1622() {
	configs[17]-=   27;
}

void FlipFunctionBBBlack1622() {
	configs[17]+=   27;
}

void FlipFunctionBBWhite1623() {
	configs[ 6]-=  486;
	configs[17]-=   45;
	configs[24]-= 1458;
	configs[33]-=  486;
	bb.mover.u4s[1]^=0x200000;
}

void FlipFunctionBBBlack1623() {
	configs[ 6]+=  486;
	configs[17]+=   45;
	configs[24]+= 1458;
	configs[33]+=  486;
	bb.mover.u4s[1]^=0x200000;
}

void FlipFunctionBBWhite1624() {
	configs[ 5]-= 1458;
	configs[ 6]-=  486;
	configs[17]-=   51;
	configs[24]-= 1458;
	configs[25]-=  486;
	configs[31]-=  486;
	configs[33]-=  486;
	bb.mover.u4s[1]^=0x204000;
}

void FlipFunctionBBBlack1624() {
	configs[ 5]+= 1458;
	configs[ 6]+=  486;
	configs[17]+=   51;
	configs[24]+= 1458;
	configs[25]+=  486;
	configs[31]+=  486;
	configs[33]+=  486;
	bb.mover.u4s[1]^=0x204000;
}

void FlipFunctionBBWhite1625() {
	configs[23]-= 2187;
}

void FlipFunctionBBBlack1625() {
	configs[23]+= 2187;
}

void FlipFunctionBBWhite1626() {
	configs[ 6]-=  162;
	configs[16]-=   54;
	configs[23]-= 3645;
	configs[34]-=  162;
	bb.mover.u4s[1]^=0x100000;
}

void FlipFunctionBBBlack1626() {
	configs[ 6]+=  162;
	configs[16]+=   54;
	configs[23]+= 3645;
	configs[34]+=  162;
	bb.mover.u4s[1]^=0x100000;
}

void FlipFunctionBBWhite1627() {
	configs[ 5]-=  162;
	configs[ 6]-=  162;
	configs[15]-=   54;
	configs[16]-=   54;
	configs[23]-= 4131;
	configs[33]-=  162;
	configs[34]-=  162;
	bb.mover.u4s[1]^=0x101000;
}

void FlipFunctionBBBlack1627() {
	configs[ 5]+=  162;
	configs[ 6]+=  162;
	configs[15]+=   54;
	configs[16]+=   54;
	configs[23]+= 4131;
	configs[33]+=  162;
	configs[34]+=  162;
	bb.mover.u4s[1]^=0x101000;
}

void FlipFunctionBBWhite1628() {
	configs[ 4]-=  162;
	configs[ 5]-=  162;
	configs[ 6]-=  162;
	configs[14]-=   54;
	configs[15]-=   54;
	configs[16]-=   54;
	configs[23]-= 4293;
	configs[32]-=  162;
	configs[33]-=  162;
	configs[34]-=  162;
	bb.mover.u4s[1]^=0x101010;
}

void FlipFunctionBBBlack1628() {
	configs[ 4]+=  162;
	configs[ 5]+=  162;
	configs[ 6]+=  162;
	configs[14]+=   54;
	configs[15]+=   54;
	configs[16]+=   54;
	configs[23]+= 4293;
	configs[32]+=  162;
	configs[33]+=  162;
	configs[34]+=  162;
	bb.mover.u4s[1]^=0x101010;
}

void FlipFunctionBBWhite1629() {
	configs[ 3]-=  162;
	configs[ 4]-=  162;
	configs[ 5]-=  162;
	configs[ 6]-=  162;
	configs[13]-=   54;
	configs[14]-=   54;
	configs[15]-=   54;
	configs[16]-=   54;
	configs[23]-= 4347;
	configs[31]-=   54;
	configs[32]-=  162;
	configs[33]-=  162;
	configs[34]-=  162;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x101010;
}

void FlipFunctionBBBlack1629() {
	configs[ 3]+=  162;
	configs[ 4]+=  162;
	configs[ 5]+=  162;
	configs[ 6]+=  162;
	configs[13]+=   54;
	configs[14]+=   54;
	configs[15]+=   54;
	configs[16]+=   54;
	configs[23]+= 4347;
	configs[31]+=   54;
	configs[32]+=  162;
	configs[33]+=  162;
	configs[34]+=  162;
	bb.mover.u4s[0]^=0x10000000;
	bb.mover.u4s[1]^=0x101010;
}

void FlipFunctionBBWhite1630() {
	configs[ 2]-=  162;
	configs[ 3]-=  162;
	configs[ 4]-=  162;
	configs[ 5]-=  162;
	configs[ 6]-=  162;
	configs[12]-=   18;
	configs[13]-=   54;
	configs[14]-=   54;
	configs[15]-=   54;
	configs[16]-=   54;
	configs[23]-= 4365;
	configs[30]-=   18;
	configs[31]-=   54;
	configs[32]-=  162;
	configs[33]-=  162;
	configs[34]-=  162;
	bb.mover.u4s[0]^=0x10100000;
	bb.mover.u4s[1]^=0x101010;
}

void FlipFunctionBBBlack1630() {
	configs[ 2]+=  162;
	configs[ 3]+=  162;
	configs[ 4]+=  162;
	configs[ 5]+=  162;
	configs[ 6]+=  162;
	configs[12]+=   18;
	configs[13]+=   54;
	configs[14]+=   54;
	configs[15]+=   54;
	configs[16]+=   54;
	configs[23]+= 4365;
	configs[30]+=   18;
	configs[31]+=   54;
	configs[32]+=  162;
	configs[33]+=  162;
	configs[34]+=  162;
	bb.mover.u4s[0]^=0x10100000;
	bb.mover.u4s[1]^=0x101010;
}

void FlipFunctionBBWhite1631() {
	configs[ 1]-=  162;
	configs[ 2]-=  162;
	configs[ 3]-=  162;
	configs[ 4]-=  162;
	configs[ 5]-=  162;
	configs[ 6]-=  162;
	configs[11]-=    6;
	configs[12]-=   18;
	configs[13]-=   54;
	configs[14]-=   54;
	configs[15]-=   54;
	configs[16]-=   54;
	configs[23]-= 4371;
	configs[29]-=    6;
	configs[30]-=   18;
	configs[31]-=   54;
	configs[32]-=  162;
	configs[33]-=  162;
	configs[34]-=  162;
	bb.mover.u4s[0]^=0x10101000;
	bb.mover.u4s[1]^=0x101010;
}

void FlipFunctionBBBlack1631() {
	configs[ 1]+=  162;
	configs[ 2]+=  162;
	configs[ 3]+=  162;
	configs[ 4]+=  162;
	configs[ 5]+=  162;
	configs[ 6]+=  162;
	configs[11]+=    6;
	configs[12]+=   18;
	configs[13]+=   54;
	configs[14]+=   54;
	configs[15]+=   54;
	configs[16]+=   54;
	configs[23]+= 4371;
	configs[29]+=    6;
	configs[30]+=   18;
	configs[31]+=   54;
	configs[32]+=  162;
	configs[33]+=  162;
	configs[34]+=  162;
	bb.mover.u4s[0]^=0x10101000;
	bb.mover.u4s[1]^=0x101010;
}

void FlipFunctionBBWhite1632() {
	configs[35]-=   81;
}

void FlipFunctionBBBlack1632() {
	configs[35]+=   81;
}

void FlipFunctionBBWhite1633() {
	configs[ 6]-=   54;
	configs[15]-=  162;
	configs[22]-= 1458;
	configs[35]-=  135;
	bb.mover.u4s[1]^=0x80000;
}

void FlipFunctionBBBlack1633() {
	configs[ 6]+=   54;
	configs[15]+=  162;
	configs[22]+= 1458;
	configs[35]+=  135;
	bb.mover.u4s[1]^=0x80000;
}

void FlipFunctionBBWhite1634() {
	configs[ 5]-=   18;
	configs[ 6]-=   54;
	configs[13]-=  486;
	configs[15]-=  162;
	configs[21]-=  486;
	configs[22]-= 1458;
	configs[35]-=  153;
	bb.mover.u4s[1]^=0x80400;
}

void FlipFunctionBBBlack1634() {
	configs[ 5]+=   18;
	configs[ 6]+=   54;
	configs[13]+=  486;
	configs[15]+=  162;
	configs[21]+=  486;
	configs[22]+= 1458;
	configs[35]+=  153;
	bb.mover.u4s[1]^=0x80400;
}

void FlipFunctionBBWhite1635() {
	configs[ 4]-=    6;
	configs[ 5]-=   18;
	configs[ 6]-=   54;
	configs[11]-=  162;
	configs[13]-=  486;
	configs[15]-=  162;
	configs[20]-=  162;
	configs[21]-=  486;
	configs[22]-= 1458;
	configs[35]-=  159;
	bb.mover.u4s[1]^=0x80402;
}

void FlipFunctionBBBlack1635() {
	configs[ 4]+=    6;
	configs[ 5]+=   18;
	configs[ 6]+=   54;
	configs[11]+=  162;
	configs[13]+=  486;
	configs[15]+=  162;
	configs[20]+=  162;
	configs[21]+=  486;
	configs[22]+= 1458;
	configs[35]+=  159;
	bb.mover.u4s[1]^=0x80402;
}

void FlipFunctionBBWhite1636() {
	configs[ 7]-=  243;
	bb.mover.u4s[1]^=0x20000000;
	bb.empty.u4s[1]^=0x20000000;
}

void FlipFunctionBBBlack1636() {
	configs[ 7]+=  243;
	bb.mover.u4s[1]^=0x20000000;
	bb.empty.u4s[1]^=0x20000000;
}

void FlipFunctionBBWhite1637() {
	configs[ 7]-= 1701;
	configs[25]-= 4374;
	configs[33]-= 1458;
	bb.mover.u4s[1]^=0x60000000;
	bb.empty.u4s[1]^=0x20000000;
}

void FlipFunctionBBBlack1637() {
	configs[ 7]+= 1701;
	configs[25]+= 4374;
	configs[33]+= 1458;
	bb.mover.u4s[1]^=0x60000000;
	bb.empty.u4s[1]^=0x20000000;
}

void FlipFunctionBBWhite1638() {
	configs[ 7]-=  405;
	configs[17]-=   54;
	configs[23]-= 4374;
	configs[35]-=  162;
	bb.mover.u4s[1]^=0x30000000;
	bb.empty.u4s[1]^=0x20000000;
}

void FlipFunctionBBBlack1638() {
	configs[ 7]+=  405;
	configs[17]+=   54;
	configs[23]+= 4374;
	configs[35]+=  162;
	bb.mover.u4s[1]^=0x30000000;
	bb.empty.u4s[1]^=0x20000000;
}

void FlipFunctionBBWhite1639() {
	configs[ 7]-= 1863;
	configs[17]-=   54;
	configs[23]-= 4374;
	configs[25]-= 4374;
	configs[33]-= 1458;
	configs[35]-=  162;
	bb.mover.u4s[1]^=0x70000000;
	bb.empty.u4s[1]^=0x20000000;
}

void FlipFunctionBBBlack1639() {
	configs[ 7]+= 1863;
	configs[17]+=   54;
	configs[23]+= 4374;
	configs[25]+= 4374;
	configs[33]+= 1458;
	configs[35]+=  162;
	bb.mover.u4s[1]^=0x70000000;
	bb.empty.u4s[1]^=0x20000000;
}

void FlipFunctionBBWhite1640() {
	configs[ 7]-=  459;
	configs[16]-=  162;
	configs[17]-=   54;
	configs[22]-= 4374;
	configs[23]-= 4374;
	configs[35]-=  162;
	configs[36]-=   54;
	bb.mover.u4s[1]^=0x38000000;
	bb.empty.u4s[1]^=0x20000000;
}

void FlipFunctionBBBlack1640() {
	configs[ 7]+=  459;
	configs[16]+=  162;
	configs[17]+=   54;
	configs[22]+= 4374;
	configs[23]+= 4374;
	configs[35]+=  162;
	configs[36]+=   54;
	bb.mover.u4s[1]^=0x38000000;
	bb.empty.u4s[1]^=0x20000000;
}

void FlipFunctionBBWhite1641() {
	configs[ 7]-= 1917;
	configs[16]-=  162;
	configs[17]-=   54;
	configs[22]-= 4374;
	configs[23]-= 4374;
	configs[25]-= 4374;
	configs[33]-= 1458;
	configs[35]-=  162;
	configs[36]-=   54;
	bb.mover.u4s[1]^=0x78000000;
	bb.empty.u4s[1]^=0x20000000;
}

void FlipFunctionBBBlack1641() {
	configs[ 7]+= 1917;
	configs[16]+=  162;
	configs[17]+=   54;
	configs[22]+= 4374;
	configs[23]+= 4374;
	configs[25]+= 4374;
	configs[33]+= 1458;
	configs[35]+=  162;
	configs[36]+=   54;
	bb.mover.u4s[1]^=0x78000000;
	bb.empty.u4s[1]^=0x20000000;
}

void FlipFunctionBBWhite1642() {
	configs[ 7]-=  477;
	configs[15]-=  486;
	configs[16]-=  162;
	configs[17]-=   54;
	configs[21]-= 4374;
	configs[22]-= 4374;
	configs[23]-= 4374;
	configs[35]-=  162;
	configs[36]-=   54;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0x3C000000;
	bb.empty.u4s[1]^=0x20000000;
}

void FlipFunctionBBBlack1642() {
	configs[ 7]+=  477;
	configs[15]+=  486;
	configs[16]+=  162;
	configs[17]+=   54;
	configs[21]+= 4374;
	configs[22]+= 4374;
	configs[23]+= 4374;
	configs[35]+=  162;
	configs[36]+=   54;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0x3C000000;
	bb.empty.u4s[1]^=0x20000000;
}

void FlipFunctionBBWhite1643() {
	configs[ 7]-= 1935;
	configs[15]-=  486;
	configs[16]-=  162;
	configs[17]-=   54;
	configs[21]-= 4374;
	configs[22]-= 4374;
	configs[23]-= 4374;
	configs[25]-= 4374;
	configs[33]-= 1458;
	configs[35]-=  162;
	configs[36]-=   54;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0x7C000000;
	bb.empty.u4s[1]^=0x20000000;
}

void FlipFunctionBBBlack1643() {
	configs[ 7]+= 1935;
	configs[15]+=  486;
	configs[16]+=  162;
	configs[17]+=   54;
	configs[21]+= 4374;
	configs[22]+= 4374;
	configs[23]+= 4374;
	configs[25]+= 4374;
	configs[33]+= 1458;
	configs[35]+=  162;
	configs[36]+=   54;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0x7C000000;
	bb.empty.u4s[1]^=0x20000000;
}

void FlipFunctionBBWhite1644() {
	configs[ 7]-=  483;
	configs[14]-= 1458;
	configs[15]-=  486;
	configs[16]-=  162;
	configs[17]-=   54;
	configs[20]-= 4374;
	configs[21]-= 4374;
	configs[22]-= 4374;
	configs[23]-= 4374;
	configs[35]-=  162;
	configs[36]-=   54;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0x3E000000;
	bb.empty.u4s[1]^=0x20000000;
}

void FlipFunctionBBBlack1644() {
	configs[ 7]+=  483;
	configs[14]+= 1458;
	configs[15]+=  486;
	configs[16]+=  162;
	configs[17]+=   54;
	configs[20]+= 4374;
	configs[21]+= 4374;
	configs[22]+= 4374;
	configs[23]+= 4374;
	configs[35]+=  162;
	configs[36]+=   54;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0x3E000000;
	bb.empty.u4s[1]^=0x20000000;
}

void FlipFunctionBBWhite1645() {
	configs[ 7]-= 1941;
	configs[14]-= 1458;
	configs[15]-=  486;
	configs[16]-=  162;
	configs[17]-=   54;
	configs[20]-= 4374;
	configs[21]-= 4374;
	configs[22]-= 4374;
	configs[23]-= 4374;
	configs[25]-= 4374;
	configs[33]-= 1458;
	configs[35]-=  162;
	configs[36]-=   54;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0x7E000000;
	bb.empty.u4s[1]^=0x20000000;
}

void FlipFunctionBBBlack1645() {
	configs[ 7]+= 1941;
	configs[14]+= 1458;
	configs[15]+=  486;
	configs[16]+=  162;
	configs[17]+=   54;
	configs[20]+= 4374;
	configs[21]+= 4374;
	configs[22]+= 4374;
	configs[23]+= 4374;
	configs[25]+= 4374;
	configs[33]+= 1458;
	configs[35]+=  162;
	configs[36]+=   54;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0x7E000000;
	bb.empty.u4s[1]^=0x20000000;
}

void FlipFunctionBBWhite1646() {
	configs[18]-=    9;
}

void FlipFunctionBBBlack1646() {
	configs[18]+=    9;
}

void FlipFunctionBBWhite1647() {
	configs[ 6]-= 1458;
	configs[18]-=   15;
	configs[25]-= 1458;
	configs[32]-= 1458;
	bb.mover.u4s[1]^=0x400000;
}

void FlipFunctionBBBlack1647() {
	configs[ 6]+= 1458;
	configs[18]+=   15;
	configs[25]+= 1458;
	configs[32]+= 1458;
	bb.mover.u4s[1]^=0x400000;
}

void FlipFunctionBBWhite1648() {
	configs[24]-= 2187;
}

void FlipFunctionBBBlack1648() {
	configs[24]+= 2187;
}

void FlipFunctionBBWhite1649() {
	configs[ 6]-=  486;
	configs[17]-=   18;
	configs[24]-= 3645;
	configs[33]-=  486;
	bb.mover.u4s[1]^=0x200000;
}

void FlipFunctionBBBlack1649() {
	configs[ 6]+=  486;
	configs[17]+=   18;
	configs[24]+= 3645;
	configs[33]+=  486;
	bb.mover.u4s[1]^=0x200000;
}

void FlipFunctionBBWhite1650() {
	configs[ 5]-=  486;
	configs[ 6]-=  486;
	configs[16]-=   18;
	configs[17]-=   18;
	configs[24]-= 4131;
	configs[32]-=  486;
	configs[33]-=  486;
	bb.mover.u4s[1]^=0x202000;
}

void FlipFunctionBBBlack1650() {
	configs[ 5]+=  486;
	configs[ 6]+=  486;
	configs[16]+=   18;
	configs[17]+=   18;
	configs[24]+= 4131;
	configs[32]+=  486;
	configs[33]+=  486;
	bb.mover.u4s[1]^=0x202000;
}

void FlipFunctionBBWhite1651() {
	configs[ 4]-=  486;
	configs[ 5]-=  486;
	configs[ 6]-=  486;
	configs[15]-=   18;
	configs[16]-=   18;
	configs[17]-=   18;
	configs[24]-= 4293;
	configs[31]-=  162;
	configs[32]-=  486;
	configs[33]-=  486;
	bb.mover.u4s[1]^=0x202020;
}

void FlipFunctionBBBlack1651() {
	configs[ 4]+=  486;
	configs[ 5]+=  486;
	configs[ 6]+=  486;
	configs[15]+=   18;
	configs[16]+=   18;
	configs[17]+=   18;
	configs[24]+= 4293;
	configs[31]+=  162;
	configs[32]+=  486;
	configs[33]+=  486;
	bb.mover.u4s[1]^=0x202020;
}

void FlipFunctionBBWhite1652() {
	configs[ 3]-=  486;
	configs[ 4]-=  486;
	configs[ 5]-=  486;
	configs[ 6]-=  486;
	configs[14]-=   18;
	configs[15]-=   18;
	configs[16]-=   18;
	configs[17]-=   18;
	configs[24]-= 4347;
	configs[30]-=   54;
	configs[31]-=  162;
	configs[32]-=  486;
	configs[33]-=  486;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x202020;
}

void FlipFunctionBBBlack1652() {
	configs[ 3]+=  486;
	configs[ 4]+=  486;
	configs[ 5]+=  486;
	configs[ 6]+=  486;
	configs[14]+=   18;
	configs[15]+=   18;
	configs[16]+=   18;
	configs[17]+=   18;
	configs[24]+= 4347;
	configs[30]+=   54;
	configs[31]+=  162;
	configs[32]+=  486;
	configs[33]+=  486;
	bb.mover.u4s[0]^=0x20000000;
	bb.mover.u4s[1]^=0x202020;
}

void FlipFunctionBBWhite1653() {
	configs[ 2]-=  486;
	configs[ 3]-=  486;
	configs[ 4]-=  486;
	configs[ 5]-=  486;
	configs[ 6]-=  486;
	configs[13]-=   18;
	configs[14]-=   18;
	configs[15]-=   18;
	configs[16]-=   18;
	configs[17]-=   18;
	configs[24]-= 4365;
	configs[29]-=   18;
	configs[30]-=   54;
	configs[31]-=  162;
	configs[32]-=  486;
	configs[33]-=  486;
	bb.mover.u4s[0]^=0x20200000;
	bb.mover.u4s[1]^=0x202020;
}

void FlipFunctionBBBlack1653() {
	configs[ 2]+=  486;
	configs[ 3]+=  486;
	configs[ 4]+=  486;
	configs[ 5]+=  486;
	configs[ 6]+=  486;
	configs[13]+=   18;
	configs[14]+=   18;
	configs[15]+=   18;
	configs[16]+=   18;
	configs[17]+=   18;
	configs[24]+= 4365;
	configs[29]+=   18;
	configs[30]+=   54;
	configs[31]+=  162;
	configs[32]+=  486;
	configs[33]+=  486;
	bb.mover.u4s[0]^=0x20200000;
	bb.mover.u4s[1]^=0x202020;
}

void FlipFunctionBBWhite1654() {
	configs[ 1]-=  486;
	configs[ 2]-=  486;
	configs[ 3]-=  486;
	configs[ 4]-=  486;
	configs[ 5]-=  486;
	configs[ 6]-=  486;
	configs[12]-=    6;
	configs[13]-=   18;
	configs[14]-=   18;
	configs[15]-=   18;
	configs[16]-=   18;
	configs[17]-=   18;
	configs[24]-= 4371;
	configs[28]-=    6;
	configs[29]-=   18;
	configs[30]-=   54;
	configs[31]-=  162;
	configs[32]-=  486;
	configs[33]-=  486;
	bb.mover.u4s[0]^=0x20202000;
	bb.mover.u4s[1]^=0x202020;
}

void FlipFunctionBBBlack1654() {
	configs[ 1]+=  486;
	configs[ 2]+=  486;
	configs[ 3]+=  486;
	configs[ 4]+=  486;
	configs[ 5]+=  486;
	configs[ 6]+=  486;
	configs[12]+=    6;
	configs[13]+=   18;
	configs[14]+=   18;
	configs[15]+=   18;
	configs[16]+=   18;
	configs[17]+=   18;
	configs[24]+= 4371;
	configs[28]+=    6;
	configs[29]+=   18;
	configs[30]+=   54;
	configs[31]+=  162;
	configs[32]+=  486;
	configs[33]+=  486;
	bb.mover.u4s[0]^=0x20202000;
	bb.mover.u4s[1]^=0x202020;
}

void FlipFunctionBBWhite1655() {
	configs[34]-=  243;
}

void FlipFunctionBBBlack1655() {
	configs[34]+=  243;
}

void FlipFunctionBBWhite1656() {
	configs[ 6]-=  162;
	configs[16]-=   54;
	configs[23]-= 1458;
	configs[34]-=  405;
	bb.mover.u4s[1]^=0x100000;
}

void FlipFunctionBBBlack1656() {
	configs[ 6]+=  162;
	configs[16]+=   54;
	configs[23]+= 1458;
	configs[34]+=  405;
	bb.mover.u4s[1]^=0x100000;
}

void FlipFunctionBBWhite1657() {
	configs[ 5]-=   54;
	configs[ 6]-=  162;
	configs[14]-=  162;
	configs[16]-=   54;
	configs[22]-=  486;
	configs[23]-= 1458;
	configs[34]-=  459;
	bb.mover.u4s[1]^=0x100800;
}

void FlipFunctionBBBlack1657() {
	configs[ 5]+=   54;
	configs[ 6]+=  162;
	configs[14]+=  162;
	configs[16]+=   54;
	configs[22]+=  486;
	configs[23]+= 1458;
	configs[34]+=  459;
	bb.mover.u4s[1]^=0x100800;
}

void FlipFunctionBBWhite1658() {
	configs[ 4]-=   18;
	configs[ 5]-=   54;
	configs[ 6]-=  162;
	configs[12]-=  162;
	configs[14]-=  162;
	configs[16]-=   54;
	configs[21]-=  162;
	configs[22]-=  486;
	configs[23]-= 1458;
	configs[34]-=  477;
	bb.mover.u4s[1]^=0x100804;
}

void FlipFunctionBBBlack1658() {
	configs[ 4]+=   18;
	configs[ 5]+=   54;
	configs[ 6]+=  162;
	configs[12]+=  162;
	configs[14]+=  162;
	configs[16]+=   54;
	configs[21]+=  162;
	configs[22]+=  486;
	configs[23]+= 1458;
	configs[34]+=  477;
	bb.mover.u4s[1]^=0x100804;
}

void FlipFunctionBBWhite1659() {
	configs[ 3]-=    6;
	configs[ 4]-=   18;
	configs[ 5]-=   54;
	configs[ 6]-=  162;
	configs[10]-=   54;
	configs[12]-=  162;
	configs[14]-=  162;
	configs[16]-=   54;
	configs[20]-=   54;
	configs[21]-=  162;
	configs[22]-=  486;
	configs[23]-= 1458;
	configs[34]-=  483;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x100804;
}

void FlipFunctionBBBlack1659() {
	configs[ 3]+=    6;
	configs[ 4]+=   18;
	configs[ 5]+=   54;
	configs[ 6]+=  162;
	configs[10]+=   54;
	configs[12]+=  162;
	configs[14]+=  162;
	configs[16]+=   54;
	configs[20]+=   54;
	configs[21]+=  162;
	configs[22]+=  486;
	configs[23]+= 1458;
	configs[34]+=  483;
	bb.mover.u4s[0]^=0x2000000;
	bb.mover.u4s[1]^=0x100804;
}

void FlipFunctionBBWhite1660() {
	configs[ 7]-=  729;
	bb.mover.u4s[1]^=0x40000000;
	bb.empty.u4s[1]^=0x40000000;
}

void FlipFunctionBBBlack1660() {
	configs[ 7]+=  729;
	bb.mover.u4s[1]^=0x40000000;
	bb.empty.u4s[1]^=0x40000000;
}

void FlipFunctionBBWhite1661() {
	configs[ 7]-= 1215;
	configs[18]-=   18;
	configs[24]-= 4374;
	configs[34]-=  486;
	bb.mover.u4s[1]^=0x60000000;
	bb.empty.u4s[1]^=0x40000000;
}

void FlipFunctionBBBlack1661() {
	configs[ 7]+= 1215;
	configs[18]+=   18;
	configs[24]+= 4374;
	configs[34]+=  486;
	bb.mover.u4s[1]^=0x60000000;
	bb.empty.u4s[1]^=0x40000000;
}

void FlipFunctionBBWhite1662() {
	configs[ 7]-= 1377;
	configs[17]-=   54;
	configs[18]-=   18;
	configs[23]-= 4374;
	configs[24]-= 4374;
	configs[34]-=  486;
	configs[35]-=  162;
	bb.mover.u4s[1]^=0x70000000;
	bb.empty.u4s[1]^=0x40000000;
}

void FlipFunctionBBBlack1662() {
	configs[ 7]+= 1377;
	configs[17]+=   54;
	configs[18]+=   18;
	configs[23]+= 4374;
	configs[24]+= 4374;
	configs[34]+=  486;
	configs[35]+=  162;
	bb.mover.u4s[1]^=0x70000000;
	bb.empty.u4s[1]^=0x40000000;
}

void FlipFunctionBBWhite1663() {
	configs[ 7]-= 1431;
	configs[16]-=  162;
	configs[17]-=   54;
	configs[18]-=   18;
	configs[22]-= 4374;
	configs[23]-= 4374;
	configs[24]-= 4374;
	configs[34]-=  486;
	configs[35]-=  162;
	configs[36]-=   54;
	bb.mover.u4s[1]^=0x78000000;
	bb.empty.u4s[1]^=0x40000000;
}

void FlipFunctionBBBlack1663() {
	configs[ 7]+= 1431;
	configs[16]+=  162;
	configs[17]+=   54;
	configs[18]+=   18;
	configs[22]+= 4374;
	configs[23]+= 4374;
	configs[24]+= 4374;
	configs[34]+=  486;
	configs[35]+=  162;
	configs[36]+=   54;
	bb.mover.u4s[1]^=0x78000000;
	bb.empty.u4s[1]^=0x40000000;
}

void FlipFunctionBBWhite1664() {
	configs[ 7]-= 1449;
	configs[15]-=  486;
	configs[16]-=  162;
	configs[17]-=   54;
	configs[18]-=   18;
	configs[21]-= 4374;
	configs[22]-= 4374;
	configs[23]-= 4374;
	configs[24]-= 4374;
	configs[34]-=  486;
	configs[35]-=  162;
	configs[36]-=   54;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0x7C000000;
	bb.empty.u4s[1]^=0x40000000;
}

void FlipFunctionBBBlack1664() {
	configs[ 7]+= 1449;
	configs[15]+=  486;
	configs[16]+=  162;
	configs[17]+=   54;
	configs[18]+=   18;
	configs[21]+= 4374;
	configs[22]+= 4374;
	configs[23]+= 4374;
	configs[24]+= 4374;
	configs[34]+=  486;
	configs[35]+=  162;
	configs[36]+=   54;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0x7C000000;
	bb.empty.u4s[1]^=0x40000000;
}

void FlipFunctionBBWhite1665() {
	configs[ 7]-= 1455;
	configs[14]-= 1458;
	configs[15]-=  486;
	configs[16]-=  162;
	configs[17]-=   54;
	configs[18]-=   18;
	configs[20]-= 4374;
	configs[21]-= 4374;
	configs[22]-= 4374;
	configs[23]-= 4374;
	configs[24]-= 4374;
	configs[34]-=  486;
	configs[35]-=  162;
	configs[36]-=   54;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0x7E000000;
	bb.empty.u4s[1]^=0x40000000;
}

void FlipFunctionBBBlack1665() {
	configs[ 7]+= 1455;
	configs[14]+= 1458;
	configs[15]+=  486;
	configs[16]+=  162;
	configs[17]+=   54;
	configs[18]+=   18;
	configs[20]+= 4374;
	configs[21]+= 4374;
	configs[22]+= 4374;
	configs[23]+= 4374;
	configs[24]+= 4374;
	configs[34]+=  486;
	configs[35]+=  162;
	configs[36]+=   54;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0x7E000000;
	bb.empty.u4s[1]^=0x40000000;
}

void FlipFunctionBBWhite1666() {
	configs[25]-= 2187;
}

void FlipFunctionBBBlack1666() {
	configs[25]+= 2187;
}

void FlipFunctionBBWhite1667() {
	configs[ 6]-= 1458;
	configs[18]-=    6;
	configs[25]-= 3645;
	configs[32]-= 1458;
	bb.mover.u4s[1]^=0x400000;
}

void FlipFunctionBBBlack1667() {
	configs[ 6]+= 1458;
	configs[18]+=    6;
	configs[25]+= 3645;
	configs[32]+= 1458;
	bb.mover.u4s[1]^=0x400000;
}

void FlipFunctionBBWhite1668() {
	configs[ 5]-= 1458;
	configs[ 6]-= 1458;
	configs[17]-=    6;
	configs[18]-=    6;
	configs[25]-= 4131;
	configs[31]-=  486;
	configs[32]-= 1458;
	bb.mover.u4s[1]^=0x404000;
}

void FlipFunctionBBBlack1668() {
	configs[ 5]+= 1458;
	configs[ 6]+= 1458;
	configs[17]+=    6;
	configs[18]+=    6;
	configs[25]+= 4131;
	configs[31]+=  486;
	configs[32]+= 1458;
	bb.mover.u4s[1]^=0x404000;
}

void FlipFunctionBBWhite1669() {
	configs[ 4]-= 1458;
	configs[ 5]-= 1458;
	configs[ 6]-= 1458;
	configs[16]-=    6;
	configs[17]-=    6;
	configs[18]-=    6;
	configs[25]-= 4293;
	configs[30]-=  162;
	configs[31]-=  486;
	configs[32]-= 1458;
	bb.mover.u4s[1]^=0x404040;
}

void FlipFunctionBBBlack1669() {
	configs[ 4]+= 1458;
	configs[ 5]+= 1458;
	configs[ 6]+= 1458;
	configs[16]+=    6;
	configs[17]+=    6;
	configs[18]+=    6;
	configs[25]+= 4293;
	configs[30]+=  162;
	configs[31]+=  486;
	configs[32]+= 1458;
	bb.mover.u4s[1]^=0x404040;
}

void FlipFunctionBBWhite1670() {
	configs[ 3]-= 1458;
	configs[ 4]-= 1458;
	configs[ 5]-= 1458;
	configs[ 6]-= 1458;
	configs[15]-=    6;
	configs[16]-=    6;
	configs[17]-=    6;
	configs[18]-=    6;
	configs[25]-= 4347;
	configs[29]-=   54;
	configs[30]-=  162;
	configs[31]-=  486;
	configs[32]-= 1458;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x404040;
}

void FlipFunctionBBBlack1670() {
	configs[ 3]+= 1458;
	configs[ 4]+= 1458;
	configs[ 5]+= 1458;
	configs[ 6]+= 1458;
	configs[15]+=    6;
	configs[16]+=    6;
	configs[17]+=    6;
	configs[18]+=    6;
	configs[25]+= 4347;
	configs[29]+=   54;
	configs[30]+=  162;
	configs[31]+=  486;
	configs[32]+= 1458;
	bb.mover.u4s[0]^=0x40000000;
	bb.mover.u4s[1]^=0x404040;
}

void FlipFunctionBBWhite1671() {
	configs[ 2]-= 1458;
	configs[ 3]-= 1458;
	configs[ 4]-= 1458;
	configs[ 5]-= 1458;
	configs[ 6]-= 1458;
	configs[14]-=    6;
	configs[15]-=    6;
	configs[16]-=    6;
	configs[17]-=    6;
	configs[18]-=    6;
	configs[25]-= 4365;
	configs[28]-=   18;
	configs[29]-=   54;
	configs[30]-=  162;
	configs[31]-=  486;
	configs[32]-= 1458;
	bb.mover.u4s[0]^=0x40400000;
	bb.mover.u4s[1]^=0x404040;
}

void FlipFunctionBBBlack1671() {
	configs[ 2]+= 1458;
	configs[ 3]+= 1458;
	configs[ 4]+= 1458;
	configs[ 5]+= 1458;
	configs[ 6]+= 1458;
	configs[14]+=    6;
	configs[15]+=    6;
	configs[16]+=    6;
	configs[17]+=    6;
	configs[18]+=    6;
	configs[25]+= 4365;
	configs[28]+=   18;
	configs[29]+=   54;
	configs[30]+=  162;
	configs[31]+=  486;
	configs[32]+= 1458;
	bb.mover.u4s[0]^=0x40400000;
	bb.mover.u4s[1]^=0x404040;
}

void FlipFunctionBBWhite1672() {
	configs[ 1]-= 1458;
	configs[ 2]-= 1458;
	configs[ 3]-= 1458;
	configs[ 4]-= 1458;
	configs[ 5]-= 1458;
	configs[ 6]-= 1458;
	configs[13]-=    6;
	configs[14]-=    6;
	configs[15]-=    6;
	configs[16]-=    6;
	configs[17]-=    6;
	configs[18]-=    6;
	configs[25]-= 4371;
	configs[27]-=    6;
	configs[28]-=   18;
	configs[29]-=   54;
	configs[30]-=  162;
	configs[31]-=  486;
	configs[32]-= 1458;
	bb.mover.u4s[0]^=0x40404000;
	bb.mover.u4s[1]^=0x404040;
}

void FlipFunctionBBBlack1672() {
	configs[ 1]+= 1458;
	configs[ 2]+= 1458;
	configs[ 3]+= 1458;
	configs[ 4]+= 1458;
	configs[ 5]+= 1458;
	configs[ 6]+= 1458;
	configs[13]+=    6;
	configs[14]+=    6;
	configs[15]+=    6;
	configs[16]+=    6;
	configs[17]+=    6;
	configs[18]+=    6;
	configs[25]+= 4371;
	configs[27]+=    6;
	configs[28]+=   18;
	configs[29]+=   54;
	configs[30]+=  162;
	configs[31]+=  486;
	configs[32]+= 1458;
	bb.mover.u4s[0]^=0x40404000;
	bb.mover.u4s[1]^=0x404040;
}

void FlipFunctionBBWhite1673() {
	configs[33]-=  729;
}

void FlipFunctionBBBlack1673() {
	configs[33]+=  729;
}

void FlipFunctionBBWhite1674() {
	configs[ 6]-=  486;
	configs[17]-=   18;
	configs[24]-= 1458;
	configs[33]-= 1215;
	bb.mover.u4s[1]^=0x200000;
}

void FlipFunctionBBBlack1674() {
	configs[ 6]+=  486;
	configs[17]+=   18;
	configs[24]+= 1458;
	configs[33]+= 1215;
	bb.mover.u4s[1]^=0x200000;
}

void FlipFunctionBBWhite1675() {
	configs[ 5]-=  162;
	configs[ 6]-=  486;
	configs[15]-=   54;
	configs[17]-=   18;
	configs[23]-=  486;
	configs[24]-= 1458;
	configs[33]-= 1377;
	bb.mover.u4s[1]^=0x201000;
}

void FlipFunctionBBBlack1675() {
	configs[ 5]+=  162;
	configs[ 6]+=  486;
	configs[15]+=   54;
	configs[17]+=   18;
	configs[23]+=  486;
	configs[24]+= 1458;
	configs[33]+= 1377;
	bb.mover.u4s[1]^=0x201000;
}

void FlipFunctionBBWhite1676() {
	configs[ 4]-=   54;
	configs[ 5]-=  162;
	configs[ 6]-=  486;
	configs[13]-=  162;
	configs[15]-=   54;
	configs[17]-=   18;
	configs[22]-=  162;
	configs[23]-=  486;
	configs[24]-= 1458;
	configs[33]-= 1431;
	bb.mover.u4s[1]^=0x201008;
}

void FlipFunctionBBBlack1676() {
	configs[ 4]+=   54;
	configs[ 5]+=  162;
	configs[ 6]+=  486;
	configs[13]+=  162;
	configs[15]+=   54;
	configs[17]+=   18;
	configs[22]+=  162;
	configs[23]+=  486;
	configs[24]+= 1458;
	configs[33]+= 1431;
	bb.mover.u4s[1]^=0x201008;
}

void FlipFunctionBBWhite1677() {
	configs[ 3]-=   18;
	configs[ 4]-=   54;
	configs[ 5]-=  162;
	configs[ 6]-=  486;
	configs[11]-=   54;
	configs[13]-=  162;
	configs[15]-=   54;
	configs[17]-=   18;
	configs[21]-=   54;
	configs[22]-=  162;
	configs[23]-=  486;
	configs[24]-= 1458;
	configs[33]-= 1449;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x201008;
}

void FlipFunctionBBBlack1677() {
	configs[ 3]+=   18;
	configs[ 4]+=   54;
	configs[ 5]+=  162;
	configs[ 6]+=  486;
	configs[11]+=   54;
	configs[13]+=  162;
	configs[15]+=   54;
	configs[17]+=   18;
	configs[21]+=   54;
	configs[22]+=  162;
	configs[23]+=  486;
	configs[24]+= 1458;
	configs[33]+= 1449;
	bb.mover.u4s[0]^=0x4000000;
	bb.mover.u4s[1]^=0x201008;
}

void FlipFunctionBBWhite1678() {
	configs[ 2]-=    6;
	configs[ 3]-=   18;
	configs[ 4]-=   54;
	configs[ 5]-=  162;
	configs[ 6]-=  486;
	configs[ 9]-=   18;
	configs[11]-=   54;
	configs[13]-=  162;
	configs[15]-=   54;
	configs[17]-=   18;
	configs[20]-=   18;
	configs[21]-=   54;
	configs[22]-=  162;
	configs[23]-=  486;
	configs[24]-= 1458;
	configs[33]-= 1455;
	bb.mover.u4s[0]^=0x4020000;
	bb.mover.u4s[1]^=0x201008;
}

void FlipFunctionBBBlack1678() {
	configs[ 2]+=    6;
	configs[ 3]+=   18;
	configs[ 4]+=   54;
	configs[ 5]+=  162;
	configs[ 6]+=  486;
	configs[ 9]+=   18;
	configs[11]+=   54;
	configs[13]+=  162;
	configs[15]+=   54;
	configs[17]+=   18;
	configs[20]+=   18;
	configs[21]+=   54;
	configs[22]+=  162;
	configs[23]+=  486;
	configs[24]+= 1458;
	configs[33]+= 1455;
	bb.mover.u4s[0]^=0x4020000;
	bb.mover.u4s[1]^=0x201008;
}

void FlipFunctionBBWhite1679() {
	configs[ 7]-= 2187;
	bb.mover.u4s[1]^=0x80000000;
	bb.empty.u4s[1]^=0x80000000;
}

void FlipFunctionBBBlack1679() {
	configs[ 7]+= 2187;
	bb.mover.u4s[1]^=0x80000000;
	bb.empty.u4s[1]^=0x80000000;
}

void FlipFunctionBBWhite1680() {
	configs[ 7]-= 3645;
	configs[25]-= 4374;
	configs[33]-= 1458;
	bb.mover.u4s[1]^=0xC0000000;
	bb.empty.u4s[1]^=0x80000000;
}

void FlipFunctionBBBlack1680() {
	configs[ 7]+= 3645;
	configs[25]+= 4374;
	configs[33]+= 1458;
	bb.mover.u4s[1]^=0xC0000000;
	bb.empty.u4s[1]^=0x80000000;
}

void FlipFunctionBBWhite1681() {
	configs[ 7]-= 4131;
	configs[18]-=   18;
	configs[24]-= 4374;
	configs[25]-= 4374;
	configs[33]-= 1458;
	configs[34]-=  486;
	bb.mover.u4s[1]^=0xE0000000;
	bb.empty.u4s[1]^=0x80000000;
}

void FlipFunctionBBBlack1681() {
	configs[ 7]+= 4131;
	configs[18]+=   18;
	configs[24]+= 4374;
	configs[25]+= 4374;
	configs[33]+= 1458;
	configs[34]+=  486;
	bb.mover.u4s[1]^=0xE0000000;
	bb.empty.u4s[1]^=0x80000000;
}

void FlipFunctionBBWhite1682() {
	configs[ 7]-= 4293;
	configs[17]-=   54;
	configs[18]-=   18;
	configs[23]-= 4374;
	configs[24]-= 4374;
	configs[25]-= 4374;
	configs[33]-= 1458;
	configs[34]-=  486;
	configs[35]-=  162;
	bb.mover.u4s[1]^=0xF0000000;
	bb.empty.u4s[1]^=0x80000000;
}

void FlipFunctionBBBlack1682() {
	configs[ 7]+= 4293;
	configs[17]+=   54;
	configs[18]+=   18;
	configs[23]+= 4374;
	configs[24]+= 4374;
	configs[25]+= 4374;
	configs[33]+= 1458;
	configs[34]+=  486;
	configs[35]+=  162;
	bb.mover.u4s[1]^=0xF0000000;
	bb.empty.u4s[1]^=0x80000000;
}

void FlipFunctionBBWhite1683() {
	configs[ 7]-= 4347;
	configs[16]-=  162;
	configs[17]-=   54;
	configs[18]-=   18;
	configs[22]-= 4374;
	configs[23]-= 4374;
	configs[24]-= 4374;
	configs[25]-= 4374;
	configs[33]-= 1458;
	configs[34]-=  486;
	configs[35]-=  162;
	configs[36]-=   54;
	bb.mover.u4s[1]^=0xF8000000;
	bb.empty.u4s[1]^=0x80000000;
}

void FlipFunctionBBBlack1683() {
	configs[ 7]+= 4347;
	configs[16]+=  162;
	configs[17]+=   54;
	configs[18]+=   18;
	configs[22]+= 4374;
	configs[23]+= 4374;
	configs[24]+= 4374;
	configs[25]+= 4374;
	configs[33]+= 1458;
	configs[34]+=  486;
	configs[35]+=  162;
	configs[36]+=   54;
	bb.mover.u4s[1]^=0xF8000000;
	bb.empty.u4s[1]^=0x80000000;
}

void FlipFunctionBBWhite1684() {
	configs[ 7]-= 4365;
	configs[15]-=  486;
	configs[16]-=  162;
	configs[17]-=   54;
	configs[18]-=   18;
	configs[21]-= 4374;
	configs[22]-= 4374;
	configs[23]-= 4374;
	configs[24]-= 4374;
	configs[25]-= 4374;
	configs[33]-= 1458;
	configs[34]-=  486;
	configs[35]-=  162;
	configs[36]-=   54;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0xFC000000;
	bb.empty.u4s[1]^=0x80000000;
}

void FlipFunctionBBBlack1684() {
	configs[ 7]+= 4365;
	configs[15]+=  486;
	configs[16]+=  162;
	configs[17]+=   54;
	configs[18]+=   18;
	configs[21]+= 4374;
	configs[22]+= 4374;
	configs[23]+= 4374;
	configs[24]+= 4374;
	configs[25]+= 4374;
	configs[33]+= 1458;
	configs[34]+=  486;
	configs[35]+=  162;
	configs[36]+=   54;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0xFC000000;
	bb.empty.u4s[1]^=0x80000000;
}

void FlipFunctionBBWhite1685() {
	configs[ 7]-= 4371;
	configs[14]-= 1458;
	configs[15]-=  486;
	configs[16]-=  162;
	configs[17]-=   54;
	configs[18]-=   18;
	configs[20]-= 4374;
	configs[21]-= 4374;
	configs[22]-= 4374;
	configs[23]-= 4374;
	configs[24]-= 4374;
	configs[25]-= 4374;
	configs[33]-= 1458;
	configs[34]-=  486;
	configs[35]-=  162;
	configs[36]-=   54;
	configs[37]-=   18;
	bb.mover.u4s[1]^=0xFE000000;
	bb.empty.u4s[1]^=0x80000000;
}

void FlipFunctionBBBlack1685() {
	configs[ 7]+= 4371;
	configs[14]+= 1458;
	configs[15]+=  486;
	configs[16]+=  162;
	configs[17]+=   54;
	configs[18]+=   18;
	configs[20]+= 4374;
	configs[21]+= 4374;
	configs[22]+= 4374;
	configs[23]+= 4374;
	configs[24]+= 4374;
	configs[25]+= 4374;
	configs[33]+= 1458;
	configs[34]+=  486;
	configs[35]+=  162;
	configs[36]+=   54;
	configs[37]+=   18;
	bb.mover.u4s[1]^=0xFE000000;
	bb.empty.u4s[1]^=0x80000000;
}

void FlipFunctionBBWhite1686() {
	configs[26]-= 2187;
}

void FlipFunctionBBBlack1686() {
	configs[26]+= 2187;
}

void FlipFunctionBBWhite1687() {
	configs[ 6]-= 4374;
	configs[26]-= 3645;
	configs[31]-= 1458;
	bb.mover.u4s[1]^=0x800000;
}

void FlipFunctionBBBlack1687() {
	configs[ 6]+= 4374;
	configs[26]+= 3645;
	configs[31]+= 1458;
	bb.mover.u4s[1]^=0x800000;
}

void FlipFunctionBBWhite1688() {
	configs[ 5]-= 4374;
	configs[ 6]-= 4374;
	configs[18]-=    2;
	configs[26]-= 4131;
	configs[30]-=  486;
	configs[31]-= 1458;
	bb.mover.u4s[1]^=0x808000;
}

void FlipFunctionBBBlack1688() {
	configs[ 5]+= 4374;
	configs[ 6]+= 4374;
	configs[18]+=    2;
	configs[26]+= 4131;
	configs[30]+=  486;
	configs[31]+= 1458;
	bb.mover.u4s[1]^=0x808000;
}

void FlipFunctionBBWhite1689() {
	configs[ 4]-= 4374;
	configs[ 5]-= 4374;
	configs[ 6]-= 4374;
	configs[17]-=    2;
	configs[18]-=    2;
	configs[26]-= 4293;
	configs[29]-=  162;
	configs[30]-=  486;
	configs[31]-= 1458;
	bb.mover.u4s[1]^=0x808080;
}

void FlipFunctionBBBlack1689() {
	configs[ 4]+= 4374;
	configs[ 5]+= 4374;
	configs[ 6]+= 4374;
	configs[17]+=    2;
	configs[18]+=    2;
	configs[26]+= 4293;
	configs[29]+=  162;
	configs[30]+=  486;
	configs[31]+= 1458;
	bb.mover.u4s[1]^=0x808080;
}

void FlipFunctionBBWhite1690() {
	configs[ 3]-= 4374;
	configs[ 4]-= 4374;
	configs[ 5]-= 4374;
	configs[ 6]-= 4374;
	configs[16]-=    2;
	configs[17]-=    2;
	configs[18]-=    2;
	configs[26]-= 4347;
	configs[28]-=   54;
	configs[29]-=  162;
	configs[30]-=  486;
	configs[31]-= 1458;
	bb.mover.u4s[0]^=0x80000000;
	bb.mover.u4s[1]^=0x808080;
}

void FlipFunctionBBBlack1690() {
	configs[ 3]+= 4374;
	configs[ 4]+= 4374;
	configs[ 5]+= 4374;
	configs[ 6]+= 4374;
	configs[16]+=    2;
	configs[17]+=    2;
	configs[18]+=    2;
	configs[26]+= 4347;
	configs[28]+=   54;
	configs[29]+=  162;
	configs[30]+=  486;
	configs[31]+= 1458;
	bb.mover.u4s[0]^=0x80000000;
	bb.mover.u4s[1]^=0x808080;
}

void FlipFunctionBBWhite1691() {
	configs[ 2]-= 4374;
	configs[ 3]-= 4374;
	configs[ 4]-= 4374;
	configs[ 5]-= 4374;
	configs[ 6]-= 4374;
	configs[15]-=    2;
	configs[16]-=    2;
	configs[17]-=    2;
	configs[18]-=    2;
	configs[26]-= 4365;
	configs[27]-=   18;
	configs[28]-=   54;
	configs[29]-=  162;
	configs[30]-=  486;
	configs[31]-= 1458;
	bb.mover.u4s[0]^=0x80800000;
	bb.mover.u4s[1]^=0x808080;
}

void FlipFunctionBBBlack1691() {
	configs[ 2]+= 4374;
	configs[ 3]+= 4374;
	configs[ 4]+= 4374;
	configs[ 5]+= 4374;
	configs[ 6]+= 4374;
	configs[15]+=    2;
	configs[16]+=    2;
	configs[17]+=    2;
	configs[18]+=    2;
	configs[26]+= 4365;
	configs[27]+=   18;
	configs[28]+=   54;
	configs[29]+=  162;
	configs[30]+=  486;
	configs[31]+= 1458;
	bb.mover.u4s[0]^=0x80800000;
	bb.mover.u4s[1]^=0x808080;
}

void FlipFunctionBBWhite1692() {
	configs[ 1]-= 4374;
	configs[ 2]-= 4374;
	configs[ 3]-= 4374;
	configs[ 4]-= 4374;
	configs[ 5]-= 4374;
	configs[ 6]-= 4374;
	configs[14]-=    2;
	configs[15]-=    2;
	configs[16]-=    2;
	configs[17]-=    2;
	configs[18]-=    2;
	configs[26]-= 4371;
	configs[27]-=   18;
	configs[28]-=   54;
	configs[29]-=  162;
	configs[30]-=  486;
	configs[31]-= 1458;
	bb.mover.u4s[0]^=0x80808000;
	bb.mover.u4s[1]^=0x808080;
}

void FlipFunctionBBBlack1692() {
	configs[ 1]+= 4374;
	configs[ 2]+= 4374;
	configs[ 3]+= 4374;
	configs[ 4]+= 4374;
	configs[ 5]+= 4374;
	configs[ 6]+= 4374;
	configs[14]+=    2;
	configs[15]+=    2;
	configs[16]+=    2;
	configs[17]+=    2;
	configs[18]+=    2;
	configs[26]+= 4371;
	configs[27]+=   18;
	configs[28]+=   54;
	configs[29]+=  162;
	configs[30]+=  486;
	configs[31]+= 1458;
	bb.mover.u4s[0]^=0x80808000;
	bb.mover.u4s[1]^=0x808080;
}

void FlipFunctionBBWhite1693() {
	configs[32]-= 2187;
}

void FlipFunctionBBBlack1693() {
	configs[32]+= 2187;
}

void FlipFunctionBBWhite1694() {
	configs[ 6]-= 1458;
	configs[18]-=    6;
	configs[25]-= 1458;
	configs[32]-= 3645;
	bb.mover.u4s[1]^=0x400000;
}

void FlipFunctionBBBlack1694() {
	configs[ 6]+= 1458;
	configs[18]+=    6;
	configs[25]+= 1458;
	configs[32]+= 3645;
	bb.mover.u4s[1]^=0x400000;
}

void FlipFunctionBBWhite1695() {
	configs[ 5]-=  486;
	configs[ 6]-= 1458;
	configs[16]-=   18;
	configs[18]-=    6;
	configs[24]-=  486;
	configs[25]-= 1458;
	configs[32]-= 4131;
	bb.mover.u4s[1]^=0x402000;
}

void FlipFunctionBBBlack1695() {
	configs[ 5]+=  486;
	configs[ 6]+= 1458;
	configs[16]+=   18;
	configs[18]+=    6;
	configs[24]+=  486;
	configs[25]+= 1458;
	configs[32]+= 4131;
	bb.mover.u4s[1]^=0x402000;
}

void FlipFunctionBBWhite1696() {
	configs[ 4]-=  162;
	configs[ 5]-=  486;
	configs[ 6]-= 1458;
	configs[14]-=   54;
	configs[16]-=   18;
	configs[18]-=    6;
	configs[23]-=  162;
	configs[24]-=  486;
	configs[25]-= 1458;
	configs[32]-= 4293;
	bb.mover.u4s[1]^=0x402010;
}

void FlipFunctionBBBlack1696() {
	configs[ 4]+=  162;
	configs[ 5]+=  486;
	configs[ 6]+= 1458;
	configs[14]+=   54;
	configs[16]+=   18;
	configs[18]+=    6;
	configs[23]+=  162;
	configs[24]+=  486;
	configs[25]+= 1458;
	configs[32]+= 4293;
	bb.mover.u4s[1]^=0x402010;
}

void FlipFunctionBBWhite1697() {
	configs[ 3]-=   54;
	configs[ 4]-=  162;
	configs[ 5]-=  486;
	configs[ 6]-= 1458;
	configs[12]-=   54;
	configs[14]-=   54;
	configs[16]-=   18;
	configs[18]-=    6;
	configs[22]-=   54;
	configs[23]-=  162;
	configs[24]-=  486;
	configs[25]-= 1458;
	configs[32]-= 4347;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x402010;
}

void FlipFunctionBBBlack1697() {
	configs[ 3]+=   54;
	configs[ 4]+=  162;
	configs[ 5]+=  486;
	configs[ 6]+= 1458;
	configs[12]+=   54;
	configs[14]+=   54;
	configs[16]+=   18;
	configs[18]+=    6;
	configs[22]+=   54;
	configs[23]+=  162;
	configs[24]+=  486;
	configs[25]+= 1458;
	configs[32]+= 4347;
	bb.mover.u4s[0]^=0x8000000;
	bb.mover.u4s[1]^=0x402010;
}

void FlipFunctionBBWhite1698() {
	configs[ 2]-=   18;
	configs[ 3]-=   54;
	configs[ 4]-=  162;
	configs[ 5]-=  486;
	configs[ 6]-= 1458;
	configs[10]-=   18;
	configs[12]-=   54;
	configs[14]-=   54;
	configs[16]-=   18;
	configs[18]-=    6;
	configs[21]-=   18;
	configs[22]-=   54;
	configs[23]-=  162;
	configs[24]-=  486;
	configs[25]-= 1458;
	configs[32]-= 4365;
	bb.mover.u4s[0]^=0x8040000;
	bb.mover.u4s[1]^=0x402010;
}

void FlipFunctionBBBlack1698() {
	configs[ 2]+=   18;
	configs[ 3]+=   54;
	configs[ 4]+=  162;
	configs[ 5]+=  486;
	configs[ 6]+= 1458;
	configs[10]+=   18;
	configs[12]+=   54;
	configs[14]+=   54;
	configs[16]+=   18;
	configs[18]+=    6;
	configs[21]+=   18;
	configs[22]+=   54;
	configs[23]+=  162;
	configs[24]+=  486;
	configs[25]+= 1458;
	configs[32]+= 4365;
	bb.mover.u4s[0]^=0x8040000;
	bb.mover.u4s[1]^=0x402010;
}

void FlipFunctionBBWhite1699() {
	configs[ 1]-=    6;
	configs[ 2]-=   18;
	configs[ 3]-=   54;
	configs[ 4]-=  162;
	configs[ 5]-=  486;
	configs[ 6]-= 1458;
	configs[ 8]-=    6;
	configs[10]-=   18;
	configs[12]-=   54;
	configs[14]-=   54;
	configs[16]-=   18;
	configs[18]-=    6;
	configs[20]-=    6;
	configs[21]-=   18;
	configs[22]-=   54;
	configs[23]-=  162;
	configs[24]-=  486;
	configs[25]-= 1458;
	configs[32]-= 4371;
	bb.mover.u4s[0]^=0x8040200;
	bb.mover.u4s[1]^=0x402010;
}

void FlipFunctionBBBlack1699() {
	configs[ 1]+=    6;
	configs[ 2]+=   18;
	configs[ 3]+=   54;
	configs[ 4]+=  162;
	configs[ 5]+=  486;
	configs[ 6]+= 1458;
	configs[ 8]+=    6;
	configs[10]+=   18;
	configs[12]+=   54;
	configs[14]+=   54;
	configs[16]+=   18;
	configs[18]+=    6;
	configs[20]+=    6;
	configs[21]+=   18;
	configs[22]+=   54;
	configs[23]+=  162;
	configs[24]+=  486;
	configs[25]+= 1458;
	configs[32]+= 4371;
	bb.mover.u4s[0]^=0x8040200;
	bb.mover.u4s[1]^=0x402010;
}

TFlipFunc* flipFuncsBB[1700][2] = {	FlipFunctionBBWhite0,
	FlipFunctionBBBlack0,
	FlipFunctionBBWhite1,
	FlipFunctionBBBlack1,
	FlipFunctionBBWhite2,
	FlipFunctionBBBlack2,
	FlipFunctionBBWhite3,
	FlipFunctionBBBlack3,
	FlipFunctionBBWhite4,
	FlipFunctionBBBlack4,
	FlipFunctionBBWhite5,
	FlipFunctionBBBlack5,
	FlipFunctionBBWhite6,
	FlipFunctionBBBlack6,
	FlipFunctionBBWhite7,
	FlipFunctionBBBlack7,
	FlipFunctionBBWhite8,
	FlipFunctionBBBlack8,
	FlipFunctionBBWhite9,
	FlipFunctionBBBlack9,
	FlipFunctionBBWhite10,
	FlipFunctionBBBlack10,
	FlipFunctionBBWhite11,
	FlipFunctionBBBlack11,
	FlipFunctionBBWhite12,
	FlipFunctionBBBlack12,
	FlipFunctionBBWhite13,
	FlipFunctionBBBlack13,
	FlipFunctionBBWhite14,
	FlipFunctionBBBlack14,
	FlipFunctionBBWhite15,
	FlipFunctionBBBlack15,
	FlipFunctionBBWhite16,
	FlipFunctionBBBlack16,
	FlipFunctionBBWhite17,
	FlipFunctionBBBlack17,
	FlipFunctionBBWhite18,
	FlipFunctionBBBlack18,
	FlipFunctionBBWhite19,
	FlipFunctionBBBlack19,
	FlipFunctionBBWhite20,
	FlipFunctionBBBlack20,
	FlipFunctionBBWhite21,
	FlipFunctionBBBlack21,
	FlipFunctionBBWhite22,
	FlipFunctionBBBlack22,
	FlipFunctionBBWhite23,
	FlipFunctionBBBlack23,
	FlipFunctionBBWhite24,
	FlipFunctionBBBlack24,
	FlipFunctionBBWhite25,
	FlipFunctionBBBlack25,
	FlipFunctionBBWhite26,
	FlipFunctionBBBlack26,
	FlipFunctionBBWhite27,
	FlipFunctionBBBlack27,
	FlipFunctionBBWhite28,
	FlipFunctionBBBlack28,
	FlipFunctionBBWhite29,
	FlipFunctionBBBlack29,
	FlipFunctionBBWhite30,
	FlipFunctionBBBlack30,
	FlipFunctionBBWhite31,
	FlipFunctionBBBlack31,
	FlipFunctionBBWhite32,
	FlipFunctionBBBlack32,
	FlipFunctionBBWhite33,
	FlipFunctionBBBlack33,
	FlipFunctionBBWhite34,
	FlipFunctionBBBlack34,
	FlipFunctionBBWhite35,
	FlipFunctionBBBlack35,
	FlipFunctionBBWhite36,
	FlipFunctionBBBlack36,
	FlipFunctionBBWhite37,
	FlipFunctionBBBlack37,
	FlipFunctionBBWhite38,
	FlipFunctionBBBlack38,
	FlipFunctionBBWhite39,
	FlipFunctionBBBlack39,
	FlipFunctionBBWhite40,
	FlipFunctionBBBlack40,
	FlipFunctionBBWhite41,
	FlipFunctionBBBlack41,
	FlipFunctionBBWhite42,
	FlipFunctionBBBlack42,
	FlipFunctionBBWhite43,
	FlipFunctionBBBlack43,
	FlipFunctionBBWhite44,
	FlipFunctionBBBlack44,
	FlipFunctionBBWhite45,
	FlipFunctionBBBlack45,
	FlipFunctionBBWhite46,
	FlipFunctionBBBlack46,
	FlipFunctionBBWhite47,
	FlipFunctionBBBlack47,
	FlipFunctionBBWhite48,
	FlipFunctionBBBlack48,
	FlipFunctionBBWhite49,
	FlipFunctionBBBlack49,
	FlipFunctionBBWhite50,
	FlipFunctionBBBlack50,
	FlipFunctionBBWhite51,
	FlipFunctionBBBlack51,
	FlipFunctionBBWhite52,
	FlipFunctionBBBlack52,
	FlipFunctionBBWhite53,
	FlipFunctionBBBlack53,
	FlipFunctionBBWhite54,
	FlipFunctionBBBlack54,
	FlipFunctionBBWhite55,
	FlipFunctionBBBlack55,
	FlipFunctionBBWhite56,
	FlipFunctionBBBlack56,
	FlipFunctionBBWhite57,
	FlipFunctionBBBlack57,
	FlipFunctionBBWhite58,
	FlipFunctionBBBlack58,
	FlipFunctionBBWhite59,
	FlipFunctionBBBlack59,
	FlipFunctionBBWhite60,
	FlipFunctionBBBlack60,
	FlipFunctionBBWhite61,
	FlipFunctionBBBlack61,
	FlipFunctionBBWhite62,
	FlipFunctionBBBlack62,
	FlipFunctionBBWhite63,
	FlipFunctionBBBlack63,
	FlipFunctionBBWhite64,
	FlipFunctionBBBlack64,
	FlipFunctionBBWhite65,
	FlipFunctionBBBlack65,
	FlipFunctionBBWhite66,
	FlipFunctionBBBlack66,
	FlipFunctionBBWhite67,
	FlipFunctionBBBlack67,
	FlipFunctionBBWhite68,
	FlipFunctionBBBlack68,
	FlipFunctionBBWhite69,
	FlipFunctionBBBlack69,
	FlipFunctionBBWhite70,
	FlipFunctionBBBlack70,
	FlipFunctionBBWhite71,
	FlipFunctionBBBlack71,
	FlipFunctionBBWhite72,
	FlipFunctionBBBlack72,
	FlipFunctionBBWhite73,
	FlipFunctionBBBlack73,
	FlipFunctionBBWhite74,
	FlipFunctionBBBlack74,
	FlipFunctionBBWhite75,
	FlipFunctionBBBlack75,
	FlipFunctionBBWhite76,
	FlipFunctionBBBlack76,
	FlipFunctionBBWhite77,
	FlipFunctionBBBlack77,
	FlipFunctionBBWhite78,
	FlipFunctionBBBlack78,
	FlipFunctionBBWhite79,
	FlipFunctionBBBlack79,
	FlipFunctionBBWhite80,
	FlipFunctionBBBlack80,
	FlipFunctionBBWhite81,
	FlipFunctionBBBlack81,
	FlipFunctionBBWhite82,
	FlipFunctionBBBlack82,
	FlipFunctionBBWhite83,
	FlipFunctionBBBlack83,
	FlipFunctionBBWhite84,
	FlipFunctionBBBlack84,
	FlipFunctionBBWhite85,
	FlipFunctionBBBlack85,
	FlipFunctionBBWhite86,
	FlipFunctionBBBlack86,
	FlipFunctionBBWhite87,
	FlipFunctionBBBlack87,
	FlipFunctionBBWhite88,
	FlipFunctionBBBlack88,
	FlipFunctionBBWhite89,
	FlipFunctionBBBlack89,
	FlipFunctionBBWhite90,
	FlipFunctionBBBlack90,
	FlipFunctionBBWhite91,
	FlipFunctionBBBlack91,
	FlipFunctionBBWhite92,
	FlipFunctionBBBlack92,
	FlipFunctionBBWhite93,
	FlipFunctionBBBlack93,
	FlipFunctionBBWhite94,
	FlipFunctionBBBlack94,
	FlipFunctionBBWhite95,
	FlipFunctionBBBlack95,
	FlipFunctionBBWhite96,
	FlipFunctionBBBlack96,
	FlipFunctionBBWhite97,
	FlipFunctionBBBlack97,
	FlipFunctionBBWhite98,
	FlipFunctionBBBlack98,
	FlipFunctionBBWhite99,
	FlipFunctionBBBlack99,
	FlipFunctionBBWhite100,
	FlipFunctionBBBlack100,
	FlipFunctionBBWhite101,
	FlipFunctionBBBlack101,
	FlipFunctionBBWhite102,
	FlipFunctionBBBlack102,
	FlipFunctionBBWhite103,
	FlipFunctionBBBlack103,
	FlipFunctionBBWhite104,
	FlipFunctionBBBlack104,
	FlipFunctionBBWhite105,
	FlipFunctionBBBlack105,
	FlipFunctionBBWhite106,
	FlipFunctionBBBlack106,
	FlipFunctionBBWhite107,
	FlipFunctionBBBlack107,
	FlipFunctionBBWhite108,
	FlipFunctionBBBlack108,
	FlipFunctionBBWhite109,
	FlipFunctionBBBlack109,
	FlipFunctionBBWhite110,
	FlipFunctionBBBlack110,
	FlipFunctionBBWhite111,
	FlipFunctionBBBlack111,
	FlipFunctionBBWhite112,
	FlipFunctionBBBlack112,
	FlipFunctionBBWhite113,
	FlipFunctionBBBlack113,
	FlipFunctionBBWhite114,
	FlipFunctionBBBlack114,
	FlipFunctionBBWhite115,
	FlipFunctionBBBlack115,
	FlipFunctionBBWhite116,
	FlipFunctionBBBlack116,
	FlipFunctionBBWhite117,
	FlipFunctionBBBlack117,
	FlipFunctionBBWhite118,
	FlipFunctionBBBlack118,
	FlipFunctionBBWhite119,
	FlipFunctionBBBlack119,
	FlipFunctionBBWhite120,
	FlipFunctionBBBlack120,
	FlipFunctionBBWhite121,
	FlipFunctionBBBlack121,
	FlipFunctionBBWhite122,
	FlipFunctionBBBlack122,
	FlipFunctionBBWhite123,
	FlipFunctionBBBlack123,
	FlipFunctionBBWhite124,
	FlipFunctionBBBlack124,
	FlipFunctionBBWhite125,
	FlipFunctionBBBlack125,
	FlipFunctionBBWhite126,
	FlipFunctionBBBlack126,
	FlipFunctionBBWhite127,
	FlipFunctionBBBlack127,
	FlipFunctionBBWhite128,
	FlipFunctionBBBlack128,
	FlipFunctionBBWhite129,
	FlipFunctionBBBlack129,
	FlipFunctionBBWhite130,
	FlipFunctionBBBlack130,
	FlipFunctionBBWhite131,
	FlipFunctionBBBlack131,
	FlipFunctionBBWhite132,
	FlipFunctionBBBlack132,
	FlipFunctionBBWhite133,
	FlipFunctionBBBlack133,
	FlipFunctionBBWhite134,
	FlipFunctionBBBlack134,
	FlipFunctionBBWhite135,
	FlipFunctionBBBlack135,
	FlipFunctionBBWhite136,
	FlipFunctionBBBlack136,
	FlipFunctionBBWhite137,
	FlipFunctionBBBlack137,
	FlipFunctionBBWhite138,
	FlipFunctionBBBlack138,
	FlipFunctionBBWhite139,
	FlipFunctionBBBlack139,
	FlipFunctionBBWhite140,
	FlipFunctionBBBlack140,
	FlipFunctionBBWhite141,
	FlipFunctionBBBlack141,
	FlipFunctionBBWhite142,
	FlipFunctionBBBlack142,
	FlipFunctionBBWhite143,
	FlipFunctionBBBlack143,
	FlipFunctionBBWhite144,
	FlipFunctionBBBlack144,
	FlipFunctionBBWhite145,
	FlipFunctionBBBlack145,
	FlipFunctionBBWhite146,
	FlipFunctionBBBlack146,
	FlipFunctionBBWhite147,
	FlipFunctionBBBlack147,
	FlipFunctionBBWhite148,
	FlipFunctionBBBlack148,
	FlipFunctionBBWhite149,
	FlipFunctionBBBlack149,
	FlipFunctionBBWhite150,
	FlipFunctionBBBlack150,
	FlipFunctionBBWhite151,
	FlipFunctionBBBlack151,
	FlipFunctionBBWhite152,
	FlipFunctionBBBlack152,
	FlipFunctionBBWhite153,
	FlipFunctionBBBlack153,
	FlipFunctionBBWhite154,
	FlipFunctionBBBlack154,
	FlipFunctionBBWhite155,
	FlipFunctionBBBlack155,
	FlipFunctionBBWhite156,
	FlipFunctionBBBlack156,
	FlipFunctionBBWhite157,
	FlipFunctionBBBlack157,
	FlipFunctionBBWhite158,
	FlipFunctionBBBlack158,
	FlipFunctionBBWhite159,
	FlipFunctionBBBlack159,
	FlipFunctionBBWhite160,
	FlipFunctionBBBlack160,
	FlipFunctionBBWhite161,
	FlipFunctionBBBlack161,
	FlipFunctionBBWhite162,
	FlipFunctionBBBlack162,
	FlipFunctionBBWhite163,
	FlipFunctionBBBlack163,
	FlipFunctionBBWhite164,
	FlipFunctionBBBlack164,
	FlipFunctionBBWhite165,
	FlipFunctionBBBlack165,
	FlipFunctionBBWhite166,
	FlipFunctionBBBlack166,
	FlipFunctionBBWhite167,
	FlipFunctionBBBlack167,
	FlipFunctionBBWhite168,
	FlipFunctionBBBlack168,
	FlipFunctionBBWhite169,
	FlipFunctionBBBlack169,
	FlipFunctionBBWhite170,
	FlipFunctionBBBlack170,
	FlipFunctionBBWhite171,
	FlipFunctionBBBlack171,
	FlipFunctionBBWhite172,
	FlipFunctionBBBlack172,
	FlipFunctionBBWhite173,
	FlipFunctionBBBlack173,
	FlipFunctionBBWhite174,
	FlipFunctionBBBlack174,
	FlipFunctionBBWhite175,
	FlipFunctionBBBlack175,
	FlipFunctionBBWhite176,
	FlipFunctionBBBlack176,
	FlipFunctionBBWhite177,
	FlipFunctionBBBlack177,
	FlipFunctionBBWhite178,
	FlipFunctionBBBlack178,
	FlipFunctionBBWhite179,
	FlipFunctionBBBlack179,
	FlipFunctionBBWhite180,
	FlipFunctionBBBlack180,
	FlipFunctionBBWhite181,
	FlipFunctionBBBlack181,
	FlipFunctionBBWhite182,
	FlipFunctionBBBlack182,
	FlipFunctionBBWhite183,
	FlipFunctionBBBlack183,
	FlipFunctionBBWhite184,
	FlipFunctionBBBlack184,
	FlipFunctionBBWhite185,
	FlipFunctionBBBlack185,
	FlipFunctionBBWhite186,
	FlipFunctionBBBlack186,
	FlipFunctionBBWhite187,
	FlipFunctionBBBlack187,
	FlipFunctionBBWhite188,
	FlipFunctionBBBlack188,
	FlipFunctionBBWhite189,
	FlipFunctionBBBlack189,
	FlipFunctionBBWhite190,
	FlipFunctionBBBlack190,
	FlipFunctionBBWhite191,
	FlipFunctionBBBlack191,
	FlipFunctionBBWhite192,
	FlipFunctionBBBlack192,
	FlipFunctionBBWhite193,
	FlipFunctionBBBlack193,
	FlipFunctionBBWhite194,
	FlipFunctionBBBlack194,
	FlipFunctionBBWhite195,
	FlipFunctionBBBlack195,
	FlipFunctionBBWhite196,
	FlipFunctionBBBlack196,
	FlipFunctionBBWhite197,
	FlipFunctionBBBlack197,
	FlipFunctionBBWhite198,
	FlipFunctionBBBlack198,
	FlipFunctionBBWhite199,
	FlipFunctionBBBlack199,
	FlipFunctionBBWhite200,
	FlipFunctionBBBlack200,
	FlipFunctionBBWhite201,
	FlipFunctionBBBlack201,
	FlipFunctionBBWhite202,
	FlipFunctionBBBlack202,
	FlipFunctionBBWhite203,
	FlipFunctionBBBlack203,
	FlipFunctionBBWhite204,
	FlipFunctionBBBlack204,
	FlipFunctionBBWhite205,
	FlipFunctionBBBlack205,
	FlipFunctionBBWhite206,
	FlipFunctionBBBlack206,
	FlipFunctionBBWhite207,
	FlipFunctionBBBlack207,
	FlipFunctionBBWhite208,
	FlipFunctionBBBlack208,
	FlipFunctionBBWhite209,
	FlipFunctionBBBlack209,
	FlipFunctionBBWhite210,
	FlipFunctionBBBlack210,
	FlipFunctionBBWhite211,
	FlipFunctionBBBlack211,
	FlipFunctionBBWhite212,
	FlipFunctionBBBlack212,
	FlipFunctionBBWhite213,
	FlipFunctionBBBlack213,
	FlipFunctionBBWhite214,
	FlipFunctionBBBlack214,
	FlipFunctionBBWhite215,
	FlipFunctionBBBlack215,
	FlipFunctionBBWhite216,
	FlipFunctionBBBlack216,
	FlipFunctionBBWhite217,
	FlipFunctionBBBlack217,
	FlipFunctionBBWhite218,
	FlipFunctionBBBlack218,
	FlipFunctionBBWhite219,
	FlipFunctionBBBlack219,
	FlipFunctionBBWhite220,
	FlipFunctionBBBlack220,
	FlipFunctionBBWhite221,
	FlipFunctionBBBlack221,
	FlipFunctionBBWhite222,
	FlipFunctionBBBlack222,
	FlipFunctionBBWhite223,
	FlipFunctionBBBlack223,
	FlipFunctionBBWhite224,
	FlipFunctionBBBlack224,
	FlipFunctionBBWhite225,
	FlipFunctionBBBlack225,
	FlipFunctionBBWhite226,
	FlipFunctionBBBlack226,
	FlipFunctionBBWhite227,
	FlipFunctionBBBlack227,
	FlipFunctionBBWhite228,
	FlipFunctionBBBlack228,
	FlipFunctionBBWhite229,
	FlipFunctionBBBlack229,
	FlipFunctionBBWhite230,
	FlipFunctionBBBlack230,
	FlipFunctionBBWhite231,
	FlipFunctionBBBlack231,
	FlipFunctionBBWhite232,
	FlipFunctionBBBlack232,
	FlipFunctionBBWhite233,
	FlipFunctionBBBlack233,
	FlipFunctionBBWhite234,
	FlipFunctionBBBlack234,
	FlipFunctionBBWhite235,
	FlipFunctionBBBlack235,
	FlipFunctionBBWhite236,
	FlipFunctionBBBlack236,
	FlipFunctionBBWhite237,
	FlipFunctionBBBlack237,
	FlipFunctionBBWhite238,
	FlipFunctionBBBlack238,
	FlipFunctionBBWhite239,
	FlipFunctionBBBlack239,
	FlipFunctionBBWhite240,
	FlipFunctionBBBlack240,
	FlipFunctionBBWhite241,
	FlipFunctionBBBlack241,
	FlipFunctionBBWhite242,
	FlipFunctionBBBlack242,
	FlipFunctionBBWhite243,
	FlipFunctionBBBlack243,
	FlipFunctionBBWhite244,
	FlipFunctionBBBlack244,
	FlipFunctionBBWhite245,
	FlipFunctionBBBlack245,
	FlipFunctionBBWhite246,
	FlipFunctionBBBlack246,
	FlipFunctionBBWhite247,
	FlipFunctionBBBlack247,
	FlipFunctionBBWhite248,
	FlipFunctionBBBlack248,
	FlipFunctionBBWhite249,
	FlipFunctionBBBlack249,
	FlipFunctionBBWhite250,
	FlipFunctionBBBlack250,
	FlipFunctionBBWhite251,
	FlipFunctionBBBlack251,
	FlipFunctionBBWhite252,
	FlipFunctionBBBlack252,
	FlipFunctionBBWhite253,
	FlipFunctionBBBlack253,
	FlipFunctionBBWhite254,
	FlipFunctionBBBlack254,
	FlipFunctionBBWhite255,
	FlipFunctionBBBlack255,
	FlipFunctionBBWhite256,
	FlipFunctionBBBlack256,
	FlipFunctionBBWhite257,
	FlipFunctionBBBlack257,
	FlipFunctionBBWhite258,
	FlipFunctionBBBlack258,
	FlipFunctionBBWhite259,
	FlipFunctionBBBlack259,
	FlipFunctionBBWhite260,
	FlipFunctionBBBlack260,
	FlipFunctionBBWhite261,
	FlipFunctionBBBlack261,
	FlipFunctionBBWhite262,
	FlipFunctionBBBlack262,
	FlipFunctionBBWhite263,
	FlipFunctionBBBlack263,
	FlipFunctionBBWhite264,
	FlipFunctionBBBlack264,
	FlipFunctionBBWhite265,
	FlipFunctionBBBlack265,
	FlipFunctionBBWhite266,
	FlipFunctionBBBlack266,
	FlipFunctionBBWhite267,
	FlipFunctionBBBlack267,
	FlipFunctionBBWhite268,
	FlipFunctionBBBlack268,
	FlipFunctionBBWhite269,
	FlipFunctionBBBlack269,
	FlipFunctionBBWhite270,
	FlipFunctionBBBlack270,
	FlipFunctionBBWhite271,
	FlipFunctionBBBlack271,
	FlipFunctionBBWhite272,
	FlipFunctionBBBlack272,
	FlipFunctionBBWhite273,
	FlipFunctionBBBlack273,
	FlipFunctionBBWhite274,
	FlipFunctionBBBlack274,
	FlipFunctionBBWhite275,
	FlipFunctionBBBlack275,
	FlipFunctionBBWhite276,
	FlipFunctionBBBlack276,
	FlipFunctionBBWhite277,
	FlipFunctionBBBlack277,
	FlipFunctionBBWhite278,
	FlipFunctionBBBlack278,
	FlipFunctionBBWhite279,
	FlipFunctionBBBlack279,
	FlipFunctionBBWhite280,
	FlipFunctionBBBlack280,
	FlipFunctionBBWhite281,
	FlipFunctionBBBlack281,
	FlipFunctionBBWhite282,
	FlipFunctionBBBlack282,
	FlipFunctionBBWhite283,
	FlipFunctionBBBlack283,
	FlipFunctionBBWhite284,
	FlipFunctionBBBlack284,
	FlipFunctionBBWhite285,
	FlipFunctionBBBlack285,
	FlipFunctionBBWhite286,
	FlipFunctionBBBlack286,
	FlipFunctionBBWhite287,
	FlipFunctionBBBlack287,
	FlipFunctionBBWhite288,
	FlipFunctionBBBlack288,
	FlipFunctionBBWhite289,
	FlipFunctionBBBlack289,
	FlipFunctionBBWhite290,
	FlipFunctionBBBlack290,
	FlipFunctionBBWhite291,
	FlipFunctionBBBlack291,
	FlipFunctionBBWhite292,
	FlipFunctionBBBlack292,
	FlipFunctionBBWhite293,
	FlipFunctionBBBlack293,
	FlipFunctionBBWhite294,
	FlipFunctionBBBlack294,
	FlipFunctionBBWhite295,
	FlipFunctionBBBlack295,
	FlipFunctionBBWhite296,
	FlipFunctionBBBlack296,
	FlipFunctionBBWhite297,
	FlipFunctionBBBlack297,
	FlipFunctionBBWhite298,
	FlipFunctionBBBlack298,
	FlipFunctionBBWhite299,
	FlipFunctionBBBlack299,
	FlipFunctionBBWhite300,
	FlipFunctionBBBlack300,
	FlipFunctionBBWhite301,
	FlipFunctionBBBlack301,
	FlipFunctionBBWhite302,
	FlipFunctionBBBlack302,
	FlipFunctionBBWhite303,
	FlipFunctionBBBlack303,
	FlipFunctionBBWhite304,
	FlipFunctionBBBlack304,
	FlipFunctionBBWhite305,
	FlipFunctionBBBlack305,
	FlipFunctionBBWhite306,
	FlipFunctionBBBlack306,
	FlipFunctionBBWhite307,
	FlipFunctionBBBlack307,
	FlipFunctionBBWhite308,
	FlipFunctionBBBlack308,
	FlipFunctionBBWhite309,
	FlipFunctionBBBlack309,
	FlipFunctionBBWhite310,
	FlipFunctionBBBlack310,
	FlipFunctionBBWhite311,
	FlipFunctionBBBlack311,
	FlipFunctionBBWhite312,
	FlipFunctionBBBlack312,
	FlipFunctionBBWhite313,
	FlipFunctionBBBlack313,
	FlipFunctionBBWhite314,
	FlipFunctionBBBlack314,
	FlipFunctionBBWhite315,
	FlipFunctionBBBlack315,
	FlipFunctionBBWhite316,
	FlipFunctionBBBlack316,
	FlipFunctionBBWhite317,
	FlipFunctionBBBlack317,
	FlipFunctionBBWhite318,
	FlipFunctionBBBlack318,
	FlipFunctionBBWhite319,
	FlipFunctionBBBlack319,
	FlipFunctionBBWhite320,
	FlipFunctionBBBlack320,
	FlipFunctionBBWhite321,
	FlipFunctionBBBlack321,
	FlipFunctionBBWhite322,
	FlipFunctionBBBlack322,
	FlipFunctionBBWhite323,
	FlipFunctionBBBlack323,
	FlipFunctionBBWhite324,
	FlipFunctionBBBlack324,
	FlipFunctionBBWhite325,
	FlipFunctionBBBlack325,
	FlipFunctionBBWhite326,
	FlipFunctionBBBlack326,
	FlipFunctionBBWhite327,
	FlipFunctionBBBlack327,
	FlipFunctionBBWhite328,
	FlipFunctionBBBlack328,
	FlipFunctionBBWhite329,
	FlipFunctionBBBlack329,
	FlipFunctionBBWhite330,
	FlipFunctionBBBlack330,
	FlipFunctionBBWhite331,
	FlipFunctionBBBlack331,
	FlipFunctionBBWhite332,
	FlipFunctionBBBlack332,
	FlipFunctionBBWhite333,
	FlipFunctionBBBlack333,
	FlipFunctionBBWhite334,
	FlipFunctionBBBlack334,
	FlipFunctionBBWhite335,
	FlipFunctionBBBlack335,
	FlipFunctionBBWhite336,
	FlipFunctionBBBlack336,
	FlipFunctionBBWhite337,
	FlipFunctionBBBlack337,
	FlipFunctionBBWhite338,
	FlipFunctionBBBlack338,
	FlipFunctionBBWhite339,
	FlipFunctionBBBlack339,
	FlipFunctionBBWhite340,
	FlipFunctionBBBlack340,
	FlipFunctionBBWhite341,
	FlipFunctionBBBlack341,
	FlipFunctionBBWhite342,
	FlipFunctionBBBlack342,
	FlipFunctionBBWhite343,
	FlipFunctionBBBlack343,
	FlipFunctionBBWhite344,
	FlipFunctionBBBlack344,
	FlipFunctionBBWhite345,
	FlipFunctionBBBlack345,
	FlipFunctionBBWhite346,
	FlipFunctionBBBlack346,
	FlipFunctionBBWhite347,
	FlipFunctionBBBlack347,
	FlipFunctionBBWhite348,
	FlipFunctionBBBlack348,
	FlipFunctionBBWhite349,
	FlipFunctionBBBlack349,
	FlipFunctionBBWhite350,
	FlipFunctionBBBlack350,
	FlipFunctionBBWhite351,
	FlipFunctionBBBlack351,
	FlipFunctionBBWhite352,
	FlipFunctionBBBlack352,
	FlipFunctionBBWhite353,
	FlipFunctionBBBlack353,
	FlipFunctionBBWhite354,
	FlipFunctionBBBlack354,
	FlipFunctionBBWhite355,
	FlipFunctionBBBlack355,
	FlipFunctionBBWhite356,
	FlipFunctionBBBlack356,
	FlipFunctionBBWhite357,
	FlipFunctionBBBlack357,
	FlipFunctionBBWhite358,
	FlipFunctionBBBlack358,
	FlipFunctionBBWhite359,
	FlipFunctionBBBlack359,
	FlipFunctionBBWhite360,
	FlipFunctionBBBlack360,
	FlipFunctionBBWhite361,
	FlipFunctionBBBlack361,
	FlipFunctionBBWhite362,
	FlipFunctionBBBlack362,
	FlipFunctionBBWhite363,
	FlipFunctionBBBlack363,
	FlipFunctionBBWhite364,
	FlipFunctionBBBlack364,
	FlipFunctionBBWhite365,
	FlipFunctionBBBlack365,
	FlipFunctionBBWhite366,
	FlipFunctionBBBlack366,
	FlipFunctionBBWhite367,
	FlipFunctionBBBlack367,
	FlipFunctionBBWhite368,
	FlipFunctionBBBlack368,
	FlipFunctionBBWhite369,
	FlipFunctionBBBlack369,
	FlipFunctionBBWhite370,
	FlipFunctionBBBlack370,
	FlipFunctionBBWhite371,
	FlipFunctionBBBlack371,
	FlipFunctionBBWhite372,
	FlipFunctionBBBlack372,
	FlipFunctionBBWhite373,
	FlipFunctionBBBlack373,
	FlipFunctionBBWhite374,
	FlipFunctionBBBlack374,
	FlipFunctionBBWhite375,
	FlipFunctionBBBlack375,
	FlipFunctionBBWhite376,
	FlipFunctionBBBlack376,
	FlipFunctionBBWhite377,
	FlipFunctionBBBlack377,
	FlipFunctionBBWhite378,
	FlipFunctionBBBlack378,
	FlipFunctionBBWhite379,
	FlipFunctionBBBlack379,
	FlipFunctionBBWhite380,
	FlipFunctionBBBlack380,
	FlipFunctionBBWhite381,
	FlipFunctionBBBlack381,
	FlipFunctionBBWhite382,
	FlipFunctionBBBlack382,
	FlipFunctionBBWhite383,
	FlipFunctionBBBlack383,
	FlipFunctionBBWhite384,
	FlipFunctionBBBlack384,
	FlipFunctionBBWhite385,
	FlipFunctionBBBlack385,
	FlipFunctionBBWhite386,
	FlipFunctionBBBlack386,
	FlipFunctionBBWhite387,
	FlipFunctionBBBlack387,
	FlipFunctionBBWhite388,
	FlipFunctionBBBlack388,
	FlipFunctionBBWhite389,
	FlipFunctionBBBlack389,
	FlipFunctionBBWhite390,
	FlipFunctionBBBlack390,
	FlipFunctionBBWhite391,
	FlipFunctionBBBlack391,
	FlipFunctionBBWhite392,
	FlipFunctionBBBlack392,
	FlipFunctionBBWhite393,
	FlipFunctionBBBlack393,
	FlipFunctionBBWhite394,
	FlipFunctionBBBlack394,
	FlipFunctionBBWhite395,
	FlipFunctionBBBlack395,
	FlipFunctionBBWhite396,
	FlipFunctionBBBlack396,
	FlipFunctionBBWhite397,
	FlipFunctionBBBlack397,
	FlipFunctionBBWhite398,
	FlipFunctionBBBlack398,
	FlipFunctionBBWhite399,
	FlipFunctionBBBlack399,
	FlipFunctionBBWhite400,
	FlipFunctionBBBlack400,
	FlipFunctionBBWhite401,
	FlipFunctionBBBlack401,
	FlipFunctionBBWhite402,
	FlipFunctionBBBlack402,
	FlipFunctionBBWhite403,
	FlipFunctionBBBlack403,
	FlipFunctionBBWhite404,
	FlipFunctionBBBlack404,
	FlipFunctionBBWhite405,
	FlipFunctionBBBlack405,
	FlipFunctionBBWhite406,
	FlipFunctionBBBlack406,
	FlipFunctionBBWhite407,
	FlipFunctionBBBlack407,
	FlipFunctionBBWhite408,
	FlipFunctionBBBlack408,
	FlipFunctionBBWhite409,
	FlipFunctionBBBlack409,
	FlipFunctionBBWhite410,
	FlipFunctionBBBlack410,
	FlipFunctionBBWhite411,
	FlipFunctionBBBlack411,
	FlipFunctionBBWhite412,
	FlipFunctionBBBlack412,
	FlipFunctionBBWhite413,
	FlipFunctionBBBlack413,
	FlipFunctionBBWhite414,
	FlipFunctionBBBlack414,
	FlipFunctionBBWhite415,
	FlipFunctionBBBlack415,
	FlipFunctionBBWhite416,
	FlipFunctionBBBlack416,
	FlipFunctionBBWhite417,
	FlipFunctionBBBlack417,
	FlipFunctionBBWhite418,
	FlipFunctionBBBlack418,
	FlipFunctionBBWhite419,
	FlipFunctionBBBlack419,
	FlipFunctionBBWhite420,
	FlipFunctionBBBlack420,
	FlipFunctionBBWhite421,
	FlipFunctionBBBlack421,
	FlipFunctionBBWhite422,
	FlipFunctionBBBlack422,
	FlipFunctionBBWhite423,
	FlipFunctionBBBlack423,
	FlipFunctionBBWhite424,
	FlipFunctionBBBlack424,
	FlipFunctionBBWhite425,
	FlipFunctionBBBlack425,
	FlipFunctionBBWhite426,
	FlipFunctionBBBlack426,
	FlipFunctionBBWhite427,
	FlipFunctionBBBlack427,
	FlipFunctionBBWhite428,
	FlipFunctionBBBlack428,
	FlipFunctionBBWhite429,
	FlipFunctionBBBlack429,
	FlipFunctionBBWhite430,
	FlipFunctionBBBlack430,
	FlipFunctionBBWhite431,
	FlipFunctionBBBlack431,
	FlipFunctionBBWhite432,
	FlipFunctionBBBlack432,
	FlipFunctionBBWhite433,
	FlipFunctionBBBlack433,
	FlipFunctionBBWhite434,
	FlipFunctionBBBlack434,
	FlipFunctionBBWhite435,
	FlipFunctionBBBlack435,
	FlipFunctionBBWhite436,
	FlipFunctionBBBlack436,
	FlipFunctionBBWhite437,
	FlipFunctionBBBlack437,
	FlipFunctionBBWhite438,
	FlipFunctionBBBlack438,
	FlipFunctionBBWhite439,
	FlipFunctionBBBlack439,
	FlipFunctionBBWhite440,
	FlipFunctionBBBlack440,
	FlipFunctionBBWhite441,
	FlipFunctionBBBlack441,
	FlipFunctionBBWhite442,
	FlipFunctionBBBlack442,
	FlipFunctionBBWhite443,
	FlipFunctionBBBlack443,
	FlipFunctionBBWhite444,
	FlipFunctionBBBlack444,
	FlipFunctionBBWhite445,
	FlipFunctionBBBlack445,
	FlipFunctionBBWhite446,
	FlipFunctionBBBlack446,
	FlipFunctionBBWhite447,
	FlipFunctionBBBlack447,
	FlipFunctionBBWhite448,
	FlipFunctionBBBlack448,
	FlipFunctionBBWhite449,
	FlipFunctionBBBlack449,
	FlipFunctionBBWhite450,
	FlipFunctionBBBlack450,
	FlipFunctionBBWhite451,
	FlipFunctionBBBlack451,
	FlipFunctionBBWhite452,
	FlipFunctionBBBlack452,
	FlipFunctionBBWhite453,
	FlipFunctionBBBlack453,
	FlipFunctionBBWhite454,
	FlipFunctionBBBlack454,
	FlipFunctionBBWhite455,
	FlipFunctionBBBlack455,
	FlipFunctionBBWhite456,
	FlipFunctionBBBlack456,
	FlipFunctionBBWhite457,
	FlipFunctionBBBlack457,
	FlipFunctionBBWhite458,
	FlipFunctionBBBlack458,
	FlipFunctionBBWhite459,
	FlipFunctionBBBlack459,
	FlipFunctionBBWhite460,
	FlipFunctionBBBlack460,
	FlipFunctionBBWhite461,
	FlipFunctionBBBlack461,
	FlipFunctionBBWhite462,
	FlipFunctionBBBlack462,
	FlipFunctionBBWhite463,
	FlipFunctionBBBlack463,
	FlipFunctionBBWhite464,
	FlipFunctionBBBlack464,
	FlipFunctionBBWhite465,
	FlipFunctionBBBlack465,
	FlipFunctionBBWhite466,
	FlipFunctionBBBlack466,
	FlipFunctionBBWhite467,
	FlipFunctionBBBlack467,
	FlipFunctionBBWhite468,
	FlipFunctionBBBlack468,
	FlipFunctionBBWhite469,
	FlipFunctionBBBlack469,
	FlipFunctionBBWhite470,
	FlipFunctionBBBlack470,
	FlipFunctionBBWhite471,
	FlipFunctionBBBlack471,
	FlipFunctionBBWhite472,
	FlipFunctionBBBlack472,
	FlipFunctionBBWhite473,
	FlipFunctionBBBlack473,
	FlipFunctionBBWhite474,
	FlipFunctionBBBlack474,
	FlipFunctionBBWhite475,
	FlipFunctionBBBlack475,
	FlipFunctionBBWhite476,
	FlipFunctionBBBlack476,
	FlipFunctionBBWhite477,
	FlipFunctionBBBlack477,
	FlipFunctionBBWhite478,
	FlipFunctionBBBlack478,
	FlipFunctionBBWhite479,
	FlipFunctionBBBlack479,
	FlipFunctionBBWhite480,
	FlipFunctionBBBlack480,
	FlipFunctionBBWhite481,
	FlipFunctionBBBlack481,
	FlipFunctionBBWhite482,
	FlipFunctionBBBlack482,
	FlipFunctionBBWhite483,
	FlipFunctionBBBlack483,
	FlipFunctionBBWhite484,
	FlipFunctionBBBlack484,
	FlipFunctionBBWhite485,
	FlipFunctionBBBlack485,
	FlipFunctionBBWhite486,
	FlipFunctionBBBlack486,
	FlipFunctionBBWhite487,
	FlipFunctionBBBlack487,
	FlipFunctionBBWhite488,
	FlipFunctionBBBlack488,
	FlipFunctionBBWhite489,
	FlipFunctionBBBlack489,
	FlipFunctionBBWhite490,
	FlipFunctionBBBlack490,
	FlipFunctionBBWhite491,
	FlipFunctionBBBlack491,
	FlipFunctionBBWhite492,
	FlipFunctionBBBlack492,
	FlipFunctionBBWhite493,
	FlipFunctionBBBlack493,
	FlipFunctionBBWhite494,
	FlipFunctionBBBlack494,
	FlipFunctionBBWhite495,
	FlipFunctionBBBlack495,
	FlipFunctionBBWhite496,
	FlipFunctionBBBlack496,
	FlipFunctionBBWhite497,
	FlipFunctionBBBlack497,
	FlipFunctionBBWhite498,
	FlipFunctionBBBlack498,
	FlipFunctionBBWhite499,
	FlipFunctionBBBlack499,
	FlipFunctionBBWhite500,
	FlipFunctionBBBlack500,
	FlipFunctionBBWhite501,
	FlipFunctionBBBlack501,
	FlipFunctionBBWhite502,
	FlipFunctionBBBlack502,
	FlipFunctionBBWhite503,
	FlipFunctionBBBlack503,
	FlipFunctionBBWhite504,
	FlipFunctionBBBlack504,
	FlipFunctionBBWhite505,
	FlipFunctionBBBlack505,
	FlipFunctionBBWhite506,
	FlipFunctionBBBlack506,
	FlipFunctionBBWhite507,
	FlipFunctionBBBlack507,
	FlipFunctionBBWhite508,
	FlipFunctionBBBlack508,
	FlipFunctionBBWhite509,
	FlipFunctionBBBlack509,
	FlipFunctionBBWhite510,
	FlipFunctionBBBlack510,
	FlipFunctionBBWhite511,
	FlipFunctionBBBlack511,
	FlipFunctionBBWhite512,
	FlipFunctionBBBlack512,
	FlipFunctionBBWhite513,
	FlipFunctionBBBlack513,
	FlipFunctionBBWhite514,
	FlipFunctionBBBlack514,
	FlipFunctionBBWhite515,
	FlipFunctionBBBlack515,
	FlipFunctionBBWhite516,
	FlipFunctionBBBlack516,
	FlipFunctionBBWhite517,
	FlipFunctionBBBlack517,
	FlipFunctionBBWhite518,
	FlipFunctionBBBlack518,
	FlipFunctionBBWhite519,
	FlipFunctionBBBlack519,
	FlipFunctionBBWhite520,
	FlipFunctionBBBlack520,
	FlipFunctionBBWhite521,
	FlipFunctionBBBlack521,
	FlipFunctionBBWhite522,
	FlipFunctionBBBlack522,
	FlipFunctionBBWhite523,
	FlipFunctionBBBlack523,
	FlipFunctionBBWhite524,
	FlipFunctionBBBlack524,
	FlipFunctionBBWhite525,
	FlipFunctionBBBlack525,
	FlipFunctionBBWhite526,
	FlipFunctionBBBlack526,
	FlipFunctionBBWhite527,
	FlipFunctionBBBlack527,
	FlipFunctionBBWhite528,
	FlipFunctionBBBlack528,
	FlipFunctionBBWhite529,
	FlipFunctionBBBlack529,
	FlipFunctionBBWhite530,
	FlipFunctionBBBlack530,
	FlipFunctionBBWhite531,
	FlipFunctionBBBlack531,
	FlipFunctionBBWhite532,
	FlipFunctionBBBlack532,
	FlipFunctionBBWhite533,
	FlipFunctionBBBlack533,
	FlipFunctionBBWhite534,
	FlipFunctionBBBlack534,
	FlipFunctionBBWhite535,
	FlipFunctionBBBlack535,
	FlipFunctionBBWhite536,
	FlipFunctionBBBlack536,
	FlipFunctionBBWhite537,
	FlipFunctionBBBlack537,
	FlipFunctionBBWhite538,
	FlipFunctionBBBlack538,
	FlipFunctionBBWhite539,
	FlipFunctionBBBlack539,
	FlipFunctionBBWhite540,
	FlipFunctionBBBlack540,
	FlipFunctionBBWhite541,
	FlipFunctionBBBlack541,
	FlipFunctionBBWhite542,
	FlipFunctionBBBlack542,
	FlipFunctionBBWhite543,
	FlipFunctionBBBlack543,
	FlipFunctionBBWhite544,
	FlipFunctionBBBlack544,
	FlipFunctionBBWhite545,
	FlipFunctionBBBlack545,
	FlipFunctionBBWhite546,
	FlipFunctionBBBlack546,
	FlipFunctionBBWhite547,
	FlipFunctionBBBlack547,
	FlipFunctionBBWhite548,
	FlipFunctionBBBlack548,
	FlipFunctionBBWhite549,
	FlipFunctionBBBlack549,
	FlipFunctionBBWhite550,
	FlipFunctionBBBlack550,
	FlipFunctionBBWhite551,
	FlipFunctionBBBlack551,
	FlipFunctionBBWhite552,
	FlipFunctionBBBlack552,
	FlipFunctionBBWhite553,
	FlipFunctionBBBlack553,
	FlipFunctionBBWhite554,
	FlipFunctionBBBlack554,
	FlipFunctionBBWhite555,
	FlipFunctionBBBlack555,
	FlipFunctionBBWhite556,
	FlipFunctionBBBlack556,
	FlipFunctionBBWhite557,
	FlipFunctionBBBlack557,
	FlipFunctionBBWhite558,
	FlipFunctionBBBlack558,
	FlipFunctionBBWhite559,
	FlipFunctionBBBlack559,
	FlipFunctionBBWhite560,
	FlipFunctionBBBlack560,
	FlipFunctionBBWhite561,
	FlipFunctionBBBlack561,
	FlipFunctionBBWhite562,
	FlipFunctionBBBlack562,
	FlipFunctionBBWhite563,
	FlipFunctionBBBlack563,
	FlipFunctionBBWhite564,
	FlipFunctionBBBlack564,
	FlipFunctionBBWhite565,
	FlipFunctionBBBlack565,
	FlipFunctionBBWhite566,
	FlipFunctionBBBlack566,
	FlipFunctionBBWhite567,
	FlipFunctionBBBlack567,
	FlipFunctionBBWhite568,
	FlipFunctionBBBlack568,
	FlipFunctionBBWhite569,
	FlipFunctionBBBlack569,
	FlipFunctionBBWhite570,
	FlipFunctionBBBlack570,
	FlipFunctionBBWhite571,
	FlipFunctionBBBlack571,
	FlipFunctionBBWhite572,
	FlipFunctionBBBlack572,
	FlipFunctionBBWhite573,
	FlipFunctionBBBlack573,
	FlipFunctionBBWhite574,
	FlipFunctionBBBlack574,
	FlipFunctionBBWhite575,
	FlipFunctionBBBlack575,
	FlipFunctionBBWhite576,
	FlipFunctionBBBlack576,
	FlipFunctionBBWhite577,
	FlipFunctionBBBlack577,
	FlipFunctionBBWhite578,
	FlipFunctionBBBlack578,
	FlipFunctionBBWhite579,
	FlipFunctionBBBlack579,
	FlipFunctionBBWhite580,
	FlipFunctionBBBlack580,
	FlipFunctionBBWhite581,
	FlipFunctionBBBlack581,
	FlipFunctionBBWhite582,
	FlipFunctionBBBlack582,
	FlipFunctionBBWhite583,
	FlipFunctionBBBlack583,
	FlipFunctionBBWhite584,
	FlipFunctionBBBlack584,
	FlipFunctionBBWhite585,
	FlipFunctionBBBlack585,
	FlipFunctionBBWhite586,
	FlipFunctionBBBlack586,
	FlipFunctionBBWhite587,
	FlipFunctionBBBlack587,
	FlipFunctionBBWhite588,
	FlipFunctionBBBlack588,
	FlipFunctionBBWhite589,
	FlipFunctionBBBlack589,
	FlipFunctionBBWhite590,
	FlipFunctionBBBlack590,
	FlipFunctionBBWhite591,
	FlipFunctionBBBlack591,
	FlipFunctionBBWhite592,
	FlipFunctionBBBlack592,
	FlipFunctionBBWhite593,
	FlipFunctionBBBlack593,
	FlipFunctionBBWhite594,
	FlipFunctionBBBlack594,
	FlipFunctionBBWhite595,
	FlipFunctionBBBlack595,
	FlipFunctionBBWhite596,
	FlipFunctionBBBlack596,
	FlipFunctionBBWhite597,
	FlipFunctionBBBlack597,
	FlipFunctionBBWhite598,
	FlipFunctionBBBlack598,
	FlipFunctionBBWhite599,
	FlipFunctionBBBlack599,
	FlipFunctionBBWhite600,
	FlipFunctionBBBlack600,
	FlipFunctionBBWhite601,
	FlipFunctionBBBlack601,
	FlipFunctionBBWhite602,
	FlipFunctionBBBlack602,
	FlipFunctionBBWhite603,
	FlipFunctionBBBlack603,
	FlipFunctionBBWhite604,
	FlipFunctionBBBlack604,
	FlipFunctionBBWhite605,
	FlipFunctionBBBlack605,
	FlipFunctionBBWhite606,
	FlipFunctionBBBlack606,
	FlipFunctionBBWhite607,
	FlipFunctionBBBlack607,
	FlipFunctionBBWhite608,
	FlipFunctionBBBlack608,
	FlipFunctionBBWhite609,
	FlipFunctionBBBlack609,
	FlipFunctionBBWhite610,
	FlipFunctionBBBlack610,
	FlipFunctionBBWhite611,
	FlipFunctionBBBlack611,
	FlipFunctionBBWhite612,
	FlipFunctionBBBlack612,
	FlipFunctionBBWhite613,
	FlipFunctionBBBlack613,
	FlipFunctionBBWhite614,
	FlipFunctionBBBlack614,
	FlipFunctionBBWhite615,
	FlipFunctionBBBlack615,
	FlipFunctionBBWhite616,
	FlipFunctionBBBlack616,
	FlipFunctionBBWhite617,
	FlipFunctionBBBlack617,
	FlipFunctionBBWhite618,
	FlipFunctionBBBlack618,
	FlipFunctionBBWhite619,
	FlipFunctionBBBlack619,
	FlipFunctionBBWhite620,
	FlipFunctionBBBlack620,
	FlipFunctionBBWhite621,
	FlipFunctionBBBlack621,
	FlipFunctionBBWhite622,
	FlipFunctionBBBlack622,
	FlipFunctionBBWhite623,
	FlipFunctionBBBlack623,
	FlipFunctionBBWhite624,
	FlipFunctionBBBlack624,
	FlipFunctionBBWhite625,
	FlipFunctionBBBlack625,
	FlipFunctionBBWhite626,
	FlipFunctionBBBlack626,
	FlipFunctionBBWhite627,
	FlipFunctionBBBlack627,
	FlipFunctionBBWhite628,
	FlipFunctionBBBlack628,
	FlipFunctionBBWhite629,
	FlipFunctionBBBlack629,
	FlipFunctionBBWhite630,
	FlipFunctionBBBlack630,
	FlipFunctionBBWhite631,
	FlipFunctionBBBlack631,
	FlipFunctionBBWhite632,
	FlipFunctionBBBlack632,
	FlipFunctionBBWhite633,
	FlipFunctionBBBlack633,
	FlipFunctionBBWhite634,
	FlipFunctionBBBlack634,
	FlipFunctionBBWhite635,
	FlipFunctionBBBlack635,
	FlipFunctionBBWhite636,
	FlipFunctionBBBlack636,
	FlipFunctionBBWhite637,
	FlipFunctionBBBlack637,
	FlipFunctionBBWhite638,
	FlipFunctionBBBlack638,
	FlipFunctionBBWhite639,
	FlipFunctionBBBlack639,
	FlipFunctionBBWhite640,
	FlipFunctionBBBlack640,
	FlipFunctionBBWhite641,
	FlipFunctionBBBlack641,
	FlipFunctionBBWhite642,
	FlipFunctionBBBlack642,
	FlipFunctionBBWhite643,
	FlipFunctionBBBlack643,
	FlipFunctionBBWhite644,
	FlipFunctionBBBlack644,
	FlipFunctionBBWhite645,
	FlipFunctionBBBlack645,
	FlipFunctionBBWhite646,
	FlipFunctionBBBlack646,
	FlipFunctionBBWhite647,
	FlipFunctionBBBlack647,
	FlipFunctionBBWhite648,
	FlipFunctionBBBlack648,
	FlipFunctionBBWhite649,
	FlipFunctionBBBlack649,
	FlipFunctionBBWhite650,
	FlipFunctionBBBlack650,
	FlipFunctionBBWhite651,
	FlipFunctionBBBlack651,
	FlipFunctionBBWhite652,
	FlipFunctionBBBlack652,
	FlipFunctionBBWhite653,
	FlipFunctionBBBlack653,
	FlipFunctionBBWhite654,
	FlipFunctionBBBlack654,
	FlipFunctionBBWhite655,
	FlipFunctionBBBlack655,
	FlipFunctionBBWhite656,
	FlipFunctionBBBlack656,
	FlipFunctionBBWhite657,
	FlipFunctionBBBlack657,
	FlipFunctionBBWhite658,
	FlipFunctionBBBlack658,
	FlipFunctionBBWhite659,
	FlipFunctionBBBlack659,
	FlipFunctionBBWhite660,
	FlipFunctionBBBlack660,
	FlipFunctionBBWhite661,
	FlipFunctionBBBlack661,
	FlipFunctionBBWhite662,
	FlipFunctionBBBlack662,
	FlipFunctionBBWhite663,
	FlipFunctionBBBlack663,
	FlipFunctionBBWhite664,
	FlipFunctionBBBlack664,
	FlipFunctionBBWhite665,
	FlipFunctionBBBlack665,
	FlipFunctionBBWhite666,
	FlipFunctionBBBlack666,
	FlipFunctionBBWhite667,
	FlipFunctionBBBlack667,
	FlipFunctionBBWhite668,
	FlipFunctionBBBlack668,
	FlipFunctionBBWhite669,
	FlipFunctionBBBlack669,
	FlipFunctionBBWhite670,
	FlipFunctionBBBlack670,
	FlipFunctionBBWhite671,
	FlipFunctionBBBlack671,
	FlipFunctionBBWhite672,
	FlipFunctionBBBlack672,
	FlipFunctionBBWhite673,
	FlipFunctionBBBlack673,
	FlipFunctionBBWhite674,
	FlipFunctionBBBlack674,
	FlipFunctionBBWhite675,
	FlipFunctionBBBlack675,
	FlipFunctionBBWhite676,
	FlipFunctionBBBlack676,
	FlipFunctionBBWhite677,
	FlipFunctionBBBlack677,
	FlipFunctionBBWhite678,
	FlipFunctionBBBlack678,
	FlipFunctionBBWhite679,
	FlipFunctionBBBlack679,
	FlipFunctionBBWhite680,
	FlipFunctionBBBlack680,
	FlipFunctionBBWhite681,
	FlipFunctionBBBlack681,
	FlipFunctionBBWhite682,
	FlipFunctionBBBlack682,
	FlipFunctionBBWhite683,
	FlipFunctionBBBlack683,
	FlipFunctionBBWhite684,
	FlipFunctionBBBlack684,
	FlipFunctionBBWhite685,
	FlipFunctionBBBlack685,
	FlipFunctionBBWhite686,
	FlipFunctionBBBlack686,
	FlipFunctionBBWhite687,
	FlipFunctionBBBlack687,
	FlipFunctionBBWhite688,
	FlipFunctionBBBlack688,
	FlipFunctionBBWhite689,
	FlipFunctionBBBlack689,
	FlipFunctionBBWhite690,
	FlipFunctionBBBlack690,
	FlipFunctionBBWhite691,
	FlipFunctionBBBlack691,
	FlipFunctionBBWhite692,
	FlipFunctionBBBlack692,
	FlipFunctionBBWhite693,
	FlipFunctionBBBlack693,
	FlipFunctionBBWhite694,
	FlipFunctionBBBlack694,
	FlipFunctionBBWhite695,
	FlipFunctionBBBlack695,
	FlipFunctionBBWhite696,
	FlipFunctionBBBlack696,
	FlipFunctionBBWhite697,
	FlipFunctionBBBlack697,
	FlipFunctionBBWhite698,
	FlipFunctionBBBlack698,
	FlipFunctionBBWhite699,
	FlipFunctionBBBlack699,
	FlipFunctionBBWhite700,
	FlipFunctionBBBlack700,
	FlipFunctionBBWhite701,
	FlipFunctionBBBlack701,
	FlipFunctionBBWhite702,
	FlipFunctionBBBlack702,
	FlipFunctionBBWhite703,
	FlipFunctionBBBlack703,
	FlipFunctionBBWhite704,
	FlipFunctionBBBlack704,
	FlipFunctionBBWhite705,
	FlipFunctionBBBlack705,
	FlipFunctionBBWhite706,
	FlipFunctionBBBlack706,
	FlipFunctionBBWhite707,
	FlipFunctionBBBlack707,
	FlipFunctionBBWhite708,
	FlipFunctionBBBlack708,
	FlipFunctionBBWhite709,
	FlipFunctionBBBlack709,
	FlipFunctionBBWhite710,
	FlipFunctionBBBlack710,
	FlipFunctionBBWhite711,
	FlipFunctionBBBlack711,
	FlipFunctionBBWhite712,
	FlipFunctionBBBlack712,
	FlipFunctionBBWhite713,
	FlipFunctionBBBlack713,
	FlipFunctionBBWhite714,
	FlipFunctionBBBlack714,
	FlipFunctionBBWhite715,
	FlipFunctionBBBlack715,
	FlipFunctionBBWhite716,
	FlipFunctionBBBlack716,
	FlipFunctionBBWhite717,
	FlipFunctionBBBlack717,
	FlipFunctionBBWhite718,
	FlipFunctionBBBlack718,
	FlipFunctionBBWhite719,
	FlipFunctionBBBlack719,
	FlipFunctionBBWhite720,
	FlipFunctionBBBlack720,
	FlipFunctionBBWhite721,
	FlipFunctionBBBlack721,
	FlipFunctionBBWhite722,
	FlipFunctionBBBlack722,
	FlipFunctionBBWhite723,
	FlipFunctionBBBlack723,
	FlipFunctionBBWhite724,
	FlipFunctionBBBlack724,
	FlipFunctionBBWhite725,
	FlipFunctionBBBlack725,
	FlipFunctionBBWhite726,
	FlipFunctionBBBlack726,
	FlipFunctionBBWhite727,
	FlipFunctionBBBlack727,
	FlipFunctionBBWhite728,
	FlipFunctionBBBlack728,
	FlipFunctionBBWhite729,
	FlipFunctionBBBlack729,
	FlipFunctionBBWhite730,
	FlipFunctionBBBlack730,
	FlipFunctionBBWhite731,
	FlipFunctionBBBlack731,
	FlipFunctionBBWhite732,
	FlipFunctionBBBlack732,
	FlipFunctionBBWhite733,
	FlipFunctionBBBlack733,
	FlipFunctionBBWhite734,
	FlipFunctionBBBlack734,
	FlipFunctionBBWhite735,
	FlipFunctionBBBlack735,
	FlipFunctionBBWhite736,
	FlipFunctionBBBlack736,
	FlipFunctionBBWhite737,
	FlipFunctionBBBlack737,
	FlipFunctionBBWhite738,
	FlipFunctionBBBlack738,
	FlipFunctionBBWhite739,
	FlipFunctionBBBlack739,
	FlipFunctionBBWhite740,
	FlipFunctionBBBlack740,
	FlipFunctionBBWhite741,
	FlipFunctionBBBlack741,
	FlipFunctionBBWhite742,
	FlipFunctionBBBlack742,
	FlipFunctionBBWhite743,
	FlipFunctionBBBlack743,
	FlipFunctionBBWhite744,
	FlipFunctionBBBlack744,
	FlipFunctionBBWhite745,
	FlipFunctionBBBlack745,
	FlipFunctionBBWhite746,
	FlipFunctionBBBlack746,
	FlipFunctionBBWhite747,
	FlipFunctionBBBlack747,
	FlipFunctionBBWhite748,
	FlipFunctionBBBlack748,
	FlipFunctionBBWhite749,
	FlipFunctionBBBlack749,
	FlipFunctionBBWhite750,
	FlipFunctionBBBlack750,
	FlipFunctionBBWhite751,
	FlipFunctionBBBlack751,
	FlipFunctionBBWhite752,
	FlipFunctionBBBlack752,
	FlipFunctionBBWhite753,
	FlipFunctionBBBlack753,
	FlipFunctionBBWhite754,
	FlipFunctionBBBlack754,
	FlipFunctionBBWhite755,
	FlipFunctionBBBlack755,
	FlipFunctionBBWhite756,
	FlipFunctionBBBlack756,
	FlipFunctionBBWhite757,
	FlipFunctionBBBlack757,
	FlipFunctionBBWhite758,
	FlipFunctionBBBlack758,
	FlipFunctionBBWhite759,
	FlipFunctionBBBlack759,
	FlipFunctionBBWhite760,
	FlipFunctionBBBlack760,
	FlipFunctionBBWhite761,
	FlipFunctionBBBlack761,
	FlipFunctionBBWhite762,
	FlipFunctionBBBlack762,
	FlipFunctionBBWhite763,
	FlipFunctionBBBlack763,
	FlipFunctionBBWhite764,
	FlipFunctionBBBlack764,
	FlipFunctionBBWhite765,
	FlipFunctionBBBlack765,
	FlipFunctionBBWhite766,
	FlipFunctionBBBlack766,
	FlipFunctionBBWhite767,
	FlipFunctionBBBlack767,
	FlipFunctionBBWhite768,
	FlipFunctionBBBlack768,
	FlipFunctionBBWhite769,
	FlipFunctionBBBlack769,
	FlipFunctionBBWhite770,
	FlipFunctionBBBlack770,
	FlipFunctionBBWhite771,
	FlipFunctionBBBlack771,
	FlipFunctionBBWhite772,
	FlipFunctionBBBlack772,
	FlipFunctionBBWhite773,
	FlipFunctionBBBlack773,
	FlipFunctionBBWhite774,
	FlipFunctionBBBlack774,
	FlipFunctionBBWhite775,
	FlipFunctionBBBlack775,
	FlipFunctionBBWhite776,
	FlipFunctionBBBlack776,
	FlipFunctionBBWhite777,
	FlipFunctionBBBlack777,
	FlipFunctionBBWhite778,
	FlipFunctionBBBlack778,
	FlipFunctionBBWhite779,
	FlipFunctionBBBlack779,
	FlipFunctionBBWhite780,
	FlipFunctionBBBlack780,
	FlipFunctionBBWhite781,
	FlipFunctionBBBlack781,
	FlipFunctionBBWhite782,
	FlipFunctionBBBlack782,
	FlipFunctionBBWhite783,
	FlipFunctionBBBlack783,
	FlipFunctionBBWhite784,
	FlipFunctionBBBlack784,
	FlipFunctionBBWhite785,
	FlipFunctionBBBlack785,
	FlipFunctionBBWhite786,
	FlipFunctionBBBlack786,
	FlipFunctionBBWhite787,
	FlipFunctionBBBlack787,
	FlipFunctionBBWhite788,
	FlipFunctionBBBlack788,
	FlipFunctionBBWhite789,
	FlipFunctionBBBlack789,
	FlipFunctionBBWhite790,
	FlipFunctionBBBlack790,
	FlipFunctionBBWhite791,
	FlipFunctionBBBlack791,
	FlipFunctionBBWhite792,
	FlipFunctionBBBlack792,
	FlipFunctionBBWhite793,
	FlipFunctionBBBlack793,
	FlipFunctionBBWhite794,
	FlipFunctionBBBlack794,
	FlipFunctionBBWhite795,
	FlipFunctionBBBlack795,
	FlipFunctionBBWhite796,
	FlipFunctionBBBlack796,
	FlipFunctionBBWhite797,
	FlipFunctionBBBlack797,
	FlipFunctionBBWhite798,
	FlipFunctionBBBlack798,
	FlipFunctionBBWhite799,
	FlipFunctionBBBlack799,
	FlipFunctionBBWhite800,
	FlipFunctionBBBlack800,
	FlipFunctionBBWhite801,
	FlipFunctionBBBlack801,
	FlipFunctionBBWhite802,
	FlipFunctionBBBlack802,
	FlipFunctionBBWhite803,
	FlipFunctionBBBlack803,
	FlipFunctionBBWhite804,
	FlipFunctionBBBlack804,
	FlipFunctionBBWhite805,
	FlipFunctionBBBlack805,
	FlipFunctionBBWhite806,
	FlipFunctionBBBlack806,
	FlipFunctionBBWhite807,
	FlipFunctionBBBlack807,
	FlipFunctionBBWhite808,
	FlipFunctionBBBlack808,
	FlipFunctionBBWhite809,
	FlipFunctionBBBlack809,
	FlipFunctionBBWhite810,
	FlipFunctionBBBlack810,
	FlipFunctionBBWhite811,
	FlipFunctionBBBlack811,
	FlipFunctionBBWhite812,
	FlipFunctionBBBlack812,
	FlipFunctionBBWhite813,
	FlipFunctionBBBlack813,
	FlipFunctionBBWhite814,
	FlipFunctionBBBlack814,
	FlipFunctionBBWhite815,
	FlipFunctionBBBlack815,
	FlipFunctionBBWhite816,
	FlipFunctionBBBlack816,
	FlipFunctionBBWhite817,
	FlipFunctionBBBlack817,
	FlipFunctionBBWhite818,
	FlipFunctionBBBlack818,
	FlipFunctionBBWhite819,
	FlipFunctionBBBlack819,
	FlipFunctionBBWhite820,
	FlipFunctionBBBlack820,
	FlipFunctionBBWhite821,
	FlipFunctionBBBlack821,
	FlipFunctionBBWhite822,
	FlipFunctionBBBlack822,
	FlipFunctionBBWhite823,
	FlipFunctionBBBlack823,
	FlipFunctionBBWhite824,
	FlipFunctionBBBlack824,
	FlipFunctionBBWhite825,
	FlipFunctionBBBlack825,
	FlipFunctionBBWhite826,
	FlipFunctionBBBlack826,
	FlipFunctionBBWhite827,
	FlipFunctionBBBlack827,
	FlipFunctionBBWhite828,
	FlipFunctionBBBlack828,
	FlipFunctionBBWhite829,
	FlipFunctionBBBlack829,
	FlipFunctionBBWhite830,
	FlipFunctionBBBlack830,
	FlipFunctionBBWhite831,
	FlipFunctionBBBlack831,
	FlipFunctionBBWhite832,
	FlipFunctionBBBlack832,
	FlipFunctionBBWhite833,
	FlipFunctionBBBlack833,
	FlipFunctionBBWhite834,
	FlipFunctionBBBlack834,
	FlipFunctionBBWhite835,
	FlipFunctionBBBlack835,
	FlipFunctionBBWhite836,
	FlipFunctionBBBlack836,
	FlipFunctionBBWhite837,
	FlipFunctionBBBlack837,
	FlipFunctionBBWhite838,
	FlipFunctionBBBlack838,
	FlipFunctionBBWhite839,
	FlipFunctionBBBlack839,
	FlipFunctionBBWhite840,
	FlipFunctionBBBlack840,
	FlipFunctionBBWhite841,
	FlipFunctionBBBlack841,
	FlipFunctionBBWhite842,
	FlipFunctionBBBlack842,
	FlipFunctionBBWhite843,
	FlipFunctionBBBlack843,
	FlipFunctionBBWhite844,
	FlipFunctionBBBlack844,
	FlipFunctionBBWhite845,
	FlipFunctionBBBlack845,
	FlipFunctionBBWhite846,
	FlipFunctionBBBlack846,
	FlipFunctionBBWhite847,
	FlipFunctionBBBlack847,
	FlipFunctionBBWhite848,
	FlipFunctionBBBlack848,
	FlipFunctionBBWhite849,
	FlipFunctionBBBlack849,
	FlipFunctionBBWhite850,
	FlipFunctionBBBlack850,
	FlipFunctionBBWhite851,
	FlipFunctionBBBlack851,
	FlipFunctionBBWhite852,
	FlipFunctionBBBlack852,
	FlipFunctionBBWhite853,
	FlipFunctionBBBlack853,
	FlipFunctionBBWhite854,
	FlipFunctionBBBlack854,
	FlipFunctionBBWhite855,
	FlipFunctionBBBlack855,
	FlipFunctionBBWhite856,
	FlipFunctionBBBlack856,
	FlipFunctionBBWhite857,
	FlipFunctionBBBlack857,
	FlipFunctionBBWhite858,
	FlipFunctionBBBlack858,
	FlipFunctionBBWhite859,
	FlipFunctionBBBlack859,
	FlipFunctionBBWhite860,
	FlipFunctionBBBlack860,
	FlipFunctionBBWhite861,
	FlipFunctionBBBlack861,
	FlipFunctionBBWhite862,
	FlipFunctionBBBlack862,
	FlipFunctionBBWhite863,
	FlipFunctionBBBlack863,
	FlipFunctionBBWhite864,
	FlipFunctionBBBlack864,
	FlipFunctionBBWhite865,
	FlipFunctionBBBlack865,
	FlipFunctionBBWhite866,
	FlipFunctionBBBlack866,
	FlipFunctionBBWhite867,
	FlipFunctionBBBlack867,
	FlipFunctionBBWhite868,
	FlipFunctionBBBlack868,
	FlipFunctionBBWhite869,
	FlipFunctionBBBlack869,
	FlipFunctionBBWhite870,
	FlipFunctionBBBlack870,
	FlipFunctionBBWhite871,
	FlipFunctionBBBlack871,
	FlipFunctionBBWhite872,
	FlipFunctionBBBlack872,
	FlipFunctionBBWhite873,
	FlipFunctionBBBlack873,
	FlipFunctionBBWhite874,
	FlipFunctionBBBlack874,
	FlipFunctionBBWhite875,
	FlipFunctionBBBlack875,
	FlipFunctionBBWhite876,
	FlipFunctionBBBlack876,
	FlipFunctionBBWhite877,
	FlipFunctionBBBlack877,
	FlipFunctionBBWhite878,
	FlipFunctionBBBlack878,
	FlipFunctionBBWhite879,
	FlipFunctionBBBlack879,
	FlipFunctionBBWhite880,
	FlipFunctionBBBlack880,
	FlipFunctionBBWhite881,
	FlipFunctionBBBlack881,
	FlipFunctionBBWhite882,
	FlipFunctionBBBlack882,
	FlipFunctionBBWhite883,
	FlipFunctionBBBlack883,
	FlipFunctionBBWhite884,
	FlipFunctionBBBlack884,
	FlipFunctionBBWhite885,
	FlipFunctionBBBlack885,
	FlipFunctionBBWhite886,
	FlipFunctionBBBlack886,
	FlipFunctionBBWhite887,
	FlipFunctionBBBlack887,
	FlipFunctionBBWhite888,
	FlipFunctionBBBlack888,
	FlipFunctionBBWhite889,
	FlipFunctionBBBlack889,
	FlipFunctionBBWhite890,
	FlipFunctionBBBlack890,
	FlipFunctionBBWhite891,
	FlipFunctionBBBlack891,
	FlipFunctionBBWhite892,
	FlipFunctionBBBlack892,
	FlipFunctionBBWhite893,
	FlipFunctionBBBlack893,
	FlipFunctionBBWhite894,
	FlipFunctionBBBlack894,
	FlipFunctionBBWhite895,
	FlipFunctionBBBlack895,
	FlipFunctionBBWhite896,
	FlipFunctionBBBlack896,
	FlipFunctionBBWhite897,
	FlipFunctionBBBlack897,
	FlipFunctionBBWhite898,
	FlipFunctionBBBlack898,
	FlipFunctionBBWhite899,
	FlipFunctionBBBlack899,
	FlipFunctionBBWhite900,
	FlipFunctionBBBlack900,
	FlipFunctionBBWhite901,
	FlipFunctionBBBlack901,
	FlipFunctionBBWhite902,
	FlipFunctionBBBlack902,
	FlipFunctionBBWhite903,
	FlipFunctionBBBlack903,
	FlipFunctionBBWhite904,
	FlipFunctionBBBlack904,
	FlipFunctionBBWhite905,
	FlipFunctionBBBlack905,
	FlipFunctionBBWhite906,
	FlipFunctionBBBlack906,
	FlipFunctionBBWhite907,
	FlipFunctionBBBlack907,
	FlipFunctionBBWhite908,
	FlipFunctionBBBlack908,
	FlipFunctionBBWhite909,
	FlipFunctionBBBlack909,
	FlipFunctionBBWhite910,
	FlipFunctionBBBlack910,
	FlipFunctionBBWhite911,
	FlipFunctionBBBlack911,
	FlipFunctionBBWhite912,
	FlipFunctionBBBlack912,
	FlipFunctionBBWhite913,
	FlipFunctionBBBlack913,
	FlipFunctionBBWhite914,
	FlipFunctionBBBlack914,
	FlipFunctionBBWhite915,
	FlipFunctionBBBlack915,
	FlipFunctionBBWhite916,
	FlipFunctionBBBlack916,
	FlipFunctionBBWhite917,
	FlipFunctionBBBlack917,
	FlipFunctionBBWhite918,
	FlipFunctionBBBlack918,
	FlipFunctionBBWhite919,
	FlipFunctionBBBlack919,
	FlipFunctionBBWhite920,
	FlipFunctionBBBlack920,
	FlipFunctionBBWhite921,
	FlipFunctionBBBlack921,
	FlipFunctionBBWhite922,
	FlipFunctionBBBlack922,
	FlipFunctionBBWhite923,
	FlipFunctionBBBlack923,
	FlipFunctionBBWhite924,
	FlipFunctionBBBlack924,
	FlipFunctionBBWhite925,
	FlipFunctionBBBlack925,
	FlipFunctionBBWhite926,
	FlipFunctionBBBlack926,
	FlipFunctionBBWhite927,
	FlipFunctionBBBlack927,
	FlipFunctionBBWhite928,
	FlipFunctionBBBlack928,
	FlipFunctionBBWhite929,
	FlipFunctionBBBlack929,
	FlipFunctionBBWhite930,
	FlipFunctionBBBlack930,
	FlipFunctionBBWhite931,
	FlipFunctionBBBlack931,
	FlipFunctionBBWhite932,
	FlipFunctionBBBlack932,
	FlipFunctionBBWhite933,
	FlipFunctionBBBlack933,
	FlipFunctionBBWhite934,
	FlipFunctionBBBlack934,
	FlipFunctionBBWhite935,
	FlipFunctionBBBlack935,
	FlipFunctionBBWhite936,
	FlipFunctionBBBlack936,
	FlipFunctionBBWhite937,
	FlipFunctionBBBlack937,
	FlipFunctionBBWhite938,
	FlipFunctionBBBlack938,
	FlipFunctionBBWhite939,
	FlipFunctionBBBlack939,
	FlipFunctionBBWhite940,
	FlipFunctionBBBlack940,
	FlipFunctionBBWhite941,
	FlipFunctionBBBlack941,
	FlipFunctionBBWhite942,
	FlipFunctionBBBlack942,
	FlipFunctionBBWhite943,
	FlipFunctionBBBlack943,
	FlipFunctionBBWhite944,
	FlipFunctionBBBlack944,
	FlipFunctionBBWhite945,
	FlipFunctionBBBlack945,
	FlipFunctionBBWhite946,
	FlipFunctionBBBlack946,
	FlipFunctionBBWhite947,
	FlipFunctionBBBlack947,
	FlipFunctionBBWhite948,
	FlipFunctionBBBlack948,
	FlipFunctionBBWhite949,
	FlipFunctionBBBlack949,
	FlipFunctionBBWhite950,
	FlipFunctionBBBlack950,
	FlipFunctionBBWhite951,
	FlipFunctionBBBlack951,
	FlipFunctionBBWhite952,
	FlipFunctionBBBlack952,
	FlipFunctionBBWhite953,
	FlipFunctionBBBlack953,
	FlipFunctionBBWhite954,
	FlipFunctionBBBlack954,
	FlipFunctionBBWhite955,
	FlipFunctionBBBlack955,
	FlipFunctionBBWhite956,
	FlipFunctionBBBlack956,
	FlipFunctionBBWhite957,
	FlipFunctionBBBlack957,
	FlipFunctionBBWhite958,
	FlipFunctionBBBlack958,
	FlipFunctionBBWhite959,
	FlipFunctionBBBlack959,
	FlipFunctionBBWhite960,
	FlipFunctionBBBlack960,
	FlipFunctionBBWhite961,
	FlipFunctionBBBlack961,
	FlipFunctionBBWhite962,
	FlipFunctionBBBlack962,
	FlipFunctionBBWhite963,
	FlipFunctionBBBlack963,
	FlipFunctionBBWhite964,
	FlipFunctionBBBlack964,
	FlipFunctionBBWhite965,
	FlipFunctionBBBlack965,
	FlipFunctionBBWhite966,
	FlipFunctionBBBlack966,
	FlipFunctionBBWhite967,
	FlipFunctionBBBlack967,
	FlipFunctionBBWhite968,
	FlipFunctionBBBlack968,
	FlipFunctionBBWhite969,
	FlipFunctionBBBlack969,
	FlipFunctionBBWhite970,
	FlipFunctionBBBlack970,
	FlipFunctionBBWhite971,
	FlipFunctionBBBlack971,
	FlipFunctionBBWhite972,
	FlipFunctionBBBlack972,
	FlipFunctionBBWhite973,
	FlipFunctionBBBlack973,
	FlipFunctionBBWhite974,
	FlipFunctionBBBlack974,
	FlipFunctionBBWhite975,
	FlipFunctionBBBlack975,
	FlipFunctionBBWhite976,
	FlipFunctionBBBlack976,
	FlipFunctionBBWhite977,
	FlipFunctionBBBlack977,
	FlipFunctionBBWhite978,
	FlipFunctionBBBlack978,
	FlipFunctionBBWhite979,
	FlipFunctionBBBlack979,
	FlipFunctionBBWhite980,
	FlipFunctionBBBlack980,
	FlipFunctionBBWhite981,
	FlipFunctionBBBlack981,
	FlipFunctionBBWhite982,
	FlipFunctionBBBlack982,
	FlipFunctionBBWhite983,
	FlipFunctionBBBlack983,
	FlipFunctionBBWhite984,
	FlipFunctionBBBlack984,
	FlipFunctionBBWhite985,
	FlipFunctionBBBlack985,
	FlipFunctionBBWhite986,
	FlipFunctionBBBlack986,
	FlipFunctionBBWhite987,
	FlipFunctionBBBlack987,
	FlipFunctionBBWhite988,
	FlipFunctionBBBlack988,
	FlipFunctionBBWhite989,
	FlipFunctionBBBlack989,
	FlipFunctionBBWhite990,
	FlipFunctionBBBlack990,
	FlipFunctionBBWhite991,
	FlipFunctionBBBlack991,
	FlipFunctionBBWhite992,
	FlipFunctionBBBlack992,
	FlipFunctionBBWhite993,
	FlipFunctionBBBlack993,
	FlipFunctionBBWhite994,
	FlipFunctionBBBlack994,
	FlipFunctionBBWhite995,
	FlipFunctionBBBlack995,
	FlipFunctionBBWhite996,
	FlipFunctionBBBlack996,
	FlipFunctionBBWhite997,
	FlipFunctionBBBlack997,
	FlipFunctionBBWhite998,
	FlipFunctionBBBlack998,
	FlipFunctionBBWhite999,
	FlipFunctionBBBlack999,
	FlipFunctionBBWhite1000,
	FlipFunctionBBBlack1000,
	FlipFunctionBBWhite1001,
	FlipFunctionBBBlack1001,
	FlipFunctionBBWhite1002,
	FlipFunctionBBBlack1002,
	FlipFunctionBBWhite1003,
	FlipFunctionBBBlack1003,
	FlipFunctionBBWhite1004,
	FlipFunctionBBBlack1004,
	FlipFunctionBBWhite1005,
	FlipFunctionBBBlack1005,
	FlipFunctionBBWhite1006,
	FlipFunctionBBBlack1006,
	FlipFunctionBBWhite1007,
	FlipFunctionBBBlack1007,
	FlipFunctionBBWhite1008,
	FlipFunctionBBBlack1008,
	FlipFunctionBBWhite1009,
	FlipFunctionBBBlack1009,
	FlipFunctionBBWhite1010,
	FlipFunctionBBBlack1010,
	FlipFunctionBBWhite1011,
	FlipFunctionBBBlack1011,
	FlipFunctionBBWhite1012,
	FlipFunctionBBBlack1012,
	FlipFunctionBBWhite1013,
	FlipFunctionBBBlack1013,
	FlipFunctionBBWhite1014,
	FlipFunctionBBBlack1014,
	FlipFunctionBBWhite1015,
	FlipFunctionBBBlack1015,
	FlipFunctionBBWhite1016,
	FlipFunctionBBBlack1016,
	FlipFunctionBBWhite1017,
	FlipFunctionBBBlack1017,
	FlipFunctionBBWhite1018,
	FlipFunctionBBBlack1018,
	FlipFunctionBBWhite1019,
	FlipFunctionBBBlack1019,
	FlipFunctionBBWhite1020,
	FlipFunctionBBBlack1020,
	FlipFunctionBBWhite1021,
	FlipFunctionBBBlack1021,
	FlipFunctionBBWhite1022,
	FlipFunctionBBBlack1022,
	FlipFunctionBBWhite1023,
	FlipFunctionBBBlack1023,
	FlipFunctionBBWhite1024,
	FlipFunctionBBBlack1024,
	FlipFunctionBBWhite1025,
	FlipFunctionBBBlack1025,
	FlipFunctionBBWhite1026,
	FlipFunctionBBBlack1026,
	FlipFunctionBBWhite1027,
	FlipFunctionBBBlack1027,
	FlipFunctionBBWhite1028,
	FlipFunctionBBBlack1028,
	FlipFunctionBBWhite1029,
	FlipFunctionBBBlack1029,
	FlipFunctionBBWhite1030,
	FlipFunctionBBBlack1030,
	FlipFunctionBBWhite1031,
	FlipFunctionBBBlack1031,
	FlipFunctionBBWhite1032,
	FlipFunctionBBBlack1032,
	FlipFunctionBBWhite1033,
	FlipFunctionBBBlack1033,
	FlipFunctionBBWhite1034,
	FlipFunctionBBBlack1034,
	FlipFunctionBBWhite1035,
	FlipFunctionBBBlack1035,
	FlipFunctionBBWhite1036,
	FlipFunctionBBBlack1036,
	FlipFunctionBBWhite1037,
	FlipFunctionBBBlack1037,
	FlipFunctionBBWhite1038,
	FlipFunctionBBBlack1038,
	FlipFunctionBBWhite1039,
	FlipFunctionBBBlack1039,
	FlipFunctionBBWhite1040,
	FlipFunctionBBBlack1040,
	FlipFunctionBBWhite1041,
	FlipFunctionBBBlack1041,
	FlipFunctionBBWhite1042,
	FlipFunctionBBBlack1042,
	FlipFunctionBBWhite1043,
	FlipFunctionBBBlack1043,
	FlipFunctionBBWhite1044,
	FlipFunctionBBBlack1044,
	FlipFunctionBBWhite1045,
	FlipFunctionBBBlack1045,
	FlipFunctionBBWhite1046,
	FlipFunctionBBBlack1046,
	FlipFunctionBBWhite1047,
	FlipFunctionBBBlack1047,
	FlipFunctionBBWhite1048,
	FlipFunctionBBBlack1048,
	FlipFunctionBBWhite1049,
	FlipFunctionBBBlack1049,
	FlipFunctionBBWhite1050,
	FlipFunctionBBBlack1050,
	FlipFunctionBBWhite1051,
	FlipFunctionBBBlack1051,
	FlipFunctionBBWhite1052,
	FlipFunctionBBBlack1052,
	FlipFunctionBBWhite1053,
	FlipFunctionBBBlack1053,
	FlipFunctionBBWhite1054,
	FlipFunctionBBBlack1054,
	FlipFunctionBBWhite1055,
	FlipFunctionBBBlack1055,
	FlipFunctionBBWhite1056,
	FlipFunctionBBBlack1056,
	FlipFunctionBBWhite1057,
	FlipFunctionBBBlack1057,
	FlipFunctionBBWhite1058,
	FlipFunctionBBBlack1058,
	FlipFunctionBBWhite1059,
	FlipFunctionBBBlack1059,
	FlipFunctionBBWhite1060,
	FlipFunctionBBBlack1060,
	FlipFunctionBBWhite1061,
	FlipFunctionBBBlack1061,
	FlipFunctionBBWhite1062,
	FlipFunctionBBBlack1062,
	FlipFunctionBBWhite1063,
	FlipFunctionBBBlack1063,
	FlipFunctionBBWhite1064,
	FlipFunctionBBBlack1064,
	FlipFunctionBBWhite1065,
	FlipFunctionBBBlack1065,
	FlipFunctionBBWhite1066,
	FlipFunctionBBBlack1066,
	FlipFunctionBBWhite1067,
	FlipFunctionBBBlack1067,
	FlipFunctionBBWhite1068,
	FlipFunctionBBBlack1068,
	FlipFunctionBBWhite1069,
	FlipFunctionBBBlack1069,
	FlipFunctionBBWhite1070,
	FlipFunctionBBBlack1070,
	FlipFunctionBBWhite1071,
	FlipFunctionBBBlack1071,
	FlipFunctionBBWhite1072,
	FlipFunctionBBBlack1072,
	FlipFunctionBBWhite1073,
	FlipFunctionBBBlack1073,
	FlipFunctionBBWhite1074,
	FlipFunctionBBBlack1074,
	FlipFunctionBBWhite1075,
	FlipFunctionBBBlack1075,
	FlipFunctionBBWhite1076,
	FlipFunctionBBBlack1076,
	FlipFunctionBBWhite1077,
	FlipFunctionBBBlack1077,
	FlipFunctionBBWhite1078,
	FlipFunctionBBBlack1078,
	FlipFunctionBBWhite1079,
	FlipFunctionBBBlack1079,
	FlipFunctionBBWhite1080,
	FlipFunctionBBBlack1080,
	FlipFunctionBBWhite1081,
	FlipFunctionBBBlack1081,
	FlipFunctionBBWhite1082,
	FlipFunctionBBBlack1082,
	FlipFunctionBBWhite1083,
	FlipFunctionBBBlack1083,
	FlipFunctionBBWhite1084,
	FlipFunctionBBBlack1084,
	FlipFunctionBBWhite1085,
	FlipFunctionBBBlack1085,
	FlipFunctionBBWhite1086,
	FlipFunctionBBBlack1086,
	FlipFunctionBBWhite1087,
	FlipFunctionBBBlack1087,
	FlipFunctionBBWhite1088,
	FlipFunctionBBBlack1088,
	FlipFunctionBBWhite1089,
	FlipFunctionBBBlack1089,
	FlipFunctionBBWhite1090,
	FlipFunctionBBBlack1090,
	FlipFunctionBBWhite1091,
	FlipFunctionBBBlack1091,
	FlipFunctionBBWhite1092,
	FlipFunctionBBBlack1092,
	FlipFunctionBBWhite1093,
	FlipFunctionBBBlack1093,
	FlipFunctionBBWhite1094,
	FlipFunctionBBBlack1094,
	FlipFunctionBBWhite1095,
	FlipFunctionBBBlack1095,
	FlipFunctionBBWhite1096,
	FlipFunctionBBBlack1096,
	FlipFunctionBBWhite1097,
	FlipFunctionBBBlack1097,
	FlipFunctionBBWhite1098,
	FlipFunctionBBBlack1098,
	FlipFunctionBBWhite1099,
	FlipFunctionBBBlack1099,
	FlipFunctionBBWhite1100,
	FlipFunctionBBBlack1100,
	FlipFunctionBBWhite1101,
	FlipFunctionBBBlack1101,
	FlipFunctionBBWhite1102,
	FlipFunctionBBBlack1102,
	FlipFunctionBBWhite1103,
	FlipFunctionBBBlack1103,
	FlipFunctionBBWhite1104,
	FlipFunctionBBBlack1104,
	FlipFunctionBBWhite1105,
	FlipFunctionBBBlack1105,
	FlipFunctionBBWhite1106,
	FlipFunctionBBBlack1106,
	FlipFunctionBBWhite1107,
	FlipFunctionBBBlack1107,
	FlipFunctionBBWhite1108,
	FlipFunctionBBBlack1108,
	FlipFunctionBBWhite1109,
	FlipFunctionBBBlack1109,
	FlipFunctionBBWhite1110,
	FlipFunctionBBBlack1110,
	FlipFunctionBBWhite1111,
	FlipFunctionBBBlack1111,
	FlipFunctionBBWhite1112,
	FlipFunctionBBBlack1112,
	FlipFunctionBBWhite1113,
	FlipFunctionBBBlack1113,
	FlipFunctionBBWhite1114,
	FlipFunctionBBBlack1114,
	FlipFunctionBBWhite1115,
	FlipFunctionBBBlack1115,
	FlipFunctionBBWhite1116,
	FlipFunctionBBBlack1116,
	FlipFunctionBBWhite1117,
	FlipFunctionBBBlack1117,
	FlipFunctionBBWhite1118,
	FlipFunctionBBBlack1118,
	FlipFunctionBBWhite1119,
	FlipFunctionBBBlack1119,
	FlipFunctionBBWhite1120,
	FlipFunctionBBBlack1120,
	FlipFunctionBBWhite1121,
	FlipFunctionBBBlack1121,
	FlipFunctionBBWhite1122,
	FlipFunctionBBBlack1122,
	FlipFunctionBBWhite1123,
	FlipFunctionBBBlack1123,
	FlipFunctionBBWhite1124,
	FlipFunctionBBBlack1124,
	FlipFunctionBBWhite1125,
	FlipFunctionBBBlack1125,
	FlipFunctionBBWhite1126,
	FlipFunctionBBBlack1126,
	FlipFunctionBBWhite1127,
	FlipFunctionBBBlack1127,
	FlipFunctionBBWhite1128,
	FlipFunctionBBBlack1128,
	FlipFunctionBBWhite1129,
	FlipFunctionBBBlack1129,
	FlipFunctionBBWhite1130,
	FlipFunctionBBBlack1130,
	FlipFunctionBBWhite1131,
	FlipFunctionBBBlack1131,
	FlipFunctionBBWhite1132,
	FlipFunctionBBBlack1132,
	FlipFunctionBBWhite1133,
	FlipFunctionBBBlack1133,
	FlipFunctionBBWhite1134,
	FlipFunctionBBBlack1134,
	FlipFunctionBBWhite1135,
	FlipFunctionBBBlack1135,
	FlipFunctionBBWhite1136,
	FlipFunctionBBBlack1136,
	FlipFunctionBBWhite1137,
	FlipFunctionBBBlack1137,
	FlipFunctionBBWhite1138,
	FlipFunctionBBBlack1138,
	FlipFunctionBBWhite1139,
	FlipFunctionBBBlack1139,
	FlipFunctionBBWhite1140,
	FlipFunctionBBBlack1140,
	FlipFunctionBBWhite1141,
	FlipFunctionBBBlack1141,
	FlipFunctionBBWhite1142,
	FlipFunctionBBBlack1142,
	FlipFunctionBBWhite1143,
	FlipFunctionBBBlack1143,
	FlipFunctionBBWhite1144,
	FlipFunctionBBBlack1144,
	FlipFunctionBBWhite1145,
	FlipFunctionBBBlack1145,
	FlipFunctionBBWhite1146,
	FlipFunctionBBBlack1146,
	FlipFunctionBBWhite1147,
	FlipFunctionBBBlack1147,
	FlipFunctionBBWhite1148,
	FlipFunctionBBBlack1148,
	FlipFunctionBBWhite1149,
	FlipFunctionBBBlack1149,
	FlipFunctionBBWhite1150,
	FlipFunctionBBBlack1150,
	FlipFunctionBBWhite1151,
	FlipFunctionBBBlack1151,
	FlipFunctionBBWhite1152,
	FlipFunctionBBBlack1152,
	FlipFunctionBBWhite1153,
	FlipFunctionBBBlack1153,
	FlipFunctionBBWhite1154,
	FlipFunctionBBBlack1154,
	FlipFunctionBBWhite1155,
	FlipFunctionBBBlack1155,
	FlipFunctionBBWhite1156,
	FlipFunctionBBBlack1156,
	FlipFunctionBBWhite1157,
	FlipFunctionBBBlack1157,
	FlipFunctionBBWhite1158,
	FlipFunctionBBBlack1158,
	FlipFunctionBBWhite1159,
	FlipFunctionBBBlack1159,
	FlipFunctionBBWhite1160,
	FlipFunctionBBBlack1160,
	FlipFunctionBBWhite1161,
	FlipFunctionBBBlack1161,
	FlipFunctionBBWhite1162,
	FlipFunctionBBBlack1162,
	FlipFunctionBBWhite1163,
	FlipFunctionBBBlack1163,
	FlipFunctionBBWhite1164,
	FlipFunctionBBBlack1164,
	FlipFunctionBBWhite1165,
	FlipFunctionBBBlack1165,
	FlipFunctionBBWhite1166,
	FlipFunctionBBBlack1166,
	FlipFunctionBBWhite1167,
	FlipFunctionBBBlack1167,
	FlipFunctionBBWhite1168,
	FlipFunctionBBBlack1168,
	FlipFunctionBBWhite1169,
	FlipFunctionBBBlack1169,
	FlipFunctionBBWhite1170,
	FlipFunctionBBBlack1170,
	FlipFunctionBBWhite1171,
	FlipFunctionBBBlack1171,
	FlipFunctionBBWhite1172,
	FlipFunctionBBBlack1172,
	FlipFunctionBBWhite1173,
	FlipFunctionBBBlack1173,
	FlipFunctionBBWhite1174,
	FlipFunctionBBBlack1174,
	FlipFunctionBBWhite1175,
	FlipFunctionBBBlack1175,
	FlipFunctionBBWhite1176,
	FlipFunctionBBBlack1176,
	FlipFunctionBBWhite1177,
	FlipFunctionBBBlack1177,
	FlipFunctionBBWhite1178,
	FlipFunctionBBBlack1178,
	FlipFunctionBBWhite1179,
	FlipFunctionBBBlack1179,
	FlipFunctionBBWhite1180,
	FlipFunctionBBBlack1180,
	FlipFunctionBBWhite1181,
	FlipFunctionBBBlack1181,
	FlipFunctionBBWhite1182,
	FlipFunctionBBBlack1182,
	FlipFunctionBBWhite1183,
	FlipFunctionBBBlack1183,
	FlipFunctionBBWhite1184,
	FlipFunctionBBBlack1184,
	FlipFunctionBBWhite1185,
	FlipFunctionBBBlack1185,
	FlipFunctionBBWhite1186,
	FlipFunctionBBBlack1186,
	FlipFunctionBBWhite1187,
	FlipFunctionBBBlack1187,
	FlipFunctionBBWhite1188,
	FlipFunctionBBBlack1188,
	FlipFunctionBBWhite1189,
	FlipFunctionBBBlack1189,
	FlipFunctionBBWhite1190,
	FlipFunctionBBBlack1190,
	FlipFunctionBBWhite1191,
	FlipFunctionBBBlack1191,
	FlipFunctionBBWhite1192,
	FlipFunctionBBBlack1192,
	FlipFunctionBBWhite1193,
	FlipFunctionBBBlack1193,
	FlipFunctionBBWhite1194,
	FlipFunctionBBBlack1194,
	FlipFunctionBBWhite1195,
	FlipFunctionBBBlack1195,
	FlipFunctionBBWhite1196,
	FlipFunctionBBBlack1196,
	FlipFunctionBBWhite1197,
	FlipFunctionBBBlack1197,
	FlipFunctionBBWhite1198,
	FlipFunctionBBBlack1198,
	FlipFunctionBBWhite1199,
	FlipFunctionBBBlack1199,
	FlipFunctionBBWhite1200,
	FlipFunctionBBBlack1200,
	FlipFunctionBBWhite1201,
	FlipFunctionBBBlack1201,
	FlipFunctionBBWhite1202,
	FlipFunctionBBBlack1202,
	FlipFunctionBBWhite1203,
	FlipFunctionBBBlack1203,
	FlipFunctionBBWhite1204,
	FlipFunctionBBBlack1204,
	FlipFunctionBBWhite1205,
	FlipFunctionBBBlack1205,
	FlipFunctionBBWhite1206,
	FlipFunctionBBBlack1206,
	FlipFunctionBBWhite1207,
	FlipFunctionBBBlack1207,
	FlipFunctionBBWhite1208,
	FlipFunctionBBBlack1208,
	FlipFunctionBBWhite1209,
	FlipFunctionBBBlack1209,
	FlipFunctionBBWhite1210,
	FlipFunctionBBBlack1210,
	FlipFunctionBBWhite1211,
	FlipFunctionBBBlack1211,
	FlipFunctionBBWhite1212,
	FlipFunctionBBBlack1212,
	FlipFunctionBBWhite1213,
	FlipFunctionBBBlack1213,
	FlipFunctionBBWhite1214,
	FlipFunctionBBBlack1214,
	FlipFunctionBBWhite1215,
	FlipFunctionBBBlack1215,
	FlipFunctionBBWhite1216,
	FlipFunctionBBBlack1216,
	FlipFunctionBBWhite1217,
	FlipFunctionBBBlack1217,
	FlipFunctionBBWhite1218,
	FlipFunctionBBBlack1218,
	FlipFunctionBBWhite1219,
	FlipFunctionBBBlack1219,
	FlipFunctionBBWhite1220,
	FlipFunctionBBBlack1220,
	FlipFunctionBBWhite1221,
	FlipFunctionBBBlack1221,
	FlipFunctionBBWhite1222,
	FlipFunctionBBBlack1222,
	FlipFunctionBBWhite1223,
	FlipFunctionBBBlack1223,
	FlipFunctionBBWhite1224,
	FlipFunctionBBBlack1224,
	FlipFunctionBBWhite1225,
	FlipFunctionBBBlack1225,
	FlipFunctionBBWhite1226,
	FlipFunctionBBBlack1226,
	FlipFunctionBBWhite1227,
	FlipFunctionBBBlack1227,
	FlipFunctionBBWhite1228,
	FlipFunctionBBBlack1228,
	FlipFunctionBBWhite1229,
	FlipFunctionBBBlack1229,
	FlipFunctionBBWhite1230,
	FlipFunctionBBBlack1230,
	FlipFunctionBBWhite1231,
	FlipFunctionBBBlack1231,
	FlipFunctionBBWhite1232,
	FlipFunctionBBBlack1232,
	FlipFunctionBBWhite1233,
	FlipFunctionBBBlack1233,
	FlipFunctionBBWhite1234,
	FlipFunctionBBBlack1234,
	FlipFunctionBBWhite1235,
	FlipFunctionBBBlack1235,
	FlipFunctionBBWhite1236,
	FlipFunctionBBBlack1236,
	FlipFunctionBBWhite1237,
	FlipFunctionBBBlack1237,
	FlipFunctionBBWhite1238,
	FlipFunctionBBBlack1238,
	FlipFunctionBBWhite1239,
	FlipFunctionBBBlack1239,
	FlipFunctionBBWhite1240,
	FlipFunctionBBBlack1240,
	FlipFunctionBBWhite1241,
	FlipFunctionBBBlack1241,
	FlipFunctionBBWhite1242,
	FlipFunctionBBBlack1242,
	FlipFunctionBBWhite1243,
	FlipFunctionBBBlack1243,
	FlipFunctionBBWhite1244,
	FlipFunctionBBBlack1244,
	FlipFunctionBBWhite1245,
	FlipFunctionBBBlack1245,
	FlipFunctionBBWhite1246,
	FlipFunctionBBBlack1246,
	FlipFunctionBBWhite1247,
	FlipFunctionBBBlack1247,
	FlipFunctionBBWhite1248,
	FlipFunctionBBBlack1248,
	FlipFunctionBBWhite1249,
	FlipFunctionBBBlack1249,
	FlipFunctionBBWhite1250,
	FlipFunctionBBBlack1250,
	FlipFunctionBBWhite1251,
	FlipFunctionBBBlack1251,
	FlipFunctionBBWhite1252,
	FlipFunctionBBBlack1252,
	FlipFunctionBBWhite1253,
	FlipFunctionBBBlack1253,
	FlipFunctionBBWhite1254,
	FlipFunctionBBBlack1254,
	FlipFunctionBBWhite1255,
	FlipFunctionBBBlack1255,
	FlipFunctionBBWhite1256,
	FlipFunctionBBBlack1256,
	FlipFunctionBBWhite1257,
	FlipFunctionBBBlack1257,
	FlipFunctionBBWhite1258,
	FlipFunctionBBBlack1258,
	FlipFunctionBBWhite1259,
	FlipFunctionBBBlack1259,
	FlipFunctionBBWhite1260,
	FlipFunctionBBBlack1260,
	FlipFunctionBBWhite1261,
	FlipFunctionBBBlack1261,
	FlipFunctionBBWhite1262,
	FlipFunctionBBBlack1262,
	FlipFunctionBBWhite1263,
	FlipFunctionBBBlack1263,
	FlipFunctionBBWhite1264,
	FlipFunctionBBBlack1264,
	FlipFunctionBBWhite1265,
	FlipFunctionBBBlack1265,
	FlipFunctionBBWhite1266,
	FlipFunctionBBBlack1266,
	FlipFunctionBBWhite1267,
	FlipFunctionBBBlack1267,
	FlipFunctionBBWhite1268,
	FlipFunctionBBBlack1268,
	FlipFunctionBBWhite1269,
	FlipFunctionBBBlack1269,
	FlipFunctionBBWhite1270,
	FlipFunctionBBBlack1270,
	FlipFunctionBBWhite1271,
	FlipFunctionBBBlack1271,
	FlipFunctionBBWhite1272,
	FlipFunctionBBBlack1272,
	FlipFunctionBBWhite1273,
	FlipFunctionBBBlack1273,
	FlipFunctionBBWhite1274,
	FlipFunctionBBBlack1274,
	FlipFunctionBBWhite1275,
	FlipFunctionBBBlack1275,
	FlipFunctionBBWhite1276,
	FlipFunctionBBBlack1276,
	FlipFunctionBBWhite1277,
	FlipFunctionBBBlack1277,
	FlipFunctionBBWhite1278,
	FlipFunctionBBBlack1278,
	FlipFunctionBBWhite1279,
	FlipFunctionBBBlack1279,
	FlipFunctionBBWhite1280,
	FlipFunctionBBBlack1280,
	FlipFunctionBBWhite1281,
	FlipFunctionBBBlack1281,
	FlipFunctionBBWhite1282,
	FlipFunctionBBBlack1282,
	FlipFunctionBBWhite1283,
	FlipFunctionBBBlack1283,
	FlipFunctionBBWhite1284,
	FlipFunctionBBBlack1284,
	FlipFunctionBBWhite1285,
	FlipFunctionBBBlack1285,
	FlipFunctionBBWhite1286,
	FlipFunctionBBBlack1286,
	FlipFunctionBBWhite1287,
	FlipFunctionBBBlack1287,
	FlipFunctionBBWhite1288,
	FlipFunctionBBBlack1288,
	FlipFunctionBBWhite1289,
	FlipFunctionBBBlack1289,
	FlipFunctionBBWhite1290,
	FlipFunctionBBBlack1290,
	FlipFunctionBBWhite1291,
	FlipFunctionBBBlack1291,
	FlipFunctionBBWhite1292,
	FlipFunctionBBBlack1292,
	FlipFunctionBBWhite1293,
	FlipFunctionBBBlack1293,
	FlipFunctionBBWhite1294,
	FlipFunctionBBBlack1294,
	FlipFunctionBBWhite1295,
	FlipFunctionBBBlack1295,
	FlipFunctionBBWhite1296,
	FlipFunctionBBBlack1296,
	FlipFunctionBBWhite1297,
	FlipFunctionBBBlack1297,
	FlipFunctionBBWhite1298,
	FlipFunctionBBBlack1298,
	FlipFunctionBBWhite1299,
	FlipFunctionBBBlack1299,
	FlipFunctionBBWhite1300,
	FlipFunctionBBBlack1300,
	FlipFunctionBBWhite1301,
	FlipFunctionBBBlack1301,
	FlipFunctionBBWhite1302,
	FlipFunctionBBBlack1302,
	FlipFunctionBBWhite1303,
	FlipFunctionBBBlack1303,
	FlipFunctionBBWhite1304,
	FlipFunctionBBBlack1304,
	FlipFunctionBBWhite1305,
	FlipFunctionBBBlack1305,
	FlipFunctionBBWhite1306,
	FlipFunctionBBBlack1306,
	FlipFunctionBBWhite1307,
	FlipFunctionBBBlack1307,
	FlipFunctionBBWhite1308,
	FlipFunctionBBBlack1308,
	FlipFunctionBBWhite1309,
	FlipFunctionBBBlack1309,
	FlipFunctionBBWhite1310,
	FlipFunctionBBBlack1310,
	FlipFunctionBBWhite1311,
	FlipFunctionBBBlack1311,
	FlipFunctionBBWhite1312,
	FlipFunctionBBBlack1312,
	FlipFunctionBBWhite1313,
	FlipFunctionBBBlack1313,
	FlipFunctionBBWhite1314,
	FlipFunctionBBBlack1314,
	FlipFunctionBBWhite1315,
	FlipFunctionBBBlack1315,
	FlipFunctionBBWhite1316,
	FlipFunctionBBBlack1316,
	FlipFunctionBBWhite1317,
	FlipFunctionBBBlack1317,
	FlipFunctionBBWhite1318,
	FlipFunctionBBBlack1318,
	FlipFunctionBBWhite1319,
	FlipFunctionBBBlack1319,
	FlipFunctionBBWhite1320,
	FlipFunctionBBBlack1320,
	FlipFunctionBBWhite1321,
	FlipFunctionBBBlack1321,
	FlipFunctionBBWhite1322,
	FlipFunctionBBBlack1322,
	FlipFunctionBBWhite1323,
	FlipFunctionBBBlack1323,
	FlipFunctionBBWhite1324,
	FlipFunctionBBBlack1324,
	FlipFunctionBBWhite1325,
	FlipFunctionBBBlack1325,
	FlipFunctionBBWhite1326,
	FlipFunctionBBBlack1326,
	FlipFunctionBBWhite1327,
	FlipFunctionBBBlack1327,
	FlipFunctionBBWhite1328,
	FlipFunctionBBBlack1328,
	FlipFunctionBBWhite1329,
	FlipFunctionBBBlack1329,
	FlipFunctionBBWhite1330,
	FlipFunctionBBBlack1330,
	FlipFunctionBBWhite1331,
	FlipFunctionBBBlack1331,
	FlipFunctionBBWhite1332,
	FlipFunctionBBBlack1332,
	FlipFunctionBBWhite1333,
	FlipFunctionBBBlack1333,
	FlipFunctionBBWhite1334,
	FlipFunctionBBBlack1334,
	FlipFunctionBBWhite1335,
	FlipFunctionBBBlack1335,
	FlipFunctionBBWhite1336,
	FlipFunctionBBBlack1336,
	FlipFunctionBBWhite1337,
	FlipFunctionBBBlack1337,
	FlipFunctionBBWhite1338,
	FlipFunctionBBBlack1338,
	FlipFunctionBBWhite1339,
	FlipFunctionBBBlack1339,
	FlipFunctionBBWhite1340,
	FlipFunctionBBBlack1340,
	FlipFunctionBBWhite1341,
	FlipFunctionBBBlack1341,
	FlipFunctionBBWhite1342,
	FlipFunctionBBBlack1342,
	FlipFunctionBBWhite1343,
	FlipFunctionBBBlack1343,
	FlipFunctionBBWhite1344,
	FlipFunctionBBBlack1344,
	FlipFunctionBBWhite1345,
	FlipFunctionBBBlack1345,
	FlipFunctionBBWhite1346,
	FlipFunctionBBBlack1346,
	FlipFunctionBBWhite1347,
	FlipFunctionBBBlack1347,
	FlipFunctionBBWhite1348,
	FlipFunctionBBBlack1348,
	FlipFunctionBBWhite1349,
	FlipFunctionBBBlack1349,
	FlipFunctionBBWhite1350,
	FlipFunctionBBBlack1350,
	FlipFunctionBBWhite1351,
	FlipFunctionBBBlack1351,
	FlipFunctionBBWhite1352,
	FlipFunctionBBBlack1352,
	FlipFunctionBBWhite1353,
	FlipFunctionBBBlack1353,
	FlipFunctionBBWhite1354,
	FlipFunctionBBBlack1354,
	FlipFunctionBBWhite1355,
	FlipFunctionBBBlack1355,
	FlipFunctionBBWhite1356,
	FlipFunctionBBBlack1356,
	FlipFunctionBBWhite1357,
	FlipFunctionBBBlack1357,
	FlipFunctionBBWhite1358,
	FlipFunctionBBBlack1358,
	FlipFunctionBBWhite1359,
	FlipFunctionBBBlack1359,
	FlipFunctionBBWhite1360,
	FlipFunctionBBBlack1360,
	FlipFunctionBBWhite1361,
	FlipFunctionBBBlack1361,
	FlipFunctionBBWhite1362,
	FlipFunctionBBBlack1362,
	FlipFunctionBBWhite1363,
	FlipFunctionBBBlack1363,
	FlipFunctionBBWhite1364,
	FlipFunctionBBBlack1364,
	FlipFunctionBBWhite1365,
	FlipFunctionBBBlack1365,
	FlipFunctionBBWhite1366,
	FlipFunctionBBBlack1366,
	FlipFunctionBBWhite1367,
	FlipFunctionBBBlack1367,
	FlipFunctionBBWhite1368,
	FlipFunctionBBBlack1368,
	FlipFunctionBBWhite1369,
	FlipFunctionBBBlack1369,
	FlipFunctionBBWhite1370,
	FlipFunctionBBBlack1370,
	FlipFunctionBBWhite1371,
	FlipFunctionBBBlack1371,
	FlipFunctionBBWhite1372,
	FlipFunctionBBBlack1372,
	FlipFunctionBBWhite1373,
	FlipFunctionBBBlack1373,
	FlipFunctionBBWhite1374,
	FlipFunctionBBBlack1374,
	FlipFunctionBBWhite1375,
	FlipFunctionBBBlack1375,
	FlipFunctionBBWhite1376,
	FlipFunctionBBBlack1376,
	FlipFunctionBBWhite1377,
	FlipFunctionBBBlack1377,
	FlipFunctionBBWhite1378,
	FlipFunctionBBBlack1378,
	FlipFunctionBBWhite1379,
	FlipFunctionBBBlack1379,
	FlipFunctionBBWhite1380,
	FlipFunctionBBBlack1380,
	FlipFunctionBBWhite1381,
	FlipFunctionBBBlack1381,
	FlipFunctionBBWhite1382,
	FlipFunctionBBBlack1382,
	FlipFunctionBBWhite1383,
	FlipFunctionBBBlack1383,
	FlipFunctionBBWhite1384,
	FlipFunctionBBBlack1384,
	FlipFunctionBBWhite1385,
	FlipFunctionBBBlack1385,
	FlipFunctionBBWhite1386,
	FlipFunctionBBBlack1386,
	FlipFunctionBBWhite1387,
	FlipFunctionBBBlack1387,
	FlipFunctionBBWhite1388,
	FlipFunctionBBBlack1388,
	FlipFunctionBBWhite1389,
	FlipFunctionBBBlack1389,
	FlipFunctionBBWhite1390,
	FlipFunctionBBBlack1390,
	FlipFunctionBBWhite1391,
	FlipFunctionBBBlack1391,
	FlipFunctionBBWhite1392,
	FlipFunctionBBBlack1392,
	FlipFunctionBBWhite1393,
	FlipFunctionBBBlack1393,
	FlipFunctionBBWhite1394,
	FlipFunctionBBBlack1394,
	FlipFunctionBBWhite1395,
	FlipFunctionBBBlack1395,
	FlipFunctionBBWhite1396,
	FlipFunctionBBBlack1396,
	FlipFunctionBBWhite1397,
	FlipFunctionBBBlack1397,
	FlipFunctionBBWhite1398,
	FlipFunctionBBBlack1398,
	FlipFunctionBBWhite1399,
	FlipFunctionBBBlack1399,
	FlipFunctionBBWhite1400,
	FlipFunctionBBBlack1400,
	FlipFunctionBBWhite1401,
	FlipFunctionBBBlack1401,
	FlipFunctionBBWhite1402,
	FlipFunctionBBBlack1402,
	FlipFunctionBBWhite1403,
	FlipFunctionBBBlack1403,
	FlipFunctionBBWhite1404,
	FlipFunctionBBBlack1404,
	FlipFunctionBBWhite1405,
	FlipFunctionBBBlack1405,
	FlipFunctionBBWhite1406,
	FlipFunctionBBBlack1406,
	FlipFunctionBBWhite1407,
	FlipFunctionBBBlack1407,
	FlipFunctionBBWhite1408,
	FlipFunctionBBBlack1408,
	FlipFunctionBBWhite1409,
	FlipFunctionBBBlack1409,
	FlipFunctionBBWhite1410,
	FlipFunctionBBBlack1410,
	FlipFunctionBBWhite1411,
	FlipFunctionBBBlack1411,
	FlipFunctionBBWhite1412,
	FlipFunctionBBBlack1412,
	FlipFunctionBBWhite1413,
	FlipFunctionBBBlack1413,
	FlipFunctionBBWhite1414,
	FlipFunctionBBBlack1414,
	FlipFunctionBBWhite1415,
	FlipFunctionBBBlack1415,
	FlipFunctionBBWhite1416,
	FlipFunctionBBBlack1416,
	FlipFunctionBBWhite1417,
	FlipFunctionBBBlack1417,
	FlipFunctionBBWhite1418,
	FlipFunctionBBBlack1418,
	FlipFunctionBBWhite1419,
	FlipFunctionBBBlack1419,
	FlipFunctionBBWhite1420,
	FlipFunctionBBBlack1420,
	FlipFunctionBBWhite1421,
	FlipFunctionBBBlack1421,
	FlipFunctionBBWhite1422,
	FlipFunctionBBBlack1422,
	FlipFunctionBBWhite1423,
	FlipFunctionBBBlack1423,
	FlipFunctionBBWhite1424,
	FlipFunctionBBBlack1424,
	FlipFunctionBBWhite1425,
	FlipFunctionBBBlack1425,
	FlipFunctionBBWhite1426,
	FlipFunctionBBBlack1426,
	FlipFunctionBBWhite1427,
	FlipFunctionBBBlack1427,
	FlipFunctionBBWhite1428,
	FlipFunctionBBBlack1428,
	FlipFunctionBBWhite1429,
	FlipFunctionBBBlack1429,
	FlipFunctionBBWhite1430,
	FlipFunctionBBBlack1430,
	FlipFunctionBBWhite1431,
	FlipFunctionBBBlack1431,
	FlipFunctionBBWhite1432,
	FlipFunctionBBBlack1432,
	FlipFunctionBBWhite1433,
	FlipFunctionBBBlack1433,
	FlipFunctionBBWhite1434,
	FlipFunctionBBBlack1434,
	FlipFunctionBBWhite1435,
	FlipFunctionBBBlack1435,
	FlipFunctionBBWhite1436,
	FlipFunctionBBBlack1436,
	FlipFunctionBBWhite1437,
	FlipFunctionBBBlack1437,
	FlipFunctionBBWhite1438,
	FlipFunctionBBBlack1438,
	FlipFunctionBBWhite1439,
	FlipFunctionBBBlack1439,
	FlipFunctionBBWhite1440,
	FlipFunctionBBBlack1440,
	FlipFunctionBBWhite1441,
	FlipFunctionBBBlack1441,
	FlipFunctionBBWhite1442,
	FlipFunctionBBBlack1442,
	FlipFunctionBBWhite1443,
	FlipFunctionBBBlack1443,
	FlipFunctionBBWhite1444,
	FlipFunctionBBBlack1444,
	FlipFunctionBBWhite1445,
	FlipFunctionBBBlack1445,
	FlipFunctionBBWhite1446,
	FlipFunctionBBBlack1446,
	FlipFunctionBBWhite1447,
	FlipFunctionBBBlack1447,
	FlipFunctionBBWhite1448,
	FlipFunctionBBBlack1448,
	FlipFunctionBBWhite1449,
	FlipFunctionBBBlack1449,
	FlipFunctionBBWhite1450,
	FlipFunctionBBBlack1450,
	FlipFunctionBBWhite1451,
	FlipFunctionBBBlack1451,
	FlipFunctionBBWhite1452,
	FlipFunctionBBBlack1452,
	FlipFunctionBBWhite1453,
	FlipFunctionBBBlack1453,
	FlipFunctionBBWhite1454,
	FlipFunctionBBBlack1454,
	FlipFunctionBBWhite1455,
	FlipFunctionBBBlack1455,
	FlipFunctionBBWhite1456,
	FlipFunctionBBBlack1456,
	FlipFunctionBBWhite1457,
	FlipFunctionBBBlack1457,
	FlipFunctionBBWhite1458,
	FlipFunctionBBBlack1458,
	FlipFunctionBBWhite1459,
	FlipFunctionBBBlack1459,
	FlipFunctionBBWhite1460,
	FlipFunctionBBBlack1460,
	FlipFunctionBBWhite1461,
	FlipFunctionBBBlack1461,
	FlipFunctionBBWhite1462,
	FlipFunctionBBBlack1462,
	FlipFunctionBBWhite1463,
	FlipFunctionBBBlack1463,
	FlipFunctionBBWhite1464,
	FlipFunctionBBBlack1464,
	FlipFunctionBBWhite1465,
	FlipFunctionBBBlack1465,
	FlipFunctionBBWhite1466,
	FlipFunctionBBBlack1466,
	FlipFunctionBBWhite1467,
	FlipFunctionBBBlack1467,
	FlipFunctionBBWhite1468,
	FlipFunctionBBBlack1468,
	FlipFunctionBBWhite1469,
	FlipFunctionBBBlack1469,
	FlipFunctionBBWhite1470,
	FlipFunctionBBBlack1470,
	FlipFunctionBBWhite1471,
	FlipFunctionBBBlack1471,
	FlipFunctionBBWhite1472,
	FlipFunctionBBBlack1472,
	FlipFunctionBBWhite1473,
	FlipFunctionBBBlack1473,
	FlipFunctionBBWhite1474,
	FlipFunctionBBBlack1474,
	FlipFunctionBBWhite1475,
	FlipFunctionBBBlack1475,
	FlipFunctionBBWhite1476,
	FlipFunctionBBBlack1476,
	FlipFunctionBBWhite1477,
	FlipFunctionBBBlack1477,
	FlipFunctionBBWhite1478,
	FlipFunctionBBBlack1478,
	FlipFunctionBBWhite1479,
	FlipFunctionBBBlack1479,
	FlipFunctionBBWhite1480,
	FlipFunctionBBBlack1480,
	FlipFunctionBBWhite1481,
	FlipFunctionBBBlack1481,
	FlipFunctionBBWhite1482,
	FlipFunctionBBBlack1482,
	FlipFunctionBBWhite1483,
	FlipFunctionBBBlack1483,
	FlipFunctionBBWhite1484,
	FlipFunctionBBBlack1484,
	FlipFunctionBBWhite1485,
	FlipFunctionBBBlack1485,
	FlipFunctionBBWhite1486,
	FlipFunctionBBBlack1486,
	FlipFunctionBBWhite1487,
	FlipFunctionBBBlack1487,
	FlipFunctionBBWhite1488,
	FlipFunctionBBBlack1488,
	FlipFunctionBBWhite1489,
	FlipFunctionBBBlack1489,
	FlipFunctionBBWhite1490,
	FlipFunctionBBBlack1490,
	FlipFunctionBBWhite1491,
	FlipFunctionBBBlack1491,
	FlipFunctionBBWhite1492,
	FlipFunctionBBBlack1492,
	FlipFunctionBBWhite1493,
	FlipFunctionBBBlack1493,
	FlipFunctionBBWhite1494,
	FlipFunctionBBBlack1494,
	FlipFunctionBBWhite1495,
	FlipFunctionBBBlack1495,
	FlipFunctionBBWhite1496,
	FlipFunctionBBBlack1496,
	FlipFunctionBBWhite1497,
	FlipFunctionBBBlack1497,
	FlipFunctionBBWhite1498,
	FlipFunctionBBBlack1498,
	FlipFunctionBBWhite1499,
	FlipFunctionBBBlack1499,
	FlipFunctionBBWhite1500,
	FlipFunctionBBBlack1500,
	FlipFunctionBBWhite1501,
	FlipFunctionBBBlack1501,
	FlipFunctionBBWhite1502,
	FlipFunctionBBBlack1502,
	FlipFunctionBBWhite1503,
	FlipFunctionBBBlack1503,
	FlipFunctionBBWhite1504,
	FlipFunctionBBBlack1504,
	FlipFunctionBBWhite1505,
	FlipFunctionBBBlack1505,
	FlipFunctionBBWhite1506,
	FlipFunctionBBBlack1506,
	FlipFunctionBBWhite1507,
	FlipFunctionBBBlack1507,
	FlipFunctionBBWhite1508,
	FlipFunctionBBBlack1508,
	FlipFunctionBBWhite1509,
	FlipFunctionBBBlack1509,
	FlipFunctionBBWhite1510,
	FlipFunctionBBBlack1510,
	FlipFunctionBBWhite1511,
	FlipFunctionBBBlack1511,
	FlipFunctionBBWhite1512,
	FlipFunctionBBBlack1512,
	FlipFunctionBBWhite1513,
	FlipFunctionBBBlack1513,
	FlipFunctionBBWhite1514,
	FlipFunctionBBBlack1514,
	FlipFunctionBBWhite1515,
	FlipFunctionBBBlack1515,
	FlipFunctionBBWhite1516,
	FlipFunctionBBBlack1516,
	FlipFunctionBBWhite1517,
	FlipFunctionBBBlack1517,
	FlipFunctionBBWhite1518,
	FlipFunctionBBBlack1518,
	FlipFunctionBBWhite1519,
	FlipFunctionBBBlack1519,
	FlipFunctionBBWhite1520,
	FlipFunctionBBBlack1520,
	FlipFunctionBBWhite1521,
	FlipFunctionBBBlack1521,
	FlipFunctionBBWhite1522,
	FlipFunctionBBBlack1522,
	FlipFunctionBBWhite1523,
	FlipFunctionBBBlack1523,
	FlipFunctionBBWhite1524,
	FlipFunctionBBBlack1524,
	FlipFunctionBBWhite1525,
	FlipFunctionBBBlack1525,
	FlipFunctionBBWhite1526,
	FlipFunctionBBBlack1526,
	FlipFunctionBBWhite1527,
	FlipFunctionBBBlack1527,
	FlipFunctionBBWhite1528,
	FlipFunctionBBBlack1528,
	FlipFunctionBBWhite1529,
	FlipFunctionBBBlack1529,
	FlipFunctionBBWhite1530,
	FlipFunctionBBBlack1530,
	FlipFunctionBBWhite1531,
	FlipFunctionBBBlack1531,
	FlipFunctionBBWhite1532,
	FlipFunctionBBBlack1532,
	FlipFunctionBBWhite1533,
	FlipFunctionBBBlack1533,
	FlipFunctionBBWhite1534,
	FlipFunctionBBBlack1534,
	FlipFunctionBBWhite1535,
	FlipFunctionBBBlack1535,
	FlipFunctionBBWhite1536,
	FlipFunctionBBBlack1536,
	FlipFunctionBBWhite1537,
	FlipFunctionBBBlack1537,
	FlipFunctionBBWhite1538,
	FlipFunctionBBBlack1538,
	FlipFunctionBBWhite1539,
	FlipFunctionBBBlack1539,
	FlipFunctionBBWhite1540,
	FlipFunctionBBBlack1540,
	FlipFunctionBBWhite1541,
	FlipFunctionBBBlack1541,
	FlipFunctionBBWhite1542,
	FlipFunctionBBBlack1542,
	FlipFunctionBBWhite1543,
	FlipFunctionBBBlack1543,
	FlipFunctionBBWhite1544,
	FlipFunctionBBBlack1544,
	FlipFunctionBBWhite1545,
	FlipFunctionBBBlack1545,
	FlipFunctionBBWhite1546,
	FlipFunctionBBBlack1546,
	FlipFunctionBBWhite1547,
	FlipFunctionBBBlack1547,
	FlipFunctionBBWhite1548,
	FlipFunctionBBBlack1548,
	FlipFunctionBBWhite1549,
	FlipFunctionBBBlack1549,
	FlipFunctionBBWhite1550,
	FlipFunctionBBBlack1550,
	FlipFunctionBBWhite1551,
	FlipFunctionBBBlack1551,
	FlipFunctionBBWhite1552,
	FlipFunctionBBBlack1552,
	FlipFunctionBBWhite1553,
	FlipFunctionBBBlack1553,
	FlipFunctionBBWhite1554,
	FlipFunctionBBBlack1554,
	FlipFunctionBBWhite1555,
	FlipFunctionBBBlack1555,
	FlipFunctionBBWhite1556,
	FlipFunctionBBBlack1556,
	FlipFunctionBBWhite1557,
	FlipFunctionBBBlack1557,
	FlipFunctionBBWhite1558,
	FlipFunctionBBBlack1558,
	FlipFunctionBBWhite1559,
	FlipFunctionBBBlack1559,
	FlipFunctionBBWhite1560,
	FlipFunctionBBBlack1560,
	FlipFunctionBBWhite1561,
	FlipFunctionBBBlack1561,
	FlipFunctionBBWhite1562,
	FlipFunctionBBBlack1562,
	FlipFunctionBBWhite1563,
	FlipFunctionBBBlack1563,
	FlipFunctionBBWhite1564,
	FlipFunctionBBBlack1564,
	FlipFunctionBBWhite1565,
	FlipFunctionBBBlack1565,
	FlipFunctionBBWhite1566,
	FlipFunctionBBBlack1566,
	FlipFunctionBBWhite1567,
	FlipFunctionBBBlack1567,
	FlipFunctionBBWhite1568,
	FlipFunctionBBBlack1568,
	FlipFunctionBBWhite1569,
	FlipFunctionBBBlack1569,
	FlipFunctionBBWhite1570,
	FlipFunctionBBBlack1570,
	FlipFunctionBBWhite1571,
	FlipFunctionBBBlack1571,
	FlipFunctionBBWhite1572,
	FlipFunctionBBBlack1572,
	FlipFunctionBBWhite1573,
	FlipFunctionBBBlack1573,
	FlipFunctionBBWhite1574,
	FlipFunctionBBBlack1574,
	FlipFunctionBBWhite1575,
	FlipFunctionBBBlack1575,
	FlipFunctionBBWhite1576,
	FlipFunctionBBBlack1576,
	FlipFunctionBBWhite1577,
	FlipFunctionBBBlack1577,
	FlipFunctionBBWhite1578,
	FlipFunctionBBBlack1578,
	FlipFunctionBBWhite1579,
	FlipFunctionBBBlack1579,
	FlipFunctionBBWhite1580,
	FlipFunctionBBBlack1580,
	FlipFunctionBBWhite1581,
	FlipFunctionBBBlack1581,
	FlipFunctionBBWhite1582,
	FlipFunctionBBBlack1582,
	FlipFunctionBBWhite1583,
	FlipFunctionBBBlack1583,
	FlipFunctionBBWhite1584,
	FlipFunctionBBBlack1584,
	FlipFunctionBBWhite1585,
	FlipFunctionBBBlack1585,
	FlipFunctionBBWhite1586,
	FlipFunctionBBBlack1586,
	FlipFunctionBBWhite1587,
	FlipFunctionBBBlack1587,
	FlipFunctionBBWhite1588,
	FlipFunctionBBBlack1588,
	FlipFunctionBBWhite1589,
	FlipFunctionBBBlack1589,
	FlipFunctionBBWhite1590,
	FlipFunctionBBBlack1590,
	FlipFunctionBBWhite1591,
	FlipFunctionBBBlack1591,
	FlipFunctionBBWhite1592,
	FlipFunctionBBBlack1592,
	FlipFunctionBBWhite1593,
	FlipFunctionBBBlack1593,
	FlipFunctionBBWhite1594,
	FlipFunctionBBBlack1594,
	FlipFunctionBBWhite1595,
	FlipFunctionBBBlack1595,
	FlipFunctionBBWhite1596,
	FlipFunctionBBBlack1596,
	FlipFunctionBBWhite1597,
	FlipFunctionBBBlack1597,
	FlipFunctionBBWhite1598,
	FlipFunctionBBBlack1598,
	FlipFunctionBBWhite1599,
	FlipFunctionBBBlack1599,
	FlipFunctionBBWhite1600,
	FlipFunctionBBBlack1600,
	FlipFunctionBBWhite1601,
	FlipFunctionBBBlack1601,
	FlipFunctionBBWhite1602,
	FlipFunctionBBBlack1602,
	FlipFunctionBBWhite1603,
	FlipFunctionBBBlack1603,
	FlipFunctionBBWhite1604,
	FlipFunctionBBBlack1604,
	FlipFunctionBBWhite1605,
	FlipFunctionBBBlack1605,
	FlipFunctionBBWhite1606,
	FlipFunctionBBBlack1606,
	FlipFunctionBBWhite1607,
	FlipFunctionBBBlack1607,
	FlipFunctionBBWhite1608,
	FlipFunctionBBBlack1608,
	FlipFunctionBBWhite1609,
	FlipFunctionBBBlack1609,
	FlipFunctionBBWhite1610,
	FlipFunctionBBBlack1610,
	FlipFunctionBBWhite1611,
	FlipFunctionBBBlack1611,
	FlipFunctionBBWhite1612,
	FlipFunctionBBBlack1612,
	FlipFunctionBBWhite1613,
	FlipFunctionBBBlack1613,
	FlipFunctionBBWhite1614,
	FlipFunctionBBBlack1614,
	FlipFunctionBBWhite1615,
	FlipFunctionBBBlack1615,
	FlipFunctionBBWhite1616,
	FlipFunctionBBBlack1616,
	FlipFunctionBBWhite1617,
	FlipFunctionBBBlack1617,
	FlipFunctionBBWhite1618,
	FlipFunctionBBBlack1618,
	FlipFunctionBBWhite1619,
	FlipFunctionBBBlack1619,
	FlipFunctionBBWhite1620,
	FlipFunctionBBBlack1620,
	FlipFunctionBBWhite1621,
	FlipFunctionBBBlack1621,
	FlipFunctionBBWhite1622,
	FlipFunctionBBBlack1622,
	FlipFunctionBBWhite1623,
	FlipFunctionBBBlack1623,
	FlipFunctionBBWhite1624,
	FlipFunctionBBBlack1624,
	FlipFunctionBBWhite1625,
	FlipFunctionBBBlack1625,
	FlipFunctionBBWhite1626,
	FlipFunctionBBBlack1626,
	FlipFunctionBBWhite1627,
	FlipFunctionBBBlack1627,
	FlipFunctionBBWhite1628,
	FlipFunctionBBBlack1628,
	FlipFunctionBBWhite1629,
	FlipFunctionBBBlack1629,
	FlipFunctionBBWhite1630,
	FlipFunctionBBBlack1630,
	FlipFunctionBBWhite1631,
	FlipFunctionBBBlack1631,
	FlipFunctionBBWhite1632,
	FlipFunctionBBBlack1632,
	FlipFunctionBBWhite1633,
	FlipFunctionBBBlack1633,
	FlipFunctionBBWhite1634,
	FlipFunctionBBBlack1634,
	FlipFunctionBBWhite1635,
	FlipFunctionBBBlack1635,
	FlipFunctionBBWhite1636,
	FlipFunctionBBBlack1636,
	FlipFunctionBBWhite1637,
	FlipFunctionBBBlack1637,
	FlipFunctionBBWhite1638,
	FlipFunctionBBBlack1638,
	FlipFunctionBBWhite1639,
	FlipFunctionBBBlack1639,
	FlipFunctionBBWhite1640,
	FlipFunctionBBBlack1640,
	FlipFunctionBBWhite1641,
	FlipFunctionBBBlack1641,
	FlipFunctionBBWhite1642,
	FlipFunctionBBBlack1642,
	FlipFunctionBBWhite1643,
	FlipFunctionBBBlack1643,
	FlipFunctionBBWhite1644,
	FlipFunctionBBBlack1644,
	FlipFunctionBBWhite1645,
	FlipFunctionBBBlack1645,
	FlipFunctionBBWhite1646,
	FlipFunctionBBBlack1646,
	FlipFunctionBBWhite1647,
	FlipFunctionBBBlack1647,
	FlipFunctionBBWhite1648,
	FlipFunctionBBBlack1648,
	FlipFunctionBBWhite1649,
	FlipFunctionBBBlack1649,
	FlipFunctionBBWhite1650,
	FlipFunctionBBBlack1650,
	FlipFunctionBBWhite1651,
	FlipFunctionBBBlack1651,
	FlipFunctionBBWhite1652,
	FlipFunctionBBBlack1652,
	FlipFunctionBBWhite1653,
	FlipFunctionBBBlack1653,
	FlipFunctionBBWhite1654,
	FlipFunctionBBBlack1654,
	FlipFunctionBBWhite1655,
	FlipFunctionBBBlack1655,
	FlipFunctionBBWhite1656,
	FlipFunctionBBBlack1656,
	FlipFunctionBBWhite1657,
	FlipFunctionBBBlack1657,
	FlipFunctionBBWhite1658,
	FlipFunctionBBBlack1658,
	FlipFunctionBBWhite1659,
	FlipFunctionBBBlack1659,
	FlipFunctionBBWhite1660,
	FlipFunctionBBBlack1660,
	FlipFunctionBBWhite1661,
	FlipFunctionBBBlack1661,
	FlipFunctionBBWhite1662,
	FlipFunctionBBBlack1662,
	FlipFunctionBBWhite1663,
	FlipFunctionBBBlack1663,
	FlipFunctionBBWhite1664,
	FlipFunctionBBBlack1664,
	FlipFunctionBBWhite1665,
	FlipFunctionBBBlack1665,
	FlipFunctionBBWhite1666,
	FlipFunctionBBBlack1666,
	FlipFunctionBBWhite1667,
	FlipFunctionBBBlack1667,
	FlipFunctionBBWhite1668,
	FlipFunctionBBBlack1668,
	FlipFunctionBBWhite1669,
	FlipFunctionBBBlack1669,
	FlipFunctionBBWhite1670,
	FlipFunctionBBBlack1670,
	FlipFunctionBBWhite1671,
	FlipFunctionBBBlack1671,
	FlipFunctionBBWhite1672,
	FlipFunctionBBBlack1672,
	FlipFunctionBBWhite1673,
	FlipFunctionBBBlack1673,
	FlipFunctionBBWhite1674,
	FlipFunctionBBBlack1674,
	FlipFunctionBBWhite1675,
	FlipFunctionBBBlack1675,
	FlipFunctionBBWhite1676,
	FlipFunctionBBBlack1676,
	FlipFunctionBBWhite1677,
	FlipFunctionBBBlack1677,
	FlipFunctionBBWhite1678,
	FlipFunctionBBBlack1678,
	FlipFunctionBBWhite1679,
	FlipFunctionBBBlack1679,
	FlipFunctionBBWhite1680,
	FlipFunctionBBBlack1680,
	FlipFunctionBBWhite1681,
	FlipFunctionBBBlack1681,
	FlipFunctionBBWhite1682,
	FlipFunctionBBBlack1682,
	FlipFunctionBBWhite1683,
	FlipFunctionBBBlack1683,
	FlipFunctionBBWhite1684,
	FlipFunctionBBBlack1684,
	FlipFunctionBBWhite1685,
	FlipFunctionBBBlack1685,
	FlipFunctionBBWhite1686,
	FlipFunctionBBBlack1686,
	FlipFunctionBBWhite1687,
	FlipFunctionBBBlack1687,
	FlipFunctionBBWhite1688,
	FlipFunctionBBBlack1688,
	FlipFunctionBBWhite1689,
	FlipFunctionBBBlack1689,
	FlipFunctionBBWhite1690,
	FlipFunctionBBBlack1690,
	FlipFunctionBBWhite1691,
	FlipFunctionBBBlack1691,
	FlipFunctionBBWhite1692,
	FlipFunctionBBBlack1692,
	FlipFunctionBBWhite1693,
	FlipFunctionBBBlack1693,
	FlipFunctionBBWhite1694,
	FlipFunctionBBBlack1694,
	FlipFunctionBBWhite1695,
	FlipFunctionBBBlack1695,
	FlipFunctionBBWhite1696,
	FlipFunctionBBBlack1696,
	FlipFunctionBBWhite1697,
	FlipFunctionBBBlack1697,
	FlipFunctionBBWhite1698,
	FlipFunctionBBBlack1698,
	FlipFunctionBBWhite1699,
	FlipFunctionBBBlack1699,
};

