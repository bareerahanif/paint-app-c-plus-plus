#ifndef circle_h
#define circle_h

#include <opencv2/opencv.hpp>

class circle 
{
public:
    circle(cv::Point center, int radius, cv::Scalar color = { 0,0,0 }, int thickness = 1);

    cv::Point getdarmayaan() const; //center
    void setdarmayaan(cv::Point center); //center

    int getRadiusishalfofdiameter() const; //radius
    void setRadiusishalfofdiameter(int radius);

    cv::Scalar getrang() const; //colour
    void setrang(cv::Scalar color);

    int getThickness() const;
    void setThickness(int thickness);

    void draw(cv::Mat& canvas) const;
private:
    cv::Point middle; //center
    cv::Point khatam; //end
    int rad; //radius
    cv::Scalar co; //colour
    int thicc; //thickness

};

#endif

