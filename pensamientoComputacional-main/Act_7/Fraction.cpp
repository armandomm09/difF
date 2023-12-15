#include "Fraction.h"
#include <cmath>
#include <string>


Fraction::Fraction()
{
    num = 1;
    den = 2;

}

Fraction::Fraction(int numVal, int denVal)
{
    num = numVal;
    den = denVal;

}

int Fraction::getNum()
{
    return num;
}

int Fraction::getDen()
{
    return den;
}

void Fraction::setNum(int numToBe)
{
    num = numToBe;
}

void Fraction::setDen(int denToBe)
{
    den = denToBe;
}

double Fraction::calcValorReal()
{
    return ((double) num / (double) den);
}

Fraction Fraction::sumaFracciones(Fraction fractionToSum){
    int max, min, mcm = 0, sumaNum, num2 = fractionToSum.getNum(), den2 = fractionToSum.getDen();

    if (den > den2)
    {
        max = den;
        min = den2;
    }
    else if (den < den2)
    {
        max = den2;
        min = den;
    }
    else
    {
        max = den2;
        min = den;
        mcm = max;
    }

    if (max % min == 0)
    {
        mcm = max;
    }

    while (mcm % min != 0 || mcm == 0)
    {
        mcm += max;
        if (mcm % min == 0) break;
    }

    sumaNum = (num * (mcm / den) + (num2 * (mcm / den2)));

    return Fraction(sumaNum, mcm);
}

std::string Fraction::imprimeFraccion()
{
    return std::to_string(num) + " / " + std::to_string(den);
}