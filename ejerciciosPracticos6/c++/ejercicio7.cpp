/*Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector. */
#include <iostream>

using namespace std;

void sumar(int vector1[], int vector2[], int suma[], int longitud);

main()
{
    int longitud;

    cout << "Ingrese la longitud para los dos vectores: ";
    cin >> longitud;

    int vector1[longitud];
    int vector2[longitud];
    int suma[longitud];

    cout << "Ingrese los elementos del primer vector: " << endl;
    for (int i = 0; i < longitud; i++)
    {
        cin >> vector1[i];
    }

    cout << "Ingrese los elementos del segundo vector: " << endl;
    for (int i = 0; i < longitud; i++)
    {
        cin >> vector2[i];
    }

    sumar(vector1, vector2, suma, longitud);
    cout << "La suma de los vectores es: ";
    for (int i = 0; i < longitud; i++)
    {
        cout << suma[i] << " ";
    }
}

void sumar(int vector1[], int vector2[], int suma[], int longitud)
{
    for (int i = 0; i < longitud; i++)
    {
        suma[i] = vector1[i] + vector2[i];
    }
}
