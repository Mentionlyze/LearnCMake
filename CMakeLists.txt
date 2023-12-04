cmake_minimum_required(VERSION 3.20)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)

set(CMAKE_TOOLCHAIN_FILE "C:/Users/menti/scoop/apps/vcpkg/current/scripts/buildsystems/vcpkg.cmake")
# set(CMAKE_MAKE_PROGRAM NINJA)
set(VCPKG_HOST_TRIPLET "x64-windows")
set(VCPKG_TARGET_TRIPLET "x64-windows")

# set(VCPKG_HOST_TRIPLET x86-mingw-dynamic)
# set(VCPKG_TARGET_TRIPLET x86-mingw-dynamic)

project(
  courses 
  LANGUAGES CXX C
  DESCRIPTION "my cpp start" 
  VERSION 0.1.0
)


# add_subdirectory(first)
# add_subdirectory(second)
add_subdirectory(third)
# add_subdirectory(fourth)
add_subdirectory(fifth)
add_subdirectory(opencv_config)

