add_library(minus minus.cpp)

target_link_libraries(minus PRIVATE common)
target_include_directories(minus INTERFACE ./)