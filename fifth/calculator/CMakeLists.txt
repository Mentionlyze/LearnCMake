add_library(calculator calculator.cpp)

target_link_libraries(calculator PRIVATE sum minus)

target_include_directories(calculator INTERFACE ./)