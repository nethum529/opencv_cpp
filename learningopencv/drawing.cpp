#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;
using namespace std;
// Drawing Shapes and Text //
int main() {

    Mat img(512, 512, CV_8UC3, Scalar(255, 0, 255));
    imshow("Image", img);
    waitKey(0);
    return 0;
}