#include "aline.h"
using namespace std;

aline::aline(cv::Point start, cv::Point end, cv::Scalar color, int thickness) :
    aghaaz{ start }, ikhtimaam{ end }, rnag{ color }, thic{ thickness } {}

cv::Point aline::getshuru() const
{
    return aghaaz;
}

void aline::setshuru(cv::Point start)
{
    aghaaz = start;
}

cv::Point aline::getkahtam() const
{
    return ikhtimaam;
}

void aline::setkhatam(cv::Point end)
{
    ikhtimaam = end;
}

cv::Scalar aline::getrng() const
{
    return rnag;
}

void aline::setrng(cv::Scalar color)
{
    rnag = color;
}

int aline::getThickness() const
{
    return thic;
}

void aline::setThickness(int Thickness)
{
    thic = Thickness;
}



