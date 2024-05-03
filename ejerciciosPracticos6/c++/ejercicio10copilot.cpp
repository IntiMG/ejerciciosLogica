/*Implementa un programa que solicite al usuario ingresar una matriz y
luego calcule su transposición. La transposición de una matriz se
realiza intercambiando filas por columnas. Imprime la matriz
transpuesta como salida.*/

#include <iostream>
using namespace std;

void inputMatrix(int matrix[][10], int rows, int columns);
void transposeMatrix(int matrix[][10], int transposed[][10], int rows, int columns);

int main() {
    int rows, columns;
    cout << "Enter the number of rows and columns for the matrix: ";
    cin >> rows >> columns;

    int matrix[10][10], transposed[10][10];

    cout << "Enter the elements of the matrix:\n";
    inputMatrix(matrix, rows, columns);

    transposeMatrix(matrix, transposed, rows, columns);

    cout << "The transpose of the matrix is:\n";
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transposed[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}

void inputMatrix(int matrix[][10], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }
}

void transposeMatrix(int matrix[][10], int transposed[][10], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}