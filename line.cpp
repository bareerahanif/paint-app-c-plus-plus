#include "line.h"
using namespace std;

line::line(cv::Point start, cv::Point end, cv::Scalar color = { 0,0,0 }, int thickness = 1) :
    aghaaz{ start }, ikhtimaam{ end }, rang{ color }, mt{ thickness } {}

line::line(cv::Point start, cv::Point end) :
    aghaaz{ start }, ikhtimaam{ end } {}

cv::Point  line::gets() const
{
    return aghaaz;
}

void  line::ss(cv::Point start)
{
    aghaaz = start;
}

cv::Point  line::gete() const
{
    return ikhtimaam;
}

void  line::se(cv::Point end)
{
    ikhtimaam = end;
}

cv::Scalar  line::gc() const
{
    return rang;
}

void  line::sc(cv::Scalar color)
{
    rang = color;
}

int  line::geth() const
{
    return mt;
}

void  line::seth(int Thickness)
{
    mt = Thickness;
}



