/*Dado un número natural n se desea calcular la suma de los números 
naturales desde 1 hasta n. Codifica el programa que resuelva este 
planteamiento. */

#include <iostream>

using namespace std;

int main(){
    int num = 0;
    int suma = 0;
    int i = 0;

    cout << "Ingrese un numero: ";
    cin >> num;

    while( i <= num){
        suma += i;
        i++;
    }

    cout << "La suma de los numeros naturales desde 1 hasta " << num << " es de: " << suma << endl; 
    return 0;
}