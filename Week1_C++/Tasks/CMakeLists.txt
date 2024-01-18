cmake_minimum_required(VERSION 3.27)
project(Weekly_Tasks)

set(CMAKE_CXX_STANDARD ${CMAKE_STANDARD})


include_directories(src)
include_directories(libs/gtest/include)
add_executable(Weekly_Tasks src/tests.cpp)

target_link_libraries(Weekly_Tasks PRIVATE ${GTEST_DIR}/lib/libgtest.a)
target_link_libraries(Weekly_Tasks PRIVATE ${GTEST_DIR}/lib/libgtest_main.a)