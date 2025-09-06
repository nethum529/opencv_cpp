#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;
using namespace std;

int main() {
    
    string path = "Resources/test.png";
    Mat img = imread(path);
    Mat imgResize, imgCrop;

    // cout << img.size() << endl;

    resize(img, imgResize, Size(), 0.5, 0.5);

    // cropping
    Rect roi(100, 100, 300, 250);
    imgCrop = img(roi);

    imshow("Image", img);
    imshow("Image Resize", imgResize);
    imshow("Image Crop", imgCrop);
    waitKey(0);
return 0;
}