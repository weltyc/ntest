file(GLOB HEADER_FILES *.h)
add_library(patterns STATIC FastFlip.cpp Patterns.cpp ${HEADER_FILES})
