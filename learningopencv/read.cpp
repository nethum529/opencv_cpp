#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace std;
using namespace cv;

// Importing Images //
int main() {

    string path = "Resources/test.png";
    Mat img = imread(path);
    imshow("Image", img);
    waitKey(0); // won't close until the close button is pressed



    return 0;

}