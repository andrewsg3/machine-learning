#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/// <summary>
/// ///Import images
/// </summary>

//void main() {
//	
//	string path = "Resources/test.png";
//	Mat img = imread(path);
//	imshow("Image", img);
//	waitKey(0);
//
//}

/// ///Import video
//
//void main() {
//
//	string path = "Resources/test_video.mp4";
//	VideoCapture cap(path);
//	Mat img;
//
//	while (true) {
//		cap.read(img);
//		imshow("Image", img);
//		waitKey(5);
//		
//	}
//} 

/// ///Test webcam
void main() {

	VideoCapture cap(0);
	Mat img;

	while (true) {
		cap.read(img);
		imshow("Image", img);
		waitKey(1);

	}
}