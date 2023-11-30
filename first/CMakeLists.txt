cmake_minimum_required(VERSION 3.20)

include_directories(helpers)

file(GLOB_RECURSE SRCFILES "*.cpp")
file(GLOB_RECURSE HEADERFILES "*.hpp")

add_executable(first ${SRCFILES} ${HEADERFILES})