file(GLOB_RECURSE CORE_SOURCES *.h(pp?) *.cpp)

add_library(core ${CORE_SOURCES})
target_include_directories(core PUBLIC .)