#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(){
    Mat gambar = imread("/home/hfdzhhabsyi/Downloads/fern.jpeg");
    if(gambar.empty()){
        cout << "error" << endl;
        return 1;
    }
    imshow("Display Image", gambar);
    waitKey(0);
    return 0;
}
