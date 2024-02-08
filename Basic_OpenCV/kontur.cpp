#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main()
{
   // read the image
   Mat image = imread("image.jpg");
   Mat img_gray;
   cvtColor(image, img_gray, COLOR_BGR2GRAY);
   Mat thresh;
   threshold(img_gray, thresh, 150, 255, THRESH_BINARY);
   imshow("Binary image", thresh);
   waitKey(0);
   // imwrite("image_thres1.jpg", thresh);
   // destroyAllWindows();
   vector<vector<Point>> contours;
   vector<Vec4i> hierarchy;
   findContours(thresh, contours, hierarchy, RETR_TREE, CHAIN_APPROX_NONE);
   // draw contours on the original image
   Mat image_copy = image.clone();
   drawContours(image_copy, contours, -1, Scalar(0, 255, 0), 2);
   imshow("None approximation", image_copy);
   waitKey(0);
   // imwrite("contours_none_image1.jpg", image_copy);
   //  Now let us try with CHAIN_APPROX_SIMPLE`
   // detect the contours on the binary image using cv2.CHAIN_APPROX_NONE
   vector<vector<Point>> contours1;
   vector<Vec4i> hierarchy1;
   findContours(thresh, contours1, hierarchy1, RETR_TREE, CHAIN_APPROX_SIMPLE);
   // draw contours on the original image
   Mat image_copy1 = image.clone();
   drawContours(image_copy1, contours1, -1, Scalar(0, 255, 0), 2);
   imshow("Simple approximation", image_copy1);
   waitKey(0);
   imwrite("contours_simple_image1.jpg", image_copy1);
   destroyAllWindows();
   return 0;
}