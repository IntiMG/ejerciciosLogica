/*Escriba el programa para calcular la suma de los cuadrados de los
números entre 1 y 100. */

#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    int sum = 0;
    while (i <= 100)
    {
        sum += i * i;
        i++;
    }

    cout << "La suma de los cuadrados de los numero entre 1 y 100 es de: " << sum;

    return 0;
}