#include "opencv2/opencv.hpp"

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
  return 0;
}