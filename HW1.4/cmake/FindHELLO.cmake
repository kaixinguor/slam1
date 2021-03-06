FIND_PATH(HELLO_INCLUDE_DIR hello.h /usr/local/include)
FIND_LIBRARY(HELLO_LIBRARY NAMES hello PATH /usr/local/lib)

IF (HELLO_INCLUDE_DIR AND HELLO_LIBRARY)
    SET(HELLO_FOUND TRUE)
ENDIF (HELLO_INCLUDE_DIR AND HELLO_LIBRARY)

IF (HELLO_FOUND)
    IF (NOT HELLO_FOUND_QUIETLY)
        MESSAGE(STATUS "Found Hello: ${HELLO_LIBRARY}")
    ENDIF (NOT HELLO_FOUND_QUIETLY)
ELSE (HELLO_FOUND)
    IF (HELLO_FIND_REQUIRED)
        MESSAGE(FATAL_ERROR "Cound not find hello library")
    ENDIF (HELLO_FIND_REQUIRED)
ENDIF (HELLO_FOUND)
