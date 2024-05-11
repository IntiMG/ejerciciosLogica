/*Escribe un programa que solicite al usuario un número entero positivo y luego 
imprima todos los números desde 1 hasta ese número. */

#include <iostream>

using namespace std;

int main(){
    int i = 1, num = 0;
    cout << "Ingrese el numero: ";
    cin >> num;

    cout << "Los numero desde 1 hasta " << num << " son: " << endl;
    while(i <= num){
        cout << i << endl;
        i++;
    }
    return 0;
}