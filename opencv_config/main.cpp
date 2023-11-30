#include <iostream>
#include "fmt/core.h"
#include <opencv2/opencv.hpp>

using namespace cv;

int main() {
  Mat src = imread("C:/Users/menti/Pictures/463882bdbeb7106f3e9b34c196094da91918644.jpg@!web-comment-note.webp");
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