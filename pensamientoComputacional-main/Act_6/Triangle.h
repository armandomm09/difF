#include "Point.cpp"
#include <string>

class Triangle{
    private:
        Point vertex1;
        Point vertex2;
        Point vertex3;
    public:
        Triangle();
        Triangle(Point, Point, Point);

        void setVertex1(Point);
        void setVertex2(Point);
        void setVertex3(Point);

        void set(Point, Point, Point);

        Point getVertex1();
        Point getVertex2();
        Point getVertex3();

        double perimeter();
        double area();

        std::string to_string();
};