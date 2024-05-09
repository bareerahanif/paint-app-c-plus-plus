#ifndef aline_h
#define aline_h
#include <opencv2/opencv.hpp>
#include <iostream>

class aline
{

	public:
		aline(cv::Point start, cv::Point end, cv::Scalar color = (0, 0, 0), int thickness = 1);

		cv::Point getshuru() const; //start
		cv::Point getkahtam() const; //end

		void setshuru(cv::Point start); //start
		void setkhatam(cv::Point end); //end

		cv::Scalar getrng() const; //colour
		void setrng(cv::Scalar color);

		int getThickness() const;
		void setThickness(int Thickness);

	private:
		cv::Point aghaaz{}; //start
		cv::Point ikhtimaam{}; //end
		cv::Scalar rnag{}; //colour
		int thic{}; //thickness

	};

#endif




