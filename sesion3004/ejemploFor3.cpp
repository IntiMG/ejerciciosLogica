/*Muestra los numeros impares desde x hasta y*/
#include <iostream>

using namespace std;

void mostrarImpares(int x, int y);

main()
{
    int x, y;
    cout << "Dime donde inicia: ";
    cin >> x;
    cout << "Dime donde finaliza: ";
    cin >> y;
    mostrarImpares(x, y);
}

void mostrarImpares(int x, int y){
    for(int i = x; i <= y; i++){
        if(i % 2 != 0){
            cout << i << " ";
        }
    }
}