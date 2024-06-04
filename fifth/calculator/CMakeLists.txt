set(TARGET_NAME SmartCalculator)

add_library(${TARGET_NAME} calculator.cpp)

target_link_libraries(${TARGET_NAME} PRIVATE sum minus)

target_include_directories(${TARGET_NAME} INTERFACE .)