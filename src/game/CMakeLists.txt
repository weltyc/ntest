file(GLOB HEADER_FILES *.h)
add_library(game Game.cpp Player.cpp PlayerHuman.cpp ${HEADER_FILES})