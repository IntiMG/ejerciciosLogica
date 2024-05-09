/*Implementa un programa que solicite al usuario ingresar una matriz y
luego calcule su transposición. La transposición de una matriz se
realiza intercambiando filas por columnas. Imprime la matriz
transpuesta como salida. */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int matriz[3][3];

    int i = 0;
    while (i < 3)
    {
        int j = 0;
        while (j < 3)
        {
            cout << "Ingresa un numero, fila " << i + 1 << ", columna " << j + 1 << ": " << endl;
            cin >> matriz[i][j];
            j++;
        }
        i++;
    }

    cout << "Matriz tranpuesta" << endl;
    i = 0;
    while (i < 3)
    {
        int j = 0;
        while (j < 3)
        {
            cout << matriz[j][i];
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}