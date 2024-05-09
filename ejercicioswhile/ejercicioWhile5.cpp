/*Para un grupo de clase de 8 estudiantes, realice un programa
que permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo
Nota mínima para aprobar: 70 */

#include <iostream>

using namespace std;

int calcularAprobados(int i, double notas[]);

double promedio(int i, double notas[], double suma);

int main()
{

    int i = 0;
    double notas[8];
    double suma = 0;

    while (i < 8)
    {
        cout << "Ingresa la notas del alumno #" << i + 1 << ": ";
        cin >> notas[i];
        i++;
    }

    cout << "La cantidad de aprobados es de: " << calcularAprobados(i, notas) << "\n\n";

    cout << "La cantidad de reprobados es de: " << 8 - calcularAprobados(i, notas) << "\n\n";

    cout << "El promedio general del grupo es de: " << promedio(i, notas, suma) << endl;

    return 0;
}

int calcularAprobados(int i, double notas[])
{
    i = 0;
    int cont = 0;
    while (i < 8)
    {

        if (notas[i] >= 70)
        {
            cont++;
        }
        i++;
    }

    return cont;
}

double promedio(int i, double notas[], double suma)
{
    i = 0;
    suma = 0;
    while (i < 8)
    {
        suma += notas[i];
        i++;
    }
    return suma / 8;
}
