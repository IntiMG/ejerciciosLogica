/*Escribe un programa que solicite al usuario ingresar 5 números enteros, los
almacene en un arreglo y luego calcule la suma de todos los elementos del
arreglo. */
#include <iostream>

using namespace std;

int main()
{
    int i = 0, suma = 0;
    ;
    int arreglo[5];

    while (i < 5)
    {
        cout << "Ingrese el #" << i + 1 << ": ";
        cin >> arreglo[i];
        i++;
    }

    i = 0;
    while (i < 5)
    {
        suma += arreglo[i];
        i++;
    }

    cout << "La suma de todos los elementos es de: " << suma << endl;

    return 0;
}