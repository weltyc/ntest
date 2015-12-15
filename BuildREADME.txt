-------------
Requirements
-------------

Windows:

a) a 64 bit install of Windows.
b) Visual Studio 2013. The Express version, which requires only registration, and as of version 2013 is capable of producing 64 bit binaries, should work. Earlier versions may work but they are unsupported.
c) CMake, from http://www.cmake.org , version 2.8.12 or newer. When you install it, you may want to add its bin subdirectory to the system path. 

Linux:

a) gcc and g++, version 4.7 or newer, capable of building x86-64 (aka amd64) binaries.
b) cmake

--------
Building
--------

The quick way on Linux and Mac:

> cd ntest
> source build.sh

This will compile ntest and put all required resources in the run subdirectory.

The slow way:

Create a directory named build that parallels the src directory. From within the build directory, run cmake:

Windows:

> cmake -G "Visual Studio 12 Win64" ..\src\

Linux:

$ cmake ../src/


Within Linux, you can just run make in the same subdirectory. 

For a Windows, you can open the ntest.sln , a Visual Studio solution file, and build the solution in Release mode.

-------
Running
-------

The following are needed in the directory in which you run ntest:

parameters.txt file
TestGames.ggf file
coefficients/ subdirectory
resource/ subdirectory, just with the solver*.txt files

You can find all of them in the resources subdirectory

Then, run ntest t
(t for test mode)

If everything went well, you should see something similar to the following:


-------------------------------------------------------
$ ./ntest t
Ntest version as of Jan 12 2014
Copyright (c) Chris Welty
All Rights Reserved

Init fast flip base...Done
Init fast flip...Done
InitFastFlipPatterns...Done
Map Size: Black: 0, White: 0
Beginning standard test
64-bit compile
Creating cache with 2 buckets (0 MB)
Creating cache with 2 buckets (0 MB)
Creating cache with 2 buckets (0 MB)
Creating cache with 2 buckets (0 MB)
Creating cache with 2 buckets (0 MB)
---- Heights ----
midgame : 12
100% WLD: 20
 97% WLD: 20
 91% WLD: 20
 70% WLD: 21
 60% WLD: 21
 50% WLD: 22

status Loading book
status Negamaxing book
status
Creating cache with 131072 buckets (4 MB)
Ending standard test
---- Heights ----
midgame : 12
100% WLD: 20
 97% WLD: 20
 91% WLD: 20
 70% WLD: 21
 60% WLD: 21
 50% WLD: 22

status Loading book
status Negamaxing book
status
Testing endgame from 22 empties
Height: 100%W
Creating cache with 262144 buckets (8 MB)
ssssssssssssRun complete in 12.8s; tTotal = 12.8; tAverage = 1.07
 183,355,393   12.814s = 14.309Mn/s ; 170,469,512i, 12,885,881e => 0.076e/i
---- Heights ----
midgame : 12
100% WLD: 20
 97% WLD: 20
 91% WLD: 20
 70% WLD: 21
 60% WLD: 21
 50% WLD: 22

status Loading book
status Negamaxing book
status
Testing midgame from 35 empties
Height:  20
Creating cache with 2097152 buckets (64 MB)
ssssssssssssRun complete in 10.754s; tTotal = 10.585; tAverage = 0.882
  38,926,633   10.754s = 3.620Mn/s ; 10,073,287i, 28,853,346e => 2.864e/i


Run completed at GMT Sun Jan 12 18:57:10 2014

 222,282,026   23.605s = 9.417Mn/s ; 180,542,799i, 41,739,227e => 0.231e/i
-------------------------------------------------------

The Windows build of ntest.exe should be a drop-in replacement for the ntest.exe in the NBoard Windows install.

