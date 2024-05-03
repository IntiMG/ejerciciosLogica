/*Crea un programa que permita al usuario ingresar dos vectores de la 
misma longitud y luego calcule su producto punto. Muestra el resultado 
al finalizar el cálculo. */

#include <iostream>
using namespace std;

void inputVector(int vec[], int length);
int dotProduct(int vec1[], int vec2[], int length);

int main() {
    int length;
    cout << "Enter the length of the vectors: ";
    cin >> length;

    int vector1[length], vector2[length];

    cout << "Enter the elements of the first vector:\n";
    inputVector(vector1, length);

    cout << "Enter the elements of the second vector:\n";
    inputVector(vector2, length);

    int product = dotProduct(vector1, vector2, length);

    cout << "The dot product of the vectors is: " << product << endl;

    return 0;
}

void inputVector(int vec[], int length) {
    for (int i = 0; i < length; i++) {
        cin >> vec[i];
    }
}

int dotProduct(int vec1[], int vec2[], int length) {
    int product = 0;
    for (int i = 0; i < length; i++) {
        product += vec1[i] * vec2[i];
    }
    return product;
}