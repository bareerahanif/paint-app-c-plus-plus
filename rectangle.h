#ifndef rectangle_h
#define rectangle_h
#include <opencv2/opencv.hpp>
#include <iostream>

class rectangle
{
	public:
		rectangle(cv::Point start, cv::Point end, cv::Scalar color = { 0,0,0 }, int thickness = { 1 });

		cv::Point gsi() const;
		cv::Point gei() const;

		void setst(cv::Point start);
		void seten(cv::Point end);

		cv::Scalar getco() const;
		void setco(cv::Scalar color);


		int geth() const;
		void seth(int Thickness);

	private:
		cv::Point aghaaz{};
		cv::Point ikhtimaam{};
		cv::Scalar rang{};
		int thickness{};

	};



#endif


