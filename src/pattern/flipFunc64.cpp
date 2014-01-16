// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.
#pragma once

#include "flipfuncBB.h"
#include "FastFlipTables.h"
#ifdef _WIN32
#pragma warning (disable: 4049)
#endif

u64 FlipFunctionBBWhite0(TConfig* configs) {
	configs[ 0]-=    1;
	return 0x1;
}

u64 FlipFunctionBBBlack0(TConfig* configs) {
	configs[ 0]+=    1;
	return 0x1;
}

u64 FlipFunctionBBWhite1(TConfig* configs) {
	configs[ 0]-=    7;
	configs[20]-=    2;
	configs[31]-=    2;
	return 0x3;
}

u64 FlipFunctionBBBlack1(TConfig* configs) {
	configs[ 0]+=    7;
	configs[20]+=    2;
	configs[31]+=    2;
	return 0x3;
}

u64 FlipFunctionBBWhite2(TConfig* configs) {
	configs[ 0]-=   25;
	configs[ 8]-=    2;
	configs[20]-=    2;
	configs[21]-=    2;
	configs[30]-=    2;
	configs[31]-=    2;
	return 0x7;
}

u64 FlipFunctionBBBlack2(TConfig* configs) {
	configs[ 0]+=   25;
	configs[ 8]+=    2;
	configs[20]+=    2;
	configs[21]+=    2;
	configs[30]+=    2;
	configs[31]+=    2;
	return 0x7;
}

u64 FlipFunctionBBWhite3(TConfig* configs) {
	configs[ 0]-=   79;
	configs[ 8]-=    2;
	configs[ 9]-=    2;
	configs[20]-=    2;
	configs[21]-=    2;
	configs[22]-=    2;
	configs[29]-=    2;
	configs[30]-=    2;
	configs[31]-=    2;
	return 0xf;
}

u64 FlipFunctionBBBlack3(TConfig* configs) {
	configs[ 0]+=   79;
	configs[ 8]+=    2;
	configs[ 9]+=    2;
	configs[20]+=    2;
	configs[21]+=    2;
	configs[22]+=    2;
	configs[29]+=    2;
	configs[30]+=    2;
	configs[31]+=    2;
	return 0xf;
}

u64 FlipFunctionBBWhite4(TConfig* configs) {
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
	return 0x1f;
}

u64 FlipFunctionBBBlack4(TConfig* configs) {
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
	return 0x1f;
}

u64 FlipFunctionBBWhite5(TConfig* configs) {
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
	return 0x3f;
}

u64 FlipFunctionBBBlack5(TConfig* configs) {
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
	return 0x3f;
}

u64 FlipFunctionBBWhite6(TConfig* configs) {
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
	return 0x7f;
}

u64 FlipFunctionBBBlack6(TConfig* configs) {
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
	return 0x7f;
}

u64 FlipFunctionBBWhite7(TConfig* configs) {
	configs[19]-=    1;
	return 0x0;
}

u64 FlipFunctionBBBlack7(TConfig* configs) {
	configs[19]+=    1;
	return 0x0;
}

u64 FlipFunctionBBWhite8(TConfig* configs) {
	configs[ 1]-=    2;
	configs[19]-=    7;
	configs[33]-=    2;
	return 0x100;
}

u64 FlipFunctionBBBlack8(TConfig* configs) {
	configs[ 1]+=    2;
	configs[19]+=    7;
	configs[33]+=    2;
	return 0x100;
}

u64 FlipFunctionBBWhite9(TConfig* configs) {
	configs[ 1]-=    2;
	configs[ 2]-=    2;
	configs[ 8]-=   18;
	configs[19]-=   25;
	configs[33]-=    2;
	configs[34]-=    2;
	return 0x10100;
}

u64 FlipFunctionBBBlack9(TConfig* configs) {
	configs[ 1]+=    2;
	configs[ 2]+=    2;
	configs[ 8]+=   18;
	configs[19]+=   25;
	configs[33]+=    2;
	configs[34]+=    2;
	return 0x10100;
}

u64 FlipFunctionBBWhite10(TConfig* configs) {
	configs[ 1]-=    2;
	configs[ 2]-=    2;
	configs[ 3]-=    2;
	configs[ 8]-=   18;
	configs[ 9]-=   54;
	configs[19]-=   79;
	configs[33]-=    2;
	configs[34]-=    2;
	configs[35]-=    2;
	return 0x1010100;
}

u64 FlipFunctionBBBlack10(TConfig* configs) {
	configs[ 1]+=    2;
	configs[ 2]+=    2;
	configs[ 3]+=    2;
	configs[ 8]+=   18;
	configs[ 9]+=   54;
	configs[19]+=   79;
	configs[33]+=    2;
	configs[34]+=    2;
	configs[35]+=    2;
	return 0x1010100;
}

u64 FlipFunctionBBWhite11(TConfig* configs) {
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
	return 0x101010100;
}

u64 FlipFunctionBBBlack11(TConfig* configs) {
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
	return 0x101010100;
}

u64 FlipFunctionBBWhite12(TConfig* configs) {
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
	return 0x10101010100;
}

u64 FlipFunctionBBBlack12(TConfig* configs) {
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
	return 0x10101010100;
}

u64 FlipFunctionBBWhite13(TConfig* configs) {
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
	return 0x1010101010100;
}

u64 FlipFunctionBBBlack13(TConfig* configs) {
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
	return 0x1010101010100;
}

u64 FlipFunctionBBWhite14(TConfig* configs) {
	configs[32]-=    1;
	return 0x0;
}

u64 FlipFunctionBBBlack14(TConfig* configs) {
	configs[32]+=    1;
	return 0x0;
}

u64 FlipFunctionBBWhite15(TConfig* configs) {
	configs[ 1]-=    6;
	configs[ 8]-=    6;
	configs[20]-=    6;
	configs[32]-=    7;
	return 0x200;
}

u64 FlipFunctionBBBlack15(TConfig* configs) {
	configs[ 1]+=    6;
	configs[ 8]+=    6;
	configs[20]+=    6;
	configs[32]+=    7;
	return 0x200;
}

u64 FlipFunctionBBWhite16(TConfig* configs) {
	configs[ 1]-=    6;
	configs[ 2]-=   18;
	configs[ 8]-=    6;
	configs[10]-=   18;
	configs[20]-=    6;
	configs[21]-=   18;
	configs[32]-=   25;
	return 0x40200;
}

u64 FlipFunctionBBBlack16(TConfig* configs) {
	configs[ 1]+=    6;
	configs[ 2]+=   18;
	configs[ 8]+=    6;
	configs[10]+=   18;
	configs[20]+=    6;
	configs[21]+=   18;
	configs[32]+=   25;
	return 0x40200;
}

u64 FlipFunctionBBWhite17(TConfig* configs) {
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
	return 0x8040200;
}

u64 FlipFunctionBBBlack17(TConfig* configs) {
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
	return 0x8040200;
}

u64 FlipFunctionBBWhite18(TConfig* configs) {
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
	return 0x1008040200;
}

u64 FlipFunctionBBBlack18(TConfig* configs) {
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
	return 0x1008040200;
}

u64 FlipFunctionBBWhite19(TConfig* configs) {
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
	return 0x201008040200;
}

u64 FlipFunctionBBBlack19(TConfig* configs) {
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
	return 0x201008040200;
}

u64 FlipFunctionBBWhite20(TConfig* configs) {
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
	return 0x40201008040200;
}

u64 FlipFunctionBBBlack20(TConfig* configs) {
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
	return 0x40201008040200;
}

u64 FlipFunctionBBWhite21(TConfig* configs) {
	configs[ 0]-=    3;
	return 0x2;
}

u64 FlipFunctionBBBlack21(TConfig* configs) {
	configs[ 0]+=    3;
	return 0x2;
}

u64 FlipFunctionBBWhite22(TConfig* configs) {
	configs[ 0]-=   21;
	configs[ 8]-=    2;
	configs[21]-=    2;
	configs[30]-=    2;
	return 0x6;
}

u64 FlipFunctionBBBlack22(TConfig* configs) {
	configs[ 0]+=   21;
	configs[ 8]+=    2;
	configs[21]+=    2;
	configs[30]+=    2;
	return 0x6;
}

u64 FlipFunctionBBWhite23(TConfig* configs) {
	configs[ 0]-=   75;
	configs[ 8]-=    2;
	configs[ 9]-=    2;
	configs[21]-=    2;
	configs[22]-=    2;
	configs[29]-=    2;
	configs[30]-=    2;
	return 0xe;
}

u64 FlipFunctionBBBlack23(TConfig* configs) {
	configs[ 0]+=   75;
	configs[ 8]+=    2;
	configs[ 9]+=    2;
	configs[21]+=    2;
	configs[22]+=    2;
	configs[29]+=    2;
	configs[30]+=    2;
	return 0xe;
}

u64 FlipFunctionBBWhite24(TConfig* configs) {
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
	return 0x1e;
}

u64 FlipFunctionBBBlack24(TConfig* configs) {
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
	return 0x1e;
}

u64 FlipFunctionBBWhite25(TConfig* configs) {
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
	return 0x3e;
}

u64 FlipFunctionBBBlack25(TConfig* configs) {
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
	return 0x3e;
}

u64 FlipFunctionBBWhite26(TConfig* configs) {
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
	return 0x7e;
}

u64 FlipFunctionBBBlack26(TConfig* configs) {
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
	return 0x7e;
}

u64 FlipFunctionBBWhite27(TConfig* configs) {
	configs[20]-=    1;
	return 0x0;
}

u64 FlipFunctionBBBlack27(TConfig* configs) {
	configs[20]+=    1;
	return 0x0;
}

u64 FlipFunctionBBWhite28(TConfig* configs) {
	configs[ 1]-=    6;
	configs[ 8]-=    6;
	configs[20]-=    7;
	configs[32]-=    6;
	return 0x200;
}

u64 FlipFunctionBBBlack28(TConfig* configs) {
	configs[ 1]+=    6;
	configs[ 8]+=    6;
	configs[20]+=    7;
	configs[32]+=    6;
	return 0x200;
}

u64 FlipFunctionBBWhite29(TConfig* configs) {
	configs[ 1]-=    6;
	configs[ 2]-=    6;
	configs[ 8]-=    6;
	configs[ 9]-=   18;
	configs[20]-=   25;
	configs[32]-=    6;
	configs[33]-=    6;
	return 0x20200;
}

u64 FlipFunctionBBBlack29(TConfig* configs) {
	configs[ 1]+=    6;
	configs[ 2]+=    6;
	configs[ 8]+=    6;
	configs[ 9]+=   18;
	configs[20]+=   25;
	configs[32]+=    6;
	configs[33]+=    6;
	return 0x20200;
}

u64 FlipFunctionBBWhite30(TConfig* configs) {
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
	return 0x2020200;
}

u64 FlipFunctionBBBlack30(TConfig* configs) {
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
	return 0x2020200;
}

u64 FlipFunctionBBWhite31(TConfig* configs) {
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
	return 0x202020200;
}

u64 FlipFunctionBBBlack31(TConfig* configs) {
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
	return 0x202020200;
}

u64 FlipFunctionBBWhite32(TConfig* configs) {
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
	return 0x20202020200;
}

u64 FlipFunctionBBBlack32(TConfig* configs) {
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
	return 0x20202020200;
}

u64 FlipFunctionBBWhite33(TConfig* configs) {
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
	return 0x2020202020200;
}

u64 FlipFunctionBBBlack33(TConfig* configs) {
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
	return 0x2020202020200;
}

u64 FlipFunctionBBWhite34(TConfig* configs) {
	configs[31]-=    1;
	return 0x0;
}

u64 FlipFunctionBBBlack34(TConfig* configs) {
	configs[31]+=    1;
	return 0x0;
}

u64 FlipFunctionBBWhite35(TConfig* configs) {
	configs[ 1]-=   18;
	configs[ 9]-=    6;
	configs[21]-=    6;
	configs[31]-=    7;
	return 0x400;
}

u64 FlipFunctionBBBlack35(TConfig* configs) {
	configs[ 1]+=   18;
	configs[ 9]+=    6;
	configs[21]+=    6;
	configs[31]+=    7;
	return 0x400;
}

u64 FlipFunctionBBWhite36(TConfig* configs) {
	configs[ 1]-=   18;
	configs[ 2]-=   54;
	configs[ 9]-=    6;
	configs[11]-=   18;
	configs[21]-=    6;
	configs[22]-=   18;
	configs[31]-=   25;
	return 0x80400;
}

u64 FlipFunctionBBBlack36(TConfig* configs) {
	configs[ 1]+=   18;
	configs[ 2]+=   54;
	configs[ 9]+=    6;
	configs[11]+=   18;
	configs[21]+=    6;
	configs[22]+=   18;
	configs[31]+=   25;
	return 0x80400;
}

u64 FlipFunctionBBWhite37(TConfig* configs) {
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
	return 0x10080400;
}

u64 FlipFunctionBBBlack37(TConfig* configs) {
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
	return 0x10080400;
}

u64 FlipFunctionBBWhite38(TConfig* configs) {
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
	return 0x2010080400;
}

u64 FlipFunctionBBBlack38(TConfig* configs) {
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
	return 0x2010080400;
}

u64 FlipFunctionBBWhite39(TConfig* configs) {
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
	return 0x402010080400;
}

u64 FlipFunctionBBBlack39(TConfig* configs) {
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
	return 0x402010080400;
}

u64 FlipFunctionBBWhite40(TConfig* configs) {
	configs[ 0]-=    9;
	return 0x4;
}

u64 FlipFunctionBBBlack40(TConfig* configs) {
	configs[ 0]+=    9;
	return 0x4;
}

u64 FlipFunctionBBWhite41(TConfig* configs) {
	configs[ 0]-=   63;
	configs[ 9]-=    2;
	configs[22]-=    2;
	configs[29]-=    2;
	return 0xc;
}

u64 FlipFunctionBBBlack41(TConfig* configs) {
	configs[ 0]+=   63;
	configs[ 9]+=    2;
	configs[22]+=    2;
	configs[29]+=    2;
	return 0xc;
}

u64 FlipFunctionBBWhite42(TConfig* configs) {
	configs[ 0]-=  225;
	configs[ 9]-=    2;
	configs[10]-=    2;
	configs[22]-=    2;
	configs[23]-=    2;
	configs[28]-=    2;
	configs[29]-=    2;
	return 0x1c;
}

u64 FlipFunctionBBBlack42(TConfig* configs) {
	configs[ 0]+=  225;
	configs[ 9]+=    2;
	configs[10]+=    2;
	configs[22]+=    2;
	configs[23]+=    2;
	configs[28]+=    2;
	configs[29]+=    2;
	return 0x1c;
}

u64 FlipFunctionBBWhite43(TConfig* configs) {
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
	return 0x3c;
}

u64 FlipFunctionBBBlack43(TConfig* configs) {
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
	return 0x3c;
}

u64 FlipFunctionBBWhite44(TConfig* configs) {
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
	return 0x7c;
}

u64 FlipFunctionBBBlack44(TConfig* configs) {
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
	return 0x7c;
}

u64 FlipFunctionBBWhite45(TConfig* configs) {
	configs[ 0]-=   15;
	configs[20]-=    2;
	configs[31]-=    2;
	return 0x6;
}

u64 FlipFunctionBBBlack45(TConfig* configs) {
	configs[ 0]+=   15;
	configs[20]+=    2;
	configs[31]+=    2;
	return 0x6;
}

u64 FlipFunctionBBWhite46(TConfig* configs) {
	configs[ 0]-=   69;
	configs[ 9]-=    2;
	configs[20]-=    2;
	configs[22]-=    2;
	configs[29]-=    2;
	configs[31]-=    2;
	return 0xe;
}

u64 FlipFunctionBBBlack46(TConfig* configs) {
	configs[ 0]+=   69;
	configs[ 9]+=    2;
	configs[20]+=    2;
	configs[22]+=    2;
	configs[29]+=    2;
	configs[31]+=    2;
	return 0xe;
}

u64 FlipFunctionBBWhite47(TConfig* configs) {
	configs[ 0]-=  231;
	configs[ 9]-=    2;
	configs[10]-=    2;
	configs[20]-=    2;
	configs[22]-=    2;
	configs[23]-=    2;
	configs[28]-=    2;
	configs[29]-=    2;
	configs[31]-=    2;
	return 0x1e;
}

u64 FlipFunctionBBBlack47(TConfig* configs) {
	configs[ 0]+=  231;
	configs[ 9]+=    2;
	configs[10]+=    2;
	configs[20]+=    2;
	configs[22]+=    2;
	configs[23]+=    2;
	configs[28]+=    2;
	configs[29]+=    2;
	configs[31]+=    2;
	return 0x1e;
}

u64 FlipFunctionBBWhite48(TConfig* configs) {
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
	return 0x3e;
}

u64 FlipFunctionBBBlack48(TConfig* configs) {
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
	return 0x3e;
}

u64 FlipFunctionBBWhite49(TConfig* configs) {
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
	return 0x7e;
}

u64 FlipFunctionBBBlack49(TConfig* configs) {
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
	return 0x7e;
}

u64 FlipFunctionBBWhite50(TConfig* configs) {
	configs[ 8]-=    1;
	return 0x0;
}

u64 FlipFunctionBBBlack50(TConfig* configs) {
	configs[ 8]+=    1;
	return 0x0;
}

u64 FlipFunctionBBWhite51(TConfig* configs) {
	configs[ 1]-=    6;
	configs[ 8]-=    7;
	configs[20]-=    6;
	configs[32]-=    6;
	return 0x200;
}

u64 FlipFunctionBBBlack51(TConfig* configs) {
	configs[ 1]+=    6;
	configs[ 8]+=    7;
	configs[20]+=    6;
	configs[32]+=    6;
	return 0x200;
}

u64 FlipFunctionBBWhite52(TConfig* configs) {
	configs[21]-=    1;
	return 0x0;
}

u64 FlipFunctionBBBlack52(TConfig* configs) {
	configs[21]+=    1;
	return 0x0;
}

u64 FlipFunctionBBWhite53(TConfig* configs) {
	configs[ 1]-=   18;
	configs[ 9]-=    6;
	configs[21]-=    7;
	configs[31]-=    6;
	return 0x400;
}

u64 FlipFunctionBBBlack53(TConfig* configs) {
	configs[ 1]+=   18;
	configs[ 9]+=    6;
	configs[21]+=    7;
	configs[31]+=    6;
	return 0x400;
}

u64 FlipFunctionBBWhite54(TConfig* configs) {
	configs[ 1]-=   18;
	configs[ 2]-=   18;
	configs[ 9]-=    6;
	configs[10]-=   18;
	configs[21]-=   25;
	configs[31]-=    6;
	configs[32]-=   18;
	return 0x40400;
}

u64 FlipFunctionBBBlack54(TConfig* configs) {
	configs[ 1]+=   18;
	configs[ 2]+=   18;
	configs[ 9]+=    6;
	configs[10]+=   18;
	configs[21]+=   25;
	configs[31]+=    6;
	configs[32]+=   18;
	return 0x40400;
}

u64 FlipFunctionBBWhite55(TConfig* configs) {
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
	return 0x4040400;
}

u64 FlipFunctionBBBlack55(TConfig* configs) {
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
	return 0x4040400;
}

u64 FlipFunctionBBWhite56(TConfig* configs) {
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
	return 0x404040400;
}

u64 FlipFunctionBBBlack56(TConfig* configs) {
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
	return 0x404040400;
}

u64 FlipFunctionBBWhite57(TConfig* configs) {
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
	return 0x40404040400;
}

u64 FlipFunctionBBBlack57(TConfig* configs) {
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
	return 0x40404040400;
}

u64 FlipFunctionBBWhite58(TConfig* configs) {
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
	return 0x4040404040400;
}

u64 FlipFunctionBBBlack58(TConfig* configs) {
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
	return 0x4040404040400;
}

u64 FlipFunctionBBWhite59(TConfig* configs) {
	configs[30]-=    1;
	return 0x0;
}

u64 FlipFunctionBBBlack59(TConfig* configs) {
	configs[30]+=    1;
	return 0x0;
}

u64 FlipFunctionBBWhite60(TConfig* configs) {
	configs[ 1]-=   54;
	configs[10]-=    6;
	configs[22]-=    6;
	configs[30]-=    7;
	return 0x800;
}

u64 FlipFunctionBBBlack60(TConfig* configs) {
	configs[ 1]+=   54;
	configs[10]+=    6;
	configs[22]+=    6;
	configs[30]+=    7;
	return 0x800;
}

u64 FlipFunctionBBWhite61(TConfig* configs) {
	configs[ 1]-=   54;
	configs[ 2]-=  162;
	configs[10]-=    6;
	configs[12]-=   18;
	configs[22]-=    6;
	configs[23]-=   18;
	configs[30]-=   25;
	return 0x100800;
}

u64 FlipFunctionBBBlack61(TConfig* configs) {
	configs[ 1]+=   54;
	configs[ 2]+=  162;
	configs[10]+=    6;
	configs[12]+=   18;
	configs[22]+=    6;
	configs[23]+=   18;
	configs[30]+=   25;
	return 0x100800;
}

u64 FlipFunctionBBWhite62(TConfig* configs) {
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
	return 0x20100800;
}

u64 FlipFunctionBBBlack62(TConfig* configs) {
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
	return 0x20100800;
}

u64 FlipFunctionBBWhite63(TConfig* configs) {
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
	return 0x4020100800;
}

u64 FlipFunctionBBBlack63(TConfig* configs) {
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
	return 0x4020100800;
}

u64 FlipFunctionBBWhite64(TConfig* configs) {
	configs[ 0]-=   27;
	return 0x8;
}

u64 FlipFunctionBBBlack64(TConfig* configs) {
	configs[ 0]+=   27;
	return 0x8;
}

u64 FlipFunctionBBWhite65(TConfig* configs) {
	configs[ 0]-=  189;
	configs[10]-=    2;
	configs[23]-=    2;
	configs[28]-=    2;
	return 0x18;
}

u64 FlipFunctionBBBlack65(TConfig* configs) {
	configs[ 0]+=  189;
	configs[10]+=    2;
	configs[23]+=    2;
	configs[28]+=    2;
	return 0x18;
}

u64 FlipFunctionBBWhite66(TConfig* configs) {
	configs[ 0]-=  675;
	configs[10]-=    2;
	configs[11]-=    2;
	configs[23]-=    2;
	configs[24]-=    2;
	configs[27]-=    2;
	configs[28]-=    2;
	return 0x38;
}

u64 FlipFunctionBBBlack66(TConfig* configs) {
	configs[ 0]+=  675;
	configs[10]+=    2;
	configs[11]+=    2;
	configs[23]+=    2;
	configs[24]+=    2;
	configs[27]+=    2;
	configs[28]+=    2;
	return 0x38;
}

u64 FlipFunctionBBWhite67(TConfig* configs) {
	configs[ 0]-= 2133;
	configs[10]-=    2;
	configs[11]-=    2;
	configs[12]-=    2;
	configs[23]-=    2;
	configs[24]-=    2;
	configs[25]-=    2;
	configs[27]-=    2;
	configs[28]-=    2;
	return 0x78;
}

u64 FlipFunctionBBBlack67(TConfig* configs) {
	configs[ 0]+= 2133;
	configs[10]+=    2;
	configs[11]+=    2;
	configs[12]+=    2;
	configs[23]+=    2;
	configs[24]+=    2;
	configs[25]+=    2;
	configs[27]+=    2;
	configs[28]+=    2;
	return 0x78;
}

u64 FlipFunctionBBWhite68(TConfig* configs) {
	configs[ 0]-=   45;
	configs[ 8]-=    2;
	configs[21]-=    2;
	configs[30]-=    2;
	return 0xc;
}

u64 FlipFunctionBBBlack68(TConfig* configs) {
	configs[ 0]+=   45;
	configs[ 8]+=    2;
	configs[21]+=    2;
	configs[30]+=    2;
	return 0xc;
}

u64 FlipFunctionBBWhite69(TConfig* configs) {
	configs[ 0]-=  207;
	configs[ 8]-=    2;
	configs[10]-=    2;
	configs[21]-=    2;
	configs[23]-=    2;
	configs[28]-=    2;
	configs[30]-=    2;
	return 0x1c;
}

u64 FlipFunctionBBBlack69(TConfig* configs) {
	configs[ 0]+=  207;
	configs[ 8]+=    2;
	configs[10]+=    2;
	configs[21]+=    2;
	configs[23]+=    2;
	configs[28]+=    2;
	configs[30]+=    2;
	return 0x1c;
}

u64 FlipFunctionBBWhite70(TConfig* configs) {
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
	return 0x3c;
}

u64 FlipFunctionBBBlack70(TConfig* configs) {
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
	return 0x3c;
}

u64 FlipFunctionBBWhite71(TConfig* configs) {
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
	return 0x7c;
}

u64 FlipFunctionBBBlack71(TConfig* configs) {
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
	return 0x7c;
}

u64 FlipFunctionBBWhite72(TConfig* configs) {
	configs[ 0]-=   51;
	configs[ 8]-=    2;
	configs[20]-=    2;
	configs[21]-=    2;
	configs[30]-=    2;
	configs[31]-=    2;
	return 0xe;
}

u64 FlipFunctionBBBlack72(TConfig* configs) {
	configs[ 0]+=   51;
	configs[ 8]+=    2;
	configs[20]+=    2;
	configs[21]+=    2;
	configs[30]+=    2;
	configs[31]+=    2;
	return 0xe;
}

u64 FlipFunctionBBWhite73(TConfig* configs) {
	configs[ 0]-=  213;
	configs[ 8]-=    2;
	configs[10]-=    2;
	configs[20]-=    2;
	configs[21]-=    2;
	configs[23]-=    2;
	configs[28]-=    2;
	configs[30]-=    2;
	configs[31]-=    2;
	return 0x1e;
}

u64 FlipFunctionBBBlack73(TConfig* configs) {
	configs[ 0]+=  213;
	configs[ 8]+=    2;
	configs[10]+=    2;
	configs[20]+=    2;
	configs[21]+=    2;
	configs[23]+=    2;
	configs[28]+=    2;
	configs[30]+=    2;
	configs[31]+=    2;
	return 0x1e;
}

u64 FlipFunctionBBWhite74(TConfig* configs) {
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
	return 0x3e;
}

u64 FlipFunctionBBBlack74(TConfig* configs) {
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
	return 0x3e;
}

u64 FlipFunctionBBWhite75(TConfig* configs) {
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
	return 0x7e;
}

u64 FlipFunctionBBBlack75(TConfig* configs) {
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
	return 0x7e;
}

u64 FlipFunctionBBWhite76(TConfig* configs) {
	configs[ 9]-=    1;
	return 0x0;
}

u64 FlipFunctionBBBlack76(TConfig* configs) {
	configs[ 9]+=    1;
	return 0x0;
}

u64 FlipFunctionBBWhite77(TConfig* configs) {
	configs[ 1]-=   18;
	configs[ 9]-=    7;
	configs[21]-=    6;
	configs[31]-=    6;
	return 0x400;
}

u64 FlipFunctionBBBlack77(TConfig* configs) {
	configs[ 1]+=   18;
	configs[ 9]+=    7;
	configs[21]+=    6;
	configs[31]+=    6;
	return 0x400;
}

u64 FlipFunctionBBWhite78(TConfig* configs) {
	configs[ 1]-=   18;
	configs[ 2]-=    6;
	configs[ 9]-=   25;
	configs[20]-=   18;
	configs[21]-=    6;
	configs[31]-=    6;
	configs[33]-=    6;
	return 0x20400;
}

u64 FlipFunctionBBBlack78(TConfig* configs) {
	configs[ 1]+=   18;
	configs[ 2]+=    6;
	configs[ 9]+=   25;
	configs[20]+=   18;
	configs[21]+=    6;
	configs[31]+=    6;
	configs[33]+=    6;
	return 0x20400;
}

u64 FlipFunctionBBWhite79(TConfig* configs) {
	configs[22]-=    1;
	return 0x0;
}

u64 FlipFunctionBBBlack79(TConfig* configs) {
	configs[22]+=    1;
	return 0x0;
}

u64 FlipFunctionBBWhite80(TConfig* configs) {
	configs[ 1]-=   54;
	configs[10]-=    6;
	configs[22]-=    7;
	configs[30]-=    6;
	return 0x800;
}

u64 FlipFunctionBBBlack80(TConfig* configs) {
	configs[ 1]+=   54;
	configs[10]+=    6;
	configs[22]+=    7;
	configs[30]+=    6;
	return 0x800;
}

u64 FlipFunctionBBWhite81(TConfig* configs) {
	configs[ 1]-=   54;
	configs[ 2]-=   54;
	configs[10]-=    6;
	configs[11]-=   18;
	configs[22]-=   25;
	configs[30]-=    6;
	configs[31]-=   18;
	return 0x80800;
}

u64 FlipFunctionBBBlack81(TConfig* configs) {
	configs[ 1]+=   54;
	configs[ 2]+=   54;
	configs[10]+=    6;
	configs[11]+=   18;
	configs[22]+=   25;
	configs[30]+=    6;
	configs[31]+=   18;
	return 0x80800;
}

u64 FlipFunctionBBWhite82(TConfig* configs) {
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
	return 0x8080800;
}

u64 FlipFunctionBBBlack82(TConfig* configs) {
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
	return 0x8080800;
}

u64 FlipFunctionBBWhite83(TConfig* configs) {
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
	return 0x808080800;
}

u64 FlipFunctionBBBlack83(TConfig* configs) {
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
	return 0x808080800;
}

u64 FlipFunctionBBWhite84(TConfig* configs) {
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
	return 0x80808080800;
}

u64 FlipFunctionBBBlack84(TConfig* configs) {
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
	return 0x80808080800;
}

u64 FlipFunctionBBWhite85(TConfig* configs) {
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
	return 0x8080808080800;
}

u64 FlipFunctionBBBlack85(TConfig* configs) {
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
	return 0x8080808080800;
}

u64 FlipFunctionBBWhite86(TConfig* configs) {
	configs[29]-=    1;
	return 0x0;
}

u64 FlipFunctionBBBlack86(TConfig* configs) {
	configs[29]+=    1;
	return 0x0;
}

u64 FlipFunctionBBWhite87(TConfig* configs) {
	configs[ 1]-=  162;
	configs[11]-=    6;
	configs[23]-=    6;
	configs[29]-=    7;
	return 0x1000;
}

u64 FlipFunctionBBBlack87(TConfig* configs) {
	configs[ 1]+=  162;
	configs[11]+=    6;
	configs[23]+=    6;
	configs[29]+=    7;
	return 0x1000;
}

u64 FlipFunctionBBWhite88(TConfig* configs) {
	configs[ 1]-=  162;
	configs[ 2]-=  486;
	configs[11]-=    6;
	configs[13]-=   18;
	configs[23]-=    6;
	configs[24]-=   18;
	configs[29]-=   25;
	return 0x201000;
}

u64 FlipFunctionBBBlack88(TConfig* configs) {
	configs[ 1]+=  162;
	configs[ 2]+=  486;
	configs[11]+=    6;
	configs[13]+=   18;
	configs[23]+=    6;
	configs[24]+=   18;
	configs[29]+=   25;
	return 0x201000;
}

u64 FlipFunctionBBWhite89(TConfig* configs) {
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
	return 0x40201000;
}

u64 FlipFunctionBBBlack89(TConfig* configs) {
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
	return 0x40201000;
}

u64 FlipFunctionBBWhite90(TConfig* configs) {
	configs[ 0]-=   81;
	return 0x10;
}

u64 FlipFunctionBBBlack90(TConfig* configs) {
	configs[ 0]+=   81;
	return 0x10;
}

u64 FlipFunctionBBWhite91(TConfig* configs) {
	configs[ 0]-=  567;
	configs[11]-=    2;
	configs[24]-=    2;
	configs[27]-=    2;
	return 0x30;
}

u64 FlipFunctionBBBlack91(TConfig* configs) {
	configs[ 0]+=  567;
	configs[11]+=    2;
	configs[24]+=    2;
	configs[27]+=    2;
	return 0x30;
}

u64 FlipFunctionBBWhite92(TConfig* configs) {
	configs[ 0]-= 2025;
	configs[11]-=    2;
	configs[12]-=    2;
	configs[24]-=    2;
	configs[25]-=    2;
	configs[27]-=    2;
	return 0x70;
}

u64 FlipFunctionBBBlack92(TConfig* configs) {
	configs[ 0]+= 2025;
	configs[11]+=    2;
	configs[12]+=    2;
	configs[24]+=    2;
	configs[25]+=    2;
	configs[27]+=    2;
	return 0x70;
}

u64 FlipFunctionBBWhite93(TConfig* configs) {
	configs[ 0]-=  135;
	configs[ 9]-=    2;
	configs[22]-=    2;
	configs[29]-=    2;
	return 0x18;
}

u64 FlipFunctionBBBlack93(TConfig* configs) {
	configs[ 0]+=  135;
	configs[ 9]+=    2;
	configs[22]+=    2;
	configs[29]+=    2;
	return 0x18;
}

u64 FlipFunctionBBWhite94(TConfig* configs) {
	configs[ 0]-=  621;
	configs[ 9]-=    2;
	configs[11]-=    2;
	configs[22]-=    2;
	configs[24]-=    2;
	configs[27]-=    2;
	configs[29]-=    2;
	return 0x38;
}

u64 FlipFunctionBBBlack94(TConfig* configs) {
	configs[ 0]+=  621;
	configs[ 9]+=    2;
	configs[11]+=    2;
	configs[22]+=    2;
	configs[24]+=    2;
	configs[27]+=    2;
	configs[29]+=    2;
	return 0x38;
}

u64 FlipFunctionBBWhite95(TConfig* configs) {
	configs[ 0]-= 2079;
	configs[ 9]-=    2;
	configs[11]-=    2;
	configs[12]-=    2;
	configs[22]-=    2;
	configs[24]-=    2;
	configs[25]-=    2;
	configs[27]-=    2;
	configs[29]-=    2;
	return 0x78;
}

u64 FlipFunctionBBBlack95(TConfig* configs) {
	configs[ 0]+= 2079;
	configs[ 9]+=    2;
	configs[11]+=    2;
	configs[12]+=    2;
	configs[22]+=    2;
	configs[24]+=    2;
	configs[25]+=    2;
	configs[27]+=    2;
	configs[29]+=    2;
	return 0x78;
}

u64 FlipFunctionBBWhite96(TConfig* configs) {
	configs[ 0]-=  153;
	configs[ 8]-=    2;
	configs[ 9]-=    2;
	configs[21]-=    2;
	configs[22]-=    2;
	configs[29]-=    2;
	configs[30]-=    2;
	return 0x1c;
}

u64 FlipFunctionBBBlack96(TConfig* configs) {
	configs[ 0]+=  153;
	configs[ 8]+=    2;
	configs[ 9]+=    2;
	configs[21]+=    2;
	configs[22]+=    2;
	configs[29]+=    2;
	configs[30]+=    2;
	return 0x1c;
}

u64 FlipFunctionBBWhite97(TConfig* configs) {
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
	return 0x3c;
}

u64 FlipFunctionBBBlack97(TConfig* configs) {
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
	return 0x3c;
}

u64 FlipFunctionBBWhite98(TConfig* configs) {
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
	return 0x7c;
}

u64 FlipFunctionBBBlack98(TConfig* configs) {
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
	return 0x7c;
}

u64 FlipFunctionBBWhite99(TConfig* configs) {
	configs[ 0]-=  159;
	configs[ 8]-=    2;
	configs[ 9]-=    2;
	configs[20]-=    2;
	configs[21]-=    2;
	configs[22]-=    2;
	configs[29]-=    2;
	configs[30]-=    2;
	configs[31]-=    2;
	return 0x1e;
}

u64 FlipFunctionBBBlack99(TConfig* configs) {
	configs[ 0]+=  159;
	configs[ 8]+=    2;
	configs[ 9]+=    2;
	configs[20]+=    2;
	configs[21]+=    2;
	configs[22]+=    2;
	configs[29]+=    2;
	configs[30]+=    2;
	configs[31]+=    2;
	return 0x1e;
}

u64 FlipFunctionBBWhite100(TConfig* configs) {
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
	return 0x3e;
}

u64 FlipFunctionBBBlack100(TConfig* configs) {
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
	return 0x3e;
}

u64 FlipFunctionBBWhite101(TConfig* configs) {
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
	return 0x7e;
}

u64 FlipFunctionBBBlack101(TConfig* configs) {
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
	return 0x7e;
}

u64 FlipFunctionBBWhite102(TConfig* configs) {
	configs[10]-=    1;
	return 0x0;
}

u64 FlipFunctionBBBlack102(TConfig* configs) {
	configs[10]+=    1;
	return 0x0;
}

u64 FlipFunctionBBWhite103(TConfig* configs) {
	configs[ 1]-=   54;
	configs[10]-=    7;
	configs[22]-=    6;
	configs[30]-=    6;
	return 0x800;
}

u64 FlipFunctionBBBlack103(TConfig* configs) {
	configs[ 1]+=   54;
	configs[10]+=    7;
	configs[22]+=    6;
	configs[30]+=    6;
	return 0x800;
}

u64 FlipFunctionBBWhite104(TConfig* configs) {
	configs[ 1]-=   54;
	configs[ 2]-=   18;
	configs[10]-=   25;
	configs[21]-=   18;
	configs[22]-=    6;
	configs[30]-=    6;
	configs[32]-=   18;
	return 0x40800;
}

u64 FlipFunctionBBBlack104(TConfig* configs) {
	configs[ 1]+=   54;
	configs[ 2]+=   18;
	configs[10]+=   25;
	configs[21]+=   18;
	configs[22]+=    6;
	configs[30]+=    6;
	configs[32]+=   18;
	return 0x40800;
}

u64 FlipFunctionBBWhite105(TConfig* configs) {
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
	return 0x2040800;
}

u64 FlipFunctionBBBlack105(TConfig* configs) {
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
	return 0x2040800;
}

u64 FlipFunctionBBWhite106(TConfig* configs) {
	configs[23]-=    1;
	return 0x0;
}

u64 FlipFunctionBBBlack106(TConfig* configs) {
	configs[23]+=    1;
	return 0x0;
}

u64 FlipFunctionBBWhite107(TConfig* configs) {
	configs[ 1]-=  162;
	configs[11]-=    6;
	configs[23]-=    7;
	configs[29]-=    6;
	return 0x1000;
}

u64 FlipFunctionBBBlack107(TConfig* configs) {
	configs[ 1]+=  162;
	configs[11]+=    6;
	configs[23]+=    7;
	configs[29]+=    6;
	return 0x1000;
}

u64 FlipFunctionBBWhite108(TConfig* configs) {
	configs[ 1]-=  162;
	configs[ 2]-=  162;
	configs[11]-=    6;
	configs[12]-=   18;
	configs[23]-=   25;
	configs[29]-=    6;
	configs[30]-=   18;
	return 0x101000;
}

u64 FlipFunctionBBBlack108(TConfig* configs) {
	configs[ 1]+=  162;
	configs[ 2]+=  162;
	configs[11]+=    6;
	configs[12]+=   18;
	configs[23]+=   25;
	configs[29]+=    6;
	configs[30]+=   18;
	return 0x101000;
}

u64 FlipFunctionBBWhite109(TConfig* configs) {
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
	return 0x10101000;
}

u64 FlipFunctionBBBlack109(TConfig* configs) {
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
	return 0x10101000;
}

u64 FlipFunctionBBWhite110(TConfig* configs) {
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
	return 0x1010101000;
}

u64 FlipFunctionBBBlack110(TConfig* configs) {
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
	return 0x1010101000;
}

u64 FlipFunctionBBWhite111(TConfig* configs) {
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
	return 0x101010101000;
}

u64 FlipFunctionBBBlack111(TConfig* configs) {
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
	return 0x101010101000;
}

u64 FlipFunctionBBWhite112(TConfig* configs) {
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
	return 0x10101010101000;
}

u64 FlipFunctionBBBlack112(TConfig* configs) {
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
	return 0x10101010101000;
}

u64 FlipFunctionBBWhite113(TConfig* configs) {
	configs[28]-=    1;
	return 0x0;
}

u64 FlipFunctionBBBlack113(TConfig* configs) {
	configs[28]+=    1;
	return 0x0;
}

u64 FlipFunctionBBWhite114(TConfig* configs) {
	configs[ 1]-=  486;
	configs[12]-=    6;
	configs[24]-=    6;
	configs[28]-=    7;
	return 0x2000;
}

u64 FlipFunctionBBBlack114(TConfig* configs) {
	configs[ 1]+=  486;
	configs[12]+=    6;
	configs[24]+=    6;
	configs[28]+=    7;
	return 0x2000;
}

u64 FlipFunctionBBWhite115(TConfig* configs) {
	configs[ 1]-=  486;
	configs[ 2]-= 1458;
	configs[12]-=    6;
	configs[14]-=    6;
	configs[24]-=    6;
	configs[25]-=   18;
	configs[28]-=   25;
	return 0x402000;
}

u64 FlipFunctionBBBlack115(TConfig* configs) {
	configs[ 1]+=  486;
	configs[ 2]+= 1458;
	configs[12]+=    6;
	configs[14]+=    6;
	configs[24]+=    6;
	configs[25]+=   18;
	configs[28]+=   25;
	return 0x402000;
}

u64 FlipFunctionBBWhite116(TConfig* configs) {
	configs[ 0]-=  243;
	return 0x20;
}

u64 FlipFunctionBBBlack116(TConfig* configs) {
	configs[ 0]+=  243;
	return 0x20;
}

u64 FlipFunctionBBWhite117(TConfig* configs) {
	configs[ 0]-= 1701;
	configs[12]-=    2;
	configs[25]-=    2;
	return 0x60;
}

u64 FlipFunctionBBBlack117(TConfig* configs) {
	configs[ 0]+= 1701;
	configs[12]+=    2;
	configs[25]+=    2;
	return 0x60;
}

u64 FlipFunctionBBWhite118(TConfig* configs) {
	configs[ 0]-=  405;
	configs[10]-=    2;
	configs[23]-=    2;
	configs[28]-=    2;
	return 0x30;
}

u64 FlipFunctionBBBlack118(TConfig* configs) {
	configs[ 0]+=  405;
	configs[10]+=    2;
	configs[23]+=    2;
	configs[28]+=    2;
	return 0x30;
}

u64 FlipFunctionBBWhite119(TConfig* configs) {
	configs[ 0]-= 1863;
	configs[10]-=    2;
	configs[12]-=    2;
	configs[23]-=    2;
	configs[25]-=    2;
	configs[28]-=    2;
	return 0x70;
}

u64 FlipFunctionBBBlack119(TConfig* configs) {
	configs[ 0]+= 1863;
	configs[10]+=    2;
	configs[12]+=    2;
	configs[23]+=    2;
	configs[25]+=    2;
	configs[28]+=    2;
	return 0x70;
}

u64 FlipFunctionBBWhite120(TConfig* configs) {
	configs[ 0]-=  459;
	configs[ 9]-=    2;
	configs[10]-=    2;
	configs[22]-=    2;
	configs[23]-=    2;
	configs[28]-=    2;
	configs[29]-=    2;
	return 0x38;
}

u64 FlipFunctionBBBlack120(TConfig* configs) {
	configs[ 0]+=  459;
	configs[ 9]+=    2;
	configs[10]+=    2;
	configs[22]+=    2;
	configs[23]+=    2;
	configs[28]+=    2;
	configs[29]+=    2;
	return 0x38;
}

u64 FlipFunctionBBWhite121(TConfig* configs) {
	configs[ 0]-= 1917;
	configs[ 9]-=    2;
	configs[10]-=    2;
	configs[12]-=    2;
	configs[22]-=    2;
	configs[23]-=    2;
	configs[25]-=    2;
	configs[28]-=    2;
	configs[29]-=    2;
	return 0x78;
}

u64 FlipFunctionBBBlack121(TConfig* configs) {
	configs[ 0]+= 1917;
	configs[ 9]+=    2;
	configs[10]+=    2;
	configs[12]+=    2;
	configs[22]+=    2;
	configs[23]+=    2;
	configs[25]+=    2;
	configs[28]+=    2;
	configs[29]+=    2;
	return 0x78;
}

u64 FlipFunctionBBWhite122(TConfig* configs) {
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
	return 0x3c;
}

u64 FlipFunctionBBBlack122(TConfig* configs) {
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
	return 0x3c;
}

u64 FlipFunctionBBWhite123(TConfig* configs) {
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
	return 0x7c;
}

u64 FlipFunctionBBBlack123(TConfig* configs) {
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
	return 0x7c;
}

u64 FlipFunctionBBWhite124(TConfig* configs) {
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
	return 0x3e;
}

u64 FlipFunctionBBBlack124(TConfig* configs) {
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
	return 0x3e;
}

u64 FlipFunctionBBWhite125(TConfig* configs) {
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
	return 0x7e;
}

u64 FlipFunctionBBBlack125(TConfig* configs) {
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
	return 0x7e;
}

u64 FlipFunctionBBWhite126(TConfig* configs) {
	configs[11]-=    1;
	return 0x0;
}

u64 FlipFunctionBBBlack126(TConfig* configs) {
	configs[11]+=    1;
	return 0x0;
}

u64 FlipFunctionBBWhite127(TConfig* configs) {
	configs[ 1]-=  162;
	configs[11]-=    7;
	configs[23]-=    6;
	configs[29]-=    6;
	return 0x1000;
}

u64 FlipFunctionBBBlack127(TConfig* configs) {
	configs[ 1]+=  162;
	configs[11]+=    7;
	configs[23]+=    6;
	configs[29]+=    6;
	return 0x1000;
}

u64 FlipFunctionBBWhite128(TConfig* configs) {
	configs[ 1]-=  162;
	configs[ 2]-=   54;
	configs[11]-=   25;
	configs[22]-=   18;
	configs[23]-=    6;
	configs[29]-=    6;
	configs[31]-=   18;
	return 0x81000;
}

u64 FlipFunctionBBBlack128(TConfig* configs) {
	configs[ 1]+=  162;
	configs[ 2]+=   54;
	configs[11]+=   25;
	configs[22]+=   18;
	configs[23]+=    6;
	configs[29]+=    6;
	configs[31]+=   18;
	return 0x81000;
}

u64 FlipFunctionBBWhite129(TConfig* configs) {
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
	return 0x4081000;
}

u64 FlipFunctionBBBlack129(TConfig* configs) {
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
	return 0x4081000;
}

u64 FlipFunctionBBWhite130(TConfig* configs) {
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
	return 0x204081000;
}

u64 FlipFunctionBBBlack130(TConfig* configs) {
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
	return 0x204081000;
}

u64 FlipFunctionBBWhite131(TConfig* configs) {
	configs[24]-=    1;
	return 0x0;
}

u64 FlipFunctionBBBlack131(TConfig* configs) {
	configs[24]+=    1;
	return 0x0;
}

u64 FlipFunctionBBWhite132(TConfig* configs) {
	configs[ 1]-=  486;
	configs[12]-=    6;
	configs[24]-=    7;
	configs[28]-=    6;
	return 0x2000;
}

u64 FlipFunctionBBBlack132(TConfig* configs) {
	configs[ 1]+=  486;
	configs[12]+=    6;
	configs[24]+=    7;
	configs[28]+=    6;
	return 0x2000;
}

u64 FlipFunctionBBWhite133(TConfig* configs) {
	configs[ 1]-=  486;
	configs[ 2]-=  486;
	configs[12]-=    6;
	configs[13]-=   18;
	configs[24]-=   25;
	configs[28]-=    6;
	configs[29]-=   18;
	return 0x202000;
}

u64 FlipFunctionBBBlack133(TConfig* configs) {
	configs[ 1]+=  486;
	configs[ 2]+=  486;
	configs[12]+=    6;
	configs[13]+=   18;
	configs[24]+=   25;
	configs[28]+=    6;
	configs[29]+=   18;
	return 0x202000;
}

u64 FlipFunctionBBWhite134(TConfig* configs) {
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
	return 0x20202000;
}

u64 FlipFunctionBBBlack134(TConfig* configs) {
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
	return 0x20202000;
}

u64 FlipFunctionBBWhite135(TConfig* configs) {
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
	return 0x2020202000;
}

u64 FlipFunctionBBBlack135(TConfig* configs) {
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
	return 0x2020202000;
}

u64 FlipFunctionBBWhite136(TConfig* configs) {
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
	return 0x202020202000;
}

u64 FlipFunctionBBBlack136(TConfig* configs) {
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
	return 0x202020202000;
}

u64 FlipFunctionBBWhite137(TConfig* configs) {
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
	return 0x20202020202000;
}

u64 FlipFunctionBBBlack137(TConfig* configs) {
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
	return 0x20202020202000;
}

u64 FlipFunctionBBWhite138(TConfig* configs) {
	configs[27]-=    1;
	return 0x0;
}

u64 FlipFunctionBBBlack138(TConfig* configs) {
	configs[27]+=    1;
	return 0x0;
}

u64 FlipFunctionBBWhite139(TConfig* configs) {
	configs[ 1]-= 1458;
	configs[13]-=    6;
	configs[25]-=    6;
	configs[27]-=    7;
	return 0x4000;
}

u64 FlipFunctionBBBlack139(TConfig* configs) {
	configs[ 1]+= 1458;
	configs[13]+=    6;
	configs[25]+=    6;
	configs[27]+=    7;
	return 0x4000;
}

u64 FlipFunctionBBWhite140(TConfig* configs) {
	configs[ 0]-=  729;
	return 0x40;
}

u64 FlipFunctionBBBlack140(TConfig* configs) {
	configs[ 0]+=  729;
	return 0x40;
}

u64 FlipFunctionBBWhite141(TConfig* configs) {
	configs[ 0]-= 1215;
	configs[11]-=    2;
	configs[24]-=    2;
	configs[27]-=    2;
	return 0x60;
}

u64 FlipFunctionBBBlack141(TConfig* configs) {
	configs[ 0]+= 1215;
	configs[11]+=    2;
	configs[24]+=    2;
	configs[27]+=    2;
	return 0x60;
}

u64 FlipFunctionBBWhite142(TConfig* configs) {
	configs[ 0]-= 1377;
	configs[10]-=    2;
	configs[11]-=    2;
	configs[23]-=    2;
	configs[24]-=    2;
	configs[27]-=    2;
	configs[28]-=    2;
	return 0x70;
}

u64 FlipFunctionBBBlack142(TConfig* configs) {
	configs[ 0]+= 1377;
	configs[10]+=    2;
	configs[11]+=    2;
	configs[23]+=    2;
	configs[24]+=    2;
	configs[27]+=    2;
	configs[28]+=    2;
	return 0x70;
}

u64 FlipFunctionBBWhite143(TConfig* configs) {
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
	return 0x78;
}

u64 FlipFunctionBBBlack143(TConfig* configs) {
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
	return 0x78;
}

u64 FlipFunctionBBWhite144(TConfig* configs) {
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
	return 0x7c;
}

u64 FlipFunctionBBBlack144(TConfig* configs) {
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
	return 0x7c;
}

u64 FlipFunctionBBWhite145(TConfig* configs) {
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
	return 0x7e;
}

u64 FlipFunctionBBBlack145(TConfig* configs) {
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
	return 0x7e;
}

u64 FlipFunctionBBWhite146(TConfig* configs) {
	configs[12]-=    1;
	return 0x0;
}

u64 FlipFunctionBBBlack146(TConfig* configs) {
	configs[12]+=    1;
	return 0x0;
}

u64 FlipFunctionBBWhite147(TConfig* configs) {
	configs[ 1]-=  486;
	configs[12]-=    7;
	configs[24]-=    6;
	configs[28]-=    6;
	return 0x2000;
}

u64 FlipFunctionBBBlack147(TConfig* configs) {
	configs[ 1]+=  486;
	configs[12]+=    7;
	configs[24]+=    6;
	configs[28]+=    6;
	return 0x2000;
}

u64 FlipFunctionBBWhite148(TConfig* configs) {
	configs[ 1]-=  486;
	configs[ 2]-=  162;
	configs[12]-=   25;
	configs[23]-=   18;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[30]-=   18;
	return 0x102000;
}

u64 FlipFunctionBBBlack148(TConfig* configs) {
	configs[ 1]+=  486;
	configs[ 2]+=  162;
	configs[12]+=   25;
	configs[23]+=   18;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[30]+=   18;
	return 0x102000;
}

u64 FlipFunctionBBWhite149(TConfig* configs) {
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
	return 0x8102000;
}

u64 FlipFunctionBBBlack149(TConfig* configs) {
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
	return 0x8102000;
}

u64 FlipFunctionBBWhite150(TConfig* configs) {
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
	return 0x408102000;
}

u64 FlipFunctionBBBlack150(TConfig* configs) {
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
	return 0x408102000;
}

u64 FlipFunctionBBWhite151(TConfig* configs) {
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
	return 0x20408102000;
}

u64 FlipFunctionBBBlack151(TConfig* configs) {
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
	return 0x20408102000;
}

u64 FlipFunctionBBWhite152(TConfig* configs) {
	configs[25]-=    1;
	return 0x0;
}

u64 FlipFunctionBBBlack152(TConfig* configs) {
	configs[25]+=    1;
	return 0x0;
}

u64 FlipFunctionBBWhite153(TConfig* configs) {
	configs[ 1]-= 1458;
	configs[13]-=    6;
	configs[25]-=    7;
	configs[27]-=    6;
	return 0x4000;
}

u64 FlipFunctionBBBlack153(TConfig* configs) {
	configs[ 1]+= 1458;
	configs[13]+=    6;
	configs[25]+=    7;
	configs[27]+=    6;
	return 0x4000;
}

u64 FlipFunctionBBWhite154(TConfig* configs) {
	configs[ 1]-= 1458;
	configs[ 2]-= 1458;
	configs[13]-=    6;
	configs[14]-=    6;
	configs[25]-=   25;
	configs[27]-=    6;
	configs[28]-=   18;
	return 0x404000;
}

u64 FlipFunctionBBBlack154(TConfig* configs) {
	configs[ 1]+= 1458;
	configs[ 2]+= 1458;
	configs[13]+=    6;
	configs[14]+=    6;
	configs[25]+=   25;
	configs[27]+=    6;
	configs[28]+=   18;
	return 0x404000;
}

u64 FlipFunctionBBWhite155(TConfig* configs) {
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
	return 0x40404000;
}

u64 FlipFunctionBBBlack155(TConfig* configs) {
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
	return 0x40404000;
}

u64 FlipFunctionBBWhite156(TConfig* configs) {
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
	return 0x4040404000;
}

u64 FlipFunctionBBBlack156(TConfig* configs) {
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
	return 0x4040404000;
}

u64 FlipFunctionBBWhite157(TConfig* configs) {
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
	return 0x404040404000;
}

u64 FlipFunctionBBBlack157(TConfig* configs) {
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
	return 0x404040404000;
}

u64 FlipFunctionBBWhite158(TConfig* configs) {
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
	return 0x40404040404000;
}

u64 FlipFunctionBBBlack158(TConfig* configs) {
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
	return 0x40404040404000;
}

u64 FlipFunctionBBWhite159(TConfig* configs) {
	configs[ 0]-= 2187;
	return 0x80;
}

u64 FlipFunctionBBBlack159(TConfig* configs) {
	configs[ 0]+= 2187;
	return 0x80;
}

u64 FlipFunctionBBWhite160(TConfig* configs) {
	configs[ 0]-= 3645;
	configs[12]-=    2;
	configs[25]-=    2;
	return 0xc0;
}

u64 FlipFunctionBBBlack160(TConfig* configs) {
	configs[ 0]+= 3645;
	configs[12]+=    2;
	configs[25]+=    2;
	return 0xc0;
}

u64 FlipFunctionBBWhite161(TConfig* configs) {
	configs[ 0]-= 4131;
	configs[11]-=    2;
	configs[12]-=    2;
	configs[24]-=    2;
	configs[25]-=    2;
	configs[27]-=    2;
	return 0xe0;
}

u64 FlipFunctionBBBlack161(TConfig* configs) {
	configs[ 0]+= 4131;
	configs[11]+=    2;
	configs[12]+=    2;
	configs[24]+=    2;
	configs[25]+=    2;
	configs[27]+=    2;
	return 0xe0;
}

u64 FlipFunctionBBWhite162(TConfig* configs) {
	configs[ 0]-= 4293;
	configs[10]-=    2;
	configs[11]-=    2;
	configs[12]-=    2;
	configs[23]-=    2;
	configs[24]-=    2;
	configs[25]-=    2;
	configs[27]-=    2;
	configs[28]-=    2;
	return 0xf0;
}

u64 FlipFunctionBBBlack162(TConfig* configs) {
	configs[ 0]+= 4293;
	configs[10]+=    2;
	configs[11]+=    2;
	configs[12]+=    2;
	configs[23]+=    2;
	configs[24]+=    2;
	configs[25]+=    2;
	configs[27]+=    2;
	configs[28]+=    2;
	return 0xf0;
}

u64 FlipFunctionBBWhite163(TConfig* configs) {
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
	return 0xf8;
}

u64 FlipFunctionBBBlack163(TConfig* configs) {
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
	return 0xf8;
}

u64 FlipFunctionBBWhite164(TConfig* configs) {
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
	return 0xfc;
}

u64 FlipFunctionBBBlack164(TConfig* configs) {
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
	return 0xfc;
}

u64 FlipFunctionBBWhite165(TConfig* configs) {
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
	return 0xfe;
}

u64 FlipFunctionBBBlack165(TConfig* configs) {
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
	return 0xfe;
}

u64 FlipFunctionBBWhite166(TConfig* configs) {
	configs[13]-=    1;
	return 0x0;
}

u64 FlipFunctionBBBlack166(TConfig* configs) {
	configs[13]+=    1;
	return 0x0;
}

u64 FlipFunctionBBWhite167(TConfig* configs) {
	configs[ 1]-= 1458;
	configs[13]-=    7;
	configs[25]-=    6;
	configs[27]-=    6;
	return 0x4000;
}

u64 FlipFunctionBBBlack167(TConfig* configs) {
	configs[ 1]+= 1458;
	configs[13]+=    7;
	configs[25]+=    6;
	configs[27]+=    6;
	return 0x4000;
}

u64 FlipFunctionBBWhite168(TConfig* configs) {
	configs[ 1]-= 1458;
	configs[ 2]-=  486;
	configs[13]-=   25;
	configs[24]-=   18;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[29]-=   18;
	return 0x204000;
}

u64 FlipFunctionBBBlack168(TConfig* configs) {
	configs[ 1]+= 1458;
	configs[ 2]+=  486;
	configs[13]+=   25;
	configs[24]+=   18;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[29]+=   18;
	return 0x204000;
}

u64 FlipFunctionBBWhite169(TConfig* configs) {
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
	return 0x10204000;
}

u64 FlipFunctionBBBlack169(TConfig* configs) {
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
	return 0x10204000;
}

u64 FlipFunctionBBWhite170(TConfig* configs) {
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
	return 0x810204000;
}

u64 FlipFunctionBBBlack170(TConfig* configs) {
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
	return 0x810204000;
}

u64 FlipFunctionBBWhite171(TConfig* configs) {
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
	return 0x40810204000;
}

u64 FlipFunctionBBBlack171(TConfig* configs) {
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
	return 0x40810204000;
}

u64 FlipFunctionBBWhite172(TConfig* configs) {
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
	return 0x2040810204000;
}

u64 FlipFunctionBBBlack172(TConfig* configs) {
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
	return 0x2040810204000;
}

u64 FlipFunctionBBWhite173(TConfig* configs) {
	configs[26]-=    1;
	return 0x0;
}

u64 FlipFunctionBBBlack173(TConfig* configs) {
	configs[26]+=    1;
	return 0x0;
}

u64 FlipFunctionBBWhite174(TConfig* configs) {
	configs[ 1]-= 4374;
	configs[14]-=    2;
	configs[26]-=    7;
	return 0x8000;
}

u64 FlipFunctionBBBlack174(TConfig* configs) {
	configs[ 1]+= 4374;
	configs[14]+=    2;
	configs[26]+=    7;
	return 0x8000;
}

u64 FlipFunctionBBWhite175(TConfig* configs) {
	configs[ 1]-= 4374;
	configs[ 2]-= 4374;
	configs[14]-=    2;
	configs[15]-=    2;
	configs[26]-=   25;
	configs[27]-=   18;
	return 0x808000;
}

u64 FlipFunctionBBBlack175(TConfig* configs) {
	configs[ 1]+= 4374;
	configs[ 2]+= 4374;
	configs[14]+=    2;
	configs[15]+=    2;
	configs[26]+=   25;
	configs[27]+=   18;
	return 0x808000;
}

u64 FlipFunctionBBWhite176(TConfig* configs) {
	configs[ 1]-= 4374;
	configs[ 2]-= 4374;
	configs[ 3]-= 4374;
	configs[14]-=    2;
	configs[15]-=    2;
	configs[16]-=    2;
	configs[26]-=   79;
	configs[27]-=   18;
	configs[28]-=   54;
	return 0x80808000;
}

u64 FlipFunctionBBBlack176(TConfig* configs) {
	configs[ 1]+= 4374;
	configs[ 2]+= 4374;
	configs[ 3]+= 4374;
	configs[14]+=    2;
	configs[15]+=    2;
	configs[16]+=    2;
	configs[26]+=   79;
	configs[27]+=   18;
	configs[28]+=   54;
	return 0x80808000;
}

u64 FlipFunctionBBWhite177(TConfig* configs) {
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
	return 0x8080808000;
}

u64 FlipFunctionBBBlack177(TConfig* configs) {
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
	return 0x8080808000;
}

u64 FlipFunctionBBWhite178(TConfig* configs) {
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
	return 0x808080808000;
}

u64 FlipFunctionBBBlack178(TConfig* configs) {
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
	return 0x808080808000;
}

u64 FlipFunctionBBWhite179(TConfig* configs) {
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
	return 0x80808080808000;
}

u64 FlipFunctionBBBlack179(TConfig* configs) {
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
	return 0x80808080808000;
}

u64 FlipFunctionBBWhite180(TConfig* configs) {
	configs[ 1]-=    1;
	return 0x100;
}

u64 FlipFunctionBBBlack180(TConfig* configs) {
	configs[ 1]+=    1;
	return 0x100;
}

u64 FlipFunctionBBWhite181(TConfig* configs) {
	configs[ 1]-=    7;
	configs[ 8]-=    6;
	configs[20]-=    6;
	configs[32]-=    6;
	return 0x300;
}

u64 FlipFunctionBBBlack181(TConfig* configs) {
	configs[ 1]+=    7;
	configs[ 8]+=    6;
	configs[20]+=    6;
	configs[32]+=    6;
	return 0x300;
}

u64 FlipFunctionBBWhite182(TConfig* configs) {
	configs[ 1]-=   25;
	configs[ 8]-=    6;
	configs[ 9]-=    6;
	configs[20]-=    6;
	configs[21]-=    6;
	configs[31]-=    6;
	configs[32]-=    6;
	return 0x700;
}

u64 FlipFunctionBBBlack182(TConfig* configs) {
	configs[ 1]+=   25;
	configs[ 8]+=    6;
	configs[ 9]+=    6;
	configs[20]+=    6;
	configs[21]+=    6;
	configs[31]+=    6;
	configs[32]+=    6;
	return 0x700;
}

u64 FlipFunctionBBWhite183(TConfig* configs) {
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
	return 0xf00;
}

u64 FlipFunctionBBBlack183(TConfig* configs) {
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
	return 0xf00;
}

u64 FlipFunctionBBWhite184(TConfig* configs) {
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
	return 0x1f00;
}

u64 FlipFunctionBBBlack184(TConfig* configs) {
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
	return 0x1f00;
}

u64 FlipFunctionBBWhite185(TConfig* configs) {
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
	return 0x3f00;
}

u64 FlipFunctionBBBlack185(TConfig* configs) {
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
	return 0x3f00;
}

u64 FlipFunctionBBWhite186(TConfig* configs) {
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
	return 0x7f00;
}

u64 FlipFunctionBBBlack186(TConfig* configs) {
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
	return 0x7f00;
}

u64 FlipFunctionBBWhite187(TConfig* configs) {
	configs[19]-=    3;
	return 0x0;
}

u64 FlipFunctionBBBlack187(TConfig* configs) {
	configs[19]+=    3;
	return 0x0;
}

u64 FlipFunctionBBWhite188(TConfig* configs) {
	configs[ 2]-=    2;
	configs[ 8]-=   18;
	configs[19]-=   21;
	configs[34]-=    2;
	return 0x10000;
}

u64 FlipFunctionBBBlack188(TConfig* configs) {
	configs[ 2]+=    2;
	configs[ 8]+=   18;
	configs[19]+=   21;
	configs[34]+=    2;
	return 0x10000;
}

u64 FlipFunctionBBWhite189(TConfig* configs) {
	configs[ 2]-=    2;
	configs[ 3]-=    2;
	configs[ 8]-=   18;
	configs[ 9]-=   54;
	configs[19]-=   75;
	configs[34]-=    2;
	configs[35]-=    2;
	return 0x1010000;
}

u64 FlipFunctionBBBlack189(TConfig* configs) {
	configs[ 2]+=    2;
	configs[ 3]+=    2;
	configs[ 8]+=   18;
	configs[ 9]+=   54;
	configs[19]+=   75;
	configs[34]+=    2;
	configs[35]+=    2;
	return 0x1010000;
}

u64 FlipFunctionBBWhite190(TConfig* configs) {
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
	return 0x101010000;
}

u64 FlipFunctionBBBlack190(TConfig* configs) {
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
	return 0x101010000;
}

u64 FlipFunctionBBWhite191(TConfig* configs) {
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
	return 0x10101010000;
}

u64 FlipFunctionBBBlack191(TConfig* configs) {
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
	return 0x10101010000;
}

u64 FlipFunctionBBWhite192(TConfig* configs) {
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
	return 0x1010101010000;
}

u64 FlipFunctionBBBlack192(TConfig* configs) {
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
	return 0x1010101010000;
}

u64 FlipFunctionBBWhite193(TConfig* configs) {
	configs[33]-=    1;
	return 0x0;
}

u64 FlipFunctionBBBlack193(TConfig* configs) {
	configs[33]+=    1;
	return 0x0;
}

u64 FlipFunctionBBWhite194(TConfig* configs) {
	configs[ 2]-=    6;
	configs[ 9]-=   18;
	configs[20]-=   18;
	configs[33]-=    7;
	return 0x20000;
}

u64 FlipFunctionBBBlack194(TConfig* configs) {
	configs[ 2]+=    6;
	configs[ 9]+=   18;
	configs[20]+=   18;
	configs[33]+=    7;
	return 0x20000;
}

u64 FlipFunctionBBWhite195(TConfig* configs) {
	configs[ 2]-=    6;
	configs[ 3]-=   18;
	configs[ 9]-=   18;
	configs[11]-=   54;
	configs[20]-=   18;
	configs[21]-=   54;
	configs[33]-=   25;
	return 0x4020000;
}

u64 FlipFunctionBBBlack195(TConfig* configs) {
	configs[ 2]+=    6;
	configs[ 3]+=   18;
	configs[ 9]+=   18;
	configs[11]+=   54;
	configs[20]+=   18;
	configs[21]+=   54;
	configs[33]+=   25;
	return 0x4020000;
}

u64 FlipFunctionBBWhite196(TConfig* configs) {
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
	return 0x804020000;
}

u64 FlipFunctionBBBlack196(TConfig* configs) {
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
	return 0x804020000;
}

u64 FlipFunctionBBWhite197(TConfig* configs) {
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
	return 0x100804020000;
}

u64 FlipFunctionBBBlack197(TConfig* configs) {
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
	return 0x100804020000;
}

u64 FlipFunctionBBWhite198(TConfig* configs) {
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
	return 0x20100804020000;
}

u64 FlipFunctionBBBlack198(TConfig* configs) {
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
	return 0x20100804020000;
}

u64 FlipFunctionBBWhite199(TConfig* configs) {
	configs[ 1]-=    3;
	return 0x200;
}

u64 FlipFunctionBBBlack199(TConfig* configs) {
	configs[ 1]+=    3;
	return 0x200;
}

u64 FlipFunctionBBWhite200(TConfig* configs) {
	configs[ 1]-=   21;
	configs[ 9]-=    6;
	configs[21]-=    6;
	configs[31]-=    6;
	return 0x600;
}

u64 FlipFunctionBBBlack200(TConfig* configs) {
	configs[ 1]+=   21;
	configs[ 9]+=    6;
	configs[21]+=    6;
	configs[31]+=    6;
	return 0x600;
}

u64 FlipFunctionBBWhite201(TConfig* configs) {
	configs[ 1]-=   75;
	configs[ 9]-=    6;
	configs[10]-=    6;
	configs[21]-=    6;
	configs[22]-=    6;
	configs[30]-=    6;
	configs[31]-=    6;
	return 0xe00;
}

u64 FlipFunctionBBBlack201(TConfig* configs) {
	configs[ 1]+=   75;
	configs[ 9]+=    6;
	configs[10]+=    6;
	configs[21]+=    6;
	configs[22]+=    6;
	configs[30]+=    6;
	configs[31]+=    6;
	return 0xe00;
}

u64 FlipFunctionBBWhite202(TConfig* configs) {
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
	return 0x1e00;
}

u64 FlipFunctionBBBlack202(TConfig* configs) {
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
	return 0x1e00;
}

u64 FlipFunctionBBWhite203(TConfig* configs) {
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
	return 0x3e00;
}

u64 FlipFunctionBBBlack203(TConfig* configs) {
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
	return 0x3e00;
}

u64 FlipFunctionBBWhite204(TConfig* configs) {
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
	return 0x7e00;
}

u64 FlipFunctionBBBlack204(TConfig* configs) {
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
	return 0x7e00;
}

u64 FlipFunctionBBWhite205(TConfig* configs) {
	configs[ 8]-=    3;
	return 0x0;
}

u64 FlipFunctionBBBlack205(TConfig* configs) {
	configs[ 8]+=    3;
	return 0x0;
}

u64 FlipFunctionBBWhite206(TConfig* configs) {
	configs[20]-=    3;
	return 0x0;
}

u64 FlipFunctionBBBlack206(TConfig* configs) {
	configs[20]+=    3;
	return 0x0;
}

u64 FlipFunctionBBWhite207(TConfig* configs) {
	configs[ 2]-=    6;
	configs[ 9]-=   18;
	configs[20]-=   21;
	configs[33]-=    6;
	return 0x20000;
}

u64 FlipFunctionBBBlack207(TConfig* configs) {
	configs[ 2]+=    6;
	configs[ 9]+=   18;
	configs[20]+=   21;
	configs[33]+=    6;
	return 0x20000;
}

u64 FlipFunctionBBWhite208(TConfig* configs) {
	configs[ 2]-=    6;
	configs[ 3]-=    6;
	configs[ 9]-=   18;
	configs[10]-=   54;
	configs[20]-=   75;
	configs[33]-=    6;
	configs[34]-=    6;
	return 0x2020000;
}

u64 FlipFunctionBBBlack208(TConfig* configs) {
	configs[ 2]+=    6;
	configs[ 3]+=    6;
	configs[ 9]+=   18;
	configs[10]+=   54;
	configs[20]+=   75;
	configs[33]+=    6;
	configs[34]+=    6;
	return 0x2020000;
}

u64 FlipFunctionBBWhite209(TConfig* configs) {
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
	return 0x202020000;
}

u64 FlipFunctionBBBlack209(TConfig* configs) {
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
	return 0x202020000;
}

u64 FlipFunctionBBWhite210(TConfig* configs) {
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
	return 0x20202020000;
}

u64 FlipFunctionBBBlack210(TConfig* configs) {
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
	return 0x20202020000;
}

u64 FlipFunctionBBWhite211(TConfig* configs) {
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
	return 0x2020202020000;
}

u64 FlipFunctionBBBlack211(TConfig* configs) {
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
	return 0x2020202020000;
}

u64 FlipFunctionBBWhite212(TConfig* configs) {
	configs[32]-=    3;
	return 0x0;
}

u64 FlipFunctionBBBlack212(TConfig* configs) {
	configs[32]+=    3;
	return 0x0;
}

u64 FlipFunctionBBWhite213(TConfig* configs) {
	configs[ 2]-=   18;
	configs[10]-=   18;
	configs[21]-=   18;
	configs[32]-=   21;
	return 0x40000;
}

u64 FlipFunctionBBBlack213(TConfig* configs) {
	configs[ 2]+=   18;
	configs[10]+=   18;
	configs[21]+=   18;
	configs[32]+=   21;
	return 0x40000;
}

u64 FlipFunctionBBWhite214(TConfig* configs) {
	configs[ 2]-=   18;
	configs[ 3]-=   54;
	configs[10]-=   18;
	configs[12]-=   54;
	configs[21]-=   18;
	configs[22]-=   54;
	configs[32]-=   75;
	return 0x8040000;
}

u64 FlipFunctionBBBlack214(TConfig* configs) {
	configs[ 2]+=   18;
	configs[ 3]+=   54;
	configs[10]+=   18;
	configs[12]+=   54;
	configs[21]+=   18;
	configs[22]+=   54;
	configs[32]+=   75;
	return 0x8040000;
}

u64 FlipFunctionBBWhite215(TConfig* configs) {
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
	return 0x1008040000;
}

u64 FlipFunctionBBBlack215(TConfig* configs) {
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
	return 0x1008040000;
}

u64 FlipFunctionBBWhite216(TConfig* configs) {
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
	return 0x201008040000;
}

u64 FlipFunctionBBBlack216(TConfig* configs) {
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
	return 0x201008040000;
}

u64 FlipFunctionBBWhite217(TConfig* configs) {
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
	return 0x40201008040000;
}

u64 FlipFunctionBBBlack217(TConfig* configs) {
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
	return 0x40201008040000;
}

u64 FlipFunctionBBWhite218(TConfig* configs) {
	configs[ 1]-=    9;
	return 0x400;
}

u64 FlipFunctionBBBlack218(TConfig* configs) {
	configs[ 1]+=    9;
	return 0x400;
}

u64 FlipFunctionBBWhite219(TConfig* configs) {
	configs[ 1]-=   63;
	configs[10]-=    6;
	configs[22]-=    6;
	configs[30]-=    6;
	return 0xc00;
}

u64 FlipFunctionBBBlack219(TConfig* configs) {
	configs[ 1]+=   63;
	configs[10]+=    6;
	configs[22]+=    6;
	configs[30]+=    6;
	return 0xc00;
}

u64 FlipFunctionBBWhite220(TConfig* configs) {
	configs[ 1]-=  225;
	configs[10]-=    6;
	configs[11]-=    6;
	configs[22]-=    6;
	configs[23]-=    6;
	configs[29]-=    6;
	configs[30]-=    6;
	return 0x1c00;
}

u64 FlipFunctionBBBlack220(TConfig* configs) {
	configs[ 1]+=  225;
	configs[10]+=    6;
	configs[11]+=    6;
	configs[22]+=    6;
	configs[23]+=    6;
	configs[29]+=    6;
	configs[30]+=    6;
	return 0x1c00;
}

u64 FlipFunctionBBWhite221(TConfig* configs) {
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
	return 0x3c00;
}

u64 FlipFunctionBBBlack221(TConfig* configs) {
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
	return 0x3c00;
}

u64 FlipFunctionBBWhite222(TConfig* configs) {
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
	return 0x7c00;
}

u64 FlipFunctionBBBlack222(TConfig* configs) {
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
	return 0x7c00;
}

u64 FlipFunctionBBWhite223(TConfig* configs) {
	configs[ 1]-=   15;
	configs[ 8]-=    6;
	configs[20]-=    6;
	configs[32]-=    6;
	return 0x600;
}

u64 FlipFunctionBBBlack223(TConfig* configs) {
	configs[ 1]+=   15;
	configs[ 8]+=    6;
	configs[20]+=    6;
	configs[32]+=    6;
	return 0x600;
}

u64 FlipFunctionBBWhite224(TConfig* configs) {
	configs[ 1]-=   69;
	configs[ 8]-=    6;
	configs[10]-=    6;
	configs[20]-=    6;
	configs[22]-=    6;
	configs[30]-=    6;
	configs[32]-=    6;
	return 0xe00;
}

u64 FlipFunctionBBBlack224(TConfig* configs) {
	configs[ 1]+=   69;
	configs[ 8]+=    6;
	configs[10]+=    6;
	configs[20]+=    6;
	configs[22]+=    6;
	configs[30]+=    6;
	configs[32]+=    6;
	return 0xe00;
}

u64 FlipFunctionBBWhite225(TConfig* configs) {
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
	return 0x1e00;
}

u64 FlipFunctionBBBlack225(TConfig* configs) {
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
	return 0x1e00;
}

u64 FlipFunctionBBWhite226(TConfig* configs) {
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
	return 0x3e00;
}

u64 FlipFunctionBBBlack226(TConfig* configs) {
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
	return 0x3e00;
}

u64 FlipFunctionBBWhite227(TConfig* configs) {
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
	return 0x7e00;
}

u64 FlipFunctionBBBlack227(TConfig* configs) {
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
	return 0x7e00;
}

u64 FlipFunctionBBWhite228(TConfig* configs) {
	configs[ 9]-=    3;
	return 0x0;
}

u64 FlipFunctionBBBlack228(TConfig* configs) {
	configs[ 9]+=    3;
	return 0x0;
}

u64 FlipFunctionBBWhite229(TConfig* configs) {
	configs[ 2]-=    6;
	configs[ 9]-=   21;
	configs[20]-=   18;
	configs[33]-=    6;
	return 0x20000;
}

u64 FlipFunctionBBBlack229(TConfig* configs) {
	configs[ 2]+=    6;
	configs[ 9]+=   21;
	configs[20]+=   18;
	configs[33]+=    6;
	return 0x20000;
}

u64 FlipFunctionBBWhite230(TConfig* configs) {
	configs[21]-=    3;
	return 0x0;
}

u64 FlipFunctionBBBlack230(TConfig* configs) {
	configs[21]+=    3;
	return 0x0;
}

u64 FlipFunctionBBWhite231(TConfig* configs) {
	configs[ 2]-=   18;
	configs[10]-=   18;
	configs[21]-=   21;
	configs[32]-=   18;
	return 0x40000;
}

u64 FlipFunctionBBBlack231(TConfig* configs) {
	configs[ 2]+=   18;
	configs[10]+=   18;
	configs[21]+=   21;
	configs[32]+=   18;
	return 0x40000;
}

u64 FlipFunctionBBWhite232(TConfig* configs) {
	configs[ 2]-=   18;
	configs[ 3]-=   18;
	configs[10]-=   18;
	configs[11]-=   54;
	configs[21]-=   75;
	configs[32]-=   18;
	configs[33]-=   18;
	return 0x4040000;
}

u64 FlipFunctionBBBlack232(TConfig* configs) {
	configs[ 2]+=   18;
	configs[ 3]+=   18;
	configs[10]+=   18;
	configs[11]+=   54;
	configs[21]+=   75;
	configs[32]+=   18;
	configs[33]+=   18;
	return 0x4040000;
}

u64 FlipFunctionBBWhite233(TConfig* configs) {
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
	return 0x404040000;
}

u64 FlipFunctionBBBlack233(TConfig* configs) {
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
	return 0x404040000;
}

u64 FlipFunctionBBWhite234(TConfig* configs) {
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
	return 0x40404040000;
}

u64 FlipFunctionBBBlack234(TConfig* configs) {
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
	return 0x40404040000;
}

u64 FlipFunctionBBWhite235(TConfig* configs) {
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
	return 0x4040404040000;
}

u64 FlipFunctionBBBlack235(TConfig* configs) {
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
	return 0x4040404040000;
}

u64 FlipFunctionBBWhite236(TConfig* configs) {
	configs[31]-=    3;
	return 0x0;
}

u64 FlipFunctionBBBlack236(TConfig* configs) {
	configs[31]+=    3;
	return 0x0;
}

u64 FlipFunctionBBWhite237(TConfig* configs) {
	configs[ 2]-=   54;
	configs[11]-=   18;
	configs[22]-=   18;
	configs[31]-=   21;
	return 0x80000;
}

u64 FlipFunctionBBBlack237(TConfig* configs) {
	configs[ 2]+=   54;
	configs[11]+=   18;
	configs[22]+=   18;
	configs[31]+=   21;
	return 0x80000;
}

u64 FlipFunctionBBWhite238(TConfig* configs) {
	configs[ 2]-=   54;
	configs[ 3]-=  162;
	configs[11]-=   18;
	configs[13]-=   54;
	configs[22]-=   18;
	configs[23]-=   54;
	configs[31]-=   75;
	return 0x10080000;
}

u64 FlipFunctionBBBlack238(TConfig* configs) {
	configs[ 2]+=   54;
	configs[ 3]+=  162;
	configs[11]+=   18;
	configs[13]+=   54;
	configs[22]+=   18;
	configs[23]+=   54;
	configs[31]+=   75;
	return 0x10080000;
}

u64 FlipFunctionBBWhite239(TConfig* configs) {
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
	return 0x2010080000;
}

u64 FlipFunctionBBBlack239(TConfig* configs) {
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
	return 0x2010080000;
}

u64 FlipFunctionBBWhite240(TConfig* configs) {
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
	return 0x402010080000;
}

u64 FlipFunctionBBBlack240(TConfig* configs) {
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
	return 0x402010080000;
}

u64 FlipFunctionBBWhite241(TConfig* configs) {
	configs[ 1]-=   27;
	return 0x800;
}

u64 FlipFunctionBBBlack241(TConfig* configs) {
	configs[ 1]+=   27;
	return 0x800;
}

u64 FlipFunctionBBWhite242(TConfig* configs) {
	configs[ 1]-=  189;
	configs[11]-=    6;
	configs[23]-=    6;
	configs[29]-=    6;
	return 0x1800;
}

u64 FlipFunctionBBBlack242(TConfig* configs) {
	configs[ 1]+=  189;
	configs[11]+=    6;
	configs[23]+=    6;
	configs[29]+=    6;
	return 0x1800;
}

u64 FlipFunctionBBWhite243(TConfig* configs) {
	configs[ 1]-=  675;
	configs[11]-=    6;
	configs[12]-=    6;
	configs[23]-=    6;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[29]-=    6;
	return 0x3800;
}

u64 FlipFunctionBBBlack243(TConfig* configs) {
	configs[ 1]+=  675;
	configs[11]+=    6;
	configs[12]+=    6;
	configs[23]+=    6;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[29]+=    6;
	return 0x3800;
}

u64 FlipFunctionBBWhite244(TConfig* configs) {
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
	return 0x7800;
}

u64 FlipFunctionBBBlack244(TConfig* configs) {
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
	return 0x7800;
}

u64 FlipFunctionBBWhite245(TConfig* configs) {
	configs[ 1]-=   45;
	configs[ 9]-=    6;
	configs[21]-=    6;
	configs[31]-=    6;
	return 0xc00;
}

u64 FlipFunctionBBBlack245(TConfig* configs) {
	configs[ 1]+=   45;
	configs[ 9]+=    6;
	configs[21]+=    6;
	configs[31]+=    6;
	return 0xc00;
}

u64 FlipFunctionBBWhite246(TConfig* configs) {
	configs[ 1]-=  207;
	configs[ 9]-=    6;
	configs[11]-=    6;
	configs[21]-=    6;
	configs[23]-=    6;
	configs[29]-=    6;
	configs[31]-=    6;
	return 0x1c00;
}

u64 FlipFunctionBBBlack246(TConfig* configs) {
	configs[ 1]+=  207;
	configs[ 9]+=    6;
	configs[11]+=    6;
	configs[21]+=    6;
	configs[23]+=    6;
	configs[29]+=    6;
	configs[31]+=    6;
	return 0x1c00;
}

u64 FlipFunctionBBWhite247(TConfig* configs) {
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
	return 0x3c00;
}

u64 FlipFunctionBBBlack247(TConfig* configs) {
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
	return 0x3c00;
}

u64 FlipFunctionBBWhite248(TConfig* configs) {
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
	return 0x7c00;
}

u64 FlipFunctionBBBlack248(TConfig* configs) {
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
	return 0x7c00;
}

u64 FlipFunctionBBWhite249(TConfig* configs) {
	configs[ 1]-=   51;
	configs[ 8]-=    6;
	configs[ 9]-=    6;
	configs[20]-=    6;
	configs[21]-=    6;
	configs[31]-=    6;
	configs[32]-=    6;
	return 0xe00;
}

u64 FlipFunctionBBBlack249(TConfig* configs) {
	configs[ 1]+=   51;
	configs[ 8]+=    6;
	configs[ 9]+=    6;
	configs[20]+=    6;
	configs[21]+=    6;
	configs[31]+=    6;
	configs[32]+=    6;
	return 0xe00;
}

u64 FlipFunctionBBWhite250(TConfig* configs) {
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
	return 0x1e00;
}

u64 FlipFunctionBBBlack250(TConfig* configs) {
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
	return 0x1e00;
}

u64 FlipFunctionBBWhite251(TConfig* configs) {
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
	return 0x3e00;
}

u64 FlipFunctionBBBlack251(TConfig* configs) {
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
	return 0x3e00;
}

u64 FlipFunctionBBWhite252(TConfig* configs) {
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
	return 0x7e00;
}

u64 FlipFunctionBBBlack252(TConfig* configs) {
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
	return 0x7e00;
}

u64 FlipFunctionBBWhite253(TConfig* configs) {
	configs[10]-=    3;
	return 0x0;
}

u64 FlipFunctionBBBlack253(TConfig* configs) {
	configs[10]+=    3;
	return 0x0;
}

u64 FlipFunctionBBWhite254(TConfig* configs) {
	configs[ 2]-=   18;
	configs[10]-=   21;
	configs[21]-=   18;
	configs[32]-=   18;
	return 0x40000;
}

u64 FlipFunctionBBBlack254(TConfig* configs) {
	configs[ 2]+=   18;
	configs[10]+=   21;
	configs[21]+=   18;
	configs[32]+=   18;
	return 0x40000;
}

u64 FlipFunctionBBWhite255(TConfig* configs) {
	configs[ 2]-=   18;
	configs[ 3]-=    6;
	configs[10]-=   75;
	configs[20]-=   54;
	configs[21]-=   18;
	configs[32]-=   18;
	configs[34]-=    6;
	return 0x2040000;
}

u64 FlipFunctionBBBlack255(TConfig* configs) {
	configs[ 2]+=   18;
	configs[ 3]+=    6;
	configs[10]+=   75;
	configs[20]+=   54;
	configs[21]+=   18;
	configs[32]+=   18;
	configs[34]+=    6;
	return 0x2040000;
}

u64 FlipFunctionBBWhite256(TConfig* configs) {
	configs[22]-=    3;
	return 0x0;
}

u64 FlipFunctionBBBlack256(TConfig* configs) {
	configs[22]+=    3;
	return 0x0;
}

u64 FlipFunctionBBWhite257(TConfig* configs) {
	configs[ 2]-=   54;
	configs[11]-=   18;
	configs[22]-=   21;
	configs[31]-=   18;
	return 0x80000;
}

u64 FlipFunctionBBBlack257(TConfig* configs) {
	configs[ 2]+=   54;
	configs[11]+=   18;
	configs[22]+=   21;
	configs[31]+=   18;
	return 0x80000;
}

u64 FlipFunctionBBWhite258(TConfig* configs) {
	configs[ 2]-=   54;
	configs[ 3]-=   54;
	configs[11]-=   18;
	configs[12]-=   54;
	configs[22]-=   75;
	configs[31]-=   18;
	configs[32]-=   54;
	return 0x8080000;
}

u64 FlipFunctionBBBlack258(TConfig* configs) {
	configs[ 2]+=   54;
	configs[ 3]+=   54;
	configs[11]+=   18;
	configs[12]+=   54;
	configs[22]+=   75;
	configs[31]+=   18;
	configs[32]+=   54;
	return 0x8080000;
}

u64 FlipFunctionBBWhite259(TConfig* configs) {
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
	return 0x808080000;
}

u64 FlipFunctionBBBlack259(TConfig* configs) {
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
	return 0x808080000;
}

u64 FlipFunctionBBWhite260(TConfig* configs) {
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
	return 0x80808080000;
}

u64 FlipFunctionBBBlack260(TConfig* configs) {
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
	return 0x80808080000;
}

u64 FlipFunctionBBWhite261(TConfig* configs) {
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
	return 0x8080808080000;
}

u64 FlipFunctionBBBlack261(TConfig* configs) {
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
	return 0x8080808080000;
}

u64 FlipFunctionBBWhite262(TConfig* configs) {
	configs[30]-=    3;
	return 0x0;
}

u64 FlipFunctionBBBlack262(TConfig* configs) {
	configs[30]+=    3;
	return 0x0;
}

u64 FlipFunctionBBWhite263(TConfig* configs) {
	configs[ 2]-=  162;
	configs[12]-=   18;
	configs[23]-=   18;
	configs[30]-=   21;
	return 0x100000;
}

u64 FlipFunctionBBBlack263(TConfig* configs) {
	configs[ 2]+=  162;
	configs[12]+=   18;
	configs[23]+=   18;
	configs[30]+=   21;
	return 0x100000;
}

u64 FlipFunctionBBWhite264(TConfig* configs) {
	configs[ 2]-=  162;
	configs[ 3]-=  486;
	configs[12]-=   18;
	configs[14]-=   18;
	configs[23]-=   18;
	configs[24]-=   54;
	configs[30]-=   75;
	return 0x20100000;
}

u64 FlipFunctionBBBlack264(TConfig* configs) {
	configs[ 2]+=  162;
	configs[ 3]+=  486;
	configs[12]+=   18;
	configs[14]+=   18;
	configs[23]+=   18;
	configs[24]+=   54;
	configs[30]+=   75;
	return 0x20100000;
}

u64 FlipFunctionBBWhite265(TConfig* configs) {
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
	return 0x4020100000;
}

u64 FlipFunctionBBBlack265(TConfig* configs) {
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
	return 0x4020100000;
}

u64 FlipFunctionBBWhite266(TConfig* configs) {
	configs[ 1]-=   81;
	return 0x1000;
}

u64 FlipFunctionBBBlack266(TConfig* configs) {
	configs[ 1]+=   81;
	return 0x1000;
}

u64 FlipFunctionBBWhite267(TConfig* configs) {
	configs[ 1]-=  567;
	configs[12]-=    6;
	configs[24]-=    6;
	configs[28]-=    6;
	return 0x3000;
}

u64 FlipFunctionBBBlack267(TConfig* configs) {
	configs[ 1]+=  567;
	configs[12]+=    6;
	configs[24]+=    6;
	configs[28]+=    6;
	return 0x3000;
}

u64 FlipFunctionBBWhite268(TConfig* configs) {
	configs[ 1]-= 2025;
	configs[12]-=    6;
	configs[13]-=    6;
	configs[24]-=    6;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[28]-=    6;
	return 0x7000;
}

u64 FlipFunctionBBBlack268(TConfig* configs) {
	configs[ 1]+= 2025;
	configs[12]+=    6;
	configs[13]+=    6;
	configs[24]+=    6;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[28]+=    6;
	return 0x7000;
}

u64 FlipFunctionBBWhite269(TConfig* configs) {
	configs[ 1]-=  135;
	configs[10]-=    6;
	configs[22]-=    6;
	configs[30]-=    6;
	return 0x1800;
}

u64 FlipFunctionBBBlack269(TConfig* configs) {
	configs[ 1]+=  135;
	configs[10]+=    6;
	configs[22]+=    6;
	configs[30]+=    6;
	return 0x1800;
}

u64 FlipFunctionBBWhite270(TConfig* configs) {
	configs[ 1]-=  621;
	configs[10]-=    6;
	configs[12]-=    6;
	configs[22]-=    6;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[30]-=    6;
	return 0x3800;
}

u64 FlipFunctionBBBlack270(TConfig* configs) {
	configs[ 1]+=  621;
	configs[10]+=    6;
	configs[12]+=    6;
	configs[22]+=    6;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[30]+=    6;
	return 0x3800;
}

u64 FlipFunctionBBWhite271(TConfig* configs) {
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
	return 0x7800;
}

u64 FlipFunctionBBBlack271(TConfig* configs) {
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
	return 0x7800;
}

u64 FlipFunctionBBWhite272(TConfig* configs) {
	configs[ 1]-=  153;
	configs[ 9]-=    6;
	configs[10]-=    6;
	configs[21]-=    6;
	configs[22]-=    6;
	configs[30]-=    6;
	configs[31]-=    6;
	return 0x1c00;
}

u64 FlipFunctionBBBlack272(TConfig* configs) {
	configs[ 1]+=  153;
	configs[ 9]+=    6;
	configs[10]+=    6;
	configs[21]+=    6;
	configs[22]+=    6;
	configs[30]+=    6;
	configs[31]+=    6;
	return 0x1c00;
}

u64 FlipFunctionBBWhite273(TConfig* configs) {
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
	return 0x3c00;
}

u64 FlipFunctionBBBlack273(TConfig* configs) {
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
	return 0x3c00;
}

u64 FlipFunctionBBWhite274(TConfig* configs) {
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
	return 0x7c00;
}

u64 FlipFunctionBBBlack274(TConfig* configs) {
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
	return 0x7c00;
}

u64 FlipFunctionBBWhite275(TConfig* configs) {
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
	return 0x1e00;
}

u64 FlipFunctionBBBlack275(TConfig* configs) {
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
	return 0x1e00;
}

u64 FlipFunctionBBWhite276(TConfig* configs) {
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
	return 0x3e00;
}

u64 FlipFunctionBBBlack276(TConfig* configs) {
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
	return 0x3e00;
}

u64 FlipFunctionBBWhite277(TConfig* configs) {
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
	return 0x7e00;
}

u64 FlipFunctionBBBlack277(TConfig* configs) {
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
	return 0x7e00;
}

u64 FlipFunctionBBWhite278(TConfig* configs) {
	configs[11]-=    3;
	return 0x0;
}

u64 FlipFunctionBBBlack278(TConfig* configs) {
	configs[11]+=    3;
	return 0x0;
}

u64 FlipFunctionBBWhite279(TConfig* configs) {
	configs[ 2]-=   54;
	configs[11]-=   21;
	configs[22]-=   18;
	configs[31]-=   18;
	return 0x80000;
}

u64 FlipFunctionBBBlack279(TConfig* configs) {
	configs[ 2]+=   54;
	configs[11]+=   21;
	configs[22]+=   18;
	configs[31]+=   18;
	return 0x80000;
}

u64 FlipFunctionBBWhite280(TConfig* configs) {
	configs[ 2]-=   54;
	configs[ 3]-=   18;
	configs[11]-=   75;
	configs[21]-=   54;
	configs[22]-=   18;
	configs[31]-=   18;
	configs[33]-=   18;
	return 0x4080000;
}

u64 FlipFunctionBBBlack280(TConfig* configs) {
	configs[ 2]+=   54;
	configs[ 3]+=   18;
	configs[11]+=   75;
	configs[21]+=   54;
	configs[22]+=   18;
	configs[31]+=   18;
	configs[33]+=   18;
	return 0x4080000;
}

u64 FlipFunctionBBWhite281(TConfig* configs) {
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
	return 0x204080000;
}

u64 FlipFunctionBBBlack281(TConfig* configs) {
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
	return 0x204080000;
}

u64 FlipFunctionBBWhite282(TConfig* configs) {
	configs[23]-=    3;
	return 0x0;
}

u64 FlipFunctionBBBlack282(TConfig* configs) {
	configs[23]+=    3;
	return 0x0;
}

u64 FlipFunctionBBWhite283(TConfig* configs) {
	configs[ 2]-=  162;
	configs[12]-=   18;
	configs[23]-=   21;
	configs[30]-=   18;
	return 0x100000;
}

u64 FlipFunctionBBBlack283(TConfig* configs) {
	configs[ 2]+=  162;
	configs[12]+=   18;
	configs[23]+=   21;
	configs[30]+=   18;
	return 0x100000;
}

u64 FlipFunctionBBWhite284(TConfig* configs) {
	configs[ 2]-=  162;
	configs[ 3]-=  162;
	configs[12]-=   18;
	configs[13]-=   54;
	configs[23]-=   75;
	configs[30]-=   18;
	configs[31]-=   54;
	return 0x10100000;
}

u64 FlipFunctionBBBlack284(TConfig* configs) {
	configs[ 2]+=  162;
	configs[ 3]+=  162;
	configs[12]+=   18;
	configs[13]+=   54;
	configs[23]+=   75;
	configs[30]+=   18;
	configs[31]+=   54;
	return 0x10100000;
}

u64 FlipFunctionBBWhite285(TConfig* configs) {
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
	return 0x1010100000;
}

u64 FlipFunctionBBBlack285(TConfig* configs) {
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
	return 0x1010100000;
}

u64 FlipFunctionBBWhite286(TConfig* configs) {
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
	return 0x101010100000;
}

u64 FlipFunctionBBBlack286(TConfig* configs) {
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
	return 0x101010100000;
}

u64 FlipFunctionBBWhite287(TConfig* configs) {
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
	return 0x10101010100000;
}

u64 FlipFunctionBBBlack287(TConfig* configs) {
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
	return 0x10101010100000;
}

u64 FlipFunctionBBWhite288(TConfig* configs) {
	configs[29]-=    3;
	return 0x0;
}

u64 FlipFunctionBBBlack288(TConfig* configs) {
	configs[29]+=    3;
	return 0x0;
}

u64 FlipFunctionBBWhite289(TConfig* configs) {
	configs[ 2]-=  486;
	configs[13]-=   18;
	configs[24]-=   18;
	configs[29]-=   21;
	return 0x200000;
}

u64 FlipFunctionBBBlack289(TConfig* configs) {
	configs[ 2]+=  486;
	configs[13]+=   18;
	configs[24]+=   18;
	configs[29]+=   21;
	return 0x200000;
}

u64 FlipFunctionBBWhite290(TConfig* configs) {
	configs[ 2]-=  486;
	configs[ 3]-= 1458;
	configs[13]-=   18;
	configs[15]-=    6;
	configs[24]-=   18;
	configs[25]-=   54;
	configs[29]-=   75;
	return 0x40200000;
}

u64 FlipFunctionBBBlack290(TConfig* configs) {
	configs[ 2]+=  486;
	configs[ 3]+= 1458;
	configs[13]+=   18;
	configs[15]+=    6;
	configs[24]+=   18;
	configs[25]+=   54;
	configs[29]+=   75;
	return 0x40200000;
}

u64 FlipFunctionBBWhite291(TConfig* configs) {
	configs[ 1]-=  243;
	return 0x2000;
}

u64 FlipFunctionBBBlack291(TConfig* configs) {
	configs[ 1]+=  243;
	return 0x2000;
}

u64 FlipFunctionBBWhite292(TConfig* configs) {
	configs[ 1]-= 1701;
	configs[13]-=    6;
	configs[25]-=    6;
	configs[27]-=    6;
	return 0x6000;
}

u64 FlipFunctionBBBlack292(TConfig* configs) {
	configs[ 1]+= 1701;
	configs[13]+=    6;
	configs[25]+=    6;
	configs[27]+=    6;
	return 0x6000;
}

u64 FlipFunctionBBWhite293(TConfig* configs) {
	configs[ 1]-=  405;
	configs[11]-=    6;
	configs[23]-=    6;
	configs[29]-=    6;
	return 0x3000;
}

u64 FlipFunctionBBBlack293(TConfig* configs) {
	configs[ 1]+=  405;
	configs[11]+=    6;
	configs[23]+=    6;
	configs[29]+=    6;
	return 0x3000;
}

u64 FlipFunctionBBWhite294(TConfig* configs) {
	configs[ 1]-= 1863;
	configs[11]-=    6;
	configs[13]-=    6;
	configs[23]-=    6;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[29]-=    6;
	return 0x7000;
}

u64 FlipFunctionBBBlack294(TConfig* configs) {
	configs[ 1]+= 1863;
	configs[11]+=    6;
	configs[13]+=    6;
	configs[23]+=    6;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[29]+=    6;
	return 0x7000;
}

u64 FlipFunctionBBWhite295(TConfig* configs) {
	configs[ 1]-=  459;
	configs[10]-=    6;
	configs[11]-=    6;
	configs[22]-=    6;
	configs[23]-=    6;
	configs[29]-=    6;
	configs[30]-=    6;
	return 0x3800;
}

u64 FlipFunctionBBBlack295(TConfig* configs) {
	configs[ 1]+=  459;
	configs[10]+=    6;
	configs[11]+=    6;
	configs[22]+=    6;
	configs[23]+=    6;
	configs[29]+=    6;
	configs[30]+=    6;
	return 0x3800;
}

u64 FlipFunctionBBWhite296(TConfig* configs) {
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
	return 0x7800;
}

u64 FlipFunctionBBBlack296(TConfig* configs) {
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
	return 0x7800;
}

u64 FlipFunctionBBWhite297(TConfig* configs) {
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
	return 0x3c00;
}

u64 FlipFunctionBBBlack297(TConfig* configs) {
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
	return 0x3c00;
}

u64 FlipFunctionBBWhite298(TConfig* configs) {
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
	return 0x7c00;
}

u64 FlipFunctionBBBlack298(TConfig* configs) {
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
	return 0x7c00;
}

u64 FlipFunctionBBWhite299(TConfig* configs) {
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
	return 0x3e00;
}

u64 FlipFunctionBBBlack299(TConfig* configs) {
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
	return 0x3e00;
}

u64 FlipFunctionBBWhite300(TConfig* configs) {
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
	return 0x7e00;
}

u64 FlipFunctionBBBlack300(TConfig* configs) {
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
	return 0x7e00;
}

u64 FlipFunctionBBWhite301(TConfig* configs) {
	configs[12]-=    3;
	return 0x0;
}

u64 FlipFunctionBBBlack301(TConfig* configs) {
	configs[12]+=    3;
	return 0x0;
}

u64 FlipFunctionBBWhite302(TConfig* configs) {
	configs[ 2]-=  162;
	configs[12]-=   21;
	configs[23]-=   18;
	configs[30]-=   18;
	return 0x100000;
}

u64 FlipFunctionBBBlack302(TConfig* configs) {
	configs[ 2]+=  162;
	configs[12]+=   21;
	configs[23]+=   18;
	configs[30]+=   18;
	return 0x100000;
}

u64 FlipFunctionBBWhite303(TConfig* configs) {
	configs[ 2]-=  162;
	configs[ 3]-=   54;
	configs[12]-=   75;
	configs[22]-=   54;
	configs[23]-=   18;
	configs[30]-=   18;
	configs[32]-=   54;
	return 0x8100000;
}

u64 FlipFunctionBBBlack303(TConfig* configs) {
	configs[ 2]+=  162;
	configs[ 3]+=   54;
	configs[12]+=   75;
	configs[22]+=   54;
	configs[23]+=   18;
	configs[30]+=   18;
	configs[32]+=   54;
	return 0x8100000;
}

u64 FlipFunctionBBWhite304(TConfig* configs) {
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
	return 0x408100000;
}

u64 FlipFunctionBBBlack304(TConfig* configs) {
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
	return 0x408100000;
}

u64 FlipFunctionBBWhite305(TConfig* configs) {
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
	return 0x20408100000;
}

u64 FlipFunctionBBBlack305(TConfig* configs) {
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
	return 0x20408100000;
}

u64 FlipFunctionBBWhite306(TConfig* configs) {
	configs[24]-=    3;
	return 0x0;
}

u64 FlipFunctionBBBlack306(TConfig* configs) {
	configs[24]+=    3;
	return 0x0;
}

u64 FlipFunctionBBWhite307(TConfig* configs) {
	configs[ 2]-=  486;
	configs[13]-=   18;
	configs[24]-=   21;
	configs[29]-=   18;
	return 0x200000;
}

u64 FlipFunctionBBBlack307(TConfig* configs) {
	configs[ 2]+=  486;
	configs[13]+=   18;
	configs[24]+=   21;
	configs[29]+=   18;
	return 0x200000;
}

u64 FlipFunctionBBWhite308(TConfig* configs) {
	configs[ 2]-=  486;
	configs[ 3]-=  486;
	configs[13]-=   18;
	configs[14]-=   18;
	configs[24]-=   75;
	configs[29]-=   18;
	configs[30]-=   54;
	return 0x20200000;
}

u64 FlipFunctionBBBlack308(TConfig* configs) {
	configs[ 2]+=  486;
	configs[ 3]+=  486;
	configs[13]+=   18;
	configs[14]+=   18;
	configs[24]+=   75;
	configs[29]+=   18;
	configs[30]+=   54;
	return 0x20200000;
}

u64 FlipFunctionBBWhite309(TConfig* configs) {
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
	return 0x2020200000;
}

u64 FlipFunctionBBBlack309(TConfig* configs) {
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
	return 0x2020200000;
}

u64 FlipFunctionBBWhite310(TConfig* configs) {
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
	return 0x202020200000;
}

u64 FlipFunctionBBBlack310(TConfig* configs) {
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
	return 0x202020200000;
}

u64 FlipFunctionBBWhite311(TConfig* configs) {
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
	return 0x20202020200000;
}

u64 FlipFunctionBBBlack311(TConfig* configs) {
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
	return 0x20202020200000;
}

u64 FlipFunctionBBWhite312(TConfig* configs) {
	configs[28]-=    3;
	return 0x0;
}

u64 FlipFunctionBBBlack312(TConfig* configs) {
	configs[28]+=    3;
	return 0x0;
}

u64 FlipFunctionBBWhite313(TConfig* configs) {
	configs[ 2]-= 1458;
	configs[14]-=    6;
	configs[25]-=   18;
	configs[28]-=   21;
	return 0x400000;
}

u64 FlipFunctionBBBlack313(TConfig* configs) {
	configs[ 2]+= 1458;
	configs[14]+=    6;
	configs[25]+=   18;
	configs[28]+=   21;
	return 0x400000;
}

u64 FlipFunctionBBWhite314(TConfig* configs) {
	configs[ 1]-=  729;
	return 0x4000;
}

u64 FlipFunctionBBBlack314(TConfig* configs) {
	configs[ 1]+=  729;
	return 0x4000;
}

u64 FlipFunctionBBWhite315(TConfig* configs) {
	configs[ 1]-= 1215;
	configs[12]-=    6;
	configs[24]-=    6;
	configs[28]-=    6;
	return 0x6000;
}

u64 FlipFunctionBBBlack315(TConfig* configs) {
	configs[ 1]+= 1215;
	configs[12]+=    6;
	configs[24]+=    6;
	configs[28]+=    6;
	return 0x6000;
}

u64 FlipFunctionBBWhite316(TConfig* configs) {
	configs[ 1]-= 1377;
	configs[11]-=    6;
	configs[12]-=    6;
	configs[23]-=    6;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[29]-=    6;
	return 0x7000;
}

u64 FlipFunctionBBBlack316(TConfig* configs) {
	configs[ 1]+= 1377;
	configs[11]+=    6;
	configs[12]+=    6;
	configs[23]+=    6;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[29]+=    6;
	return 0x7000;
}

u64 FlipFunctionBBWhite317(TConfig* configs) {
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
	return 0x7800;
}

u64 FlipFunctionBBBlack317(TConfig* configs) {
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
	return 0x7800;
}

u64 FlipFunctionBBWhite318(TConfig* configs) {
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
	return 0x7c00;
}

u64 FlipFunctionBBBlack318(TConfig* configs) {
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
	return 0x7c00;
}

u64 FlipFunctionBBWhite319(TConfig* configs) {
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
	return 0x7e00;
}

u64 FlipFunctionBBBlack319(TConfig* configs) {
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
	return 0x7e00;
}

u64 FlipFunctionBBWhite320(TConfig* configs) {
	configs[13]-=    3;
	return 0x0;
}

u64 FlipFunctionBBBlack320(TConfig* configs) {
	configs[13]+=    3;
	return 0x0;
}

u64 FlipFunctionBBWhite321(TConfig* configs) {
	configs[ 2]-=  486;
	configs[13]-=   21;
	configs[24]-=   18;
	configs[29]-=   18;
	return 0x200000;
}

u64 FlipFunctionBBBlack321(TConfig* configs) {
	configs[ 2]+=  486;
	configs[13]+=   21;
	configs[24]+=   18;
	configs[29]+=   18;
	return 0x200000;
}

u64 FlipFunctionBBWhite322(TConfig* configs) {
	configs[ 2]-=  486;
	configs[ 3]-=  162;
	configs[13]-=   75;
	configs[23]-=   54;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[31]-=   54;
	return 0x10200000;
}

u64 FlipFunctionBBBlack322(TConfig* configs) {
	configs[ 2]+=  486;
	configs[ 3]+=  162;
	configs[13]+=   75;
	configs[23]+=   54;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[31]+=   54;
	return 0x10200000;
}

u64 FlipFunctionBBWhite323(TConfig* configs) {
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
	return 0x810200000;
}

u64 FlipFunctionBBBlack323(TConfig* configs) {
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
	return 0x810200000;
}

u64 FlipFunctionBBWhite324(TConfig* configs) {
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
	return 0x40810200000;
}

u64 FlipFunctionBBBlack324(TConfig* configs) {
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
	return 0x40810200000;
}

u64 FlipFunctionBBWhite325(TConfig* configs) {
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
	return 0x2040810200000;
}

u64 FlipFunctionBBBlack325(TConfig* configs) {
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
	return 0x2040810200000;
}

u64 FlipFunctionBBWhite326(TConfig* configs) {
	configs[25]-=    3;
	return 0x0;
}

u64 FlipFunctionBBBlack326(TConfig* configs) {
	configs[25]+=    3;
	return 0x0;
}

u64 FlipFunctionBBWhite327(TConfig* configs) {
	configs[ 2]-= 1458;
	configs[14]-=    6;
	configs[25]-=   21;
	configs[28]-=   18;
	return 0x400000;
}

u64 FlipFunctionBBBlack327(TConfig* configs) {
	configs[ 2]+= 1458;
	configs[14]+=    6;
	configs[25]+=   21;
	configs[28]+=   18;
	return 0x400000;
}

u64 FlipFunctionBBWhite328(TConfig* configs) {
	configs[ 2]-= 1458;
	configs[ 3]-= 1458;
	configs[14]-=    6;
	configs[15]-=    6;
	configs[25]-=   75;
	configs[28]-=   18;
	configs[29]-=   54;
	return 0x40400000;
}

u64 FlipFunctionBBBlack328(TConfig* configs) {
	configs[ 2]+= 1458;
	configs[ 3]+= 1458;
	configs[14]+=    6;
	configs[15]+=    6;
	configs[25]+=   75;
	configs[28]+=   18;
	configs[29]+=   54;
	return 0x40400000;
}

u64 FlipFunctionBBWhite329(TConfig* configs) {
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
	return 0x4040400000;
}

u64 FlipFunctionBBBlack329(TConfig* configs) {
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
	return 0x4040400000;
}

u64 FlipFunctionBBWhite330(TConfig* configs) {
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
	return 0x404040400000;
}

u64 FlipFunctionBBBlack330(TConfig* configs) {
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
	return 0x404040400000;
}

u64 FlipFunctionBBWhite331(TConfig* configs) {
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
	return 0x40404040400000;
}

u64 FlipFunctionBBBlack331(TConfig* configs) {
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
	return 0x40404040400000;
}

u64 FlipFunctionBBWhite332(TConfig* configs) {
	configs[27]-=    3;
	return 0x0;
}

u64 FlipFunctionBBBlack332(TConfig* configs) {
	configs[27]+=    3;
	return 0x0;
}

u64 FlipFunctionBBWhite333(TConfig* configs) {
	configs[ 1]-= 2187;
	return 0x8000;
}

u64 FlipFunctionBBBlack333(TConfig* configs) {
	configs[ 1]+= 2187;
	return 0x8000;
}

u64 FlipFunctionBBWhite334(TConfig* configs) {
	configs[ 1]-= 3645;
	configs[13]-=    6;
	configs[25]-=    6;
	configs[27]-=    6;
	return 0xc000;
}

u64 FlipFunctionBBBlack334(TConfig* configs) {
	configs[ 1]+= 3645;
	configs[13]+=    6;
	configs[25]+=    6;
	configs[27]+=    6;
	return 0xc000;
}

u64 FlipFunctionBBWhite335(TConfig* configs) {
	configs[ 1]-= 4131;
	configs[12]-=    6;
	configs[13]-=    6;
	configs[24]-=    6;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[28]-=    6;
	return 0xe000;
}

u64 FlipFunctionBBBlack335(TConfig* configs) {
	configs[ 1]+= 4131;
	configs[12]+=    6;
	configs[13]+=    6;
	configs[24]+=    6;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[28]+=    6;
	return 0xe000;
}

u64 FlipFunctionBBWhite336(TConfig* configs) {
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
	return 0xf000;
}

u64 FlipFunctionBBBlack336(TConfig* configs) {
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
	return 0xf000;
}

u64 FlipFunctionBBWhite337(TConfig* configs) {
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
	return 0xf800;
}

u64 FlipFunctionBBBlack337(TConfig* configs) {
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
	return 0xf800;
}

u64 FlipFunctionBBWhite338(TConfig* configs) {
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
	return 0xfc00;
}

u64 FlipFunctionBBBlack338(TConfig* configs) {
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
	return 0xfc00;
}

u64 FlipFunctionBBWhite339(TConfig* configs) {
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
	return 0xfe00;
}

u64 FlipFunctionBBBlack339(TConfig* configs) {
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
	return 0xfe00;
}

u64 FlipFunctionBBWhite340(TConfig* configs) {
	configs[14]-=    1;
	return 0x0;
}

u64 FlipFunctionBBBlack340(TConfig* configs) {
	configs[14]+=    1;
	return 0x0;
}

u64 FlipFunctionBBWhite341(TConfig* configs) {
	configs[ 2]-= 1458;
	configs[14]-=    7;
	configs[25]-=   18;
	configs[28]-=   18;
	return 0x400000;
}

u64 FlipFunctionBBBlack341(TConfig* configs) {
	configs[ 2]+= 1458;
	configs[14]+=    7;
	configs[25]+=   18;
	configs[28]+=   18;
	return 0x400000;
}

u64 FlipFunctionBBWhite342(TConfig* configs) {
	configs[ 2]-= 1458;
	configs[ 3]-=  486;
	configs[14]-=   25;
	configs[24]-=   54;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[30]-=   54;
	return 0x20400000;
}

u64 FlipFunctionBBBlack342(TConfig* configs) {
	configs[ 2]+= 1458;
	configs[ 3]+=  486;
	configs[14]+=   25;
	configs[24]+=   54;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[30]+=   54;
	return 0x20400000;
}

u64 FlipFunctionBBWhite343(TConfig* configs) {
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
	return 0x1020400000;
}

u64 FlipFunctionBBBlack343(TConfig* configs) {
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
	return 0x1020400000;
}

u64 FlipFunctionBBWhite344(TConfig* configs) {
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
	return 0x81020400000;
}

u64 FlipFunctionBBBlack344(TConfig* configs) {
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
	return 0x81020400000;
}

u64 FlipFunctionBBWhite345(TConfig* configs) {
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
	return 0x4081020400000;
}

u64 FlipFunctionBBBlack345(TConfig* configs) {
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
	return 0x4081020400000;
}

u64 FlipFunctionBBWhite346(TConfig* configs) {
	configs[26]-=    3;
	return 0x0;
}

u64 FlipFunctionBBBlack346(TConfig* configs) {
	configs[26]+=    3;
	return 0x0;
}

u64 FlipFunctionBBWhite347(TConfig* configs) {
	configs[ 2]-= 4374;
	configs[15]-=    2;
	configs[26]-=   21;
	configs[27]-=   18;
	return 0x800000;
}

u64 FlipFunctionBBBlack347(TConfig* configs) {
	configs[ 2]+= 4374;
	configs[15]+=    2;
	configs[26]+=   21;
	configs[27]+=   18;
	return 0x800000;
}

u64 FlipFunctionBBWhite348(TConfig* configs) {
	configs[ 2]-= 4374;
	configs[ 3]-= 4374;
	configs[15]-=    2;
	configs[16]-=    2;
	configs[26]-=   75;
	configs[27]-=   18;
	configs[28]-=   54;
	return 0x80800000;
}

u64 FlipFunctionBBBlack348(TConfig* configs) {
	configs[ 2]+= 4374;
	configs[ 3]+= 4374;
	configs[15]+=    2;
	configs[16]+=    2;
	configs[26]+=   75;
	configs[27]+=   18;
	configs[28]+=   54;
	return 0x80800000;
}

u64 FlipFunctionBBWhite349(TConfig* configs) {
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
	return 0x8080800000;
}

u64 FlipFunctionBBBlack349(TConfig* configs) {
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
	return 0x8080800000;
}

u64 FlipFunctionBBWhite350(TConfig* configs) {
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
	return 0x808080800000;
}

u64 FlipFunctionBBBlack350(TConfig* configs) {
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
	return 0x808080800000;
}

u64 FlipFunctionBBWhite351(TConfig* configs) {
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
	return 0x80808080800000;
}

u64 FlipFunctionBBBlack351(TConfig* configs) {
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
	return 0x80808080800000;
}

u64 FlipFunctionBBWhite352(TConfig* configs) {
	configs[ 2]-=    1;
	return 0x10000;
}

u64 FlipFunctionBBBlack352(TConfig* configs) {
	configs[ 2]+=    1;
	return 0x10000;
}

u64 FlipFunctionBBWhite353(TConfig* configs) {
	configs[ 2]-=    7;
	configs[ 9]-=   18;
	configs[20]-=   18;
	configs[33]-=    6;
	return 0x30000;
}

u64 FlipFunctionBBBlack353(TConfig* configs) {
	configs[ 2]+=    7;
	configs[ 9]+=   18;
	configs[20]+=   18;
	configs[33]+=    6;
	return 0x30000;
}

u64 FlipFunctionBBWhite354(TConfig* configs) {
	configs[ 2]-=   25;
	configs[ 9]-=   18;
	configs[10]-=   18;
	configs[20]-=   18;
	configs[21]-=   18;
	configs[32]-=   18;
	configs[33]-=    6;
	return 0x70000;
}

u64 FlipFunctionBBBlack354(TConfig* configs) {
	configs[ 2]+=   25;
	configs[ 9]+=   18;
	configs[10]+=   18;
	configs[20]+=   18;
	configs[21]+=   18;
	configs[32]+=   18;
	configs[33]+=    6;
	return 0x70000;
}

u64 FlipFunctionBBWhite355(TConfig* configs) {
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
	return 0xf0000;
}

u64 FlipFunctionBBBlack355(TConfig* configs) {
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
	return 0xf0000;
}

u64 FlipFunctionBBWhite356(TConfig* configs) {
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
	return 0x1f0000;
}

u64 FlipFunctionBBBlack356(TConfig* configs) {
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
	return 0x1f0000;
}

u64 FlipFunctionBBWhite357(TConfig* configs) {
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
	return 0x3f0000;
}

u64 FlipFunctionBBBlack357(TConfig* configs) {
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
	return 0x3f0000;
}

u64 FlipFunctionBBWhite358(TConfig* configs) {
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
	return 0x7f0000;
}

u64 FlipFunctionBBBlack358(TConfig* configs) {
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
	return 0x7f0000;
}

u64 FlipFunctionBBWhite359(TConfig* configs) {
	configs[ 8]-=    9;
	return 0x0;
}

u64 FlipFunctionBBBlack359(TConfig* configs) {
	configs[ 8]+=    9;
	return 0x0;
}

u64 FlipFunctionBBWhite360(TConfig* configs) {
	configs[ 1]-=    6;
	configs[ 8]-=   15;
	configs[20]-=    6;
	configs[32]-=    6;
	return 0x200;
}

u64 FlipFunctionBBBlack360(TConfig* configs) {
	configs[ 1]+=    6;
	configs[ 8]+=   15;
	configs[20]+=    6;
	configs[32]+=    6;
	return 0x200;
}

u64 FlipFunctionBBWhite361(TConfig* configs) {
	configs[19]-=    9;
	return 0x0;
}

u64 FlipFunctionBBBlack361(TConfig* configs) {
	configs[19]+=    9;
	return 0x0;
}

u64 FlipFunctionBBWhite362(TConfig* configs) {
	configs[ 3]-=    2;
	configs[ 9]-=   54;
	configs[19]-=   63;
	configs[35]-=    2;
	return 0x1000000;
}

u64 FlipFunctionBBBlack362(TConfig* configs) {
	configs[ 3]+=    2;
	configs[ 9]+=   54;
	configs[19]+=   63;
	configs[35]+=    2;
	return 0x1000000;
}

u64 FlipFunctionBBWhite363(TConfig* configs) {
	configs[ 3]-=    2;
	configs[ 4]-=    2;
	configs[ 9]-=   54;
	configs[10]-=  162;
	configs[19]-=  225;
	configs[35]-=    2;
	configs[36]-=    2;
	return 0x101000000;
}

u64 FlipFunctionBBBlack363(TConfig* configs) {
	configs[ 3]+=    2;
	configs[ 4]+=    2;
	configs[ 9]+=   54;
	configs[10]+=  162;
	configs[19]+=  225;
	configs[35]+=    2;
	configs[36]+=    2;
	return 0x101000000;
}

u64 FlipFunctionBBWhite364(TConfig* configs) {
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
	return 0x10101000000;
}

u64 FlipFunctionBBBlack364(TConfig* configs) {
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
	return 0x10101000000;
}

u64 FlipFunctionBBWhite365(TConfig* configs) {
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
	return 0x1010101000000;
}

u64 FlipFunctionBBBlack365(TConfig* configs) {
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
	return 0x1010101000000;
}

u64 FlipFunctionBBWhite366(TConfig* configs) {
	configs[ 1]-=    2;
	configs[19]-=   15;
	configs[33]-=    2;
	return 0x100;
}

u64 FlipFunctionBBBlack366(TConfig* configs) {
	configs[ 1]+=    2;
	configs[19]+=   15;
	configs[33]+=    2;
	return 0x100;
}

u64 FlipFunctionBBWhite367(TConfig* configs) {
	configs[ 1]-=    2;
	configs[ 3]-=    2;
	configs[ 9]-=   54;
	configs[19]-=   69;
	configs[33]-=    2;
	configs[35]-=    2;
	return 0x1000100;
}

u64 FlipFunctionBBBlack367(TConfig* configs) {
	configs[ 1]+=    2;
	configs[ 3]+=    2;
	configs[ 9]+=   54;
	configs[19]+=   69;
	configs[33]+=    2;
	configs[35]+=    2;
	return 0x1000100;
}

u64 FlipFunctionBBWhite368(TConfig* configs) {
	configs[ 1]-=    2;
	configs[ 3]-=    2;
	configs[ 4]-=    2;
	configs[ 9]-=   54;
	configs[10]-=  162;
	configs[19]-=  231;
	configs[33]-=    2;
	configs[35]-=    2;
	configs[36]-=    2;
	return 0x101000100;
}

u64 FlipFunctionBBBlack368(TConfig* configs) {
	configs[ 1]+=    2;
	configs[ 3]+=    2;
	configs[ 4]+=    2;
	configs[ 9]+=   54;
	configs[10]+=  162;
	configs[19]+=  231;
	configs[33]+=    2;
	configs[35]+=    2;
	configs[36]+=    2;
	return 0x101000100;
}

u64 FlipFunctionBBWhite369(TConfig* configs) {
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
	return 0x10101000100;
}

u64 FlipFunctionBBBlack369(TConfig* configs) {
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
	return 0x10101000100;
}

u64 FlipFunctionBBWhite370(TConfig* configs) {
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
	return 0x1010101000100;
}

u64 FlipFunctionBBBlack370(TConfig* configs) {
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
	return 0x1010101000100;
}

u64 FlipFunctionBBWhite371(TConfig* configs) {
	configs[34]-=    1;
	return 0x0;
}

u64 FlipFunctionBBBlack371(TConfig* configs) {
	configs[34]+=    1;
	return 0x0;
}

u64 FlipFunctionBBWhite372(TConfig* configs) {
	configs[ 3]-=    6;
	configs[10]-=   54;
	configs[20]-=   54;
	configs[34]-=    7;
	return 0x2000000;
}

u64 FlipFunctionBBBlack372(TConfig* configs) {
	configs[ 3]+=    6;
	configs[10]+=   54;
	configs[20]+=   54;
	configs[34]+=    7;
	return 0x2000000;
}

u64 FlipFunctionBBWhite373(TConfig* configs) {
	configs[ 3]-=    6;
	configs[ 4]-=   18;
	configs[10]-=   54;
	configs[12]-=  162;
	configs[20]-=   54;
	configs[21]-=  162;
	configs[34]-=   25;
	return 0x402000000;
}

u64 FlipFunctionBBBlack373(TConfig* configs) {
	configs[ 3]+=    6;
	configs[ 4]+=   18;
	configs[10]+=   54;
	configs[12]+=  162;
	configs[20]+=   54;
	configs[21]+=  162;
	configs[34]+=   25;
	return 0x402000000;
}

u64 FlipFunctionBBWhite374(TConfig* configs) {
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
	return 0x80402000000;
}

u64 FlipFunctionBBBlack374(TConfig* configs) {
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
	return 0x80402000000;
}

u64 FlipFunctionBBWhite375(TConfig* configs) {
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
	return 0x10080402000000;
}

u64 FlipFunctionBBBlack375(TConfig* configs) {
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
	return 0x10080402000000;
}

u64 FlipFunctionBBWhite376(TConfig* configs) {
	configs[ 2]-=    3;
	return 0x20000;
}

u64 FlipFunctionBBBlack376(TConfig* configs) {
	configs[ 2]+=    3;
	return 0x20000;
}

u64 FlipFunctionBBWhite377(TConfig* configs) {
	configs[ 2]-=   21;
	configs[10]-=   18;
	configs[21]-=   18;
	configs[32]-=   18;
	return 0x60000;
}

u64 FlipFunctionBBBlack377(TConfig* configs) {
	configs[ 2]+=   21;
	configs[10]+=   18;
	configs[21]+=   18;
	configs[32]+=   18;
	return 0x60000;
}

u64 FlipFunctionBBWhite378(TConfig* configs) {
	configs[ 2]-=   75;
	configs[10]-=   18;
	configs[11]-=   18;
	configs[21]-=   18;
	configs[22]-=   18;
	configs[31]-=   18;
	configs[32]-=   18;
	return 0xe0000;
}

u64 FlipFunctionBBBlack378(TConfig* configs) {
	configs[ 2]+=   75;
	configs[10]+=   18;
	configs[11]+=   18;
	configs[21]+=   18;
	configs[22]+=   18;
	configs[31]+=   18;
	configs[32]+=   18;
	return 0xe0000;
}

u64 FlipFunctionBBWhite379(TConfig* configs) {
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
	return 0x1e0000;
}

u64 FlipFunctionBBBlack379(TConfig* configs) {
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
	return 0x1e0000;
}

u64 FlipFunctionBBWhite380(TConfig* configs) {
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
	return 0x3e0000;
}

u64 FlipFunctionBBBlack380(TConfig* configs) {
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
	return 0x3e0000;
}

u64 FlipFunctionBBWhite381(TConfig* configs) {
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
	return 0x7e0000;
}

u64 FlipFunctionBBBlack381(TConfig* configs) {
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
	return 0x7e0000;
}

u64 FlipFunctionBBWhite382(TConfig* configs) {
	configs[ 9]-=    9;
	return 0x0;
}

u64 FlipFunctionBBBlack382(TConfig* configs) {
	configs[ 9]+=    9;
	return 0x0;
}

u64 FlipFunctionBBWhite383(TConfig* configs) {
	configs[ 1]-=   18;
	configs[ 9]-=   15;
	configs[21]-=    6;
	configs[31]-=    6;
	return 0x400;
}

u64 FlipFunctionBBBlack383(TConfig* configs) {
	configs[ 1]+=   18;
	configs[ 9]+=   15;
	configs[21]+=    6;
	configs[31]+=    6;
	return 0x400;
}

u64 FlipFunctionBBWhite384(TConfig* configs) {
	configs[20]-=    9;
	return 0x0;
}

u64 FlipFunctionBBBlack384(TConfig* configs) {
	configs[20]+=    9;
	return 0x0;
}

u64 FlipFunctionBBWhite385(TConfig* configs) {
	configs[ 3]-=    6;
	configs[10]-=   54;
	configs[20]-=   63;
	configs[34]-=    6;
	return 0x2000000;
}

u64 FlipFunctionBBBlack385(TConfig* configs) {
	configs[ 3]+=    6;
	configs[10]+=   54;
	configs[20]+=   63;
	configs[34]+=    6;
	return 0x2000000;
}

u64 FlipFunctionBBWhite386(TConfig* configs) {
	configs[ 3]-=    6;
	configs[ 4]-=    6;
	configs[10]-=   54;
	configs[11]-=  162;
	configs[20]-=  225;
	configs[34]-=    6;
	configs[35]-=    6;
	return 0x202000000;
}

u64 FlipFunctionBBBlack386(TConfig* configs) {
	configs[ 3]+=    6;
	configs[ 4]+=    6;
	configs[10]+=   54;
	configs[11]+=  162;
	configs[20]+=  225;
	configs[34]+=    6;
	configs[35]+=    6;
	return 0x202000000;
}

u64 FlipFunctionBBWhite387(TConfig* configs) {
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
	return 0x20202000000;
}

u64 FlipFunctionBBBlack387(TConfig* configs) {
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
	return 0x20202000000;
}

u64 FlipFunctionBBWhite388(TConfig* configs) {
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
	return 0x2020202000000;
}

u64 FlipFunctionBBBlack388(TConfig* configs) {
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
	return 0x2020202000000;
}

u64 FlipFunctionBBWhite389(TConfig* configs) {
	configs[ 1]-=    6;
	configs[ 8]-=    6;
	configs[20]-=   15;
	configs[32]-=    6;
	return 0x200;
}

u64 FlipFunctionBBBlack389(TConfig* configs) {
	configs[ 1]+=    6;
	configs[ 8]+=    6;
	configs[20]+=   15;
	configs[32]+=    6;
	return 0x200;
}

u64 FlipFunctionBBWhite390(TConfig* configs) {
	configs[ 1]-=    6;
	configs[ 3]-=    6;
	configs[ 8]-=    6;
	configs[10]-=   54;
	configs[20]-=   69;
	configs[32]-=    6;
	configs[34]-=    6;
	return 0x2000200;
}

u64 FlipFunctionBBBlack390(TConfig* configs) {
	configs[ 1]+=    6;
	configs[ 3]+=    6;
	configs[ 8]+=    6;
	configs[10]+=   54;
	configs[20]+=   69;
	configs[32]+=    6;
	configs[34]+=    6;
	return 0x2000200;
}

u64 FlipFunctionBBWhite391(TConfig* configs) {
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
	return 0x202000200;
}

u64 FlipFunctionBBBlack391(TConfig* configs) {
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
	return 0x202000200;
}

u64 FlipFunctionBBWhite392(TConfig* configs) {
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
	return 0x20202000200;
}

u64 FlipFunctionBBBlack392(TConfig* configs) {
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
	return 0x20202000200;
}

u64 FlipFunctionBBWhite393(TConfig* configs) {
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
	return 0x2020202000200;
}

u64 FlipFunctionBBBlack393(TConfig* configs) {
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
	return 0x2020202000200;
}

u64 FlipFunctionBBWhite394(TConfig* configs) {
	configs[33]-=    3;
	return 0x0;
}

u64 FlipFunctionBBBlack394(TConfig* configs) {
	configs[33]+=    3;
	return 0x0;
}

u64 FlipFunctionBBWhite395(TConfig* configs) {
	configs[ 3]-=   18;
	configs[11]-=   54;
	configs[21]-=   54;
	configs[33]-=   21;
	return 0x4000000;
}

u64 FlipFunctionBBBlack395(TConfig* configs) {
	configs[ 3]+=   18;
	configs[11]+=   54;
	configs[21]+=   54;
	configs[33]+=   21;
	return 0x4000000;
}

u64 FlipFunctionBBWhite396(TConfig* configs) {
	configs[ 3]-=   18;
	configs[ 4]-=   54;
	configs[11]-=   54;
	configs[13]-=  162;
	configs[21]-=   54;
	configs[22]-=  162;
	configs[33]-=   75;
	return 0x804000000;
}

u64 FlipFunctionBBBlack396(TConfig* configs) {
	configs[ 3]+=   18;
	configs[ 4]+=   54;
	configs[11]+=   54;
	configs[13]+=  162;
	configs[21]+=   54;
	configs[22]+=  162;
	configs[33]+=   75;
	return 0x804000000;
}

u64 FlipFunctionBBWhite397(TConfig* configs) {
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
	return 0x100804000000;
}

u64 FlipFunctionBBBlack397(TConfig* configs) {
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
	return 0x100804000000;
}

u64 FlipFunctionBBWhite398(TConfig* configs) {
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
	return 0x20100804000000;
}

u64 FlipFunctionBBBlack398(TConfig* configs) {
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
	return 0x20100804000000;
}

u64 FlipFunctionBBWhite399(TConfig* configs) {
	configs[ 2]-=    9;
	return 0x40000;
}

u64 FlipFunctionBBBlack399(TConfig* configs) {
	configs[ 2]+=    9;
	return 0x40000;
}

u64 FlipFunctionBBWhite400(TConfig* configs) {
	configs[ 2]-=   63;
	configs[11]-=   18;
	configs[22]-=   18;
	configs[31]-=   18;
	return 0xc0000;
}

u64 FlipFunctionBBBlack400(TConfig* configs) {
	configs[ 2]+=   63;
	configs[11]+=   18;
	configs[22]+=   18;
	configs[31]+=   18;
	return 0xc0000;
}

u64 FlipFunctionBBWhite401(TConfig* configs) {
	configs[ 2]-=  225;
	configs[11]-=   18;
	configs[12]-=   18;
	configs[22]-=   18;
	configs[23]-=   18;
	configs[30]-=   18;
	configs[31]-=   18;
	return 0x1c0000;
}

u64 FlipFunctionBBBlack401(TConfig* configs) {
	configs[ 2]+=  225;
	configs[11]+=   18;
	configs[12]+=   18;
	configs[22]+=   18;
	configs[23]+=   18;
	configs[30]+=   18;
	configs[31]+=   18;
	return 0x1c0000;
}

u64 FlipFunctionBBWhite402(TConfig* configs) {
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
	return 0x3c0000;
}

u64 FlipFunctionBBBlack402(TConfig* configs) {
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
	return 0x3c0000;
}

u64 FlipFunctionBBWhite403(TConfig* configs) {
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
	return 0x7c0000;
}

u64 FlipFunctionBBBlack403(TConfig* configs) {
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
	return 0x7c0000;
}

u64 FlipFunctionBBWhite404(TConfig* configs) {
	configs[ 2]-=   15;
	configs[ 9]-=   18;
	configs[20]-=   18;
	configs[33]-=    6;
	return 0x60000;
}

u64 FlipFunctionBBBlack404(TConfig* configs) {
	configs[ 2]+=   15;
	configs[ 9]+=   18;
	configs[20]+=   18;
	configs[33]+=    6;
	return 0x60000;
}

u64 FlipFunctionBBWhite405(TConfig* configs) {
	configs[ 2]-=   69;
	configs[ 9]-=   18;
	configs[11]-=   18;
	configs[20]-=   18;
	configs[22]-=   18;
	configs[31]-=   18;
	configs[33]-=    6;
	return 0xe0000;
}

u64 FlipFunctionBBBlack405(TConfig* configs) {
	configs[ 2]+=   69;
	configs[ 9]+=   18;
	configs[11]+=   18;
	configs[20]+=   18;
	configs[22]+=   18;
	configs[31]+=   18;
	configs[33]+=    6;
	return 0xe0000;
}

u64 FlipFunctionBBWhite406(TConfig* configs) {
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
	return 0x1e0000;
}

u64 FlipFunctionBBBlack406(TConfig* configs) {
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
	return 0x1e0000;
}

u64 FlipFunctionBBWhite407(TConfig* configs) {
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
	return 0x3e0000;
}

u64 FlipFunctionBBBlack407(TConfig* configs) {
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
	return 0x3e0000;
}

u64 FlipFunctionBBWhite408(TConfig* configs) {
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
	return 0x7e0000;
}

u64 FlipFunctionBBBlack408(TConfig* configs) {
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
	return 0x7e0000;
}

u64 FlipFunctionBBWhite409(TConfig* configs) {
	configs[10]-=    9;
	return 0x0;
}

u64 FlipFunctionBBBlack409(TConfig* configs) {
	configs[10]+=    9;
	return 0x0;
}

u64 FlipFunctionBBWhite410(TConfig* configs) {
	configs[ 3]-=    6;
	configs[10]-=   63;
	configs[20]-=   54;
	configs[34]-=    6;
	return 0x2000000;
}

u64 FlipFunctionBBBlack410(TConfig* configs) {
	configs[ 3]+=    6;
	configs[10]+=   63;
	configs[20]+=   54;
	configs[34]+=    6;
	return 0x2000000;
}

u64 FlipFunctionBBWhite411(TConfig* configs) {
	configs[ 1]-=   54;
	configs[10]-=   15;
	configs[22]-=    6;
	configs[30]-=    6;
	return 0x800;
}

u64 FlipFunctionBBBlack411(TConfig* configs) {
	configs[ 1]+=   54;
	configs[10]+=   15;
	configs[22]+=    6;
	configs[30]+=    6;
	return 0x800;
}

u64 FlipFunctionBBWhite412(TConfig* configs) {
	configs[ 1]-=   54;
	configs[ 3]-=    6;
	configs[10]-=   69;
	configs[20]-=   54;
	configs[22]-=    6;
	configs[30]-=    6;
	configs[34]-=    6;
	return 0x2000800;
}

u64 FlipFunctionBBBlack412(TConfig* configs) {
	configs[ 1]+=   54;
	configs[ 3]+=    6;
	configs[10]+=   69;
	configs[20]+=   54;
	configs[22]+=    6;
	configs[30]+=    6;
	configs[34]+=    6;
	return 0x2000800;
}

u64 FlipFunctionBBWhite413(TConfig* configs) {
	configs[21]-=    9;
	return 0x0;
}

u64 FlipFunctionBBBlack413(TConfig* configs) {
	configs[21]+=    9;
	return 0x0;
}

u64 FlipFunctionBBWhite414(TConfig* configs) {
	configs[ 3]-=   18;
	configs[11]-=   54;
	configs[21]-=   63;
	configs[33]-=   18;
	return 0x4000000;
}

u64 FlipFunctionBBBlack414(TConfig* configs) {
	configs[ 3]+=   18;
	configs[11]+=   54;
	configs[21]+=   63;
	configs[33]+=   18;
	return 0x4000000;
}

u64 FlipFunctionBBWhite415(TConfig* configs) {
	configs[ 3]-=   18;
	configs[ 4]-=   18;
	configs[11]-=   54;
	configs[12]-=  162;
	configs[21]-=  225;
	configs[33]-=   18;
	configs[34]-=   18;
	return 0x404000000;
}

u64 FlipFunctionBBBlack415(TConfig* configs) {
	configs[ 3]+=   18;
	configs[ 4]+=   18;
	configs[11]+=   54;
	configs[12]+=  162;
	configs[21]+=  225;
	configs[33]+=   18;
	configs[34]+=   18;
	return 0x404000000;
}

u64 FlipFunctionBBWhite416(TConfig* configs) {
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
	return 0x40404000000;
}

u64 FlipFunctionBBBlack416(TConfig* configs) {
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
	return 0x40404000000;
}

u64 FlipFunctionBBWhite417(TConfig* configs) {
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
	return 0x4040404000000;
}

u64 FlipFunctionBBBlack417(TConfig* configs) {
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
	return 0x4040404000000;
}

u64 FlipFunctionBBWhite418(TConfig* configs) {
	configs[ 1]-=   18;
	configs[ 9]-=    6;
	configs[21]-=   15;
	configs[31]-=    6;
	return 0x400;
}

u64 FlipFunctionBBBlack418(TConfig* configs) {
	configs[ 1]+=   18;
	configs[ 9]+=    6;
	configs[21]+=   15;
	configs[31]+=    6;
	return 0x400;
}

u64 FlipFunctionBBWhite419(TConfig* configs) {
	configs[ 1]-=   18;
	configs[ 3]-=   18;
	configs[ 9]-=    6;
	configs[11]-=   54;
	configs[21]-=   69;
	configs[31]-=    6;
	configs[33]-=   18;
	return 0x4000400;
}

u64 FlipFunctionBBBlack419(TConfig* configs) {
	configs[ 1]+=   18;
	configs[ 3]+=   18;
	configs[ 9]+=    6;
	configs[11]+=   54;
	configs[21]+=   69;
	configs[31]+=    6;
	configs[33]+=   18;
	return 0x4000400;
}

u64 FlipFunctionBBWhite420(TConfig* configs) {
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
	return 0x404000400;
}

u64 FlipFunctionBBBlack420(TConfig* configs) {
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
	return 0x404000400;
}

u64 FlipFunctionBBWhite421(TConfig* configs) {
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
	return 0x40404000400;
}

u64 FlipFunctionBBBlack421(TConfig* configs) {
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
	return 0x40404000400;
}

u64 FlipFunctionBBWhite422(TConfig* configs) {
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
	return 0x4040404000400;
}

u64 FlipFunctionBBBlack422(TConfig* configs) {
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
	return 0x4040404000400;
}

u64 FlipFunctionBBWhite423(TConfig* configs) {
	configs[32]-=    9;
	return 0x0;
}

u64 FlipFunctionBBBlack423(TConfig* configs) {
	configs[32]+=    9;
	return 0x0;
}

u64 FlipFunctionBBWhite424(TConfig* configs) {
	configs[ 3]-=   54;
	configs[12]-=   54;
	configs[22]-=   54;
	configs[32]-=   63;
	return 0x8000000;
}

u64 FlipFunctionBBBlack424(TConfig* configs) {
	configs[ 3]+=   54;
	configs[12]+=   54;
	configs[22]+=   54;
	configs[32]+=   63;
	return 0x8000000;
}

u64 FlipFunctionBBWhite425(TConfig* configs) {
	configs[ 3]-=   54;
	configs[ 4]-=  162;
	configs[12]-=   54;
	configs[14]-=   54;
	configs[22]-=   54;
	configs[23]-=  162;
	configs[32]-=  225;
	return 0x1008000000;
}

u64 FlipFunctionBBBlack425(TConfig* configs) {
	configs[ 3]+=   54;
	configs[ 4]+=  162;
	configs[12]+=   54;
	configs[14]+=   54;
	configs[22]+=   54;
	configs[23]+=  162;
	configs[32]+=  225;
	return 0x1008000000;
}

u64 FlipFunctionBBWhite426(TConfig* configs) {
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
	return 0x201008000000;
}

u64 FlipFunctionBBBlack426(TConfig* configs) {
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
	return 0x201008000000;
}

u64 FlipFunctionBBWhite427(TConfig* configs) {
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
	return 0x40201008000000;
}

u64 FlipFunctionBBBlack427(TConfig* configs) {
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
	return 0x40201008000000;
}

u64 FlipFunctionBBWhite428(TConfig* configs) {
	configs[ 1]-=    6;
	configs[ 8]-=    6;
	configs[20]-=    6;
	configs[32]-=   15;
	return 0x200;
}

u64 FlipFunctionBBBlack428(TConfig* configs) {
	configs[ 1]+=    6;
	configs[ 8]+=    6;
	configs[20]+=    6;
	configs[32]+=   15;
	return 0x200;
}

u64 FlipFunctionBBWhite429(TConfig* configs) {
	configs[ 1]-=    6;
	configs[ 3]-=   54;
	configs[ 8]-=    6;
	configs[12]-=   54;
	configs[20]-=    6;
	configs[22]-=   54;
	configs[32]-=   69;
	return 0x8000200;
}

u64 FlipFunctionBBBlack429(TConfig* configs) {
	configs[ 1]+=    6;
	configs[ 3]+=   54;
	configs[ 8]+=    6;
	configs[12]+=   54;
	configs[20]+=    6;
	configs[22]+=   54;
	configs[32]+=   69;
	return 0x8000200;
}

u64 FlipFunctionBBWhite430(TConfig* configs) {
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
	return 0x1008000200;
}

u64 FlipFunctionBBBlack430(TConfig* configs) {
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
	return 0x1008000200;
}

u64 FlipFunctionBBWhite431(TConfig* configs) {
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
	return 0x201008000200;
}

u64 FlipFunctionBBBlack431(TConfig* configs) {
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
	return 0x201008000200;
}

u64 FlipFunctionBBWhite432(TConfig* configs) {
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
	return 0x40201008000200;
}

u64 FlipFunctionBBBlack432(TConfig* configs) {
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
	return 0x40201008000200;
}

u64 FlipFunctionBBWhite433(TConfig* configs) {
	configs[ 2]-=   27;
	return 0x80000;
}

u64 FlipFunctionBBBlack433(TConfig* configs) {
	configs[ 2]+=   27;
	return 0x80000;
}

u64 FlipFunctionBBWhite434(TConfig* configs) {
	configs[ 2]-=  189;
	configs[12]-=   18;
	configs[23]-=   18;
	configs[30]-=   18;
	return 0x180000;
}

u64 FlipFunctionBBBlack434(TConfig* configs) {
	configs[ 2]+=  189;
	configs[12]+=   18;
	configs[23]+=   18;
	configs[30]+=   18;
	return 0x180000;
}

u64 FlipFunctionBBWhite435(TConfig* configs) {
	configs[ 2]-=  675;
	configs[12]-=   18;
	configs[13]-=   18;
	configs[23]-=   18;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[30]-=   18;
	return 0x380000;
}

u64 FlipFunctionBBBlack435(TConfig* configs) {
	configs[ 2]+=  675;
	configs[12]+=   18;
	configs[13]+=   18;
	configs[23]+=   18;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[30]+=   18;
	return 0x380000;
}

u64 FlipFunctionBBWhite436(TConfig* configs) {
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
	return 0x780000;
}

u64 FlipFunctionBBBlack436(TConfig* configs) {
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
	return 0x780000;
}

u64 FlipFunctionBBWhite437(TConfig* configs) {
	configs[ 2]-=   45;
	configs[10]-=   18;
	configs[21]-=   18;
	configs[32]-=   18;
	return 0xc0000;
}

u64 FlipFunctionBBBlack437(TConfig* configs) {
	configs[ 2]+=   45;
	configs[10]+=   18;
	configs[21]+=   18;
	configs[32]+=   18;
	return 0xc0000;
}

u64 FlipFunctionBBWhite438(TConfig* configs) {
	configs[ 2]-=  207;
	configs[10]-=   18;
	configs[12]-=   18;
	configs[21]-=   18;
	configs[23]-=   18;
	configs[30]-=   18;
	configs[32]-=   18;
	return 0x1c0000;
}

u64 FlipFunctionBBBlack438(TConfig* configs) {
	configs[ 2]+=  207;
	configs[10]+=   18;
	configs[12]+=   18;
	configs[21]+=   18;
	configs[23]+=   18;
	configs[30]+=   18;
	configs[32]+=   18;
	return 0x1c0000;
}

u64 FlipFunctionBBWhite439(TConfig* configs) {
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
	return 0x3c0000;
}

u64 FlipFunctionBBBlack439(TConfig* configs) {
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
	return 0x3c0000;
}

u64 FlipFunctionBBWhite440(TConfig* configs) {
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
	return 0x7c0000;
}

u64 FlipFunctionBBBlack440(TConfig* configs) {
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
	return 0x7c0000;
}

u64 FlipFunctionBBWhite441(TConfig* configs) {
	configs[ 2]-=   51;
	configs[ 9]-=   18;
	configs[10]-=   18;
	configs[20]-=   18;
	configs[21]-=   18;
	configs[32]-=   18;
	configs[33]-=    6;
	return 0xe0000;
}

u64 FlipFunctionBBBlack441(TConfig* configs) {
	configs[ 2]+=   51;
	configs[ 9]+=   18;
	configs[10]+=   18;
	configs[20]+=   18;
	configs[21]+=   18;
	configs[32]+=   18;
	configs[33]+=    6;
	return 0xe0000;
}

u64 FlipFunctionBBWhite442(TConfig* configs) {
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
	return 0x1e0000;
}

u64 FlipFunctionBBBlack442(TConfig* configs) {
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
	return 0x1e0000;
}

u64 FlipFunctionBBWhite443(TConfig* configs) {
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
	return 0x3e0000;
}

u64 FlipFunctionBBBlack443(TConfig* configs) {
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
	return 0x3e0000;
}

u64 FlipFunctionBBWhite444(TConfig* configs) {
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
	return 0x7e0000;
}

u64 FlipFunctionBBBlack444(TConfig* configs) {
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
	return 0x7e0000;
}

u64 FlipFunctionBBWhite445(TConfig* configs) {
	configs[11]-=    9;
	return 0x0;
}

u64 FlipFunctionBBBlack445(TConfig* configs) {
	configs[11]+=    9;
	return 0x0;
}

u64 FlipFunctionBBWhite446(TConfig* configs) {
	configs[ 3]-=   18;
	configs[11]-=   63;
	configs[21]-=   54;
	configs[33]-=   18;
	return 0x4000000;
}

u64 FlipFunctionBBBlack446(TConfig* configs) {
	configs[ 3]+=   18;
	configs[11]+=   63;
	configs[21]+=   54;
	configs[33]+=   18;
	return 0x4000000;
}

u64 FlipFunctionBBWhite447(TConfig* configs) {
	configs[ 3]-=   18;
	configs[ 4]-=    6;
	configs[11]-=  225;
	configs[20]-=  162;
	configs[21]-=   54;
	configs[33]-=   18;
	configs[35]-=    6;
	return 0x204000000;
}

u64 FlipFunctionBBBlack447(TConfig* configs) {
	configs[ 3]+=   18;
	configs[ 4]+=    6;
	configs[11]+=  225;
	configs[20]+=  162;
	configs[21]+=   54;
	configs[33]+=   18;
	configs[35]+=    6;
	return 0x204000000;
}

u64 FlipFunctionBBWhite448(TConfig* configs) {
	configs[ 1]-=  162;
	configs[11]-=   15;
	configs[23]-=    6;
	configs[29]-=    6;
	return 0x1000;
}

u64 FlipFunctionBBBlack448(TConfig* configs) {
	configs[ 1]+=  162;
	configs[11]+=   15;
	configs[23]+=    6;
	configs[29]+=    6;
	return 0x1000;
}

u64 FlipFunctionBBWhite449(TConfig* configs) {
	configs[ 1]-=  162;
	configs[ 3]-=   18;
	configs[11]-=   69;
	configs[21]-=   54;
	configs[23]-=    6;
	configs[29]-=    6;
	configs[33]-=   18;
	return 0x4001000;
}

u64 FlipFunctionBBBlack449(TConfig* configs) {
	configs[ 1]+=  162;
	configs[ 3]+=   18;
	configs[11]+=   69;
	configs[21]+=   54;
	configs[23]+=    6;
	configs[29]+=    6;
	configs[33]+=   18;
	return 0x4001000;
}

u64 FlipFunctionBBWhite450(TConfig* configs) {
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
	return 0x204001000;
}

u64 FlipFunctionBBBlack450(TConfig* configs) {
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
	return 0x204001000;
}

u64 FlipFunctionBBWhite451(TConfig* configs) {
	configs[22]-=    9;
	return 0x0;
}

u64 FlipFunctionBBBlack451(TConfig* configs) {
	configs[22]+=    9;
	return 0x0;
}

u64 FlipFunctionBBWhite452(TConfig* configs) {
	configs[ 3]-=   54;
	configs[12]-=   54;
	configs[22]-=   63;
	configs[32]-=   54;
	return 0x8000000;
}

u64 FlipFunctionBBBlack452(TConfig* configs) {
	configs[ 3]+=   54;
	configs[12]+=   54;
	configs[22]+=   63;
	configs[32]+=   54;
	return 0x8000000;
}

u64 FlipFunctionBBWhite453(TConfig* configs) {
	configs[ 3]-=   54;
	configs[ 4]-=   54;
	configs[12]-=   54;
	configs[13]-=  162;
	configs[22]-=  225;
	configs[32]-=   54;
	configs[33]-=   54;
	return 0x808000000;
}

u64 FlipFunctionBBBlack453(TConfig* configs) {
	configs[ 3]+=   54;
	configs[ 4]+=   54;
	configs[12]+=   54;
	configs[13]+=  162;
	configs[22]+=  225;
	configs[32]+=   54;
	configs[33]+=   54;
	return 0x808000000;
}

u64 FlipFunctionBBWhite454(TConfig* configs) {
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
	return 0x80808000000;
}

u64 FlipFunctionBBBlack454(TConfig* configs) {
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
	return 0x80808000000;
}

u64 FlipFunctionBBWhite455(TConfig* configs) {
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
	return 0x8080808000000;
}

u64 FlipFunctionBBBlack455(TConfig* configs) {
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
	return 0x8080808000000;
}

u64 FlipFunctionBBWhite456(TConfig* configs) {
	configs[ 1]-=   54;
	configs[10]-=    6;
	configs[22]-=   15;
	configs[30]-=    6;
	return 0x800;
}

u64 FlipFunctionBBBlack456(TConfig* configs) {
	configs[ 1]+=   54;
	configs[10]+=    6;
	configs[22]+=   15;
	configs[30]+=    6;
	return 0x800;
}

u64 FlipFunctionBBWhite457(TConfig* configs) {
	configs[ 1]-=   54;
	configs[ 3]-=   54;
	configs[10]-=    6;
	configs[12]-=   54;
	configs[22]-=   69;
	configs[30]-=    6;
	configs[32]-=   54;
	return 0x8000800;
}

u64 FlipFunctionBBBlack457(TConfig* configs) {
	configs[ 1]+=   54;
	configs[ 3]+=   54;
	configs[10]+=    6;
	configs[12]+=   54;
	configs[22]+=   69;
	configs[30]+=    6;
	configs[32]+=   54;
	return 0x8000800;
}

u64 FlipFunctionBBWhite458(TConfig* configs) {
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
	return 0x808000800;
}

u64 FlipFunctionBBBlack458(TConfig* configs) {
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
	return 0x808000800;
}

u64 FlipFunctionBBWhite459(TConfig* configs) {
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
	return 0x80808000800;
}

u64 FlipFunctionBBBlack459(TConfig* configs) {
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
	return 0x80808000800;
}

u64 FlipFunctionBBWhite460(TConfig* configs) {
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
	return 0x8080808000800;
}

u64 FlipFunctionBBBlack460(TConfig* configs) {
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
	return 0x8080808000800;
}

u64 FlipFunctionBBWhite461(TConfig* configs) {
	configs[31]-=    9;
	return 0x0;
}

u64 FlipFunctionBBBlack461(TConfig* configs) {
	configs[31]+=    9;
	return 0x0;
}

u64 FlipFunctionBBWhite462(TConfig* configs) {
	configs[ 3]-=  162;
	configs[13]-=   54;
	configs[23]-=   54;
	configs[31]-=   63;
	return 0x10000000;
}

u64 FlipFunctionBBBlack462(TConfig* configs) {
	configs[ 3]+=  162;
	configs[13]+=   54;
	configs[23]+=   54;
	configs[31]+=   63;
	return 0x10000000;
}

u64 FlipFunctionBBWhite463(TConfig* configs) {
	configs[ 3]-=  162;
	configs[ 4]-=  486;
	configs[13]-=   54;
	configs[15]-=   18;
	configs[23]-=   54;
	configs[24]-=  162;
	configs[31]-=  225;
	return 0x2010000000;
}

u64 FlipFunctionBBBlack463(TConfig* configs) {
	configs[ 3]+=  162;
	configs[ 4]+=  486;
	configs[13]+=   54;
	configs[15]+=   18;
	configs[23]+=   54;
	configs[24]+=  162;
	configs[31]+=  225;
	return 0x2010000000;
}

u64 FlipFunctionBBWhite464(TConfig* configs) {
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
	return 0x402010000000;
}

u64 FlipFunctionBBBlack464(TConfig* configs) {
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
	return 0x402010000000;
}

u64 FlipFunctionBBWhite465(TConfig* configs) {
	configs[ 1]-=   18;
	configs[ 9]-=    6;
	configs[21]-=    6;
	configs[31]-=   15;
	return 0x400;
}

u64 FlipFunctionBBBlack465(TConfig* configs) {
	configs[ 1]+=   18;
	configs[ 9]+=    6;
	configs[21]+=    6;
	configs[31]+=   15;
	return 0x400;
}

u64 FlipFunctionBBWhite466(TConfig* configs) {
	configs[ 1]-=   18;
	configs[ 3]-=  162;
	configs[ 9]-=    6;
	configs[13]-=   54;
	configs[21]-=    6;
	configs[23]-=   54;
	configs[31]-=   69;
	return 0x10000400;
}

u64 FlipFunctionBBBlack466(TConfig* configs) {
	configs[ 1]+=   18;
	configs[ 3]+=  162;
	configs[ 9]+=    6;
	configs[13]+=   54;
	configs[21]+=    6;
	configs[23]+=   54;
	configs[31]+=   69;
	return 0x10000400;
}

u64 FlipFunctionBBWhite467(TConfig* configs) {
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
	return 0x2010000400;
}

u64 FlipFunctionBBBlack467(TConfig* configs) {
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
	return 0x2010000400;
}

u64 FlipFunctionBBWhite468(TConfig* configs) {
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
	return 0x402010000400;
}

u64 FlipFunctionBBBlack468(TConfig* configs) {
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
	return 0x402010000400;
}

u64 FlipFunctionBBWhite469(TConfig* configs) {
	configs[ 2]-=   81;
	return 0x100000;
}

u64 FlipFunctionBBBlack469(TConfig* configs) {
	configs[ 2]+=   81;
	return 0x100000;
}

u64 FlipFunctionBBWhite470(TConfig* configs) {
	configs[ 2]-=  567;
	configs[13]-=   18;
	configs[24]-=   18;
	configs[29]-=   18;
	return 0x300000;
}

u64 FlipFunctionBBBlack470(TConfig* configs) {
	configs[ 2]+=  567;
	configs[13]+=   18;
	configs[24]+=   18;
	configs[29]+=   18;
	return 0x300000;
}

u64 FlipFunctionBBWhite471(TConfig* configs) {
	configs[ 2]-= 2025;
	configs[13]-=   18;
	configs[14]-=    6;
	configs[24]-=   18;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[29]-=   18;
	return 0x700000;
}

u64 FlipFunctionBBBlack471(TConfig* configs) {
	configs[ 2]+= 2025;
	configs[13]+=   18;
	configs[14]+=    6;
	configs[24]+=   18;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[29]+=   18;
	return 0x700000;
}

u64 FlipFunctionBBWhite472(TConfig* configs) {
	configs[ 2]-=  135;
	configs[11]-=   18;
	configs[22]-=   18;
	configs[31]-=   18;
	return 0x180000;
}

u64 FlipFunctionBBBlack472(TConfig* configs) {
	configs[ 2]+=  135;
	configs[11]+=   18;
	configs[22]+=   18;
	configs[31]+=   18;
	return 0x180000;
}

u64 FlipFunctionBBWhite473(TConfig* configs) {
	configs[ 2]-=  621;
	configs[11]-=   18;
	configs[13]-=   18;
	configs[22]-=   18;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[31]-=   18;
	return 0x380000;
}

u64 FlipFunctionBBBlack473(TConfig* configs) {
	configs[ 2]+=  621;
	configs[11]+=   18;
	configs[13]+=   18;
	configs[22]+=   18;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[31]+=   18;
	return 0x380000;
}

u64 FlipFunctionBBWhite474(TConfig* configs) {
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
	return 0x780000;
}

u64 FlipFunctionBBBlack474(TConfig* configs) {
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
	return 0x780000;
}

u64 FlipFunctionBBWhite475(TConfig* configs) {
	configs[ 2]-=  153;
	configs[10]-=   18;
	configs[11]-=   18;
	configs[21]-=   18;
	configs[22]-=   18;
	configs[31]-=   18;
	configs[32]-=   18;
	return 0x1c0000;
}

u64 FlipFunctionBBBlack475(TConfig* configs) {
	configs[ 2]+=  153;
	configs[10]+=   18;
	configs[11]+=   18;
	configs[21]+=   18;
	configs[22]+=   18;
	configs[31]+=   18;
	configs[32]+=   18;
	return 0x1c0000;
}

u64 FlipFunctionBBWhite476(TConfig* configs) {
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
	return 0x3c0000;
}

u64 FlipFunctionBBBlack476(TConfig* configs) {
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
	return 0x3c0000;
}

u64 FlipFunctionBBWhite477(TConfig* configs) {
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
	return 0x7c0000;
}

u64 FlipFunctionBBBlack477(TConfig* configs) {
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
	return 0x7c0000;
}

u64 FlipFunctionBBWhite478(TConfig* configs) {
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
	return 0x1e0000;
}

u64 FlipFunctionBBBlack478(TConfig* configs) {
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
	return 0x1e0000;
}

u64 FlipFunctionBBWhite479(TConfig* configs) {
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
	return 0x3e0000;
}

u64 FlipFunctionBBBlack479(TConfig* configs) {
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
	return 0x3e0000;
}

u64 FlipFunctionBBWhite480(TConfig* configs) {
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
	return 0x7e0000;
}

u64 FlipFunctionBBBlack480(TConfig* configs) {
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
	return 0x7e0000;
}

u64 FlipFunctionBBWhite481(TConfig* configs) {
	configs[12]-=    9;
	return 0x0;
}

u64 FlipFunctionBBBlack481(TConfig* configs) {
	configs[12]+=    9;
	return 0x0;
}

u64 FlipFunctionBBWhite482(TConfig* configs) {
	configs[ 3]-=   54;
	configs[12]-=   63;
	configs[22]-=   54;
	configs[32]-=   54;
	return 0x8000000;
}

u64 FlipFunctionBBBlack482(TConfig* configs) {
	configs[ 3]+=   54;
	configs[12]+=   63;
	configs[22]+=   54;
	configs[32]+=   54;
	return 0x8000000;
}

u64 FlipFunctionBBWhite483(TConfig* configs) {
	configs[ 3]-=   54;
	configs[ 4]-=   18;
	configs[12]-=  225;
	configs[21]-=  162;
	configs[22]-=   54;
	configs[32]-=   54;
	configs[34]-=   18;
	return 0x408000000;
}

u64 FlipFunctionBBBlack483(TConfig* configs) {
	configs[ 3]+=   54;
	configs[ 4]+=   18;
	configs[12]+=  225;
	configs[21]+=  162;
	configs[22]+=   54;
	configs[32]+=   54;
	configs[34]+=   18;
	return 0x408000000;
}

u64 FlipFunctionBBWhite484(TConfig* configs) {
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
	return 0x20408000000;
}

u64 FlipFunctionBBBlack484(TConfig* configs) {
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
	return 0x20408000000;
}

u64 FlipFunctionBBWhite485(TConfig* configs) {
	configs[ 1]-=  486;
	configs[12]-=   15;
	configs[24]-=    6;
	configs[28]-=    6;
	return 0x2000;
}

u64 FlipFunctionBBBlack485(TConfig* configs) {
	configs[ 1]+=  486;
	configs[12]+=   15;
	configs[24]+=    6;
	configs[28]+=    6;
	return 0x2000;
}

u64 FlipFunctionBBWhite486(TConfig* configs) {
	configs[ 1]-=  486;
	configs[ 3]-=   54;
	configs[12]-=   69;
	configs[22]-=   54;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[32]-=   54;
	return 0x8002000;
}

u64 FlipFunctionBBBlack486(TConfig* configs) {
	configs[ 1]+=  486;
	configs[ 3]+=   54;
	configs[12]+=   69;
	configs[22]+=   54;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[32]+=   54;
	return 0x8002000;
}

u64 FlipFunctionBBWhite487(TConfig* configs) {
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
	return 0x408002000;
}

u64 FlipFunctionBBBlack487(TConfig* configs) {
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
	return 0x408002000;
}

u64 FlipFunctionBBWhite488(TConfig* configs) {
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
	return 0x20408002000;
}

u64 FlipFunctionBBBlack488(TConfig* configs) {
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
	return 0x20408002000;
}

u64 FlipFunctionBBWhite489(TConfig* configs) {
	configs[23]-=    9;
	return 0x0;
}

u64 FlipFunctionBBBlack489(TConfig* configs) {
	configs[23]+=    9;
	return 0x0;
}

u64 FlipFunctionBBWhite490(TConfig* configs) {
	configs[ 3]-=  162;
	configs[13]-=   54;
	configs[23]-=   63;
	configs[31]-=   54;
	return 0x10000000;
}

u64 FlipFunctionBBBlack490(TConfig* configs) {
	configs[ 3]+=  162;
	configs[13]+=   54;
	configs[23]+=   63;
	configs[31]+=   54;
	return 0x10000000;
}

u64 FlipFunctionBBWhite491(TConfig* configs) {
	configs[ 3]-=  162;
	configs[ 4]-=  162;
	configs[13]-=   54;
	configs[14]-=   54;
	configs[23]-=  225;
	configs[31]-=   54;
	configs[32]-=  162;
	return 0x1010000000;
}

u64 FlipFunctionBBBlack491(TConfig* configs) {
	configs[ 3]+=  162;
	configs[ 4]+=  162;
	configs[13]+=   54;
	configs[14]+=   54;
	configs[23]+=  225;
	configs[31]+=   54;
	configs[32]+=  162;
	return 0x1010000000;
}

u64 FlipFunctionBBWhite492(TConfig* configs) {
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
	return 0x101010000000;
}

u64 FlipFunctionBBBlack492(TConfig* configs) {
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
	return 0x101010000000;
}

u64 FlipFunctionBBWhite493(TConfig* configs) {
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
	return 0x10101010000000;
}

u64 FlipFunctionBBBlack493(TConfig* configs) {
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
	return 0x10101010000000;
}

u64 FlipFunctionBBWhite494(TConfig* configs) {
	configs[ 1]-=  162;
	configs[11]-=    6;
	configs[23]-=   15;
	configs[29]-=    6;
	return 0x1000;
}

u64 FlipFunctionBBBlack494(TConfig* configs) {
	configs[ 1]+=  162;
	configs[11]+=    6;
	configs[23]+=   15;
	configs[29]+=    6;
	return 0x1000;
}

u64 FlipFunctionBBWhite495(TConfig* configs) {
	configs[ 1]-=  162;
	configs[ 3]-=  162;
	configs[11]-=    6;
	configs[13]-=   54;
	configs[23]-=   69;
	configs[29]-=    6;
	configs[31]-=   54;
	return 0x10001000;
}

u64 FlipFunctionBBBlack495(TConfig* configs) {
	configs[ 1]+=  162;
	configs[ 3]+=  162;
	configs[11]+=    6;
	configs[13]+=   54;
	configs[23]+=   69;
	configs[29]+=    6;
	configs[31]+=   54;
	return 0x10001000;
}

u64 FlipFunctionBBWhite496(TConfig* configs) {
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
	return 0x1010001000;
}

u64 FlipFunctionBBBlack496(TConfig* configs) {
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
	return 0x1010001000;
}

u64 FlipFunctionBBWhite497(TConfig* configs) {
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
	return 0x101010001000;
}

u64 FlipFunctionBBBlack497(TConfig* configs) {
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
	return 0x101010001000;
}

u64 FlipFunctionBBWhite498(TConfig* configs) {
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
	return 0x10101010001000;
}

u64 FlipFunctionBBBlack498(TConfig* configs) {
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
	return 0x10101010001000;
}

u64 FlipFunctionBBWhite499(TConfig* configs) {
	configs[30]-=    9;
	return 0x0;
}

u64 FlipFunctionBBBlack499(TConfig* configs) {
	configs[30]+=    9;
	return 0x0;
}

u64 FlipFunctionBBWhite500(TConfig* configs) {
	configs[ 3]-=  486;
	configs[14]-=   18;
	configs[24]-=   54;
	configs[30]-=   63;
	return 0x20000000;
}

u64 FlipFunctionBBBlack500(TConfig* configs) {
	configs[ 3]+=  486;
	configs[14]+=   18;
	configs[24]+=   54;
	configs[30]+=   63;
	return 0x20000000;
}

u64 FlipFunctionBBWhite501(TConfig* configs) {
	configs[ 3]-=  486;
	configs[ 4]-= 1458;
	configs[14]-=   18;
	configs[16]-=    6;
	configs[24]-=   54;
	configs[25]-=  162;
	configs[30]-=  225;
	return 0x4020000000;
}

u64 FlipFunctionBBBlack501(TConfig* configs) {
	configs[ 3]+=  486;
	configs[ 4]+= 1458;
	configs[14]+=   18;
	configs[16]+=    6;
	configs[24]+=   54;
	configs[25]+=  162;
	configs[30]+=  225;
	return 0x4020000000;
}

u64 FlipFunctionBBWhite502(TConfig* configs) {
	configs[ 1]-=   54;
	configs[10]-=    6;
	configs[22]-=    6;
	configs[30]-=   15;
	return 0x800;
}

u64 FlipFunctionBBBlack502(TConfig* configs) {
	configs[ 1]+=   54;
	configs[10]+=    6;
	configs[22]+=    6;
	configs[30]+=   15;
	return 0x800;
}

u64 FlipFunctionBBWhite503(TConfig* configs) {
	configs[ 1]-=   54;
	configs[ 3]-=  486;
	configs[10]-=    6;
	configs[14]-=   18;
	configs[22]-=    6;
	configs[24]-=   54;
	configs[30]-=   69;
	return 0x20000800;
}

u64 FlipFunctionBBBlack503(TConfig* configs) {
	configs[ 1]+=   54;
	configs[ 3]+=  486;
	configs[10]+=    6;
	configs[14]+=   18;
	configs[22]+=    6;
	configs[24]+=   54;
	configs[30]+=   69;
	return 0x20000800;
}

u64 FlipFunctionBBWhite504(TConfig* configs) {
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
	return 0x4020000800;
}

u64 FlipFunctionBBBlack504(TConfig* configs) {
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
	return 0x4020000800;
}

u64 FlipFunctionBBWhite505(TConfig* configs) {
	configs[ 2]-=  243;
	return 0x200000;
}

u64 FlipFunctionBBBlack505(TConfig* configs) {
	configs[ 2]+=  243;
	return 0x200000;
}

u64 FlipFunctionBBWhite506(TConfig* configs) {
	configs[ 2]-= 1701;
	configs[14]-=    6;
	configs[25]-=   18;
	configs[28]-=   18;
	return 0x600000;
}

u64 FlipFunctionBBBlack506(TConfig* configs) {
	configs[ 2]+= 1701;
	configs[14]+=    6;
	configs[25]+=   18;
	configs[28]+=   18;
	return 0x600000;
}

u64 FlipFunctionBBWhite507(TConfig* configs) {
	configs[ 2]-=  405;
	configs[12]-=   18;
	configs[23]-=   18;
	configs[30]-=   18;
	return 0x300000;
}

u64 FlipFunctionBBBlack507(TConfig* configs) {
	configs[ 2]+=  405;
	configs[12]+=   18;
	configs[23]+=   18;
	configs[30]+=   18;
	return 0x300000;
}

u64 FlipFunctionBBWhite508(TConfig* configs) {
	configs[ 2]-= 1863;
	configs[12]-=   18;
	configs[14]-=    6;
	configs[23]-=   18;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[30]-=   18;
	return 0x700000;
}

u64 FlipFunctionBBBlack508(TConfig* configs) {
	configs[ 2]+= 1863;
	configs[12]+=   18;
	configs[14]+=    6;
	configs[23]+=   18;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[30]+=   18;
	return 0x700000;
}

u64 FlipFunctionBBWhite509(TConfig* configs) {
	configs[ 2]-=  459;
	configs[11]-=   18;
	configs[12]-=   18;
	configs[22]-=   18;
	configs[23]-=   18;
	configs[30]-=   18;
	configs[31]-=   18;
	return 0x380000;
}

u64 FlipFunctionBBBlack509(TConfig* configs) {
	configs[ 2]+=  459;
	configs[11]+=   18;
	configs[12]+=   18;
	configs[22]+=   18;
	configs[23]+=   18;
	configs[30]+=   18;
	configs[31]+=   18;
	return 0x380000;
}

u64 FlipFunctionBBWhite510(TConfig* configs) {
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
	return 0x780000;
}

u64 FlipFunctionBBBlack510(TConfig* configs) {
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
	return 0x780000;
}

u64 FlipFunctionBBWhite511(TConfig* configs) {
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
	return 0x3c0000;
}

u64 FlipFunctionBBBlack511(TConfig* configs) {
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
	return 0x3c0000;
}

u64 FlipFunctionBBWhite512(TConfig* configs) {
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
	return 0x7c0000;
}

u64 FlipFunctionBBBlack512(TConfig* configs) {
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
	return 0x7c0000;
}

u64 FlipFunctionBBWhite513(TConfig* configs) {
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
	return 0x3e0000;
}

u64 FlipFunctionBBBlack513(TConfig* configs) {
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
	return 0x3e0000;
}

u64 FlipFunctionBBWhite514(TConfig* configs) {
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
	return 0x7e0000;
}

u64 FlipFunctionBBBlack514(TConfig* configs) {
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
	return 0x7e0000;
}

u64 FlipFunctionBBWhite515(TConfig* configs) {
	configs[13]-=    9;
	return 0x0;
}

u64 FlipFunctionBBBlack515(TConfig* configs) {
	configs[13]+=    9;
	return 0x0;
}

u64 FlipFunctionBBWhite516(TConfig* configs) {
	configs[ 3]-=  162;
	configs[13]-=   63;
	configs[23]-=   54;
	configs[31]-=   54;
	return 0x10000000;
}

u64 FlipFunctionBBBlack516(TConfig* configs) {
	configs[ 3]+=  162;
	configs[13]+=   63;
	configs[23]+=   54;
	configs[31]+=   54;
	return 0x10000000;
}

u64 FlipFunctionBBWhite517(TConfig* configs) {
	configs[ 3]-=  162;
	configs[ 4]-=   54;
	configs[13]-=  225;
	configs[22]-=  162;
	configs[23]-=   54;
	configs[31]-=   54;
	configs[33]-=   54;
	return 0x810000000;
}

u64 FlipFunctionBBBlack517(TConfig* configs) {
	configs[ 3]+=  162;
	configs[ 4]+=   54;
	configs[13]+=  225;
	configs[22]+=  162;
	configs[23]+=   54;
	configs[31]+=   54;
	configs[33]+=   54;
	return 0x810000000;
}

u64 FlipFunctionBBWhite518(TConfig* configs) {
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
	return 0x40810000000;
}

u64 FlipFunctionBBBlack518(TConfig* configs) {
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
	return 0x40810000000;
}

u64 FlipFunctionBBWhite519(TConfig* configs) {
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
	return 0x2040810000000;
}

u64 FlipFunctionBBBlack519(TConfig* configs) {
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
	return 0x2040810000000;
}

u64 FlipFunctionBBWhite520(TConfig* configs) {
	configs[ 1]-= 1458;
	configs[13]-=   15;
	configs[25]-=    6;
	configs[27]-=    6;
	return 0x4000;
}

u64 FlipFunctionBBBlack520(TConfig* configs) {
	configs[ 1]+= 1458;
	configs[13]+=   15;
	configs[25]+=    6;
	configs[27]+=    6;
	return 0x4000;
}

u64 FlipFunctionBBWhite521(TConfig* configs) {
	configs[ 1]-= 1458;
	configs[ 3]-=  162;
	configs[13]-=   69;
	configs[23]-=   54;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[31]-=   54;
	return 0x10004000;
}

u64 FlipFunctionBBBlack521(TConfig* configs) {
	configs[ 1]+= 1458;
	configs[ 3]+=  162;
	configs[13]+=   69;
	configs[23]+=   54;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[31]+=   54;
	return 0x10004000;
}

u64 FlipFunctionBBWhite522(TConfig* configs) {
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
	return 0x810004000;
}

u64 FlipFunctionBBBlack522(TConfig* configs) {
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
	return 0x810004000;
}

u64 FlipFunctionBBWhite523(TConfig* configs) {
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
	return 0x40810004000;
}

u64 FlipFunctionBBBlack523(TConfig* configs) {
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
	return 0x40810004000;
}

u64 FlipFunctionBBWhite524(TConfig* configs) {
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
	return 0x2040810004000;
}

u64 FlipFunctionBBBlack524(TConfig* configs) {
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
	return 0x2040810004000;
}

u64 FlipFunctionBBWhite525(TConfig* configs) {
	configs[24]-=    9;
	return 0x0;
}

u64 FlipFunctionBBBlack525(TConfig* configs) {
	configs[24]+=    9;
	return 0x0;
}

u64 FlipFunctionBBWhite526(TConfig* configs) {
	configs[ 3]-=  486;
	configs[14]-=   18;
	configs[24]-=   63;
	configs[30]-=   54;
	return 0x20000000;
}

u64 FlipFunctionBBBlack526(TConfig* configs) {
	configs[ 3]+=  486;
	configs[14]+=   18;
	configs[24]+=   63;
	configs[30]+=   54;
	return 0x20000000;
}

u64 FlipFunctionBBWhite527(TConfig* configs) {
	configs[ 3]-=  486;
	configs[ 4]-=  486;
	configs[14]-=   18;
	configs[15]-=   18;
	configs[24]-=  225;
	configs[30]-=   54;
	configs[31]-=  162;
	return 0x2020000000;
}

u64 FlipFunctionBBBlack527(TConfig* configs) {
	configs[ 3]+=  486;
	configs[ 4]+=  486;
	configs[14]+=   18;
	configs[15]+=   18;
	configs[24]+=  225;
	configs[30]+=   54;
	configs[31]+=  162;
	return 0x2020000000;
}

u64 FlipFunctionBBWhite528(TConfig* configs) {
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
	return 0x202020000000;
}

u64 FlipFunctionBBBlack528(TConfig* configs) {
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
	return 0x202020000000;
}

u64 FlipFunctionBBWhite529(TConfig* configs) {
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
	return 0x20202020000000;
}

u64 FlipFunctionBBBlack529(TConfig* configs) {
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
	return 0x20202020000000;
}

u64 FlipFunctionBBWhite530(TConfig* configs) {
	configs[ 1]-=  486;
	configs[12]-=    6;
	configs[24]-=   15;
	configs[28]-=    6;
	return 0x2000;
}

u64 FlipFunctionBBBlack530(TConfig* configs) {
	configs[ 1]+=  486;
	configs[12]+=    6;
	configs[24]+=   15;
	configs[28]+=    6;
	return 0x2000;
}

u64 FlipFunctionBBWhite531(TConfig* configs) {
	configs[ 1]-=  486;
	configs[ 3]-=  486;
	configs[12]-=    6;
	configs[14]-=   18;
	configs[24]-=   69;
	configs[28]-=    6;
	configs[30]-=   54;
	return 0x20002000;
}

u64 FlipFunctionBBBlack531(TConfig* configs) {
	configs[ 1]+=  486;
	configs[ 3]+=  486;
	configs[12]+=    6;
	configs[14]+=   18;
	configs[24]+=   69;
	configs[28]+=    6;
	configs[30]+=   54;
	return 0x20002000;
}

u64 FlipFunctionBBWhite532(TConfig* configs) {
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
	return 0x2020002000;
}

u64 FlipFunctionBBBlack532(TConfig* configs) {
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
	return 0x2020002000;
}

u64 FlipFunctionBBWhite533(TConfig* configs) {
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
	return 0x202020002000;
}

u64 FlipFunctionBBBlack533(TConfig* configs) {
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
	return 0x202020002000;
}

u64 FlipFunctionBBWhite534(TConfig* configs) {
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
	return 0x20202020002000;
}

u64 FlipFunctionBBBlack534(TConfig* configs) {
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
	return 0x20202020002000;
}

u64 FlipFunctionBBWhite535(TConfig* configs) {
	configs[29]-=    9;
	return 0x0;
}

u64 FlipFunctionBBBlack535(TConfig* configs) {
	configs[29]+=    9;
	return 0x0;
}

u64 FlipFunctionBBWhite536(TConfig* configs) {
	configs[ 3]-= 1458;
	configs[15]-=    6;
	configs[25]-=   54;
	configs[29]-=   63;
	return 0x40000000;
}

u64 FlipFunctionBBBlack536(TConfig* configs) {
	configs[ 3]+= 1458;
	configs[15]+=    6;
	configs[25]+=   54;
	configs[29]+=   63;
	return 0x40000000;
}

u64 FlipFunctionBBWhite537(TConfig* configs) {
	configs[ 1]-=  162;
	configs[11]-=    6;
	configs[23]-=    6;
	configs[29]-=   15;
	return 0x1000;
}

u64 FlipFunctionBBBlack537(TConfig* configs) {
	configs[ 1]+=  162;
	configs[11]+=    6;
	configs[23]+=    6;
	configs[29]+=   15;
	return 0x1000;
}

u64 FlipFunctionBBWhite538(TConfig* configs) {
	configs[ 1]-=  162;
	configs[ 3]-= 1458;
	configs[11]-=    6;
	configs[15]-=    6;
	configs[23]-=    6;
	configs[25]-=   54;
	configs[29]-=   69;
	return 0x40001000;
}

u64 FlipFunctionBBBlack538(TConfig* configs) {
	configs[ 1]+=  162;
	configs[ 3]+= 1458;
	configs[11]+=    6;
	configs[15]+=    6;
	configs[23]+=    6;
	configs[25]+=   54;
	configs[29]+=   69;
	return 0x40001000;
}

u64 FlipFunctionBBWhite539(TConfig* configs) {
	configs[ 2]-=  729;
	return 0x400000;
}

u64 FlipFunctionBBBlack539(TConfig* configs) {
	configs[ 2]+=  729;
	return 0x400000;
}

u64 FlipFunctionBBWhite540(TConfig* configs) {
	configs[ 2]-= 1215;
	configs[13]-=   18;
	configs[24]-=   18;
	configs[29]-=   18;
	return 0x600000;
}

u64 FlipFunctionBBBlack540(TConfig* configs) {
	configs[ 2]+= 1215;
	configs[13]+=   18;
	configs[24]+=   18;
	configs[29]+=   18;
	return 0x600000;
}

u64 FlipFunctionBBWhite541(TConfig* configs) {
	configs[ 2]-= 1377;
	configs[12]-=   18;
	configs[13]-=   18;
	configs[23]-=   18;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[30]-=   18;
	return 0x700000;
}

u64 FlipFunctionBBBlack541(TConfig* configs) {
	configs[ 2]+= 1377;
	configs[12]+=   18;
	configs[13]+=   18;
	configs[23]+=   18;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[30]+=   18;
	return 0x700000;
}

u64 FlipFunctionBBWhite542(TConfig* configs) {
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
	return 0x780000;
}

u64 FlipFunctionBBBlack542(TConfig* configs) {
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
	return 0x780000;
}

u64 FlipFunctionBBWhite543(TConfig* configs) {
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
	return 0x7c0000;
}

u64 FlipFunctionBBBlack543(TConfig* configs) {
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
	return 0x7c0000;
}

u64 FlipFunctionBBWhite544(TConfig* configs) {
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
	return 0x7e0000;
}

u64 FlipFunctionBBBlack544(TConfig* configs) {
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
	return 0x7e0000;
}

u64 FlipFunctionBBWhite545(TConfig* configs) {
	configs[14]-=    3;
	return 0x0;
}

u64 FlipFunctionBBBlack545(TConfig* configs) {
	configs[14]+=    3;
	return 0x0;
}

u64 FlipFunctionBBWhite546(TConfig* configs) {
	configs[ 3]-=  486;
	configs[14]-=   21;
	configs[24]-=   54;
	configs[30]-=   54;
	return 0x20000000;
}

u64 FlipFunctionBBBlack546(TConfig* configs) {
	configs[ 3]+=  486;
	configs[14]+=   21;
	configs[24]+=   54;
	configs[30]+=   54;
	return 0x20000000;
}

u64 FlipFunctionBBWhite547(TConfig* configs) {
	configs[ 3]-=  486;
	configs[ 4]-=  162;
	configs[14]-=   75;
	configs[23]-=  162;
	configs[24]-=   54;
	configs[30]-=   54;
	configs[32]-=  162;
	return 0x1020000000;
}

u64 FlipFunctionBBBlack547(TConfig* configs) {
	configs[ 3]+=  486;
	configs[ 4]+=  162;
	configs[14]+=   75;
	configs[23]+=  162;
	configs[24]+=   54;
	configs[30]+=   54;
	configs[32]+=  162;
	return 0x1020000000;
}

u64 FlipFunctionBBWhite548(TConfig* configs) {
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
	return 0x81020000000;
}

u64 FlipFunctionBBBlack548(TConfig* configs) {
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
	return 0x81020000000;
}

u64 FlipFunctionBBWhite549(TConfig* configs) {
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
	return 0x4081020000000;
}

u64 FlipFunctionBBBlack549(TConfig* configs) {
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
	return 0x4081020000000;
}

u64 FlipFunctionBBWhite550(TConfig* configs) {
	configs[25]-=    9;
	return 0x0;
}

u64 FlipFunctionBBBlack550(TConfig* configs) {
	configs[25]+=    9;
	return 0x0;
}

u64 FlipFunctionBBWhite551(TConfig* configs) {
	configs[ 3]-= 1458;
	configs[15]-=    6;
	configs[25]-=   63;
	configs[29]-=   54;
	return 0x40000000;
}

u64 FlipFunctionBBBlack551(TConfig* configs) {
	configs[ 3]+= 1458;
	configs[15]+=    6;
	configs[25]+=   63;
	configs[29]+=   54;
	return 0x40000000;
}

u64 FlipFunctionBBWhite552(TConfig* configs) {
	configs[ 3]-= 1458;
	configs[ 4]-= 1458;
	configs[15]-=    6;
	configs[16]-=    6;
	configs[25]-=  225;
	configs[29]-=   54;
	configs[30]-=  162;
	return 0x4040000000;
}

u64 FlipFunctionBBBlack552(TConfig* configs) {
	configs[ 3]+= 1458;
	configs[ 4]+= 1458;
	configs[15]+=    6;
	configs[16]+=    6;
	configs[25]+=  225;
	configs[29]+=   54;
	configs[30]+=  162;
	return 0x4040000000;
}

u64 FlipFunctionBBWhite553(TConfig* configs) {
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
	return 0x404040000000;
}

u64 FlipFunctionBBBlack553(TConfig* configs) {
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
	return 0x404040000000;
}

u64 FlipFunctionBBWhite554(TConfig* configs) {
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
	return 0x40404040000000;
}

u64 FlipFunctionBBBlack554(TConfig* configs) {
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
	return 0x40404040000000;
}

u64 FlipFunctionBBWhite555(TConfig* configs) {
	configs[ 1]-= 1458;
	configs[13]-=    6;
	configs[25]-=   15;
	configs[27]-=    6;
	return 0x4000;
}

u64 FlipFunctionBBBlack555(TConfig* configs) {
	configs[ 1]+= 1458;
	configs[13]+=    6;
	configs[25]+=   15;
	configs[27]+=    6;
	return 0x4000;
}

u64 FlipFunctionBBWhite556(TConfig* configs) {
	configs[ 1]-= 1458;
	configs[ 3]-= 1458;
	configs[13]-=    6;
	configs[15]-=    6;
	configs[25]-=   69;
	configs[27]-=    6;
	configs[29]-=   54;
	return 0x40004000;
}

u64 FlipFunctionBBBlack556(TConfig* configs) {
	configs[ 1]+= 1458;
	configs[ 3]+= 1458;
	configs[13]+=    6;
	configs[15]+=    6;
	configs[25]+=   69;
	configs[27]+=    6;
	configs[29]+=   54;
	return 0x40004000;
}

u64 FlipFunctionBBWhite557(TConfig* configs) {
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
	return 0x4040004000;
}

u64 FlipFunctionBBBlack557(TConfig* configs) {
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
	return 0x4040004000;
}

u64 FlipFunctionBBWhite558(TConfig* configs) {
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
	return 0x404040004000;
}

u64 FlipFunctionBBBlack558(TConfig* configs) {
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
	return 0x404040004000;
}

u64 FlipFunctionBBWhite559(TConfig* configs) {
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
	return 0x40404040004000;
}

u64 FlipFunctionBBBlack559(TConfig* configs) {
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
	return 0x40404040004000;
}

u64 FlipFunctionBBWhite560(TConfig* configs) {
	configs[28]-=    9;
	return 0x0;
}

u64 FlipFunctionBBBlack560(TConfig* configs) {
	configs[28]+=    9;
	return 0x0;
}

u64 FlipFunctionBBWhite561(TConfig* configs) {
	configs[ 1]-=  486;
	configs[12]-=    6;
	configs[24]-=    6;
	configs[28]-=   15;
	return 0x2000;
}

u64 FlipFunctionBBBlack561(TConfig* configs) {
	configs[ 1]+=  486;
	configs[12]+=    6;
	configs[24]+=    6;
	configs[28]+=   15;
	return 0x2000;
}

u64 FlipFunctionBBWhite562(TConfig* configs) {
	configs[ 2]-= 2187;
	return 0x800000;
}

u64 FlipFunctionBBBlack562(TConfig* configs) {
	configs[ 2]+= 2187;
	return 0x800000;
}

u64 FlipFunctionBBWhite563(TConfig* configs) {
	configs[ 2]-= 3645;
	configs[14]-=    6;
	configs[25]-=   18;
	configs[28]-=   18;
	return 0xc00000;
}

u64 FlipFunctionBBBlack563(TConfig* configs) {
	configs[ 2]+= 3645;
	configs[14]+=    6;
	configs[25]+=   18;
	configs[28]+=   18;
	return 0xc00000;
}

u64 FlipFunctionBBWhite564(TConfig* configs) {
	configs[ 2]-= 4131;
	configs[13]-=   18;
	configs[14]-=    6;
	configs[24]-=   18;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[29]-=   18;
	return 0xe00000;
}

u64 FlipFunctionBBBlack564(TConfig* configs) {
	configs[ 2]+= 4131;
	configs[13]+=   18;
	configs[14]+=    6;
	configs[24]+=   18;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[29]+=   18;
	return 0xe00000;
}

u64 FlipFunctionBBWhite565(TConfig* configs) {
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
	return 0xf00000;
}

u64 FlipFunctionBBBlack565(TConfig* configs) {
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
	return 0xf00000;
}

u64 FlipFunctionBBWhite566(TConfig* configs) {
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
	return 0xf80000;
}

u64 FlipFunctionBBBlack566(TConfig* configs) {
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
	return 0xf80000;
}

u64 FlipFunctionBBWhite567(TConfig* configs) {
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
	return 0xfc0000;
}

u64 FlipFunctionBBBlack567(TConfig* configs) {
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
	return 0xfc0000;
}

u64 FlipFunctionBBWhite568(TConfig* configs) {
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
	return 0xfe0000;
}

u64 FlipFunctionBBBlack568(TConfig* configs) {
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
	return 0xfe0000;
}

u64 FlipFunctionBBWhite569(TConfig* configs) {
	configs[15]-=    1;
	return 0x0;
}

u64 FlipFunctionBBBlack569(TConfig* configs) {
	configs[15]+=    1;
	return 0x0;
}

u64 FlipFunctionBBWhite570(TConfig* configs) {
	configs[ 3]-= 1458;
	configs[15]-=    7;
	configs[25]-=   54;
	configs[29]-=   54;
	return 0x40000000;
}

u64 FlipFunctionBBBlack570(TConfig* configs) {
	configs[ 3]+= 1458;
	configs[15]+=    7;
	configs[25]+=   54;
	configs[29]+=   54;
	return 0x40000000;
}

u64 FlipFunctionBBWhite571(TConfig* configs) {
	configs[ 3]-= 1458;
	configs[ 4]-=  486;
	configs[15]-=   25;
	configs[24]-=  162;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[31]-=  162;
	return 0x2040000000;
}

u64 FlipFunctionBBBlack571(TConfig* configs) {
	configs[ 3]+= 1458;
	configs[ 4]+=  486;
	configs[15]+=   25;
	configs[24]+=  162;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[31]+=  162;
	return 0x2040000000;
}

u64 FlipFunctionBBWhite572(TConfig* configs) {
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
	return 0x102040000000;
}

u64 FlipFunctionBBBlack572(TConfig* configs) {
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
	return 0x102040000000;
}

u64 FlipFunctionBBWhite573(TConfig* configs) {
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
	return 0x8102040000000;
}

u64 FlipFunctionBBBlack573(TConfig* configs) {
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
	return 0x8102040000000;
}

u64 FlipFunctionBBWhite574(TConfig* configs) {
	configs[26]-=    9;
	return 0x0;
}

u64 FlipFunctionBBBlack574(TConfig* configs) {
	configs[26]+=    9;
	return 0x0;
}

u64 FlipFunctionBBWhite575(TConfig* configs) {
	configs[ 3]-= 4374;
	configs[16]-=    2;
	configs[26]-=   63;
	configs[28]-=   54;
	return 0x80000000;
}

u64 FlipFunctionBBBlack575(TConfig* configs) {
	configs[ 3]+= 4374;
	configs[16]+=    2;
	configs[26]+=   63;
	configs[28]+=   54;
	return 0x80000000;
}

u64 FlipFunctionBBWhite576(TConfig* configs) {
	configs[ 3]-= 4374;
	configs[ 4]-= 4374;
	configs[16]-=    2;
	configs[17]-=    2;
	configs[26]-=  225;
	configs[28]-=   54;
	configs[29]-=  162;
	return 0x8080000000;
}

u64 FlipFunctionBBBlack576(TConfig* configs) {
	configs[ 3]+= 4374;
	configs[ 4]+= 4374;
	configs[16]+=    2;
	configs[17]+=    2;
	configs[26]+=  225;
	configs[28]+=   54;
	configs[29]+=  162;
	return 0x8080000000;
}

u64 FlipFunctionBBWhite577(TConfig* configs) {
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
	return 0x808080000000;
}

u64 FlipFunctionBBBlack577(TConfig* configs) {
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
	return 0x808080000000;
}

u64 FlipFunctionBBWhite578(TConfig* configs) {
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
	return 0x80808080000000;
}

u64 FlipFunctionBBBlack578(TConfig* configs) {
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
	return 0x80808080000000;
}

u64 FlipFunctionBBWhite579(TConfig* configs) {
	configs[ 1]-= 4374;
	configs[14]-=    2;
	configs[26]-=   15;
	return 0x8000;
}

u64 FlipFunctionBBBlack579(TConfig* configs) {
	configs[ 1]+= 4374;
	configs[14]+=    2;
	configs[26]+=   15;
	return 0x8000;
}

u64 FlipFunctionBBWhite580(TConfig* configs) {
	configs[ 1]-= 4374;
	configs[ 3]-= 4374;
	configs[14]-=    2;
	configs[16]-=    2;
	configs[26]-=   69;
	configs[28]-=   54;
	return 0x80008000;
}

u64 FlipFunctionBBBlack580(TConfig* configs) {
	configs[ 1]+= 4374;
	configs[ 3]+= 4374;
	configs[14]+=    2;
	configs[16]+=    2;
	configs[26]+=   69;
	configs[28]+=   54;
	return 0x80008000;
}

u64 FlipFunctionBBWhite581(TConfig* configs) {
	configs[ 1]-= 4374;
	configs[ 3]-= 4374;
	configs[ 4]-= 4374;
	configs[14]-=    2;
	configs[16]-=    2;
	configs[17]-=    2;
	configs[26]-=  231;
	configs[28]-=   54;
	configs[29]-=  162;
	return 0x8080008000;
}

u64 FlipFunctionBBBlack581(TConfig* configs) {
	configs[ 1]+= 4374;
	configs[ 3]+= 4374;
	configs[ 4]+= 4374;
	configs[14]+=    2;
	configs[16]+=    2;
	configs[17]+=    2;
	configs[26]+=  231;
	configs[28]+=   54;
	configs[29]+=  162;
	return 0x8080008000;
}

u64 FlipFunctionBBWhite582(TConfig* configs) {
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
	return 0x808080008000;
}

u64 FlipFunctionBBBlack582(TConfig* configs) {
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
	return 0x808080008000;
}

u64 FlipFunctionBBWhite583(TConfig* configs) {
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
	return 0x80808080008000;
}

u64 FlipFunctionBBBlack583(TConfig* configs) {
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
	return 0x80808080008000;
}

u64 FlipFunctionBBWhite584(TConfig* configs) {
	configs[27]-=    9;
	return 0x0;
}

u64 FlipFunctionBBBlack584(TConfig* configs) {
	configs[27]+=    9;
	return 0x0;
}

u64 FlipFunctionBBWhite585(TConfig* configs) {
	configs[ 1]-= 1458;
	configs[13]-=    6;
	configs[25]-=    6;
	configs[27]-=   15;
	return 0x4000;
}

u64 FlipFunctionBBBlack585(TConfig* configs) {
	configs[ 1]+= 1458;
	configs[13]+=    6;
	configs[25]+=    6;
	configs[27]+=   15;
	return 0x4000;
}

u64 FlipFunctionBBWhite586(TConfig* configs) {
	configs[ 3]-=    1;
	return 0x1000000;
}

u64 FlipFunctionBBBlack586(TConfig* configs) {
	configs[ 3]+=    1;
	return 0x1000000;
}

u64 FlipFunctionBBWhite587(TConfig* configs) {
	configs[ 3]-=    7;
	configs[10]-=   54;
	configs[20]-=   54;
	configs[34]-=    6;
	return 0x3000000;
}

u64 FlipFunctionBBBlack587(TConfig* configs) {
	configs[ 3]+=    7;
	configs[10]+=   54;
	configs[20]+=   54;
	configs[34]+=    6;
	return 0x3000000;
}

u64 FlipFunctionBBWhite588(TConfig* configs) {
	configs[ 3]-=   25;
	configs[10]-=   54;
	configs[11]-=   54;
	configs[20]-=   54;
	configs[21]-=   54;
	configs[33]-=   18;
	configs[34]-=    6;
	return 0x7000000;
}

u64 FlipFunctionBBBlack588(TConfig* configs) {
	configs[ 3]+=   25;
	configs[10]+=   54;
	configs[11]+=   54;
	configs[20]+=   54;
	configs[21]+=   54;
	configs[33]+=   18;
	configs[34]+=    6;
	return 0x7000000;
}

u64 FlipFunctionBBWhite589(TConfig* configs) {
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
	return 0xf000000;
}

u64 FlipFunctionBBBlack589(TConfig* configs) {
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
	return 0xf000000;
}

u64 FlipFunctionBBWhite590(TConfig* configs) {
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
	return 0x1f000000;
}

u64 FlipFunctionBBBlack590(TConfig* configs) {
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
	return 0x1f000000;
}

u64 FlipFunctionBBWhite591(TConfig* configs) {
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
	return 0x3f000000;
}

u64 FlipFunctionBBBlack591(TConfig* configs) {
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
	return 0x3f000000;
}

u64 FlipFunctionBBWhite592(TConfig* configs) {
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
	return 0x7f000000;
}

u64 FlipFunctionBBBlack592(TConfig* configs) {
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
	return 0x7f000000;
}

u64 FlipFunctionBBWhite593(TConfig* configs) {
	configs[ 9]-=   27;
	return 0x0;
}

u64 FlipFunctionBBBlack593(TConfig* configs) {
	configs[ 9]+=   27;
	return 0x0;
}

u64 FlipFunctionBBWhite594(TConfig* configs) {
	configs[ 2]-=    6;
	configs[ 9]-=   45;
	configs[20]-=   18;
	configs[33]-=    6;
	return 0x20000;
}

u64 FlipFunctionBBBlack594(TConfig* configs) {
	configs[ 2]+=    6;
	configs[ 9]+=   45;
	configs[20]+=   18;
	configs[33]+=    6;
	return 0x20000;
}

u64 FlipFunctionBBWhite595(TConfig* configs) {
	configs[ 1]-=   18;
	configs[ 2]-=    6;
	configs[ 9]-=   51;
	configs[20]-=   18;
	configs[21]-=    6;
	configs[31]-=    6;
	configs[33]-=    6;
	return 0x20400;
}

u64 FlipFunctionBBBlack595(TConfig* configs) {
	configs[ 1]+=   18;
	configs[ 2]+=    6;
	configs[ 9]+=   51;
	configs[20]+=   18;
	configs[21]+=    6;
	configs[31]+=    6;
	configs[33]+=    6;
	return 0x20400;
}

u64 FlipFunctionBBWhite596(TConfig* configs) {
	configs[19]-=   27;
	return 0x0;
}

u64 FlipFunctionBBBlack596(TConfig* configs) {
	configs[19]+=   27;
	return 0x0;
}

u64 FlipFunctionBBWhite597(TConfig* configs) {
	configs[ 4]-=    2;
	configs[10]-=  162;
	configs[19]-=  189;
	configs[36]-=    2;
	return 0x100000000;
}

u64 FlipFunctionBBBlack597(TConfig* configs) {
	configs[ 4]+=    2;
	configs[10]+=  162;
	configs[19]+=  189;
	configs[36]+=    2;
	return 0x100000000;
}

u64 FlipFunctionBBWhite598(TConfig* configs) {
	configs[ 4]-=    2;
	configs[ 5]-=    2;
	configs[10]-=  162;
	configs[11]-=  486;
	configs[19]-=  675;
	configs[36]-=    2;
	configs[37]-=    2;
	return 0x10100000000;
}

u64 FlipFunctionBBBlack598(TConfig* configs) {
	configs[ 4]+=    2;
	configs[ 5]+=    2;
	configs[10]+=  162;
	configs[11]+=  486;
	configs[19]+=  675;
	configs[36]+=    2;
	configs[37]+=    2;
	return 0x10100000000;
}

u64 FlipFunctionBBWhite599(TConfig* configs) {
	configs[ 4]-=    2;
	configs[ 5]-=    2;
	configs[ 6]-=    2;
	configs[10]-=  162;
	configs[11]-=  486;
	configs[12]-= 1458;
	configs[19]-= 2133;
	configs[36]-=    2;
	configs[37]-=    2;
	return 0x1010100000000;
}

u64 FlipFunctionBBBlack599(TConfig* configs) {
	configs[ 4]+=    2;
	configs[ 5]+=    2;
	configs[ 6]+=    2;
	configs[10]+=  162;
	configs[11]+=  486;
	configs[12]+= 1458;
	configs[19]+= 2133;
	configs[36]+=    2;
	configs[37]+=    2;
	return 0x1010100000000;
}

u64 FlipFunctionBBWhite600(TConfig* configs) {
	configs[ 2]-=    2;
	configs[ 8]-=   18;
	configs[19]-=   45;
	configs[34]-=    2;
	return 0x10000;
}

u64 FlipFunctionBBBlack600(TConfig* configs) {
	configs[ 2]+=    2;
	configs[ 8]+=   18;
	configs[19]+=   45;
	configs[34]+=    2;
	return 0x10000;
}

u64 FlipFunctionBBWhite601(TConfig* configs) {
	configs[ 2]-=    2;
	configs[ 4]-=    2;
	configs[ 8]-=   18;
	configs[10]-=  162;
	configs[19]-=  207;
	configs[34]-=    2;
	configs[36]-=    2;
	return 0x100010000;
}

u64 FlipFunctionBBBlack601(TConfig* configs) {
	configs[ 2]+=    2;
	configs[ 4]+=    2;
	configs[ 8]+=   18;
	configs[10]+=  162;
	configs[19]+=  207;
	configs[34]+=    2;
	configs[36]+=    2;
	return 0x100010000;
}

u64 FlipFunctionBBWhite602(TConfig* configs) {
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
	return 0x10100010000;
}

u64 FlipFunctionBBBlack602(TConfig* configs) {
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
	return 0x10100010000;
}

u64 FlipFunctionBBWhite603(TConfig* configs) {
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
	return 0x1010100010000;
}

u64 FlipFunctionBBBlack603(TConfig* configs) {
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
	return 0x1010100010000;
}

u64 FlipFunctionBBWhite604(TConfig* configs) {
	configs[ 1]-=    2;
	configs[ 2]-=    2;
	configs[ 8]-=   18;
	configs[19]-=   51;
	configs[33]-=    2;
	configs[34]-=    2;
	return 0x10100;
}

u64 FlipFunctionBBBlack604(TConfig* configs) {
	configs[ 1]+=    2;
	configs[ 2]+=    2;
	configs[ 8]+=   18;
	configs[19]+=   51;
	configs[33]+=    2;
	configs[34]+=    2;
	return 0x10100;
}

u64 FlipFunctionBBWhite605(TConfig* configs) {
	configs[ 1]-=    2;
	configs[ 2]-=    2;
	configs[ 4]-=    2;
	configs[ 8]-=   18;
	configs[10]-=  162;
	configs[19]-=  213;
	configs[33]-=    2;
	configs[34]-=    2;
	configs[36]-=    2;
	return 0x100010100;
}

u64 FlipFunctionBBBlack605(TConfig* configs) {
	configs[ 1]+=    2;
	configs[ 2]+=    2;
	configs[ 4]+=    2;
	configs[ 8]+=   18;
	configs[10]+=  162;
	configs[19]+=  213;
	configs[33]+=    2;
	configs[34]+=    2;
	configs[36]+=    2;
	return 0x100010100;
}

u64 FlipFunctionBBWhite606(TConfig* configs) {
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
	return 0x10100010100;
}

u64 FlipFunctionBBBlack606(TConfig* configs) {
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
	return 0x10100010100;
}

u64 FlipFunctionBBWhite607(TConfig* configs) {
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
	return 0x1010100010100;
}

u64 FlipFunctionBBBlack607(TConfig* configs) {
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
	return 0x1010100010100;
}

u64 FlipFunctionBBWhite608(TConfig* configs) {
	configs[35]-=    1;
	return 0x0;
}

u64 FlipFunctionBBBlack608(TConfig* configs) {
	configs[35]+=    1;
	return 0x0;
}

u64 FlipFunctionBBWhite609(TConfig* configs) {
	configs[ 4]-=    6;
	configs[11]-=  162;
	configs[20]-=  162;
	configs[35]-=    7;
	return 0x200000000;
}

u64 FlipFunctionBBBlack609(TConfig* configs) {
	configs[ 4]+=    6;
	configs[11]+=  162;
	configs[20]+=  162;
	configs[35]+=    7;
	return 0x200000000;
}

u64 FlipFunctionBBWhite610(TConfig* configs) {
	configs[ 4]-=    6;
	configs[ 5]-=   18;
	configs[11]-=  162;
	configs[13]-=  486;
	configs[20]-=  162;
	configs[21]-=  486;
	configs[35]-=   25;
	return 0x40200000000;
}

u64 FlipFunctionBBBlack610(TConfig* configs) {
	configs[ 4]+=    6;
	configs[ 5]+=   18;
	configs[11]+=  162;
	configs[13]+=  486;
	configs[20]+=  162;
	configs[21]+=  486;
	configs[35]+=   25;
	return 0x40200000000;
}

u64 FlipFunctionBBWhite611(TConfig* configs) {
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
	return 0x8040200000000;
}

u64 FlipFunctionBBBlack611(TConfig* configs) {
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
	return 0x8040200000000;
}

u64 FlipFunctionBBWhite612(TConfig* configs) {
	configs[ 3]-=    3;
	return 0x2000000;
}

u64 FlipFunctionBBBlack612(TConfig* configs) {
	configs[ 3]+=    3;
	return 0x2000000;
}

u64 FlipFunctionBBWhite613(TConfig* configs) {
	configs[ 3]-=   21;
	configs[11]-=   54;
	configs[21]-=   54;
	configs[33]-=   18;
	return 0x6000000;
}

u64 FlipFunctionBBBlack613(TConfig* configs) {
	configs[ 3]+=   21;
	configs[11]+=   54;
	configs[21]+=   54;
	configs[33]+=   18;
	return 0x6000000;
}

u64 FlipFunctionBBWhite614(TConfig* configs) {
	configs[ 3]-=   75;
	configs[11]-=   54;
	configs[12]-=   54;
	configs[21]-=   54;
	configs[22]-=   54;
	configs[32]-=   54;
	configs[33]-=   18;
	return 0xe000000;
}

u64 FlipFunctionBBBlack614(TConfig* configs) {
	configs[ 3]+=   75;
	configs[11]+=   54;
	configs[12]+=   54;
	configs[21]+=   54;
	configs[22]+=   54;
	configs[32]+=   54;
	configs[33]+=   18;
	return 0xe000000;
}

u64 FlipFunctionBBWhite615(TConfig* configs) {
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
	return 0x1e000000;
}

u64 FlipFunctionBBBlack615(TConfig* configs) {
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
	return 0x1e000000;
}

u64 FlipFunctionBBWhite616(TConfig* configs) {
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
	return 0x3e000000;
}

u64 FlipFunctionBBBlack616(TConfig* configs) {
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
	return 0x3e000000;
}

u64 FlipFunctionBBWhite617(TConfig* configs) {
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
	return 0x7e000000;
}

u64 FlipFunctionBBBlack617(TConfig* configs) {
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
	return 0x7e000000;
}

u64 FlipFunctionBBWhite618(TConfig* configs) {
	configs[10]-=   27;
	return 0x0;
}

u64 FlipFunctionBBBlack618(TConfig* configs) {
	configs[10]+=   27;
	return 0x0;
}

u64 FlipFunctionBBWhite619(TConfig* configs) {
	configs[ 2]-=   18;
	configs[10]-=   45;
	configs[21]-=   18;
	configs[32]-=   18;
	return 0x40000;
}

u64 FlipFunctionBBBlack619(TConfig* configs) {
	configs[ 2]+=   18;
	configs[10]+=   45;
	configs[21]+=   18;
	configs[32]+=   18;
	return 0x40000;
}

u64 FlipFunctionBBWhite620(TConfig* configs) {
	configs[ 1]-=   54;
	configs[ 2]-=   18;
	configs[10]-=   51;
	configs[21]-=   18;
	configs[22]-=    6;
	configs[30]-=    6;
	configs[32]-=   18;
	return 0x40800;
}

u64 FlipFunctionBBBlack620(TConfig* configs) {
	configs[ 1]+=   54;
	configs[ 2]+=   18;
	configs[10]+=   51;
	configs[21]+=   18;
	configs[22]+=    6;
	configs[30]+=    6;
	configs[32]+=   18;
	return 0x40800;
}

u64 FlipFunctionBBWhite621(TConfig* configs) {
	configs[20]-=   27;
	return 0x0;
}

u64 FlipFunctionBBBlack621(TConfig* configs) {
	configs[20]+=   27;
	return 0x0;
}

u64 FlipFunctionBBWhite622(TConfig* configs) {
	configs[ 4]-=    6;
	configs[11]-=  162;
	configs[20]-=  189;
	configs[35]-=    6;
	return 0x200000000;
}

u64 FlipFunctionBBBlack622(TConfig* configs) {
	configs[ 4]+=    6;
	configs[11]+=  162;
	configs[20]+=  189;
	configs[35]+=    6;
	return 0x200000000;
}

u64 FlipFunctionBBWhite623(TConfig* configs) {
	configs[ 4]-=    6;
	configs[ 5]-=    6;
	configs[11]-=  162;
	configs[12]-=  486;
	configs[20]-=  675;
	configs[35]-=    6;
	configs[36]-=    6;
	return 0x20200000000;
}

u64 FlipFunctionBBBlack623(TConfig* configs) {
	configs[ 4]+=    6;
	configs[ 5]+=    6;
	configs[11]+=  162;
	configs[12]+=  486;
	configs[20]+=  675;
	configs[35]+=    6;
	configs[36]+=    6;
	return 0x20200000000;
}

u64 FlipFunctionBBWhite624(TConfig* configs) {
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
	return 0x2020200000000;
}

u64 FlipFunctionBBBlack624(TConfig* configs) {
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
	return 0x2020200000000;
}

u64 FlipFunctionBBWhite625(TConfig* configs) {
	configs[ 2]-=    6;
	configs[ 9]-=   18;
	configs[20]-=   45;
	configs[33]-=    6;
	return 0x20000;
}

u64 FlipFunctionBBBlack625(TConfig* configs) {
	configs[ 2]+=    6;
	configs[ 9]+=   18;
	configs[20]+=   45;
	configs[33]+=    6;
	return 0x20000;
}

u64 FlipFunctionBBWhite626(TConfig* configs) {
	configs[ 2]-=    6;
	configs[ 4]-=    6;
	configs[ 9]-=   18;
	configs[11]-=  162;
	configs[20]-=  207;
	configs[33]-=    6;
	configs[35]-=    6;
	return 0x200020000;
}

u64 FlipFunctionBBBlack626(TConfig* configs) {
	configs[ 2]+=    6;
	configs[ 4]+=    6;
	configs[ 9]+=   18;
	configs[11]+=  162;
	configs[20]+=  207;
	configs[33]+=    6;
	configs[35]+=    6;
	return 0x200020000;
}

u64 FlipFunctionBBWhite627(TConfig* configs) {
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
	return 0x20200020000;
}

u64 FlipFunctionBBBlack627(TConfig* configs) {
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
	return 0x20200020000;
}

u64 FlipFunctionBBWhite628(TConfig* configs) {
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
	return 0x2020200020000;
}

u64 FlipFunctionBBBlack628(TConfig* configs) {
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
	return 0x2020200020000;
}

u64 FlipFunctionBBWhite629(TConfig* configs) {
	configs[ 1]-=    6;
	configs[ 2]-=    6;
	configs[ 8]-=    6;
	configs[ 9]-=   18;
	configs[20]-=   51;
	configs[32]-=    6;
	configs[33]-=    6;
	return 0x20200;
}

u64 FlipFunctionBBBlack629(TConfig* configs) {
	configs[ 1]+=    6;
	configs[ 2]+=    6;
	configs[ 8]+=    6;
	configs[ 9]+=   18;
	configs[20]+=   51;
	configs[32]+=    6;
	configs[33]+=    6;
	return 0x20200;
}

u64 FlipFunctionBBWhite630(TConfig* configs) {
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
	return 0x200020200;
}

u64 FlipFunctionBBBlack630(TConfig* configs) {
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
	return 0x200020200;
}

u64 FlipFunctionBBWhite631(TConfig* configs) {
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
	return 0x20200020200;
}

u64 FlipFunctionBBBlack631(TConfig* configs) {
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
	return 0x20200020200;
}

u64 FlipFunctionBBWhite632(TConfig* configs) {
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
	return 0x2020200020200;
}

u64 FlipFunctionBBBlack632(TConfig* configs) {
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
	return 0x2020200020200;
}

u64 FlipFunctionBBWhite633(TConfig* configs) {
	configs[34]-=    3;
	return 0x0;
}

u64 FlipFunctionBBBlack633(TConfig* configs) {
	configs[34]+=    3;
	return 0x0;
}

u64 FlipFunctionBBWhite634(TConfig* configs) {
	configs[ 4]-=   18;
	configs[12]-=  162;
	configs[21]-=  162;
	configs[34]-=   21;
	return 0x400000000;
}

u64 FlipFunctionBBBlack634(TConfig* configs) {
	configs[ 4]+=   18;
	configs[12]+=  162;
	configs[21]+=  162;
	configs[34]+=   21;
	return 0x400000000;
}

u64 FlipFunctionBBWhite635(TConfig* configs) {
	configs[ 4]-=   18;
	configs[ 5]-=   54;
	configs[12]-=  162;
	configs[14]-=  162;
	configs[21]-=  162;
	configs[22]-=  486;
	configs[34]-=   75;
	return 0x80400000000;
}

u64 FlipFunctionBBBlack635(TConfig* configs) {
	configs[ 4]+=   18;
	configs[ 5]+=   54;
	configs[12]+=  162;
	configs[14]+=  162;
	configs[21]+=  162;
	configs[22]+=  486;
	configs[34]+=   75;
	return 0x80400000000;
}

u64 FlipFunctionBBWhite636(TConfig* configs) {
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
	return 0x10080400000000;
}

u64 FlipFunctionBBBlack636(TConfig* configs) {
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
	return 0x10080400000000;
}

u64 FlipFunctionBBWhite637(TConfig* configs) {
	configs[ 3]-=    9;
	return 0x4000000;
}

u64 FlipFunctionBBBlack637(TConfig* configs) {
	configs[ 3]+=    9;
	return 0x4000000;
}

u64 FlipFunctionBBWhite638(TConfig* configs) {
	configs[ 3]-=   63;
	configs[12]-=   54;
	configs[22]-=   54;
	configs[32]-=   54;
	return 0xc000000;
}

u64 FlipFunctionBBBlack638(TConfig* configs) {
	configs[ 3]+=   63;
	configs[12]+=   54;
	configs[22]+=   54;
	configs[32]+=   54;
	return 0xc000000;
}

u64 FlipFunctionBBWhite639(TConfig* configs) {
	configs[ 3]-=  225;
	configs[12]-=   54;
	configs[13]-=   54;
	configs[22]-=   54;
	configs[23]-=   54;
	configs[31]-=   54;
	configs[32]-=   54;
	return 0x1c000000;
}

u64 FlipFunctionBBBlack639(TConfig* configs) {
	configs[ 3]+=  225;
	configs[12]+=   54;
	configs[13]+=   54;
	configs[22]+=   54;
	configs[23]+=   54;
	configs[31]+=   54;
	configs[32]+=   54;
	return 0x1c000000;
}

u64 FlipFunctionBBWhite640(TConfig* configs) {
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
	return 0x3c000000;
}

u64 FlipFunctionBBBlack640(TConfig* configs) {
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
	return 0x3c000000;
}

u64 FlipFunctionBBWhite641(TConfig* configs) {
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
	return 0x7c000000;
}

u64 FlipFunctionBBBlack641(TConfig* configs) {
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
	return 0x7c000000;
}

u64 FlipFunctionBBWhite642(TConfig* configs) {
	configs[ 3]-=   15;
	configs[10]-=   54;
	configs[20]-=   54;
	configs[34]-=    6;
	return 0x6000000;
}

u64 FlipFunctionBBBlack642(TConfig* configs) {
	configs[ 3]+=   15;
	configs[10]+=   54;
	configs[20]+=   54;
	configs[34]+=    6;
	return 0x6000000;
}

u64 FlipFunctionBBWhite643(TConfig* configs) {
	configs[ 3]-=   69;
	configs[10]-=   54;
	configs[12]-=   54;
	configs[20]-=   54;
	configs[22]-=   54;
	configs[32]-=   54;
	configs[34]-=    6;
	return 0xe000000;
}

u64 FlipFunctionBBBlack643(TConfig* configs) {
	configs[ 3]+=   69;
	configs[10]+=   54;
	configs[12]+=   54;
	configs[20]+=   54;
	configs[22]+=   54;
	configs[32]+=   54;
	configs[34]+=    6;
	return 0xe000000;
}

u64 FlipFunctionBBWhite644(TConfig* configs) {
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
	return 0x1e000000;
}

u64 FlipFunctionBBBlack644(TConfig* configs) {
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
	return 0x1e000000;
}

u64 FlipFunctionBBWhite645(TConfig* configs) {
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
	return 0x3e000000;
}

u64 FlipFunctionBBBlack645(TConfig* configs) {
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
	return 0x3e000000;
}

u64 FlipFunctionBBWhite646(TConfig* configs) {
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
	return 0x7e000000;
}

u64 FlipFunctionBBBlack646(TConfig* configs) {
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
	return 0x7e000000;
}

u64 FlipFunctionBBWhite647(TConfig* configs) {
	configs[11]-=   27;
	return 0x0;
}

u64 FlipFunctionBBBlack647(TConfig* configs) {
	configs[11]+=   27;
	return 0x0;
}

u64 FlipFunctionBBWhite648(TConfig* configs) {
	configs[ 4]-=    6;
	configs[11]-=  189;
	configs[20]-=  162;
	configs[35]-=    6;
	return 0x200000000;
}

u64 FlipFunctionBBBlack648(TConfig* configs) {
	configs[ 4]+=    6;
	configs[11]+=  189;
	configs[20]+=  162;
	configs[35]+=    6;
	return 0x200000000;
}

u64 FlipFunctionBBWhite649(TConfig* configs) {
	configs[ 2]-=   54;
	configs[11]-=   45;
	configs[22]-=   18;
	configs[31]-=   18;
	return 0x80000;
}

u64 FlipFunctionBBBlack649(TConfig* configs) {
	configs[ 2]+=   54;
	configs[11]+=   45;
	configs[22]+=   18;
	configs[31]+=   18;
	return 0x80000;
}

u64 FlipFunctionBBWhite650(TConfig* configs) {
	configs[ 2]-=   54;
	configs[ 4]-=    6;
	configs[11]-=  207;
	configs[20]-=  162;
	configs[22]-=   18;
	configs[31]-=   18;
	configs[35]-=    6;
	return 0x200080000;
}

u64 FlipFunctionBBBlack650(TConfig* configs) {
	configs[ 2]+=   54;
	configs[ 4]+=    6;
	configs[11]+=  207;
	configs[20]+=  162;
	configs[22]+=   18;
	configs[31]+=   18;
	configs[35]+=    6;
	return 0x200080000;
}

u64 FlipFunctionBBWhite651(TConfig* configs) {
	configs[ 1]-=  162;
	configs[ 2]-=   54;
	configs[11]-=   51;
	configs[22]-=   18;
	configs[23]-=    6;
	configs[29]-=    6;
	configs[31]-=   18;
	return 0x81000;
}

u64 FlipFunctionBBBlack651(TConfig* configs) {
	configs[ 1]+=  162;
	configs[ 2]+=   54;
	configs[11]+=   51;
	configs[22]+=   18;
	configs[23]+=    6;
	configs[29]+=    6;
	configs[31]+=   18;
	return 0x81000;
}

u64 FlipFunctionBBWhite652(TConfig* configs) {
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
	return 0x200081000;
}

u64 FlipFunctionBBBlack652(TConfig* configs) {
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
	return 0x200081000;
}

u64 FlipFunctionBBWhite653(TConfig* configs) {
	configs[21]-=   27;
	return 0x0;
}

u64 FlipFunctionBBBlack653(TConfig* configs) {
	configs[21]+=   27;
	return 0x0;
}

u64 FlipFunctionBBWhite654(TConfig* configs) {
	configs[ 4]-=   18;
	configs[12]-=  162;
	configs[21]-=  189;
	configs[34]-=   18;
	return 0x400000000;
}

u64 FlipFunctionBBBlack654(TConfig* configs) {
	configs[ 4]+=   18;
	configs[12]+=  162;
	configs[21]+=  189;
	configs[34]+=   18;
	return 0x400000000;
}

u64 FlipFunctionBBWhite655(TConfig* configs) {
	configs[ 4]-=   18;
	configs[ 5]-=   18;
	configs[12]-=  162;
	configs[13]-=  486;
	configs[21]-=  675;
	configs[34]-=   18;
	configs[35]-=   18;
	return 0x40400000000;
}

u64 FlipFunctionBBBlack655(TConfig* configs) {
	configs[ 4]+=   18;
	configs[ 5]+=   18;
	configs[12]+=  162;
	configs[13]+=  486;
	configs[21]+=  675;
	configs[34]+=   18;
	configs[35]+=   18;
	return 0x40400000000;
}

u64 FlipFunctionBBWhite656(TConfig* configs) {
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
	return 0x4040400000000;
}

u64 FlipFunctionBBBlack656(TConfig* configs) {
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
	return 0x4040400000000;
}

u64 FlipFunctionBBWhite657(TConfig* configs) {
	configs[ 2]-=   18;
	configs[10]-=   18;
	configs[21]-=   45;
	configs[32]-=   18;
	return 0x40000;
}

u64 FlipFunctionBBBlack657(TConfig* configs) {
	configs[ 2]+=   18;
	configs[10]+=   18;
	configs[21]+=   45;
	configs[32]+=   18;
	return 0x40000;
}

u64 FlipFunctionBBWhite658(TConfig* configs) {
	configs[ 2]-=   18;
	configs[ 4]-=   18;
	configs[10]-=   18;
	configs[12]-=  162;
	configs[21]-=  207;
	configs[32]-=   18;
	configs[34]-=   18;
	return 0x400040000;
}

u64 FlipFunctionBBBlack658(TConfig* configs) {
	configs[ 2]+=   18;
	configs[ 4]+=   18;
	configs[10]+=   18;
	configs[12]+=  162;
	configs[21]+=  207;
	configs[32]+=   18;
	configs[34]+=   18;
	return 0x400040000;
}

u64 FlipFunctionBBWhite659(TConfig* configs) {
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
	return 0x40400040000;
}

u64 FlipFunctionBBBlack659(TConfig* configs) {
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
	return 0x40400040000;
}

u64 FlipFunctionBBWhite660(TConfig* configs) {
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
	return 0x4040400040000;
}

u64 FlipFunctionBBBlack660(TConfig* configs) {
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
	return 0x4040400040000;
}

u64 FlipFunctionBBWhite661(TConfig* configs) {
	configs[ 1]-=   18;
	configs[ 2]-=   18;
	configs[ 9]-=    6;
	configs[10]-=   18;
	configs[21]-=   51;
	configs[31]-=    6;
	configs[32]-=   18;
	return 0x40400;
}

u64 FlipFunctionBBBlack661(TConfig* configs) {
	configs[ 1]+=   18;
	configs[ 2]+=   18;
	configs[ 9]+=    6;
	configs[10]+=   18;
	configs[21]+=   51;
	configs[31]+=    6;
	configs[32]+=   18;
	return 0x40400;
}

u64 FlipFunctionBBWhite662(TConfig* configs) {
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
	return 0x400040400;
}

u64 FlipFunctionBBBlack662(TConfig* configs) {
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
	return 0x400040400;
}

u64 FlipFunctionBBWhite663(TConfig* configs) {
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
	return 0x40400040400;
}

u64 FlipFunctionBBBlack663(TConfig* configs) {
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
	return 0x40400040400;
}

u64 FlipFunctionBBWhite664(TConfig* configs) {
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
	return 0x4040400040400;
}

u64 FlipFunctionBBBlack664(TConfig* configs) {
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
	return 0x4040400040400;
}

u64 FlipFunctionBBWhite665(TConfig* configs) {
	configs[33]-=    9;
	return 0x0;
}

u64 FlipFunctionBBBlack665(TConfig* configs) {
	configs[33]+=    9;
	return 0x0;
}

u64 FlipFunctionBBWhite666(TConfig* configs) {
	configs[ 4]-=   54;
	configs[13]-=  162;
	configs[22]-=  162;
	configs[33]-=   63;
	return 0x800000000;
}

u64 FlipFunctionBBBlack666(TConfig* configs) {
	configs[ 4]+=   54;
	configs[13]+=  162;
	configs[22]+=  162;
	configs[33]+=   63;
	return 0x800000000;
}

u64 FlipFunctionBBWhite667(TConfig* configs) {
	configs[ 4]-=   54;
	configs[ 5]-=  162;
	configs[13]-=  162;
	configs[15]-=   54;
	configs[22]-=  162;
	configs[23]-=  486;
	configs[33]-=  225;
	return 0x100800000000;
}

u64 FlipFunctionBBBlack667(TConfig* configs) {
	configs[ 4]+=   54;
	configs[ 5]+=  162;
	configs[13]+=  162;
	configs[15]+=   54;
	configs[22]+=  162;
	configs[23]+=  486;
	configs[33]+=  225;
	return 0x100800000000;
}

u64 FlipFunctionBBWhite668(TConfig* configs) {
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
	return 0x20100800000000;
}

u64 FlipFunctionBBBlack668(TConfig* configs) {
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
	return 0x20100800000000;
}

u64 FlipFunctionBBWhite669(TConfig* configs) {
	configs[ 2]-=    6;
	configs[ 9]-=   18;
	configs[20]-=   18;
	configs[33]-=   15;
	return 0x20000;
}

u64 FlipFunctionBBBlack669(TConfig* configs) {
	configs[ 2]+=    6;
	configs[ 9]+=   18;
	configs[20]+=   18;
	configs[33]+=   15;
	return 0x20000;
}

u64 FlipFunctionBBWhite670(TConfig* configs) {
	configs[ 2]-=    6;
	configs[ 4]-=   54;
	configs[ 9]-=   18;
	configs[13]-=  162;
	configs[20]-=   18;
	configs[22]-=  162;
	configs[33]-=   69;
	return 0x800020000;
}

u64 FlipFunctionBBBlack670(TConfig* configs) {
	configs[ 2]+=    6;
	configs[ 4]+=   54;
	configs[ 9]+=   18;
	configs[13]+=  162;
	configs[20]+=   18;
	configs[22]+=  162;
	configs[33]+=   69;
	return 0x800020000;
}

u64 FlipFunctionBBWhite671(TConfig* configs) {
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
	return 0x100800020000;
}

u64 FlipFunctionBBBlack671(TConfig* configs) {
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
	return 0x100800020000;
}

u64 FlipFunctionBBWhite672(TConfig* configs) {
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
	return 0x20100800020000;
}

u64 FlipFunctionBBBlack672(TConfig* configs) {
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
	return 0x20100800020000;
}

u64 FlipFunctionBBWhite673(TConfig* configs) {
	configs[ 3]-=   27;
	return 0x8000000;
}

u64 FlipFunctionBBBlack673(TConfig* configs) {
	configs[ 3]+=   27;
	return 0x8000000;
}

u64 FlipFunctionBBWhite674(TConfig* configs) {
	configs[ 3]-=  189;
	configs[13]-=   54;
	configs[23]-=   54;
	configs[31]-=   54;
	return 0x18000000;
}

u64 FlipFunctionBBBlack674(TConfig* configs) {
	configs[ 3]+=  189;
	configs[13]+=   54;
	configs[23]+=   54;
	configs[31]+=   54;
	return 0x18000000;
}

u64 FlipFunctionBBWhite675(TConfig* configs) {
	configs[ 3]-=  675;
	configs[13]-=   54;
	configs[14]-=   18;
	configs[23]-=   54;
	configs[24]-=   54;
	configs[30]-=   54;
	configs[31]-=   54;
	return 0x38000000;
}

u64 FlipFunctionBBBlack675(TConfig* configs) {
	configs[ 3]+=  675;
	configs[13]+=   54;
	configs[14]+=   18;
	configs[23]+=   54;
	configs[24]+=   54;
	configs[30]+=   54;
	configs[31]+=   54;
	return 0x38000000;
}

u64 FlipFunctionBBWhite676(TConfig* configs) {
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
	return 0x78000000;
}

u64 FlipFunctionBBBlack676(TConfig* configs) {
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
	return 0x78000000;
}

u64 FlipFunctionBBWhite677(TConfig* configs) {
	configs[ 3]-=   45;
	configs[11]-=   54;
	configs[21]-=   54;
	configs[33]-=   18;
	return 0xc000000;
}

u64 FlipFunctionBBBlack677(TConfig* configs) {
	configs[ 3]+=   45;
	configs[11]+=   54;
	configs[21]+=   54;
	configs[33]+=   18;
	return 0xc000000;
}

u64 FlipFunctionBBWhite678(TConfig* configs) {
	configs[ 3]-=  207;
	configs[11]-=   54;
	configs[13]-=   54;
	configs[21]-=   54;
	configs[23]-=   54;
	configs[31]-=   54;
	configs[33]-=   18;
	return 0x1c000000;
}

u64 FlipFunctionBBBlack678(TConfig* configs) {
	configs[ 3]+=  207;
	configs[11]+=   54;
	configs[13]+=   54;
	configs[21]+=   54;
	configs[23]+=   54;
	configs[31]+=   54;
	configs[33]+=   18;
	return 0x1c000000;
}

u64 FlipFunctionBBWhite679(TConfig* configs) {
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
	return 0x3c000000;
}

u64 FlipFunctionBBBlack679(TConfig* configs) {
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
	return 0x3c000000;
}

u64 FlipFunctionBBWhite680(TConfig* configs) {
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
	return 0x7c000000;
}

u64 FlipFunctionBBBlack680(TConfig* configs) {
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
	return 0x7c000000;
}

u64 FlipFunctionBBWhite681(TConfig* configs) {
	configs[ 3]-=   51;
	configs[10]-=   54;
	configs[11]-=   54;
	configs[20]-=   54;
	configs[21]-=   54;
	configs[33]-=   18;
	configs[34]-=    6;
	return 0xe000000;
}

u64 FlipFunctionBBBlack681(TConfig* configs) {
	configs[ 3]+=   51;
	configs[10]+=   54;
	configs[11]+=   54;
	configs[20]+=   54;
	configs[21]+=   54;
	configs[33]+=   18;
	configs[34]+=    6;
	return 0xe000000;
}

u64 FlipFunctionBBWhite682(TConfig* configs) {
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
	return 0x1e000000;
}

u64 FlipFunctionBBBlack682(TConfig* configs) {
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
	return 0x1e000000;
}

u64 FlipFunctionBBWhite683(TConfig* configs) {
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
	return 0x3e000000;
}

u64 FlipFunctionBBBlack683(TConfig* configs) {
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
	return 0x3e000000;
}

u64 FlipFunctionBBWhite684(TConfig* configs) {
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
	return 0x7e000000;
}

u64 FlipFunctionBBBlack684(TConfig* configs) {
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
	return 0x7e000000;
}

u64 FlipFunctionBBWhite685(TConfig* configs) {
	configs[12]-=   27;
	return 0x0;
}

u64 FlipFunctionBBBlack685(TConfig* configs) {
	configs[12]+=   27;
	return 0x0;
}

u64 FlipFunctionBBWhite686(TConfig* configs) {
	configs[ 4]-=   18;
	configs[12]-=  189;
	configs[21]-=  162;
	configs[34]-=   18;
	return 0x400000000;
}

u64 FlipFunctionBBBlack686(TConfig* configs) {
	configs[ 4]+=   18;
	configs[12]+=  189;
	configs[21]+=  162;
	configs[34]+=   18;
	return 0x400000000;
}

u64 FlipFunctionBBWhite687(TConfig* configs) {
	configs[ 4]-=   18;
	configs[ 5]-=    6;
	configs[12]-=  675;
	configs[20]-=  486;
	configs[21]-=  162;
	configs[34]-=   18;
	configs[36]-=    6;
	return 0x20400000000;
}

u64 FlipFunctionBBBlack687(TConfig* configs) {
	configs[ 4]+=   18;
	configs[ 5]+=    6;
	configs[12]+=  675;
	configs[20]+=  486;
	configs[21]+=  162;
	configs[34]+=   18;
	configs[36]+=    6;
	return 0x20400000000;
}

u64 FlipFunctionBBWhite688(TConfig* configs) {
	configs[ 2]-=  162;
	configs[12]-=   45;
	configs[23]-=   18;
	configs[30]-=   18;
	return 0x100000;
}

u64 FlipFunctionBBBlack688(TConfig* configs) {
	configs[ 2]+=  162;
	configs[12]+=   45;
	configs[23]+=   18;
	configs[30]+=   18;
	return 0x100000;
}

u64 FlipFunctionBBWhite689(TConfig* configs) {
	configs[ 2]-=  162;
	configs[ 4]-=   18;
	configs[12]-=  207;
	configs[21]-=  162;
	configs[23]-=   18;
	configs[30]-=   18;
	configs[34]-=   18;
	return 0x400100000;
}

u64 FlipFunctionBBBlack689(TConfig* configs) {
	configs[ 2]+=  162;
	configs[ 4]+=   18;
	configs[12]+=  207;
	configs[21]+=  162;
	configs[23]+=   18;
	configs[30]+=   18;
	configs[34]+=   18;
	return 0x400100000;
}

u64 FlipFunctionBBWhite690(TConfig* configs) {
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
	return 0x20400100000;
}

u64 FlipFunctionBBBlack690(TConfig* configs) {
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
	return 0x20400100000;
}

u64 FlipFunctionBBWhite691(TConfig* configs) {
	configs[ 1]-=  486;
	configs[ 2]-=  162;
	configs[12]-=   51;
	configs[23]-=   18;
	configs[24]-=    6;
	configs[28]-=    6;
	configs[30]-=   18;
	return 0x102000;
}

u64 FlipFunctionBBBlack691(TConfig* configs) {
	configs[ 1]+=  486;
	configs[ 2]+=  162;
	configs[12]+=   51;
	configs[23]+=   18;
	configs[24]+=    6;
	configs[28]+=    6;
	configs[30]+=   18;
	return 0x102000;
}

u64 FlipFunctionBBWhite692(TConfig* configs) {
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
	return 0x400102000;
}

u64 FlipFunctionBBBlack692(TConfig* configs) {
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
	return 0x400102000;
}

u64 FlipFunctionBBWhite693(TConfig* configs) {
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
	return 0x20400102000;
}

u64 FlipFunctionBBBlack693(TConfig* configs) {
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
	return 0x20400102000;
}

u64 FlipFunctionBBWhite694(TConfig* configs) {
	configs[22]-=   27;
	return 0x0;
}

u64 FlipFunctionBBBlack694(TConfig* configs) {
	configs[22]+=   27;
	return 0x0;
}

u64 FlipFunctionBBWhite695(TConfig* configs) {
	configs[ 4]-=   54;
	configs[13]-=  162;
	configs[22]-=  189;
	configs[33]-=   54;
	return 0x800000000;
}

u64 FlipFunctionBBBlack695(TConfig* configs) {
	configs[ 4]+=   54;
	configs[13]+=  162;
	configs[22]+=  189;
	configs[33]+=   54;
	return 0x800000000;
}

u64 FlipFunctionBBWhite696(TConfig* configs) {
	configs[ 4]-=   54;
	configs[ 5]-=   54;
	configs[13]-=  162;
	configs[14]-=  162;
	configs[22]-=  675;
	configs[33]-=   54;
	configs[34]-=   54;
	return 0x80800000000;
}

u64 FlipFunctionBBBlack696(TConfig* configs) {
	configs[ 4]+=   54;
	configs[ 5]+=   54;
	configs[13]+=  162;
	configs[14]+=  162;
	configs[22]+=  675;
	configs[33]+=   54;
	configs[34]+=   54;
	return 0x80800000000;
}

u64 FlipFunctionBBWhite697(TConfig* configs) {
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
	return 0x8080800000000;
}

u64 FlipFunctionBBBlack697(TConfig* configs) {
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
	return 0x8080800000000;
}

u64 FlipFunctionBBWhite698(TConfig* configs) {
	configs[ 2]-=   54;
	configs[11]-=   18;
	configs[22]-=   45;
	configs[31]-=   18;
	return 0x80000;
}

u64 FlipFunctionBBBlack698(TConfig* configs) {
	configs[ 2]+=   54;
	configs[11]+=   18;
	configs[22]+=   45;
	configs[31]+=   18;
	return 0x80000;
}

u64 FlipFunctionBBWhite699(TConfig* configs) {
	configs[ 2]-=   54;
	configs[ 4]-=   54;
	configs[11]-=   18;
	configs[13]-=  162;
	configs[22]-=  207;
	configs[31]-=   18;
	configs[33]-=   54;
	return 0x800080000;
}

u64 FlipFunctionBBBlack699(TConfig* configs) {
	configs[ 2]+=   54;
	configs[ 4]+=   54;
	configs[11]+=   18;
	configs[13]+=  162;
	configs[22]+=  207;
	configs[31]+=   18;
	configs[33]+=   54;
	return 0x800080000;
}

u64 FlipFunctionBBWhite700(TConfig* configs) {
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
	return 0x80800080000;
}

u64 FlipFunctionBBBlack700(TConfig* configs) {
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
	return 0x80800080000;
}

u64 FlipFunctionBBWhite701(TConfig* configs) {
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
	return 0x8080800080000;
}

u64 FlipFunctionBBBlack701(TConfig* configs) {
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
	return 0x8080800080000;
}

u64 FlipFunctionBBWhite702(TConfig* configs) {
	configs[ 1]-=   54;
	configs[ 2]-=   54;
	configs[10]-=    6;
	configs[11]-=   18;
	configs[22]-=   51;
	configs[30]-=    6;
	configs[31]-=   18;
	return 0x80800;
}

u64 FlipFunctionBBBlack702(TConfig* configs) {
	configs[ 1]+=   54;
	configs[ 2]+=   54;
	configs[10]+=    6;
	configs[11]+=   18;
	configs[22]+=   51;
	configs[30]+=    6;
	configs[31]+=   18;
	return 0x80800;
}

u64 FlipFunctionBBWhite703(TConfig* configs) {
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
	return 0x800080800;
}

u64 FlipFunctionBBBlack703(TConfig* configs) {
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
	return 0x800080800;
}

u64 FlipFunctionBBWhite704(TConfig* configs) {
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
	return 0x80800080800;
}

u64 FlipFunctionBBBlack704(TConfig* configs) {
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
	return 0x80800080800;
}

u64 FlipFunctionBBWhite705(TConfig* configs) {
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
	return 0x8080800080800;
}

u64 FlipFunctionBBBlack705(TConfig* configs) {
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
	return 0x8080800080800;
}

u64 FlipFunctionBBWhite706(TConfig* configs) {
	configs[32]-=   27;
	return 0x0;
}

u64 FlipFunctionBBBlack706(TConfig* configs) {
	configs[32]+=   27;
	return 0x0;
}

u64 FlipFunctionBBWhite707(TConfig* configs) {
	configs[ 4]-=  162;
	configs[14]-=   54;
	configs[23]-=  162;
	configs[32]-=  189;
	return 0x1000000000;
}

u64 FlipFunctionBBBlack707(TConfig* configs) {
	configs[ 4]+=  162;
	configs[14]+=   54;
	configs[23]+=  162;
	configs[32]+=  189;
	return 0x1000000000;
}

u64 FlipFunctionBBWhite708(TConfig* configs) {
	configs[ 4]-=  162;
	configs[ 5]-=  486;
	configs[14]-=   54;
	configs[16]-=   18;
	configs[23]-=  162;
	configs[24]-=  486;
	configs[32]-=  675;
	return 0x201000000000;
}

u64 FlipFunctionBBBlack708(TConfig* configs) {
	configs[ 4]+=  162;
	configs[ 5]+=  486;
	configs[14]+=   54;
	configs[16]+=   18;
	configs[23]+=  162;
	configs[24]+=  486;
	configs[32]+=  675;
	return 0x201000000000;
}

u64 FlipFunctionBBWhite709(TConfig* configs) {
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
	return 0x40201000000000;
}

u64 FlipFunctionBBBlack709(TConfig* configs) {
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
	return 0x40201000000000;
}

u64 FlipFunctionBBWhite710(TConfig* configs) {
	configs[ 2]-=   18;
	configs[10]-=   18;
	configs[21]-=   18;
	configs[32]-=   45;
	return 0x40000;
}

u64 FlipFunctionBBBlack710(TConfig* configs) {
	configs[ 2]+=   18;
	configs[10]+=   18;
	configs[21]+=   18;
	configs[32]+=   45;
	return 0x40000;
}

u64 FlipFunctionBBWhite711(TConfig* configs) {
	configs[ 2]-=   18;
	configs[ 4]-=  162;
	configs[10]-=   18;
	configs[14]-=   54;
	configs[21]-=   18;
	configs[23]-=  162;
	configs[32]-=  207;
	return 0x1000040000;
}

u64 FlipFunctionBBBlack711(TConfig* configs) {
	configs[ 2]+=   18;
	configs[ 4]+=  162;
	configs[10]+=   18;
	configs[14]+=   54;
	configs[21]+=   18;
	configs[23]+=  162;
	configs[32]+=  207;
	return 0x1000040000;
}

u64 FlipFunctionBBWhite712(TConfig* configs) {
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
	return 0x201000040000;
}

u64 FlipFunctionBBBlack712(TConfig* configs) {
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
	return 0x201000040000;
}

u64 FlipFunctionBBWhite713(TConfig* configs) {
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
	return 0x40201000040000;
}

u64 FlipFunctionBBBlack713(TConfig* configs) {
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
	return 0x40201000040000;
}

u64 FlipFunctionBBWhite714(TConfig* configs) {
	configs[ 1]-=    6;
	configs[ 2]-=   18;
	configs[ 8]-=    6;
	configs[10]-=   18;
	configs[20]-=    6;
	configs[21]-=   18;
	configs[32]-=   51;
	return 0x40200;
}

u64 FlipFunctionBBBlack714(TConfig* configs) {
	configs[ 1]+=    6;
	configs[ 2]+=   18;
	configs[ 8]+=    6;
	configs[10]+=   18;
	configs[20]+=    6;
	configs[21]+=   18;
	configs[32]+=   51;
	return 0x40200;
}

u64 FlipFunctionBBWhite715(TConfig* configs) {
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
	return 0x1000040200;
}

u64 FlipFunctionBBBlack715(TConfig* configs) {
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
	return 0x1000040200;
}

u64 FlipFunctionBBWhite716(TConfig* configs) {
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
	return 0x201000040200;
}

u64 FlipFunctionBBBlack716(TConfig* configs) {
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
	return 0x201000040200;
}

u64 FlipFunctionBBWhite717(TConfig* configs) {
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
	return 0x40201000040200;
}

u64 FlipFunctionBBBlack717(TConfig* configs) {
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
	return 0x40201000040200;
}

u64 FlipFunctionBBWhite718(TConfig* configs) {
	configs[ 3]-=   81;
	return 0x10000000;
}

u64 FlipFunctionBBBlack718(TConfig* configs) {
	configs[ 3]+=   81;
	return 0x10000000;
}

u64 FlipFunctionBBWhite719(TConfig* configs) {
	configs[ 3]-=  567;
	configs[14]-=   18;
	configs[24]-=   54;
	configs[30]-=   54;
	return 0x30000000;
}

u64 FlipFunctionBBBlack719(TConfig* configs) {
	configs[ 3]+=  567;
	configs[14]+=   18;
	configs[24]+=   54;
	configs[30]+=   54;
	return 0x30000000;
}

u64 FlipFunctionBBWhite720(TConfig* configs) {
	configs[ 3]-= 2025;
	configs[14]-=   18;
	configs[15]-=    6;
	configs[24]-=   54;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[30]-=   54;
	return 0x70000000;
}

u64 FlipFunctionBBBlack720(TConfig* configs) {
	configs[ 3]+= 2025;
	configs[14]+=   18;
	configs[15]+=    6;
	configs[24]+=   54;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[30]+=   54;
	return 0x70000000;
}

u64 FlipFunctionBBWhite721(TConfig* configs) {
	configs[ 3]-=  135;
	configs[12]-=   54;
	configs[22]-=   54;
	configs[32]-=   54;
	return 0x18000000;
}

u64 FlipFunctionBBBlack721(TConfig* configs) {
	configs[ 3]+=  135;
	configs[12]+=   54;
	configs[22]+=   54;
	configs[32]+=   54;
	return 0x18000000;
}

u64 FlipFunctionBBWhite722(TConfig* configs) {
	configs[ 3]-=  621;
	configs[12]-=   54;
	configs[14]-=   18;
	configs[22]-=   54;
	configs[24]-=   54;
	configs[30]-=   54;
	configs[32]-=   54;
	return 0x38000000;
}

u64 FlipFunctionBBBlack722(TConfig* configs) {
	configs[ 3]+=  621;
	configs[12]+=   54;
	configs[14]+=   18;
	configs[22]+=   54;
	configs[24]+=   54;
	configs[30]+=   54;
	configs[32]+=   54;
	return 0x38000000;
}

u64 FlipFunctionBBWhite723(TConfig* configs) {
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
	return 0x78000000;
}

u64 FlipFunctionBBBlack723(TConfig* configs) {
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
	return 0x78000000;
}

u64 FlipFunctionBBWhite724(TConfig* configs) {
	configs[ 3]-=  153;
	configs[11]-=   54;
	configs[12]-=   54;
	configs[21]-=   54;
	configs[22]-=   54;
	configs[32]-=   54;
	configs[33]-=   18;
	return 0x1c000000;
}

u64 FlipFunctionBBBlack724(TConfig* configs) {
	configs[ 3]+=  153;
	configs[11]+=   54;
	configs[12]+=   54;
	configs[21]+=   54;
	configs[22]+=   54;
	configs[32]+=   54;
	configs[33]+=   18;
	return 0x1c000000;
}

u64 FlipFunctionBBWhite725(TConfig* configs) {
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
	return 0x3c000000;
}

u64 FlipFunctionBBBlack725(TConfig* configs) {
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
	return 0x3c000000;
}

u64 FlipFunctionBBWhite726(TConfig* configs) {
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
	return 0x7c000000;
}

u64 FlipFunctionBBBlack726(TConfig* configs) {
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
	return 0x7c000000;
}

u64 FlipFunctionBBWhite727(TConfig* configs) {
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
	return 0x1e000000;
}

u64 FlipFunctionBBBlack727(TConfig* configs) {
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
	return 0x1e000000;
}

u64 FlipFunctionBBWhite728(TConfig* configs) {
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
	return 0x3e000000;
}

u64 FlipFunctionBBBlack728(TConfig* configs) {
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
	return 0x3e000000;
}

u64 FlipFunctionBBWhite729(TConfig* configs) {
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
	return 0x7e000000;
}

u64 FlipFunctionBBBlack729(TConfig* configs) {
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
	return 0x7e000000;
}

u64 FlipFunctionBBWhite730(TConfig* configs) {
	configs[13]-=   27;
	return 0x0;
}

u64 FlipFunctionBBBlack730(TConfig* configs) {
	configs[13]+=   27;
	return 0x0;
}

u64 FlipFunctionBBWhite731(TConfig* configs) {
	configs[ 4]-=   54;
	configs[13]-=  189;
	configs[22]-=  162;
	configs[33]-=   54;
	return 0x800000000;
}

u64 FlipFunctionBBBlack731(TConfig* configs) {
	configs[ 4]+=   54;
	configs[13]+=  189;
	configs[22]+=  162;
	configs[33]+=   54;
	return 0x800000000;
}

u64 FlipFunctionBBWhite732(TConfig* configs) {
	configs[ 4]-=   54;
	configs[ 5]-=   18;
	configs[13]-=  675;
	configs[21]-=  486;
	configs[22]-=  162;
	configs[33]-=   54;
	configs[35]-=   18;
	return 0x40800000000;
}

u64 FlipFunctionBBBlack732(TConfig* configs) {
	configs[ 4]+=   54;
	configs[ 5]+=   18;
	configs[13]+=  675;
	configs[21]+=  486;
	configs[22]+=  162;
	configs[33]+=   54;
	configs[35]+=   18;
	return 0x40800000000;
}

u64 FlipFunctionBBWhite733(TConfig* configs) {
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
	return 0x2040800000000;
}

u64 FlipFunctionBBBlack733(TConfig* configs) {
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
	return 0x2040800000000;
}

u64 FlipFunctionBBWhite734(TConfig* configs) {
	configs[ 2]-=  486;
	configs[13]-=   45;
	configs[24]-=   18;
	configs[29]-=   18;
	return 0x200000;
}

u64 FlipFunctionBBBlack734(TConfig* configs) {
	configs[ 2]+=  486;
	configs[13]+=   45;
	configs[24]+=   18;
	configs[29]+=   18;
	return 0x200000;
}

u64 FlipFunctionBBWhite735(TConfig* configs) {
	configs[ 2]-=  486;
	configs[ 4]-=   54;
	configs[13]-=  207;
	configs[22]-=  162;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[33]-=   54;
	return 0x800200000;
}

u64 FlipFunctionBBBlack735(TConfig* configs) {
	configs[ 2]+=  486;
	configs[ 4]+=   54;
	configs[13]+=  207;
	configs[22]+=  162;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[33]+=   54;
	return 0x800200000;
}

u64 FlipFunctionBBWhite736(TConfig* configs) {
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
	return 0x40800200000;
}

u64 FlipFunctionBBBlack736(TConfig* configs) {
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
	return 0x40800200000;
}

u64 FlipFunctionBBWhite737(TConfig* configs) {
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
	return 0x2040800200000;
}

u64 FlipFunctionBBBlack737(TConfig* configs) {
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
	return 0x2040800200000;
}

u64 FlipFunctionBBWhite738(TConfig* configs) {
	configs[ 1]-= 1458;
	configs[ 2]-=  486;
	configs[13]-=   51;
	configs[24]-=   18;
	configs[25]-=    6;
	configs[27]-=    6;
	configs[29]-=   18;
	return 0x204000;
}

u64 FlipFunctionBBBlack738(TConfig* configs) {
	configs[ 1]+= 1458;
	configs[ 2]+=  486;
	configs[13]+=   51;
	configs[24]+=   18;
	configs[25]+=    6;
	configs[27]+=    6;
	configs[29]+=   18;
	return 0x204000;
}

u64 FlipFunctionBBWhite739(TConfig* configs) {
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
	return 0x800204000;
}

u64 FlipFunctionBBBlack739(TConfig* configs) {
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
	return 0x800204000;
}

u64 FlipFunctionBBWhite740(TConfig* configs) {
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
	return 0x40800204000;
}

u64 FlipFunctionBBBlack740(TConfig* configs) {
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
	return 0x40800204000;
}

u64 FlipFunctionBBWhite741(TConfig* configs) {
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
	return 0x2040800204000;
}

u64 FlipFunctionBBBlack741(TConfig* configs) {
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
	return 0x2040800204000;
}

u64 FlipFunctionBBWhite742(TConfig* configs) {
	configs[23]-=   27;
	return 0x0;
}

u64 FlipFunctionBBBlack742(TConfig* configs) {
	configs[23]+=   27;
	return 0x0;
}

u64 FlipFunctionBBWhite743(TConfig* configs) {
	configs[ 4]-=  162;
	configs[14]-=   54;
	configs[23]-=  189;
	configs[32]-=  162;
	return 0x1000000000;
}

u64 FlipFunctionBBBlack743(TConfig* configs) {
	configs[ 4]+=  162;
	configs[14]+=   54;
	configs[23]+=  189;
	configs[32]+=  162;
	return 0x1000000000;
}

u64 FlipFunctionBBWhite744(TConfig* configs) {
	configs[ 4]-=  162;
	configs[ 5]-=  162;
	configs[14]-=   54;
	configs[15]-=   54;
	configs[23]-=  675;
	configs[32]-=  162;
	configs[33]-=  162;
	return 0x101000000000;
}

u64 FlipFunctionBBBlack744(TConfig* configs) {
	configs[ 4]+=  162;
	configs[ 5]+=  162;
	configs[14]+=   54;
	configs[15]+=   54;
	configs[23]+=  675;
	configs[32]+=  162;
	configs[33]+=  162;
	return 0x101000000000;
}

u64 FlipFunctionBBWhite745(TConfig* configs) {
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
	return 0x10101000000000;
}

u64 FlipFunctionBBBlack745(TConfig* configs) {
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
	return 0x10101000000000;
}

u64 FlipFunctionBBWhite746(TConfig* configs) {
	configs[ 2]-=  162;
	configs[12]-=   18;
	configs[23]-=   45;
	configs[30]-=   18;
	return 0x100000;
}

u64 FlipFunctionBBBlack746(TConfig* configs) {
	configs[ 2]+=  162;
	configs[12]+=   18;
	configs[23]+=   45;
	configs[30]+=   18;
	return 0x100000;
}

u64 FlipFunctionBBWhite747(TConfig* configs) {
	configs[ 2]-=  162;
	configs[ 4]-=  162;
	configs[12]-=   18;
	configs[14]-=   54;
	configs[23]-=  207;
	configs[30]-=   18;
	configs[32]-=  162;
	return 0x1000100000;
}

u64 FlipFunctionBBBlack747(TConfig* configs) {
	configs[ 2]+=  162;
	configs[ 4]+=  162;
	configs[12]+=   18;
	configs[14]+=   54;
	configs[23]+=  207;
	configs[30]+=   18;
	configs[32]+=  162;
	return 0x1000100000;
}

u64 FlipFunctionBBWhite748(TConfig* configs) {
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
	return 0x101000100000;
}

u64 FlipFunctionBBBlack748(TConfig* configs) {
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
	return 0x101000100000;
}

u64 FlipFunctionBBWhite749(TConfig* configs) {
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
	return 0x10101000100000;
}

u64 FlipFunctionBBBlack749(TConfig* configs) {
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
	return 0x10101000100000;
}

u64 FlipFunctionBBWhite750(TConfig* configs) {
	configs[ 1]-=  162;
	configs[ 2]-=  162;
	configs[11]-=    6;
	configs[12]-=   18;
	configs[23]-=   51;
	configs[29]-=    6;
	configs[30]-=   18;
	return 0x101000;
}

u64 FlipFunctionBBBlack750(TConfig* configs) {
	configs[ 1]+=  162;
	configs[ 2]+=  162;
	configs[11]+=    6;
	configs[12]+=   18;
	configs[23]+=   51;
	configs[29]+=    6;
	configs[30]+=   18;
	return 0x101000;
}

u64 FlipFunctionBBWhite751(TConfig* configs) {
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
	return 0x1000101000;
}

u64 FlipFunctionBBBlack751(TConfig* configs) {
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
	return 0x1000101000;
}

u64 FlipFunctionBBWhite752(TConfig* configs) {
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
	return 0x101000101000;
}

u64 FlipFunctionBBBlack752(TConfig* configs) {
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
	return 0x101000101000;
}

u64 FlipFunctionBBWhite753(TConfig* configs) {
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
	return 0x10101000101000;
}

u64 FlipFunctionBBBlack753(TConfig* configs) {
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
	return 0x10101000101000;
}

u64 FlipFunctionBBWhite754(TConfig* configs) {
	configs[31]-=   27;
	return 0x0;
}

u64 FlipFunctionBBBlack754(TConfig* configs) {
	configs[31]+=   27;
	return 0x0;
}

u64 FlipFunctionBBWhite755(TConfig* configs) {
	configs[ 4]-=  486;
	configs[15]-=   18;
	configs[24]-=  162;
	configs[31]-=  189;
	return 0x2000000000;
}

u64 FlipFunctionBBBlack755(TConfig* configs) {
	configs[ 4]+=  486;
	configs[15]+=   18;
	configs[24]+=  162;
	configs[31]+=  189;
	return 0x2000000000;
}

u64 FlipFunctionBBWhite756(TConfig* configs) {
	configs[ 4]-=  486;
	configs[ 5]-= 1458;
	configs[15]-=   18;
	configs[17]-=    6;
	configs[24]-=  162;
	configs[25]-=  486;
	configs[31]-=  675;
	return 0x402000000000;
}

u64 FlipFunctionBBBlack756(TConfig* configs) {
	configs[ 4]+=  486;
	configs[ 5]+= 1458;
	configs[15]+=   18;
	configs[17]+=    6;
	configs[24]+=  162;
	configs[25]+=  486;
	configs[31]+=  675;
	return 0x402000000000;
}

u64 FlipFunctionBBWhite757(TConfig* configs) {
	configs[ 2]-=   54;
	configs[11]-=   18;
	configs[22]-=   18;
	configs[31]-=   45;
	return 0x80000;
}

u64 FlipFunctionBBBlack757(TConfig* configs) {
	configs[ 2]+=   54;
	configs[11]+=   18;
	configs[22]+=   18;
	configs[31]+=   45;
	return 0x80000;
}

u64 FlipFunctionBBWhite758(TConfig* configs) {
	configs[ 2]-=   54;
	configs[ 4]-=  486;
	configs[11]-=   18;
	configs[15]-=   18;
	configs[22]-=   18;
	configs[24]-=  162;
	configs[31]-=  207;
	return 0x2000080000;
}

u64 FlipFunctionBBBlack758(TConfig* configs) {
	configs[ 2]+=   54;
	configs[ 4]+=  486;
	configs[11]+=   18;
	configs[15]+=   18;
	configs[22]+=   18;
	configs[24]+=  162;
	configs[31]+=  207;
	return 0x2000080000;
}

u64 FlipFunctionBBWhite759(TConfig* configs) {
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
	return 0x402000080000;
}

u64 FlipFunctionBBBlack759(TConfig* configs) {
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
	return 0x402000080000;
}

u64 FlipFunctionBBWhite760(TConfig* configs) {
	configs[ 1]-=   18;
	configs[ 2]-=   54;
	configs[ 9]-=    6;
	configs[11]-=   18;
	configs[21]-=    6;
	configs[22]-=   18;
	configs[31]-=   51;
	return 0x80400;
}

u64 FlipFunctionBBBlack760(TConfig* configs) {
	configs[ 1]+=   18;
	configs[ 2]+=   54;
	configs[ 9]+=    6;
	configs[11]+=   18;
	configs[21]+=    6;
	configs[22]+=   18;
	configs[31]+=   51;
	return 0x80400;
}

u64 FlipFunctionBBWhite761(TConfig* configs) {
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
	return 0x2000080400;
}

u64 FlipFunctionBBBlack761(TConfig* configs) {
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
	return 0x2000080400;
}

u64 FlipFunctionBBWhite762(TConfig* configs) {
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
	return 0x402000080400;
}

u64 FlipFunctionBBBlack762(TConfig* configs) {
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
	return 0x402000080400;
}

u64 FlipFunctionBBWhite763(TConfig* configs) {
	configs[ 3]-=  243;
	return 0x20000000;
}

u64 FlipFunctionBBBlack763(TConfig* configs) {
	configs[ 3]+=  243;
	return 0x20000000;
}

u64 FlipFunctionBBWhite764(TConfig* configs) {
	configs[ 3]-= 1701;
	configs[15]-=    6;
	configs[25]-=   54;
	configs[29]-=   54;
	return 0x60000000;
}

u64 FlipFunctionBBBlack764(TConfig* configs) {
	configs[ 3]+= 1701;
	configs[15]+=    6;
	configs[25]+=   54;
	configs[29]+=   54;
	return 0x60000000;
}

u64 FlipFunctionBBWhite765(TConfig* configs) {
	configs[ 3]-=  405;
	configs[13]-=   54;
	configs[23]-=   54;
	configs[31]-=   54;
	return 0x30000000;
}

u64 FlipFunctionBBBlack765(TConfig* configs) {
	configs[ 3]+=  405;
	configs[13]+=   54;
	configs[23]+=   54;
	configs[31]+=   54;
	return 0x30000000;
}

u64 FlipFunctionBBWhite766(TConfig* configs) {
	configs[ 3]-= 1863;
	configs[13]-=   54;
	configs[15]-=    6;
	configs[23]-=   54;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[31]-=   54;
	return 0x70000000;
}

u64 FlipFunctionBBBlack766(TConfig* configs) {
	configs[ 3]+= 1863;
	configs[13]+=   54;
	configs[15]+=    6;
	configs[23]+=   54;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[31]+=   54;
	return 0x70000000;
}

u64 FlipFunctionBBWhite767(TConfig* configs) {
	configs[ 3]-=  459;
	configs[12]-=   54;
	configs[13]-=   54;
	configs[22]-=   54;
	configs[23]-=   54;
	configs[31]-=   54;
	configs[32]-=   54;
	return 0x38000000;
}

u64 FlipFunctionBBBlack767(TConfig* configs) {
	configs[ 3]+=  459;
	configs[12]+=   54;
	configs[13]+=   54;
	configs[22]+=   54;
	configs[23]+=   54;
	configs[31]+=   54;
	configs[32]+=   54;
	return 0x38000000;
}

u64 FlipFunctionBBWhite768(TConfig* configs) {
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
	return 0x78000000;
}

u64 FlipFunctionBBBlack768(TConfig* configs) {
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
	return 0x78000000;
}

u64 FlipFunctionBBWhite769(TConfig* configs) {
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
	return 0x3c000000;
}

u64 FlipFunctionBBBlack769(TConfig* configs) {
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
	return 0x3c000000;
}

u64 FlipFunctionBBWhite770(TConfig* configs) {
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
	return 0x7c000000;
}

u64 FlipFunctionBBBlack770(TConfig* configs) {
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
	return 0x7c000000;
}

u64 FlipFunctionBBWhite771(TConfig* configs) {
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
	return 0x3e000000;
}

u64 FlipFunctionBBBlack771(TConfig* configs) {
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
	return 0x3e000000;
}

u64 FlipFunctionBBWhite772(TConfig* configs) {
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
	return 0x7e000000;
}

u64 FlipFunctionBBBlack772(TConfig* configs) {
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
	return 0x7e000000;
}

u64 FlipFunctionBBWhite773(TConfig* configs) {
	configs[14]-=    9;
	return 0x0;
}

u64 FlipFunctionBBBlack773(TConfig* configs) {
	configs[14]+=    9;
	return 0x0;
}

u64 FlipFunctionBBWhite774(TConfig* configs) {
	configs[ 4]-=  162;
	configs[14]-=   63;
	configs[23]-=  162;
	configs[32]-=  162;
	return 0x1000000000;
}

u64 FlipFunctionBBBlack774(TConfig* configs) {
	configs[ 4]+=  162;
	configs[14]+=   63;
	configs[23]+=  162;
	configs[32]+=  162;
	return 0x1000000000;
}

u64 FlipFunctionBBWhite775(TConfig* configs) {
	configs[ 4]-=  162;
	configs[ 5]-=   54;
	configs[14]-=  225;
	configs[22]-=  486;
	configs[23]-=  162;
	configs[32]-=  162;
	configs[34]-=   54;
	return 0x81000000000;
}

u64 FlipFunctionBBBlack775(TConfig* configs) {
	configs[ 4]+=  162;
	configs[ 5]+=   54;
	configs[14]+=  225;
	configs[22]+=  486;
	configs[23]+=  162;
	configs[32]+=  162;
	configs[34]+=   54;
	return 0x81000000000;
}

u64 FlipFunctionBBWhite776(TConfig* configs) {
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
	return 0x4081000000000;
}

u64 FlipFunctionBBBlack776(TConfig* configs) {
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
	return 0x4081000000000;
}

u64 FlipFunctionBBWhite777(TConfig* configs) {
	configs[ 2]-= 1458;
	configs[14]-=   15;
	configs[25]-=   18;
	configs[28]-=   18;
	return 0x400000;
}

u64 FlipFunctionBBBlack777(TConfig* configs) {
	configs[ 2]+= 1458;
	configs[14]+=   15;
	configs[25]+=   18;
	configs[28]+=   18;
	return 0x400000;
}

u64 FlipFunctionBBWhite778(TConfig* configs) {
	configs[ 2]-= 1458;
	configs[ 4]-=  162;
	configs[14]-=   69;
	configs[23]-=  162;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[32]-=  162;
	return 0x1000400000;
}

u64 FlipFunctionBBBlack778(TConfig* configs) {
	configs[ 2]+= 1458;
	configs[ 4]+=  162;
	configs[14]+=   69;
	configs[23]+=  162;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[32]+=  162;
	return 0x1000400000;
}

u64 FlipFunctionBBWhite779(TConfig* configs) {
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
	return 0x81000400000;
}

u64 FlipFunctionBBBlack779(TConfig* configs) {
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
	return 0x81000400000;
}

u64 FlipFunctionBBWhite780(TConfig* configs) {
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
	return 0x4081000400000;
}

u64 FlipFunctionBBBlack780(TConfig* configs) {
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
	return 0x4081000400000;
}

u64 FlipFunctionBBWhite781(TConfig* configs) {
	configs[24]-=   27;
	return 0x0;
}

u64 FlipFunctionBBBlack781(TConfig* configs) {
	configs[24]+=   27;
	return 0x0;
}

u64 FlipFunctionBBWhite782(TConfig* configs) {
	configs[ 4]-=  486;
	configs[15]-=   18;
	configs[24]-=  189;
	configs[31]-=  162;
	return 0x2000000000;
}

u64 FlipFunctionBBBlack782(TConfig* configs) {
	configs[ 4]+=  486;
	configs[15]+=   18;
	configs[24]+=  189;
	configs[31]+=  162;
	return 0x2000000000;
}

u64 FlipFunctionBBWhite783(TConfig* configs) {
	configs[ 4]-=  486;
	configs[ 5]-=  486;
	configs[15]-=   18;
	configs[16]-=   18;
	configs[24]-=  675;
	configs[31]-=  162;
	configs[32]-=  486;
	return 0x202000000000;
}

u64 FlipFunctionBBBlack783(TConfig* configs) {
	configs[ 4]+=  486;
	configs[ 5]+=  486;
	configs[15]+=   18;
	configs[16]+=   18;
	configs[24]+=  675;
	configs[31]+=  162;
	configs[32]+=  486;
	return 0x202000000000;
}

u64 FlipFunctionBBWhite784(TConfig* configs) {
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
	return 0x20202000000000;
}

u64 FlipFunctionBBBlack784(TConfig* configs) {
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
	return 0x20202000000000;
}

u64 FlipFunctionBBWhite785(TConfig* configs) {
	configs[ 2]-=  486;
	configs[13]-=   18;
	configs[24]-=   45;
	configs[29]-=   18;
	return 0x200000;
}

u64 FlipFunctionBBBlack785(TConfig* configs) {
	configs[ 2]+=  486;
	configs[13]+=   18;
	configs[24]+=   45;
	configs[29]+=   18;
	return 0x200000;
}

u64 FlipFunctionBBWhite786(TConfig* configs) {
	configs[ 2]-=  486;
	configs[ 4]-=  486;
	configs[13]-=   18;
	configs[15]-=   18;
	configs[24]-=  207;
	configs[29]-=   18;
	configs[31]-=  162;
	return 0x2000200000;
}

u64 FlipFunctionBBBlack786(TConfig* configs) {
	configs[ 2]+=  486;
	configs[ 4]+=  486;
	configs[13]+=   18;
	configs[15]+=   18;
	configs[24]+=  207;
	configs[29]+=   18;
	configs[31]+=  162;
	return 0x2000200000;
}

u64 FlipFunctionBBWhite787(TConfig* configs) {
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
	return 0x202000200000;
}

u64 FlipFunctionBBBlack787(TConfig* configs) {
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
	return 0x202000200000;
}

u64 FlipFunctionBBWhite788(TConfig* configs) {
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
	return 0x20202000200000;
}

u64 FlipFunctionBBBlack788(TConfig* configs) {
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
	return 0x20202000200000;
}

u64 FlipFunctionBBWhite789(TConfig* configs) {
	configs[ 1]-=  486;
	configs[ 2]-=  486;
	configs[12]-=    6;
	configs[13]-=   18;
	configs[24]-=   51;
	configs[28]-=    6;
	configs[29]-=   18;
	return 0x202000;
}

u64 FlipFunctionBBBlack789(TConfig* configs) {
	configs[ 1]+=  486;
	configs[ 2]+=  486;
	configs[12]+=    6;
	configs[13]+=   18;
	configs[24]+=   51;
	configs[28]+=    6;
	configs[29]+=   18;
	return 0x202000;
}

u64 FlipFunctionBBWhite790(TConfig* configs) {
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
	return 0x2000202000;
}

u64 FlipFunctionBBBlack790(TConfig* configs) {
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
	return 0x2000202000;
}

u64 FlipFunctionBBWhite791(TConfig* configs) {
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
	return 0x202000202000;
}

u64 FlipFunctionBBBlack791(TConfig* configs) {
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
	return 0x202000202000;
}

u64 FlipFunctionBBWhite792(TConfig* configs) {
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
	return 0x20202000202000;
}

u64 FlipFunctionBBBlack792(TConfig* configs) {
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
	return 0x20202000202000;
}

u64 FlipFunctionBBWhite793(TConfig* configs) {
	configs[30]-=   27;
	return 0x0;
}

u64 FlipFunctionBBBlack793(TConfig* configs) {
	configs[30]+=   27;
	return 0x0;
}

u64 FlipFunctionBBWhite794(TConfig* configs) {
	configs[ 4]-= 1458;
	configs[16]-=    6;
	configs[25]-=  162;
	configs[30]-=  189;
	return 0x4000000000;
}

u64 FlipFunctionBBBlack794(TConfig* configs) {
	configs[ 4]+= 1458;
	configs[16]+=    6;
	configs[25]+=  162;
	configs[30]+=  189;
	return 0x4000000000;
}

u64 FlipFunctionBBWhite795(TConfig* configs) {
	configs[ 2]-=  162;
	configs[12]-=   18;
	configs[23]-=   18;
	configs[30]-=   45;
	return 0x100000;
}

u64 FlipFunctionBBBlack795(TConfig* configs) {
	configs[ 2]+=  162;
	configs[12]+=   18;
	configs[23]+=   18;
	configs[30]+=   45;
	return 0x100000;
}

u64 FlipFunctionBBWhite796(TConfig* configs) {
	configs[ 2]-=  162;
	configs[ 4]-= 1458;
	configs[12]-=   18;
	configs[16]-=    6;
	configs[23]-=   18;
	configs[25]-=  162;
	configs[30]-=  207;
	return 0x4000100000;
}

u64 FlipFunctionBBBlack796(TConfig* configs) {
	configs[ 2]+=  162;
	configs[ 4]+= 1458;
	configs[12]+=   18;
	configs[16]+=    6;
	configs[23]+=   18;
	configs[25]+=  162;
	configs[30]+=  207;
	return 0x4000100000;
}

u64 FlipFunctionBBWhite797(TConfig* configs) {
	configs[ 1]-=   54;
	configs[ 2]-=  162;
	configs[10]-=    6;
	configs[12]-=   18;
	configs[22]-=    6;
	configs[23]-=   18;
	configs[30]-=   51;
	return 0x100800;
}

u64 FlipFunctionBBBlack797(TConfig* configs) {
	configs[ 1]+=   54;
	configs[ 2]+=  162;
	configs[10]+=    6;
	configs[12]+=   18;
	configs[22]+=    6;
	configs[23]+=   18;
	configs[30]+=   51;
	return 0x100800;
}

u64 FlipFunctionBBWhite798(TConfig* configs) {
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
	return 0x4000100800;
}

u64 FlipFunctionBBBlack798(TConfig* configs) {
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
	return 0x4000100800;
}

u64 FlipFunctionBBWhite799(TConfig* configs) {
	configs[ 3]-=  729;
	return 0x40000000;
}

u64 FlipFunctionBBBlack799(TConfig* configs) {
	configs[ 3]+=  729;
	return 0x40000000;
}

u64 FlipFunctionBBWhite800(TConfig* configs) {
	configs[ 3]-= 1215;
	configs[14]-=   18;
	configs[24]-=   54;
	configs[30]-=   54;
	return 0x60000000;
}

u64 FlipFunctionBBBlack800(TConfig* configs) {
	configs[ 3]+= 1215;
	configs[14]+=   18;
	configs[24]+=   54;
	configs[30]+=   54;
	return 0x60000000;
}

u64 FlipFunctionBBWhite801(TConfig* configs) {
	configs[ 3]-= 1377;
	configs[13]-=   54;
	configs[14]-=   18;
	configs[23]-=   54;
	configs[24]-=   54;
	configs[30]-=   54;
	configs[31]-=   54;
	return 0x70000000;
}

u64 FlipFunctionBBBlack801(TConfig* configs) {
	configs[ 3]+= 1377;
	configs[13]+=   54;
	configs[14]+=   18;
	configs[23]+=   54;
	configs[24]+=   54;
	configs[30]+=   54;
	configs[31]+=   54;
	return 0x70000000;
}

u64 FlipFunctionBBWhite802(TConfig* configs) {
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
	return 0x78000000;
}

u64 FlipFunctionBBBlack802(TConfig* configs) {
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
	return 0x78000000;
}

u64 FlipFunctionBBWhite803(TConfig* configs) {
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
	return 0x7c000000;
}

u64 FlipFunctionBBBlack803(TConfig* configs) {
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
	return 0x7c000000;
}

u64 FlipFunctionBBWhite804(TConfig* configs) {
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
	return 0x7e000000;
}

u64 FlipFunctionBBBlack804(TConfig* configs) {
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
	return 0x7e000000;
}

u64 FlipFunctionBBWhite805(TConfig* configs) {
	configs[15]-=    3;
	return 0x0;
}

u64 FlipFunctionBBBlack805(TConfig* configs) {
	configs[15]+=    3;
	return 0x0;
}

u64 FlipFunctionBBWhite806(TConfig* configs) {
	configs[ 4]-=  486;
	configs[15]-=   21;
	configs[24]-=  162;
	configs[31]-=  162;
	return 0x2000000000;
}

u64 FlipFunctionBBBlack806(TConfig* configs) {
	configs[ 4]+=  486;
	configs[15]+=   21;
	configs[24]+=  162;
	configs[31]+=  162;
	return 0x2000000000;
}

u64 FlipFunctionBBWhite807(TConfig* configs) {
	configs[ 4]-=  486;
	configs[ 5]-=  162;
	configs[15]-=   75;
	configs[23]-=  486;
	configs[24]-=  162;
	configs[31]-=  162;
	configs[33]-=  162;
	return 0x102000000000;
}

u64 FlipFunctionBBBlack807(TConfig* configs) {
	configs[ 4]+=  486;
	configs[ 5]+=  162;
	configs[15]+=   75;
	configs[23]+=  486;
	configs[24]+=  162;
	configs[31]+=  162;
	configs[33]+=  162;
	return 0x102000000000;
}

u64 FlipFunctionBBWhite808(TConfig* configs) {
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
	return 0x8102000000000;
}

u64 FlipFunctionBBBlack808(TConfig* configs) {
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
	return 0x8102000000000;
}

u64 FlipFunctionBBWhite809(TConfig* configs) {
	configs[25]-=   27;
	return 0x0;
}

u64 FlipFunctionBBBlack809(TConfig* configs) {
	configs[25]+=   27;
	return 0x0;
}

u64 FlipFunctionBBWhite810(TConfig* configs) {
	configs[ 4]-= 1458;
	configs[16]-=    6;
	configs[25]-=  189;
	configs[30]-=  162;
	return 0x4000000000;
}

u64 FlipFunctionBBBlack810(TConfig* configs) {
	configs[ 4]+= 1458;
	configs[16]+=    6;
	configs[25]+=  189;
	configs[30]+=  162;
	return 0x4000000000;
}

u64 FlipFunctionBBWhite811(TConfig* configs) {
	configs[ 4]-= 1458;
	configs[ 5]-= 1458;
	configs[16]-=    6;
	configs[17]-=    6;
	configs[25]-=  675;
	configs[30]-=  162;
	configs[31]-=  486;
	return 0x404000000000;
}

u64 FlipFunctionBBBlack811(TConfig* configs) {
	configs[ 4]+= 1458;
	configs[ 5]+= 1458;
	configs[16]+=    6;
	configs[17]+=    6;
	configs[25]+=  675;
	configs[30]+=  162;
	configs[31]+=  486;
	return 0x404000000000;
}

u64 FlipFunctionBBWhite812(TConfig* configs) {
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
	return 0x40404000000000;
}

u64 FlipFunctionBBBlack812(TConfig* configs) {
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
	return 0x40404000000000;
}

u64 FlipFunctionBBWhite813(TConfig* configs) {
	configs[ 2]-= 1458;
	configs[14]-=    6;
	configs[25]-=   45;
	configs[28]-=   18;
	return 0x400000;
}

u64 FlipFunctionBBBlack813(TConfig* configs) {
	configs[ 2]+= 1458;
	configs[14]+=    6;
	configs[25]+=   45;
	configs[28]+=   18;
	return 0x400000;
}

u64 FlipFunctionBBWhite814(TConfig* configs) {
	configs[ 2]-= 1458;
	configs[ 4]-= 1458;
	configs[14]-=    6;
	configs[16]-=    6;
	configs[25]-=  207;
	configs[28]-=   18;
	configs[30]-=  162;
	return 0x4000400000;
}

u64 FlipFunctionBBBlack814(TConfig* configs) {
	configs[ 2]+= 1458;
	configs[ 4]+= 1458;
	configs[14]+=    6;
	configs[16]+=    6;
	configs[25]+=  207;
	configs[28]+=   18;
	configs[30]+=  162;
	return 0x4000400000;
}

u64 FlipFunctionBBWhite815(TConfig* configs) {
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
	return 0x404000400000;
}

u64 FlipFunctionBBBlack815(TConfig* configs) {
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
	return 0x404000400000;
}

u64 FlipFunctionBBWhite816(TConfig* configs) {
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
	return 0x40404000400000;
}

u64 FlipFunctionBBBlack816(TConfig* configs) {
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
	return 0x40404000400000;
}

u64 FlipFunctionBBWhite817(TConfig* configs) {
	configs[ 1]-= 1458;
	configs[ 2]-= 1458;
	configs[13]-=    6;
	configs[14]-=    6;
	configs[25]-=   51;
	configs[27]-=    6;
	configs[28]-=   18;
	return 0x404000;
}

u64 FlipFunctionBBBlack817(TConfig* configs) {
	configs[ 1]+= 1458;
	configs[ 2]+= 1458;
	configs[13]+=    6;
	configs[14]+=    6;
	configs[25]+=   51;
	configs[27]+=    6;
	configs[28]+=   18;
	return 0x404000;
}

u64 FlipFunctionBBWhite818(TConfig* configs) {
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
	return 0x4000404000;
}

u64 FlipFunctionBBBlack818(TConfig* configs) {
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
	return 0x4000404000;
}

u64 FlipFunctionBBWhite819(TConfig* configs) {
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
	return 0x404000404000;
}

u64 FlipFunctionBBBlack819(TConfig* configs) {
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
	return 0x404000404000;
}

u64 FlipFunctionBBWhite820(TConfig* configs) {
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
	return 0x40404000404000;
}

u64 FlipFunctionBBBlack820(TConfig* configs) {
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
	return 0x40404000404000;
}

u64 FlipFunctionBBWhite821(TConfig* configs) {
	configs[29]-=   27;
	return 0x0;
}

u64 FlipFunctionBBBlack821(TConfig* configs) {
	configs[29]+=   27;
	return 0x0;
}

u64 FlipFunctionBBWhite822(TConfig* configs) {
	configs[ 2]-=  486;
	configs[13]-=   18;
	configs[24]-=   18;
	configs[29]-=   45;
	return 0x200000;
}

u64 FlipFunctionBBBlack822(TConfig* configs) {
	configs[ 2]+=  486;
	configs[13]+=   18;
	configs[24]+=   18;
	configs[29]+=   45;
	return 0x200000;
}

u64 FlipFunctionBBWhite823(TConfig* configs) {
	configs[ 1]-=  162;
	configs[ 2]-=  486;
	configs[11]-=    6;
	configs[13]-=   18;
	configs[23]-=    6;
	configs[24]-=   18;
	configs[29]-=   51;
	return 0x201000;
}

u64 FlipFunctionBBBlack823(TConfig* configs) {
	configs[ 1]+=  162;
	configs[ 2]+=  486;
	configs[11]+=    6;
	configs[13]+=   18;
	configs[23]+=    6;
	configs[24]+=   18;
	configs[29]+=   51;
	return 0x201000;
}

u64 FlipFunctionBBWhite824(TConfig* configs) {
	configs[ 3]-= 2187;
	return 0x80000000;
}

u64 FlipFunctionBBBlack824(TConfig* configs) {
	configs[ 3]+= 2187;
	return 0x80000000;
}

u64 FlipFunctionBBWhite825(TConfig* configs) {
	configs[ 3]-= 3645;
	configs[15]-=    6;
	configs[25]-=   54;
	configs[29]-=   54;
	return 0xc0000000;
}

u64 FlipFunctionBBBlack825(TConfig* configs) {
	configs[ 3]+= 3645;
	configs[15]+=    6;
	configs[25]+=   54;
	configs[29]+=   54;
	return 0xc0000000;
}

u64 FlipFunctionBBWhite826(TConfig* configs) {
	configs[ 3]-= 4131;
	configs[14]-=   18;
	configs[15]-=    6;
	configs[24]-=   54;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[30]-=   54;
	return 0xe0000000;
}

u64 FlipFunctionBBBlack826(TConfig* configs) {
	configs[ 3]+= 4131;
	configs[14]+=   18;
	configs[15]+=    6;
	configs[24]+=   54;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[30]+=   54;
	return 0xe0000000;
}

u64 FlipFunctionBBWhite827(TConfig* configs) {
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
	return 0xf0000000;
}

u64 FlipFunctionBBBlack827(TConfig* configs) {
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
	return 0xf0000000;
}

u64 FlipFunctionBBWhite828(TConfig* configs) {
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
	return 0xf8000000;
}

u64 FlipFunctionBBBlack828(TConfig* configs) {
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
	return 0xf8000000;
}

u64 FlipFunctionBBWhite829(TConfig* configs) {
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
	return 0xfc000000;
}

u64 FlipFunctionBBBlack829(TConfig* configs) {
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
	return 0xfc000000;
}

u64 FlipFunctionBBWhite830(TConfig* configs) {
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
	return 0xfe000000;
}

u64 FlipFunctionBBBlack830(TConfig* configs) {
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
	return 0xfe000000;
}

u64 FlipFunctionBBWhite831(TConfig* configs) {
	configs[16]-=    1;
	return 0x0;
}

u64 FlipFunctionBBBlack831(TConfig* configs) {
	configs[16]+=    1;
	return 0x0;
}

u64 FlipFunctionBBWhite832(TConfig* configs) {
	configs[ 4]-= 1458;
	configs[16]-=    7;
	configs[25]-=  162;
	configs[30]-=  162;
	return 0x4000000000;
}

u64 FlipFunctionBBBlack832(TConfig* configs) {
	configs[ 4]+= 1458;
	configs[16]+=    7;
	configs[25]+=  162;
	configs[30]+=  162;
	return 0x4000000000;
}

u64 FlipFunctionBBWhite833(TConfig* configs) {
	configs[ 4]-= 1458;
	configs[ 5]-=  486;
	configs[16]-=   25;
	configs[24]-=  486;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[32]-=  486;
	return 0x204000000000;
}

u64 FlipFunctionBBBlack833(TConfig* configs) {
	configs[ 4]+= 1458;
	configs[ 5]+=  486;
	configs[16]+=   25;
	configs[24]+=  486;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[32]+=  486;
	return 0x204000000000;
}

u64 FlipFunctionBBWhite834(TConfig* configs) {
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
	return 0x10204000000000;
}

u64 FlipFunctionBBBlack834(TConfig* configs) {
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
	return 0x10204000000000;
}

u64 FlipFunctionBBWhite835(TConfig* configs) {
	configs[26]-=   27;
	return 0x0;
}

u64 FlipFunctionBBBlack835(TConfig* configs) {
	configs[26]+=   27;
	return 0x0;
}

u64 FlipFunctionBBWhite836(TConfig* configs) {
	configs[ 4]-= 4374;
	configs[17]-=    2;
	configs[26]-=  189;
	configs[29]-=  162;
	return 0x8000000000;
}

u64 FlipFunctionBBBlack836(TConfig* configs) {
	configs[ 4]+= 4374;
	configs[17]+=    2;
	configs[26]+=  189;
	configs[29]+=  162;
	return 0x8000000000;
}

u64 FlipFunctionBBWhite837(TConfig* configs) {
	configs[ 4]-= 4374;
	configs[ 5]-= 4374;
	configs[17]-=    2;
	configs[18]-=    2;
	configs[26]-=  675;
	configs[29]-=  162;
	configs[30]-=  486;
	return 0x808000000000;
}

u64 FlipFunctionBBBlack837(TConfig* configs) {
	configs[ 4]+= 4374;
	configs[ 5]+= 4374;
	configs[17]+=    2;
	configs[18]+=    2;
	configs[26]+=  675;
	configs[29]+=  162;
	configs[30]+=  486;
	return 0x808000000000;
}

u64 FlipFunctionBBWhite838(TConfig* configs) {
	configs[ 4]-= 4374;
	configs[ 5]-= 4374;
	configs[ 6]-= 4374;
	configs[17]-=    2;
	configs[18]-=    2;
	configs[26]-= 2133;
	configs[29]-=  162;
	configs[30]-=  486;
	configs[31]-= 1458;
	return 0x80808000000000;
}

u64 FlipFunctionBBBlack838(TConfig* configs) {
	configs[ 4]+= 4374;
	configs[ 5]+= 4374;
	configs[ 6]+= 4374;
	configs[17]+=    2;
	configs[18]+=    2;
	configs[26]+= 2133;
	configs[29]+=  162;
	configs[30]+=  486;
	configs[31]+= 1458;
	return 0x80808000000000;
}

u64 FlipFunctionBBWhite839(TConfig* configs) {
	configs[ 2]-= 4374;
	configs[15]-=    2;
	configs[26]-=   45;
	configs[27]-=   18;
	return 0x800000;
}

u64 FlipFunctionBBBlack839(TConfig* configs) {
	configs[ 2]+= 4374;
	configs[15]+=    2;
	configs[26]+=   45;
	configs[27]+=   18;
	return 0x800000;
}

u64 FlipFunctionBBWhite840(TConfig* configs) {
	configs[ 2]-= 4374;
	configs[ 4]-= 4374;
	configs[15]-=    2;
	configs[17]-=    2;
	configs[26]-=  207;
	configs[27]-=   18;
	configs[29]-=  162;
	return 0x8000800000;
}

u64 FlipFunctionBBBlack840(TConfig* configs) {
	configs[ 2]+= 4374;
	configs[ 4]+= 4374;
	configs[15]+=    2;
	configs[17]+=    2;
	configs[26]+=  207;
	configs[27]+=   18;
	configs[29]+=  162;
	return 0x8000800000;
}

u64 FlipFunctionBBWhite841(TConfig* configs) {
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
	return 0x808000800000;
}

u64 FlipFunctionBBBlack841(TConfig* configs) {
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
	return 0x808000800000;
}

u64 FlipFunctionBBWhite842(TConfig* configs) {
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
	return 0x80808000800000;
}

u64 FlipFunctionBBBlack842(TConfig* configs) {
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
	return 0x80808000800000;
}

u64 FlipFunctionBBWhite843(TConfig* configs) {
	configs[ 1]-= 4374;
	configs[ 2]-= 4374;
	configs[14]-=    2;
	configs[15]-=    2;
	configs[26]-=   51;
	configs[27]-=   18;
	return 0x808000;
}

u64 FlipFunctionBBBlack843(TConfig* configs) {
	configs[ 1]+= 4374;
	configs[ 2]+= 4374;
	configs[14]+=    2;
	configs[15]+=    2;
	configs[26]+=   51;
	configs[27]+=   18;
	return 0x808000;
}

u64 FlipFunctionBBWhite844(TConfig* configs) {
	configs[ 1]-= 4374;
	configs[ 2]-= 4374;
	configs[ 4]-= 4374;
	configs[14]-=    2;
	configs[15]-=    2;
	configs[17]-=    2;
	configs[26]-=  213;
	configs[27]-=   18;
	configs[29]-=  162;
	return 0x8000808000;
}

u64 FlipFunctionBBBlack844(TConfig* configs) {
	configs[ 1]+= 4374;
	configs[ 2]+= 4374;
	configs[ 4]+= 4374;
	configs[14]+=    2;
	configs[15]+=    2;
	configs[17]+=    2;
	configs[26]+=  213;
	configs[27]+=   18;
	configs[29]+=  162;
	return 0x8000808000;
}

u64 FlipFunctionBBWhite845(TConfig* configs) {
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
	return 0x808000808000;
}

u64 FlipFunctionBBBlack845(TConfig* configs) {
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
	return 0x808000808000;
}

u64 FlipFunctionBBWhite846(TConfig* configs) {
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
	return 0x80808000808000;
}

u64 FlipFunctionBBBlack846(TConfig* configs) {
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
	return 0x80808000808000;
}

u64 FlipFunctionBBWhite847(TConfig* configs) {
	configs[28]-=   27;
	return 0x0;
}

u64 FlipFunctionBBBlack847(TConfig* configs) {
	configs[28]+=   27;
	return 0x0;
}

u64 FlipFunctionBBWhite848(TConfig* configs) {
	configs[ 2]-= 1458;
	configs[14]-=    6;
	configs[25]-=   18;
	configs[28]-=   45;
	return 0x400000;
}

u64 FlipFunctionBBBlack848(TConfig* configs) {
	configs[ 2]+= 1458;
	configs[14]+=    6;
	configs[25]+=   18;
	configs[28]+=   45;
	return 0x400000;
}

u64 FlipFunctionBBWhite849(TConfig* configs) {
	configs[ 1]-=  486;
	configs[ 2]-= 1458;
	configs[12]-=    6;
	configs[14]-=    6;
	configs[24]-=    6;
	configs[25]-=   18;
	configs[28]-=   51;
	return 0x402000;
}

u64 FlipFunctionBBBlack849(TConfig* configs) {
	configs[ 1]+=  486;
	configs[ 2]+= 1458;
	configs[12]+=    6;
	configs[14]+=    6;
	configs[24]+=    6;
	configs[25]+=   18;
	configs[28]+=   51;
	return 0x402000;
}

u64 FlipFunctionBBWhite850(TConfig* configs) {
	configs[ 4]-=    1;
	return 0x100000000;
}

u64 FlipFunctionBBBlack850(TConfig* configs) {
	configs[ 4]+=    1;
	return 0x100000000;
}

u64 FlipFunctionBBWhite851(TConfig* configs) {
	configs[ 4]-=    7;
	configs[11]-=  162;
	configs[20]-=  162;
	configs[35]-=    6;
	return 0x300000000;
}

u64 FlipFunctionBBBlack851(TConfig* configs) {
	configs[ 4]+=    7;
	configs[11]+=  162;
	configs[20]+=  162;
	configs[35]+=    6;
	return 0x300000000;
}

u64 FlipFunctionBBWhite852(TConfig* configs) {
	configs[ 4]-=   25;
	configs[11]-=  162;
	configs[12]-=  162;
	configs[20]-=  162;
	configs[21]-=  162;
	configs[34]-=   18;
	configs[35]-=    6;
	return 0x700000000;
}

u64 FlipFunctionBBBlack852(TConfig* configs) {
	configs[ 4]+=   25;
	configs[11]+=  162;
	configs[12]+=  162;
	configs[20]+=  162;
	configs[21]+=  162;
	configs[34]+=   18;
	configs[35]+=    6;
	return 0x700000000;
}

u64 FlipFunctionBBWhite853(TConfig* configs) {
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
	return 0xf00000000;
}

u64 FlipFunctionBBBlack853(TConfig* configs) {
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
	return 0xf00000000;
}

u64 FlipFunctionBBWhite854(TConfig* configs) {
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
	return 0x1f00000000;
}

u64 FlipFunctionBBBlack854(TConfig* configs) {
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
	return 0x1f00000000;
}

u64 FlipFunctionBBWhite855(TConfig* configs) {
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
	return 0x3f00000000;
}

u64 FlipFunctionBBBlack855(TConfig* configs) {
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
	return 0x3f00000000;
}

u64 FlipFunctionBBWhite856(TConfig* configs) {
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
	return 0x7f00000000;
}

u64 FlipFunctionBBBlack856(TConfig* configs) {
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
	return 0x7f00000000;
}

u64 FlipFunctionBBWhite857(TConfig* configs) {
	configs[10]-=   81;
	return 0x0;
}

u64 FlipFunctionBBBlack857(TConfig* configs) {
	configs[10]+=   81;
	return 0x0;
}

u64 FlipFunctionBBWhite858(TConfig* configs) {
	configs[ 3]-=    6;
	configs[10]-=  135;
	configs[20]-=   54;
	configs[34]-=    6;
	return 0x2000000;
}

u64 FlipFunctionBBBlack858(TConfig* configs) {
	configs[ 3]+=    6;
	configs[10]+=  135;
	configs[20]+=   54;
	configs[34]+=    6;
	return 0x2000000;
}

u64 FlipFunctionBBWhite859(TConfig* configs) {
	configs[ 2]-=   18;
	configs[ 3]-=    6;
	configs[10]-=  153;
	configs[20]-=   54;
	configs[21]-=   18;
	configs[32]-=   18;
	configs[34]-=    6;
	return 0x2040000;
}

u64 FlipFunctionBBBlack859(TConfig* configs) {
	configs[ 2]+=   18;
	configs[ 3]+=    6;
	configs[10]+=  153;
	configs[20]+=   54;
	configs[21]+=   18;
	configs[32]+=   18;
	configs[34]+=    6;
	return 0x2040000;
}

u64 FlipFunctionBBWhite860(TConfig* configs) {
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
	return 0x2040800;
}

u64 FlipFunctionBBBlack860(TConfig* configs) {
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
	return 0x2040800;
}

u64 FlipFunctionBBWhite861(TConfig* configs) {
	configs[19]-=   81;
	return 0x0;
}

u64 FlipFunctionBBBlack861(TConfig* configs) {
	configs[19]+=   81;
	return 0x0;
}

u64 FlipFunctionBBWhite862(TConfig* configs) {
	configs[ 5]-=    2;
	configs[11]-=  486;
	configs[19]-=  567;
	configs[37]-=    2;
	return 0x10000000000;
}

u64 FlipFunctionBBBlack862(TConfig* configs) {
	configs[ 5]+=    2;
	configs[11]+=  486;
	configs[19]+=  567;
	configs[37]+=    2;
	return 0x10000000000;
}

u64 FlipFunctionBBWhite863(TConfig* configs) {
	configs[ 5]-=    2;
	configs[ 6]-=    2;
	configs[11]-=  486;
	configs[12]-= 1458;
	configs[19]-= 2025;
	configs[37]-=    2;
	return 0x1010000000000;
}

u64 FlipFunctionBBBlack863(TConfig* configs) {
	configs[ 5]+=    2;
	configs[ 6]+=    2;
	configs[11]+=  486;
	configs[12]+= 1458;
	configs[19]+= 2025;
	configs[37]+=    2;
	return 0x1010000000000;
}

u64 FlipFunctionBBWhite864(TConfig* configs) {
	configs[ 3]-=    2;
	configs[ 9]-=   54;
	configs[19]-=  135;
	configs[35]-=    2;
	return 0x1000000;
}

u64 FlipFunctionBBBlack864(TConfig* configs) {
	configs[ 3]+=    2;
	configs[ 9]+=   54;
	configs[19]+=  135;
	configs[35]+=    2;
	return 0x1000000;
}

u64 FlipFunctionBBWhite865(TConfig* configs) {
	configs[ 3]-=    2;
	configs[ 5]-=    2;
	configs[ 9]-=   54;
	configs[11]-=  486;
	configs[19]-=  621;
	configs[35]-=    2;
	configs[37]-=    2;
	return 0x10001000000;
}

u64 FlipFunctionBBBlack865(TConfig* configs) {
	configs[ 3]+=    2;
	configs[ 5]+=    2;
	configs[ 9]+=   54;
	configs[11]+=  486;
	configs[19]+=  621;
	configs[35]+=    2;
	configs[37]+=    2;
	return 0x10001000000;
}

u64 FlipFunctionBBWhite866(TConfig* configs) {
	configs[ 3]-=    2;
	configs[ 5]-=    2;
	configs[ 6]-=    2;
	configs[ 9]-=   54;
	configs[11]-=  486;
	configs[12]-= 1458;
	configs[19]-= 2079;
	configs[35]-=    2;
	configs[37]-=    2;
	return 0x1010001000000;
}

u64 FlipFunctionBBBlack866(TConfig* configs) {
	configs[ 3]+=    2;
	configs[ 5]+=    2;
	configs[ 6]+=    2;
	configs[ 9]+=   54;
	configs[11]+=  486;
	configs[12]+= 1458;
	configs[19]+= 2079;
	configs[35]+=    2;
	configs[37]+=    2;
	return 0x1010001000000;
}

u64 FlipFunctionBBWhite867(TConfig* configs) {
	configs[ 2]-=    2;
	configs[ 3]-=    2;
	configs[ 8]-=   18;
	configs[ 9]-=   54;
	configs[19]-=  153;
	configs[34]-=    2;
	configs[35]-=    2;
	return 0x1010000;
}

u64 FlipFunctionBBBlack867(TConfig* configs) {
	configs[ 2]+=    2;
	configs[ 3]+=    2;
	configs[ 8]+=   18;
	configs[ 9]+=   54;
	configs[19]+=  153;
	configs[34]+=    2;
	configs[35]+=    2;
	return 0x1010000;
}

u64 FlipFunctionBBWhite868(TConfig* configs) {
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
	return 0x10001010000;
}

u64 FlipFunctionBBBlack868(TConfig* configs) {
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
	return 0x10001010000;
}

u64 FlipFunctionBBWhite869(TConfig* configs) {
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
	return 0x1010001010000;
}

u64 FlipFunctionBBBlack869(TConfig* configs) {
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
	return 0x1010001010000;
}

u64 FlipFunctionBBWhite870(TConfig* configs) {
	configs[ 1]-=    2;
	configs[ 2]-=    2;
	configs[ 3]-=    2;
	configs[ 8]-=   18;
	configs[ 9]-=   54;
	configs[19]-=  159;
	configs[33]-=    2;
	configs[34]-=    2;
	configs[35]-=    2;
	return 0x1010100;
}

u64 FlipFunctionBBBlack870(TConfig* configs) {
	configs[ 1]+=    2;
	configs[ 2]+=    2;
	configs[ 3]+=    2;
	configs[ 8]+=   18;
	configs[ 9]+=   54;
	configs[19]+=  159;
	configs[33]+=    2;
	configs[34]+=    2;
	configs[35]+=    2;
	return 0x1010100;
}

u64 FlipFunctionBBWhite871(TConfig* configs) {
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
	return 0x10001010100;
}

u64 FlipFunctionBBBlack871(TConfig* configs) {
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
	return 0x10001010100;
}

u64 FlipFunctionBBWhite872(TConfig* configs) {
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
	return 0x1010001010100;
}

u64 FlipFunctionBBBlack872(TConfig* configs) {
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
	return 0x1010001010100;
}

u64 FlipFunctionBBWhite873(TConfig* configs) {
	configs[36]-=    1;
	return 0x0;
}

u64 FlipFunctionBBBlack873(TConfig* configs) {
	configs[36]+=    1;
	return 0x0;
}

u64 FlipFunctionBBWhite874(TConfig* configs) {
	configs[ 5]-=    6;
	configs[12]-=  486;
	configs[20]-=  486;
	configs[36]-=    7;
	return 0x20000000000;
}

u64 FlipFunctionBBBlack874(TConfig* configs) {
	configs[ 5]+=    6;
	configs[12]+=  486;
	configs[20]+=  486;
	configs[36]+=    7;
	return 0x20000000000;
}

u64 FlipFunctionBBWhite875(TConfig* configs) {
	configs[ 5]-=    6;
	configs[ 6]-=   18;
	configs[12]-=  486;
	configs[14]-=  486;
	configs[20]-=  486;
	configs[21]-= 1458;
	configs[36]-=   25;
	return 0x4020000000000;
}

u64 FlipFunctionBBBlack875(TConfig* configs) {
	configs[ 5]+=    6;
	configs[ 6]+=   18;
	configs[12]+=  486;
	configs[14]+=  486;
	configs[20]+=  486;
	configs[21]+= 1458;
	configs[36]+=   25;
	return 0x4020000000000;
}

u64 FlipFunctionBBWhite876(TConfig* configs) {
	configs[ 4]-=    3;
	return 0x200000000;
}

u64 FlipFunctionBBBlack876(TConfig* configs) {
	configs[ 4]+=    3;
	return 0x200000000;
}

u64 FlipFunctionBBWhite877(TConfig* configs) {
	configs[ 4]-=   21;
	configs[12]-=  162;
	configs[21]-=  162;
	configs[34]-=   18;
	return 0x600000000;
}

u64 FlipFunctionBBBlack877(TConfig* configs) {
	configs[ 4]+=   21;
	configs[12]+=  162;
	configs[21]+=  162;
	configs[34]+=   18;
	return 0x600000000;
}

u64 FlipFunctionBBWhite878(TConfig* configs) {
	configs[ 4]-=   75;
	configs[12]-=  162;
	configs[13]-=  162;
	configs[21]-=  162;
	configs[22]-=  162;
	configs[33]-=   54;
	configs[34]-=   18;
	return 0xe00000000;
}

u64 FlipFunctionBBBlack878(TConfig* configs) {
	configs[ 4]+=   75;
	configs[12]+=  162;
	configs[13]+=  162;
	configs[21]+=  162;
	configs[22]+=  162;
	configs[33]+=   54;
	configs[34]+=   18;
	return 0xe00000000;
}

u64 FlipFunctionBBWhite879(TConfig* configs) {
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
	return 0x1e00000000;
}

u64 FlipFunctionBBBlack879(TConfig* configs) {
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
	return 0x1e00000000;
}

u64 FlipFunctionBBWhite880(TConfig* configs) {
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
	return 0x3e00000000;
}

u64 FlipFunctionBBBlack880(TConfig* configs) {
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
	return 0x3e00000000;
}

u64 FlipFunctionBBWhite881(TConfig* configs) {
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
	return 0x7e00000000;
}

u64 FlipFunctionBBBlack881(TConfig* configs) {
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
	return 0x7e00000000;
}

u64 FlipFunctionBBWhite882(TConfig* configs) {
	configs[11]-=   81;
	return 0x0;
}

u64 FlipFunctionBBBlack882(TConfig* configs) {
	configs[11]+=   81;
	return 0x0;
}

u64 FlipFunctionBBWhite883(TConfig* configs) {
	configs[ 3]-=   18;
	configs[11]-=  135;
	configs[21]-=   54;
	configs[33]-=   18;
	return 0x4000000;
}

u64 FlipFunctionBBBlack883(TConfig* configs) {
	configs[ 3]+=   18;
	configs[11]+=  135;
	configs[21]+=   54;
	configs[33]+=   18;
	return 0x4000000;
}

u64 FlipFunctionBBWhite884(TConfig* configs) {
	configs[ 2]-=   54;
	configs[ 3]-=   18;
	configs[11]-=  153;
	configs[21]-=   54;
	configs[22]-=   18;
	configs[31]-=   18;
	configs[33]-=   18;
	return 0x4080000;
}

u64 FlipFunctionBBBlack884(TConfig* configs) {
	configs[ 2]+=   54;
	configs[ 3]+=   18;
	configs[11]+=  153;
	configs[21]+=   54;
	configs[22]+=   18;
	configs[31]+=   18;
	configs[33]+=   18;
	return 0x4080000;
}

u64 FlipFunctionBBWhite885(TConfig* configs) {
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
	return 0x4081000;
}

u64 FlipFunctionBBBlack885(TConfig* configs) {
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
	return 0x4081000;
}

u64 FlipFunctionBBWhite886(TConfig* configs) {
	configs[20]-=   81;
	return 0x0;
}

u64 FlipFunctionBBBlack886(TConfig* configs) {
	configs[20]+=   81;
	return 0x0;
}

u64 FlipFunctionBBWhite887(TConfig* configs) {
	configs[ 5]-=    6;
	configs[12]-=  486;
	configs[20]-=  567;
	configs[36]-=    6;
	return 0x20000000000;
}

u64 FlipFunctionBBBlack887(TConfig* configs) {
	configs[ 5]+=    6;
	configs[12]+=  486;
	configs[20]+=  567;
	configs[36]+=    6;
	return 0x20000000000;
}

u64 FlipFunctionBBWhite888(TConfig* configs) {
	configs[ 5]-=    6;
	configs[ 6]-=    6;
	configs[12]-=  486;
	configs[13]-= 1458;
	configs[20]-= 2025;
	configs[36]-=    6;
	configs[37]-=    6;
	return 0x2020000000000;
}

u64 FlipFunctionBBBlack888(TConfig* configs) {
	configs[ 5]+=    6;
	configs[ 6]+=    6;
	configs[12]+=  486;
	configs[13]+= 1458;
	configs[20]+= 2025;
	configs[36]+=    6;
	configs[37]+=    6;
	return 0x2020000000000;
}

u64 FlipFunctionBBWhite889(TConfig* configs) {
	configs[ 3]-=    6;
	configs[10]-=   54;
	configs[20]-=  135;
	configs[34]-=    6;
	return 0x2000000;
}

u64 FlipFunctionBBBlack889(TConfig* configs) {
	configs[ 3]+=    6;
	configs[10]+=   54;
	configs[20]+=  135;
	configs[34]+=    6;
	return 0x2000000;
}

u64 FlipFunctionBBWhite890(TConfig* configs) {
	configs[ 3]-=    6;
	configs[ 5]-=    6;
	configs[10]-=   54;
	configs[12]-=  486;
	configs[20]-=  621;
	configs[34]-=    6;
	configs[36]-=    6;
	return 0x20002000000;
}

u64 FlipFunctionBBBlack890(TConfig* configs) {
	configs[ 3]+=    6;
	configs[ 5]+=    6;
	configs[10]+=   54;
	configs[12]+=  486;
	configs[20]+=  621;
	configs[34]+=    6;
	configs[36]+=    6;
	return 0x20002000000;
}

u64 FlipFunctionBBWhite891(TConfig* configs) {
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
	return 0x2020002000000;
}

u64 FlipFunctionBBBlack891(TConfig* configs) {
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
	return 0x2020002000000;
}

u64 FlipFunctionBBWhite892(TConfig* configs) {
	configs[ 2]-=    6;
	configs[ 3]-=    6;
	configs[ 9]-=   18;
	configs[10]-=   54;
	configs[20]-=  153;
	configs[33]-=    6;
	configs[34]-=    6;
	return 0x2020000;
}

u64 FlipFunctionBBBlack892(TConfig* configs) {
	configs[ 2]+=    6;
	configs[ 3]+=    6;
	configs[ 9]+=   18;
	configs[10]+=   54;
	configs[20]+=  153;
	configs[33]+=    6;
	configs[34]+=    6;
	return 0x2020000;
}

u64 FlipFunctionBBWhite893(TConfig* configs) {
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
	return 0x20002020000;
}

u64 FlipFunctionBBBlack893(TConfig* configs) {
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
	return 0x20002020000;
}

u64 FlipFunctionBBWhite894(TConfig* configs) {
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
	return 0x2020002020000;
}

u64 FlipFunctionBBBlack894(TConfig* configs) {
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
	return 0x2020002020000;
}

u64 FlipFunctionBBWhite895(TConfig* configs) {
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
	return 0x2020200;
}

u64 FlipFunctionBBBlack895(TConfig* configs) {
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
	return 0x2020200;
}

u64 FlipFunctionBBWhite896(TConfig* configs) {
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
	return 0x20002020200;
}

u64 FlipFunctionBBBlack896(TConfig* configs) {
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
	return 0x20002020200;
}

u64 FlipFunctionBBWhite897(TConfig* configs) {
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
	return 0x2020002020200;
}

u64 FlipFunctionBBBlack897(TConfig* configs) {
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
	return 0x2020002020200;
}

u64 FlipFunctionBBWhite898(TConfig* configs) {
	configs[35]-=    3;
	return 0x0;
}

u64 FlipFunctionBBBlack898(TConfig* configs) {
	configs[35]+=    3;
	return 0x0;
}

u64 FlipFunctionBBWhite899(TConfig* configs) {
	configs[ 5]-=   18;
	configs[13]-=  486;
	configs[21]-=  486;
	configs[35]-=   21;
	return 0x40000000000;
}

u64 FlipFunctionBBBlack899(TConfig* configs) {
	configs[ 5]+=   18;
	configs[13]+=  486;
	configs[21]+=  486;
	configs[35]+=   21;
	return 0x40000000000;
}

u64 FlipFunctionBBWhite900(TConfig* configs) {
	configs[ 5]-=   18;
	configs[ 6]-=   54;
	configs[13]-=  486;
	configs[15]-=  162;
	configs[21]-=  486;
	configs[22]-= 1458;
	configs[35]-=   75;
	return 0x8040000000000;
}

u64 FlipFunctionBBBlack900(TConfig* configs) {
	configs[ 5]+=   18;
	configs[ 6]+=   54;
	configs[13]+=  486;
	configs[15]+=  162;
	configs[21]+=  486;
	configs[22]+= 1458;
	configs[35]+=   75;
	return 0x8040000000000;
}

u64 FlipFunctionBBWhite901(TConfig* configs) {
	configs[ 4]-=    9;
	return 0x400000000;
}

u64 FlipFunctionBBBlack901(TConfig* configs) {
	configs[ 4]+=    9;
	return 0x400000000;
}

u64 FlipFunctionBBWhite902(TConfig* configs) {
	configs[ 4]-=   63;
	configs[13]-=  162;
	configs[22]-=  162;
	configs[33]-=   54;
	return 0xc00000000;
}

u64 FlipFunctionBBBlack902(TConfig* configs) {
	configs[ 4]+=   63;
	configs[13]+=  162;
	configs[22]+=  162;
	configs[33]+=   54;
	return 0xc00000000;
}

u64 FlipFunctionBBWhite903(TConfig* configs) {
	configs[ 4]-=  225;
	configs[13]-=  162;
	configs[14]-=   54;
	configs[22]-=  162;
	configs[23]-=  162;
	configs[32]-=  162;
	configs[33]-=   54;
	return 0x1c00000000;
}

u64 FlipFunctionBBBlack903(TConfig* configs) {
	configs[ 4]+=  225;
	configs[13]+=  162;
	configs[14]+=   54;
	configs[22]+=  162;
	configs[23]+=  162;
	configs[32]+=  162;
	configs[33]+=   54;
	return 0x1c00000000;
}

u64 FlipFunctionBBWhite904(TConfig* configs) {
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
	return 0x3c00000000;
}

u64 FlipFunctionBBBlack904(TConfig* configs) {
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
	return 0x3c00000000;
}

u64 FlipFunctionBBWhite905(TConfig* configs) {
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
	return 0x7c00000000;
}

u64 FlipFunctionBBBlack905(TConfig* configs) {
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
	return 0x7c00000000;
}

u64 FlipFunctionBBWhite906(TConfig* configs) {
	configs[ 4]-=   15;
	configs[11]-=  162;
	configs[20]-=  162;
	configs[35]-=    6;
	return 0x600000000;
}

u64 FlipFunctionBBBlack906(TConfig* configs) {
	configs[ 4]+=   15;
	configs[11]+=  162;
	configs[20]+=  162;
	configs[35]+=    6;
	return 0x600000000;
}

u64 FlipFunctionBBWhite907(TConfig* configs) {
	configs[ 4]-=   69;
	configs[11]-=  162;
	configs[13]-=  162;
	configs[20]-=  162;
	configs[22]-=  162;
	configs[33]-=   54;
	configs[35]-=    6;
	return 0xe00000000;
}

u64 FlipFunctionBBBlack907(TConfig* configs) {
	configs[ 4]+=   69;
	configs[11]+=  162;
	configs[13]+=  162;
	configs[20]+=  162;
	configs[22]+=  162;
	configs[33]+=   54;
	configs[35]+=    6;
	return 0xe00000000;
}

u64 FlipFunctionBBWhite908(TConfig* configs) {
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
	return 0x1e00000000;
}

u64 FlipFunctionBBBlack908(TConfig* configs) {
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
	return 0x1e00000000;
}

u64 FlipFunctionBBWhite909(TConfig* configs) {
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
	return 0x3e00000000;
}

u64 FlipFunctionBBBlack909(TConfig* configs) {
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
	return 0x3e00000000;
}

u64 FlipFunctionBBWhite910(TConfig* configs) {
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
	return 0x7e00000000;
}

u64 FlipFunctionBBBlack910(TConfig* configs) {
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
	return 0x7e00000000;
}

u64 FlipFunctionBBWhite911(TConfig* configs) {
	configs[12]-=   81;
	return 0x0;
}

u64 FlipFunctionBBBlack911(TConfig* configs) {
	configs[12]+=   81;
	return 0x0;
}

u64 FlipFunctionBBWhite912(TConfig* configs) {
	configs[ 5]-=    6;
	configs[12]-=  567;
	configs[20]-=  486;
	configs[36]-=    6;
	return 0x20000000000;
}

u64 FlipFunctionBBBlack912(TConfig* configs) {
	configs[ 5]+=    6;
	configs[12]+=  567;
	configs[20]+=  486;
	configs[36]+=    6;
	return 0x20000000000;
}

u64 FlipFunctionBBWhite913(TConfig* configs) {
	configs[ 3]-=   54;
	configs[12]-=  135;
	configs[22]-=   54;
	configs[32]-=   54;
	return 0x8000000;
}

u64 FlipFunctionBBBlack913(TConfig* configs) {
	configs[ 3]+=   54;
	configs[12]+=  135;
	configs[22]+=   54;
	configs[32]+=   54;
	return 0x8000000;
}

u64 FlipFunctionBBWhite914(TConfig* configs) {
	configs[ 3]-=   54;
	configs[ 5]-=    6;
	configs[12]-=  621;
	configs[20]-=  486;
	configs[22]-=   54;
	configs[32]-=   54;
	configs[36]-=    6;
	return 0x20008000000;
}

u64 FlipFunctionBBBlack914(TConfig* configs) {
	configs[ 3]+=   54;
	configs[ 5]+=    6;
	configs[12]+=  621;
	configs[20]+=  486;
	configs[22]+=   54;
	configs[32]+=   54;
	configs[36]+=    6;
	return 0x20008000000;
}

u64 FlipFunctionBBWhite915(TConfig* configs) {
	configs[ 2]-=  162;
	configs[ 3]-=   54;
	configs[12]-=  153;
	configs[22]-=   54;
	configs[23]-=   18;
	configs[30]-=   18;
	configs[32]-=   54;
	return 0x8100000;
}

u64 FlipFunctionBBBlack915(TConfig* configs) {
	configs[ 2]+=  162;
	configs[ 3]+=   54;
	configs[12]+=  153;
	configs[22]+=   54;
	configs[23]+=   18;
	configs[30]+=   18;
	configs[32]+=   54;
	return 0x8100000;
}

u64 FlipFunctionBBWhite916(TConfig* configs) {
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
	return 0x20008100000;
}

u64 FlipFunctionBBBlack916(TConfig* configs) {
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
	return 0x20008100000;
}

u64 FlipFunctionBBWhite917(TConfig* configs) {
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
	return 0x8102000;
}

u64 FlipFunctionBBBlack917(TConfig* configs) {
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
	return 0x8102000;
}

u64 FlipFunctionBBWhite918(TConfig* configs) {
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
	return 0x20008102000;
}

u64 FlipFunctionBBBlack918(TConfig* configs) {
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
	return 0x20008102000;
}

u64 FlipFunctionBBWhite919(TConfig* configs) {
	configs[21]-=   81;
	return 0x0;
}

u64 FlipFunctionBBBlack919(TConfig* configs) {
	configs[21]+=   81;
	return 0x0;
}

u64 FlipFunctionBBWhite920(TConfig* configs) {
	configs[ 5]-=   18;
	configs[13]-=  486;
	configs[21]-=  567;
	configs[35]-=   18;
	return 0x40000000000;
}

u64 FlipFunctionBBBlack920(TConfig* configs) {
	configs[ 5]+=   18;
	configs[13]+=  486;
	configs[21]+=  567;
	configs[35]+=   18;
	return 0x40000000000;
}

u64 FlipFunctionBBWhite921(TConfig* configs) {
	configs[ 5]-=   18;
	configs[ 6]-=   18;
	configs[13]-=  486;
	configs[14]-=  486;
	configs[21]-= 2025;
	configs[35]-=   18;
	configs[36]-=   18;
	return 0x4040000000000;
}

u64 FlipFunctionBBBlack921(TConfig* configs) {
	configs[ 5]+=   18;
	configs[ 6]+=   18;
	configs[13]+=  486;
	configs[14]+=  486;
	configs[21]+= 2025;
	configs[35]+=   18;
	configs[36]+=   18;
	return 0x4040000000000;
}

u64 FlipFunctionBBWhite922(TConfig* configs) {
	configs[ 3]-=   18;
	configs[11]-=   54;
	configs[21]-=  135;
	configs[33]-=   18;
	return 0x4000000;
}

u64 FlipFunctionBBBlack922(TConfig* configs) {
	configs[ 3]+=   18;
	configs[11]+=   54;
	configs[21]+=  135;
	configs[33]+=   18;
	return 0x4000000;
}

u64 FlipFunctionBBWhite923(TConfig* configs) {
	configs[ 3]-=   18;
	configs[ 5]-=   18;
	configs[11]-=   54;
	configs[13]-=  486;
	configs[21]-=  621;
	configs[33]-=   18;
	configs[35]-=   18;
	return 0x40004000000;
}

u64 FlipFunctionBBBlack923(TConfig* configs) {
	configs[ 3]+=   18;
	configs[ 5]+=   18;
	configs[11]+=   54;
	configs[13]+=  486;
	configs[21]+=  621;
	configs[33]+=   18;
	configs[35]+=   18;
	return 0x40004000000;
}

u64 FlipFunctionBBWhite924(TConfig* configs) {
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
	return 0x4040004000000;
}

u64 FlipFunctionBBBlack924(TConfig* configs) {
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
	return 0x4040004000000;
}

u64 FlipFunctionBBWhite925(TConfig* configs) {
	configs[ 2]-=   18;
	configs[ 3]-=   18;
	configs[10]-=   18;
	configs[11]-=   54;
	configs[21]-=  153;
	configs[32]-=   18;
	configs[33]-=   18;
	return 0x4040000;
}

u64 FlipFunctionBBBlack925(TConfig* configs) {
	configs[ 2]+=   18;
	configs[ 3]+=   18;
	configs[10]+=   18;
	configs[11]+=   54;
	configs[21]+=  153;
	configs[32]+=   18;
	configs[33]+=   18;
	return 0x4040000;
}

u64 FlipFunctionBBWhite926(TConfig* configs) {
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
	return 0x40004040000;
}

u64 FlipFunctionBBBlack926(TConfig* configs) {
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
	return 0x40004040000;
}

u64 FlipFunctionBBWhite927(TConfig* configs) {
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
	return 0x4040004040000;
}

u64 FlipFunctionBBBlack927(TConfig* configs) {
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
	return 0x4040004040000;
}

u64 FlipFunctionBBWhite928(TConfig* configs) {
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
	return 0x4040400;
}

u64 FlipFunctionBBBlack928(TConfig* configs) {
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
	return 0x4040400;
}

u64 FlipFunctionBBWhite929(TConfig* configs) {
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
	return 0x40004040400;
}

u64 FlipFunctionBBBlack929(TConfig* configs) {
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
	return 0x40004040400;
}

u64 FlipFunctionBBWhite930(TConfig* configs) {
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
	return 0x4040004040400;
}

u64 FlipFunctionBBBlack930(TConfig* configs) {
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
	return 0x4040004040400;
}

u64 FlipFunctionBBWhite931(TConfig* configs) {
	configs[34]-=    9;
	return 0x0;
}

u64 FlipFunctionBBBlack931(TConfig* configs) {
	configs[34]+=    9;
	return 0x0;
}

u64 FlipFunctionBBWhite932(TConfig* configs) {
	configs[ 5]-=   54;
	configs[14]-=  162;
	configs[22]-=  486;
	configs[34]-=   63;
	return 0x80000000000;
}

u64 FlipFunctionBBBlack932(TConfig* configs) {
	configs[ 5]+=   54;
	configs[14]+=  162;
	configs[22]+=  486;
	configs[34]+=   63;
	return 0x80000000000;
}

u64 FlipFunctionBBWhite933(TConfig* configs) {
	configs[ 5]-=   54;
	configs[ 6]-=  162;
	configs[14]-=  162;
	configs[16]-=   54;
	configs[22]-=  486;
	configs[23]-= 1458;
	configs[34]-=  225;
	return 0x10080000000000;
}

u64 FlipFunctionBBBlack933(TConfig* configs) {
	configs[ 5]+=   54;
	configs[ 6]+=  162;
	configs[14]+=  162;
	configs[16]+=   54;
	configs[22]+=  486;
	configs[23]+= 1458;
	configs[34]+=  225;
	return 0x10080000000000;
}

u64 FlipFunctionBBWhite934(TConfig* configs) {
	configs[ 3]-=    6;
	configs[10]-=   54;
	configs[20]-=   54;
	configs[34]-=   15;
	return 0x2000000;
}

u64 FlipFunctionBBBlack934(TConfig* configs) {
	configs[ 3]+=    6;
	configs[10]+=   54;
	configs[20]+=   54;
	configs[34]+=   15;
	return 0x2000000;
}

u64 FlipFunctionBBWhite935(TConfig* configs) {
	configs[ 3]-=    6;
	configs[ 5]-=   54;
	configs[10]-=   54;
	configs[14]-=  162;
	configs[20]-=   54;
	configs[22]-=  486;
	configs[34]-=   69;
	return 0x80002000000;
}

u64 FlipFunctionBBBlack935(TConfig* configs) {
	configs[ 3]+=    6;
	configs[ 5]+=   54;
	configs[10]+=   54;
	configs[14]+=  162;
	configs[20]+=   54;
	configs[22]+=  486;
	configs[34]+=   69;
	return 0x80002000000;
}

u64 FlipFunctionBBWhite936(TConfig* configs) {
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
	return 0x10080002000000;
}

u64 FlipFunctionBBBlack936(TConfig* configs) {
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
	return 0x10080002000000;
}

u64 FlipFunctionBBWhite937(TConfig* configs) {
	configs[ 4]-=   27;
	return 0x800000000;
}

u64 FlipFunctionBBBlack937(TConfig* configs) {
	configs[ 4]+=   27;
	return 0x800000000;
}

u64 FlipFunctionBBWhite938(TConfig* configs) {
	configs[ 4]-=  189;
	configs[14]-=   54;
	configs[23]-=  162;
	configs[32]-=  162;
	return 0x1800000000;
}

u64 FlipFunctionBBBlack938(TConfig* configs) {
	configs[ 4]+=  189;
	configs[14]+=   54;
	configs[23]+=  162;
	configs[32]+=  162;
	return 0x1800000000;
}

u64 FlipFunctionBBWhite939(TConfig* configs) {
	configs[ 4]-=  675;
	configs[14]-=   54;
	configs[15]-=   18;
	configs[23]-=  162;
	configs[24]-=  162;
	configs[31]-=  162;
	configs[32]-=  162;
	return 0x3800000000;
}

u64 FlipFunctionBBBlack939(TConfig* configs) {
	configs[ 4]+=  675;
	configs[14]+=   54;
	configs[15]+=   18;
	configs[23]+=  162;
	configs[24]+=  162;
	configs[31]+=  162;
	configs[32]+=  162;
	return 0x3800000000;
}

u64 FlipFunctionBBWhite940(TConfig* configs) {
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
	return 0x7800000000;
}

u64 FlipFunctionBBBlack940(TConfig* configs) {
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
	return 0x7800000000;
}

u64 FlipFunctionBBWhite941(TConfig* configs) {
	configs[ 4]-=   45;
	configs[12]-=  162;
	configs[21]-=  162;
	configs[34]-=   18;
	return 0xc00000000;
}

u64 FlipFunctionBBBlack941(TConfig* configs) {
	configs[ 4]+=   45;
	configs[12]+=  162;
	configs[21]+=  162;
	configs[34]+=   18;
	return 0xc00000000;
}

u64 FlipFunctionBBWhite942(TConfig* configs) {
	configs[ 4]-=  207;
	configs[12]-=  162;
	configs[14]-=   54;
	configs[21]-=  162;
	configs[23]-=  162;
	configs[32]-=  162;
	configs[34]-=   18;
	return 0x1c00000000;
}

u64 FlipFunctionBBBlack942(TConfig* configs) {
	configs[ 4]+=  207;
	configs[12]+=  162;
	configs[14]+=   54;
	configs[21]+=  162;
	configs[23]+=  162;
	configs[32]+=  162;
	configs[34]+=   18;
	return 0x1c00000000;
}

u64 FlipFunctionBBWhite943(TConfig* configs) {
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
	return 0x3c00000000;
}

u64 FlipFunctionBBBlack943(TConfig* configs) {
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
	return 0x3c00000000;
}

u64 FlipFunctionBBWhite944(TConfig* configs) {
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
	return 0x7c00000000;
}

u64 FlipFunctionBBBlack944(TConfig* configs) {
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
	return 0x7c00000000;
}

u64 FlipFunctionBBWhite945(TConfig* configs) {
	configs[ 4]-=   51;
	configs[11]-=  162;
	configs[12]-=  162;
	configs[20]-=  162;
	configs[21]-=  162;
	configs[34]-=   18;
	configs[35]-=    6;
	return 0xe00000000;
}

u64 FlipFunctionBBBlack945(TConfig* configs) {
	configs[ 4]+=   51;
	configs[11]+=  162;
	configs[12]+=  162;
	configs[20]+=  162;
	configs[21]+=  162;
	configs[34]+=   18;
	configs[35]+=    6;
	return 0xe00000000;
}

u64 FlipFunctionBBWhite946(TConfig* configs) {
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
	return 0x1e00000000;
}

u64 FlipFunctionBBBlack946(TConfig* configs) {
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
	return 0x1e00000000;
}

u64 FlipFunctionBBWhite947(TConfig* configs) {
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
	return 0x3e00000000;
}

u64 FlipFunctionBBBlack947(TConfig* configs) {
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
	return 0x3e00000000;
}

u64 FlipFunctionBBWhite948(TConfig* configs) {
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
	return 0x7e00000000;
}

u64 FlipFunctionBBBlack948(TConfig* configs) {
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
	return 0x7e00000000;
}

u64 FlipFunctionBBWhite949(TConfig* configs) {
	configs[13]-=   81;
	return 0x0;
}

u64 FlipFunctionBBBlack949(TConfig* configs) {
	configs[13]+=   81;
	return 0x0;
}

u64 FlipFunctionBBWhite950(TConfig* configs) {
	configs[ 5]-=   18;
	configs[13]-=  567;
	configs[21]-=  486;
	configs[35]-=   18;
	return 0x40000000000;
}

u64 FlipFunctionBBBlack950(TConfig* configs) {
	configs[ 5]+=   18;
	configs[13]+=  567;
	configs[21]+=  486;
	configs[35]+=   18;
	return 0x40000000000;
}

u64 FlipFunctionBBWhite951(TConfig* configs) {
	configs[ 5]-=   18;
	configs[ 6]-=    6;
	configs[13]-= 2025;
	configs[20]-= 1458;
	configs[21]-=  486;
	configs[35]-=   18;
	configs[37]-=    6;
	return 0x2040000000000;
}

u64 FlipFunctionBBBlack951(TConfig* configs) {
	configs[ 5]+=   18;
	configs[ 6]+=    6;
	configs[13]+= 2025;
	configs[20]+= 1458;
	configs[21]+=  486;
	configs[35]+=   18;
	configs[37]+=    6;
	return 0x2040000000000;
}

u64 FlipFunctionBBWhite952(TConfig* configs) {
	configs[ 3]-=  162;
	configs[13]-=  135;
	configs[23]-=   54;
	configs[31]-=   54;
	return 0x10000000;
}

u64 FlipFunctionBBBlack952(TConfig* configs) {
	configs[ 3]+=  162;
	configs[13]+=  135;
	configs[23]+=   54;
	configs[31]+=   54;
	return 0x10000000;
}

u64 FlipFunctionBBWhite953(TConfig* configs) {
	configs[ 3]-=  162;
	configs[ 5]-=   18;
	configs[13]-=  621;
	configs[21]-=  486;
	configs[23]-=   54;
	configs[31]-=   54;
	configs[35]-=   18;
	return 0x40010000000;
}

u64 FlipFunctionBBBlack953(TConfig* configs) {
	configs[ 3]+=  162;
	configs[ 5]+=   18;
	configs[13]+=  621;
	configs[21]+=  486;
	configs[23]+=   54;
	configs[31]+=   54;
	configs[35]+=   18;
	return 0x40010000000;
}

u64 FlipFunctionBBWhite954(TConfig* configs) {
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
	return 0x2040010000000;
}

u64 FlipFunctionBBBlack954(TConfig* configs) {
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
	return 0x2040010000000;
}

u64 FlipFunctionBBWhite955(TConfig* configs) {
	configs[ 2]-=  486;
	configs[ 3]-=  162;
	configs[13]-=  153;
	configs[23]-=   54;
	configs[24]-=   18;
	configs[29]-=   18;
	configs[31]-=   54;
	return 0x10200000;
}

u64 FlipFunctionBBBlack955(TConfig* configs) {
	configs[ 2]+=  486;
	configs[ 3]+=  162;
	configs[13]+=  153;
	configs[23]+=   54;
	configs[24]+=   18;
	configs[29]+=   18;
	configs[31]+=   54;
	return 0x10200000;
}

u64 FlipFunctionBBWhite956(TConfig* configs) {
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
	return 0x40010200000;
}

u64 FlipFunctionBBBlack956(TConfig* configs) {
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
	return 0x40010200000;
}

u64 FlipFunctionBBWhite957(TConfig* configs) {
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
	return 0x2040010200000;
}

u64 FlipFunctionBBBlack957(TConfig* configs) {
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
	return 0x2040010200000;
}

u64 FlipFunctionBBWhite958(TConfig* configs) {
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
	return 0x10204000;
}

u64 FlipFunctionBBBlack958(TConfig* configs) {
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
	return 0x10204000;
}

u64 FlipFunctionBBWhite959(TConfig* configs) {
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
	return 0x40010204000;
}

u64 FlipFunctionBBBlack959(TConfig* configs) {
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
	return 0x40010204000;
}

u64 FlipFunctionBBWhite960(TConfig* configs) {
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
	return 0x2040010204000;
}

u64 FlipFunctionBBBlack960(TConfig* configs) {
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
	return 0x2040010204000;
}

u64 FlipFunctionBBWhite961(TConfig* configs) {
	configs[22]-=   81;
	return 0x0;
}

u64 FlipFunctionBBBlack961(TConfig* configs) {
	configs[22]+=   81;
	return 0x0;
}

u64 FlipFunctionBBWhite962(TConfig* configs) {
	configs[ 5]-=   54;
	configs[14]-=  162;
	configs[22]-=  567;
	configs[34]-=   54;
	return 0x80000000000;
}

u64 FlipFunctionBBBlack962(TConfig* configs) {
	configs[ 5]+=   54;
	configs[14]+=  162;
	configs[22]+=  567;
	configs[34]+=   54;
	return 0x80000000000;
}

u64 FlipFunctionBBWhite963(TConfig* configs) {
	configs[ 5]-=   54;
	configs[ 6]-=   54;
	configs[14]-=  162;
	configs[15]-=  162;
	configs[22]-= 2025;
	configs[34]-=   54;
	configs[35]-=   54;
	return 0x8080000000000;
}

u64 FlipFunctionBBBlack963(TConfig* configs) {
	configs[ 5]+=   54;
	configs[ 6]+=   54;
	configs[14]+=  162;
	configs[15]+=  162;
	configs[22]+= 2025;
	configs[34]+=   54;
	configs[35]+=   54;
	return 0x8080000000000;
}

u64 FlipFunctionBBWhite964(TConfig* configs) {
	configs[ 3]-=   54;
	configs[12]-=   54;
	configs[22]-=  135;
	configs[32]-=   54;
	return 0x8000000;
}

u64 FlipFunctionBBBlack964(TConfig* configs) {
	configs[ 3]+=   54;
	configs[12]+=   54;
	configs[22]+=  135;
	configs[32]+=   54;
	return 0x8000000;
}

u64 FlipFunctionBBWhite965(TConfig* configs) {
	configs[ 3]-=   54;
	configs[ 5]-=   54;
	configs[12]-=   54;
	configs[14]-=  162;
	configs[22]-=  621;
	configs[32]-=   54;
	configs[34]-=   54;
	return 0x80008000000;
}

u64 FlipFunctionBBBlack965(TConfig* configs) {
	configs[ 3]+=   54;
	configs[ 5]+=   54;
	configs[12]+=   54;
	configs[14]+=  162;
	configs[22]+=  621;
	configs[32]+=   54;
	configs[34]+=   54;
	return 0x80008000000;
}

u64 FlipFunctionBBWhite966(TConfig* configs) {
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
	return 0x8080008000000;
}

u64 FlipFunctionBBBlack966(TConfig* configs) {
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
	return 0x8080008000000;
}

u64 FlipFunctionBBWhite967(TConfig* configs) {
	configs[ 2]-=   54;
	configs[ 3]-=   54;
	configs[11]-=   18;
	configs[12]-=   54;
	configs[22]-=  153;
	configs[31]-=   18;
	configs[32]-=   54;
	return 0x8080000;
}

u64 FlipFunctionBBBlack967(TConfig* configs) {
	configs[ 2]+=   54;
	configs[ 3]+=   54;
	configs[11]+=   18;
	configs[12]+=   54;
	configs[22]+=  153;
	configs[31]+=   18;
	configs[32]+=   54;
	return 0x8080000;
}

u64 FlipFunctionBBWhite968(TConfig* configs) {
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
	return 0x80008080000;
}

u64 FlipFunctionBBBlack968(TConfig* configs) {
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
	return 0x80008080000;
}

u64 FlipFunctionBBWhite969(TConfig* configs) {
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
	return 0x8080008080000;
}

u64 FlipFunctionBBBlack969(TConfig* configs) {
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
	return 0x8080008080000;
}

u64 FlipFunctionBBWhite970(TConfig* configs) {
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
	return 0x8080800;
}

u64 FlipFunctionBBBlack970(TConfig* configs) {
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
	return 0x8080800;
}

u64 FlipFunctionBBWhite971(TConfig* configs) {
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
	return 0x80008080800;
}

u64 FlipFunctionBBBlack971(TConfig* configs) {
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
	return 0x80008080800;
}

u64 FlipFunctionBBWhite972(TConfig* configs) {
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
	return 0x8080008080800;
}

u64 FlipFunctionBBBlack972(TConfig* configs) {
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
	return 0x8080008080800;
}

u64 FlipFunctionBBWhite973(TConfig* configs) {
	configs[33]-=   27;
	return 0x0;
}

u64 FlipFunctionBBBlack973(TConfig* configs) {
	configs[33]+=   27;
	return 0x0;
}

u64 FlipFunctionBBWhite974(TConfig* configs) {
	configs[ 5]-=  162;
	configs[15]-=   54;
	configs[23]-=  486;
	configs[33]-=  189;
	return 0x100000000000;
}

u64 FlipFunctionBBBlack974(TConfig* configs) {
	configs[ 5]+=  162;
	configs[15]+=   54;
	configs[23]+=  486;
	configs[33]+=  189;
	return 0x100000000000;
}

u64 FlipFunctionBBWhite975(TConfig* configs) {
	configs[ 5]-=  162;
	configs[ 6]-=  486;
	configs[15]-=   54;
	configs[17]-=   18;
	configs[23]-=  486;
	configs[24]-= 1458;
	configs[33]-=  675;
	return 0x20100000000000;
}

u64 FlipFunctionBBBlack975(TConfig* configs) {
	configs[ 5]+=  162;
	configs[ 6]+=  486;
	configs[15]+=   54;
	configs[17]+=   18;
	configs[23]+=  486;
	configs[24]+= 1458;
	configs[33]+=  675;
	return 0x20100000000000;
}

u64 FlipFunctionBBWhite976(TConfig* configs) {
	configs[ 3]-=   18;
	configs[11]-=   54;
	configs[21]-=   54;
	configs[33]-=   45;
	return 0x4000000;
}

u64 FlipFunctionBBBlack976(TConfig* configs) {
	configs[ 3]+=   18;
	configs[11]+=   54;
	configs[21]+=   54;
	configs[33]+=   45;
	return 0x4000000;
}

u64 FlipFunctionBBWhite977(TConfig* configs) {
	configs[ 3]-=   18;
	configs[ 5]-=  162;
	configs[11]-=   54;
	configs[15]-=   54;
	configs[21]-=   54;
	configs[23]-=  486;
	configs[33]-=  207;
	return 0x100004000000;
}

u64 FlipFunctionBBBlack977(TConfig* configs) {
	configs[ 3]+=   18;
	configs[ 5]+=  162;
	configs[11]+=   54;
	configs[15]+=   54;
	configs[21]+=   54;
	configs[23]+=  486;
	configs[33]+=  207;
	return 0x100004000000;
}

u64 FlipFunctionBBWhite978(TConfig* configs) {
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
	return 0x20100004000000;
}

u64 FlipFunctionBBBlack978(TConfig* configs) {
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
	return 0x20100004000000;
}

u64 FlipFunctionBBWhite979(TConfig* configs) {
	configs[ 2]-=    6;
	configs[ 3]-=   18;
	configs[ 9]-=   18;
	configs[11]-=   54;
	configs[20]-=   18;
	configs[21]-=   54;
	configs[33]-=   51;
	return 0x4020000;
}

u64 FlipFunctionBBBlack979(TConfig* configs) {
	configs[ 2]+=    6;
	configs[ 3]+=   18;
	configs[ 9]+=   18;
	configs[11]+=   54;
	configs[20]+=   18;
	configs[21]+=   54;
	configs[33]+=   51;
	return 0x4020000;
}

u64 FlipFunctionBBWhite980(TConfig* configs) {
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
	return 0x100004020000;
}

u64 FlipFunctionBBBlack980(TConfig* configs) {
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
	return 0x100004020000;
}

u64 FlipFunctionBBWhite981(TConfig* configs) {
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
	return 0x20100004020000;
}

u64 FlipFunctionBBBlack981(TConfig* configs) {
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
	return 0x20100004020000;
}

u64 FlipFunctionBBWhite982(TConfig* configs) {
	configs[ 4]-=   81;
	return 0x1000000000;
}

u64 FlipFunctionBBBlack982(TConfig* configs) {
	configs[ 4]+=   81;
	return 0x1000000000;
}

u64 FlipFunctionBBWhite983(TConfig* configs) {
	configs[ 4]-=  567;
	configs[15]-=   18;
	configs[24]-=  162;
	configs[31]-=  162;
	return 0x3000000000;
}

u64 FlipFunctionBBBlack983(TConfig* configs) {
	configs[ 4]+=  567;
	configs[15]+=   18;
	configs[24]+=  162;
	configs[31]+=  162;
	return 0x3000000000;
}

u64 FlipFunctionBBWhite984(TConfig* configs) {
	configs[ 4]-= 2025;
	configs[15]-=   18;
	configs[16]-=    6;
	configs[24]-=  162;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[31]-=  162;
	return 0x7000000000;
}

u64 FlipFunctionBBBlack984(TConfig* configs) {
	configs[ 4]+= 2025;
	configs[15]+=   18;
	configs[16]+=    6;
	configs[24]+=  162;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[31]+=  162;
	return 0x7000000000;
}

u64 FlipFunctionBBWhite985(TConfig* configs) {
	configs[ 4]-=  135;
	configs[13]-=  162;
	configs[22]-=  162;
	configs[33]-=   54;
	return 0x1800000000;
}

u64 FlipFunctionBBBlack985(TConfig* configs) {
	configs[ 4]+=  135;
	configs[13]+=  162;
	configs[22]+=  162;
	configs[33]+=   54;
	return 0x1800000000;
}

u64 FlipFunctionBBWhite986(TConfig* configs) {
	configs[ 4]-=  621;
	configs[13]-=  162;
	configs[15]-=   18;
	configs[22]-=  162;
	configs[24]-=  162;
	configs[31]-=  162;
	configs[33]-=   54;
	return 0x3800000000;
}

u64 FlipFunctionBBBlack986(TConfig* configs) {
	configs[ 4]+=  621;
	configs[13]+=  162;
	configs[15]+=   18;
	configs[22]+=  162;
	configs[24]+=  162;
	configs[31]+=  162;
	configs[33]+=   54;
	return 0x3800000000;
}

u64 FlipFunctionBBWhite987(TConfig* configs) {
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
	return 0x7800000000;
}

u64 FlipFunctionBBBlack987(TConfig* configs) {
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
	return 0x7800000000;
}

u64 FlipFunctionBBWhite988(TConfig* configs) {
	configs[ 4]-=  153;
	configs[12]-=  162;
	configs[13]-=  162;
	configs[21]-=  162;
	configs[22]-=  162;
	configs[33]-=   54;
	configs[34]-=   18;
	return 0x1c00000000;
}

u64 FlipFunctionBBBlack988(TConfig* configs) {
	configs[ 4]+=  153;
	configs[12]+=  162;
	configs[13]+=  162;
	configs[21]+=  162;
	configs[22]+=  162;
	configs[33]+=   54;
	configs[34]+=   18;
	return 0x1c00000000;
}

u64 FlipFunctionBBWhite989(TConfig* configs) {
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
	return 0x3c00000000;
}

u64 FlipFunctionBBBlack989(TConfig* configs) {
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
	return 0x3c00000000;
}

u64 FlipFunctionBBWhite990(TConfig* configs) {
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
	return 0x7c00000000;
}

u64 FlipFunctionBBBlack990(TConfig* configs) {
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
	return 0x7c00000000;
}

u64 FlipFunctionBBWhite991(TConfig* configs) {
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
	return 0x1e00000000;
}

u64 FlipFunctionBBBlack991(TConfig* configs) {
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
	return 0x1e00000000;
}

u64 FlipFunctionBBWhite992(TConfig* configs) {
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
	return 0x3e00000000;
}

u64 FlipFunctionBBBlack992(TConfig* configs) {
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
	return 0x3e00000000;
}

u64 FlipFunctionBBWhite993(TConfig* configs) {
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
	return 0x7e00000000;
}

u64 FlipFunctionBBBlack993(TConfig* configs) {
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
	return 0x7e00000000;
}

u64 FlipFunctionBBWhite994(TConfig* configs) {
	configs[14]-=   27;
	return 0x0;
}

u64 FlipFunctionBBBlack994(TConfig* configs) {
	configs[14]+=   27;
	return 0x0;
}

u64 FlipFunctionBBWhite995(TConfig* configs) {
	configs[ 5]-=   54;
	configs[14]-=  189;
	configs[22]-=  486;
	configs[34]-=   54;
	return 0x80000000000;
}

u64 FlipFunctionBBBlack995(TConfig* configs) {
	configs[ 5]+=   54;
	configs[14]+=  189;
	configs[22]+=  486;
	configs[34]+=   54;
	return 0x80000000000;
}

u64 FlipFunctionBBWhite996(TConfig* configs) {
	configs[ 5]-=   54;
	configs[ 6]-=   18;
	configs[14]-=  675;
	configs[21]-= 1458;
	configs[22]-=  486;
	configs[34]-=   54;
	configs[36]-=   18;
	return 0x4080000000000;
}

u64 FlipFunctionBBBlack996(TConfig* configs) {
	configs[ 5]+=   54;
	configs[ 6]+=   18;
	configs[14]+=  675;
	configs[21]+= 1458;
	configs[22]+=  486;
	configs[34]+=   54;
	configs[36]+=   18;
	return 0x4080000000000;
}

u64 FlipFunctionBBWhite997(TConfig* configs) {
	configs[ 3]-=  486;
	configs[14]-=   45;
	configs[24]-=   54;
	configs[30]-=   54;
	return 0x20000000;
}

u64 FlipFunctionBBBlack997(TConfig* configs) {
	configs[ 3]+=  486;
	configs[14]+=   45;
	configs[24]+=   54;
	configs[30]+=   54;
	return 0x20000000;
}

u64 FlipFunctionBBWhite998(TConfig* configs) {
	configs[ 3]-=  486;
	configs[ 5]-=   54;
	configs[14]-=  207;
	configs[22]-=  486;
	configs[24]-=   54;
	configs[30]-=   54;
	configs[34]-=   54;
	return 0x80020000000;
}

u64 FlipFunctionBBBlack998(TConfig* configs) {
	configs[ 3]+=  486;
	configs[ 5]+=   54;
	configs[14]+=  207;
	configs[22]+=  486;
	configs[24]+=   54;
	configs[30]+=   54;
	configs[34]+=   54;
	return 0x80020000000;
}

u64 FlipFunctionBBWhite999(TConfig* configs) {
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
	return 0x4080020000000;
}

u64 FlipFunctionBBBlack999(TConfig* configs) {
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
	return 0x4080020000000;
}

u64 FlipFunctionBBWhite1000(TConfig* configs) {
	configs[ 2]-= 1458;
	configs[ 3]-=  486;
	configs[14]-=   51;
	configs[24]-=   54;
	configs[25]-=   18;
	configs[28]-=   18;
	configs[30]-=   54;
	return 0x20400000;
}

u64 FlipFunctionBBBlack1000(TConfig* configs) {
	configs[ 2]+= 1458;
	configs[ 3]+=  486;
	configs[14]+=   51;
	configs[24]+=   54;
	configs[25]+=   18;
	configs[28]+=   18;
	configs[30]+=   54;
	return 0x20400000;
}

u64 FlipFunctionBBWhite1001(TConfig* configs) {
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
	return 0x80020400000;
}

u64 FlipFunctionBBBlack1001(TConfig* configs) {
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
	return 0x80020400000;
}

u64 FlipFunctionBBWhite1002(TConfig* configs) {
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
	return 0x4080020400000;
}

u64 FlipFunctionBBBlack1002(TConfig* configs) {
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
	return 0x4080020400000;
}

u64 FlipFunctionBBWhite1003(TConfig* configs) {
	configs[23]-=   81;
	return 0x0;
}

u64 FlipFunctionBBBlack1003(TConfig* configs) {
	configs[23]+=   81;
	return 0x0;
}

u64 FlipFunctionBBWhite1004(TConfig* configs) {
	configs[ 5]-=  162;
	configs[15]-=   54;
	configs[23]-=  567;
	configs[33]-=  162;
	return 0x100000000000;
}

u64 FlipFunctionBBBlack1004(TConfig* configs) {
	configs[ 5]+=  162;
	configs[15]+=   54;
	configs[23]+=  567;
	configs[33]+=  162;
	return 0x100000000000;
}

u64 FlipFunctionBBWhite1005(TConfig* configs) {
	configs[ 5]-=  162;
	configs[ 6]-=  162;
	configs[15]-=   54;
	configs[16]-=   54;
	configs[23]-= 2025;
	configs[33]-=  162;
	configs[34]-=  162;
	return 0x10100000000000;
}

u64 FlipFunctionBBBlack1005(TConfig* configs) {
	configs[ 5]+=  162;
	configs[ 6]+=  162;
	configs[15]+=   54;
	configs[16]+=   54;
	configs[23]+= 2025;
	configs[33]+=  162;
	configs[34]+=  162;
	return 0x10100000000000;
}

u64 FlipFunctionBBWhite1006(TConfig* configs) {
	configs[ 3]-=  162;
	configs[13]-=   54;
	configs[23]-=  135;
	configs[31]-=   54;
	return 0x10000000;
}

u64 FlipFunctionBBBlack1006(TConfig* configs) {
	configs[ 3]+=  162;
	configs[13]+=   54;
	configs[23]+=  135;
	configs[31]+=   54;
	return 0x10000000;
}

u64 FlipFunctionBBWhite1007(TConfig* configs) {
	configs[ 3]-=  162;
	configs[ 5]-=  162;
	configs[13]-=   54;
	configs[15]-=   54;
	configs[23]-=  621;
	configs[31]-=   54;
	configs[33]-=  162;
	return 0x100010000000;
}

u64 FlipFunctionBBBlack1007(TConfig* configs) {
	configs[ 3]+=  162;
	configs[ 5]+=  162;
	configs[13]+=   54;
	configs[15]+=   54;
	configs[23]+=  621;
	configs[31]+=   54;
	configs[33]+=  162;
	return 0x100010000000;
}

u64 FlipFunctionBBWhite1008(TConfig* configs) {
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
	return 0x10100010000000;
}

u64 FlipFunctionBBBlack1008(TConfig* configs) {
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
	return 0x10100010000000;
}

u64 FlipFunctionBBWhite1009(TConfig* configs) {
	configs[ 2]-=  162;
	configs[ 3]-=  162;
	configs[12]-=   18;
	configs[13]-=   54;
	configs[23]-=  153;
	configs[30]-=   18;
	configs[31]-=   54;
	return 0x10100000;
}

u64 FlipFunctionBBBlack1009(TConfig* configs) {
	configs[ 2]+=  162;
	configs[ 3]+=  162;
	configs[12]+=   18;
	configs[13]+=   54;
	configs[23]+=  153;
	configs[30]+=   18;
	configs[31]+=   54;
	return 0x10100000;
}

u64 FlipFunctionBBWhite1010(TConfig* configs) {
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
	return 0x100010100000;
}

u64 FlipFunctionBBBlack1010(TConfig* configs) {
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
	return 0x100010100000;
}

u64 FlipFunctionBBWhite1011(TConfig* configs) {
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
	return 0x10100010100000;
}

u64 FlipFunctionBBBlack1011(TConfig* configs) {
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
	return 0x10100010100000;
}

u64 FlipFunctionBBWhite1012(TConfig* configs) {
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
	return 0x10101000;
}

u64 FlipFunctionBBBlack1012(TConfig* configs) {
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
	return 0x10101000;
}

u64 FlipFunctionBBWhite1013(TConfig* configs) {
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
	return 0x100010101000;
}

u64 FlipFunctionBBBlack1013(TConfig* configs) {
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
	return 0x100010101000;
}

u64 FlipFunctionBBWhite1014(TConfig* configs) {
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
	return 0x10100010101000;
}

u64 FlipFunctionBBBlack1014(TConfig* configs) {
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
	return 0x10100010101000;
}

u64 FlipFunctionBBWhite1015(TConfig* configs) {
	configs[32]-=   81;
	return 0x0;
}

u64 FlipFunctionBBBlack1015(TConfig* configs) {
	configs[32]+=   81;
	return 0x0;
}

u64 FlipFunctionBBWhite1016(TConfig* configs) {
	configs[ 5]-=  486;
	configs[16]-=   18;
	configs[24]-=  486;
	configs[32]-=  567;
	return 0x200000000000;
}

u64 FlipFunctionBBBlack1016(TConfig* configs) {
	configs[ 5]+=  486;
	configs[16]+=   18;
	configs[24]+=  486;
	configs[32]+=  567;
	return 0x200000000000;
}

u64 FlipFunctionBBWhite1017(TConfig* configs) {
	configs[ 5]-=  486;
	configs[ 6]-= 1458;
	configs[16]-=   18;
	configs[18]-=    6;
	configs[24]-=  486;
	configs[25]-= 1458;
	configs[32]-= 2025;
	return 0x40200000000000;
}

u64 FlipFunctionBBBlack1017(TConfig* configs) {
	configs[ 5]+=  486;
	configs[ 6]+= 1458;
	configs[16]+=   18;
	configs[18]+=    6;
	configs[24]+=  486;
	configs[25]+= 1458;
	configs[32]+= 2025;
	return 0x40200000000000;
}

u64 FlipFunctionBBWhite1018(TConfig* configs) {
	configs[ 3]-=   54;
	configs[12]-=   54;
	configs[22]-=   54;
	configs[32]-=  135;
	return 0x8000000;
}

u64 FlipFunctionBBBlack1018(TConfig* configs) {
	configs[ 3]+=   54;
	configs[12]+=   54;
	configs[22]+=   54;
	configs[32]+=  135;
	return 0x8000000;
}

u64 FlipFunctionBBWhite1019(TConfig* configs) {
	configs[ 3]-=   54;
	configs[ 5]-=  486;
	configs[12]-=   54;
	configs[16]-=   18;
	configs[22]-=   54;
	configs[24]-=  486;
	configs[32]-=  621;
	return 0x200008000000;
}

u64 FlipFunctionBBBlack1019(TConfig* configs) {
	configs[ 3]+=   54;
	configs[ 5]+=  486;
	configs[12]+=   54;
	configs[16]+=   18;
	configs[22]+=   54;
	configs[24]+=  486;
	configs[32]+=  621;
	return 0x200008000000;
}

u64 FlipFunctionBBWhite1020(TConfig* configs) {
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
	return 0x40200008000000;
}

u64 FlipFunctionBBBlack1020(TConfig* configs) {
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
	return 0x40200008000000;
}

u64 FlipFunctionBBWhite1021(TConfig* configs) {
	configs[ 2]-=   18;
	configs[ 3]-=   54;
	configs[10]-=   18;
	configs[12]-=   54;
	configs[21]-=   18;
	configs[22]-=   54;
	configs[32]-=  153;
	return 0x8040000;
}

u64 FlipFunctionBBBlack1021(TConfig* configs) {
	configs[ 2]+=   18;
	configs[ 3]+=   54;
	configs[10]+=   18;
	configs[12]+=   54;
	configs[21]+=   18;
	configs[22]+=   54;
	configs[32]+=  153;
	return 0x8040000;
}

u64 FlipFunctionBBWhite1022(TConfig* configs) {
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
	return 0x200008040000;
}

u64 FlipFunctionBBBlack1022(TConfig* configs) {
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
	return 0x200008040000;
}

u64 FlipFunctionBBWhite1023(TConfig* configs) {
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
	return 0x40200008040000;
}

u64 FlipFunctionBBBlack1023(TConfig* configs) {
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
	return 0x40200008040000;
}

u64 FlipFunctionBBWhite1024(TConfig* configs) {
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
	return 0x8040200;
}

u64 FlipFunctionBBBlack1024(TConfig* configs) {
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
	return 0x8040200;
}

u64 FlipFunctionBBWhite1025(TConfig* configs) {
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
	return 0x200008040200;
}

u64 FlipFunctionBBBlack1025(TConfig* configs) {
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
	return 0x200008040200;
}

u64 FlipFunctionBBWhite1026(TConfig* configs) {
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
	return 0x40200008040200;
}

u64 FlipFunctionBBBlack1026(TConfig* configs) {
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
	return 0x40200008040200;
}

u64 FlipFunctionBBWhite1027(TConfig* configs) {
	configs[ 4]-=  243;
	return 0x2000000000;
}

u64 FlipFunctionBBBlack1027(TConfig* configs) {
	configs[ 4]+=  243;
	return 0x2000000000;
}

u64 FlipFunctionBBWhite1028(TConfig* configs) {
	configs[ 4]-= 1701;
	configs[16]-=    6;
	configs[25]-=  162;
	configs[30]-=  162;
	return 0x6000000000;
}

u64 FlipFunctionBBBlack1028(TConfig* configs) {
	configs[ 4]+= 1701;
	configs[16]+=    6;
	configs[25]+=  162;
	configs[30]+=  162;
	return 0x6000000000;
}

u64 FlipFunctionBBWhite1029(TConfig* configs) {
	configs[ 4]-=  405;
	configs[14]-=   54;
	configs[23]-=  162;
	configs[32]-=  162;
	return 0x3000000000;
}

u64 FlipFunctionBBBlack1029(TConfig* configs) {
	configs[ 4]+=  405;
	configs[14]+=   54;
	configs[23]+=  162;
	configs[32]+=  162;
	return 0x3000000000;
}

u64 FlipFunctionBBWhite1030(TConfig* configs) {
	configs[ 4]-= 1863;
	configs[14]-=   54;
	configs[16]-=    6;
	configs[23]-=  162;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[32]-=  162;
	return 0x7000000000;
}

u64 FlipFunctionBBBlack1030(TConfig* configs) {
	configs[ 4]+= 1863;
	configs[14]+=   54;
	configs[16]+=    6;
	configs[23]+=  162;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[32]+=  162;
	return 0x7000000000;
}

u64 FlipFunctionBBWhite1031(TConfig* configs) {
	configs[ 4]-=  459;
	configs[13]-=  162;
	configs[14]-=   54;
	configs[22]-=  162;
	configs[23]-=  162;
	configs[32]-=  162;
	configs[33]-=   54;
	return 0x3800000000;
}

u64 FlipFunctionBBBlack1031(TConfig* configs) {
	configs[ 4]+=  459;
	configs[13]+=  162;
	configs[14]+=   54;
	configs[22]+=  162;
	configs[23]+=  162;
	configs[32]+=  162;
	configs[33]+=   54;
	return 0x3800000000;
}

u64 FlipFunctionBBWhite1032(TConfig* configs) {
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
	return 0x7800000000;
}

u64 FlipFunctionBBBlack1032(TConfig* configs) {
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
	return 0x7800000000;
}

u64 FlipFunctionBBWhite1033(TConfig* configs) {
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
	return 0x3c00000000;
}

u64 FlipFunctionBBBlack1033(TConfig* configs) {
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
	return 0x3c00000000;
}

u64 FlipFunctionBBWhite1034(TConfig* configs) {
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
	return 0x7c00000000;
}

u64 FlipFunctionBBBlack1034(TConfig* configs) {
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
	return 0x7c00000000;
}

u64 FlipFunctionBBWhite1035(TConfig* configs) {
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
	return 0x3e00000000;
}

u64 FlipFunctionBBBlack1035(TConfig* configs) {
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
	return 0x3e00000000;
}

u64 FlipFunctionBBWhite1036(TConfig* configs) {
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
	return 0x7e00000000;
}

u64 FlipFunctionBBBlack1036(TConfig* configs) {
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
	return 0x7e00000000;
}

u64 FlipFunctionBBWhite1037(TConfig* configs) {
	configs[15]-=    9;
	return 0x0;
}

u64 FlipFunctionBBBlack1037(TConfig* configs) {
	configs[15]+=    9;
	return 0x0;
}

u64 FlipFunctionBBWhite1038(TConfig* configs) {
	configs[ 5]-=  162;
	configs[15]-=   63;
	configs[23]-=  486;
	configs[33]-=  162;
	return 0x100000000000;
}

u64 FlipFunctionBBBlack1038(TConfig* configs) {
	configs[ 5]+=  162;
	configs[15]+=   63;
	configs[23]+=  486;
	configs[33]+=  162;
	return 0x100000000000;
}

u64 FlipFunctionBBWhite1039(TConfig* configs) {
	configs[ 5]-=  162;
	configs[ 6]-=   54;
	configs[15]-=  225;
	configs[22]-= 1458;
	configs[23]-=  486;
	configs[33]-=  162;
	configs[35]-=   54;
	return 0x8100000000000;
}

u64 FlipFunctionBBBlack1039(TConfig* configs) {
	configs[ 5]+=  162;
	configs[ 6]+=   54;
	configs[15]+=  225;
	configs[22]+= 1458;
	configs[23]+=  486;
	configs[33]+=  162;
	configs[35]+=   54;
	return 0x8100000000000;
}

u64 FlipFunctionBBWhite1040(TConfig* configs) {
	configs[ 3]-= 1458;
	configs[15]-=   15;
	configs[25]-=   54;
	configs[29]-=   54;
	return 0x40000000;
}

u64 FlipFunctionBBBlack1040(TConfig* configs) {
	configs[ 3]+= 1458;
	configs[15]+=   15;
	configs[25]+=   54;
	configs[29]+=   54;
	return 0x40000000;
}

u64 FlipFunctionBBWhite1041(TConfig* configs) {
	configs[ 3]-= 1458;
	configs[ 5]-=  162;
	configs[15]-=   69;
	configs[23]-=  486;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[33]-=  162;
	return 0x100040000000;
}

u64 FlipFunctionBBBlack1041(TConfig* configs) {
	configs[ 3]+= 1458;
	configs[ 5]+=  162;
	configs[15]+=   69;
	configs[23]+=  486;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[33]+=  162;
	return 0x100040000000;
}

u64 FlipFunctionBBWhite1042(TConfig* configs) {
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
	return 0x8100040000000;
}

u64 FlipFunctionBBBlack1042(TConfig* configs) {
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
	return 0x8100040000000;
}

u64 FlipFunctionBBWhite1043(TConfig* configs) {
	configs[24]-=   81;
	return 0x0;
}

u64 FlipFunctionBBBlack1043(TConfig* configs) {
	configs[24]+=   81;
	return 0x0;
}

u64 FlipFunctionBBWhite1044(TConfig* configs) {
	configs[ 5]-=  486;
	configs[16]-=   18;
	configs[24]-=  567;
	configs[32]-=  486;
	return 0x200000000000;
}

u64 FlipFunctionBBBlack1044(TConfig* configs) {
	configs[ 5]+=  486;
	configs[16]+=   18;
	configs[24]+=  567;
	configs[32]+=  486;
	return 0x200000000000;
}

u64 FlipFunctionBBWhite1045(TConfig* configs) {
	configs[ 5]-=  486;
	configs[ 6]-=  486;
	configs[16]-=   18;
	configs[17]-=   18;
	configs[24]-= 2025;
	configs[32]-=  486;
	configs[33]-=  486;
	return 0x20200000000000;
}

u64 FlipFunctionBBBlack1045(TConfig* configs) {
	configs[ 5]+=  486;
	configs[ 6]+=  486;
	configs[16]+=   18;
	configs[17]+=   18;
	configs[24]+= 2025;
	configs[32]+=  486;
	configs[33]+=  486;
	return 0x20200000000000;
}

u64 FlipFunctionBBWhite1046(TConfig* configs) {
	configs[ 3]-=  486;
	configs[14]-=   18;
	configs[24]-=  135;
	configs[30]-=   54;
	return 0x20000000;
}

u64 FlipFunctionBBBlack1046(TConfig* configs) {
	configs[ 3]+=  486;
	configs[14]+=   18;
	configs[24]+=  135;
	configs[30]+=   54;
	return 0x20000000;
}

u64 FlipFunctionBBWhite1047(TConfig* configs) {
	configs[ 3]-=  486;
	configs[ 5]-=  486;
	configs[14]-=   18;
	configs[16]-=   18;
	configs[24]-=  621;
	configs[30]-=   54;
	configs[32]-=  486;
	return 0x200020000000;
}

u64 FlipFunctionBBBlack1047(TConfig* configs) {
	configs[ 3]+=  486;
	configs[ 5]+=  486;
	configs[14]+=   18;
	configs[16]+=   18;
	configs[24]+=  621;
	configs[30]+=   54;
	configs[32]+=  486;
	return 0x200020000000;
}

u64 FlipFunctionBBWhite1048(TConfig* configs) {
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
	return 0x20200020000000;
}

u64 FlipFunctionBBBlack1048(TConfig* configs) {
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
	return 0x20200020000000;
}

u64 FlipFunctionBBWhite1049(TConfig* configs) {
	configs[ 2]-=  486;
	configs[ 3]-=  486;
	configs[13]-=   18;
	configs[14]-=   18;
	configs[24]-=  153;
	configs[29]-=   18;
	configs[30]-=   54;
	return 0x20200000;
}

u64 FlipFunctionBBBlack1049(TConfig* configs) {
	configs[ 2]+=  486;
	configs[ 3]+=  486;
	configs[13]+=   18;
	configs[14]+=   18;
	configs[24]+=  153;
	configs[29]+=   18;
	configs[30]+=   54;
	return 0x20200000;
}

u64 FlipFunctionBBWhite1050(TConfig* configs) {
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
	return 0x200020200000;
}

u64 FlipFunctionBBBlack1050(TConfig* configs) {
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
	return 0x200020200000;
}

u64 FlipFunctionBBWhite1051(TConfig* configs) {
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
	return 0x20200020200000;
}

u64 FlipFunctionBBBlack1051(TConfig* configs) {
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
	return 0x20200020200000;
}

u64 FlipFunctionBBWhite1052(TConfig* configs) {
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
	return 0x20202000;
}

u64 FlipFunctionBBBlack1052(TConfig* configs) {
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
	return 0x20202000;
}

u64 FlipFunctionBBWhite1053(TConfig* configs) {
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
	return 0x200020202000;
}

u64 FlipFunctionBBBlack1053(TConfig* configs) {
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
	return 0x200020202000;
}

u64 FlipFunctionBBWhite1054(TConfig* configs) {
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
	return 0x20200020202000;
}

u64 FlipFunctionBBBlack1054(TConfig* configs) {
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
	return 0x20200020202000;
}

u64 FlipFunctionBBWhite1055(TConfig* configs) {
	configs[31]-=   81;
	return 0x0;
}

u64 FlipFunctionBBBlack1055(TConfig* configs) {
	configs[31]+=   81;
	return 0x0;
}

u64 FlipFunctionBBWhite1056(TConfig* configs) {
	configs[ 5]-= 1458;
	configs[17]-=    6;
	configs[25]-=  486;
	configs[31]-=  567;
	return 0x400000000000;
}

u64 FlipFunctionBBBlack1056(TConfig* configs) {
	configs[ 5]+= 1458;
	configs[17]+=    6;
	configs[25]+=  486;
	configs[31]+=  567;
	return 0x400000000000;
}

u64 FlipFunctionBBWhite1057(TConfig* configs) {
	configs[ 3]-=  162;
	configs[13]-=   54;
	configs[23]-=   54;
	configs[31]-=  135;
	return 0x10000000;
}

u64 FlipFunctionBBBlack1057(TConfig* configs) {
	configs[ 3]+=  162;
	configs[13]+=   54;
	configs[23]+=   54;
	configs[31]+=  135;
	return 0x10000000;
}

u64 FlipFunctionBBWhite1058(TConfig* configs) {
	configs[ 3]-=  162;
	configs[ 5]-= 1458;
	configs[13]-=   54;
	configs[17]-=    6;
	configs[23]-=   54;
	configs[25]-=  486;
	configs[31]-=  621;
	return 0x400010000000;
}

u64 FlipFunctionBBBlack1058(TConfig* configs) {
	configs[ 3]+=  162;
	configs[ 5]+= 1458;
	configs[13]+=   54;
	configs[17]+=    6;
	configs[23]+=   54;
	configs[25]+=  486;
	configs[31]+=  621;
	return 0x400010000000;
}

u64 FlipFunctionBBWhite1059(TConfig* configs) {
	configs[ 2]-=   54;
	configs[ 3]-=  162;
	configs[11]-=   18;
	configs[13]-=   54;
	configs[22]-=   18;
	configs[23]-=   54;
	configs[31]-=  153;
	return 0x10080000;
}

u64 FlipFunctionBBBlack1059(TConfig* configs) {
	configs[ 2]+=   54;
	configs[ 3]+=  162;
	configs[11]+=   18;
	configs[13]+=   54;
	configs[22]+=   18;
	configs[23]+=   54;
	configs[31]+=  153;
	return 0x10080000;
}

u64 FlipFunctionBBWhite1060(TConfig* configs) {
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
	return 0x400010080000;
}

u64 FlipFunctionBBBlack1060(TConfig* configs) {
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
	return 0x400010080000;
}

u64 FlipFunctionBBWhite1061(TConfig* configs) {
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
	return 0x10080400;
}

u64 FlipFunctionBBBlack1061(TConfig* configs) {
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
	return 0x10080400;
}

u64 FlipFunctionBBWhite1062(TConfig* configs) {
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
	return 0x400010080400;
}

u64 FlipFunctionBBBlack1062(TConfig* configs) {
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
	return 0x400010080400;
}

u64 FlipFunctionBBWhite1063(TConfig* configs) {
	configs[ 4]-=  729;
	return 0x4000000000;
}

u64 FlipFunctionBBBlack1063(TConfig* configs) {
	configs[ 4]+=  729;
	return 0x4000000000;
}

u64 FlipFunctionBBWhite1064(TConfig* configs) {
	configs[ 4]-= 1215;
	configs[15]-=   18;
	configs[24]-=  162;
	configs[31]-=  162;
	return 0x6000000000;
}

u64 FlipFunctionBBBlack1064(TConfig* configs) {
	configs[ 4]+= 1215;
	configs[15]+=   18;
	configs[24]+=  162;
	configs[31]+=  162;
	return 0x6000000000;
}

u64 FlipFunctionBBWhite1065(TConfig* configs) {
	configs[ 4]-= 1377;
	configs[14]-=   54;
	configs[15]-=   18;
	configs[23]-=  162;
	configs[24]-=  162;
	configs[31]-=  162;
	configs[32]-=  162;
	return 0x7000000000;
}

u64 FlipFunctionBBBlack1065(TConfig* configs) {
	configs[ 4]+= 1377;
	configs[14]+=   54;
	configs[15]+=   18;
	configs[23]+=  162;
	configs[24]+=  162;
	configs[31]+=  162;
	configs[32]+=  162;
	return 0x7000000000;
}

u64 FlipFunctionBBWhite1066(TConfig* configs) {
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
	return 0x7800000000;
}

u64 FlipFunctionBBBlack1066(TConfig* configs) {
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
	return 0x7800000000;
}

u64 FlipFunctionBBWhite1067(TConfig* configs) {
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
	return 0x7c00000000;
}

u64 FlipFunctionBBBlack1067(TConfig* configs) {
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
	return 0x7c00000000;
}

u64 FlipFunctionBBWhite1068(TConfig* configs) {
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
	return 0x7e00000000;
}

u64 FlipFunctionBBBlack1068(TConfig* configs) {
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
	return 0x7e00000000;
}

u64 FlipFunctionBBWhite1069(TConfig* configs) {
	configs[16]-=    3;
	return 0x0;
}

u64 FlipFunctionBBBlack1069(TConfig* configs) {
	configs[16]+=    3;
	return 0x0;
}

u64 FlipFunctionBBWhite1070(TConfig* configs) {
	configs[ 5]-=  486;
	configs[16]-=   21;
	configs[24]-=  486;
	configs[32]-=  486;
	return 0x200000000000;
}

u64 FlipFunctionBBBlack1070(TConfig* configs) {
	configs[ 5]+=  486;
	configs[16]+=   21;
	configs[24]+=  486;
	configs[32]+=  486;
	return 0x200000000000;
}

u64 FlipFunctionBBWhite1071(TConfig* configs) {
	configs[ 5]-=  486;
	configs[ 6]-=  162;
	configs[16]-=   75;
	configs[23]-= 1458;
	configs[24]-=  486;
	configs[32]-=  486;
	configs[34]-=  162;
	return 0x10200000000000;
}

u64 FlipFunctionBBBlack1071(TConfig* configs) {
	configs[ 5]+=  486;
	configs[ 6]+=  162;
	configs[16]+=   75;
	configs[23]+= 1458;
	configs[24]+=  486;
	configs[32]+=  486;
	configs[34]+=  162;
	return 0x10200000000000;
}

u64 FlipFunctionBBWhite1072(TConfig* configs) {
	configs[25]-=   81;
	return 0x0;
}

u64 FlipFunctionBBBlack1072(TConfig* configs) {
	configs[25]+=   81;
	return 0x0;
}

u64 FlipFunctionBBWhite1073(TConfig* configs) {
	configs[ 5]-= 1458;
	configs[17]-=    6;
	configs[25]-=  567;
	configs[31]-=  486;
	return 0x400000000000;
}

u64 FlipFunctionBBBlack1073(TConfig* configs) {
	configs[ 5]+= 1458;
	configs[17]+=    6;
	configs[25]+=  567;
	configs[31]+=  486;
	return 0x400000000000;
}

u64 FlipFunctionBBWhite1074(TConfig* configs) {
	configs[ 5]-= 1458;
	configs[ 6]-= 1458;
	configs[17]-=    6;
	configs[18]-=    6;
	configs[25]-= 2025;
	configs[31]-=  486;
	configs[32]-= 1458;
	return 0x40400000000000;
}

u64 FlipFunctionBBBlack1074(TConfig* configs) {
	configs[ 5]+= 1458;
	configs[ 6]+= 1458;
	configs[17]+=    6;
	configs[18]+=    6;
	configs[25]+= 2025;
	configs[31]+=  486;
	configs[32]+= 1458;
	return 0x40400000000000;
}

u64 FlipFunctionBBWhite1075(TConfig* configs) {
	configs[ 3]-= 1458;
	configs[15]-=    6;
	configs[25]-=  135;
	configs[29]-=   54;
	return 0x40000000;
}

u64 FlipFunctionBBBlack1075(TConfig* configs) {
	configs[ 3]+= 1458;
	configs[15]+=    6;
	configs[25]+=  135;
	configs[29]+=   54;
	return 0x40000000;
}

u64 FlipFunctionBBWhite1076(TConfig* configs) {
	configs[ 3]-= 1458;
	configs[ 5]-= 1458;
	configs[15]-=    6;
	configs[17]-=    6;
	configs[25]-=  621;
	configs[29]-=   54;
	configs[31]-=  486;
	return 0x400040000000;
}

u64 FlipFunctionBBBlack1076(TConfig* configs) {
	configs[ 3]+= 1458;
	configs[ 5]+= 1458;
	configs[15]+=    6;
	configs[17]+=    6;
	configs[25]+=  621;
	configs[29]+=   54;
	configs[31]+=  486;
	return 0x400040000000;
}

u64 FlipFunctionBBWhite1077(TConfig* configs) {
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
	return 0x40400040000000;
}

u64 FlipFunctionBBBlack1077(TConfig* configs) {
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
	return 0x40400040000000;
}

u64 FlipFunctionBBWhite1078(TConfig* configs) {
	configs[ 2]-= 1458;
	configs[ 3]-= 1458;
	configs[14]-=    6;
	configs[15]-=    6;
	configs[25]-=  153;
	configs[28]-=   18;
	configs[29]-=   54;
	return 0x40400000;
}

u64 FlipFunctionBBBlack1078(TConfig* configs) {
	configs[ 2]+= 1458;
	configs[ 3]+= 1458;
	configs[14]+=    6;
	configs[15]+=    6;
	configs[25]+=  153;
	configs[28]+=   18;
	configs[29]+=   54;
	return 0x40400000;
}

u64 FlipFunctionBBWhite1079(TConfig* configs) {
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
	return 0x400040400000;
}

u64 FlipFunctionBBBlack1079(TConfig* configs) {
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
	return 0x400040400000;
}

u64 FlipFunctionBBWhite1080(TConfig* configs) {
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
	return 0x40400040400000;
}

u64 FlipFunctionBBBlack1080(TConfig* configs) {
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
	return 0x40400040400000;
}

u64 FlipFunctionBBWhite1081(TConfig* configs) {
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
	return 0x40404000;
}

u64 FlipFunctionBBBlack1081(TConfig* configs) {
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
	return 0x40404000;
}

u64 FlipFunctionBBWhite1082(TConfig* configs) {
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
	return 0x400040404000;
}

u64 FlipFunctionBBBlack1082(TConfig* configs) {
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
	return 0x400040404000;
}

u64 FlipFunctionBBWhite1083(TConfig* configs) {
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
	return 0x40400040404000;
}

u64 FlipFunctionBBBlack1083(TConfig* configs) {
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
	return 0x40400040404000;
}

u64 FlipFunctionBBWhite1084(TConfig* configs) {
	configs[30]-=   81;
	return 0x0;
}

u64 FlipFunctionBBBlack1084(TConfig* configs) {
	configs[30]+=   81;
	return 0x0;
}

u64 FlipFunctionBBWhite1085(TConfig* configs) {
	configs[ 3]-=  486;
	configs[14]-=   18;
	configs[24]-=   54;
	configs[30]-=  135;
	return 0x20000000;
}

u64 FlipFunctionBBBlack1085(TConfig* configs) {
	configs[ 3]+=  486;
	configs[14]+=   18;
	configs[24]+=   54;
	configs[30]+=  135;
	return 0x20000000;
}

u64 FlipFunctionBBWhite1086(TConfig* configs) {
	configs[ 2]-=  162;
	configs[ 3]-=  486;
	configs[12]-=   18;
	configs[14]-=   18;
	configs[23]-=   18;
	configs[24]-=   54;
	configs[30]-=  153;
	return 0x20100000;
}

u64 FlipFunctionBBBlack1086(TConfig* configs) {
	configs[ 2]+=  162;
	configs[ 3]+=  486;
	configs[12]+=   18;
	configs[14]+=   18;
	configs[23]+=   18;
	configs[24]+=   54;
	configs[30]+=  153;
	return 0x20100000;
}

u64 FlipFunctionBBWhite1087(TConfig* configs) {
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
	return 0x20100800;
}

u64 FlipFunctionBBBlack1087(TConfig* configs) {
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
	return 0x20100800;
}

u64 FlipFunctionBBWhite1088(TConfig* configs) {
	configs[ 4]-= 2187;
	return 0x8000000000;
}

u64 FlipFunctionBBBlack1088(TConfig* configs) {
	configs[ 4]+= 2187;
	return 0x8000000000;
}

u64 FlipFunctionBBWhite1089(TConfig* configs) {
	configs[ 4]-= 3645;
	configs[16]-=    6;
	configs[25]-=  162;
	configs[30]-=  162;
	return 0xc000000000;
}

u64 FlipFunctionBBBlack1089(TConfig* configs) {
	configs[ 4]+= 3645;
	configs[16]+=    6;
	configs[25]+=  162;
	configs[30]+=  162;
	return 0xc000000000;
}

u64 FlipFunctionBBWhite1090(TConfig* configs) {
	configs[ 4]-= 4131;
	configs[15]-=   18;
	configs[16]-=    6;
	configs[24]-=  162;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[31]-=  162;
	return 0xe000000000;
}

u64 FlipFunctionBBBlack1090(TConfig* configs) {
	configs[ 4]+= 4131;
	configs[15]+=   18;
	configs[16]+=    6;
	configs[24]+=  162;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[31]+=  162;
	return 0xe000000000;
}

u64 FlipFunctionBBWhite1091(TConfig* configs) {
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
	return 0xf000000000;
}

u64 FlipFunctionBBBlack1091(TConfig* configs) {
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
	return 0xf000000000;
}

u64 FlipFunctionBBWhite1092(TConfig* configs) {
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
	return 0xf800000000;
}

u64 FlipFunctionBBBlack1092(TConfig* configs) {
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
	return 0xf800000000;
}

u64 FlipFunctionBBWhite1093(TConfig* configs) {
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
	return 0xfc00000000;
}

u64 FlipFunctionBBBlack1093(TConfig* configs) {
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
	return 0xfc00000000;
}

u64 FlipFunctionBBWhite1094(TConfig* configs) {
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
	return 0xfe00000000;
}

u64 FlipFunctionBBBlack1094(TConfig* configs) {
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
	return 0xfe00000000;
}

u64 FlipFunctionBBWhite1095(TConfig* configs) {
	configs[17]-=    1;
	return 0x0;
}

u64 FlipFunctionBBBlack1095(TConfig* configs) {
	configs[17]+=    1;
	return 0x0;
}

u64 FlipFunctionBBWhite1096(TConfig* configs) {
	configs[ 5]-= 1458;
	configs[17]-=    7;
	configs[25]-=  486;
	configs[31]-=  486;
	return 0x400000000000;
}

u64 FlipFunctionBBBlack1096(TConfig* configs) {
	configs[ 5]+= 1458;
	configs[17]+=    7;
	configs[25]+=  486;
	configs[31]+=  486;
	return 0x400000000000;
}

u64 FlipFunctionBBWhite1097(TConfig* configs) {
	configs[ 5]-= 1458;
	configs[ 6]-=  486;
	configs[17]-=   25;
	configs[24]-= 1458;
	configs[25]-=  486;
	configs[31]-=  486;
	configs[33]-=  486;
	return 0x20400000000000;
}

u64 FlipFunctionBBBlack1097(TConfig* configs) {
	configs[ 5]+= 1458;
	configs[ 6]+=  486;
	configs[17]+=   25;
	configs[24]+= 1458;
	configs[25]+=  486;
	configs[31]+=  486;
	configs[33]+=  486;
	return 0x20400000000000;
}

u64 FlipFunctionBBWhite1098(TConfig* configs) {
	configs[26]-=   81;
	return 0x0;
}

u64 FlipFunctionBBBlack1098(TConfig* configs) {
	configs[26]+=   81;
	return 0x0;
}

u64 FlipFunctionBBWhite1099(TConfig* configs) {
	configs[ 5]-= 4374;
	configs[18]-=    2;
	configs[26]-=  567;
	configs[30]-=  486;
	return 0x800000000000;
}

u64 FlipFunctionBBBlack1099(TConfig* configs) {
	configs[ 5]+= 4374;
	configs[18]+=    2;
	configs[26]+=  567;
	configs[30]+=  486;
	return 0x800000000000;
}

u64 FlipFunctionBBWhite1100(TConfig* configs) {
	configs[ 5]-= 4374;
	configs[ 6]-= 4374;
	configs[18]-=    2;
	configs[26]-= 2025;
	configs[30]-=  486;
	configs[31]-= 1458;
	return 0x80800000000000;
}

u64 FlipFunctionBBBlack1100(TConfig* configs) {
	configs[ 5]+= 4374;
	configs[ 6]+= 4374;
	configs[18]+=    2;
	configs[26]+= 2025;
	configs[30]+=  486;
	configs[31]+= 1458;
	return 0x80800000000000;
}

u64 FlipFunctionBBWhite1101(TConfig* configs) {
	configs[ 3]-= 4374;
	configs[16]-=    2;
	configs[26]-=  135;
	configs[28]-=   54;
	return 0x80000000;
}

u64 FlipFunctionBBBlack1101(TConfig* configs) {
	configs[ 3]+= 4374;
	configs[16]+=    2;
	configs[26]+=  135;
	configs[28]+=   54;
	return 0x80000000;
}

u64 FlipFunctionBBWhite1102(TConfig* configs) {
	configs[ 3]-= 4374;
	configs[ 5]-= 4374;
	configs[16]-=    2;
	configs[18]-=    2;
	configs[26]-=  621;
	configs[28]-=   54;
	configs[30]-=  486;
	return 0x800080000000;
}

u64 FlipFunctionBBBlack1102(TConfig* configs) {
	configs[ 3]+= 4374;
	configs[ 5]+= 4374;
	configs[16]+=    2;
	configs[18]+=    2;
	configs[26]+=  621;
	configs[28]+=   54;
	configs[30]+=  486;
	return 0x800080000000;
}

u64 FlipFunctionBBWhite1103(TConfig* configs) {
	configs[ 3]-= 4374;
	configs[ 5]-= 4374;
	configs[ 6]-= 4374;
	configs[16]-=    2;
	configs[18]-=    2;
	configs[26]-= 2079;
	configs[28]-=   54;
	configs[30]-=  486;
	configs[31]-= 1458;
	return 0x80800080000000;
}

u64 FlipFunctionBBBlack1103(TConfig* configs) {
	configs[ 3]+= 4374;
	configs[ 5]+= 4374;
	configs[ 6]+= 4374;
	configs[16]+=    2;
	configs[18]+=    2;
	configs[26]+= 2079;
	configs[28]+=   54;
	configs[30]+=  486;
	configs[31]+= 1458;
	return 0x80800080000000;
}

u64 FlipFunctionBBWhite1104(TConfig* configs) {
	configs[ 2]-= 4374;
	configs[ 3]-= 4374;
	configs[15]-=    2;
	configs[16]-=    2;
	configs[26]-=  153;
	configs[27]-=   18;
	configs[28]-=   54;
	return 0x80800000;
}

u64 FlipFunctionBBBlack1104(TConfig* configs) {
	configs[ 2]+= 4374;
	configs[ 3]+= 4374;
	configs[15]+=    2;
	configs[16]+=    2;
	configs[26]+=  153;
	configs[27]+=   18;
	configs[28]+=   54;
	return 0x80800000;
}

u64 FlipFunctionBBWhite1105(TConfig* configs) {
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
	return 0x800080800000;
}

u64 FlipFunctionBBBlack1105(TConfig* configs) {
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
	return 0x800080800000;
}

u64 FlipFunctionBBWhite1106(TConfig* configs) {
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
	return 0x80800080800000;
}

u64 FlipFunctionBBBlack1106(TConfig* configs) {
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
	return 0x80800080800000;
}

u64 FlipFunctionBBWhite1107(TConfig* configs) {
	configs[ 1]-= 4374;
	configs[ 2]-= 4374;
	configs[ 3]-= 4374;
	configs[14]-=    2;
	configs[15]-=    2;
	configs[16]-=    2;
	configs[26]-=  159;
	configs[27]-=   18;
	configs[28]-=   54;
	return 0x80808000;
}

u64 FlipFunctionBBBlack1107(TConfig* configs) {
	configs[ 1]+= 4374;
	configs[ 2]+= 4374;
	configs[ 3]+= 4374;
	configs[14]+=    2;
	configs[15]+=    2;
	configs[16]+=    2;
	configs[26]+=  159;
	configs[27]+=   18;
	configs[28]+=   54;
	return 0x80808000;
}

u64 FlipFunctionBBWhite1108(TConfig* configs) {
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
	return 0x800080808000;
}

u64 FlipFunctionBBBlack1108(TConfig* configs) {
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
	return 0x800080808000;
}

u64 FlipFunctionBBWhite1109(TConfig* configs) {
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
	return 0x80800080808000;
}

u64 FlipFunctionBBBlack1109(TConfig* configs) {
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
	return 0x80800080808000;
}

u64 FlipFunctionBBWhite1110(TConfig* configs) {
	configs[29]-=   81;
	return 0x0;
}

u64 FlipFunctionBBBlack1110(TConfig* configs) {
	configs[29]+=   81;
	return 0x0;
}

u64 FlipFunctionBBWhite1111(TConfig* configs) {
	configs[ 3]-= 1458;
	configs[15]-=    6;
	configs[25]-=   54;
	configs[29]-=  135;
	return 0x40000000;
}

u64 FlipFunctionBBBlack1111(TConfig* configs) {
	configs[ 3]+= 1458;
	configs[15]+=    6;
	configs[25]+=   54;
	configs[29]+=  135;
	return 0x40000000;
}

u64 FlipFunctionBBWhite1112(TConfig* configs) {
	configs[ 2]-=  486;
	configs[ 3]-= 1458;
	configs[13]-=   18;
	configs[15]-=    6;
	configs[24]-=   18;
	configs[25]-=   54;
	configs[29]-=  153;
	return 0x40200000;
}

u64 FlipFunctionBBBlack1112(TConfig* configs) {
	configs[ 2]+=  486;
	configs[ 3]+= 1458;
	configs[13]+=   18;
	configs[15]+=    6;
	configs[24]+=   18;
	configs[25]+=   54;
	configs[29]+=  153;
	return 0x40200000;
}

u64 FlipFunctionBBWhite1113(TConfig* configs) {
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
	return 0x40201000;
}

u64 FlipFunctionBBBlack1113(TConfig* configs) {
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
	return 0x40201000;
}

u64 FlipFunctionBBWhite1114(TConfig* configs) {
	configs[ 5]-=    1;
	return 0x10000000000;
}

u64 FlipFunctionBBBlack1114(TConfig* configs) {
	configs[ 5]+=    1;
	return 0x10000000000;
}

u64 FlipFunctionBBWhite1115(TConfig* configs) {
	configs[ 5]-=    7;
	configs[12]-=  486;
	configs[20]-=  486;
	configs[36]-=    6;
	return 0x30000000000;
}

u64 FlipFunctionBBBlack1115(TConfig* configs) {
	configs[ 5]+=    7;
	configs[12]+=  486;
	configs[20]+=  486;
	configs[36]+=    6;
	return 0x30000000000;
}

u64 FlipFunctionBBWhite1116(TConfig* configs) {
	configs[ 5]-=   25;
	configs[12]-=  486;
	configs[13]-=  486;
	configs[20]-=  486;
	configs[21]-=  486;
	configs[35]-=   18;
	configs[36]-=    6;
	return 0x70000000000;
}

u64 FlipFunctionBBBlack1116(TConfig* configs) {
	configs[ 5]+=   25;
	configs[12]+=  486;
	configs[13]+=  486;
	configs[20]+=  486;
	configs[21]+=  486;
	configs[35]+=   18;
	configs[36]+=    6;
	return 0x70000000000;
}

u64 FlipFunctionBBWhite1117(TConfig* configs) {
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
	return 0xf0000000000;
}

u64 FlipFunctionBBBlack1117(TConfig* configs) {
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
	return 0xf0000000000;
}

u64 FlipFunctionBBWhite1118(TConfig* configs) {
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
	return 0x1f0000000000;
}

u64 FlipFunctionBBBlack1118(TConfig* configs) {
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
	return 0x1f0000000000;
}

u64 FlipFunctionBBWhite1119(TConfig* configs) {
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
	return 0x3f0000000000;
}

u64 FlipFunctionBBBlack1119(TConfig* configs) {
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
	return 0x3f0000000000;
}

u64 FlipFunctionBBWhite1120(TConfig* configs) {
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
	return 0x7f0000000000;
}

u64 FlipFunctionBBBlack1120(TConfig* configs) {
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
	return 0x7f0000000000;
}

u64 FlipFunctionBBWhite1121(TConfig* configs) {
	configs[11]-=  243;
	return 0x0;
}

u64 FlipFunctionBBBlack1121(TConfig* configs) {
	configs[11]+=  243;
	return 0x0;
}

u64 FlipFunctionBBWhite1122(TConfig* configs) {
	configs[ 4]-=    6;
	configs[11]-=  405;
	configs[20]-=  162;
	configs[35]-=    6;
	return 0x200000000;
}

u64 FlipFunctionBBBlack1122(TConfig* configs) {
	configs[ 4]+=    6;
	configs[11]+=  405;
	configs[20]+=  162;
	configs[35]+=    6;
	return 0x200000000;
}

u64 FlipFunctionBBWhite1123(TConfig* configs) {
	configs[ 3]-=   18;
	configs[ 4]-=    6;
	configs[11]-=  459;
	configs[20]-=  162;
	configs[21]-=   54;
	configs[33]-=   18;
	configs[35]-=    6;
	return 0x204000000;
}

u64 FlipFunctionBBBlack1123(TConfig* configs) {
	configs[ 3]+=   18;
	configs[ 4]+=    6;
	configs[11]+=  459;
	configs[20]+=  162;
	configs[21]+=   54;
	configs[33]+=   18;
	configs[35]+=    6;
	return 0x204000000;
}

u64 FlipFunctionBBWhite1124(TConfig* configs) {
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
	return 0x204080000;
}

u64 FlipFunctionBBBlack1124(TConfig* configs) {
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
	return 0x204080000;
}

u64 FlipFunctionBBWhite1125(TConfig* configs) {
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
	return 0x204081000;
}

u64 FlipFunctionBBBlack1125(TConfig* configs) {
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
	return 0x204081000;
}

u64 FlipFunctionBBWhite1126(TConfig* configs) {
	configs[19]-=  243;
	return 0x0;
}

u64 FlipFunctionBBBlack1126(TConfig* configs) {
	configs[19]+=  243;
	return 0x0;
}

u64 FlipFunctionBBWhite1127(TConfig* configs) {
	configs[ 6]-=    2;
	configs[12]-= 1458;
	configs[19]-= 1701;
	return 0x1000000000000;
}

u64 FlipFunctionBBBlack1127(TConfig* configs) {
	configs[ 6]+=    2;
	configs[12]+= 1458;
	configs[19]+= 1701;
	return 0x1000000000000;
}

u64 FlipFunctionBBWhite1128(TConfig* configs) {
	configs[ 4]-=    2;
	configs[10]-=  162;
	configs[19]-=  405;
	configs[36]-=    2;
	return 0x100000000;
}

u64 FlipFunctionBBBlack1128(TConfig* configs) {
	configs[ 4]+=    2;
	configs[10]+=  162;
	configs[19]+=  405;
	configs[36]+=    2;
	return 0x100000000;
}

u64 FlipFunctionBBWhite1129(TConfig* configs) {
	configs[ 4]-=    2;
	configs[ 6]-=    2;
	configs[10]-=  162;
	configs[12]-= 1458;
	configs[19]-= 1863;
	configs[36]-=    2;
	return 0x1000100000000;
}

u64 FlipFunctionBBBlack1129(TConfig* configs) {
	configs[ 4]+=    2;
	configs[ 6]+=    2;
	configs[10]+=  162;
	configs[12]+= 1458;
	configs[19]+= 1863;
	configs[36]+=    2;
	return 0x1000100000000;
}

u64 FlipFunctionBBWhite1130(TConfig* configs) {
	configs[ 3]-=    2;
	configs[ 4]-=    2;
	configs[ 9]-=   54;
	configs[10]-=  162;
	configs[19]-=  459;
	configs[35]-=    2;
	configs[36]-=    2;
	return 0x101000000;
}

u64 FlipFunctionBBBlack1130(TConfig* configs) {
	configs[ 3]+=    2;
	configs[ 4]+=    2;
	configs[ 9]+=   54;
	configs[10]+=  162;
	configs[19]+=  459;
	configs[35]+=    2;
	configs[36]+=    2;
	return 0x101000000;
}

u64 FlipFunctionBBWhite1131(TConfig* configs) {
	configs[ 3]-=    2;
	configs[ 4]-=    2;
	configs[ 6]-=    2;
	configs[ 9]-=   54;
	configs[10]-=  162;
	configs[12]-= 1458;
	configs[19]-= 1917;
	configs[35]-=    2;
	configs[36]-=    2;
	return 0x1000101000000;
}

u64 FlipFunctionBBBlack1131(TConfig* configs) {
	configs[ 3]+=    2;
	configs[ 4]+=    2;
	configs[ 6]+=    2;
	configs[ 9]+=   54;
	configs[10]+=  162;
	configs[12]+= 1458;
	configs[19]+= 1917;
	configs[35]+=    2;
	configs[36]+=    2;
	return 0x1000101000000;
}

u64 FlipFunctionBBWhite1132(TConfig* configs) {
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
	return 0x101010000;
}

u64 FlipFunctionBBBlack1132(TConfig* configs) {
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
	return 0x101010000;
}

u64 FlipFunctionBBWhite1133(TConfig* configs) {
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
	return 0x1000101010000;
}

u64 FlipFunctionBBBlack1133(TConfig* configs) {
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
	return 0x1000101010000;
}

u64 FlipFunctionBBWhite1134(TConfig* configs) {
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
	return 0x101010100;
}

u64 FlipFunctionBBBlack1134(TConfig* configs) {
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
	return 0x101010100;
}

u64 FlipFunctionBBWhite1135(TConfig* configs) {
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
	return 0x1000101010100;
}

u64 FlipFunctionBBBlack1135(TConfig* configs) {
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
	return 0x1000101010100;
}

u64 FlipFunctionBBWhite1136(TConfig* configs) {
	configs[37]-=    1;
	return 0x0;
}

u64 FlipFunctionBBBlack1136(TConfig* configs) {
	configs[37]+=    1;
	return 0x0;
}

u64 FlipFunctionBBWhite1137(TConfig* configs) {
	configs[ 6]-=    6;
	configs[13]-= 1458;
	configs[20]-= 1458;
	configs[37]-=    7;
	return 0x2000000000000;
}

u64 FlipFunctionBBBlack1137(TConfig* configs) {
	configs[ 6]+=    6;
	configs[13]+= 1458;
	configs[20]+= 1458;
	configs[37]+=    7;
	return 0x2000000000000;
}

u64 FlipFunctionBBWhite1138(TConfig* configs) {
	configs[ 5]-=    3;
	return 0x20000000000;
}

u64 FlipFunctionBBBlack1138(TConfig* configs) {
	configs[ 5]+=    3;
	return 0x20000000000;
}

u64 FlipFunctionBBWhite1139(TConfig* configs) {
	configs[ 5]-=   21;
	configs[13]-=  486;
	configs[21]-=  486;
	configs[35]-=   18;
	return 0x60000000000;
}

u64 FlipFunctionBBBlack1139(TConfig* configs) {
	configs[ 5]+=   21;
	configs[13]+=  486;
	configs[21]+=  486;
	configs[35]+=   18;
	return 0x60000000000;
}

u64 FlipFunctionBBWhite1140(TConfig* configs) {
	configs[ 5]-=   75;
	configs[13]-=  486;
	configs[14]-=  162;
	configs[21]-=  486;
	configs[22]-=  486;
	configs[34]-=   54;
	configs[35]-=   18;
	return 0xe0000000000;
}

u64 FlipFunctionBBBlack1140(TConfig* configs) {
	configs[ 5]+=   75;
	configs[13]+=  486;
	configs[14]+=  162;
	configs[21]+=  486;
	configs[22]+=  486;
	configs[34]+=   54;
	configs[35]+=   18;
	return 0xe0000000000;
}

u64 FlipFunctionBBWhite1141(TConfig* configs) {
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
	return 0x1e0000000000;
}

u64 FlipFunctionBBBlack1141(TConfig* configs) {
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
	return 0x1e0000000000;
}

u64 FlipFunctionBBWhite1142(TConfig* configs) {
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
	return 0x3e0000000000;
}

u64 FlipFunctionBBBlack1142(TConfig* configs) {
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
	return 0x3e0000000000;
}

u64 FlipFunctionBBWhite1143(TConfig* configs) {
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
	return 0x7e0000000000;
}

u64 FlipFunctionBBBlack1143(TConfig* configs) {
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
	return 0x7e0000000000;
}

u64 FlipFunctionBBWhite1144(TConfig* configs) {
	configs[12]-=  243;
	return 0x0;
}

u64 FlipFunctionBBBlack1144(TConfig* configs) {
	configs[12]+=  243;
	return 0x0;
}

u64 FlipFunctionBBWhite1145(TConfig* configs) {
	configs[ 4]-=   18;
	configs[12]-=  405;
	configs[21]-=  162;
	configs[34]-=   18;
	return 0x400000000;
}

u64 FlipFunctionBBBlack1145(TConfig* configs) {
	configs[ 4]+=   18;
	configs[12]+=  405;
	configs[21]+=  162;
	configs[34]+=   18;
	return 0x400000000;
}

u64 FlipFunctionBBWhite1146(TConfig* configs) {
	configs[ 3]-=   54;
	configs[ 4]-=   18;
	configs[12]-=  459;
	configs[21]-=  162;
	configs[22]-=   54;
	configs[32]-=   54;
	configs[34]-=   18;
	return 0x408000000;
}

u64 FlipFunctionBBBlack1146(TConfig* configs) {
	configs[ 3]+=   54;
	configs[ 4]+=   18;
	configs[12]+=  459;
	configs[21]+=  162;
	configs[22]+=   54;
	configs[32]+=   54;
	configs[34]+=   18;
	return 0x408000000;
}

u64 FlipFunctionBBWhite1147(TConfig* configs) {
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
	return 0x408100000;
}

u64 FlipFunctionBBBlack1147(TConfig* configs) {
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
	return 0x408100000;
}

u64 FlipFunctionBBWhite1148(TConfig* configs) {
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
	return 0x408102000;
}

u64 FlipFunctionBBBlack1148(TConfig* configs) {
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
	return 0x408102000;
}

u64 FlipFunctionBBWhite1149(TConfig* configs) {
	configs[20]-=  243;
	return 0x0;
}

u64 FlipFunctionBBBlack1149(TConfig* configs) {
	configs[20]+=  243;
	return 0x0;
}

u64 FlipFunctionBBWhite1150(TConfig* configs) {
	configs[ 6]-=    6;
	configs[13]-= 1458;
	configs[20]-= 1701;
	configs[37]-=    6;
	return 0x2000000000000;
}

u64 FlipFunctionBBBlack1150(TConfig* configs) {
	configs[ 6]+=    6;
	configs[13]+= 1458;
	configs[20]+= 1701;
	configs[37]+=    6;
	return 0x2000000000000;
}

u64 FlipFunctionBBWhite1151(TConfig* configs) {
	configs[ 4]-=    6;
	configs[11]-=  162;
	configs[20]-=  405;
	configs[35]-=    6;
	return 0x200000000;
}

u64 FlipFunctionBBBlack1151(TConfig* configs) {
	configs[ 4]+=    6;
	configs[11]+=  162;
	configs[20]+=  405;
	configs[35]+=    6;
	return 0x200000000;
}

u64 FlipFunctionBBWhite1152(TConfig* configs) {
	configs[ 4]-=    6;
	configs[ 6]-=    6;
	configs[11]-=  162;
	configs[13]-= 1458;
	configs[20]-= 1863;
	configs[35]-=    6;
	configs[37]-=    6;
	return 0x2000200000000;
}

u64 FlipFunctionBBBlack1152(TConfig* configs) {
	configs[ 4]+=    6;
	configs[ 6]+=    6;
	configs[11]+=  162;
	configs[13]+= 1458;
	configs[20]+= 1863;
	configs[35]+=    6;
	configs[37]+=    6;
	return 0x2000200000000;
}

u64 FlipFunctionBBWhite1153(TConfig* configs) {
	configs[ 3]-=    6;
	configs[ 4]-=    6;
	configs[10]-=   54;
	configs[11]-=  162;
	configs[20]-=  459;
	configs[34]-=    6;
	configs[35]-=    6;
	return 0x202000000;
}

u64 FlipFunctionBBBlack1153(TConfig* configs) {
	configs[ 3]+=    6;
	configs[ 4]+=    6;
	configs[10]+=   54;
	configs[11]+=  162;
	configs[20]+=  459;
	configs[34]+=    6;
	configs[35]+=    6;
	return 0x202000000;
}

u64 FlipFunctionBBWhite1154(TConfig* configs) {
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
	return 0x2000202000000;
}

u64 FlipFunctionBBBlack1154(TConfig* configs) {
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
	return 0x2000202000000;
}

u64 FlipFunctionBBWhite1155(TConfig* configs) {
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
	return 0x202020000;
}

u64 FlipFunctionBBBlack1155(TConfig* configs) {
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
	return 0x202020000;
}

u64 FlipFunctionBBWhite1156(TConfig* configs) {
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
	return 0x2000202020000;
}

u64 FlipFunctionBBBlack1156(TConfig* configs) {
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
	return 0x2000202020000;
}

u64 FlipFunctionBBWhite1157(TConfig* configs) {
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
	return 0x202020200;
}

u64 FlipFunctionBBBlack1157(TConfig* configs) {
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
	return 0x202020200;
}

u64 FlipFunctionBBWhite1158(TConfig* configs) {
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
	return 0x2000202020200;
}

u64 FlipFunctionBBBlack1158(TConfig* configs) {
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
	return 0x2000202020200;
}

u64 FlipFunctionBBWhite1159(TConfig* configs) {
	configs[36]-=    3;
	return 0x0;
}

u64 FlipFunctionBBBlack1159(TConfig* configs) {
	configs[36]+=    3;
	return 0x0;
}

u64 FlipFunctionBBWhite1160(TConfig* configs) {
	configs[ 6]-=   18;
	configs[14]-=  486;
	configs[21]-= 1458;
	configs[36]-=   21;
	return 0x4000000000000;
}

u64 FlipFunctionBBBlack1160(TConfig* configs) {
	configs[ 6]+=   18;
	configs[14]+=  486;
	configs[21]+= 1458;
	configs[36]+=   21;
	return 0x4000000000000;
}

u64 FlipFunctionBBWhite1161(TConfig* configs) {
	configs[ 5]-=    9;
	return 0x40000000000;
}

u64 FlipFunctionBBBlack1161(TConfig* configs) {
	configs[ 5]+=    9;
	return 0x40000000000;
}

u64 FlipFunctionBBWhite1162(TConfig* configs) {
	configs[ 5]-=   63;
	configs[14]-=  162;
	configs[22]-=  486;
	configs[34]-=   54;
	return 0xc0000000000;
}

u64 FlipFunctionBBBlack1162(TConfig* configs) {
	configs[ 5]+=   63;
	configs[14]+=  162;
	configs[22]+=  486;
	configs[34]+=   54;
	return 0xc0000000000;
}

u64 FlipFunctionBBWhite1163(TConfig* configs) {
	configs[ 5]-=  225;
	configs[14]-=  162;
	configs[15]-=   54;
	configs[22]-=  486;
	configs[23]-=  486;
	configs[33]-=  162;
	configs[34]-=   54;
	return 0x1c0000000000;
}

u64 FlipFunctionBBBlack1163(TConfig* configs) {
	configs[ 5]+=  225;
	configs[14]+=  162;
	configs[15]+=   54;
	configs[22]+=  486;
	configs[23]+=  486;
	configs[33]+=  162;
	configs[34]+=   54;
	return 0x1c0000000000;
}

u64 FlipFunctionBBWhite1164(TConfig* configs) {
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
	return 0x3c0000000000;
}

u64 FlipFunctionBBBlack1164(TConfig* configs) {
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
	return 0x3c0000000000;
}

u64 FlipFunctionBBWhite1165(TConfig* configs) {
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
	return 0x7c0000000000;
}

u64 FlipFunctionBBBlack1165(TConfig* configs) {
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
	return 0x7c0000000000;
}

u64 FlipFunctionBBWhite1166(TConfig* configs) {
	configs[ 5]-=   15;
	configs[12]-=  486;
	configs[20]-=  486;
	configs[36]-=    6;
	return 0x60000000000;
}

u64 FlipFunctionBBBlack1166(TConfig* configs) {
	configs[ 5]+=   15;
	configs[12]+=  486;
	configs[20]+=  486;
	configs[36]+=    6;
	return 0x60000000000;
}

u64 FlipFunctionBBWhite1167(TConfig* configs) {
	configs[ 5]-=   69;
	configs[12]-=  486;
	configs[14]-=  162;
	configs[20]-=  486;
	configs[22]-=  486;
	configs[34]-=   54;
	configs[36]-=    6;
	return 0xe0000000000;
}

u64 FlipFunctionBBBlack1167(TConfig* configs) {
	configs[ 5]+=   69;
	configs[12]+=  486;
	configs[14]+=  162;
	configs[20]+=  486;
	configs[22]+=  486;
	configs[34]+=   54;
	configs[36]+=    6;
	return 0xe0000000000;
}

u64 FlipFunctionBBWhite1168(TConfig* configs) {
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
	return 0x1e0000000000;
}

u64 FlipFunctionBBBlack1168(TConfig* configs) {
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
	return 0x1e0000000000;
}

u64 FlipFunctionBBWhite1169(TConfig* configs) {
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
	return 0x3e0000000000;
}

u64 FlipFunctionBBBlack1169(TConfig* configs) {
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
	return 0x3e0000000000;
}

u64 FlipFunctionBBWhite1170(TConfig* configs) {
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
	return 0x7e0000000000;
}

u64 FlipFunctionBBBlack1170(TConfig* configs) {
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
	return 0x7e0000000000;
}

u64 FlipFunctionBBWhite1171(TConfig* configs) {
	configs[13]-=  243;
	return 0x0;
}

u64 FlipFunctionBBBlack1171(TConfig* configs) {
	configs[13]+=  243;
	return 0x0;
}

u64 FlipFunctionBBWhite1172(TConfig* configs) {
	configs[ 6]-=    6;
	configs[13]-= 1701;
	configs[20]-= 1458;
	configs[37]-=    6;
	return 0x2000000000000;
}

u64 FlipFunctionBBBlack1172(TConfig* configs) {
	configs[ 6]+=    6;
	configs[13]+= 1701;
	configs[20]+= 1458;
	configs[37]+=    6;
	return 0x2000000000000;
}

u64 FlipFunctionBBWhite1173(TConfig* configs) {
	configs[ 4]-=   54;
	configs[13]-=  405;
	configs[22]-=  162;
	configs[33]-=   54;
	return 0x800000000;
}

u64 FlipFunctionBBBlack1173(TConfig* configs) {
	configs[ 4]+=   54;
	configs[13]+=  405;
	configs[22]+=  162;
	configs[33]+=   54;
	return 0x800000000;
}

u64 FlipFunctionBBWhite1174(TConfig* configs) {
	configs[ 4]-=   54;
	configs[ 6]-=    6;
	configs[13]-= 1863;
	configs[20]-= 1458;
	configs[22]-=  162;
	configs[33]-=   54;
	configs[37]-=    6;
	return 0x2000800000000;
}

u64 FlipFunctionBBBlack1174(TConfig* configs) {
	configs[ 4]+=   54;
	configs[ 6]+=    6;
	configs[13]+= 1863;
	configs[20]+= 1458;
	configs[22]+=  162;
	configs[33]+=   54;
	configs[37]+=    6;
	return 0x2000800000000;
}

u64 FlipFunctionBBWhite1175(TConfig* configs) {
	configs[ 3]-=  162;
	configs[ 4]-=   54;
	configs[13]-=  459;
	configs[22]-=  162;
	configs[23]-=   54;
	configs[31]-=   54;
	configs[33]-=   54;
	return 0x810000000;
}

u64 FlipFunctionBBBlack1175(TConfig* configs) {
	configs[ 3]+=  162;
	configs[ 4]+=   54;
	configs[13]+=  459;
	configs[22]+=  162;
	configs[23]+=   54;
	configs[31]+=   54;
	configs[33]+=   54;
	return 0x810000000;
}

u64 FlipFunctionBBWhite1176(TConfig* configs) {
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
	return 0x2000810000000;
}

u64 FlipFunctionBBBlack1176(TConfig* configs) {
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
	return 0x2000810000000;
}

u64 FlipFunctionBBWhite1177(TConfig* configs) {
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
	return 0x810200000;
}

u64 FlipFunctionBBBlack1177(TConfig* configs) {
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
	return 0x810200000;
}

u64 FlipFunctionBBWhite1178(TConfig* configs) {
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
	return 0x2000810200000;
}

u64 FlipFunctionBBBlack1178(TConfig* configs) {
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
	return 0x2000810200000;
}

u64 FlipFunctionBBWhite1179(TConfig* configs) {
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
	return 0x810204000;
}

u64 FlipFunctionBBBlack1179(TConfig* configs) {
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
	return 0x810204000;
}

u64 FlipFunctionBBWhite1180(TConfig* configs) {
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
	return 0x2000810204000;
}

u64 FlipFunctionBBBlack1180(TConfig* configs) {
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
	return 0x2000810204000;
}

u64 FlipFunctionBBWhite1181(TConfig* configs) {
	configs[21]-=  243;
	return 0x0;
}

u64 FlipFunctionBBBlack1181(TConfig* configs) {
	configs[21]+=  243;
	return 0x0;
}

u64 FlipFunctionBBWhite1182(TConfig* configs) {
	configs[ 6]-=   18;
	configs[14]-=  486;
	configs[21]-= 1701;
	configs[36]-=   18;
	return 0x4000000000000;
}

u64 FlipFunctionBBBlack1182(TConfig* configs) {
	configs[ 6]+=   18;
	configs[14]+=  486;
	configs[21]+= 1701;
	configs[36]+=   18;
	return 0x4000000000000;
}

u64 FlipFunctionBBWhite1183(TConfig* configs) {
	configs[ 4]-=   18;
	configs[12]-=  162;
	configs[21]-=  405;
	configs[34]-=   18;
	return 0x400000000;
}

u64 FlipFunctionBBBlack1183(TConfig* configs) {
	configs[ 4]+=   18;
	configs[12]+=  162;
	configs[21]+=  405;
	configs[34]+=   18;
	return 0x400000000;
}

u64 FlipFunctionBBWhite1184(TConfig* configs) {
	configs[ 4]-=   18;
	configs[ 6]-=   18;
	configs[12]-=  162;
	configs[14]-=  486;
	configs[21]-= 1863;
	configs[34]-=   18;
	configs[36]-=   18;
	return 0x4000400000000;
}

u64 FlipFunctionBBBlack1184(TConfig* configs) {
	configs[ 4]+=   18;
	configs[ 6]+=   18;
	configs[12]+=  162;
	configs[14]+=  486;
	configs[21]+= 1863;
	configs[34]+=   18;
	configs[36]+=   18;
	return 0x4000400000000;
}

u64 FlipFunctionBBWhite1185(TConfig* configs) {
	configs[ 3]-=   18;
	configs[ 4]-=   18;
	configs[11]-=   54;
	configs[12]-=  162;
	configs[21]-=  459;
	configs[33]-=   18;
	configs[34]-=   18;
	return 0x404000000;
}

u64 FlipFunctionBBBlack1185(TConfig* configs) {
	configs[ 3]+=   18;
	configs[ 4]+=   18;
	configs[11]+=   54;
	configs[12]+=  162;
	configs[21]+=  459;
	configs[33]+=   18;
	configs[34]+=   18;
	return 0x404000000;
}

u64 FlipFunctionBBWhite1186(TConfig* configs) {
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
	return 0x4000404000000;
}

u64 FlipFunctionBBBlack1186(TConfig* configs) {
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
	return 0x4000404000000;
}

u64 FlipFunctionBBWhite1187(TConfig* configs) {
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
	return 0x404040000;
}

u64 FlipFunctionBBBlack1187(TConfig* configs) {
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
	return 0x404040000;
}

u64 FlipFunctionBBWhite1188(TConfig* configs) {
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
	return 0x4000404040000;
}

u64 FlipFunctionBBBlack1188(TConfig* configs) {
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
	return 0x4000404040000;
}

u64 FlipFunctionBBWhite1189(TConfig* configs) {
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
	return 0x404040400;
}

u64 FlipFunctionBBBlack1189(TConfig* configs) {
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
	return 0x404040400;
}

u64 FlipFunctionBBWhite1190(TConfig* configs) {
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
	return 0x4000404040400;
}

u64 FlipFunctionBBBlack1190(TConfig* configs) {
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
	return 0x4000404040400;
}

u64 FlipFunctionBBWhite1191(TConfig* configs) {
	configs[35]-=    9;
	return 0x0;
}

u64 FlipFunctionBBBlack1191(TConfig* configs) {
	configs[35]+=    9;
	return 0x0;
}

u64 FlipFunctionBBWhite1192(TConfig* configs) {
	configs[ 6]-=   54;
	configs[15]-=  162;
	configs[22]-= 1458;
	configs[35]-=   63;
	return 0x8000000000000;
}

u64 FlipFunctionBBBlack1192(TConfig* configs) {
	configs[ 6]+=   54;
	configs[15]+=  162;
	configs[22]+= 1458;
	configs[35]+=   63;
	return 0x8000000000000;
}

u64 FlipFunctionBBWhite1193(TConfig* configs) {
	configs[ 4]-=    6;
	configs[11]-=  162;
	configs[20]-=  162;
	configs[35]-=   15;
	return 0x200000000;
}

u64 FlipFunctionBBBlack1193(TConfig* configs) {
	configs[ 4]+=    6;
	configs[11]+=  162;
	configs[20]+=  162;
	configs[35]+=   15;
	return 0x200000000;
}

u64 FlipFunctionBBWhite1194(TConfig* configs) {
	configs[ 4]-=    6;
	configs[ 6]-=   54;
	configs[11]-=  162;
	configs[15]-=  162;
	configs[20]-=  162;
	configs[22]-= 1458;
	configs[35]-=   69;
	return 0x8000200000000;
}

u64 FlipFunctionBBBlack1194(TConfig* configs) {
	configs[ 4]+=    6;
	configs[ 6]+=   54;
	configs[11]+=  162;
	configs[15]+=  162;
	configs[20]+=  162;
	configs[22]+= 1458;
	configs[35]+=   69;
	return 0x8000200000000;
}

u64 FlipFunctionBBWhite1195(TConfig* configs) {
	configs[ 5]-=   27;
	return 0x80000000000;
}

u64 FlipFunctionBBBlack1195(TConfig* configs) {
	configs[ 5]+=   27;
	return 0x80000000000;
}

u64 FlipFunctionBBWhite1196(TConfig* configs) {
	configs[ 5]-=  189;
	configs[15]-=   54;
	configs[23]-=  486;
	configs[33]-=  162;
	return 0x180000000000;
}

u64 FlipFunctionBBBlack1196(TConfig* configs) {
	configs[ 5]+=  189;
	configs[15]+=   54;
	configs[23]+=  486;
	configs[33]+=  162;
	return 0x180000000000;
}

u64 FlipFunctionBBWhite1197(TConfig* configs) {
	configs[ 5]-=  675;
	configs[15]-=   54;
	configs[16]-=   18;
	configs[23]-=  486;
	configs[24]-=  486;
	configs[32]-=  486;
	configs[33]-=  162;
	return 0x380000000000;
}

u64 FlipFunctionBBBlack1197(TConfig* configs) {
	configs[ 5]+=  675;
	configs[15]+=   54;
	configs[16]+=   18;
	configs[23]+=  486;
	configs[24]+=  486;
	configs[32]+=  486;
	configs[33]+=  162;
	return 0x380000000000;
}

u64 FlipFunctionBBWhite1198(TConfig* configs) {
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
	return 0x780000000000;
}

u64 FlipFunctionBBBlack1198(TConfig* configs) {
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
	return 0x780000000000;
}

u64 FlipFunctionBBWhite1199(TConfig* configs) {
	configs[ 5]-=   45;
	configs[13]-=  486;
	configs[21]-=  486;
	configs[35]-=   18;
	return 0xc0000000000;
}

u64 FlipFunctionBBBlack1199(TConfig* configs) {
	configs[ 5]+=   45;
	configs[13]+=  486;
	configs[21]+=  486;
	configs[35]+=   18;
	return 0xc0000000000;
}

u64 FlipFunctionBBWhite1200(TConfig* configs) {
	configs[ 5]-=  207;
	configs[13]-=  486;
	configs[15]-=   54;
	configs[21]-=  486;
	configs[23]-=  486;
	configs[33]-=  162;
	configs[35]-=   18;
	return 0x1c0000000000;
}

u64 FlipFunctionBBBlack1200(TConfig* configs) {
	configs[ 5]+=  207;
	configs[13]+=  486;
	configs[15]+=   54;
	configs[21]+=  486;
	configs[23]+=  486;
	configs[33]+=  162;
	configs[35]+=   18;
	return 0x1c0000000000;
}

u64 FlipFunctionBBWhite1201(TConfig* configs) {
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
	return 0x3c0000000000;
}

u64 FlipFunctionBBBlack1201(TConfig* configs) {
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
	return 0x3c0000000000;
}

u64 FlipFunctionBBWhite1202(TConfig* configs) {
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
	return 0x7c0000000000;
}

u64 FlipFunctionBBBlack1202(TConfig* configs) {
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
	return 0x7c0000000000;
}

u64 FlipFunctionBBWhite1203(TConfig* configs) {
	configs[ 5]-=   51;
	configs[12]-=  486;
	configs[13]-=  486;
	configs[20]-=  486;
	configs[21]-=  486;
	configs[35]-=   18;
	configs[36]-=    6;
	return 0xe0000000000;
}

u64 FlipFunctionBBBlack1203(TConfig* configs) {
	configs[ 5]+=   51;
	configs[12]+=  486;
	configs[13]+=  486;
	configs[20]+=  486;
	configs[21]+=  486;
	configs[35]+=   18;
	configs[36]+=    6;
	return 0xe0000000000;
}

u64 FlipFunctionBBWhite1204(TConfig* configs) {
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
	return 0x1e0000000000;
}

u64 FlipFunctionBBBlack1204(TConfig* configs) {
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
	return 0x1e0000000000;
}

u64 FlipFunctionBBWhite1205(TConfig* configs) {
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
	return 0x3e0000000000;
}

u64 FlipFunctionBBBlack1205(TConfig* configs) {
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
	return 0x3e0000000000;
}

u64 FlipFunctionBBWhite1206(TConfig* configs) {
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
	return 0x7e0000000000;
}

u64 FlipFunctionBBBlack1206(TConfig* configs) {
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
	return 0x7e0000000000;
}

u64 FlipFunctionBBWhite1207(TConfig* configs) {
	configs[14]-=   81;
	return 0x0;
}

u64 FlipFunctionBBBlack1207(TConfig* configs) {
	configs[14]+=   81;
	return 0x0;
}

u64 FlipFunctionBBWhite1208(TConfig* configs) {
	configs[ 6]-=   18;
	configs[14]-=  567;
	configs[21]-= 1458;
	configs[36]-=   18;
	return 0x4000000000000;
}

u64 FlipFunctionBBBlack1208(TConfig* configs) {
	configs[ 6]+=   18;
	configs[14]+=  567;
	configs[21]+= 1458;
	configs[36]+=   18;
	return 0x4000000000000;
}

u64 FlipFunctionBBWhite1209(TConfig* configs) {
	configs[ 4]-=  162;
	configs[14]-=  135;
	configs[23]-=  162;
	configs[32]-=  162;
	return 0x1000000000;
}

u64 FlipFunctionBBBlack1209(TConfig* configs) {
	configs[ 4]+=  162;
	configs[14]+=  135;
	configs[23]+=  162;
	configs[32]+=  162;
	return 0x1000000000;
}

u64 FlipFunctionBBWhite1210(TConfig* configs) {
	configs[ 4]-=  162;
	configs[ 6]-=   18;
	configs[14]-=  621;
	configs[21]-= 1458;
	configs[23]-=  162;
	configs[32]-=  162;
	configs[36]-=   18;
	return 0x4001000000000;
}

u64 FlipFunctionBBBlack1210(TConfig* configs) {
	configs[ 4]+=  162;
	configs[ 6]+=   18;
	configs[14]+=  621;
	configs[21]+= 1458;
	configs[23]+=  162;
	configs[32]+=  162;
	configs[36]+=   18;
	return 0x4001000000000;
}

u64 FlipFunctionBBWhite1211(TConfig* configs) {
	configs[ 3]-=  486;
	configs[ 4]-=  162;
	configs[14]-=  153;
	configs[23]-=  162;
	configs[24]-=   54;
	configs[30]-=   54;
	configs[32]-=  162;
	return 0x1020000000;
}

u64 FlipFunctionBBBlack1211(TConfig* configs) {
	configs[ 3]+=  486;
	configs[ 4]+=  162;
	configs[14]+=  153;
	configs[23]+=  162;
	configs[24]+=   54;
	configs[30]+=   54;
	configs[32]+=  162;
	return 0x1020000000;
}

u64 FlipFunctionBBWhite1212(TConfig* configs) {
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
	return 0x4001020000000;
}

u64 FlipFunctionBBBlack1212(TConfig* configs) {
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
	return 0x4001020000000;
}

u64 FlipFunctionBBWhite1213(TConfig* configs) {
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
	return 0x1020400000;
}

u64 FlipFunctionBBBlack1213(TConfig* configs) {
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
	return 0x1020400000;
}

u64 FlipFunctionBBWhite1214(TConfig* configs) {
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
	return 0x4001020400000;
}

u64 FlipFunctionBBBlack1214(TConfig* configs) {
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
	return 0x4001020400000;
}

u64 FlipFunctionBBWhite1215(TConfig* configs) {
	configs[22]-=  243;
	return 0x0;
}

u64 FlipFunctionBBBlack1215(TConfig* configs) {
	configs[22]+=  243;
	return 0x0;
}

u64 FlipFunctionBBWhite1216(TConfig* configs) {
	configs[ 6]-=   54;
	configs[15]-=  162;
	configs[22]-= 1701;
	configs[35]-=   54;
	return 0x8000000000000;
}

u64 FlipFunctionBBBlack1216(TConfig* configs) {
	configs[ 6]+=   54;
	configs[15]+=  162;
	configs[22]+= 1701;
	configs[35]+=   54;
	return 0x8000000000000;
}

u64 FlipFunctionBBWhite1217(TConfig* configs) {
	configs[ 4]-=   54;
	configs[13]-=  162;
	configs[22]-=  405;
	configs[33]-=   54;
	return 0x800000000;
}

u64 FlipFunctionBBBlack1217(TConfig* configs) {
	configs[ 4]+=   54;
	configs[13]+=  162;
	configs[22]+=  405;
	configs[33]+=   54;
	return 0x800000000;
}

u64 FlipFunctionBBWhite1218(TConfig* configs) {
	configs[ 4]-=   54;
	configs[ 6]-=   54;
	configs[13]-=  162;
	configs[15]-=  162;
	configs[22]-= 1863;
	configs[33]-=   54;
	configs[35]-=   54;
	return 0x8000800000000;
}

u64 FlipFunctionBBBlack1218(TConfig* configs) {
	configs[ 4]+=   54;
	configs[ 6]+=   54;
	configs[13]+=  162;
	configs[15]+=  162;
	configs[22]+= 1863;
	configs[33]+=   54;
	configs[35]+=   54;
	return 0x8000800000000;
}

u64 FlipFunctionBBWhite1219(TConfig* configs) {
	configs[ 3]-=   54;
	configs[ 4]-=   54;
	configs[12]-=   54;
	configs[13]-=  162;
	configs[22]-=  459;
	configs[32]-=   54;
	configs[33]-=   54;
	return 0x808000000;
}

u64 FlipFunctionBBBlack1219(TConfig* configs) {
	configs[ 3]+=   54;
	configs[ 4]+=   54;
	configs[12]+=   54;
	configs[13]+=  162;
	configs[22]+=  459;
	configs[32]+=   54;
	configs[33]+=   54;
	return 0x808000000;
}

u64 FlipFunctionBBWhite1220(TConfig* configs) {
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
	return 0x8000808000000;
}

u64 FlipFunctionBBBlack1220(TConfig* configs) {
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
	return 0x8000808000000;
}

u64 FlipFunctionBBWhite1221(TConfig* configs) {
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
	return 0x808080000;
}

u64 FlipFunctionBBBlack1221(TConfig* configs) {
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
	return 0x808080000;
}

u64 FlipFunctionBBWhite1222(TConfig* configs) {
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
	return 0x8000808080000;
}

u64 FlipFunctionBBBlack1222(TConfig* configs) {
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
	return 0x8000808080000;
}

u64 FlipFunctionBBWhite1223(TConfig* configs) {
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
	return 0x808080800;
}

u64 FlipFunctionBBBlack1223(TConfig* configs) {
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
	return 0x808080800;
}

u64 FlipFunctionBBWhite1224(TConfig* configs) {
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
	return 0x8000808080800;
}

u64 FlipFunctionBBBlack1224(TConfig* configs) {
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
	return 0x8000808080800;
}

u64 FlipFunctionBBWhite1225(TConfig* configs) {
	configs[34]-=   27;
	return 0x0;
}

u64 FlipFunctionBBBlack1225(TConfig* configs) {
	configs[34]+=   27;
	return 0x0;
}

u64 FlipFunctionBBWhite1226(TConfig* configs) {
	configs[ 6]-=  162;
	configs[16]-=   54;
	configs[23]-= 1458;
	configs[34]-=  189;
	return 0x10000000000000;
}

u64 FlipFunctionBBBlack1226(TConfig* configs) {
	configs[ 6]+=  162;
	configs[16]+=   54;
	configs[23]+= 1458;
	configs[34]+=  189;
	return 0x10000000000000;
}

u64 FlipFunctionBBWhite1227(TConfig* configs) {
	configs[ 4]-=   18;
	configs[12]-=  162;
	configs[21]-=  162;
	configs[34]-=   45;
	return 0x400000000;
}

u64 FlipFunctionBBBlack1227(TConfig* configs) {
	configs[ 4]+=   18;
	configs[12]+=  162;
	configs[21]+=  162;
	configs[34]+=   45;
	return 0x400000000;
}

u64 FlipFunctionBBWhite1228(TConfig* configs) {
	configs[ 4]-=   18;
	configs[ 6]-=  162;
	configs[12]-=  162;
	configs[16]-=   54;
	configs[21]-=  162;
	configs[23]-= 1458;
	configs[34]-=  207;
	return 0x10000400000000;
}

u64 FlipFunctionBBBlack1228(TConfig* configs) {
	configs[ 4]+=   18;
	configs[ 6]+=  162;
	configs[12]+=  162;
	configs[16]+=   54;
	configs[21]+=  162;
	configs[23]+= 1458;
	configs[34]+=  207;
	return 0x10000400000000;
}

u64 FlipFunctionBBWhite1229(TConfig* configs) {
	configs[ 3]-=    6;
	configs[ 4]-=   18;
	configs[10]-=   54;
	configs[12]-=  162;
	configs[20]-=   54;
	configs[21]-=  162;
	configs[34]-=   51;
	return 0x402000000;
}

u64 FlipFunctionBBBlack1229(TConfig* configs) {
	configs[ 3]+=    6;
	configs[ 4]+=   18;
	configs[10]+=   54;
	configs[12]+=  162;
	configs[20]+=   54;
	configs[21]+=  162;
	configs[34]+=   51;
	return 0x402000000;
}

u64 FlipFunctionBBWhite1230(TConfig* configs) {
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
	return 0x10000402000000;
}

u64 FlipFunctionBBBlack1230(TConfig* configs) {
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
	return 0x10000402000000;
}

u64 FlipFunctionBBWhite1231(TConfig* configs) {
	configs[ 5]-=   81;
	return 0x100000000000;
}

u64 FlipFunctionBBBlack1231(TConfig* configs) {
	configs[ 5]+=   81;
	return 0x100000000000;
}

u64 FlipFunctionBBWhite1232(TConfig* configs) {
	configs[ 5]-=  567;
	configs[16]-=   18;
	configs[24]-=  486;
	configs[32]-=  486;
	return 0x300000000000;
}

u64 FlipFunctionBBBlack1232(TConfig* configs) {
	configs[ 5]+=  567;
	configs[16]+=   18;
	configs[24]+=  486;
	configs[32]+=  486;
	return 0x300000000000;
}

u64 FlipFunctionBBWhite1233(TConfig* configs) {
	configs[ 5]-= 2025;
	configs[16]-=   18;
	configs[17]-=    6;
	configs[24]-=  486;
	configs[25]-=  486;
	configs[31]-=  486;
	configs[32]-=  486;
	return 0x700000000000;
}

u64 FlipFunctionBBBlack1233(TConfig* configs) {
	configs[ 5]+= 2025;
	configs[16]+=   18;
	configs[17]+=    6;
	configs[24]+=  486;
	configs[25]+=  486;
	configs[31]+=  486;
	configs[32]+=  486;
	return 0x700000000000;
}

u64 FlipFunctionBBWhite1234(TConfig* configs) {
	configs[ 5]-=  135;
	configs[14]-=  162;
	configs[22]-=  486;
	configs[34]-=   54;
	return 0x180000000000;
}

u64 FlipFunctionBBBlack1234(TConfig* configs) {
	configs[ 5]+=  135;
	configs[14]+=  162;
	configs[22]+=  486;
	configs[34]+=   54;
	return 0x180000000000;
}

u64 FlipFunctionBBWhite1235(TConfig* configs) {
	configs[ 5]-=  621;
	configs[14]-=  162;
	configs[16]-=   18;
	configs[22]-=  486;
	configs[24]-=  486;
	configs[32]-=  486;
	configs[34]-=   54;
	return 0x380000000000;
}

u64 FlipFunctionBBBlack1235(TConfig* configs) {
	configs[ 5]+=  621;
	configs[14]+=  162;
	configs[16]+=   18;
	configs[22]+=  486;
	configs[24]+=  486;
	configs[32]+=  486;
	configs[34]+=   54;
	return 0x380000000000;
}

u64 FlipFunctionBBWhite1236(TConfig* configs) {
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
	return 0x780000000000;
}

u64 FlipFunctionBBBlack1236(TConfig* configs) {
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
	return 0x780000000000;
}

u64 FlipFunctionBBWhite1237(TConfig* configs) {
	configs[ 5]-=  153;
	configs[13]-=  486;
	configs[14]-=  162;
	configs[21]-=  486;
	configs[22]-=  486;
	configs[34]-=   54;
	configs[35]-=   18;
	return 0x1c0000000000;
}

u64 FlipFunctionBBBlack1237(TConfig* configs) {
	configs[ 5]+=  153;
	configs[13]+=  486;
	configs[14]+=  162;
	configs[21]+=  486;
	configs[22]+=  486;
	configs[34]+=   54;
	configs[35]+=   18;
	return 0x1c0000000000;
}

u64 FlipFunctionBBWhite1238(TConfig* configs) {
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
	return 0x3c0000000000;
}

u64 FlipFunctionBBBlack1238(TConfig* configs) {
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
	return 0x3c0000000000;
}

u64 FlipFunctionBBWhite1239(TConfig* configs) {
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
	return 0x7c0000000000;
}

u64 FlipFunctionBBBlack1239(TConfig* configs) {
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
	return 0x7c0000000000;
}

u64 FlipFunctionBBWhite1240(TConfig* configs) {
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
	return 0x1e0000000000;
}

u64 FlipFunctionBBBlack1240(TConfig* configs) {
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
	return 0x1e0000000000;
}

u64 FlipFunctionBBWhite1241(TConfig* configs) {
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
	return 0x3e0000000000;
}

u64 FlipFunctionBBBlack1241(TConfig* configs) {
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
	return 0x3e0000000000;
}

u64 FlipFunctionBBWhite1242(TConfig* configs) {
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
	return 0x7e0000000000;
}

u64 FlipFunctionBBBlack1242(TConfig* configs) {
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
	return 0x7e0000000000;
}

u64 FlipFunctionBBWhite1243(TConfig* configs) {
	configs[15]-=   27;
	return 0x0;
}

u64 FlipFunctionBBBlack1243(TConfig* configs) {
	configs[15]+=   27;
	return 0x0;
}

u64 FlipFunctionBBWhite1244(TConfig* configs) {
	configs[ 6]-=   54;
	configs[15]-=  189;
	configs[22]-= 1458;
	configs[35]-=   54;
	return 0x8000000000000;
}

u64 FlipFunctionBBBlack1244(TConfig* configs) {
	configs[ 6]+=   54;
	configs[15]+=  189;
	configs[22]+= 1458;
	configs[35]+=   54;
	return 0x8000000000000;
}

u64 FlipFunctionBBWhite1245(TConfig* configs) {
	configs[ 4]-=  486;
	configs[15]-=   45;
	configs[24]-=  162;
	configs[31]-=  162;
	return 0x2000000000;
}

u64 FlipFunctionBBBlack1245(TConfig* configs) {
	configs[ 4]+=  486;
	configs[15]+=   45;
	configs[24]+=  162;
	configs[31]+=  162;
	return 0x2000000000;
}

u64 FlipFunctionBBWhite1246(TConfig* configs) {
	configs[ 4]-=  486;
	configs[ 6]-=   54;
	configs[15]-=  207;
	configs[22]-= 1458;
	configs[24]-=  162;
	configs[31]-=  162;
	configs[35]-=   54;
	return 0x8002000000000;
}

u64 FlipFunctionBBBlack1246(TConfig* configs) {
	configs[ 4]+=  486;
	configs[ 6]+=   54;
	configs[15]+=  207;
	configs[22]+= 1458;
	configs[24]+=  162;
	configs[31]+=  162;
	configs[35]+=   54;
	return 0x8002000000000;
}

u64 FlipFunctionBBWhite1247(TConfig* configs) {
	configs[ 3]-= 1458;
	configs[ 4]-=  486;
	configs[15]-=   51;
	configs[24]-=  162;
	configs[25]-=   54;
	configs[29]-=   54;
	configs[31]-=  162;
	return 0x2040000000;
}

u64 FlipFunctionBBBlack1247(TConfig* configs) {
	configs[ 3]+= 1458;
	configs[ 4]+=  486;
	configs[15]+=   51;
	configs[24]+=  162;
	configs[25]+=   54;
	configs[29]+=   54;
	configs[31]+=  162;
	return 0x2040000000;
}

u64 FlipFunctionBBWhite1248(TConfig* configs) {
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
	return 0x8002040000000;
}

u64 FlipFunctionBBBlack1248(TConfig* configs) {
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
	return 0x8002040000000;
}

u64 FlipFunctionBBWhite1249(TConfig* configs) {
	configs[23]-=  243;
	return 0x0;
}

u64 FlipFunctionBBBlack1249(TConfig* configs) {
	configs[23]+=  243;
	return 0x0;
}

u64 FlipFunctionBBWhite1250(TConfig* configs) {
	configs[ 6]-=  162;
	configs[16]-=   54;
	configs[23]-= 1701;
	configs[34]-=  162;
	return 0x10000000000000;
}

u64 FlipFunctionBBBlack1250(TConfig* configs) {
	configs[ 6]+=  162;
	configs[16]+=   54;
	configs[23]+= 1701;
	configs[34]+=  162;
	return 0x10000000000000;
}

u64 FlipFunctionBBWhite1251(TConfig* configs) {
	configs[ 4]-=  162;
	configs[14]-=   54;
	configs[23]-=  405;
	configs[32]-=  162;
	return 0x1000000000;
}

u64 FlipFunctionBBBlack1251(TConfig* configs) {
	configs[ 4]+=  162;
	configs[14]+=   54;
	configs[23]+=  405;
	configs[32]+=  162;
	return 0x1000000000;
}

u64 FlipFunctionBBWhite1252(TConfig* configs) {
	configs[ 4]-=  162;
	configs[ 6]-=  162;
	configs[14]-=   54;
	configs[16]-=   54;
	configs[23]-= 1863;
	configs[32]-=  162;
	configs[34]-=  162;
	return 0x10001000000000;
}

u64 FlipFunctionBBBlack1252(TConfig* configs) {
	configs[ 4]+=  162;
	configs[ 6]+=  162;
	configs[14]+=   54;
	configs[16]+=   54;
	configs[23]+= 1863;
	configs[32]+=  162;
	configs[34]+=  162;
	return 0x10001000000000;
}

u64 FlipFunctionBBWhite1253(TConfig* configs) {
	configs[ 3]-=  162;
	configs[ 4]-=  162;
	configs[13]-=   54;
	configs[14]-=   54;
	configs[23]-=  459;
	configs[31]-=   54;
	configs[32]-=  162;
	return 0x1010000000;
}

u64 FlipFunctionBBBlack1253(TConfig* configs) {
	configs[ 3]+=  162;
	configs[ 4]+=  162;
	configs[13]+=   54;
	configs[14]+=   54;
	configs[23]+=  459;
	configs[31]+=   54;
	configs[32]+=  162;
	return 0x1010000000;
}

u64 FlipFunctionBBWhite1254(TConfig* configs) {
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
	return 0x10001010000000;
}

u64 FlipFunctionBBBlack1254(TConfig* configs) {
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
	return 0x10001010000000;
}

u64 FlipFunctionBBWhite1255(TConfig* configs) {
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
	return 0x1010100000;
}

u64 FlipFunctionBBBlack1255(TConfig* configs) {
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
	return 0x1010100000;
}

u64 FlipFunctionBBWhite1256(TConfig* configs) {
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
	return 0x10001010100000;
}

u64 FlipFunctionBBBlack1256(TConfig* configs) {
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
	return 0x10001010100000;
}

u64 FlipFunctionBBWhite1257(TConfig* configs) {
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
	return 0x1010101000;
}

u64 FlipFunctionBBBlack1257(TConfig* configs) {
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
	return 0x1010101000;
}

u64 FlipFunctionBBWhite1258(TConfig* configs) {
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
	return 0x10001010101000;
}

u64 FlipFunctionBBBlack1258(TConfig* configs) {
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
	return 0x10001010101000;
}

u64 FlipFunctionBBWhite1259(TConfig* configs) {
	configs[33]-=   81;
	return 0x0;
}

u64 FlipFunctionBBBlack1259(TConfig* configs) {
	configs[33]+=   81;
	return 0x0;
}

u64 FlipFunctionBBWhite1260(TConfig* configs) {
	configs[ 6]-=  486;
	configs[17]-=   18;
	configs[24]-= 1458;
	configs[33]-=  567;
	return 0x20000000000000;
}

u64 FlipFunctionBBBlack1260(TConfig* configs) {
	configs[ 6]+=  486;
	configs[17]+=   18;
	configs[24]+= 1458;
	configs[33]+=  567;
	return 0x20000000000000;
}

u64 FlipFunctionBBWhite1261(TConfig* configs) {
	configs[ 4]-=   54;
	configs[13]-=  162;
	configs[22]-=  162;
	configs[33]-=  135;
	return 0x800000000;
}

u64 FlipFunctionBBBlack1261(TConfig* configs) {
	configs[ 4]+=   54;
	configs[13]+=  162;
	configs[22]+=  162;
	configs[33]+=  135;
	return 0x800000000;
}

u64 FlipFunctionBBWhite1262(TConfig* configs) {
	configs[ 4]-=   54;
	configs[ 6]-=  486;
	configs[13]-=  162;
	configs[17]-=   18;
	configs[22]-=  162;
	configs[24]-= 1458;
	configs[33]-=  621;
	return 0x20000800000000;
}

u64 FlipFunctionBBBlack1262(TConfig* configs) {
	configs[ 4]+=   54;
	configs[ 6]+=  486;
	configs[13]+=  162;
	configs[17]+=   18;
	configs[22]+=  162;
	configs[24]+= 1458;
	configs[33]+=  621;
	return 0x20000800000000;
}

u64 FlipFunctionBBWhite1263(TConfig* configs) {
	configs[ 3]-=   18;
	configs[ 4]-=   54;
	configs[11]-=   54;
	configs[13]-=  162;
	configs[21]-=   54;
	configs[22]-=  162;
	configs[33]-=  153;
	return 0x804000000;
}

u64 FlipFunctionBBBlack1263(TConfig* configs) {
	configs[ 3]+=   18;
	configs[ 4]+=   54;
	configs[11]+=   54;
	configs[13]+=  162;
	configs[21]+=   54;
	configs[22]+=  162;
	configs[33]+=  153;
	return 0x804000000;
}

u64 FlipFunctionBBWhite1264(TConfig* configs) {
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
	return 0x20000804000000;
}

u64 FlipFunctionBBBlack1264(TConfig* configs) {
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
	return 0x20000804000000;
}

u64 FlipFunctionBBWhite1265(TConfig* configs) {
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
	return 0x804020000;
}

u64 FlipFunctionBBBlack1265(TConfig* configs) {
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
	return 0x804020000;
}

u64 FlipFunctionBBWhite1266(TConfig* configs) {
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
	return 0x20000804020000;
}

u64 FlipFunctionBBBlack1266(TConfig* configs) {
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
	return 0x20000804020000;
}

u64 FlipFunctionBBWhite1267(TConfig* configs) {
	configs[ 5]-=  243;
	return 0x200000000000;
}

u64 FlipFunctionBBBlack1267(TConfig* configs) {
	configs[ 5]+=  243;
	return 0x200000000000;
}

u64 FlipFunctionBBWhite1268(TConfig* configs) {
	configs[ 5]-= 1701;
	configs[17]-=    6;
	configs[25]-=  486;
	configs[31]-=  486;
	return 0x600000000000;
}

u64 FlipFunctionBBBlack1268(TConfig* configs) {
	configs[ 5]+= 1701;
	configs[17]+=    6;
	configs[25]+=  486;
	configs[31]+=  486;
	return 0x600000000000;
}

u64 FlipFunctionBBWhite1269(TConfig* configs) {
	configs[ 5]-=  405;
	configs[15]-=   54;
	configs[23]-=  486;
	configs[33]-=  162;
	return 0x300000000000;
}

u64 FlipFunctionBBBlack1269(TConfig* configs) {
	configs[ 5]+=  405;
	configs[15]+=   54;
	configs[23]+=  486;
	configs[33]+=  162;
	return 0x300000000000;
}

u64 FlipFunctionBBWhite1270(TConfig* configs) {
	configs[ 5]-= 1863;
	configs[15]-=   54;
	configs[17]-=    6;
	configs[23]-=  486;
	configs[25]-=  486;
	configs[31]-=  486;
	configs[33]-=  162;
	return 0x700000000000;
}

u64 FlipFunctionBBBlack1270(TConfig* configs) {
	configs[ 5]+= 1863;
	configs[15]+=   54;
	configs[17]+=    6;
	configs[23]+=  486;
	configs[25]+=  486;
	configs[31]+=  486;
	configs[33]+=  162;
	return 0x700000000000;
}

u64 FlipFunctionBBWhite1271(TConfig* configs) {
	configs[ 5]-=  459;
	configs[14]-=  162;
	configs[15]-=   54;
	configs[22]-=  486;
	configs[23]-=  486;
	configs[33]-=  162;
	configs[34]-=   54;
	return 0x380000000000;
}

u64 FlipFunctionBBBlack1271(TConfig* configs) {
	configs[ 5]+=  459;
	configs[14]+=  162;
	configs[15]+=   54;
	configs[22]+=  486;
	configs[23]+=  486;
	configs[33]+=  162;
	configs[34]+=   54;
	return 0x380000000000;
}

u64 FlipFunctionBBWhite1272(TConfig* configs) {
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
	return 0x780000000000;
}

u64 FlipFunctionBBBlack1272(TConfig* configs) {
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
	return 0x780000000000;
}

u64 FlipFunctionBBWhite1273(TConfig* configs) {
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
	return 0x3c0000000000;
}

u64 FlipFunctionBBBlack1273(TConfig* configs) {
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
	return 0x3c0000000000;
}

u64 FlipFunctionBBWhite1274(TConfig* configs) {
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
	return 0x7c0000000000;
}

u64 FlipFunctionBBBlack1274(TConfig* configs) {
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
	return 0x7c0000000000;
}

u64 FlipFunctionBBWhite1275(TConfig* configs) {
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
	return 0x3e0000000000;
}

u64 FlipFunctionBBBlack1275(TConfig* configs) {
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
	return 0x3e0000000000;
}

u64 FlipFunctionBBWhite1276(TConfig* configs) {
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
	return 0x7e0000000000;
}

u64 FlipFunctionBBBlack1276(TConfig* configs) {
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
	return 0x7e0000000000;
}

u64 FlipFunctionBBWhite1277(TConfig* configs) {
	configs[16]-=    9;
	return 0x0;
}

u64 FlipFunctionBBBlack1277(TConfig* configs) {
	configs[16]+=    9;
	return 0x0;
}

u64 FlipFunctionBBWhite1278(TConfig* configs) {
	configs[ 6]-=  162;
	configs[16]-=   63;
	configs[23]-= 1458;
	configs[34]-=  162;
	return 0x10000000000000;
}

u64 FlipFunctionBBBlack1278(TConfig* configs) {
	configs[ 6]+=  162;
	configs[16]+=   63;
	configs[23]+= 1458;
	configs[34]+=  162;
	return 0x10000000000000;
}

u64 FlipFunctionBBWhite1279(TConfig* configs) {
	configs[ 4]-= 1458;
	configs[16]-=   15;
	configs[25]-=  162;
	configs[30]-=  162;
	return 0x4000000000;
}

u64 FlipFunctionBBBlack1279(TConfig* configs) {
	configs[ 4]+= 1458;
	configs[16]+=   15;
	configs[25]+=  162;
	configs[30]+=  162;
	return 0x4000000000;
}

u64 FlipFunctionBBWhite1280(TConfig* configs) {
	configs[ 4]-= 1458;
	configs[ 6]-=  162;
	configs[16]-=   69;
	configs[23]-= 1458;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[34]-=  162;
	return 0x10004000000000;
}

u64 FlipFunctionBBBlack1280(TConfig* configs) {
	configs[ 4]+= 1458;
	configs[ 6]+=  162;
	configs[16]+=   69;
	configs[23]+= 1458;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[34]+=  162;
	return 0x10004000000000;
}

u64 FlipFunctionBBWhite1281(TConfig* configs) {
	configs[24]-=  243;
	return 0x0;
}

u64 FlipFunctionBBBlack1281(TConfig* configs) {
	configs[24]+=  243;
	return 0x0;
}

u64 FlipFunctionBBWhite1282(TConfig* configs) {
	configs[ 6]-=  486;
	configs[17]-=   18;
	configs[24]-= 1701;
	configs[33]-=  486;
	return 0x20000000000000;
}

u64 FlipFunctionBBBlack1282(TConfig* configs) {
	configs[ 6]+=  486;
	configs[17]+=   18;
	configs[24]+= 1701;
	configs[33]+=  486;
	return 0x20000000000000;
}

u64 FlipFunctionBBWhite1283(TConfig* configs) {
	configs[ 4]-=  486;
	configs[15]-=   18;
	configs[24]-=  405;
	configs[31]-=  162;
	return 0x2000000000;
}

u64 FlipFunctionBBBlack1283(TConfig* configs) {
	configs[ 4]+=  486;
	configs[15]+=   18;
	configs[24]+=  405;
	configs[31]+=  162;
	return 0x2000000000;
}

u64 FlipFunctionBBWhite1284(TConfig* configs) {
	configs[ 4]-=  486;
	configs[ 6]-=  486;
	configs[15]-=   18;
	configs[17]-=   18;
	configs[24]-= 1863;
	configs[31]-=  162;
	configs[33]-=  486;
	return 0x20002000000000;
}

u64 FlipFunctionBBBlack1284(TConfig* configs) {
	configs[ 4]+=  486;
	configs[ 6]+=  486;
	configs[15]+=   18;
	configs[17]+=   18;
	configs[24]+= 1863;
	configs[31]+=  162;
	configs[33]+=  486;
	return 0x20002000000000;
}

u64 FlipFunctionBBWhite1285(TConfig* configs) {
	configs[ 3]-=  486;
	configs[ 4]-=  486;
	configs[14]-=   18;
	configs[15]-=   18;
	configs[24]-=  459;
	configs[30]-=   54;
	configs[31]-=  162;
	return 0x2020000000;
}

u64 FlipFunctionBBBlack1285(TConfig* configs) {
	configs[ 3]+=  486;
	configs[ 4]+=  486;
	configs[14]+=   18;
	configs[15]+=   18;
	configs[24]+=  459;
	configs[30]+=   54;
	configs[31]+=  162;
	return 0x2020000000;
}

u64 FlipFunctionBBWhite1286(TConfig* configs) {
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
	return 0x20002020000000;
}

u64 FlipFunctionBBBlack1286(TConfig* configs) {
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
	return 0x20002020000000;
}

u64 FlipFunctionBBWhite1287(TConfig* configs) {
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
	return 0x2020200000;
}

u64 FlipFunctionBBBlack1287(TConfig* configs) {
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
	return 0x2020200000;
}

u64 FlipFunctionBBWhite1288(TConfig* configs) {
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
	return 0x20002020200000;
}

u64 FlipFunctionBBBlack1288(TConfig* configs) {
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
	return 0x20002020200000;
}

u64 FlipFunctionBBWhite1289(TConfig* configs) {
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
	return 0x2020202000;
}

u64 FlipFunctionBBBlack1289(TConfig* configs) {
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
	return 0x2020202000;
}

u64 FlipFunctionBBWhite1290(TConfig* configs) {
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
	return 0x20002020202000;
}

u64 FlipFunctionBBBlack1290(TConfig* configs) {
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
	return 0x20002020202000;
}

u64 FlipFunctionBBWhite1291(TConfig* configs) {
	configs[32]-=  243;
	return 0x0;
}

u64 FlipFunctionBBBlack1291(TConfig* configs) {
	configs[32]+=  243;
	return 0x0;
}

u64 FlipFunctionBBWhite1292(TConfig* configs) {
	configs[ 6]-= 1458;
	configs[18]-=    6;
	configs[25]-= 1458;
	configs[32]-= 1701;
	return 0x40000000000000;
}

u64 FlipFunctionBBBlack1292(TConfig* configs) {
	configs[ 6]+= 1458;
	configs[18]+=    6;
	configs[25]+= 1458;
	configs[32]+= 1701;
	return 0x40000000000000;
}

u64 FlipFunctionBBWhite1293(TConfig* configs) {
	configs[ 4]-=  162;
	configs[14]-=   54;
	configs[23]-=  162;
	configs[32]-=  405;
	return 0x1000000000;
}

u64 FlipFunctionBBBlack1293(TConfig* configs) {
	configs[ 4]+=  162;
	configs[14]+=   54;
	configs[23]+=  162;
	configs[32]+=  405;
	return 0x1000000000;
}

u64 FlipFunctionBBWhite1294(TConfig* configs) {
	configs[ 4]-=  162;
	configs[ 6]-= 1458;
	configs[14]-=   54;
	configs[18]-=    6;
	configs[23]-=  162;
	configs[25]-= 1458;
	configs[32]-= 1863;
	return 0x40001000000000;
}

u64 FlipFunctionBBBlack1294(TConfig* configs) {
	configs[ 4]+=  162;
	configs[ 6]+= 1458;
	configs[14]+=   54;
	configs[18]+=    6;
	configs[23]+=  162;
	configs[25]+= 1458;
	configs[32]+= 1863;
	return 0x40001000000000;
}

u64 FlipFunctionBBWhite1295(TConfig* configs) {
	configs[ 3]-=   54;
	configs[ 4]-=  162;
	configs[12]-=   54;
	configs[14]-=   54;
	configs[22]-=   54;
	configs[23]-=  162;
	configs[32]-=  459;
	return 0x1008000000;
}

u64 FlipFunctionBBBlack1295(TConfig* configs) {
	configs[ 3]+=   54;
	configs[ 4]+=  162;
	configs[12]+=   54;
	configs[14]+=   54;
	configs[22]+=   54;
	configs[23]+=  162;
	configs[32]+=  459;
	return 0x1008000000;
}

u64 FlipFunctionBBWhite1296(TConfig* configs) {
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
	return 0x40001008000000;
}

u64 FlipFunctionBBBlack1296(TConfig* configs) {
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
	return 0x40001008000000;
}

u64 FlipFunctionBBWhite1297(TConfig* configs) {
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
	return 0x1008040000;
}

u64 FlipFunctionBBBlack1297(TConfig* configs) {
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
	return 0x1008040000;
}

u64 FlipFunctionBBWhite1298(TConfig* configs) {
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
	return 0x40001008040000;
}

u64 FlipFunctionBBBlack1298(TConfig* configs) {
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
	return 0x40001008040000;
}

u64 FlipFunctionBBWhite1299(TConfig* configs) {
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
	return 0x1008040200;
}

u64 FlipFunctionBBBlack1299(TConfig* configs) {
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
	return 0x1008040200;
}

u64 FlipFunctionBBWhite1300(TConfig* configs) {
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
	return 0x40001008040200;
}

u64 FlipFunctionBBBlack1300(TConfig* configs) {
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
	return 0x40001008040200;
}

u64 FlipFunctionBBWhite1301(TConfig* configs) {
	configs[ 5]-=  729;
	return 0x400000000000;
}

u64 FlipFunctionBBBlack1301(TConfig* configs) {
	configs[ 5]+=  729;
	return 0x400000000000;
}

u64 FlipFunctionBBWhite1302(TConfig* configs) {
	configs[ 5]-= 1215;
	configs[16]-=   18;
	configs[24]-=  486;
	configs[32]-=  486;
	return 0x600000000000;
}

u64 FlipFunctionBBBlack1302(TConfig* configs) {
	configs[ 5]+= 1215;
	configs[16]+=   18;
	configs[24]+=  486;
	configs[32]+=  486;
	return 0x600000000000;
}

u64 FlipFunctionBBWhite1303(TConfig* configs) {
	configs[ 5]-= 1377;
	configs[15]-=   54;
	configs[16]-=   18;
	configs[23]-=  486;
	configs[24]-=  486;
	configs[32]-=  486;
	configs[33]-=  162;
	return 0x700000000000;
}

u64 FlipFunctionBBBlack1303(TConfig* configs) {
	configs[ 5]+= 1377;
	configs[15]+=   54;
	configs[16]+=   18;
	configs[23]+=  486;
	configs[24]+=  486;
	configs[32]+=  486;
	configs[33]+=  162;
	return 0x700000000000;
}

u64 FlipFunctionBBWhite1304(TConfig* configs) {
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
	return 0x780000000000;
}

u64 FlipFunctionBBBlack1304(TConfig* configs) {
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
	return 0x780000000000;
}

u64 FlipFunctionBBWhite1305(TConfig* configs) {
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
	return 0x7c0000000000;
}

u64 FlipFunctionBBBlack1305(TConfig* configs) {
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
	return 0x7c0000000000;
}

u64 FlipFunctionBBWhite1306(TConfig* configs) {
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
	return 0x7e0000000000;
}

u64 FlipFunctionBBBlack1306(TConfig* configs) {
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
	return 0x7e0000000000;
}

u64 FlipFunctionBBWhite1307(TConfig* configs) {
	configs[17]-=    3;
	return 0x0;
}

u64 FlipFunctionBBBlack1307(TConfig* configs) {
	configs[17]+=    3;
	return 0x0;
}

u64 FlipFunctionBBWhite1308(TConfig* configs) {
	configs[ 6]-=  486;
	configs[17]-=   21;
	configs[24]-= 1458;
	configs[33]-=  486;
	return 0x20000000000000;
}

u64 FlipFunctionBBBlack1308(TConfig* configs) {
	configs[ 6]+=  486;
	configs[17]+=   21;
	configs[24]+= 1458;
	configs[33]+=  486;
	return 0x20000000000000;
}

u64 FlipFunctionBBWhite1309(TConfig* configs) {
	configs[25]-=  243;
	return 0x0;
}

u64 FlipFunctionBBBlack1309(TConfig* configs) {
	configs[25]+=  243;
	return 0x0;
}

u64 FlipFunctionBBWhite1310(TConfig* configs) {
	configs[ 6]-= 1458;
	configs[18]-=    6;
	configs[25]-= 1701;
	configs[32]-= 1458;
	return 0x40000000000000;
}

u64 FlipFunctionBBBlack1310(TConfig* configs) {
	configs[ 6]+= 1458;
	configs[18]+=    6;
	configs[25]+= 1701;
	configs[32]+= 1458;
	return 0x40000000000000;
}

u64 FlipFunctionBBWhite1311(TConfig* configs) {
	configs[ 4]-= 1458;
	configs[16]-=    6;
	configs[25]-=  405;
	configs[30]-=  162;
	return 0x4000000000;
}

u64 FlipFunctionBBBlack1311(TConfig* configs) {
	configs[ 4]+= 1458;
	configs[16]+=    6;
	configs[25]+=  405;
	configs[30]+=  162;
	return 0x4000000000;
}

u64 FlipFunctionBBWhite1312(TConfig* configs) {
	configs[ 4]-= 1458;
	configs[ 6]-= 1458;
	configs[16]-=    6;
	configs[18]-=    6;
	configs[25]-= 1863;
	configs[30]-=  162;
	configs[32]-= 1458;
	return 0x40004000000000;
}

u64 FlipFunctionBBBlack1312(TConfig* configs) {
	configs[ 4]+= 1458;
	configs[ 6]+= 1458;
	configs[16]+=    6;
	configs[18]+=    6;
	configs[25]+= 1863;
	configs[30]+=  162;
	configs[32]+= 1458;
	return 0x40004000000000;
}

u64 FlipFunctionBBWhite1313(TConfig* configs) {
	configs[ 3]-= 1458;
	configs[ 4]-= 1458;
	configs[15]-=    6;
	configs[16]-=    6;
	configs[25]-=  459;
	configs[29]-=   54;
	configs[30]-=  162;
	return 0x4040000000;
}

u64 FlipFunctionBBBlack1313(TConfig* configs) {
	configs[ 3]+= 1458;
	configs[ 4]+= 1458;
	configs[15]+=    6;
	configs[16]+=    6;
	configs[25]+=  459;
	configs[29]+=   54;
	configs[30]+=  162;
	return 0x4040000000;
}

u64 FlipFunctionBBWhite1314(TConfig* configs) {
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
	return 0x40004040000000;
}

u64 FlipFunctionBBBlack1314(TConfig* configs) {
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
	return 0x40004040000000;
}

u64 FlipFunctionBBWhite1315(TConfig* configs) {
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
	return 0x4040400000;
}

u64 FlipFunctionBBBlack1315(TConfig* configs) {
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
	return 0x4040400000;
}

u64 FlipFunctionBBWhite1316(TConfig* configs) {
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
	return 0x40004040400000;
}

u64 FlipFunctionBBBlack1316(TConfig* configs) {
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
	return 0x40004040400000;
}

u64 FlipFunctionBBWhite1317(TConfig* configs) {
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
	return 0x4040404000;
}

u64 FlipFunctionBBBlack1317(TConfig* configs) {
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
	return 0x4040404000;
}

u64 FlipFunctionBBWhite1318(TConfig* configs) {
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
	return 0x40004040404000;
}

u64 FlipFunctionBBBlack1318(TConfig* configs) {
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
	return 0x40004040404000;
}

u64 FlipFunctionBBWhite1319(TConfig* configs) {
	configs[31]-=  243;
	return 0x0;
}

u64 FlipFunctionBBBlack1319(TConfig* configs) {
	configs[31]+=  243;
	return 0x0;
}

u64 FlipFunctionBBWhite1320(TConfig* configs) {
	configs[ 4]-=  486;
	configs[15]-=   18;
	configs[24]-=  162;
	configs[31]-=  405;
	return 0x2000000000;
}

u64 FlipFunctionBBBlack1320(TConfig* configs) {
	configs[ 4]+=  486;
	configs[15]+=   18;
	configs[24]+=  162;
	configs[31]+=  405;
	return 0x2000000000;
}

u64 FlipFunctionBBWhite1321(TConfig* configs) {
	configs[ 3]-=  162;
	configs[ 4]-=  486;
	configs[13]-=   54;
	configs[15]-=   18;
	configs[23]-=   54;
	configs[24]-=  162;
	configs[31]-=  459;
	return 0x2010000000;
}

u64 FlipFunctionBBBlack1321(TConfig* configs) {
	configs[ 3]+=  162;
	configs[ 4]+=  486;
	configs[13]+=   54;
	configs[15]+=   18;
	configs[23]+=   54;
	configs[24]+=  162;
	configs[31]+=  459;
	return 0x2010000000;
}

u64 FlipFunctionBBWhite1322(TConfig* configs) {
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
	return 0x2010080000;
}

u64 FlipFunctionBBBlack1322(TConfig* configs) {
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
	return 0x2010080000;
}

u64 FlipFunctionBBWhite1323(TConfig* configs) {
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
	return 0x2010080400;
}

u64 FlipFunctionBBBlack1323(TConfig* configs) {
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
	return 0x2010080400;
}

u64 FlipFunctionBBWhite1324(TConfig* configs) {
	configs[ 5]-= 2187;
	return 0x800000000000;
}

u64 FlipFunctionBBBlack1324(TConfig* configs) {
	configs[ 5]+= 2187;
	return 0x800000000000;
}

u64 FlipFunctionBBWhite1325(TConfig* configs) {
	configs[ 5]-= 3645;
	configs[17]-=    6;
	configs[25]-=  486;
	configs[31]-=  486;
	return 0xc00000000000;
}

u64 FlipFunctionBBBlack1325(TConfig* configs) {
	configs[ 5]+= 3645;
	configs[17]+=    6;
	configs[25]+=  486;
	configs[31]+=  486;
	return 0xc00000000000;
}

u64 FlipFunctionBBWhite1326(TConfig* configs) {
	configs[ 5]-= 4131;
	configs[16]-=   18;
	configs[17]-=    6;
	configs[24]-=  486;
	configs[25]-=  486;
	configs[31]-=  486;
	configs[32]-=  486;
	return 0xe00000000000;
}

u64 FlipFunctionBBBlack1326(TConfig* configs) {
	configs[ 5]+= 4131;
	configs[16]+=   18;
	configs[17]+=    6;
	configs[24]+=  486;
	configs[25]+=  486;
	configs[31]+=  486;
	configs[32]+=  486;
	return 0xe00000000000;
}

u64 FlipFunctionBBWhite1327(TConfig* configs) {
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
	return 0xf00000000000;
}

u64 FlipFunctionBBBlack1327(TConfig* configs) {
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
	return 0xf00000000000;
}

u64 FlipFunctionBBWhite1328(TConfig* configs) {
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
	return 0xf80000000000;
}

u64 FlipFunctionBBBlack1328(TConfig* configs) {
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
	return 0xf80000000000;
}

u64 FlipFunctionBBWhite1329(TConfig* configs) {
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
	return 0xfc0000000000;
}

u64 FlipFunctionBBBlack1329(TConfig* configs) {
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
	return 0xfc0000000000;
}

u64 FlipFunctionBBWhite1330(TConfig* configs) {
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
	return 0xfe0000000000;
}

u64 FlipFunctionBBBlack1330(TConfig* configs) {
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
	return 0xfe0000000000;
}

u64 FlipFunctionBBWhite1331(TConfig* configs) {
	configs[18]-=    1;
	return 0x0;
}

u64 FlipFunctionBBBlack1331(TConfig* configs) {
	configs[18]+=    1;
	return 0x0;
}

u64 FlipFunctionBBWhite1332(TConfig* configs) {
	configs[ 6]-= 1458;
	configs[18]-=    7;
	configs[25]-= 1458;
	configs[32]-= 1458;
	return 0x40000000000000;
}

u64 FlipFunctionBBBlack1332(TConfig* configs) {
	configs[ 6]+= 1458;
	configs[18]+=    7;
	configs[25]+= 1458;
	configs[32]+= 1458;
	return 0x40000000000000;
}

u64 FlipFunctionBBWhite1333(TConfig* configs) {
	configs[26]-=  243;
	return 0x0;
}

u64 FlipFunctionBBBlack1333(TConfig* configs) {
	configs[26]+=  243;
	return 0x0;
}

u64 FlipFunctionBBWhite1334(TConfig* configs) {
	configs[ 6]-= 4374;
	configs[26]-= 1701;
	configs[31]-= 1458;
	return 0x80000000000000;
}

u64 FlipFunctionBBBlack1334(TConfig* configs) {
	configs[ 6]+= 4374;
	configs[26]+= 1701;
	configs[31]+= 1458;
	return 0x80000000000000;
}

u64 FlipFunctionBBWhite1335(TConfig* configs) {
	configs[ 4]-= 4374;
	configs[17]-=    2;
	configs[26]-=  405;
	configs[29]-=  162;
	return 0x8000000000;
}

u64 FlipFunctionBBBlack1335(TConfig* configs) {
	configs[ 4]+= 4374;
	configs[17]+=    2;
	configs[26]+=  405;
	configs[29]+=  162;
	return 0x8000000000;
}

u64 FlipFunctionBBWhite1336(TConfig* configs) {
	configs[ 4]-= 4374;
	configs[ 6]-= 4374;
	configs[17]-=    2;
	configs[26]-= 1863;
	configs[29]-=  162;
	configs[31]-= 1458;
	return 0x80008000000000;
}

u64 FlipFunctionBBBlack1336(TConfig* configs) {
	configs[ 4]+= 4374;
	configs[ 6]+= 4374;
	configs[17]+=    2;
	configs[26]+= 1863;
	configs[29]+=  162;
	configs[31]+= 1458;
	return 0x80008000000000;
}

u64 FlipFunctionBBWhite1337(TConfig* configs) {
	configs[ 3]-= 4374;
	configs[ 4]-= 4374;
	configs[16]-=    2;
	configs[17]-=    2;
	configs[26]-=  459;
	configs[28]-=   54;
	configs[29]-=  162;
	return 0x8080000000;
}

u64 FlipFunctionBBBlack1337(TConfig* configs) {
	configs[ 3]+= 4374;
	configs[ 4]+= 4374;
	configs[16]+=    2;
	configs[17]+=    2;
	configs[26]+=  459;
	configs[28]+=   54;
	configs[29]+=  162;
	return 0x8080000000;
}

u64 FlipFunctionBBWhite1338(TConfig* configs) {
	configs[ 3]-= 4374;
	configs[ 4]-= 4374;
	configs[ 6]-= 4374;
	configs[16]-=    2;
	configs[17]-=    2;
	configs[26]-= 1917;
	configs[28]-=   54;
	configs[29]-=  162;
	configs[31]-= 1458;
	return 0x80008080000000;
}

u64 FlipFunctionBBBlack1338(TConfig* configs) {
	configs[ 3]+= 4374;
	configs[ 4]+= 4374;
	configs[ 6]+= 4374;
	configs[16]+=    2;
	configs[17]+=    2;
	configs[26]+= 1917;
	configs[28]+=   54;
	configs[29]+=  162;
	configs[31]+= 1458;
	return 0x80008080000000;
}

u64 FlipFunctionBBWhite1339(TConfig* configs) {
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
	return 0x8080800000;
}

u64 FlipFunctionBBBlack1339(TConfig* configs) {
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
	return 0x8080800000;
}

u64 FlipFunctionBBWhite1340(TConfig* configs) {
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
	return 0x80008080800000;
}

u64 FlipFunctionBBBlack1340(TConfig* configs) {
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
	return 0x80008080800000;
}

u64 FlipFunctionBBWhite1341(TConfig* configs) {
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
	return 0x8080808000;
}

u64 FlipFunctionBBBlack1341(TConfig* configs) {
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
	return 0x8080808000;
}

u64 FlipFunctionBBWhite1342(TConfig* configs) {
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
	return 0x80008080808000;
}

u64 FlipFunctionBBBlack1342(TConfig* configs) {
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
	return 0x80008080808000;
}

u64 FlipFunctionBBWhite1343(TConfig* configs) {
	configs[30]-=  243;
	return 0x0;
}

u64 FlipFunctionBBBlack1343(TConfig* configs) {
	configs[30]+=  243;
	return 0x0;
}

u64 FlipFunctionBBWhite1344(TConfig* configs) {
	configs[ 4]-= 1458;
	configs[16]-=    6;
	configs[25]-=  162;
	configs[30]-=  405;
	return 0x4000000000;
}

u64 FlipFunctionBBBlack1344(TConfig* configs) {
	configs[ 4]+= 1458;
	configs[16]+=    6;
	configs[25]+=  162;
	configs[30]+=  405;
	return 0x4000000000;
}

u64 FlipFunctionBBWhite1345(TConfig* configs) {
	configs[ 3]-=  486;
	configs[ 4]-= 1458;
	configs[14]-=   18;
	configs[16]-=    6;
	configs[24]-=   54;
	configs[25]-=  162;
	configs[30]-=  459;
	return 0x4020000000;
}

u64 FlipFunctionBBBlack1345(TConfig* configs) {
	configs[ 3]+=  486;
	configs[ 4]+= 1458;
	configs[14]+=   18;
	configs[16]+=    6;
	configs[24]+=   54;
	configs[25]+=  162;
	configs[30]+=  459;
	return 0x4020000000;
}

u64 FlipFunctionBBWhite1346(TConfig* configs) {
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
	return 0x4020100000;
}

u64 FlipFunctionBBBlack1346(TConfig* configs) {
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
	return 0x4020100000;
}

u64 FlipFunctionBBWhite1347(TConfig* configs) {
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
	return 0x4020100800;
}

u64 FlipFunctionBBBlack1347(TConfig* configs) {
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
	return 0x4020100800;
}

u64 FlipFunctionBBWhite1348(TConfig* configs) {
	configs[ 6]-=    1;
	return 0x1000000000000;
}

u64 FlipFunctionBBBlack1348(TConfig* configs) {
	configs[ 6]+=    1;
	return 0x1000000000000;
}

u64 FlipFunctionBBWhite1349(TConfig* configs) {
	configs[ 6]-=    7;
	configs[13]-= 1458;
	configs[20]-= 1458;
	configs[37]-=    6;
	return 0x3000000000000;
}

u64 FlipFunctionBBBlack1349(TConfig* configs) {
	configs[ 6]+=    7;
	configs[13]+= 1458;
	configs[20]+= 1458;
	configs[37]+=    6;
	return 0x3000000000000;
}

u64 FlipFunctionBBWhite1350(TConfig* configs) {
	configs[ 6]-=   25;
	configs[13]-= 1458;
	configs[14]-=  486;
	configs[20]-= 1458;
	configs[21]-= 1458;
	configs[36]-=   18;
	configs[37]-=    6;
	return 0x7000000000000;
}

u64 FlipFunctionBBBlack1350(TConfig* configs) {
	configs[ 6]+=   25;
	configs[13]+= 1458;
	configs[14]+=  486;
	configs[20]+= 1458;
	configs[21]+= 1458;
	configs[36]+=   18;
	configs[37]+=    6;
	return 0x7000000000000;
}

u64 FlipFunctionBBWhite1351(TConfig* configs) {
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
	return 0xf000000000000;
}

u64 FlipFunctionBBBlack1351(TConfig* configs) {
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
	return 0xf000000000000;
}

u64 FlipFunctionBBWhite1352(TConfig* configs) {
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
	return 0x1f000000000000;
}

u64 FlipFunctionBBBlack1352(TConfig* configs) {
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
	return 0x1f000000000000;
}

u64 FlipFunctionBBWhite1353(TConfig* configs) {
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
	return 0x3f000000000000;
}

u64 FlipFunctionBBBlack1353(TConfig* configs) {
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
	return 0x3f000000000000;
}

u64 FlipFunctionBBWhite1354(TConfig* configs) {
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
	return 0x7f000000000000;
}

u64 FlipFunctionBBBlack1354(TConfig* configs) {
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
	return 0x7f000000000000;
}

u64 FlipFunctionBBWhite1355(TConfig* configs) {
	configs[12]-=  729;
	return 0x0;
}

u64 FlipFunctionBBBlack1355(TConfig* configs) {
	configs[12]+=  729;
	return 0x0;
}

u64 FlipFunctionBBWhite1356(TConfig* configs) {
	configs[ 5]-=    6;
	configs[12]-= 1215;
	configs[20]-=  486;
	configs[36]-=    6;
	return 0x20000000000;
}

u64 FlipFunctionBBBlack1356(TConfig* configs) {
	configs[ 5]+=    6;
	configs[12]+= 1215;
	configs[20]+=  486;
	configs[36]+=    6;
	return 0x20000000000;
}

u64 FlipFunctionBBWhite1357(TConfig* configs) {
	configs[ 4]-=   18;
	configs[ 5]-=    6;
	configs[12]-= 1377;
	configs[20]-=  486;
	configs[21]-=  162;
	configs[34]-=   18;
	configs[36]-=    6;
	return 0x20400000000;
}

u64 FlipFunctionBBBlack1357(TConfig* configs) {
	configs[ 4]+=   18;
	configs[ 5]+=    6;
	configs[12]+= 1377;
	configs[20]+=  486;
	configs[21]+=  162;
	configs[34]+=   18;
	configs[36]+=    6;
	return 0x20400000000;
}

u64 FlipFunctionBBWhite1358(TConfig* configs) {
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
	return 0x20408000000;
}

u64 FlipFunctionBBBlack1358(TConfig* configs) {
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
	return 0x20408000000;
}

u64 FlipFunctionBBWhite1359(TConfig* configs) {
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
	return 0x20408100000;
}

u64 FlipFunctionBBBlack1359(TConfig* configs) {
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
	return 0x20408100000;
}

u64 FlipFunctionBBWhite1360(TConfig* configs) {
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
	return 0x20408102000;
}

u64 FlipFunctionBBBlack1360(TConfig* configs) {
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
	return 0x20408102000;
}

u64 FlipFunctionBBWhite1361(TConfig* configs) {
	configs[19]-=  729;
	return 0x0;
}

u64 FlipFunctionBBBlack1361(TConfig* configs) {
	configs[19]+=  729;
	return 0x0;
}

u64 FlipFunctionBBWhite1362(TConfig* configs) {
	configs[ 5]-=    2;
	configs[11]-=  486;
	configs[19]-= 1215;
	configs[37]-=    2;
	return 0x10000000000;
}

u64 FlipFunctionBBBlack1362(TConfig* configs) {
	configs[ 5]+=    2;
	configs[11]+=  486;
	configs[19]+= 1215;
	configs[37]+=    2;
	return 0x10000000000;
}

u64 FlipFunctionBBWhite1363(TConfig* configs) {
	configs[ 4]-=    2;
	configs[ 5]-=    2;
	configs[10]-=  162;
	configs[11]-=  486;
	configs[19]-= 1377;
	configs[36]-=    2;
	configs[37]-=    2;
	return 0x10100000000;
}

u64 FlipFunctionBBBlack1363(TConfig* configs) {
	configs[ 4]+=    2;
	configs[ 5]+=    2;
	configs[10]+=  162;
	configs[11]+=  486;
	configs[19]+= 1377;
	configs[36]+=    2;
	configs[37]+=    2;
	return 0x10100000000;
}

u64 FlipFunctionBBWhite1364(TConfig* configs) {
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
	return 0x10101000000;
}

u64 FlipFunctionBBBlack1364(TConfig* configs) {
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
	return 0x10101000000;
}

u64 FlipFunctionBBWhite1365(TConfig* configs) {
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
	return 0x10101010000;
}

u64 FlipFunctionBBBlack1365(TConfig* configs) {
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
	return 0x10101010000;
}

u64 FlipFunctionBBWhite1366(TConfig* configs) {
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
	return 0x10101010100;
}

u64 FlipFunctionBBBlack1366(TConfig* configs) {
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
	return 0x10101010100;
}

u64 FlipFunctionBBWhite1367(TConfig* configs) {
	configs[ 6]-=    3;
	return 0x2000000000000;
}

u64 FlipFunctionBBBlack1367(TConfig* configs) {
	configs[ 6]+=    3;
	return 0x2000000000000;
}

u64 FlipFunctionBBWhite1368(TConfig* configs) {
	configs[ 6]-=   21;
	configs[14]-=  486;
	configs[21]-= 1458;
	configs[36]-=   18;
	return 0x6000000000000;
}

u64 FlipFunctionBBBlack1368(TConfig* configs) {
	configs[ 6]+=   21;
	configs[14]+=  486;
	configs[21]+= 1458;
	configs[36]+=   18;
	return 0x6000000000000;
}

u64 FlipFunctionBBWhite1369(TConfig* configs) {
	configs[ 6]-=   75;
	configs[14]-=  486;
	configs[15]-=  162;
	configs[21]-= 1458;
	configs[22]-= 1458;
	configs[35]-=   54;
	configs[36]-=   18;
	return 0xe000000000000;
}

u64 FlipFunctionBBBlack1369(TConfig* configs) {
	configs[ 6]+=   75;
	configs[14]+=  486;
	configs[15]+=  162;
	configs[21]+= 1458;
	configs[22]+= 1458;
	configs[35]+=   54;
	configs[36]+=   18;
	return 0xe000000000000;
}

u64 FlipFunctionBBWhite1370(TConfig* configs) {
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
	return 0x1e000000000000;
}

u64 FlipFunctionBBBlack1370(TConfig* configs) {
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
	return 0x1e000000000000;
}

u64 FlipFunctionBBWhite1371(TConfig* configs) {
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
	return 0x3e000000000000;
}

u64 FlipFunctionBBBlack1371(TConfig* configs) {
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
	return 0x3e000000000000;
}

u64 FlipFunctionBBWhite1372(TConfig* configs) {
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
	return 0x7e000000000000;
}

u64 FlipFunctionBBBlack1372(TConfig* configs) {
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
	return 0x7e000000000000;
}

u64 FlipFunctionBBWhite1373(TConfig* configs) {
	configs[13]-=  729;
	return 0x0;
}

u64 FlipFunctionBBBlack1373(TConfig* configs) {
	configs[13]+=  729;
	return 0x0;
}

u64 FlipFunctionBBWhite1374(TConfig* configs) {
	configs[ 5]-=   18;
	configs[13]-= 1215;
	configs[21]-=  486;
	configs[35]-=   18;
	return 0x40000000000;
}

u64 FlipFunctionBBBlack1374(TConfig* configs) {
	configs[ 5]+=   18;
	configs[13]+= 1215;
	configs[21]+=  486;
	configs[35]+=   18;
	return 0x40000000000;
}

u64 FlipFunctionBBWhite1375(TConfig* configs) {
	configs[ 4]-=   54;
	configs[ 5]-=   18;
	configs[13]-= 1377;
	configs[21]-=  486;
	configs[22]-=  162;
	configs[33]-=   54;
	configs[35]-=   18;
	return 0x40800000000;
}

u64 FlipFunctionBBBlack1375(TConfig* configs) {
	configs[ 4]+=   54;
	configs[ 5]+=   18;
	configs[13]+= 1377;
	configs[21]+=  486;
	configs[22]+=  162;
	configs[33]+=   54;
	configs[35]+=   18;
	return 0x40800000000;
}

u64 FlipFunctionBBWhite1376(TConfig* configs) {
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
	return 0x40810000000;
}

u64 FlipFunctionBBBlack1376(TConfig* configs) {
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
	return 0x40810000000;
}

u64 FlipFunctionBBWhite1377(TConfig* configs) {
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
	return 0x40810200000;
}

u64 FlipFunctionBBBlack1377(TConfig* configs) {
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
	return 0x40810200000;
}

u64 FlipFunctionBBWhite1378(TConfig* configs) {
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
	return 0x40810204000;
}

u64 FlipFunctionBBBlack1378(TConfig* configs) {
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
	return 0x40810204000;
}

u64 FlipFunctionBBWhite1379(TConfig* configs) {
	configs[20]-=  729;
	return 0x0;
}

u64 FlipFunctionBBBlack1379(TConfig* configs) {
	configs[20]+=  729;
	return 0x0;
}

u64 FlipFunctionBBWhite1380(TConfig* configs) {
	configs[ 5]-=    6;
	configs[12]-=  486;
	configs[20]-= 1215;
	configs[36]-=    6;
	return 0x20000000000;
}

u64 FlipFunctionBBBlack1380(TConfig* configs) {
	configs[ 5]+=    6;
	configs[12]+=  486;
	configs[20]+= 1215;
	configs[36]+=    6;
	return 0x20000000000;
}

u64 FlipFunctionBBWhite1381(TConfig* configs) {
	configs[ 4]-=    6;
	configs[ 5]-=    6;
	configs[11]-=  162;
	configs[12]-=  486;
	configs[20]-= 1377;
	configs[35]-=    6;
	configs[36]-=    6;
	return 0x20200000000;
}

u64 FlipFunctionBBBlack1381(TConfig* configs) {
	configs[ 4]+=    6;
	configs[ 5]+=    6;
	configs[11]+=  162;
	configs[12]+=  486;
	configs[20]+= 1377;
	configs[35]+=    6;
	configs[36]+=    6;
	return 0x20200000000;
}

u64 FlipFunctionBBWhite1382(TConfig* configs) {
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
	return 0x20202000000;
}

u64 FlipFunctionBBBlack1382(TConfig* configs) {
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
	return 0x20202000000;
}

u64 FlipFunctionBBWhite1383(TConfig* configs) {
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
	return 0x20202020000;
}

u64 FlipFunctionBBBlack1383(TConfig* configs) {
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
	return 0x20202020000;
}

u64 FlipFunctionBBWhite1384(TConfig* configs) {
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
	return 0x20202020200;
}

u64 FlipFunctionBBBlack1384(TConfig* configs) {
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
	return 0x20202020200;
}

u64 FlipFunctionBBWhite1385(TConfig* configs) {
	configs[37]-=    3;
	return 0x0;
}

u64 FlipFunctionBBBlack1385(TConfig* configs) {
	configs[37]+=    3;
	return 0x0;
}

u64 FlipFunctionBBWhite1386(TConfig* configs) {
	configs[ 6]-=    9;
	return 0x4000000000000;
}

u64 FlipFunctionBBBlack1386(TConfig* configs) {
	configs[ 6]+=    9;
	return 0x4000000000000;
}

u64 FlipFunctionBBWhite1387(TConfig* configs) {
	configs[ 6]-=   63;
	configs[15]-=  162;
	configs[22]-= 1458;
	configs[35]-=   54;
	return 0xc000000000000;
}

u64 FlipFunctionBBBlack1387(TConfig* configs) {
	configs[ 6]+=   63;
	configs[15]+=  162;
	configs[22]+= 1458;
	configs[35]+=   54;
	return 0xc000000000000;
}

u64 FlipFunctionBBWhite1388(TConfig* configs) {
	configs[ 6]-=  225;
	configs[15]-=  162;
	configs[16]-=   54;
	configs[22]-= 1458;
	configs[23]-= 1458;
	configs[34]-=  162;
	configs[35]-=   54;
	return 0x1c000000000000;
}

u64 FlipFunctionBBBlack1388(TConfig* configs) {
	configs[ 6]+=  225;
	configs[15]+=  162;
	configs[16]+=   54;
	configs[22]+= 1458;
	configs[23]+= 1458;
	configs[34]+=  162;
	configs[35]+=   54;
	return 0x1c000000000000;
}

u64 FlipFunctionBBWhite1389(TConfig* configs) {
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
	return 0x3c000000000000;
}

u64 FlipFunctionBBBlack1389(TConfig* configs) {
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
	return 0x3c000000000000;
}

u64 FlipFunctionBBWhite1390(TConfig* configs) {
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
	return 0x7c000000000000;
}

u64 FlipFunctionBBBlack1390(TConfig* configs) {
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
	return 0x7c000000000000;
}

u64 FlipFunctionBBWhite1391(TConfig* configs) {
	configs[ 6]-=   15;
	configs[13]-= 1458;
	configs[20]-= 1458;
	configs[37]-=    6;
	return 0x6000000000000;
}

u64 FlipFunctionBBBlack1391(TConfig* configs) {
	configs[ 6]+=   15;
	configs[13]+= 1458;
	configs[20]+= 1458;
	configs[37]+=    6;
	return 0x6000000000000;
}

u64 FlipFunctionBBWhite1392(TConfig* configs) {
	configs[ 6]-=   69;
	configs[13]-= 1458;
	configs[15]-=  162;
	configs[20]-= 1458;
	configs[22]-= 1458;
	configs[35]-=   54;
	configs[37]-=    6;
	return 0xe000000000000;
}

u64 FlipFunctionBBBlack1392(TConfig* configs) {
	configs[ 6]+=   69;
	configs[13]+= 1458;
	configs[15]+=  162;
	configs[20]+= 1458;
	configs[22]+= 1458;
	configs[35]+=   54;
	configs[37]+=    6;
	return 0xe000000000000;
}

u64 FlipFunctionBBWhite1393(TConfig* configs) {
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
	return 0x1e000000000000;
}

u64 FlipFunctionBBBlack1393(TConfig* configs) {
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
	return 0x1e000000000000;
}

u64 FlipFunctionBBWhite1394(TConfig* configs) {
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
	return 0x3e000000000000;
}

u64 FlipFunctionBBBlack1394(TConfig* configs) {
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
	return 0x3e000000000000;
}

u64 FlipFunctionBBWhite1395(TConfig* configs) {
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
	return 0x7e000000000000;
}

u64 FlipFunctionBBBlack1395(TConfig* configs) {
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
	return 0x7e000000000000;
}

u64 FlipFunctionBBWhite1396(TConfig* configs) {
	configs[14]-=  243;
	return 0x0;
}

u64 FlipFunctionBBBlack1396(TConfig* configs) {
	configs[14]+=  243;
	return 0x0;
}

u64 FlipFunctionBBWhite1397(TConfig* configs) {
	configs[ 5]-=   54;
	configs[14]-=  405;
	configs[22]-=  486;
	configs[34]-=   54;
	return 0x80000000000;
}

u64 FlipFunctionBBBlack1397(TConfig* configs) {
	configs[ 5]+=   54;
	configs[14]+=  405;
	configs[22]+=  486;
	configs[34]+=   54;
	return 0x80000000000;
}

u64 FlipFunctionBBWhite1398(TConfig* configs) {
	configs[ 4]-=  162;
	configs[ 5]-=   54;
	configs[14]-=  459;
	configs[22]-=  486;
	configs[23]-=  162;
	configs[32]-=  162;
	configs[34]-=   54;
	return 0x81000000000;
}

u64 FlipFunctionBBBlack1398(TConfig* configs) {
	configs[ 4]+=  162;
	configs[ 5]+=   54;
	configs[14]+=  459;
	configs[22]+=  486;
	configs[23]+=  162;
	configs[32]+=  162;
	configs[34]+=   54;
	return 0x81000000000;
}

u64 FlipFunctionBBWhite1399(TConfig* configs) {
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
	return 0x81020000000;
}

u64 FlipFunctionBBBlack1399(TConfig* configs) {
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
	return 0x81020000000;
}

u64 FlipFunctionBBWhite1400(TConfig* configs) {
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
	return 0x81020400000;
}

u64 FlipFunctionBBBlack1400(TConfig* configs) {
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
	return 0x81020400000;
}

u64 FlipFunctionBBWhite1401(TConfig* configs) {
	configs[21]-=  729;
	return 0x0;
}

u64 FlipFunctionBBBlack1401(TConfig* configs) {
	configs[21]+=  729;
	return 0x0;
}

u64 FlipFunctionBBWhite1402(TConfig* configs) {
	configs[ 5]-=   18;
	configs[13]-=  486;
	configs[21]-= 1215;
	configs[35]-=   18;
	return 0x40000000000;
}

u64 FlipFunctionBBBlack1402(TConfig* configs) {
	configs[ 5]+=   18;
	configs[13]+=  486;
	configs[21]+= 1215;
	configs[35]+=   18;
	return 0x40000000000;
}

u64 FlipFunctionBBWhite1403(TConfig* configs) {
	configs[ 4]-=   18;
	configs[ 5]-=   18;
	configs[12]-=  162;
	configs[13]-=  486;
	configs[21]-= 1377;
	configs[34]-=   18;
	configs[35]-=   18;
	return 0x40400000000;
}

u64 FlipFunctionBBBlack1403(TConfig* configs) {
	configs[ 4]+=   18;
	configs[ 5]+=   18;
	configs[12]+=  162;
	configs[13]+=  486;
	configs[21]+= 1377;
	configs[34]+=   18;
	configs[35]+=   18;
	return 0x40400000000;
}

u64 FlipFunctionBBWhite1404(TConfig* configs) {
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
	return 0x40404000000;
}

u64 FlipFunctionBBBlack1404(TConfig* configs) {
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
	return 0x40404000000;
}

u64 FlipFunctionBBWhite1405(TConfig* configs) {
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
	return 0x40404040000;
}

u64 FlipFunctionBBBlack1405(TConfig* configs) {
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
	return 0x40404040000;
}

u64 FlipFunctionBBWhite1406(TConfig* configs) {
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
	return 0x40404040400;
}

u64 FlipFunctionBBBlack1406(TConfig* configs) {
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
	return 0x40404040400;
}

u64 FlipFunctionBBWhite1407(TConfig* configs) {
	configs[36]-=    9;
	return 0x0;
}

u64 FlipFunctionBBBlack1407(TConfig* configs) {
	configs[36]+=    9;
	return 0x0;
}

u64 FlipFunctionBBWhite1408(TConfig* configs) {
	configs[ 5]-=    6;
	configs[12]-=  486;
	configs[20]-=  486;
	configs[36]-=   15;
	return 0x20000000000;
}

u64 FlipFunctionBBBlack1408(TConfig* configs) {
	configs[ 5]+=    6;
	configs[12]+=  486;
	configs[20]+=  486;
	configs[36]+=   15;
	return 0x20000000000;
}

u64 FlipFunctionBBWhite1409(TConfig* configs) {
	configs[ 6]-=   27;
	return 0x8000000000000;
}

u64 FlipFunctionBBBlack1409(TConfig* configs) {
	configs[ 6]+=   27;
	return 0x8000000000000;
}

u64 FlipFunctionBBWhite1410(TConfig* configs) {
	configs[ 6]-=  189;
	configs[16]-=   54;
	configs[23]-= 1458;
	configs[34]-=  162;
	return 0x18000000000000;
}

u64 FlipFunctionBBBlack1410(TConfig* configs) {
	configs[ 6]+=  189;
	configs[16]+=   54;
	configs[23]+= 1458;
	configs[34]+=  162;
	return 0x18000000000000;
}

u64 FlipFunctionBBWhite1411(TConfig* configs) {
	configs[ 6]-=  675;
	configs[16]-=   54;
	configs[17]-=   18;
	configs[23]-= 1458;
	configs[24]-= 1458;
	configs[33]-=  486;
	configs[34]-=  162;
	return 0x38000000000000;
}

u64 FlipFunctionBBBlack1411(TConfig* configs) {
	configs[ 6]+=  675;
	configs[16]+=   54;
	configs[17]+=   18;
	configs[23]+= 1458;
	configs[24]+= 1458;
	configs[33]+=  486;
	configs[34]+=  162;
	return 0x38000000000000;
}

u64 FlipFunctionBBWhite1412(TConfig* configs) {
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
	return 0x78000000000000;
}

u64 FlipFunctionBBBlack1412(TConfig* configs) {
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
	return 0x78000000000000;
}

u64 FlipFunctionBBWhite1413(TConfig* configs) {
	configs[ 6]-=   45;
	configs[14]-=  486;
	configs[21]-= 1458;
	configs[36]-=   18;
	return 0xc000000000000;
}

u64 FlipFunctionBBBlack1413(TConfig* configs) {
	configs[ 6]+=   45;
	configs[14]+=  486;
	configs[21]+= 1458;
	configs[36]+=   18;
	return 0xc000000000000;
}

u64 FlipFunctionBBWhite1414(TConfig* configs) {
	configs[ 6]-=  207;
	configs[14]-=  486;
	configs[16]-=   54;
	configs[21]-= 1458;
	configs[23]-= 1458;
	configs[34]-=  162;
	configs[36]-=   18;
	return 0x1c000000000000;
}

u64 FlipFunctionBBBlack1414(TConfig* configs) {
	configs[ 6]+=  207;
	configs[14]+=  486;
	configs[16]+=   54;
	configs[21]+= 1458;
	configs[23]+= 1458;
	configs[34]+=  162;
	configs[36]+=   18;
	return 0x1c000000000000;
}

u64 FlipFunctionBBWhite1415(TConfig* configs) {
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
	return 0x3c000000000000;
}

u64 FlipFunctionBBBlack1415(TConfig* configs) {
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
	return 0x3c000000000000;
}

u64 FlipFunctionBBWhite1416(TConfig* configs) {
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
	return 0x7c000000000000;
}

u64 FlipFunctionBBBlack1416(TConfig* configs) {
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
	return 0x7c000000000000;
}

u64 FlipFunctionBBWhite1417(TConfig* configs) {
	configs[ 6]-=   51;
	configs[13]-= 1458;
	configs[14]-=  486;
	configs[20]-= 1458;
	configs[21]-= 1458;
	configs[36]-=   18;
	configs[37]-=    6;
	return 0xe000000000000;
}

u64 FlipFunctionBBBlack1417(TConfig* configs) {
	configs[ 6]+=   51;
	configs[13]+= 1458;
	configs[14]+=  486;
	configs[20]+= 1458;
	configs[21]+= 1458;
	configs[36]+=   18;
	configs[37]+=    6;
	return 0xe000000000000;
}

u64 FlipFunctionBBWhite1418(TConfig* configs) {
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
	return 0x1e000000000000;
}

u64 FlipFunctionBBBlack1418(TConfig* configs) {
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
	return 0x1e000000000000;
}

u64 FlipFunctionBBWhite1419(TConfig* configs) {
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
	return 0x3e000000000000;
}

u64 FlipFunctionBBBlack1419(TConfig* configs) {
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
	return 0x3e000000000000;
}

u64 FlipFunctionBBWhite1420(TConfig* configs) {
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
	return 0x7e000000000000;
}

u64 FlipFunctionBBBlack1420(TConfig* configs) {
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
	return 0x7e000000000000;
}

u64 FlipFunctionBBWhite1421(TConfig* configs) {
	configs[15]-=   81;
	return 0x0;
}

u64 FlipFunctionBBBlack1421(TConfig* configs) {
	configs[15]+=   81;
	return 0x0;
}

u64 FlipFunctionBBWhite1422(TConfig* configs) {
	configs[ 5]-=  162;
	configs[15]-=  135;
	configs[23]-=  486;
	configs[33]-=  162;
	return 0x100000000000;
}

u64 FlipFunctionBBBlack1422(TConfig* configs) {
	configs[ 5]+=  162;
	configs[15]+=  135;
	configs[23]+=  486;
	configs[33]+=  162;
	return 0x100000000000;
}

u64 FlipFunctionBBWhite1423(TConfig* configs) {
	configs[ 4]-=  486;
	configs[ 5]-=  162;
	configs[15]-=  153;
	configs[23]-=  486;
	configs[24]-=  162;
	configs[31]-=  162;
	configs[33]-=  162;
	return 0x102000000000;
}

u64 FlipFunctionBBBlack1423(TConfig* configs) {
	configs[ 4]+=  486;
	configs[ 5]+=  162;
	configs[15]+=  153;
	configs[23]+=  486;
	configs[24]+=  162;
	configs[31]+=  162;
	configs[33]+=  162;
	return 0x102000000000;
}

u64 FlipFunctionBBWhite1424(TConfig* configs) {
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
	return 0x102040000000;
}

u64 FlipFunctionBBBlack1424(TConfig* configs) {
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
	return 0x102040000000;
}

u64 FlipFunctionBBWhite1425(TConfig* configs) {
	configs[22]-=  729;
	return 0x0;
}

u64 FlipFunctionBBBlack1425(TConfig* configs) {
	configs[22]+=  729;
	return 0x0;
}

u64 FlipFunctionBBWhite1426(TConfig* configs) {
	configs[ 5]-=   54;
	configs[14]-=  162;
	configs[22]-= 1215;
	configs[34]-=   54;
	return 0x80000000000;
}

u64 FlipFunctionBBBlack1426(TConfig* configs) {
	configs[ 5]+=   54;
	configs[14]+=  162;
	configs[22]+= 1215;
	configs[34]+=   54;
	return 0x80000000000;
}

u64 FlipFunctionBBWhite1427(TConfig* configs) {
	configs[ 4]-=   54;
	configs[ 5]-=   54;
	configs[13]-=  162;
	configs[14]-=  162;
	configs[22]-= 1377;
	configs[33]-=   54;
	configs[34]-=   54;
	return 0x80800000000;
}

u64 FlipFunctionBBBlack1427(TConfig* configs) {
	configs[ 4]+=   54;
	configs[ 5]+=   54;
	configs[13]+=  162;
	configs[14]+=  162;
	configs[22]+= 1377;
	configs[33]+=   54;
	configs[34]+=   54;
	return 0x80800000000;
}

u64 FlipFunctionBBWhite1428(TConfig* configs) {
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
	return 0x80808000000;
}

u64 FlipFunctionBBBlack1428(TConfig* configs) {
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
	return 0x80808000000;
}

u64 FlipFunctionBBWhite1429(TConfig* configs) {
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
	return 0x80808080000;
}

u64 FlipFunctionBBBlack1429(TConfig* configs) {
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
	return 0x80808080000;
}

u64 FlipFunctionBBWhite1430(TConfig* configs) {
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
	return 0x80808080800;
}

u64 FlipFunctionBBBlack1430(TConfig* configs) {
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
	return 0x80808080800;
}

u64 FlipFunctionBBWhite1431(TConfig* configs) {
	configs[35]-=   27;
	return 0x0;
}

u64 FlipFunctionBBBlack1431(TConfig* configs) {
	configs[35]+=   27;
	return 0x0;
}

u64 FlipFunctionBBWhite1432(TConfig* configs) {
	configs[ 5]-=   18;
	configs[13]-=  486;
	configs[21]-=  486;
	configs[35]-=   45;
	return 0x40000000000;
}

u64 FlipFunctionBBBlack1432(TConfig* configs) {
	configs[ 5]+=   18;
	configs[13]+=  486;
	configs[21]+=  486;
	configs[35]+=   45;
	return 0x40000000000;
}

u64 FlipFunctionBBWhite1433(TConfig* configs) {
	configs[ 4]-=    6;
	configs[ 5]-=   18;
	configs[11]-=  162;
	configs[13]-=  486;
	configs[20]-=  162;
	configs[21]-=  486;
	configs[35]-=   51;
	return 0x40200000000;
}

u64 FlipFunctionBBBlack1433(TConfig* configs) {
	configs[ 4]+=    6;
	configs[ 5]+=   18;
	configs[11]+=  162;
	configs[13]+=  486;
	configs[20]+=  162;
	configs[21]+=  486;
	configs[35]+=   51;
	return 0x40200000000;
}

u64 FlipFunctionBBWhite1434(TConfig* configs) {
	configs[ 6]-=   81;
	return 0x10000000000000;
}

u64 FlipFunctionBBBlack1434(TConfig* configs) {
	configs[ 6]+=   81;
	return 0x10000000000000;
}

u64 FlipFunctionBBWhite1435(TConfig* configs) {
	configs[ 6]-=  567;
	configs[17]-=   18;
	configs[24]-= 1458;
	configs[33]-=  486;
	return 0x30000000000000;
}

u64 FlipFunctionBBBlack1435(TConfig* configs) {
	configs[ 6]+=  567;
	configs[17]+=   18;
	configs[24]+= 1458;
	configs[33]+=  486;
	return 0x30000000000000;
}

u64 FlipFunctionBBWhite1436(TConfig* configs) {
	configs[ 6]-= 2025;
	configs[17]-=   18;
	configs[18]-=    6;
	configs[24]-= 1458;
	configs[25]-= 1458;
	configs[32]-= 1458;
	configs[33]-=  486;
	return 0x70000000000000;
}

u64 FlipFunctionBBBlack1436(TConfig* configs) {
	configs[ 6]+= 2025;
	configs[17]+=   18;
	configs[18]+=    6;
	configs[24]+= 1458;
	configs[25]+= 1458;
	configs[32]+= 1458;
	configs[33]+=  486;
	return 0x70000000000000;
}

u64 FlipFunctionBBWhite1437(TConfig* configs) {
	configs[ 6]-=  135;
	configs[15]-=  162;
	configs[22]-= 1458;
	configs[35]-=   54;
	return 0x18000000000000;
}

u64 FlipFunctionBBBlack1437(TConfig* configs) {
	configs[ 6]+=  135;
	configs[15]+=  162;
	configs[22]+= 1458;
	configs[35]+=   54;
	return 0x18000000000000;
}

u64 FlipFunctionBBWhite1438(TConfig* configs) {
	configs[ 6]-=  621;
	configs[15]-=  162;
	configs[17]-=   18;
	configs[22]-= 1458;
	configs[24]-= 1458;
	configs[33]-=  486;
	configs[35]-=   54;
	return 0x38000000000000;
}

u64 FlipFunctionBBBlack1438(TConfig* configs) {
	configs[ 6]+=  621;
	configs[15]+=  162;
	configs[17]+=   18;
	configs[22]+= 1458;
	configs[24]+= 1458;
	configs[33]+=  486;
	configs[35]+=   54;
	return 0x38000000000000;
}

u64 FlipFunctionBBWhite1439(TConfig* configs) {
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
	return 0x78000000000000;
}

u64 FlipFunctionBBBlack1439(TConfig* configs) {
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
	return 0x78000000000000;
}

u64 FlipFunctionBBWhite1440(TConfig* configs) {
	configs[ 6]-=  153;
	configs[14]-=  486;
	configs[15]-=  162;
	configs[21]-= 1458;
	configs[22]-= 1458;
	configs[35]-=   54;
	configs[36]-=   18;
	return 0x1c000000000000;
}

u64 FlipFunctionBBBlack1440(TConfig* configs) {
	configs[ 6]+=  153;
	configs[14]+=  486;
	configs[15]+=  162;
	configs[21]+= 1458;
	configs[22]+= 1458;
	configs[35]+=   54;
	configs[36]+=   18;
	return 0x1c000000000000;
}

u64 FlipFunctionBBWhite1441(TConfig* configs) {
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
	return 0x3c000000000000;
}

u64 FlipFunctionBBBlack1441(TConfig* configs) {
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
	return 0x3c000000000000;
}

u64 FlipFunctionBBWhite1442(TConfig* configs) {
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
	return 0x7c000000000000;
}

u64 FlipFunctionBBBlack1442(TConfig* configs) {
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
	return 0x7c000000000000;
}

u64 FlipFunctionBBWhite1443(TConfig* configs) {
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
	return 0x1e000000000000;
}

u64 FlipFunctionBBBlack1443(TConfig* configs) {
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
	return 0x1e000000000000;
}

u64 FlipFunctionBBWhite1444(TConfig* configs) {
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
	return 0x3e000000000000;
}

u64 FlipFunctionBBBlack1444(TConfig* configs) {
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
	return 0x3e000000000000;
}

u64 FlipFunctionBBWhite1445(TConfig* configs) {
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
	return 0x7e000000000000;
}

u64 FlipFunctionBBBlack1445(TConfig* configs) {
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
	return 0x7e000000000000;
}

u64 FlipFunctionBBWhite1446(TConfig* configs) {
	configs[16]-=   27;
	return 0x0;
}

u64 FlipFunctionBBBlack1446(TConfig* configs) {
	configs[16]+=   27;
	return 0x0;
}

u64 FlipFunctionBBWhite1447(TConfig* configs) {
	configs[ 5]-=  486;
	configs[16]-=   45;
	configs[24]-=  486;
	configs[32]-=  486;
	return 0x200000000000;
}

u64 FlipFunctionBBBlack1447(TConfig* configs) {
	configs[ 5]+=  486;
	configs[16]+=   45;
	configs[24]+=  486;
	configs[32]+=  486;
	return 0x200000000000;
}

u64 FlipFunctionBBWhite1448(TConfig* configs) {
	configs[ 4]-= 1458;
	configs[ 5]-=  486;
	configs[16]-=   51;
	configs[24]-=  486;
	configs[25]-=  162;
	configs[30]-=  162;
	configs[32]-=  486;
	return 0x204000000000;
}

u64 FlipFunctionBBBlack1448(TConfig* configs) {
	configs[ 4]+= 1458;
	configs[ 5]+=  486;
	configs[16]+=   51;
	configs[24]+=  486;
	configs[25]+=  162;
	configs[30]+=  162;
	configs[32]+=  486;
	return 0x204000000000;
}

u64 FlipFunctionBBWhite1449(TConfig* configs) {
	configs[23]-=  729;
	return 0x0;
}

u64 FlipFunctionBBBlack1449(TConfig* configs) {
	configs[23]+=  729;
	return 0x0;
}

u64 FlipFunctionBBWhite1450(TConfig* configs) {
	configs[ 5]-=  162;
	configs[15]-=   54;
	configs[23]-= 1215;
	configs[33]-=  162;
	return 0x100000000000;
}

u64 FlipFunctionBBBlack1450(TConfig* configs) {
	configs[ 5]+=  162;
	configs[15]+=   54;
	configs[23]+= 1215;
	configs[33]+=  162;
	return 0x100000000000;
}

u64 FlipFunctionBBWhite1451(TConfig* configs) {
	configs[ 4]-=  162;
	configs[ 5]-=  162;
	configs[14]-=   54;
	configs[15]-=   54;
	configs[23]-= 1377;
	configs[32]-=  162;
	configs[33]-=  162;
	return 0x101000000000;
}

u64 FlipFunctionBBBlack1451(TConfig* configs) {
	configs[ 4]+=  162;
	configs[ 5]+=  162;
	configs[14]+=   54;
	configs[15]+=   54;
	configs[23]+= 1377;
	configs[32]+=  162;
	configs[33]+=  162;
	return 0x101000000000;
}

u64 FlipFunctionBBWhite1452(TConfig* configs) {
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
	return 0x101010000000;
}

u64 FlipFunctionBBBlack1452(TConfig* configs) {
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
	return 0x101010000000;
}

u64 FlipFunctionBBWhite1453(TConfig* configs) {
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
	return 0x101010100000;
}

u64 FlipFunctionBBBlack1453(TConfig* configs) {
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
	return 0x101010100000;
}

u64 FlipFunctionBBWhite1454(TConfig* configs) {
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
	return 0x101010101000;
}

u64 FlipFunctionBBBlack1454(TConfig* configs) {
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
	return 0x101010101000;
}

u64 FlipFunctionBBWhite1455(TConfig* configs) {
	configs[34]-=   81;
	return 0x0;
}

u64 FlipFunctionBBBlack1455(TConfig* configs) {
	configs[34]+=   81;
	return 0x0;
}

u64 FlipFunctionBBWhite1456(TConfig* configs) {
	configs[ 5]-=   54;
	configs[14]-=  162;
	configs[22]-=  486;
	configs[34]-=  135;
	return 0x80000000000;
}

u64 FlipFunctionBBBlack1456(TConfig* configs) {
	configs[ 5]+=   54;
	configs[14]+=  162;
	configs[22]+=  486;
	configs[34]+=  135;
	return 0x80000000000;
}

u64 FlipFunctionBBWhite1457(TConfig* configs) {
	configs[ 4]-=   18;
	configs[ 5]-=   54;
	configs[12]-=  162;
	configs[14]-=  162;
	configs[21]-=  162;
	configs[22]-=  486;
	configs[34]-=  153;
	return 0x80400000000;
}

u64 FlipFunctionBBBlack1457(TConfig* configs) {
	configs[ 4]+=   18;
	configs[ 5]+=   54;
	configs[12]+=  162;
	configs[14]+=  162;
	configs[21]+=  162;
	configs[22]+=  486;
	configs[34]+=  153;
	return 0x80400000000;
}

u64 FlipFunctionBBWhite1458(TConfig* configs) {
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
	return 0x80402000000;
}

u64 FlipFunctionBBBlack1458(TConfig* configs) {
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
	return 0x80402000000;
}

u64 FlipFunctionBBWhite1459(TConfig* configs) {
	configs[ 6]-=  243;
	return 0x20000000000000;
}

u64 FlipFunctionBBBlack1459(TConfig* configs) {
	configs[ 6]+=  243;
	return 0x20000000000000;
}

u64 FlipFunctionBBWhite1460(TConfig* configs) {
	configs[ 6]-= 1701;
	configs[18]-=    6;
	configs[25]-= 1458;
	configs[32]-= 1458;
	return 0x60000000000000;
}

u64 FlipFunctionBBBlack1460(TConfig* configs) {
	configs[ 6]+= 1701;
	configs[18]+=    6;
	configs[25]+= 1458;
	configs[32]+= 1458;
	return 0x60000000000000;
}

u64 FlipFunctionBBWhite1461(TConfig* configs) {
	configs[ 6]-=  405;
	configs[16]-=   54;
	configs[23]-= 1458;
	configs[34]-=  162;
	return 0x30000000000000;
}

u64 FlipFunctionBBBlack1461(TConfig* configs) {
	configs[ 6]+=  405;
	configs[16]+=   54;
	configs[23]+= 1458;
	configs[34]+=  162;
	return 0x30000000000000;
}

u64 FlipFunctionBBWhite1462(TConfig* configs) {
	configs[ 6]-= 1863;
	configs[16]-=   54;
	configs[18]-=    6;
	configs[23]-= 1458;
	configs[25]-= 1458;
	configs[32]-= 1458;
	configs[34]-=  162;
	return 0x70000000000000;
}

u64 FlipFunctionBBBlack1462(TConfig* configs) {
	configs[ 6]+= 1863;
	configs[16]+=   54;
	configs[18]+=    6;
	configs[23]+= 1458;
	configs[25]+= 1458;
	configs[32]+= 1458;
	configs[34]+=  162;
	return 0x70000000000000;
}

u64 FlipFunctionBBWhite1463(TConfig* configs) {
	configs[ 6]-=  459;
	configs[15]-=  162;
	configs[16]-=   54;
	configs[22]-= 1458;
	configs[23]-= 1458;
	configs[34]-=  162;
	configs[35]-=   54;
	return 0x38000000000000;
}

u64 FlipFunctionBBBlack1463(TConfig* configs) {
	configs[ 6]+=  459;
	configs[15]+=  162;
	configs[16]+=   54;
	configs[22]+= 1458;
	configs[23]+= 1458;
	configs[34]+=  162;
	configs[35]+=   54;
	return 0x38000000000000;
}

u64 FlipFunctionBBWhite1464(TConfig* configs) {
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
	return 0x78000000000000;
}

u64 FlipFunctionBBBlack1464(TConfig* configs) {
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
	return 0x78000000000000;
}

u64 FlipFunctionBBWhite1465(TConfig* configs) {
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
	return 0x3c000000000000;
}

u64 FlipFunctionBBBlack1465(TConfig* configs) {
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
	return 0x3c000000000000;
}

u64 FlipFunctionBBWhite1466(TConfig* configs) {
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
	return 0x7c000000000000;
}

u64 FlipFunctionBBBlack1466(TConfig* configs) {
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
	return 0x7c000000000000;
}

u64 FlipFunctionBBWhite1467(TConfig* configs) {
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
	return 0x3e000000000000;
}

u64 FlipFunctionBBBlack1467(TConfig* configs) {
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
	return 0x3e000000000000;
}

u64 FlipFunctionBBWhite1468(TConfig* configs) {
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
	return 0x7e000000000000;
}

u64 FlipFunctionBBBlack1468(TConfig* configs) {
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
	return 0x7e000000000000;
}

u64 FlipFunctionBBWhite1469(TConfig* configs) {
	configs[17]-=    9;
	return 0x0;
}

u64 FlipFunctionBBBlack1469(TConfig* configs) {
	configs[17]+=    9;
	return 0x0;
}

u64 FlipFunctionBBWhite1470(TConfig* configs) {
	configs[ 5]-= 1458;
	configs[17]-=   15;
	configs[25]-=  486;
	configs[31]-=  486;
	return 0x400000000000;
}

u64 FlipFunctionBBBlack1470(TConfig* configs) {
	configs[ 5]+= 1458;
	configs[17]+=   15;
	configs[25]+=  486;
	configs[31]+=  486;
	return 0x400000000000;
}

u64 FlipFunctionBBWhite1471(TConfig* configs) {
	configs[24]-=  729;
	return 0x0;
}

u64 FlipFunctionBBBlack1471(TConfig* configs) {
	configs[24]+=  729;
	return 0x0;
}

u64 FlipFunctionBBWhite1472(TConfig* configs) {
	configs[ 5]-=  486;
	configs[16]-=   18;
	configs[24]-= 1215;
	configs[32]-=  486;
	return 0x200000000000;
}

u64 FlipFunctionBBBlack1472(TConfig* configs) {
	configs[ 5]+=  486;
	configs[16]+=   18;
	configs[24]+= 1215;
	configs[32]+=  486;
	return 0x200000000000;
}

u64 FlipFunctionBBWhite1473(TConfig* configs) {
	configs[ 4]-=  486;
	configs[ 5]-=  486;
	configs[15]-=   18;
	configs[16]-=   18;
	configs[24]-= 1377;
	configs[31]-=  162;
	configs[32]-=  486;
	return 0x202000000000;
}

u64 FlipFunctionBBBlack1473(TConfig* configs) {
	configs[ 4]+=  486;
	configs[ 5]+=  486;
	configs[15]+=   18;
	configs[16]+=   18;
	configs[24]+= 1377;
	configs[31]+=  162;
	configs[32]+=  486;
	return 0x202000000000;
}

u64 FlipFunctionBBWhite1474(TConfig* configs) {
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
	return 0x202020000000;
}

u64 FlipFunctionBBBlack1474(TConfig* configs) {
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
	return 0x202020000000;
}

u64 FlipFunctionBBWhite1475(TConfig* configs) {
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
	return 0x202020200000;
}

u64 FlipFunctionBBBlack1475(TConfig* configs) {
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
	return 0x202020200000;
}

u64 FlipFunctionBBWhite1476(TConfig* configs) {
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
	return 0x202020202000;
}

u64 FlipFunctionBBBlack1476(TConfig* configs) {
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
	return 0x202020202000;
}

u64 FlipFunctionBBWhite1477(TConfig* configs) {
	configs[33]-=  243;
	return 0x0;
}

u64 FlipFunctionBBBlack1477(TConfig* configs) {
	configs[33]+=  243;
	return 0x0;
}

u64 FlipFunctionBBWhite1478(TConfig* configs) {
	configs[ 5]-=  162;
	configs[15]-=   54;
	configs[23]-=  486;
	configs[33]-=  405;
	return 0x100000000000;
}

u64 FlipFunctionBBBlack1478(TConfig* configs) {
	configs[ 5]+=  162;
	configs[15]+=   54;
	configs[23]+=  486;
	configs[33]+=  405;
	return 0x100000000000;
}

u64 FlipFunctionBBWhite1479(TConfig* configs) {
	configs[ 4]-=   54;
	configs[ 5]-=  162;
	configs[13]-=  162;
	configs[15]-=   54;
	configs[22]-=  162;
	configs[23]-=  486;
	configs[33]-=  459;
	return 0x100800000000;
}

u64 FlipFunctionBBBlack1479(TConfig* configs) {
	configs[ 4]+=   54;
	configs[ 5]+=  162;
	configs[13]+=  162;
	configs[15]+=   54;
	configs[22]+=  162;
	configs[23]+=  486;
	configs[33]+=  459;
	return 0x100800000000;
}

u64 FlipFunctionBBWhite1480(TConfig* configs) {
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
	return 0x100804000000;
}

u64 FlipFunctionBBBlack1480(TConfig* configs) {
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
	return 0x100804000000;
}

u64 FlipFunctionBBWhite1481(TConfig* configs) {
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
	return 0x100804020000;
}

u64 FlipFunctionBBBlack1481(TConfig* configs) {
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
	return 0x100804020000;
}

u64 FlipFunctionBBWhite1482(TConfig* configs) {
	configs[ 6]-=  729;
	return 0x40000000000000;
}

u64 FlipFunctionBBBlack1482(TConfig* configs) {
	configs[ 6]+=  729;
	return 0x40000000000000;
}

u64 FlipFunctionBBWhite1483(TConfig* configs) {
	configs[ 6]-= 1215;
	configs[17]-=   18;
	configs[24]-= 1458;
	configs[33]-=  486;
	return 0x60000000000000;
}

u64 FlipFunctionBBBlack1483(TConfig* configs) {
	configs[ 6]+= 1215;
	configs[17]+=   18;
	configs[24]+= 1458;
	configs[33]+=  486;
	return 0x60000000000000;
}

u64 FlipFunctionBBWhite1484(TConfig* configs) {
	configs[ 6]-= 1377;
	configs[16]-=   54;
	configs[17]-=   18;
	configs[23]-= 1458;
	configs[24]-= 1458;
	configs[33]-=  486;
	configs[34]-=  162;
	return 0x70000000000000;
}

u64 FlipFunctionBBBlack1484(TConfig* configs) {
	configs[ 6]+= 1377;
	configs[16]+=   54;
	configs[17]+=   18;
	configs[23]+= 1458;
	configs[24]+= 1458;
	configs[33]+=  486;
	configs[34]+=  162;
	return 0x70000000000000;
}

u64 FlipFunctionBBWhite1485(TConfig* configs) {
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
	return 0x78000000000000;
}

u64 FlipFunctionBBBlack1485(TConfig* configs) {
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
	return 0x78000000000000;
}

u64 FlipFunctionBBWhite1486(TConfig* configs) {
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
	return 0x7c000000000000;
}

u64 FlipFunctionBBBlack1486(TConfig* configs) {
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
	return 0x7c000000000000;
}

u64 FlipFunctionBBWhite1487(TConfig* configs) {
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
	return 0x7e000000000000;
}

u64 FlipFunctionBBBlack1487(TConfig* configs) {
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
	return 0x7e000000000000;
}

u64 FlipFunctionBBWhite1488(TConfig* configs) {
	configs[18]-=    3;
	return 0x0;
}

u64 FlipFunctionBBBlack1488(TConfig* configs) {
	configs[18]+=    3;
	return 0x0;
}

u64 FlipFunctionBBWhite1489(TConfig* configs) {
	configs[25]-=  729;
	return 0x0;
}

u64 FlipFunctionBBBlack1489(TConfig* configs) {
	configs[25]+=  729;
	return 0x0;
}

u64 FlipFunctionBBWhite1490(TConfig* configs) {
	configs[ 5]-= 1458;
	configs[17]-=    6;
	configs[25]-= 1215;
	configs[31]-=  486;
	return 0x400000000000;
}

u64 FlipFunctionBBBlack1490(TConfig* configs) {
	configs[ 5]+= 1458;
	configs[17]+=    6;
	configs[25]+= 1215;
	configs[31]+=  486;
	return 0x400000000000;
}

u64 FlipFunctionBBWhite1491(TConfig* configs) {
	configs[ 4]-= 1458;
	configs[ 5]-= 1458;
	configs[16]-=    6;
	configs[17]-=    6;
	configs[25]-= 1377;
	configs[30]-=  162;
	configs[31]-=  486;
	return 0x404000000000;
}

u64 FlipFunctionBBBlack1491(TConfig* configs) {
	configs[ 4]+= 1458;
	configs[ 5]+= 1458;
	configs[16]+=    6;
	configs[17]+=    6;
	configs[25]+= 1377;
	configs[30]+=  162;
	configs[31]+=  486;
	return 0x404000000000;
}

u64 FlipFunctionBBWhite1492(TConfig* configs) {
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
	return 0x404040000000;
}

u64 FlipFunctionBBBlack1492(TConfig* configs) {
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
	return 0x404040000000;
}

u64 FlipFunctionBBWhite1493(TConfig* configs) {
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
	return 0x404040400000;
}

u64 FlipFunctionBBBlack1493(TConfig* configs) {
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
	return 0x404040400000;
}

u64 FlipFunctionBBWhite1494(TConfig* configs) {
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
	return 0x404040404000;
}

u64 FlipFunctionBBBlack1494(TConfig* configs) {
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
	return 0x404040404000;
}

u64 FlipFunctionBBWhite1495(TConfig* configs) {
	configs[32]-=  729;
	return 0x0;
}

u64 FlipFunctionBBBlack1495(TConfig* configs) {
	configs[32]+=  729;
	return 0x0;
}

u64 FlipFunctionBBWhite1496(TConfig* configs) {
	configs[ 5]-=  486;
	configs[16]-=   18;
	configs[24]-=  486;
	configs[32]-= 1215;
	return 0x200000000000;
}

u64 FlipFunctionBBBlack1496(TConfig* configs) {
	configs[ 5]+=  486;
	configs[16]+=   18;
	configs[24]+=  486;
	configs[32]+= 1215;
	return 0x200000000000;
}

u64 FlipFunctionBBWhite1497(TConfig* configs) {
	configs[ 4]-=  162;
	configs[ 5]-=  486;
	configs[14]-=   54;
	configs[16]-=   18;
	configs[23]-=  162;
	configs[24]-=  486;
	configs[32]-= 1377;
	return 0x201000000000;
}

u64 FlipFunctionBBBlack1497(TConfig* configs) {
	configs[ 4]+=  162;
	configs[ 5]+=  486;
	configs[14]+=   54;
	configs[16]+=   18;
	configs[23]+=  162;
	configs[24]+=  486;
	configs[32]+= 1377;
	return 0x201000000000;
}

u64 FlipFunctionBBWhite1498(TConfig* configs) {
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
	return 0x201008000000;
}

u64 FlipFunctionBBBlack1498(TConfig* configs) {
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
	return 0x201008000000;
}

u64 FlipFunctionBBWhite1499(TConfig* configs) {
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
	return 0x201008040000;
}

u64 FlipFunctionBBBlack1499(TConfig* configs) {
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
	return 0x201008040000;
}

u64 FlipFunctionBBWhite1500(TConfig* configs) {
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
	return 0x201008040200;
}

u64 FlipFunctionBBBlack1500(TConfig* configs) {
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
	return 0x201008040200;
}

u64 FlipFunctionBBWhite1501(TConfig* configs) {
	configs[ 6]-= 2187;
	return 0x80000000000000;
}

u64 FlipFunctionBBBlack1501(TConfig* configs) {
	configs[ 6]+= 2187;
	return 0x80000000000000;
}

u64 FlipFunctionBBWhite1502(TConfig* configs) {
	configs[ 6]-= 3645;
	configs[18]-=    6;
	configs[25]-= 1458;
	configs[32]-= 1458;
	return 0xc0000000000000;
}

u64 FlipFunctionBBBlack1502(TConfig* configs) {
	configs[ 6]+= 3645;
	configs[18]+=    6;
	configs[25]+= 1458;
	configs[32]+= 1458;
	return 0xc0000000000000;
}

u64 FlipFunctionBBWhite1503(TConfig* configs) {
	configs[ 6]-= 4131;
	configs[17]-=   18;
	configs[18]-=    6;
	configs[24]-= 1458;
	configs[25]-= 1458;
	configs[32]-= 1458;
	configs[33]-=  486;
	return 0xe0000000000000;
}

u64 FlipFunctionBBBlack1503(TConfig* configs) {
	configs[ 6]+= 4131;
	configs[17]+=   18;
	configs[18]+=    6;
	configs[24]+= 1458;
	configs[25]+= 1458;
	configs[32]+= 1458;
	configs[33]+=  486;
	return 0xe0000000000000;
}

u64 FlipFunctionBBWhite1504(TConfig* configs) {
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
	return 0xf0000000000000;
}

u64 FlipFunctionBBBlack1504(TConfig* configs) {
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
	return 0xf0000000000000;
}

u64 FlipFunctionBBWhite1505(TConfig* configs) {
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
	return 0xf8000000000000;
}

u64 FlipFunctionBBBlack1505(TConfig* configs) {
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
	return 0xf8000000000000;
}

u64 FlipFunctionBBWhite1506(TConfig* configs) {
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
	return 0xfc000000000000;
}

u64 FlipFunctionBBBlack1506(TConfig* configs) {
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
	return 0xfc000000000000;
}

u64 FlipFunctionBBWhite1507(TConfig* configs) {
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
	return 0xfe000000000000;
}

u64 FlipFunctionBBBlack1507(TConfig* configs) {
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
	return 0xfe000000000000;
}

u64 FlipFunctionBBWhite1508(TConfig* configs) {
	configs[26]-=  729;
	return 0x0;
}

u64 FlipFunctionBBBlack1508(TConfig* configs) {
	configs[26]+=  729;
	return 0x0;
}

u64 FlipFunctionBBWhite1509(TConfig* configs) {
	configs[ 5]-= 4374;
	configs[18]-=    2;
	configs[26]-= 1215;
	configs[30]-=  486;
	return 0x800000000000;
}

u64 FlipFunctionBBBlack1509(TConfig* configs) {
	configs[ 5]+= 4374;
	configs[18]+=    2;
	configs[26]+= 1215;
	configs[30]+=  486;
	return 0x800000000000;
}

u64 FlipFunctionBBWhite1510(TConfig* configs) {
	configs[ 4]-= 4374;
	configs[ 5]-= 4374;
	configs[17]-=    2;
	configs[18]-=    2;
	configs[26]-= 1377;
	configs[29]-=  162;
	configs[30]-=  486;
	return 0x808000000000;
}

u64 FlipFunctionBBBlack1510(TConfig* configs) {
	configs[ 4]+= 4374;
	configs[ 5]+= 4374;
	configs[17]+=    2;
	configs[18]+=    2;
	configs[26]+= 1377;
	configs[29]+=  162;
	configs[30]+=  486;
	return 0x808000000000;
}

u64 FlipFunctionBBWhite1511(TConfig* configs) {
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
	return 0x808080000000;
}

u64 FlipFunctionBBBlack1511(TConfig* configs) {
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
	return 0x808080000000;
}

u64 FlipFunctionBBWhite1512(TConfig* configs) {
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
	return 0x808080800000;
}

u64 FlipFunctionBBBlack1512(TConfig* configs) {
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
	return 0x808080800000;
}

u64 FlipFunctionBBWhite1513(TConfig* configs) {
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
	return 0x808080808000;
}

u64 FlipFunctionBBBlack1513(TConfig* configs) {
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
	return 0x808080808000;
}

u64 FlipFunctionBBWhite1514(TConfig* configs) {
	configs[31]-=  729;
	return 0x0;
}

u64 FlipFunctionBBBlack1514(TConfig* configs) {
	configs[31]+=  729;
	return 0x0;
}

u64 FlipFunctionBBWhite1515(TConfig* configs) {
	configs[ 5]-= 1458;
	configs[17]-=    6;
	configs[25]-=  486;
	configs[31]-= 1215;
	return 0x400000000000;
}

u64 FlipFunctionBBBlack1515(TConfig* configs) {
	configs[ 5]+= 1458;
	configs[17]+=    6;
	configs[25]+=  486;
	configs[31]+= 1215;
	return 0x400000000000;
}

u64 FlipFunctionBBWhite1516(TConfig* configs) {
	configs[ 4]-=  486;
	configs[ 5]-= 1458;
	configs[15]-=   18;
	configs[17]-=    6;
	configs[24]-=  162;
	configs[25]-=  486;
	configs[31]-= 1377;
	return 0x402000000000;
}

u64 FlipFunctionBBBlack1516(TConfig* configs) {
	configs[ 4]+=  486;
	configs[ 5]+= 1458;
	configs[15]+=   18;
	configs[17]+=    6;
	configs[24]+=  162;
	configs[25]+=  486;
	configs[31]+= 1377;
	return 0x402000000000;
}

u64 FlipFunctionBBWhite1517(TConfig* configs) {
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
	return 0x402010000000;
}

u64 FlipFunctionBBBlack1517(TConfig* configs) {
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
	return 0x402010000000;
}

u64 FlipFunctionBBWhite1518(TConfig* configs) {
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
	return 0x402010080000;
}

u64 FlipFunctionBBBlack1518(TConfig* configs) {
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
	return 0x402010080000;
}

u64 FlipFunctionBBWhite1519(TConfig* configs) {
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
	return 0x402010080400;
}

u64 FlipFunctionBBBlack1519(TConfig* configs) {
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
	return 0x402010080400;
}

u64 FlipFunctionBBWhite1520(TConfig* configs) {
	configs[ 7]-=    1;
	return 0x100000000000000;
}

u64 FlipFunctionBBBlack1520(TConfig* configs) {
	configs[ 7]+=    1;
	return 0x100000000000000;
}

u64 FlipFunctionBBWhite1521(TConfig* configs) {
	configs[ 7]-=    7;
	configs[14]-= 1458;
	configs[20]-= 4374;
	return 0x300000000000000;
}

u64 FlipFunctionBBBlack1521(TConfig* configs) {
	configs[ 7]+=    7;
	configs[14]+= 1458;
	configs[20]+= 4374;
	return 0x300000000000000;
}

u64 FlipFunctionBBWhite1522(TConfig* configs) {
	configs[ 7]-=   25;
	configs[14]-= 1458;
	configs[15]-=  486;
	configs[20]-= 4374;
	configs[21]-= 4374;
	configs[37]-=   18;
	return 0x700000000000000;
}

u64 FlipFunctionBBBlack1522(TConfig* configs) {
	configs[ 7]+=   25;
	configs[14]+= 1458;
	configs[15]+=  486;
	configs[20]+= 4374;
	configs[21]+= 4374;
	configs[37]+=   18;
	return 0x700000000000000;
}

u64 FlipFunctionBBWhite1523(TConfig* configs) {
	configs[ 7]-=   79;
	configs[14]-= 1458;
	configs[15]-=  486;
	configs[16]-=  162;
	configs[20]-= 4374;
	configs[21]-= 4374;
	configs[22]-= 4374;
	configs[36]-=   54;
	configs[37]-=   18;
	return 0xf00000000000000;
}

u64 FlipFunctionBBBlack1523(TConfig* configs) {
	configs[ 7]+=   79;
	configs[14]+= 1458;
	configs[15]+=  486;
	configs[16]+=  162;
	configs[20]+= 4374;
	configs[21]+= 4374;
	configs[22]+= 4374;
	configs[36]+=   54;
	configs[37]+=   18;
	return 0xf00000000000000;
}

u64 FlipFunctionBBWhite1524(TConfig* configs) {
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
	return 0x1f00000000000000;
}

u64 FlipFunctionBBBlack1524(TConfig* configs) {
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
	return 0x1f00000000000000;
}

u64 FlipFunctionBBWhite1525(TConfig* configs) {
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
	return 0x3f00000000000000;
}

u64 FlipFunctionBBBlack1525(TConfig* configs) {
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
	return 0x3f00000000000000;
}

u64 FlipFunctionBBWhite1526(TConfig* configs) {
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
	return 0x7f00000000000000;
}

u64 FlipFunctionBBBlack1526(TConfig* configs) {
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
	return 0x7f00000000000000;
}

u64 FlipFunctionBBWhite1527(TConfig* configs) {
	configs[13]-= 2187;
	return 0x0;
}

u64 FlipFunctionBBBlack1527(TConfig* configs) {
	configs[13]+= 2187;
	return 0x0;
}

u64 FlipFunctionBBWhite1528(TConfig* configs) {
	configs[ 6]-=    6;
	configs[13]-= 3645;
	configs[20]-= 1458;
	configs[37]-=    6;
	return 0x2000000000000;
}

u64 FlipFunctionBBBlack1528(TConfig* configs) {
	configs[ 6]+=    6;
	configs[13]+= 3645;
	configs[20]+= 1458;
	configs[37]+=    6;
	return 0x2000000000000;
}

u64 FlipFunctionBBWhite1529(TConfig* configs) {
	configs[ 5]-=   18;
	configs[ 6]-=    6;
	configs[13]-= 4131;
	configs[20]-= 1458;
	configs[21]-=  486;
	configs[35]-=   18;
	configs[37]-=    6;
	return 0x2040000000000;
}

u64 FlipFunctionBBBlack1529(TConfig* configs) {
	configs[ 5]+=   18;
	configs[ 6]+=    6;
	configs[13]+= 4131;
	configs[20]+= 1458;
	configs[21]+=  486;
	configs[35]+=   18;
	configs[37]+=    6;
	return 0x2040000000000;
}

u64 FlipFunctionBBWhite1530(TConfig* configs) {
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
	return 0x2040800000000;
}

u64 FlipFunctionBBBlack1530(TConfig* configs) {
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
	return 0x2040800000000;
}

u64 FlipFunctionBBWhite1531(TConfig* configs) {
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
	return 0x2040810000000;
}

u64 FlipFunctionBBBlack1531(TConfig* configs) {
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
	return 0x2040810000000;
}

u64 FlipFunctionBBWhite1532(TConfig* configs) {
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
	return 0x2040810200000;
}

u64 FlipFunctionBBBlack1532(TConfig* configs) {
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
	return 0x2040810200000;
}

u64 FlipFunctionBBWhite1533(TConfig* configs) {
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
	return 0x2040810204000;
}

u64 FlipFunctionBBBlack1533(TConfig* configs) {
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
	return 0x2040810204000;
}

u64 FlipFunctionBBWhite1534(TConfig* configs) {
	configs[19]-= 2187;
	return 0x0;
}

u64 FlipFunctionBBBlack1534(TConfig* configs) {
	configs[19]+= 2187;
	return 0x0;
}

u64 FlipFunctionBBWhite1535(TConfig* configs) {
	configs[ 6]-=    2;
	configs[12]-= 1458;
	configs[19]-= 3645;
	return 0x1000000000000;
}

u64 FlipFunctionBBBlack1535(TConfig* configs) {
	configs[ 6]+=    2;
	configs[12]+= 1458;
	configs[19]+= 3645;
	return 0x1000000000000;
}

u64 FlipFunctionBBWhite1536(TConfig* configs) {
	configs[ 5]-=    2;
	configs[ 6]-=    2;
	configs[11]-=  486;
	configs[12]-= 1458;
	configs[19]-= 4131;
	configs[37]-=    2;
	return 0x1010000000000;
}

u64 FlipFunctionBBBlack1536(TConfig* configs) {
	configs[ 5]+=    2;
	configs[ 6]+=    2;
	configs[11]+=  486;
	configs[12]+= 1458;
	configs[19]+= 4131;
	configs[37]+=    2;
	return 0x1010000000000;
}

u64 FlipFunctionBBWhite1537(TConfig* configs) {
	configs[ 4]-=    2;
	configs[ 5]-=    2;
	configs[ 6]-=    2;
	configs[10]-=  162;
	configs[11]-=  486;
	configs[12]-= 1458;
	configs[19]-= 4293;
	configs[36]-=    2;
	configs[37]-=    2;
	return 0x1010100000000;
}

u64 FlipFunctionBBBlack1537(TConfig* configs) {
	configs[ 4]+=    2;
	configs[ 5]+=    2;
	configs[ 6]+=    2;
	configs[10]+=  162;
	configs[11]+=  486;
	configs[12]+= 1458;
	configs[19]+= 4293;
	configs[36]+=    2;
	configs[37]+=    2;
	return 0x1010100000000;
}

u64 FlipFunctionBBWhite1538(TConfig* configs) {
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
	return 0x1010101000000;
}

u64 FlipFunctionBBBlack1538(TConfig* configs) {
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
	return 0x1010101000000;
}

u64 FlipFunctionBBWhite1539(TConfig* configs) {
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
	return 0x1010101010000;
}

u64 FlipFunctionBBBlack1539(TConfig* configs) {
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
	return 0x1010101010000;
}

u64 FlipFunctionBBWhite1540(TConfig* configs) {
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
	return 0x1010101010100;
}

u64 FlipFunctionBBBlack1540(TConfig* configs) {
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
	return 0x1010101010100;
}

u64 FlipFunctionBBWhite1541(TConfig* configs) {
	configs[ 7]-=    3;
	return 0x200000000000000;
}

u64 FlipFunctionBBBlack1541(TConfig* configs) {
	configs[ 7]+=    3;
	return 0x200000000000000;
}

u64 FlipFunctionBBWhite1542(TConfig* configs) {
	configs[ 7]-=   21;
	configs[15]-=  486;
	configs[21]-= 4374;
	configs[37]-=   18;
	return 0x600000000000000;
}

u64 FlipFunctionBBBlack1542(TConfig* configs) {
	configs[ 7]+=   21;
	configs[15]+=  486;
	configs[21]+= 4374;
	configs[37]+=   18;
	return 0x600000000000000;
}

u64 FlipFunctionBBWhite1543(TConfig* configs) {
	configs[ 7]-=   75;
	configs[15]-=  486;
	configs[16]-=  162;
	configs[21]-= 4374;
	configs[22]-= 4374;
	configs[36]-=   54;
	configs[37]-=   18;
	return 0xe00000000000000;
}

u64 FlipFunctionBBBlack1543(TConfig* configs) {
	configs[ 7]+=   75;
	configs[15]+=  486;
	configs[16]+=  162;
	configs[21]+= 4374;
	configs[22]+= 4374;
	configs[36]+=   54;
	configs[37]+=   18;
	return 0xe00000000000000;
}

u64 FlipFunctionBBWhite1544(TConfig* configs) {
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
	return 0x1e00000000000000;
}

u64 FlipFunctionBBBlack1544(TConfig* configs) {
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
	return 0x1e00000000000000;
}

u64 FlipFunctionBBWhite1545(TConfig* configs) {
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
	return 0x3e00000000000000;
}

u64 FlipFunctionBBBlack1545(TConfig* configs) {
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
	return 0x3e00000000000000;
}

u64 FlipFunctionBBWhite1546(TConfig* configs) {
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
	return 0x7e00000000000000;
}

u64 FlipFunctionBBBlack1546(TConfig* configs) {
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
	return 0x7e00000000000000;
}

u64 FlipFunctionBBWhite1547(TConfig* configs) {
	configs[14]-=  729;
	return 0x0;
}

u64 FlipFunctionBBBlack1547(TConfig* configs) {
	configs[14]+=  729;
	return 0x0;
}

u64 FlipFunctionBBWhite1548(TConfig* configs) {
	configs[ 6]-=   18;
	configs[14]-= 1215;
	configs[21]-= 1458;
	configs[36]-=   18;
	return 0x4000000000000;
}

u64 FlipFunctionBBBlack1548(TConfig* configs) {
	configs[ 6]+=   18;
	configs[14]+= 1215;
	configs[21]+= 1458;
	configs[36]+=   18;
	return 0x4000000000000;
}

u64 FlipFunctionBBWhite1549(TConfig* configs) {
	configs[ 5]-=   54;
	configs[ 6]-=   18;
	configs[14]-= 1377;
	configs[21]-= 1458;
	configs[22]-=  486;
	configs[34]-=   54;
	configs[36]-=   18;
	return 0x4080000000000;
}

u64 FlipFunctionBBBlack1549(TConfig* configs) {
	configs[ 5]+=   54;
	configs[ 6]+=   18;
	configs[14]+= 1377;
	configs[21]+= 1458;
	configs[22]+=  486;
	configs[34]+=   54;
	configs[36]+=   18;
	return 0x4080000000000;
}

u64 FlipFunctionBBWhite1550(TConfig* configs) {
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
	return 0x4081000000000;
}

u64 FlipFunctionBBBlack1550(TConfig* configs) {
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
	return 0x4081000000000;
}

u64 FlipFunctionBBWhite1551(TConfig* configs) {
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
	return 0x4081020000000;
}

u64 FlipFunctionBBBlack1551(TConfig* configs) {
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
	return 0x4081020000000;
}

u64 FlipFunctionBBWhite1552(TConfig* configs) {
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
	return 0x4081020400000;
}

u64 FlipFunctionBBBlack1552(TConfig* configs) {
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
	return 0x4081020400000;
}

u64 FlipFunctionBBWhite1553(TConfig* configs) {
	configs[20]-= 2187;
	return 0x0;
}

u64 FlipFunctionBBBlack1553(TConfig* configs) {
	configs[20]+= 2187;
	return 0x0;
}

u64 FlipFunctionBBWhite1554(TConfig* configs) {
	configs[ 6]-=    6;
	configs[13]-= 1458;
	configs[20]-= 3645;
	configs[37]-=    6;
	return 0x2000000000000;
}

u64 FlipFunctionBBBlack1554(TConfig* configs) {
	configs[ 6]+=    6;
	configs[13]+= 1458;
	configs[20]+= 3645;
	configs[37]+=    6;
	return 0x2000000000000;
}

u64 FlipFunctionBBWhite1555(TConfig* configs) {
	configs[ 5]-=    6;
	configs[ 6]-=    6;
	configs[12]-=  486;
	configs[13]-= 1458;
	configs[20]-= 4131;
	configs[36]-=    6;
	configs[37]-=    6;
	return 0x2020000000000;
}

u64 FlipFunctionBBBlack1555(TConfig* configs) {
	configs[ 5]+=    6;
	configs[ 6]+=    6;
	configs[12]+=  486;
	configs[13]+= 1458;
	configs[20]+= 4131;
	configs[36]+=    6;
	configs[37]+=    6;
	return 0x2020000000000;
}

u64 FlipFunctionBBWhite1556(TConfig* configs) {
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
	return 0x2020200000000;
}

u64 FlipFunctionBBBlack1556(TConfig* configs) {
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
	return 0x2020200000000;
}

u64 FlipFunctionBBWhite1557(TConfig* configs) {
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
	return 0x2020202000000;
}

u64 FlipFunctionBBBlack1557(TConfig* configs) {
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
	return 0x2020202000000;
}

u64 FlipFunctionBBWhite1558(TConfig* configs) {
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
	return 0x2020202020000;
}

u64 FlipFunctionBBBlack1558(TConfig* configs) {
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
	return 0x2020202020000;
}

u64 FlipFunctionBBWhite1559(TConfig* configs) {
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
	return 0x2020202020200;
}

u64 FlipFunctionBBBlack1559(TConfig* configs) {
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
	return 0x2020202020200;
}

u64 FlipFunctionBBWhite1560(TConfig* configs) {
	configs[ 7]-=    9;
	return 0x400000000000000;
}

u64 FlipFunctionBBBlack1560(TConfig* configs) {
	configs[ 7]+=    9;
	return 0x400000000000000;
}

u64 FlipFunctionBBWhite1561(TConfig* configs) {
	configs[ 7]-=   63;
	configs[16]-=  162;
	configs[22]-= 4374;
	configs[36]-=   54;
	return 0xc00000000000000;
}

u64 FlipFunctionBBBlack1561(TConfig* configs) {
	configs[ 7]+=   63;
	configs[16]+=  162;
	configs[22]+= 4374;
	configs[36]+=   54;
	return 0xc00000000000000;
}

u64 FlipFunctionBBWhite1562(TConfig* configs) {
	configs[ 7]-=  225;
	configs[16]-=  162;
	configs[17]-=   54;
	configs[22]-= 4374;
	configs[23]-= 4374;
	configs[35]-=  162;
	configs[36]-=   54;
	return 0x1c00000000000000;
}

u64 FlipFunctionBBBlack1562(TConfig* configs) {
	configs[ 7]+=  225;
	configs[16]+=  162;
	configs[17]+=   54;
	configs[22]+= 4374;
	configs[23]+= 4374;
	configs[35]+=  162;
	configs[36]+=   54;
	return 0x1c00000000000000;
}

u64 FlipFunctionBBWhite1563(TConfig* configs) {
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
	return 0x3c00000000000000;
}

u64 FlipFunctionBBBlack1563(TConfig* configs) {
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
	return 0x3c00000000000000;
}

u64 FlipFunctionBBWhite1564(TConfig* configs) {
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
	return 0x7c00000000000000;
}

u64 FlipFunctionBBBlack1564(TConfig* configs) {
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
	return 0x7c00000000000000;
}

u64 FlipFunctionBBWhite1565(TConfig* configs) {
	configs[ 7]-=   15;
	configs[14]-= 1458;
	configs[20]-= 4374;
	return 0x600000000000000;
}

u64 FlipFunctionBBBlack1565(TConfig* configs) {
	configs[ 7]+=   15;
	configs[14]+= 1458;
	configs[20]+= 4374;
	return 0x600000000000000;
}

u64 FlipFunctionBBWhite1566(TConfig* configs) {
	configs[ 7]-=   69;
	configs[14]-= 1458;
	configs[16]-=  162;
	configs[20]-= 4374;
	configs[22]-= 4374;
	configs[36]-=   54;
	return 0xe00000000000000;
}

u64 FlipFunctionBBBlack1566(TConfig* configs) {
	configs[ 7]+=   69;
	configs[14]+= 1458;
	configs[16]+=  162;
	configs[20]+= 4374;
	configs[22]+= 4374;
	configs[36]+=   54;
	return 0xe00000000000000;
}

u64 FlipFunctionBBWhite1567(TConfig* configs) {
	configs[ 7]-=  231;
	configs[14]-= 1458;
	configs[16]-=  162;
	configs[17]-=   54;
	configs[20]-= 4374;
	configs[22]-= 4374;
	configs[23]-= 4374;
	configs[35]-=  162;
	configs[36]-=   54;
	return 0x1e00000000000000;
}

u64 FlipFunctionBBBlack1567(TConfig* configs) {
	configs[ 7]+=  231;
	configs[14]+= 1458;
	configs[16]+=  162;
	configs[17]+=   54;
	configs[20]+= 4374;
	configs[22]+= 4374;
	configs[23]+= 4374;
	configs[35]+=  162;
	configs[36]+=   54;
	return 0x1e00000000000000;
}

u64 FlipFunctionBBWhite1568(TConfig* configs) {
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
	return 0x3e00000000000000;
}

u64 FlipFunctionBBBlack1568(TConfig* configs) {
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
	return 0x3e00000000000000;
}

u64 FlipFunctionBBWhite1569(TConfig* configs) {
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
	return 0x7e00000000000000;
}

u64 FlipFunctionBBBlack1569(TConfig* configs) {
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
	return 0x7e00000000000000;
}

u64 FlipFunctionBBWhite1570(TConfig* configs) {
	configs[15]-=  243;
	return 0x0;
}

u64 FlipFunctionBBBlack1570(TConfig* configs) {
	configs[15]+=  243;
	return 0x0;
}

u64 FlipFunctionBBWhite1571(TConfig* configs) {
	configs[ 6]-=   54;
	configs[15]-=  405;
	configs[22]-= 1458;
	configs[35]-=   54;
	return 0x8000000000000;
}

u64 FlipFunctionBBBlack1571(TConfig* configs) {
	configs[ 6]+=   54;
	configs[15]+=  405;
	configs[22]+= 1458;
	configs[35]+=   54;
	return 0x8000000000000;
}

u64 FlipFunctionBBWhite1572(TConfig* configs) {
	configs[ 5]-=  162;
	configs[ 6]-=   54;
	configs[15]-=  459;
	configs[22]-= 1458;
	configs[23]-=  486;
	configs[33]-=  162;
	configs[35]-=   54;
	return 0x8100000000000;
}

u64 FlipFunctionBBBlack1572(TConfig* configs) {
	configs[ 5]+=  162;
	configs[ 6]+=   54;
	configs[15]+=  459;
	configs[22]+= 1458;
	configs[23]+=  486;
	configs[33]+=  162;
	configs[35]+=   54;
	return 0x8100000000000;
}

u64 FlipFunctionBBWhite1573(TConfig* configs) {
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
	return 0x8102000000000;
}

u64 FlipFunctionBBBlack1573(TConfig* configs) {
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
	return 0x8102000000000;
}

u64 FlipFunctionBBWhite1574(TConfig* configs) {
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
	return 0x8102040000000;
}

u64 FlipFunctionBBBlack1574(TConfig* configs) {
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
	return 0x8102040000000;
}

u64 FlipFunctionBBWhite1575(TConfig* configs) {
	configs[21]-= 2187;
	return 0x0;
}

u64 FlipFunctionBBBlack1575(TConfig* configs) {
	configs[21]+= 2187;
	return 0x0;
}

u64 FlipFunctionBBWhite1576(TConfig* configs) {
	configs[ 6]-=   18;
	configs[14]-=  486;
	configs[21]-= 3645;
	configs[36]-=   18;
	return 0x4000000000000;
}

u64 FlipFunctionBBBlack1576(TConfig* configs) {
	configs[ 6]+=   18;
	configs[14]+=  486;
	configs[21]+= 3645;
	configs[36]+=   18;
	return 0x4000000000000;
}

u64 FlipFunctionBBWhite1577(TConfig* configs) {
	configs[ 5]-=   18;
	configs[ 6]-=   18;
	configs[13]-=  486;
	configs[14]-=  486;
	configs[21]-= 4131;
	configs[35]-=   18;
	configs[36]-=   18;
	return 0x4040000000000;
}

u64 FlipFunctionBBBlack1577(TConfig* configs) {
	configs[ 5]+=   18;
	configs[ 6]+=   18;
	configs[13]+=  486;
	configs[14]+=  486;
	configs[21]+= 4131;
	configs[35]+=   18;
	configs[36]+=   18;
	return 0x4040000000000;
}

u64 FlipFunctionBBWhite1578(TConfig* configs) {
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
	return 0x4040400000000;
}

u64 FlipFunctionBBBlack1578(TConfig* configs) {
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
	return 0x4040400000000;
}

u64 FlipFunctionBBWhite1579(TConfig* configs) {
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
	return 0x4040404000000;
}

u64 FlipFunctionBBBlack1579(TConfig* configs) {
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
	return 0x4040404000000;
}

u64 FlipFunctionBBWhite1580(TConfig* configs) {
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
	return 0x4040404040000;
}

u64 FlipFunctionBBBlack1580(TConfig* configs) {
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
	return 0x4040404040000;
}

u64 FlipFunctionBBWhite1581(TConfig* configs) {
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
	return 0x4040404040400;
}

u64 FlipFunctionBBBlack1581(TConfig* configs) {
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
	return 0x4040404040400;
}

u64 FlipFunctionBBWhite1582(TConfig* configs) {
	configs[37]-=    9;
	return 0x0;
}

u64 FlipFunctionBBBlack1582(TConfig* configs) {
	configs[37]+=    9;
	return 0x0;
}

u64 FlipFunctionBBWhite1583(TConfig* configs) {
	configs[ 6]-=    6;
	configs[13]-= 1458;
	configs[20]-= 1458;
	configs[37]-=   15;
	return 0x2000000000000;
}

u64 FlipFunctionBBBlack1583(TConfig* configs) {
	configs[ 6]+=    6;
	configs[13]+= 1458;
	configs[20]+= 1458;
	configs[37]+=   15;
	return 0x2000000000000;
}

u64 FlipFunctionBBWhite1584(TConfig* configs) {
	configs[ 7]-=   27;
	return 0x800000000000000;
}

u64 FlipFunctionBBBlack1584(TConfig* configs) {
	configs[ 7]+=   27;
	return 0x800000000000000;
}

u64 FlipFunctionBBWhite1585(TConfig* configs) {
	configs[ 7]-=  189;
	configs[17]-=   54;
	configs[23]-= 4374;
	configs[35]-=  162;
	return 0x1800000000000000;
}

u64 FlipFunctionBBBlack1585(TConfig* configs) {
	configs[ 7]+=  189;
	configs[17]+=   54;
	configs[23]+= 4374;
	configs[35]+=  162;
	return 0x1800000000000000;
}

u64 FlipFunctionBBWhite1586(TConfig* configs) {
	configs[ 7]-=  675;
	configs[17]-=   54;
	configs[18]-=   18;
	configs[23]-= 4374;
	configs[24]-= 4374;
	configs[34]-=  486;
	configs[35]-=  162;
	return 0x3800000000000000;
}

u64 FlipFunctionBBBlack1586(TConfig* configs) {
	configs[ 7]+=  675;
	configs[17]+=   54;
	configs[18]+=   18;
	configs[23]+= 4374;
	configs[24]+= 4374;
	configs[34]+=  486;
	configs[35]+=  162;
	return 0x3800000000000000;
}

u64 FlipFunctionBBWhite1587(TConfig* configs) {
	configs[ 7]-= 2133;
	configs[17]-=   54;
	configs[18]-=   18;
	configs[23]-= 4374;
	configs[24]-= 4374;
	configs[25]-= 4374;
	configs[33]-= 1458;
	configs[34]-=  486;
	configs[35]-=  162;
	return 0x7800000000000000;
}

u64 FlipFunctionBBBlack1587(TConfig* configs) {
	configs[ 7]+= 2133;
	configs[17]+=   54;
	configs[18]+=   18;
	configs[23]+= 4374;
	configs[24]+= 4374;
	configs[25]+= 4374;
	configs[33]+= 1458;
	configs[34]+=  486;
	configs[35]+=  162;
	return 0x7800000000000000;
}

u64 FlipFunctionBBWhite1588(TConfig* configs) {
	configs[ 7]-=   45;
	configs[15]-=  486;
	configs[21]-= 4374;
	configs[37]-=   18;
	return 0xc00000000000000;
}

u64 FlipFunctionBBBlack1588(TConfig* configs) {
	configs[ 7]+=   45;
	configs[15]+=  486;
	configs[21]+= 4374;
	configs[37]+=   18;
	return 0xc00000000000000;
}

u64 FlipFunctionBBWhite1589(TConfig* configs) {
	configs[ 7]-=  207;
	configs[15]-=  486;
	configs[17]-=   54;
	configs[21]-= 4374;
	configs[23]-= 4374;
	configs[35]-=  162;
	configs[37]-=   18;
	return 0x1c00000000000000;
}

u64 FlipFunctionBBBlack1589(TConfig* configs) {
	configs[ 7]+=  207;
	configs[15]+=  486;
	configs[17]+=   54;
	configs[21]+= 4374;
	configs[23]+= 4374;
	configs[35]+=  162;
	configs[37]+=   18;
	return 0x1c00000000000000;
}

u64 FlipFunctionBBWhite1590(TConfig* configs) {
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
	return 0x3c00000000000000;
}

u64 FlipFunctionBBBlack1590(TConfig* configs) {
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
	return 0x3c00000000000000;
}

u64 FlipFunctionBBWhite1591(TConfig* configs) {
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
	return 0x7c00000000000000;
}

u64 FlipFunctionBBBlack1591(TConfig* configs) {
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
	return 0x7c00000000000000;
}

u64 FlipFunctionBBWhite1592(TConfig* configs) {
	configs[ 7]-=   51;
	configs[14]-= 1458;
	configs[15]-=  486;
	configs[20]-= 4374;
	configs[21]-= 4374;
	configs[37]-=   18;
	return 0xe00000000000000;
}

u64 FlipFunctionBBBlack1592(TConfig* configs) {
	configs[ 7]+=   51;
	configs[14]+= 1458;
	configs[15]+=  486;
	configs[20]+= 4374;
	configs[21]+= 4374;
	configs[37]+=   18;
	return 0xe00000000000000;
}

u64 FlipFunctionBBWhite1593(TConfig* configs) {
	configs[ 7]-=  213;
	configs[14]-= 1458;
	configs[15]-=  486;
	configs[17]-=   54;
	configs[20]-= 4374;
	configs[21]-= 4374;
	configs[23]-= 4374;
	configs[35]-=  162;
	configs[37]-=   18;
	return 0x1e00000000000000;
}

u64 FlipFunctionBBBlack1593(TConfig* configs) {
	configs[ 7]+=  213;
	configs[14]+= 1458;
	configs[15]+=  486;
	configs[17]+=   54;
	configs[20]+= 4374;
	configs[21]+= 4374;
	configs[23]+= 4374;
	configs[35]+=  162;
	configs[37]+=   18;
	return 0x1e00000000000000;
}

u64 FlipFunctionBBWhite1594(TConfig* configs) {
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
	return 0x3e00000000000000;
}

u64 FlipFunctionBBBlack1594(TConfig* configs) {
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
	return 0x3e00000000000000;
}

u64 FlipFunctionBBWhite1595(TConfig* configs) {
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
	return 0x7e00000000000000;
}

u64 FlipFunctionBBBlack1595(TConfig* configs) {
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
	return 0x7e00000000000000;
}

u64 FlipFunctionBBWhite1596(TConfig* configs) {
	configs[16]-=   81;
	return 0x0;
}

u64 FlipFunctionBBBlack1596(TConfig* configs) {
	configs[16]+=   81;
	return 0x0;
}

u64 FlipFunctionBBWhite1597(TConfig* configs) {
	configs[ 6]-=  162;
	configs[16]-=  135;
	configs[23]-= 1458;
	configs[34]-=  162;
	return 0x10000000000000;
}

u64 FlipFunctionBBBlack1597(TConfig* configs) {
	configs[ 6]+=  162;
	configs[16]+=  135;
	configs[23]+= 1458;
	configs[34]+=  162;
	return 0x10000000000000;
}

u64 FlipFunctionBBWhite1598(TConfig* configs) {
	configs[ 5]-=  486;
	configs[ 6]-=  162;
	configs[16]-=  153;
	configs[23]-= 1458;
	configs[24]-=  486;
	configs[32]-=  486;
	configs[34]-=  162;
	return 0x10200000000000;
}

u64 FlipFunctionBBBlack1598(TConfig* configs) {
	configs[ 5]+=  486;
	configs[ 6]+=  162;
	configs[16]+=  153;
	configs[23]+= 1458;
	configs[24]+=  486;
	configs[32]+=  486;
	configs[34]+=  162;
	return 0x10200000000000;
}

u64 FlipFunctionBBWhite1599(TConfig* configs) {
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
	return 0x10204000000000;
}

u64 FlipFunctionBBBlack1599(TConfig* configs) {
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
	return 0x10204000000000;
}

u64 FlipFunctionBBWhite1600(TConfig* configs) {
	configs[22]-= 2187;
	return 0x0;
}

u64 FlipFunctionBBBlack1600(TConfig* configs) {
	configs[22]+= 2187;
	return 0x0;
}

u64 FlipFunctionBBWhite1601(TConfig* configs) {
	configs[ 6]-=   54;
	configs[15]-=  162;
	configs[22]-= 3645;
	configs[35]-=   54;
	return 0x8000000000000;
}

u64 FlipFunctionBBBlack1601(TConfig* configs) {
	configs[ 6]+=   54;
	configs[15]+=  162;
	configs[22]+= 3645;
	configs[35]+=   54;
	return 0x8000000000000;
}

u64 FlipFunctionBBWhite1602(TConfig* configs) {
	configs[ 5]-=   54;
	configs[ 6]-=   54;
	configs[14]-=  162;
	configs[15]-=  162;
	configs[22]-= 4131;
	configs[34]-=   54;
	configs[35]-=   54;
	return 0x8080000000000;
}

u64 FlipFunctionBBBlack1602(TConfig* configs) {
	configs[ 5]+=   54;
	configs[ 6]+=   54;
	configs[14]+=  162;
	configs[15]+=  162;
	configs[22]+= 4131;
	configs[34]+=   54;
	configs[35]+=   54;
	return 0x8080000000000;
}

u64 FlipFunctionBBWhite1603(TConfig* configs) {
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
	return 0x8080800000000;
}

u64 FlipFunctionBBBlack1603(TConfig* configs) {
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
	return 0x8080800000000;
}

u64 FlipFunctionBBWhite1604(TConfig* configs) {
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
	return 0x8080808000000;
}

u64 FlipFunctionBBBlack1604(TConfig* configs) {
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
	return 0x8080808000000;
}

u64 FlipFunctionBBWhite1605(TConfig* configs) {
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
	return 0x8080808080000;
}

u64 FlipFunctionBBBlack1605(TConfig* configs) {
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
	return 0x8080808080000;
}

u64 FlipFunctionBBWhite1606(TConfig* configs) {
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
	return 0x8080808080800;
}

u64 FlipFunctionBBBlack1606(TConfig* configs) {
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
	return 0x8080808080800;
}

u64 FlipFunctionBBWhite1607(TConfig* configs) {
	configs[36]-=   27;
	return 0x0;
}

u64 FlipFunctionBBBlack1607(TConfig* configs) {
	configs[36]+=   27;
	return 0x0;
}

u64 FlipFunctionBBWhite1608(TConfig* configs) {
	configs[ 6]-=   18;
	configs[14]-=  486;
	configs[21]-= 1458;
	configs[36]-=   45;
	return 0x4000000000000;
}

u64 FlipFunctionBBBlack1608(TConfig* configs) {
	configs[ 6]+=   18;
	configs[14]+=  486;
	configs[21]+= 1458;
	configs[36]+=   45;
	return 0x4000000000000;
}

u64 FlipFunctionBBWhite1609(TConfig* configs) {
	configs[ 5]-=    6;
	configs[ 6]-=   18;
	configs[12]-=  486;
	configs[14]-=  486;
	configs[20]-=  486;
	configs[21]-= 1458;
	configs[36]-=   51;
	return 0x4020000000000;
}

u64 FlipFunctionBBBlack1609(TConfig* configs) {
	configs[ 5]+=    6;
	configs[ 6]+=   18;
	configs[12]+=  486;
	configs[14]+=  486;
	configs[20]+=  486;
	configs[21]+= 1458;
	configs[36]+=   51;
	return 0x4020000000000;
}

u64 FlipFunctionBBWhite1610(TConfig* configs) {
	configs[ 7]-=   81;
	return 0x1000000000000000;
}

u64 FlipFunctionBBBlack1610(TConfig* configs) {
	configs[ 7]+=   81;
	return 0x1000000000000000;
}

u64 FlipFunctionBBWhite1611(TConfig* configs) {
	configs[ 7]-=  567;
	configs[18]-=   18;
	configs[24]-= 4374;
	configs[34]-=  486;
	return 0x3000000000000000;
}

u64 FlipFunctionBBBlack1611(TConfig* configs) {
	configs[ 7]+=  567;
	configs[18]+=   18;
	configs[24]+= 4374;
	configs[34]+=  486;
	return 0x3000000000000000;
}

u64 FlipFunctionBBWhite1612(TConfig* configs) {
	configs[ 7]-= 2025;
	configs[18]-=   18;
	configs[24]-= 4374;
	configs[25]-= 4374;
	configs[33]-= 1458;
	configs[34]-=  486;
	return 0x7000000000000000;
}

u64 FlipFunctionBBBlack1612(TConfig* configs) {
	configs[ 7]+= 2025;
	configs[18]+=   18;
	configs[24]+= 4374;
	configs[25]+= 4374;
	configs[33]+= 1458;
	configs[34]+=  486;
	return 0x7000000000000000;
}

u64 FlipFunctionBBWhite1613(TConfig* configs) {
	configs[ 7]-=  135;
	configs[16]-=  162;
	configs[22]-= 4374;
	configs[36]-=   54;
	return 0x1800000000000000;
}

u64 FlipFunctionBBBlack1613(TConfig* configs) {
	configs[ 7]+=  135;
	configs[16]+=  162;
	configs[22]+= 4374;
	configs[36]+=   54;
	return 0x1800000000000000;
}

u64 FlipFunctionBBWhite1614(TConfig* configs) {
	configs[ 7]-=  621;
	configs[16]-=  162;
	configs[18]-=   18;
	configs[22]-= 4374;
	configs[24]-= 4374;
	configs[34]-=  486;
	configs[36]-=   54;
	return 0x3800000000000000;
}

u64 FlipFunctionBBBlack1614(TConfig* configs) {
	configs[ 7]+=  621;
	configs[16]+=  162;
	configs[18]+=   18;
	configs[22]+= 4374;
	configs[24]+= 4374;
	configs[34]+=  486;
	configs[36]+=   54;
	return 0x3800000000000000;
}

u64 FlipFunctionBBWhite1615(TConfig* configs) {
	configs[ 7]-= 2079;
	configs[16]-=  162;
	configs[18]-=   18;
	configs[22]-= 4374;
	configs[24]-= 4374;
	configs[25]-= 4374;
	configs[33]-= 1458;
	configs[34]-=  486;
	configs[36]-=   54;
	return 0x7800000000000000;
}

u64 FlipFunctionBBBlack1615(TConfig* configs) {
	configs[ 7]+= 2079;
	configs[16]+=  162;
	configs[18]+=   18;
	configs[22]+= 4374;
	configs[24]+= 4374;
	configs[25]+= 4374;
	configs[33]+= 1458;
	configs[34]+=  486;
	configs[36]+=   54;
	return 0x7800000000000000;
}

u64 FlipFunctionBBWhite1616(TConfig* configs) {
	configs[ 7]-=  153;
	configs[15]-=  486;
	configs[16]-=  162;
	configs[21]-= 4374;
	configs[22]-= 4374;
	configs[36]-=   54;
	configs[37]-=   18;
	return 0x1c00000000000000;
}

u64 FlipFunctionBBBlack1616(TConfig* configs) {
	configs[ 7]+=  153;
	configs[15]+=  486;
	configs[16]+=  162;
	configs[21]+= 4374;
	configs[22]+= 4374;
	configs[36]+=   54;
	configs[37]+=   18;
	return 0x1c00000000000000;
}

u64 FlipFunctionBBWhite1617(TConfig* configs) {
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
	return 0x3c00000000000000;
}

u64 FlipFunctionBBBlack1617(TConfig* configs) {
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
	return 0x3c00000000000000;
}

u64 FlipFunctionBBWhite1618(TConfig* configs) {
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
	return 0x7c00000000000000;
}

u64 FlipFunctionBBBlack1618(TConfig* configs) {
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
	return 0x7c00000000000000;
}

u64 FlipFunctionBBWhite1619(TConfig* configs) {
	configs[ 7]-=  159;
	configs[14]-= 1458;
	configs[15]-=  486;
	configs[16]-=  162;
	configs[20]-= 4374;
	configs[21]-= 4374;
	configs[22]-= 4374;
	configs[36]-=   54;
	configs[37]-=   18;
	return 0x1e00000000000000;
}

u64 FlipFunctionBBBlack1619(TConfig* configs) {
	configs[ 7]+=  159;
	configs[14]+= 1458;
	configs[15]+=  486;
	configs[16]+=  162;
	configs[20]+= 4374;
	configs[21]+= 4374;
	configs[22]+= 4374;
	configs[36]+=   54;
	configs[37]+=   18;
	return 0x1e00000000000000;
}

u64 FlipFunctionBBWhite1620(TConfig* configs) {
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
	return 0x3e00000000000000;
}

u64 FlipFunctionBBBlack1620(TConfig* configs) {
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
	return 0x3e00000000000000;
}

u64 FlipFunctionBBWhite1621(TConfig* configs) {
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
	return 0x7e00000000000000;
}

u64 FlipFunctionBBBlack1621(TConfig* configs) {
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
	return 0x7e00000000000000;
}

u64 FlipFunctionBBWhite1622(TConfig* configs) {
	configs[17]-=   27;
	return 0x0;
}

u64 FlipFunctionBBBlack1622(TConfig* configs) {
	configs[17]+=   27;
	return 0x0;
}

u64 FlipFunctionBBWhite1623(TConfig* configs) {
	configs[ 6]-=  486;
	configs[17]-=   45;
	configs[24]-= 1458;
	configs[33]-=  486;
	return 0x20000000000000;
}

u64 FlipFunctionBBBlack1623(TConfig* configs) {
	configs[ 6]+=  486;
	configs[17]+=   45;
	configs[24]+= 1458;
	configs[33]+=  486;
	return 0x20000000000000;
}

u64 FlipFunctionBBWhite1624(TConfig* configs) {
	configs[ 5]-= 1458;
	configs[ 6]-=  486;
	configs[17]-=   51;
	configs[24]-= 1458;
	configs[25]-=  486;
	configs[31]-=  486;
	configs[33]-=  486;
	return 0x20400000000000;
}

u64 FlipFunctionBBBlack1624(TConfig* configs) {
	configs[ 5]+= 1458;
	configs[ 6]+=  486;
	configs[17]+=   51;
	configs[24]+= 1458;
	configs[25]+=  486;
	configs[31]+=  486;
	configs[33]+=  486;
	return 0x20400000000000;
}

u64 FlipFunctionBBWhite1625(TConfig* configs) {
	configs[23]-= 2187;
	return 0x0;
}

u64 FlipFunctionBBBlack1625(TConfig* configs) {
	configs[23]+= 2187;
	return 0x0;
}

u64 FlipFunctionBBWhite1626(TConfig* configs) {
	configs[ 6]-=  162;
	configs[16]-=   54;
	configs[23]-= 3645;
	configs[34]-=  162;
	return 0x10000000000000;
}

u64 FlipFunctionBBBlack1626(TConfig* configs) {
	configs[ 6]+=  162;
	configs[16]+=   54;
	configs[23]+= 3645;
	configs[34]+=  162;
	return 0x10000000000000;
}

u64 FlipFunctionBBWhite1627(TConfig* configs) {
	configs[ 5]-=  162;
	configs[ 6]-=  162;
	configs[15]-=   54;
	configs[16]-=   54;
	configs[23]-= 4131;
	configs[33]-=  162;
	configs[34]-=  162;
	return 0x10100000000000;
}

u64 FlipFunctionBBBlack1627(TConfig* configs) {
	configs[ 5]+=  162;
	configs[ 6]+=  162;
	configs[15]+=   54;
	configs[16]+=   54;
	configs[23]+= 4131;
	configs[33]+=  162;
	configs[34]+=  162;
	return 0x10100000000000;
}

u64 FlipFunctionBBWhite1628(TConfig* configs) {
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
	return 0x10101000000000;
}

u64 FlipFunctionBBBlack1628(TConfig* configs) {
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
	return 0x10101000000000;
}

u64 FlipFunctionBBWhite1629(TConfig* configs) {
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
	return 0x10101010000000;
}

u64 FlipFunctionBBBlack1629(TConfig* configs) {
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
	return 0x10101010000000;
}

u64 FlipFunctionBBWhite1630(TConfig* configs) {
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
	return 0x10101010100000;
}

u64 FlipFunctionBBBlack1630(TConfig* configs) {
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
	return 0x10101010100000;
}

u64 FlipFunctionBBWhite1631(TConfig* configs) {
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
	return 0x10101010101000;
}

u64 FlipFunctionBBBlack1631(TConfig* configs) {
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
	return 0x10101010101000;
}

u64 FlipFunctionBBWhite1632(TConfig* configs) {
	configs[35]-=   81;
	return 0x0;
}

u64 FlipFunctionBBBlack1632(TConfig* configs) {
	configs[35]+=   81;
	return 0x0;
}

u64 FlipFunctionBBWhite1633(TConfig* configs) {
	configs[ 6]-=   54;
	configs[15]-=  162;
	configs[22]-= 1458;
	configs[35]-=  135;
	return 0x8000000000000;
}

u64 FlipFunctionBBBlack1633(TConfig* configs) {
	configs[ 6]+=   54;
	configs[15]+=  162;
	configs[22]+= 1458;
	configs[35]+=  135;
	return 0x8000000000000;
}

u64 FlipFunctionBBWhite1634(TConfig* configs) {
	configs[ 5]-=   18;
	configs[ 6]-=   54;
	configs[13]-=  486;
	configs[15]-=  162;
	configs[21]-=  486;
	configs[22]-= 1458;
	configs[35]-=  153;
	return 0x8040000000000;
}

u64 FlipFunctionBBBlack1634(TConfig* configs) {
	configs[ 5]+=   18;
	configs[ 6]+=   54;
	configs[13]+=  486;
	configs[15]+=  162;
	configs[21]+=  486;
	configs[22]+= 1458;
	configs[35]+=  153;
	return 0x8040000000000;
}

u64 FlipFunctionBBWhite1635(TConfig* configs) {
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
	return 0x8040200000000;
}

u64 FlipFunctionBBBlack1635(TConfig* configs) {
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
	return 0x8040200000000;
}

u64 FlipFunctionBBWhite1636(TConfig* configs) {
	configs[ 7]-=  243;
	return 0x2000000000000000;
}

u64 FlipFunctionBBBlack1636(TConfig* configs) {
	configs[ 7]+=  243;
	return 0x2000000000000000;
}

u64 FlipFunctionBBWhite1637(TConfig* configs) {
	configs[ 7]-= 1701;
	configs[25]-= 4374;
	configs[33]-= 1458;
	return 0x6000000000000000;
}

u64 FlipFunctionBBBlack1637(TConfig* configs) {
	configs[ 7]+= 1701;
	configs[25]+= 4374;
	configs[33]+= 1458;
	return 0x6000000000000000;
}

u64 FlipFunctionBBWhite1638(TConfig* configs) {
	configs[ 7]-=  405;
	configs[17]-=   54;
	configs[23]-= 4374;
	configs[35]-=  162;
	return 0x3000000000000000;
}

u64 FlipFunctionBBBlack1638(TConfig* configs) {
	configs[ 7]+=  405;
	configs[17]+=   54;
	configs[23]+= 4374;
	configs[35]+=  162;
	return 0x3000000000000000;
}

u64 FlipFunctionBBWhite1639(TConfig* configs) {
	configs[ 7]-= 1863;
	configs[17]-=   54;
	configs[23]-= 4374;
	configs[25]-= 4374;
	configs[33]-= 1458;
	configs[35]-=  162;
	return 0x7000000000000000;
}

u64 FlipFunctionBBBlack1639(TConfig* configs) {
	configs[ 7]+= 1863;
	configs[17]+=   54;
	configs[23]+= 4374;
	configs[25]+= 4374;
	configs[33]+= 1458;
	configs[35]+=  162;
	return 0x7000000000000000;
}

u64 FlipFunctionBBWhite1640(TConfig* configs) {
	configs[ 7]-=  459;
	configs[16]-=  162;
	configs[17]-=   54;
	configs[22]-= 4374;
	configs[23]-= 4374;
	configs[35]-=  162;
	configs[36]-=   54;
	return 0x3800000000000000;
}

u64 FlipFunctionBBBlack1640(TConfig* configs) {
	configs[ 7]+=  459;
	configs[16]+=  162;
	configs[17]+=   54;
	configs[22]+= 4374;
	configs[23]+= 4374;
	configs[35]+=  162;
	configs[36]+=   54;
	return 0x3800000000000000;
}

u64 FlipFunctionBBWhite1641(TConfig* configs) {
	configs[ 7]-= 1917;
	configs[16]-=  162;
	configs[17]-=   54;
	configs[22]-= 4374;
	configs[23]-= 4374;
	configs[25]-= 4374;
	configs[33]-= 1458;
	configs[35]-=  162;
	configs[36]-=   54;
	return 0x7800000000000000;
}

u64 FlipFunctionBBBlack1641(TConfig* configs) {
	configs[ 7]+= 1917;
	configs[16]+=  162;
	configs[17]+=   54;
	configs[22]+= 4374;
	configs[23]+= 4374;
	configs[25]+= 4374;
	configs[33]+= 1458;
	configs[35]+=  162;
	configs[36]+=   54;
	return 0x7800000000000000;
}

u64 FlipFunctionBBWhite1642(TConfig* configs) {
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
	return 0x3c00000000000000;
}

u64 FlipFunctionBBBlack1642(TConfig* configs) {
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
	return 0x3c00000000000000;
}

u64 FlipFunctionBBWhite1643(TConfig* configs) {
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
	return 0x7c00000000000000;
}

u64 FlipFunctionBBBlack1643(TConfig* configs) {
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
	return 0x7c00000000000000;
}

u64 FlipFunctionBBWhite1644(TConfig* configs) {
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
	return 0x3e00000000000000;
}

u64 FlipFunctionBBBlack1644(TConfig* configs) {
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
	return 0x3e00000000000000;
}

u64 FlipFunctionBBWhite1645(TConfig* configs) {
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
	return 0x7e00000000000000;
}

u64 FlipFunctionBBBlack1645(TConfig* configs) {
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
	return 0x7e00000000000000;
}

u64 FlipFunctionBBWhite1646(TConfig* configs) {
	configs[18]-=    9;
	return 0x0;
}

u64 FlipFunctionBBBlack1646(TConfig* configs) {
	configs[18]+=    9;
	return 0x0;
}

u64 FlipFunctionBBWhite1647(TConfig* configs) {
	configs[ 6]-= 1458;
	configs[18]-=   15;
	configs[25]-= 1458;
	configs[32]-= 1458;
	return 0x40000000000000;
}

u64 FlipFunctionBBBlack1647(TConfig* configs) {
	configs[ 6]+= 1458;
	configs[18]+=   15;
	configs[25]+= 1458;
	configs[32]+= 1458;
	return 0x40000000000000;
}

u64 FlipFunctionBBWhite1648(TConfig* configs) {
	configs[24]-= 2187;
	return 0x0;
}

u64 FlipFunctionBBBlack1648(TConfig* configs) {
	configs[24]+= 2187;
	return 0x0;
}

u64 FlipFunctionBBWhite1649(TConfig* configs) {
	configs[ 6]-=  486;
	configs[17]-=   18;
	configs[24]-= 3645;
	configs[33]-=  486;
	return 0x20000000000000;
}

u64 FlipFunctionBBBlack1649(TConfig* configs) {
	configs[ 6]+=  486;
	configs[17]+=   18;
	configs[24]+= 3645;
	configs[33]+=  486;
	return 0x20000000000000;
}

u64 FlipFunctionBBWhite1650(TConfig* configs) {
	configs[ 5]-=  486;
	configs[ 6]-=  486;
	configs[16]-=   18;
	configs[17]-=   18;
	configs[24]-= 4131;
	configs[32]-=  486;
	configs[33]-=  486;
	return 0x20200000000000;
}

u64 FlipFunctionBBBlack1650(TConfig* configs) {
	configs[ 5]+=  486;
	configs[ 6]+=  486;
	configs[16]+=   18;
	configs[17]+=   18;
	configs[24]+= 4131;
	configs[32]+=  486;
	configs[33]+=  486;
	return 0x20200000000000;
}

u64 FlipFunctionBBWhite1651(TConfig* configs) {
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
	return 0x20202000000000;
}

u64 FlipFunctionBBBlack1651(TConfig* configs) {
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
	return 0x20202000000000;
}

u64 FlipFunctionBBWhite1652(TConfig* configs) {
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
	return 0x20202020000000;
}

u64 FlipFunctionBBBlack1652(TConfig* configs) {
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
	return 0x20202020000000;
}

u64 FlipFunctionBBWhite1653(TConfig* configs) {
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
	return 0x20202020200000;
}

u64 FlipFunctionBBBlack1653(TConfig* configs) {
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
	return 0x20202020200000;
}

u64 FlipFunctionBBWhite1654(TConfig* configs) {
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
	return 0x20202020202000;
}

u64 FlipFunctionBBBlack1654(TConfig* configs) {
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
	return 0x20202020202000;
}

u64 FlipFunctionBBWhite1655(TConfig* configs) {
	configs[34]-=  243;
	return 0x0;
}

u64 FlipFunctionBBBlack1655(TConfig* configs) {
	configs[34]+=  243;
	return 0x0;
}

u64 FlipFunctionBBWhite1656(TConfig* configs) {
	configs[ 6]-=  162;
	configs[16]-=   54;
	configs[23]-= 1458;
	configs[34]-=  405;
	return 0x10000000000000;
}

u64 FlipFunctionBBBlack1656(TConfig* configs) {
	configs[ 6]+=  162;
	configs[16]+=   54;
	configs[23]+= 1458;
	configs[34]+=  405;
	return 0x10000000000000;
}

u64 FlipFunctionBBWhite1657(TConfig* configs) {
	configs[ 5]-=   54;
	configs[ 6]-=  162;
	configs[14]-=  162;
	configs[16]-=   54;
	configs[22]-=  486;
	configs[23]-= 1458;
	configs[34]-=  459;
	return 0x10080000000000;
}

u64 FlipFunctionBBBlack1657(TConfig* configs) {
	configs[ 5]+=   54;
	configs[ 6]+=  162;
	configs[14]+=  162;
	configs[16]+=   54;
	configs[22]+=  486;
	configs[23]+= 1458;
	configs[34]+=  459;
	return 0x10080000000000;
}

u64 FlipFunctionBBWhite1658(TConfig* configs) {
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
	return 0x10080400000000;
}

u64 FlipFunctionBBBlack1658(TConfig* configs) {
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
	return 0x10080400000000;
}

u64 FlipFunctionBBWhite1659(TConfig* configs) {
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
	return 0x10080402000000;
}

u64 FlipFunctionBBBlack1659(TConfig* configs) {
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
	return 0x10080402000000;
}

u64 FlipFunctionBBWhite1660(TConfig* configs) {
	configs[ 7]-=  729;
	return 0x4000000000000000;
}

u64 FlipFunctionBBBlack1660(TConfig* configs) {
	configs[ 7]+=  729;
	return 0x4000000000000000;
}

u64 FlipFunctionBBWhite1661(TConfig* configs) {
	configs[ 7]-= 1215;
	configs[18]-=   18;
	configs[24]-= 4374;
	configs[34]-=  486;
	return 0x6000000000000000;
}

u64 FlipFunctionBBBlack1661(TConfig* configs) {
	configs[ 7]+= 1215;
	configs[18]+=   18;
	configs[24]+= 4374;
	configs[34]+=  486;
	return 0x6000000000000000;
}

u64 FlipFunctionBBWhite1662(TConfig* configs) {
	configs[ 7]-= 1377;
	configs[17]-=   54;
	configs[18]-=   18;
	configs[23]-= 4374;
	configs[24]-= 4374;
	configs[34]-=  486;
	configs[35]-=  162;
	return 0x7000000000000000;
}

u64 FlipFunctionBBBlack1662(TConfig* configs) {
	configs[ 7]+= 1377;
	configs[17]+=   54;
	configs[18]+=   18;
	configs[23]+= 4374;
	configs[24]+= 4374;
	configs[34]+=  486;
	configs[35]+=  162;
	return 0x7000000000000000;
}

u64 FlipFunctionBBWhite1663(TConfig* configs) {
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
	return 0x7800000000000000;
}

u64 FlipFunctionBBBlack1663(TConfig* configs) {
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
	return 0x7800000000000000;
}

u64 FlipFunctionBBWhite1664(TConfig* configs) {
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
	return 0x7c00000000000000;
}

u64 FlipFunctionBBBlack1664(TConfig* configs) {
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
	return 0x7c00000000000000;
}

u64 FlipFunctionBBWhite1665(TConfig* configs) {
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
	return 0x7e00000000000000;
}

u64 FlipFunctionBBBlack1665(TConfig* configs) {
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
	return 0x7e00000000000000;
}

u64 FlipFunctionBBWhite1666(TConfig* configs) {
	configs[25]-= 2187;
	return 0x0;
}

u64 FlipFunctionBBBlack1666(TConfig* configs) {
	configs[25]+= 2187;
	return 0x0;
}

u64 FlipFunctionBBWhite1667(TConfig* configs) {
	configs[ 6]-= 1458;
	configs[18]-=    6;
	configs[25]-= 3645;
	configs[32]-= 1458;
	return 0x40000000000000;
}

u64 FlipFunctionBBBlack1667(TConfig* configs) {
	configs[ 6]+= 1458;
	configs[18]+=    6;
	configs[25]+= 3645;
	configs[32]+= 1458;
	return 0x40000000000000;
}

u64 FlipFunctionBBWhite1668(TConfig* configs) {
	configs[ 5]-= 1458;
	configs[ 6]-= 1458;
	configs[17]-=    6;
	configs[18]-=    6;
	configs[25]-= 4131;
	configs[31]-=  486;
	configs[32]-= 1458;
	return 0x40400000000000;
}

u64 FlipFunctionBBBlack1668(TConfig* configs) {
	configs[ 5]+= 1458;
	configs[ 6]+= 1458;
	configs[17]+=    6;
	configs[18]+=    6;
	configs[25]+= 4131;
	configs[31]+=  486;
	configs[32]+= 1458;
	return 0x40400000000000;
}

u64 FlipFunctionBBWhite1669(TConfig* configs) {
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
	return 0x40404000000000;
}

u64 FlipFunctionBBBlack1669(TConfig* configs) {
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
	return 0x40404000000000;
}

u64 FlipFunctionBBWhite1670(TConfig* configs) {
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
	return 0x40404040000000;
}

u64 FlipFunctionBBBlack1670(TConfig* configs) {
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
	return 0x40404040000000;
}

u64 FlipFunctionBBWhite1671(TConfig* configs) {
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
	return 0x40404040400000;
}

u64 FlipFunctionBBBlack1671(TConfig* configs) {
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
	return 0x40404040400000;
}

u64 FlipFunctionBBWhite1672(TConfig* configs) {
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
	return 0x40404040404000;
}

u64 FlipFunctionBBBlack1672(TConfig* configs) {
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
	return 0x40404040404000;
}

u64 FlipFunctionBBWhite1673(TConfig* configs) {
	configs[33]-=  729;
	return 0x0;
}

u64 FlipFunctionBBBlack1673(TConfig* configs) {
	configs[33]+=  729;
	return 0x0;
}

u64 FlipFunctionBBWhite1674(TConfig* configs) {
	configs[ 6]-=  486;
	configs[17]-=   18;
	configs[24]-= 1458;
	configs[33]-= 1215;
	return 0x20000000000000;
}

u64 FlipFunctionBBBlack1674(TConfig* configs) {
	configs[ 6]+=  486;
	configs[17]+=   18;
	configs[24]+= 1458;
	configs[33]+= 1215;
	return 0x20000000000000;
}

u64 FlipFunctionBBWhite1675(TConfig* configs) {
	configs[ 5]-=  162;
	configs[ 6]-=  486;
	configs[15]-=   54;
	configs[17]-=   18;
	configs[23]-=  486;
	configs[24]-= 1458;
	configs[33]-= 1377;
	return 0x20100000000000;
}

u64 FlipFunctionBBBlack1675(TConfig* configs) {
	configs[ 5]+=  162;
	configs[ 6]+=  486;
	configs[15]+=   54;
	configs[17]+=   18;
	configs[23]+=  486;
	configs[24]+= 1458;
	configs[33]+= 1377;
	return 0x20100000000000;
}

u64 FlipFunctionBBWhite1676(TConfig* configs) {
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
	return 0x20100800000000;
}

u64 FlipFunctionBBBlack1676(TConfig* configs) {
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
	return 0x20100800000000;
}

u64 FlipFunctionBBWhite1677(TConfig* configs) {
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
	return 0x20100804000000;
}

u64 FlipFunctionBBBlack1677(TConfig* configs) {
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
	return 0x20100804000000;
}

u64 FlipFunctionBBWhite1678(TConfig* configs) {
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
	return 0x20100804020000;
}

u64 FlipFunctionBBBlack1678(TConfig* configs) {
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
	return 0x20100804020000;
}

u64 FlipFunctionBBWhite1679(TConfig* configs) {
	configs[ 7]-= 2187;
	return 0x8000000000000000;
}

u64 FlipFunctionBBBlack1679(TConfig* configs) {
	configs[ 7]+= 2187;
	return 0x8000000000000000;
}

u64 FlipFunctionBBWhite1680(TConfig* configs) {
	configs[ 7]-= 3645;
	configs[25]-= 4374;
	configs[33]-= 1458;
	return 0xc000000000000000;
}

u64 FlipFunctionBBBlack1680(TConfig* configs) {
	configs[ 7]+= 3645;
	configs[25]+= 4374;
	configs[33]+= 1458;
	return 0xc000000000000000;
}

u64 FlipFunctionBBWhite1681(TConfig* configs) {
	configs[ 7]-= 4131;
	configs[18]-=   18;
	configs[24]-= 4374;
	configs[25]-= 4374;
	configs[33]-= 1458;
	configs[34]-=  486;
	return 0xe000000000000000;
}

u64 FlipFunctionBBBlack1681(TConfig* configs) {
	configs[ 7]+= 4131;
	configs[18]+=   18;
	configs[24]+= 4374;
	configs[25]+= 4374;
	configs[33]+= 1458;
	configs[34]+=  486;
	return 0xe000000000000000;
}

u64 FlipFunctionBBWhite1682(TConfig* configs) {
	configs[ 7]-= 4293;
	configs[17]-=   54;
	configs[18]-=   18;
	configs[23]-= 4374;
	configs[24]-= 4374;
	configs[25]-= 4374;
	configs[33]-= 1458;
	configs[34]-=  486;
	configs[35]-=  162;
	return 0xf000000000000000;
}

u64 FlipFunctionBBBlack1682(TConfig* configs) {
	configs[ 7]+= 4293;
	configs[17]+=   54;
	configs[18]+=   18;
	configs[23]+= 4374;
	configs[24]+= 4374;
	configs[25]+= 4374;
	configs[33]+= 1458;
	configs[34]+=  486;
	configs[35]+=  162;
	return 0xf000000000000000;
}

u64 FlipFunctionBBWhite1683(TConfig* configs) {
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
	return 0xf800000000000000;
}

u64 FlipFunctionBBBlack1683(TConfig* configs) {
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
	return 0xf800000000000000;
}

u64 FlipFunctionBBWhite1684(TConfig* configs) {
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
	return 0xfc00000000000000;
}

u64 FlipFunctionBBBlack1684(TConfig* configs) {
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
	return 0xfc00000000000000;
}

u64 FlipFunctionBBWhite1685(TConfig* configs) {
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
	return 0xfe00000000000000;
}

u64 FlipFunctionBBBlack1685(TConfig* configs) {
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
	return 0xfe00000000000000;
}

u64 FlipFunctionBBWhite1686(TConfig* configs) {
	configs[26]-= 2187;
	return 0x0;
}

u64 FlipFunctionBBBlack1686(TConfig* configs) {
	configs[26]+= 2187;
	return 0x0;
}

u64 FlipFunctionBBWhite1687(TConfig* configs) {
	configs[ 6]-= 4374;
	configs[26]-= 3645;
	configs[31]-= 1458;
	return 0x80000000000000;
}

u64 FlipFunctionBBBlack1687(TConfig* configs) {
	configs[ 6]+= 4374;
	configs[26]+= 3645;
	configs[31]+= 1458;
	return 0x80000000000000;
}

u64 FlipFunctionBBWhite1688(TConfig* configs) {
	configs[ 5]-= 4374;
	configs[ 6]-= 4374;
	configs[18]-=    2;
	configs[26]-= 4131;
	configs[30]-=  486;
	configs[31]-= 1458;
	return 0x80800000000000;
}

u64 FlipFunctionBBBlack1688(TConfig* configs) {
	configs[ 5]+= 4374;
	configs[ 6]+= 4374;
	configs[18]+=    2;
	configs[26]+= 4131;
	configs[30]+=  486;
	configs[31]+= 1458;
	return 0x80800000000000;
}

u64 FlipFunctionBBWhite1689(TConfig* configs) {
	configs[ 4]-= 4374;
	configs[ 5]-= 4374;
	configs[ 6]-= 4374;
	configs[17]-=    2;
	configs[18]-=    2;
	configs[26]-= 4293;
	configs[29]-=  162;
	configs[30]-=  486;
	configs[31]-= 1458;
	return 0x80808000000000;
}

u64 FlipFunctionBBBlack1689(TConfig* configs) {
	configs[ 4]+= 4374;
	configs[ 5]+= 4374;
	configs[ 6]+= 4374;
	configs[17]+=    2;
	configs[18]+=    2;
	configs[26]+= 4293;
	configs[29]+=  162;
	configs[30]+=  486;
	configs[31]+= 1458;
	return 0x80808000000000;
}

u64 FlipFunctionBBWhite1690(TConfig* configs) {
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
	return 0x80808080000000;
}

u64 FlipFunctionBBBlack1690(TConfig* configs) {
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
	return 0x80808080000000;
}

u64 FlipFunctionBBWhite1691(TConfig* configs) {
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
	return 0x80808080800000;
}

u64 FlipFunctionBBBlack1691(TConfig* configs) {
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
	return 0x80808080800000;
}

u64 FlipFunctionBBWhite1692(TConfig* configs) {
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
	return 0x80808080808000;
}

u64 FlipFunctionBBBlack1692(TConfig* configs) {
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
	return 0x80808080808000;
}

u64 FlipFunctionBBWhite1693(TConfig* configs) {
	configs[32]-= 2187;
	return 0x0;
}

u64 FlipFunctionBBBlack1693(TConfig* configs) {
	configs[32]+= 2187;
	return 0x0;
}

u64 FlipFunctionBBWhite1694(TConfig* configs) {
	configs[ 6]-= 1458;
	configs[18]-=    6;
	configs[25]-= 1458;
	configs[32]-= 3645;
	return 0x40000000000000;
}

u64 FlipFunctionBBBlack1694(TConfig* configs) {
	configs[ 6]+= 1458;
	configs[18]+=    6;
	configs[25]+= 1458;
	configs[32]+= 3645;
	return 0x40000000000000;
}

u64 FlipFunctionBBWhite1695(TConfig* configs) {
	configs[ 5]-=  486;
	configs[ 6]-= 1458;
	configs[16]-=   18;
	configs[18]-=    6;
	configs[24]-=  486;
	configs[25]-= 1458;
	configs[32]-= 4131;
	return 0x40200000000000;
}

u64 FlipFunctionBBBlack1695(TConfig* configs) {
	configs[ 5]+=  486;
	configs[ 6]+= 1458;
	configs[16]+=   18;
	configs[18]+=    6;
	configs[24]+=  486;
	configs[25]+= 1458;
	configs[32]+= 4131;
	return 0x40200000000000;
}

u64 FlipFunctionBBWhite1696(TConfig* configs) {
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
	return 0x40201000000000;
}

u64 FlipFunctionBBBlack1696(TConfig* configs) {
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
	return 0x40201000000000;
}

u64 FlipFunctionBBWhite1697(TConfig* configs) {
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
	return 0x40201008000000;
}

u64 FlipFunctionBBBlack1697(TConfig* configs) {
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
	return 0x40201008000000;
}

u64 FlipFunctionBBWhite1698(TConfig* configs) {
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
	return 0x40201008040000;
}

u64 FlipFunctionBBBlack1698(TConfig* configs) {
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
	return 0x40201008040000;
}

u64 FlipFunctionBBWhite1699(TConfig* configs) {
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
	return 0x40201008040200;
}

u64 FlipFunctionBBBlack1699(TConfig* configs) {
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
	return 0x40201008040200;
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

