#include "fline.h"
using namespace std;

fline::fline(cv::Point start, cv::Point end, cv::Scalar color, int thickness) :
    shuru{ start }, khatam{ end }, rnag{ color }, mti{ thickness } {}


cv::Point fline::gs() const
{
    return shuru;
}

void fline::ss(cv::Point start)
{
    freeline.push_back(start);
}

cv::Point fline::ge() const
{
    return khatam;
}

void fline::se(cv::Point end)
{
    freeline.push_back(end);
}

cv::Scalar fline::gc() const
{
    return rnag;
}

void fline::sc(cv::Scalar color)
{
    rnag = color;
}

int fline::getthic() const
{
    return mti;
}

void fline::setthicc(int Thickness)
{
    mti = Thickness;
}



