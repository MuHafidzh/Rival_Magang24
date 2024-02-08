#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
//#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
int main()
{
   Mat image = imread("/home/hfdzhhabsyi/Downloads//fern.jpeg");
   Mat bright = imread("bright.png");
   Mat dark = imread("dark.png");
   Mat gray_image, rgb_image,hsv_image, bgr_bright[3], bgr_dark[3];
   split (bright, bgr_bright);
   split (dark, bgr_dark);
   cvtColor(image, gray_image, COLOR_BGR2GRAY);
   cvtColor(image, rgb_image, COLOR_BGR2RGB);
   cvtColor(image, hsv_image, COLOR_BGR2HSV);
   namedWindow("imag", WINDOW_AUTOSIZE);
   namedWindow("Gray image", WINDOW_AUTOSIZE);
   namedWindow("rgb image", WINDOW_AUTOSIZE);
   namedWindow("hsv image", WINDOW_AUTOSIZE);
   imshow("imag", image);
   imshow("Gray image", gray_image);
   imshow("rgb image", rgb_image);
   imshow("hsv image",hsv_image );
   waitKey();
   imshow("kubus", bright);
   imshow("blue", bgr_bright[0]);
   imshow("green", bgr_bright[1]);
   imshow("red", bgr_bright[2]);
   waitKey(0);
   imshow("kubus", dark);
   imshow("blue", bgr_dark[0]);
   imshow("green", bgr_dark[1]);
   imshow("red", bgr_dark[2]);
   waitKey(0);
   return 0;
}