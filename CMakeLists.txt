cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDART 17)
set(CMAKE_CXX_STANDART_REQUIRED_ON)
set(CXX_COMPILER g++)

project(linuxtester VERSION 1.0)

file(GLOB_RECURSE SRC_FILES src/*.cxx)
add_executable(run ${SRC_FILES})
target_include_directories(run PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
