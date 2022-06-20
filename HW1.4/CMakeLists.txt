project(hello)
cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pipe -std=c++11")

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

FIND_PACKAGE(HELLO REQUIRED)
IF (HELLO_FOUND)
    include_directories(${HELLO_INCLUDE_DIR})
    add_executable(sayHello useHello.cpp)
    target_link_libraries(sayHello ${HELLO_LIBRARY})
ENDIF (HELLO_FOUND)
