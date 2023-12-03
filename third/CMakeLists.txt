add_subdirectory(helpers)

find_package(fmt CONFIG REQUIRED)

add_executable(third main.cpp)
target_link_libraries(third PRIVATE helpers_static)