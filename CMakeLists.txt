cmake_minimum_required(VERSION 3.1.0)
set (CMAKE_CXX_STANDARD 11)
project(WordGuess)

#Bring the headers into the project
include_directories(headers)

file(GLOB SOURCES "sources/*.cpp")
add_executable(WordGuess ${SOURCES})
