cmake_minimum_required(VERSION 3.5.0)
project(Snake VERSION 0.1.0 LANGUAGES C CXX)

add_executable(Snake 
               src/main.cpp
               src/gameBoard.cpp)

target_include_directories(Snake PRIVATE ${CMAKE_SOURCE_DIR}/include)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
