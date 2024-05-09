#ifndef csh_h
#define csh_h

#include <opencv2/opencv.hpp>
#include"line.h"
#include"rectangle.h"
#include"circle.h"
#include"aline.h"
#include"fline.h"
#include<vector>

class collshape
{

	public:
		collshape(cv::Mat cvs, int H, int W); //cvs=canvas
		void Save(const std::string& filename);
		void clear(cv::Mat&);

	private:
		cv::Mat paper; //canvas
		int lambai; //length
		int chorai; //width
};

#endif


