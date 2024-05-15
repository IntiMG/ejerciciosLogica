#include <iostream>
#include "funciones.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    showMessage();

    int x = 0;
    int y = 0;

    cout << "Ingrese el valor de x: ";
    cin >> x;
    
    cout << "Ingrese el valor de y: ";
    cin >> y;
    cout << "La suma de es: " << sumar(x, y) << endl;

    return 0;
}
