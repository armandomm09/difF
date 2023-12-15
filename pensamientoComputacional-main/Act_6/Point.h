#include <string>

class Point{
    private:
        int x;
        int y;
    public:
        Point();
        Point(int, int);

        void setx(int);
        void sety(int);

        void set(int, int);

        int getx();
        int gety();

        double distance(Point);
        double distance0();

        std::string to_string();
};