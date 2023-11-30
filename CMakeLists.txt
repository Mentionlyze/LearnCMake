cmake_minimum_required(VERSION 3.20)
set(CMAKE_TOOLCHAIN_FILE "C:/Users/menti/scoop/apps/vcpkg/current/scripts/buildsystems/vcpkg.cmake")
set(VCPKG_HOST_TRIPLET "x64-windows")
set(VCPKG_TARGET_TRIPLET "x64-windows")

project(
  courses 
  LANGUAGES CXX C
  DESCRIPTION "my cpp start" 
  VERSION 0.1.0
)


add_subdirectory(first)
add_subdirectory(second)
add_subdirectory(third)
add_subdirectory(fourth)
add_subdirectory(opencv_config)

