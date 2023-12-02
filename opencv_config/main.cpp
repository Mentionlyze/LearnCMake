#include <iostream>
#include "fmt/core.h"
#include <opencv2/opencv.hpp>

using namespace cv;

int main() {
  Mat src = imread("C:/Users/menti/Pictures/pexels-photo-2174974.webp");
  if (src.empty()) {
    printf("No Image");
    return -1;
  } 
    namedWindow("Input", WINDOW_AUTOSIZE);
    imshow("Input", src);
    waitKey(0);
    destroyAllWindows();
    return 0;
}