add_library(sum STATIC sum.cpp)

target_link_libraries(sum PRIVATE common)
target_include_directories(sum INTERFACE ./)