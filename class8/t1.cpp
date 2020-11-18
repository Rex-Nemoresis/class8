/*

#include <iostream>

#include<opencv2/opencv.hpp>

using namespace cv;

using namespace std;

 

void main() {
    cv::Mat imgs = imread("D:\\2.jpg");

    Mat imgc, imgd, img, kernel,imge;

    vector<vector<Point>> contours;

    vector<Vec4i> hierarchy;

       //imgd.create(imgs.size(), imgs.type());

    //threshold(imgs, img, 160, 255, THRESH_BINARY);

    cvtColor(imgs, img, COLOR_RGB2GRAY);

    //blur(img, img, Size(3, 3));

    GaussianBlur(img, img, Size(3, 3), 0);

    adaptiveThreshold(img, imgc, 255, ADAPTIVE_THRESH_MEAN_C, THRESH_BINARY_INV, 19,10);

    //adaptiveThreshold(img, imgd, 255, ADAPTIVE_THRESH_MEAN_C, THRESH_BINARY_INV, 5, 10);

    //imshow(".", imgc);

    kernel = getStructuringElement(MORPH_ELLIPSE, Size(7, 7));

    morphologyEx(imgc, imgd,MORPH_CLOSE, kernel);

    //imshow("..", imgd);

       Canny(imgd, imgd, 3, 9, 3);

    findContours(imgd,contours,hierarchy,RETR_EXTERNAL,CHAIN_APPROX_NONE);

    drawContours(imgd,contours,-1,Scalar(255),-1,8,hierarchy);

   // imshow("...", imgd);

    kernel = getStructuringElement(MORPH_ELLIPSE, Size(30, 30));

    morphologyEx(imgd, imge, MORPH_OPEN, kernel);

    //imshow("....", imge);

    imgs.setTo(Scalar(0,255,255), imge);

    imshow("....", imgs);

       waitKey(0);

   

 

}

*/
