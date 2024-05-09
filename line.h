#ifndef line_h
#define line_h
#include <opencv2/opencv.hpp>
#include <iostream>

class line
{
public:
	line(cv::Point start, cv::Point end, cv::Scalar color, int thickness);
	line(cv::Point start, cv::Point end);

	cv::Point gets() const; //getdtart
	cv::Point gete() const; //getsend

	void ss(cv::Point start); //setstart
	void se(cv::Point end); //setend

	cv::Scalar gc() const; //getcolour
	void sc(cv::Scalar color); //setcolour


	int geth() const; //getthick
	void seth(int Thickness); //setthick

private:
	cv::Point aghaaz{}; // start
	cv::Point ikhtimaam{}; //end
	cv::Scalar rang{}; //colour
	int mt{}; //thick

};


#endif


