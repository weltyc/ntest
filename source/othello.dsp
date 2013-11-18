# Microsoft Developer Studio Project File - Name="othello" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 5.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Console Application" 0x0103

CFG=othello - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "othello.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "othello.mak" CFG="othello - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "othello - Win32 Release" (based on "Win32 (x86) Console Application")
!MESSAGE "othello - Win32 Debug" (based on "Win32 (x86) Console Application")
!MESSAGE "othello - Win32 External" (based on\
 "Win32 (x86) Console Application")
!MESSAGE 

# Begin Project
# PROP Scc_ProjName "othello"
# PROP Scc_LocalPath ".."
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "othello - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "othello_"
# PROP BASE Intermediate_Dir "othello_"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD CPP /nologo /G6 /Gr /W3 /GR /GX /O2 /I "c:\devl\GDK" /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /Zm200 /c
# ADD BASE RSC /l 0x809 /d "NDEBUG"
# ADD RSC /l 0x809 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib WS2_32.lib /nologo /subsystem:console /machine:I386
# SUBTRACT LINK32 /profile /debug

!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "othello0"
# PROP BASE Intermediate_Dir "othello0"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD CPP /nologo /W3 /GR /GX /Zi /Od /I "c:\devl\GDK" /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /Zm200 /c
# ADD BASE RSC /l 0x809 /d "_DEBUG"
# ADD RSC /l 0x809 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib WS2_32.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept

!ELSEIF  "$(CFG)" == "othello - Win32 External"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "othello_"
# PROP BASE Intermediate_Dir "othello_"
# PROP BASE Ignore_Export_Lib 0
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "External"
# PROP Intermediate_Dir "External"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /G6 /Gr /W3 /GR /GX /O2 /I "c:\devl\sirius_stl" /I "c:\devl\ofp" /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /Zm200 /c
# ADD CPP /nologo /G6 /Gr /W3 /GR /GX /O2 /I "c:\devl\GDK" /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /D "EXTERNAL" /YX /FD /Zm200 /c
# ADD BASE RSC /l 0x809 /d "NDEBUG"
# ADD RSC /l 0x809 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib WS2_32.lib /nologo /subsystem:console /machine:I386
# SUBTRACT BASE LINK32 /profile /debug
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib WS2_32.lib /nologo /subsystem:console /machine:I386
# SUBTRACT LINK32 /profile /debug

!ENDIF 

# Begin Target

# Name "othello - Win32 Release"
# Name "othello - Win32 Debug"
# Name "othello - Win32 External"
# Begin Source File

SOURCE=..\GDK\AmsObjects.cpp
# End Source File
# Begin Source File

SOURCE=.\bbm.cpp
# End Source File
# Begin Source File

SOURCE=.\BitBoard.cpp
# End Source File
# Begin Source File

SOURCE=.\BitBoard.h
# End Source File
# Begin Source File

SOURCE=.\BitBoardBlock.cpp
# End Source File
# Begin Source File

SOURCE=.\BitBoardBlock.h
# End Source File
# Begin Source File

SOURCE=.\Book.cpp
# End Source File
# Begin Source File

SOURCE=.\Book.h
# End Source File
# Begin Source File

SOURCE=.\Cache.cpp
# End Source File
# Begin Source File

SOURCE=.\Cache.h
# End Source File
# Begin Source File

SOURCE=..\GDK\CksObjects.cpp
# End Source File
# Begin Source File

SOURCE=.\Evaluator.cpp
# End Source File
# Begin Source File

SOURCE=.\Evaluator.h
# End Source File
# Begin Source File

SOURCE=.\FastFlip.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

# ADD CPP /O2 /FAs

!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

!ELSEIF  "$(CFG)" == "othello - Win32 External"

# ADD BASE CPP /O2 /FAs
# ADD CPP /O2 /FAs

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\FastFlip.h
# End Source File
# Begin Source File

SOURCE=.\FastFlipPatterns.cpp
# End Source File
# Begin Source File

SOURCE=.\FastFlipPatterns.h
# End Source File
# Begin Source File

SOURCE=.\FastFlipTables.cpp
# End Source File
# Begin Source File

SOURCE=.\FastFlipTables.h
# End Source File
# Begin Source File

SOURCE=.\flipfuncBB.cpp
# End Source File
# Begin Source File

SOURCE=.\flipfuncBB.h
# End Source File
# Begin Source File

SOURCE=.\Games.cpp
# End Source File
# Begin Source File

SOURCE=.\Games.h
# End Source File
# Begin Source File

SOURCE=..\GDK\GGSMessage.cpp
# End Source File
# Begin Source File

SOURCE=..\ODK\GGSMessage.h
# End Source File
# Begin Source File

SOURCE=..\GDK\GGSObjects.cpp
# End Source File
# Begin Source File

SOURCE=..\ODK\GGSObjects.h
# End Source File
# Begin Source File

SOURCE=..\GDK\ggsstream.cpp
# End Source File
# Begin Source File

SOURCE=..\ODK\ggsstream.h
# End Source File
# Begin Source File

SOURCE=.\main.cpp
# End Source File
# Begin Source File

SOURCE=.\main.h
# End Source File
# Begin Source File

SOURCE=.\Moves.cpp
# End Source File
# Begin Source File

SOURCE=.\Moves.h
# End Source File
# Begin Source File

SOURCE=.\MPCStats.cpp
# End Source File
# Begin Source File

SOURCE=.\MPCStats.h
# End Source File
# Begin Source File

SOURCE=.\NodeStats.cpp
# End Source File
# Begin Source File

SOURCE=.\NodeStats.h
# End Source File
# Begin Source File

SOURCE=.\ODKStream.cpp
# End Source File
# Begin Source File

SOURCE=.\ODKStream.h
# End Source File
# Begin Source File

SOURCE=.\off.cpp
# End Source File
# Begin Source File

SOURCE=.\off.h
# End Source File
# Begin Source File

SOURCE=.\off_dualuse.cpp
# End Source File
# Begin Source File

SOURCE=.\options.cpp
# End Source File
# Begin Source File

SOURCE=.\options.h
# End Source File
# Begin Source File

SOURCE=..\ODK\OsMessage.h
# End Source File
# Begin Source File

SOURCE=..\GDK\OsObjects.cpp
# End Source File
# Begin Source File

SOURCE=..\GDK\OsObjects.h
# End Source File
# Begin Source File

SOURCE=.\parameters.txt
# End Source File
# Begin Source File

SOURCE=.\Patterns.cpp
# End Source File
# Begin Source File

SOURCE=.\Patterns.h
# End Source File
# Begin Source File

SOURCE=.\Player.cpp
# End Source File
# Begin Source File

SOURCE=.\Player.h
# End Source File
# Begin Source File

SOURCE=.\Pos2.cpp
# End Source File
# Begin Source File

SOURCE=.\Pos2.h
# End Source File
# Begin Source File

SOURCE=.\Pos2All.h
# End Source File
# Begin Source File

SOURCE=.\Pos2Helpers.cpp
# End Source File
# Begin Source File

SOURCE=.\Pos2Helpers.h
# End Source File
# Begin Source File

SOURCE=.\Pos2HelpersInline.h
# End Source File
# Begin Source File

SOURCE=.\Pos2Inlines.h
# End Source File
# Begin Source File

SOURCE=.\Pos2Internal.h
# End Source File
# Begin Source File

SOURCE=.\QPosition.cpp
# End Source File
# Begin Source File

SOURCE=.\QPosition.h
# End Source File
# Begin Source File

SOURCE=..\GDK\SGBase.cpp
# End Source File
# Begin Source File

SOURCE=..\GDK\SGMessages.cpp
# End Source File
# Begin Source File

SOURCE=..\GDK\SGObjects.cpp
# End Source File
# Begin Source File

SOURCE=..\GDK\SGObjects.h
# End Source File
# Begin Source File

SOURCE=..\GDK\sockbuf.cpp
# End Source File
# Begin Source File

SOURCE=..\ODK\sockbuf.h
# End Source File
# Begin Source File

SOURCE=.\stabn.cpp
# End Source File
# Begin Source File

SOURCE=.\stabn.h
# End Source File
# Begin Source File

SOURCE=.\SV.CPP
# End Source File
# Begin Source File

SOURCE=.\SV.H
# End Source File
# Begin Source File

SOURCE=.\Test.cpp
# End Source File
# Begin Source File

SOURCE=.\Test.h
# End Source File
# Begin Source File

SOURCE=.\Ticks.cpp
# End Source File
# Begin Source File

SOURCE=.\Timing.cpp
# End Source File
# Begin Source File

SOURCE=.\Timing.h
# End Source File
# Begin Source File

SOURCE=.\treedebug.cpp
# End Source File
# Begin Source File

SOURCE=.\TreeDebug.h
# End Source File
# Begin Source File

SOURCE=.\Utils.cpp
# End Source File
# Begin Source File

SOURCE=.\Utils.h
# End Source File
# End Target
# End Project
