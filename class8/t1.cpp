#include <iostream>
#include<opencv2/opencv.hpp>
using namespace cv;
using namespace std;
void main() {
    cv::Mat imgs = imread("D:\\2.jpg");
    Mat imgc,imgd, img;
    vector<vector<Point>> contours;
    vector<Vec4i> hierarchy;
	//imgd.create(imgs.size(), imgs.type());
    //threshold(imgs, img, 160, 255, THRESH_BINARY);
    cvtColor(imgs, img, COLOR_RGB2GRAY);
    adaptiveThreshold(img, imgc, 255, ADAPTIVE_THRESH_MEAN_C, THRESH_BINARY_INV, 9,10);
    //adaptiveThreshold(img, imgd, 255, ADAPTIVE_THRESH_MEAN_C, THRESH_BINARY_INV, 5, 10);
    kernel = np.ones((5, 5), np.uint8)
    erosion = cv2.erode(img, kernel, iterations = 1)
    imshow(".", imgc);
	//GaussianBlur(img,img,Size(3,3),0);
	//Canny(imgd, imgd, 3, 9, 3);
    findContours(img,contours,hierarchy,RETR_LIST,CHAIN_APPROX_NONE);
    drawContours(img,contours,-1,Scalar(255),-1,8,hierarchy);
    imshow("...", img);
	waitKey(0);

}