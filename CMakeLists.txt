cmake_minimum_required(VERSION 3.23)
project(ConsoleViz_1)

set(CMAKE_CXX_STANDARD 14)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc")
set(CMAKE_EXE_LINKER_FLAGS "-static")
set(SOURCE_FILES main.cpp)
add_executable(ConsoleViz_1 main.cpp)
