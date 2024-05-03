/*Desarrollar un programa que imprima los números impares en orden
descendente que hay entre 1 y 100. */

#include <iostream>

using namespace std;

void impares();

main()
{
    impares();
}

void impares()
{
    cout << "Los numero impares que hay entre 1 y 100 son: " << endl;
    for (int i = 100; i >= 1; i--)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
    }
    
}