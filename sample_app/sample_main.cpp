#include <string.h>
#include <iostream>
#include "sample_lib.h"

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>

#define TEST_PNG_FILE "test_data/sample_app.png"

int main(int argc, char** argv) {
  std::string who = "world";
  if (argc > 1) {
    who = argv[1];
  }
  std::cout << get_greet(who) << std::endl;
  print_localtime();

  cv::Mat img = cv::imread(TEST_PNG_FILE);
  if(img.empty()) {
      std::cout << "fail to open file " << TEST_PNG_FILE << std::endl;
      return -1;
  }
  // Convert png to jpg
  cv::imwrite("sample_app.jpg", img);

  return 0;
}
