/*Ejemplo de un if adentro de un while*/
/*un programa que imprima los numeros impares desde 1 hasta un numero n*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i = 1;
    int num = 0;

    cout << "Dime un numero: ";
    cin >> num;

    while(i <= num){
        if(i % 2 == 0){
            cout << i << endl;
        }
        i++;
    }
    return 0;
}
