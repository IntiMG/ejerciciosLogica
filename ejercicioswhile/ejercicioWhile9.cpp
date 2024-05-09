/*Diseña un programa que solicite al usuario ingresar dos matrices y
luego realice la multiplicación de matrices. Asegúrate de que las
dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante. */
#include <iostream>

using namespace std;

void elementosMatrices(int matriz[][10], int filas, int columnas)
{
    int i = 0;
    while (i < filas)
    {
        int j = 0;
        while (j < columnas)
        {
            cout << "Ingresa un numero, fila " << i + 1 << ", columna " << j + 1 << ": " << endl;
            cin >> matriz[i][j];
            j++;
        }
        i++;
    }
}

void multiplicarMatrices(int matriz1[][10], int matriz2[][10], int matrizResultante[][10], int filas, int columnas1, int columnas2)
{
    int i = 0;
    while (i < filas)
    {
        int j = 0;
        while (j < columnas2)
        {
            matrizResultante[i][j] = 0;
            int k = 0;
            while (k < columnas1)
            {
                matrizResultante[i][j] += matriz1[i][k] * matriz2[k][j];
                k++;
            }
            j++;
        }
        i++;
    }
}

int main()
{
    int fila1, columna1, fila2, columna2;
    cout << "Ingrese el numero de filas y columnas para la primera matriz: ";
    cin >> fila1 >> columna1;

    cout << "Ingrese el numero de filas y columnas para la segunda matriz: ";
    cin >> fila2 >> columna2;

    if (columna1 != fila2)
    {
        cout << "Las matrices no son compatibles para la multiplicacion... \n";
        return 0;
    }

    int matriz1[10][10], matriz2[10][10], matrizResultante[10][10] = {0};

    cout << "Ingresa los elementos de la primera matriz: \n";
    elementosMatrices(matriz1, fila1, columna1);

    cout << "Ingresa los elementos de la segunda matriz: \n";
    elementosMatrices(matriz2, fila2, columna2);

    multiplicarMatrices(matriz1, matriz2, matrizResultante, fila1, columna1, columna2);

    cout << "El producto de las matrices es: \n";
    int i = 0;
    while (i < fila1)
    {
        int j = 0;
        while (j < columna2)
        {
            cout << matrizResultante[i][j] << " ";
            j++;
        }
        cout << "\n";
        i++;
    }

    return 0;
}