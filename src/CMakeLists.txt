cmake_minimum_required(VERSION 2.8.5)

project(ntest)

if (CMAKE_COMPILER_IS_GNUCC OR "${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    set(Boost_USE_STATIC_LIBS ON)
    add_definitions(-D_M_AMD64 -m64 -msse4 -O3 -std=0x -g3 -Wno-unused-result -Wno-deprecated)
    set(CMAKE_CXX_LINK_FLAGS "-m64 -msse4 -O3 -std=0x -g3")
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
if(MSVC)
    target_link_libraries(ntest WSock32)
endif(MSVC)

add_executable(randomEvalGen randomEvalGen.cpp)
target_link_libraries(randomEvalGen mainlib core game patterns odk n64)
if (CMAKE_COMPILER_IS_GNUCC OR "${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    target_link_libraries(randomEvalGen ${Boost_LIBRARIES})
endif()

add_test(ntest_basic ntest o)

if (CMAKE_COMPILER_IS_GNUCC OR "${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    target_link_libraries(ntest ${Boost_LIBRARIES})
endif()
