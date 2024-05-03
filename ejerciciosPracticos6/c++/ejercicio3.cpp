/*Escriba el programa para calcular la suma de los cuadrados de los
números entre 1 y 100. */

#include <iostream>
using namespace std;

void cuadrados();

main()
{
    cuadrados();
}

void cuadrados(){
    int cuadrado;
    cout << "La suma de los cuadrados es de: ";
    for(int i = 1; i <= 100; i++){
        cuadrado += i*i;
    }
    cout << cuadrado << endl;
}