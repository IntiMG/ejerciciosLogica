/*Diseña un programa que solicite al usuario ingresar dos matrices y
luego realice la multiplicación de matrices. Asegúrate de que las
dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante. */
#include <iostream>
#define MAX 3
using namespace std;

int main(int argc, char const *argv[])
{
    int matriz1[MAX][MAX];
    int matriz2[MAX][MAX];
    int matrizResultante[MAX][MAX];

    cout << "Matriz 1" << endl;
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            cout << "Ingresa un numero, fila " << i + 1 << ", columna " << j + 1 << ": " << endl;
            cin >> matriz1[i][j];
        }
    }
    cout << endl;

    cout << "Matriz 2" << endl;
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            cout << "Ingresa un numero, fila " << i + 1 << ", columna " << j + 1 << ": " << endl;
            cin >> matriz2[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            matrizResultante[i][j] = matriz1[i][j] * matriz2[i][j];
        }
    }

    cout << "Matriz " << endl;
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            cout << matrizResultante[i][j];
        }
        cout << endl;
    }
    return 0;
}