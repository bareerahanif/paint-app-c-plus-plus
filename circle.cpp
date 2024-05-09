#include "circle.h"

circle::circle(cv::Point center, int radius, cv::Scalar color, int thickness) :
    middle(center), rad(radius), co(color), thicc(thickness) {}

cv::Point circle::getdarmayaan() const {
    return middle;
}

void circle::setdarmayaan(cv::Point center) {
    middle = center;
}

int circle::getRadiusishalfofdiameter() const {
    return rad;
}

void circle::setRadiusishalfofdiameter(int radius) {
    rad = radius;
}

cv::Scalar circle::getrang() const {
    return co;
}

void circle::setrang(cv::Scalar color) {
    co = color;
}

int circle::getThickness() const {
    return thicc;
}

void circle::setThickness(int thickness) {
    thicc = thickness;
}

void circle::draw(cv::Mat& canvas) const {
    cv::circle(canvas, middle, rad, co, thicc);
}

