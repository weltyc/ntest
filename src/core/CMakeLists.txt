file(GLOB HEADER_FILES *.h)
add_library(core STATIC BitBoard.cpp BitBoardTest.cpp  Book.cpp BookTest.cpp Cache.cpp CalcParams.cpp HeightInfo.cpp Moves.cpp MPCStats.cpp MVK.cpp NodeStats.cpp QPosition.cpp QPositionTest.cpp Store.cpp StoreTest.cpp Ticks.cpp ${HEADER_FILES})
