project(hello)
cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pipe -std=c++11")

find_package(GLOG REQUIRED)
if (GLOG_FOUND)
    MESSAGE(STATUS ${GLOG_INCLUDE_DIR})
else (GLOG_FOUND)
    MESSAGE (FATAL_ERROR "glog not found")
endif (GLOG_FOUND)

include_directories(include
                    ${GLOG_INCLUDE_DIR})

add_library(hello SHARED src/hello.cpp)
add_executable(sayHello useHello.cpp)
target_link_libraries(sayHello hello glog gflags gtest)

#set(CMAKE_INSTALL_PREFIX /usr/local)
#install(TARGETS hello
#        LIBRARY DESTINATION lib
#        ARCHIVE DESTINATION lib)
#install(FILES include/hello.h DESTINATION include)
