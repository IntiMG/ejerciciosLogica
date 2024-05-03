/*Dado un número natural n se desea calcular la suma de los números 
naturales desde 1 hasta n. Codifica el programa que resuelva este 
planteamiento. */

#include <iostream>

using namespace std;

void suma(int num);

main()
{
    int num;
    cout << "Ingrese el numero natural: ";
    cin >> num;
    suma(num);
}

void suma(int num){
    int suma;
    for(int i = 1; i <= num; i++){
        suma += i;
    }
    cout << "La suma es: " << suma <<endl;
}