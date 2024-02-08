#include <opencv2/opencv.hpp>
#include <iostream>
// Using namespaces to nullify use of c::function(); syntax and std::function(); syntax
using namespace std;
using namespace cv;
int main()
{
    // Read Images
    Mat img = imread("/home/hfdzhhabsyi/Downloads/fern.jpeg");
    // Display Image
    imshow("Original Image", img);
    waitKey();
    if (img.empty())
    {
        cout << "Could not read image" << endl;
    }
    Mat imageLine = img.clone();
    Point pointA(380, 300);
    Point pointB(380, 500);
    line(imageLine, pointA, pointB, Scalar(255, 255, 0), 3);
    imshow("Lined Image", imageLine);
    waitKey();
    Mat circle_image = img.clone();
    // define the center of circle
    Point circle_center(500, 400);
    // define the radius of circle
    int radius = 175;
    // Draw a circle using the circle() Function
    circle(circle_image, circle_center, radius, Scalar(0, 0, 255), 3);
    // Display the result
    imshow("Circle on Image", circle_image);
    waitKey();
    Mat rect_image = img.clone();
    // Define the starting and end points for the rectangle
    Point start_point(320, 280);
    Point end_point(680, 580);
    // Draw a rectangle using the rectangle() function
    rectangle(rect_image, start_point, end_point, Scalar(0, 255), 3);
    imshow("Rectangle on Image", rect_image);
    waitKey();
    Mat imageText = img.clone();
    // Write text using putText() function
    putText(imageText, "mendokusai!!!", Point(600, 600), FONT_HERSHEY_DUPLEX, 1, Scalar(250, 225, 100));
    imshow("Text on Image", imageText);
    waitKey();
    return 0;
}