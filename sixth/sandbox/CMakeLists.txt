file(GLOB_RECURSE SANDBOX_SOURCES *.h(pp?) *.cpp)

add_executable(sandbox ${SANDBOX_SOURCES})
target_link_libraries(sandbox PUBLIC core)