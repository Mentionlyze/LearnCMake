#include <opencv2/opencv.hpp>
#include "fmt/core.h"
#include <iostream>

using namespace cv;

int main()
{
  Mat src = imread("C:/Users/menti/Pictures/9946780-8e3a6d3a9c4289c3.jpg");
  if (src.empty())
  {
    printf("No Image");
    return -1;
  }
  namedWindow("Input", WINDOW_AUTOSIZE);
  imshow("Input", src);
  waitKey(0);
  destroyAllWindows();

  fmt::println("Hello OpenCV");
  std::cout << "A HA" << std::endl;
  return 0;
}