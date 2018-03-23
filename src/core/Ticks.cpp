// Copyright Chris Welty
//  All Rights Reserved
// This file is distributed subject to GNU GPL version 3. See the files
// GPLv3.txt and License.txt in the instructions subdirectory for details.

//////////////////////////////////////////////////////
// portable time measuring functions
// code added by Richard Delorme
//////////////////////////////////////////////////////


#include "Ticks.h"

#if defined(_WIN32)
#include <windows.h>

i8 GetTicks(void) {
    LARGE_INTEGER ticks;
    QueryPerformanceCounter(&ticks);
    return (i8)(ticks.QuadPart);
}

i8 GetTicksPerSecond(void) {
    LARGE_INTEGER ticks;
    QueryPerformanceFrequency(&ticks);
    return (i8)(ticks.QuadPart);
}

#else

#include <sys/time.h>
#include <sys/resource.h>
#include <fcntl.h>
#include <unistd.h>

i8 GetTicks(void) {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return (i8) 1000000 * tv.tv_sec + tv.tv_usec;
}

i8 GetTicksPerSecond(void) {
    return (i8) 1000000;
}

#endif // _WIN32
