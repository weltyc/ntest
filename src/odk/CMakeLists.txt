file(GLOB HEADER_FILES *.h)
add_library(odk STATIC GetMove.cpp GGSMessage.cpp GGSObjects.cpp ggsstream.cpp ODKStream.cpp OsMessage.cpp OsObjects.cpp OsObjectsTest.cpp sockbuf.cpp ${HEADER_FILES})
