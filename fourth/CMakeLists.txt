add_subdirectory(helpers)

include_directories(./bin)

add_executable(fourth main.cpp)
target_link_libraries(fourth C:/Dev/Lean_Cpp/fourth/bin/helpers_shared.lib)