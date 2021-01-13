#include<opencv2/opencv.hpp>
#include <iostream>
#include "project2_vscode2019.h"
#include<stdlib.h>

using namespace cv;
using namespace std;

int main()
{
	int flag;
	Mat pic = imread("C:/Users/Lenovo/Downloads/selected_pic.jpeg", flag = IMREAD_COLOR);
	Mat mtx(pic);
	if (pic.empty())
	{
		cout << "error in u :)" << endl;
		cin.get();
		return -1;
	}

	string wn = "ARNAV'S PIC";
	namedWindow(wn, flag = WINDOW_NORMAL);
	imshow(wn, mtx);

	cv::Size dsize = Size(pic.rows, pic.cols);
	cv::Point center = Point(pic.cols / 2, pic.rows / 2);

	float angle;
	cout << "Enter the angle by which image needs to be rotated : " << endl;
	cin >> angle;
	cv::getRotationMatrix2D;
	cv::Mat	M = getRotationMatrix2D(center, angle, 1);
	warpAffine(pic, mtx, M, dsize, INTER_LINEAR, BORDER_CONSTANT, Scalar());

	string wn1 = "ARNAV'S PIC";
	namedWindow(wn1, flag = WINDOW_NORMAL);
	imshow(wn1, mtx);

    destroyWindow(wn);
    destroyWindow(wn1);
	waitkey(0);
	return 0;
}
