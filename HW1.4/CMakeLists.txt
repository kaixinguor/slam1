project(hello)
cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pipe -std=c++11")

include_directories(include)

add_library(hello src/hello.cpp)
add_executable(sayHello useHello.cpp)
target_link_libraries(sayHello hello)
