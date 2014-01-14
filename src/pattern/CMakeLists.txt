file(GLOB HEADER_FILES *.h)
add_library(patterns STATIC FastFlip.cpp FastFlipTables.cpp flipFunc64.cpp Pattern.cpp Patterns.cpp ${HEADER_FILES})
