add_subdirectory(common)
add_subdirectory(sum)
add_subdirectory(minus)
add_subdirectory(calculator)

add_executable(fifth main.cpp)
target_link_libraries(fifth SmartCalculator)