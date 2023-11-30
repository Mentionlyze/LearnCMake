add_subdirectory(helpers)

include_directories(./lib)
# link_directories(C:/Dev/Lean_Cpp/third/lib)

add_executable(third main.cpp)
target_link_libraries(third C:/Dev/Lean_Cpp/third/lib/helpers_static.lib)