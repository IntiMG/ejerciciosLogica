/*Realice un programa que permita calcular y dar como salida el 
promedio general de una sección, tomando en cuenta que está 
compuesta por 10 estudiantes y que se tiene la nota de cada uno de 
ellos. */

#include <iostream>
using namespace std;

int main() {
    int grades[10];
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Enter the grade for student " << i+1 << ": ";
        cin >> grades[i];
        sum += grades[i];
    }

    double average = static_cast<double>(sum) / 10;

    cout << "The average grade is " << average << endl;

    return 0;
}