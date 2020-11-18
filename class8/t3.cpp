#include <iostream>
#include<opencv2/opencv.hpp>
using namespace cv;
using namespace std;
void main() {
    cv::Mat imgs = imread("D:\\4.jpg");
    Mat imge,imgd, img, kernel;
    vector<vector<Point>> contours;
    vector<Vec4i> hierarchy;
    //threshold(imgs, img, 160, 255, THRESH_BINARY);
    //cvtColor(imgs, img, COLOR_RGB2HSV);
    //imshow(".", imgc);
    inRange(imgs, Scalar(51, 47, 200), Scalar(148, 146, 228), imgd);
    //imshow(".", imgc);
    kernel = getStructuringElement(MORPH_ELLIPSE, Size(5, 5));
    morphologyEx(imgd, imgd, MORPH_OPEN, kernel, Point(-1, -1), 1);
    kernel = getStructuringElement(MORPH_ELLIPSE, Size(33, 33));
    morphologyEx(imgd, imgd, MORPH_CLOSE, kernel, Point(-1, -1), 1);
    Canny(imgd, imgd, 3, 9, 3);
    imgs.setTo(Scalar(255, 255, 0), imgd);
    imshow(".....", imgs);
    waitKey(0);


}