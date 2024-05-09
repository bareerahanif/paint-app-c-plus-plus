#include "rectangle.h"
using namespace std;

rectangle::rectangle(cv::Point start, cv::Point end, cv::Scalar color, int thickness) :
    aghaaz{ start }, ikhtimaam{ end }, rang{ color }, thickness{ thickness } {}
void drawRectangle(cv::Mat& canvas, const cv::Point& start, const cv::Point& end, const cv::Scalar& color, int thickness)
{
    cv::rectangle(canvas, start, end, color, thickness);
}
cv::Point rectangle::gsi() const
{
    return aghaaz;
}

void rectangle::setst(cv::Point start)
{
    aghaaz = start;
}

cv::Point rectangle::gei() const
{
    return ikhtimaam;
}
void rectangle::seten(cv::Point end)
{
    ikhtimaam = end;
}

cv::Scalar rectangle::getco() const
{
    return rang;
}

void rectangle::setco(cv::Scalar color)
{
    rang = color;
}

int rectangle::geth() const
{
    return thickness;
}

void rectangle::seth(int thickness)
{
    thickness = thickness;
}


