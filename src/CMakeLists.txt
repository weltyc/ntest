cmake_minimum_required(VERSION 2.8.5)

project(ntest)

if (CMAKE_COMPILER_IS_GNUCC OR "${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang" OR "${CMAKE_CXX_COMPILER_ID}" STREQUAL "Intel")
    add_definitions(-D_M_AMD64 -m64 -msse4 -O3 -std=c++0x -g3 -Wno-unused-result -Wno-deprecated)
    set(CMAKE_CXX_LINK_FLAGS "-m64 -msse4 -O3 -std=c++0x -g3")
    if("${NTEST_MINGW_BUILD}")
        add_definitions(-static-libgcc -static-libstdc++)
        set(CMAKE_CXX_LINK_FLAGS "${CMAKE_CXX_LINK_FLAGS} -static-libgcc -static-libstdc++")
    endif()
endif()

if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang" AND NOT CMAKE_SYSTEM_NAME STREQUAL "Linux")
    add_definitions(-stdlib=libc++)
	set(CMAKE_CXX_LINK_FLAGS "${CMAKE_CXX_LINK_FLAGS} -stdlib=libc++")
endif()

if(MSVC)
	add_definitions(/D_M_AMD64 /GS- /D_CRT_SECURE_NO_WARNINGS)
	set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /Ox /GL /MT")
	set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "${CMAKE_CXX_FLAGS_RELWITHDEBINFO} /Ox /GL /MTd")
endif(MSVC)

enable_testing()

add_subdirectory(odk)
add_subdirectory(n64)
add_subdirectory(pattern)
add_subdirectory(core)
add_subdirectory(game)

file(GLOB HEADER_FILES *.h)
add_library(mainlib GameX.cpp Evaluator.cpp EvalTest.cpp MPCCalc.cpp NtestStream.cpp options.cpp PlayerComputer.cpp Pos2.cpp Pos2Test.cpp Search.cpp SearchTest.cpp SearchParams.cpp SmartBook.cpp SpeedTest.cpp treedebug.cpp ${HEADER_FILES})

add_executable(ntest main.cpp)
target_link_libraries(ntest mainlib core game patterns odk n64)
if(MSVC OR "${NTEST_MINGW_BUILD}")
    target_link_libraries(ntest wsock32)
endif()

add_executable(randomEvalGen randomEvalGen.cpp)
target_link_libraries(randomEvalGen mainlib core game patterns odk n64)

add_test(ntest_basic ntest o)

if(${UNIX})
    EXEC_PROGRAM(ln ARGS -sf "${CMAKE_SOURCE_DIR}/../resource/coefficients"
                 "${CMAKE_BINARY_DIR}")
    EXEC_PROGRAM(ln ARGS -sf "${CMAKE_SOURCE_DIR}/../resource/TestGames.ggf"
                 "${CMAKE_BINARY_DIR}")
    EXEC_PROGRAM(ln ARGS -sf "${CMAKE_SOURCE_DIR}/../resource"
                 "${CMAKE_BINARY_DIR}")
    EXEC_PROGRAM(ln ARGS -sf "${CMAKE_SOURCE_DIR}/../resource/parameters.txt"
                 "${CMAKE_BINARY_DIR}")
endif()
