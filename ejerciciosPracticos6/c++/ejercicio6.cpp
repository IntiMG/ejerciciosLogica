/*Hacer un programa que sume los números pares comprendidos entre
100 y 200. */
#include <iostream>
using namespace std;

void sumaPares();

main()
{
    sumaPares();
}

void sumaPares()
{
    int suma;
    for (int i = 100; i <= 200; i++)
    {
        if (i % 2 == 0)
        {
            suma += i;
        }
    }
    cout << "La suma de los pares es: " << suma << endl;
}