cmake_minimum_required(VERSION 3.31.11)
project (Inferno VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(src src/Socket src/Router src/Pch)

file(GLOB_RECURSE SOURCES "src/*.cpp")

add_executable(inferno ${SOURCES})

target_precompile_headers(inferno PRIVATE src/Pch/pch.hpp)
