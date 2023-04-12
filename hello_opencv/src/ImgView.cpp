//#include <opencv2/opencv.hpp>
#include <opencv2/opencv.hpp>
#include <iostream>

int main()
{
	cv::Mat img;
	img = cv::imread("lena.jpg", cv::IMREAD_COLOR);

	if(img.empty())
	{
		std::cout << "No Image" << std::endl;
		return -1;
	
	}
	
	cv::namedWindow("yaho", cv::WINDOW_AUTOSIZE);
	cv::imshow("yaho", img);
	
	cv::waitKey(0);
}
