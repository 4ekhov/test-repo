cmake_minimum_required(VERSION 3.24.2)
project(testproj CXX)

add_library(CandleLib STATIC CandleLib/candle.h CandleLib/candle.cpp)

add_library(TestsLib STATIC TestsLib/tests.h TestsLib/tests.cpp)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(CandleLib PRIVATE TestsLib)

target_link_libraries(${PROJECT_NAME} PRIVATE CandleLib)

target_link_libraries(${PROJECT_NAME} PRIVATE TestsLib)
