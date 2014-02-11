file(GLOB HEADER_FILES *.h)
add_library(n64 STATIC endgameSearch.cpp endgameSearchTest.cpp flips.cpp flipsTest.cpp hash.cpp hashTest.cpp lastFlipCountGenerator.cpp lastFlipCountGeneratorTest.cpp magic.cpp magics.cpp n64.cpp randomPlayTest.cpp solve.cpp solveTest.cpp stdafx.cpp test.cpp utils.cpp utilsTest.cpp bitExtractTest.cpp ${HEADER_FILES})

add_executable(bitExtractTest bitExtractTestMain.cpp)
target_link_libraries(bitExtractTest n64)

add_executable(randomPlayTest randomPlayMain.cpp)
target_link_libraries(randomPlayTest n64)
target_link_libraries(randomPlayTest core)
target_link_libraries(randomPlayTest odk)

add_test(bitExtract bitExtractTest)
add_test(randomTest randomPlayTest)
