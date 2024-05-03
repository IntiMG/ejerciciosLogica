/*Crea un programa que permita al usuario ingresar dos vectores de la 
misma longitud y luego calcule su producto punto. Muestra el resultado 
al finalizar el cálculo. */

#include <iostream>
using namespace std;

int resultado(int vector1[], int vector2[], int longitud);

main(){
    int longitud;
    int productoPunto;
    cout << "Ingrese la longitud de los dos vectores: ";
    cin >> longitud;
    
    int vector1[longitud];
    int vector2[longitud];

    cout << "Dime los elementos del primer vector: ";
    for(int i = 0; i < longitud; i++){
        cin >> vector1[i];
    }

    cout << "Dime los elementos del segundo vector: ";
    for(int i = 0; i < longitud; i++){
        cin >> vector2[i];
    }

    productoPunto = resultado(vector1, vector2, longitud);
    cout << "El prodcuto putno de los vectores es de: " << productoPunto << endl;
}

int resultado(int vector1[], int vector2[], int longitud){
    int resultado = 0;
    for(int i = 0; i < longitud; i++){
        resultado += vector1[i] * vector2[i];
    }
    return resultado;
}