/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos. */

#include <iostream>

using namespace std;

double prom(double notas[], double suma, int i);

int main()
{

    double notas[10];
    int i = 0;
    double suma = 0;
    double promedio = 0;
    while (i < 10)
    {
        cout << "Ingrese la nota del estudiante " << i + 1 << ": ";
        cin >> notas[i];
        i++;
    }

    promedio = prom(notas, suma, i);
    cout << "El promedio general de la seccion es de: " << promedio;

    return 0;
}

double prom(double notas[], double suma, int i)
{
    i = 0;
    while (i < 10)
    {
        suma += notas[i];
        i++;
    }
    return suma / 10;
}