/*Diseña un programa que solicite al usuario ingresar dos matrices y
luego realice la multiplicación de matrices. Asegúrate de que las
dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante. */

#include <iostream>
using namespace std;

void inputMatrix(int matrix[][10], int rows, int columns);
void multiplyMatrices(int matrix1[][10], int matrix2[][10], int result[][10], int rows1, int columns1, int columns2);

int main()
{
    int rows1, columns1, rows2, columns2;
    cout << "Enter the number of rows and columns for the first matrix: ";
    cin >> rows1 >> columns1;

    cout << "Enter the number of rows and columns for the second matrix: ";
    cin >> rows2 >> columns2;

    if (columns1 != rows2)
    {
        cout << "The matrices are not compatible for multiplication.\n";
        return 0;
    }

    int matrix1[10][10], matrix2[10][10], result[10][10] = {0};

    cout << "Enter the elements of the first matrix:\n";
    inputMatrix(matrix1, rows1, columns1);

    cout << "Enter the elements of the second matrix:\n";
    inputMatrix(matrix2, rows2, columns2);

    multiplyMatrices(matrix1, matrix2, result, rows1, columns1, columns2);

    cout << "The product of the matrices is:\n";
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}

void inputMatrix(int matrix[][10], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

void multiplyMatrices(int matrix1[][10], int matrix2[][10], int result[][10], int rows1, int columns1, int columns2)
{
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            for (int k = 0; k < columns1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}