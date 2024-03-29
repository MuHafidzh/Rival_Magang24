#include<opencv2/opencv.hpp>
#include<iostream>
 
// Namespace nullifies the use of cv::function();
using namespace std;
using namespace cv;
 
int main()
{
  // Read image
  Mat img = imread("/home/hfdzhhabsyi/Downloads//fern.jpeg");
  cout << "Width : " << img.size().width << endl;
  cout << "Height: " << img.size().height << endl;
  cout<<"Channels: :"<< img.channels() << endl;
  // Crop image
  Mat cropped_image = img(Range(280,440), Range(330,660));
 
  //display image
  imshow(" Original Image", img);
  imshow("Cropped Image", cropped_image);
 
  //Save the cropped Image
  imwrite("Cropped Image.jpg", cropped_image);
 
  // 0 means loop infinitely
  waitKey(0);
  //destroyAllWindows();
  return 0;
}
