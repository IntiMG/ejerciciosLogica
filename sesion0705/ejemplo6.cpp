/* Leer un numero y dar la tabla de multiplicacion */
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num = 0;
    int i = 0;
    cout << "Ingresa un numero: ";
    cin >> num;

    while(i <= 12){
        int resultado = i * num;
        cout << num << " * " << i << " = " << resultado << endl;
        i++;
    }



    return 0;
}
