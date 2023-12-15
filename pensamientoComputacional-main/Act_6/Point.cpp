#include "Point.h"
#include <string>
#include <cmath>

Point::Point()
{
    x = 0;
    y = 0;
}

Point::Point(int xval, int yval)
{
    x = xval;
    y = yval;
}

void Point::setx(int xval)
{
    x = xval;
}

void Point::sety(int yval)
{
    y = yval;
}

void Point::set(int xval, int yval)
{
    x = xval;
    y = yval;
}

int Point::getx()
{
    return x;
}

int Point::gety()
{
    return y;
}

double Point::distance(Point P)
{
    return sqrt(pow(x - P.getx(), 2) + pow(y - P.gety(), 2));
}

double Point::distance0()
{
    return sqrt(pow(x, 2) + pow(y, 2));
}

std::string Point::to_string()
{
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}