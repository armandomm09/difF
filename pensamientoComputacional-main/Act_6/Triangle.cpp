#include "Triangle.h"
#include <cmath>
#include <string>

Triangle::Triangle()
{
    vertex1 = Point(40, 30);
    vertex2 = Point(50, 30);
    vertex3 = Point(25, 10);

}

Triangle::Triangle(Point Aval, Point Bval, Point Cval)
{
    vertex1 = Aval;
    vertex2 = Bval;
    vertex3 = Cval;
}

void Triangle::setVertex1(Point Aval)
{
    vertex1 = Aval;
}

void Triangle::setVertex2(Point Bval)
{
    vertex2 = Bval;
}

void Triangle::setVertex3(Point Cval)
{
    vertex3 = Cval;
}

Point Triangle::getVertex1()
{
    return vertex1;
}

Point Triangle::getVertex2()
{
    return vertex2;
}

Point Triangle::getVertex3()
{
    return vertex3;
}

double Triangle::perimeter()
{
    return vertex1.distance(vertex2) + vertex2.distance(vertex3) + vertex3.distance(vertex1);
}

double Triangle::area()
{
    long double s = (vertex1.distance(vertex2) + vertex2.distance(vertex3) + vertex3.distance(vertex1)) / 2;
    return sqrt(s * (s - vertex1.distance(vertex2)) * (s - vertex2.distance(vertex3)) * (s - vertex3.distance(vertex1)));
}

std::string Triangle::to_string()
{
    return "A" + vertex1.to_string() + ", B" + vertex2.to_string() + ", C" + vertex3.to_string();
}
