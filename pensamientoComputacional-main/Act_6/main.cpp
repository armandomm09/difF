#include "Triangle.cpp"
#include <iostream>

using namespace std;

int main()
{
    Triangle T1;

    Point vertex1(2, 2), vertex2(1, 5), vertex3(-2, 0);
    Triangle T2(vertex1, vertex2, vertex3);

    // Triángulo 1

    cout << T1.to_string() << endl;

    cout << "Perímetro 1: " << T1.perimeter() << " u" << endl;
    cout << "Área 1: " << T1.area() << " u^2" << endl;

    // Triángulo 2

    cout << T2.to_string() << endl;

    cout << "Perimetro 2: " << T2.perimeter() << " u" << endl;
    cout << "Area 2: " << T2.area() << " u^2" << endl;
    return 0;
}