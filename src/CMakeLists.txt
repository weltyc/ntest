cmake_minimum_required(VERSION 2.8.5)

project(ntest)

if(CMAKE_COMPILER_IS_GNUCC)
    set(Boost_USE_STATIC_LIBS ON)
    find_package(Boost REQUIRED system thread)
    add_definitions(-D_M_AMD64 -m64 -msse4 -O3 -flto -g -Wno-unused-result -Wno-deprecated)
    set(CMAKE_CXX_LINK_FLAGS "-m64 -msse4 -O3 -flto -g")
endif(CMAKE_COMPILER_IS_GNUCC)

if(MSVC)
	add_definitions(/D_M_AMD64 /Ox /GS- /D_CRT_SECURE_NO_WARNINGS /GL)
endif(MSVC)

add_subdirectory(odk)
add_subdirectory(n64)
add_subdirectory(pattern)
add_subdirectory(core)
add_subdirectory(game)

add_executable(ntest GameX.cpp Evaluator.cpp main.cpp MPCCalc.cpp NtestStream.cpp options.cpp PlayerComputer.cpp Pos2.cpp Pos2Test.cpp Search.cpp SearchTest.cpp SearchParams.cpp SmartBook.cpp SpeedTest.cpp treedebug.cpp)
target_link_libraries(ntest core)
target_link_libraries(ntest game)
target_link_libraries(ntest patterns)
target_link_libraries(ntest odk)
target_link_libraries(ntest n64)
if(MSVC)
    target_link_libraries(ntest WSock32)
endif(MSVC)

if(CMAKE_COMPILER_IS_GNUCC)
    target_link_libraries(ntest ${Boost_LIBRARIES})
endif(CMAKE_COMPILER_IS_GNUCC)
