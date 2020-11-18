/*
#include <iostream>
#include<opencv2/opencv.hpp>
using namespace cv;
using namespace std;
void main() {
    cv::Mat imgs = imread("D:\\3.jpg");
    Mat imgc, imgd, img, kernel;
    vector<vector<Point>> contours;
    vector<Vec4i> hierarchy;
    //imgd.create(imgs.size(), imgs.type());
    //threshold(imgs, img, 160, 255, THRESH_BINARY);
    cvtColor(imgs, img, COLOR_RGB2GRAY);
    //blur(img, img, Size(5, 5));
    GaussianBlur(img, img, Size(5, 5), 0);
    adaptiveThreshold(img, imgc, 255, ADAPTIVE_THRESH_MEAN_C, THRESH_BINARY_INV, 5, 10);
    //adaptiveThreshold(img, imgd, 255, ADAPTIVE_THRESH_MEAN_C, THRESH_BINARY_INV, 5, 10);
    //imshow(".", imgc);
    kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
    morphologyEx(imgc, imgd, MORPH_CLOSE, kernel, Point(-1, -1),4);
    //imshow("..", imgd);
    Canny(imgd, imgd, 3, 9, 3);
    findContours(imgd, contours, hierarchy, RETR_LIST, CHAIN_APPROX_NONE);
    Mat imge= Mat::zeros(img.size(), CV_8U);
    for (int i = 0; i < (int)contours.size(); i++)
    {
        double sa = contourArea(contours[i], true);
        if ((sa < 2500) && (sa > 100)) {
            drawContours(imge, contours, i, Scalar(255), -1, 8, hierarchy);
            break;
        }
    }
    //imshow("...", imge);
    kernel = getStructuringElement(MORPH_RECT, Size(7, 7));
    morphologyEx(imge, imge, MORPH_CLOSE, kernel);
    Canny(imge, imge, 3, 9, 3);
    //imshow("....", imge);
    imgs.setTo(Scalar(0, 0, 255), imge);
    imshow(".....", imgs);
    waitKey(0);


}
*/