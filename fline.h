#ifndef fline_h
#define fline_h
#include <opencv2/opencv.hpp>
#include <iostream>

class fline
{
	public:
		fline(cv::Point si, cv::Point ei, cv::Scalar color = (0, 0, 0), int thickness = 1);


		cv::Point gs() const; //getstart
		void ss(cv::Point start); //setstart

		cv::Point ge() const; //getend
		void se(cv::Point end); //setend


		cv::Scalar gc() const; //getcolour
		void sc(cv::Scalar color); //setcolour

		std::vector<cv::Point> freeline{};

		int getthic() const;
		void setthicc(int Thickness);

	private:
		cv::Point shuru{}; //statrt
		cv::Point khatam{}; //end
		cv::Scalar rnag{}; //color
		int mti{}; //thickness

	};


#endif





