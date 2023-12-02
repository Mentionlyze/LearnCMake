add_subdirectory(helpers)

add_executable(third main.cpp)
target_link_libraries(third PRIVATE helpers_static)