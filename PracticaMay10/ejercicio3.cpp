/*Escribe un programa que solicite al usuario un número entero no negativo y
calcule su factorial. */

#include <iostream>

using namespace std;

int main()
{
    int i = 1, num = 0;
    int factorial = 1;
    cout << "Ingresa un numero entero no negativo: ";
    cin >> num;

    if(num < 0){
        cout << "No se puede usar un numero negativo..." << endl;
        return 0;   
    }

    while(i <= num){
        factorial = factorial * i;
        i++;
    }

    cout << "El factorial es: " << factorial << endl;
    return 0;
}