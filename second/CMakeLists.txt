cmake_minimum_required(VERSION 3.20)

include_directories(../first/helpers)

file(GLOB SRCFILES "../first/helpers/*.cpp")

add_executable(second main.cpp ${SRCFILES})