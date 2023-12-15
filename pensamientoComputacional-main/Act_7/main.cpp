#include "Fraction.cpp"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, den, num;
    Fraction fraction;
    vector<Fraction> Fractions;

    do
    {
        cout << "N: ";
        cin >> N;
    } while (N < 5);

    Fractions.resize(N);

    for (int i = 0; i < N; i++)
    {
        cout << "Numerador " << i + 1<< ": ";
        cin >> num;

        do
        {
            cout << "Denominador " << i + 1 << ": ";
            cin >> den;
        } while (den == 0);

        fraction.setNum(num);
        fraction.setDen(den);

        Fractions[i] = fraction;
    }

    cout << endl << Fractions[0].imprimeFraccion() << " + " << Fractions[2].imprimeFraccion() << " + " << Fractions[4].imprimeFraccion() << " = ";

    cout << ((Fractions[0].sumaFracciones(Fractions[2])).sumaFracciones(Fractions[4])).imprimeFraccion() << endl;

    return 0;
}