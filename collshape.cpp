#include "collshape.h"

void collshape::Save(const std::string& fname)
{
	cv::imwrite(fname, paper);
}

void collshape::clear(cv::Mat & m_canvas)
{
	m_canvas=cv::Mat(lambai, chorai, CV_8UC3, cv::Scalar(255, 255, 255));
	cv::imshow("My Paint", m_canvas);
}
collshape::collshape(cv::Mat canva, int H, int W) :paper{ canva }, lambai{ H }, chorai{ W } {}