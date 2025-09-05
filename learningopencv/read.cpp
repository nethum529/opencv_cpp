#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace std;
using namespace cv;

// Importing Images //
// int main() {

//     string path = "Resources/test.png";
//     Mat img = imread(path);
//     imshow("Image", img);
//     waitKey(0); // won't close until the close button is pressed



//     return 0;

// }



// Importing Videos //'
// int main() {

//     string path = "Resources/test_video.mp4";
//     VideoCapture cap(path);
//     Mat img;
//     while(true) {

//     cap.read(img);

//     imshow("Image", img);
//     waitKey(1); // won't close until the close button is pressed
//     };


//     return 0;

// }


// Webcam //
// int main() {

//     VideoCapture cap(0);
//     Mat img;
//         while(true) {

//         cap.read(img);

//         imshow("Image", img);
//         waitKey(1); // won't close until the close button is pressed
//     };


//     return 0;

// }
