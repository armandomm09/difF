#include <string>

class Fraction{
    private:
        int num;
        int den;
    public:
        Fraction();
        Fraction(int, int);

        // destructor vacio
        ~Fraction()
        {
        }

        // getters
        int getNum();
        int getDen();


        // setters:
        void setNum(int);
        void setDen(int);

        double calcValorReal();

        Fraction sumaFracciones(Fraction);

        std::string imprimeFraccion();

};