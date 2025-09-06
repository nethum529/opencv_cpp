#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;
using namespace std;
// Drawing Shapes and Text //
int main() {

    // blank image
    Mat img(512, 512, CV_8UC3, Scalar(255, 255, 255));

    circle(img, Point(256, 256), 155, Scalar(126, 78, 45), FILLED);
    rectangle(img, Point(130, 226), Point(382, 286), Scalar(68, 128, 201), FILLED);
    line(img, Point(130, 296), Point(382, 296), Scalar(123, 198, 68), 3);


    putText(img, "Nethum's Workshop", Point(137, 262), FONT_HERSHEY_DUPLEX, 0.75, Scalar(0, 69, 255));
    imshow("Image", img);
    waitKey(0);
    return 0;
}