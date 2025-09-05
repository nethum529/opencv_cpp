#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;
using namespace std;

int main() {
    
    string path = "Resources/test.png";
    Mat img = imread(path);
    Mat imgGray, imgBlur, imgCanny;

    cvtColor(img, imgGray, COLOR_BGR2GRAY); // Blue Green Red as opposed to RGB

    // Gaussian Blur
    GaussianBlur(img, imgBlur, Size(7, 7), 200, 200);


    // edge detector
    Canny(imgBlur, imgCanny, 25, 75);
    // imshow("Image", img);
    // imshow("Image Gray", imgGray);
    // imshow("Image Blur", imgBlur);
    imshow("Image Canny", imgCanny);
    waitKey(0);
return 0;
}