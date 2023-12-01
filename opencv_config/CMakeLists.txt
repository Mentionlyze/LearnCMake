cmake_minimum_required(VERSION 3.20)

add_executable(opencv_config main.cpp)

# find_package(fmt CONFIG REQUIRED)
find_package(OpenCV CONFIG REQUIRED)

# target_link_libraries(opencv_config  PRIVATE fmt::fmt)
target_link_libraries(opencv_config PRIVATE ${OpenCV_LIBS})

foreach(list ${OpenCV_LIBS})
  message(${list}) 
endforeach(list)










