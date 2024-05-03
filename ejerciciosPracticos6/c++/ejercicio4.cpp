/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos. */
#include <iostream>

using namespace std;

double promedio(double suma, double notas[10]);

int main()
{
    double notas[10];
    double suma = 0;
    double prom;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese la nota del estudiante: ";
        cin >> notas[i];
    }

    prom = promedio(suma, notas);
    cout << "El promedio general es: " << prom << endl;

    return 0;
}

double promedio(double suma, double notas[10])
{
    for (int i = 0; i < 10; i++)
    {
        suma += notas[i];
    }
    return suma / 10;
}