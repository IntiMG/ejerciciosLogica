/*Crea un programa que permita al usuario ingresar dos vectores de la
misma longitud y luego calcule su producto punto. Muestra el resultado
al finalizar el cálculo. */

#include <iostream>

using namespace std;

void elementosVectores(int longitud, int vec[]);

int productoPunto(int longitud, int vec1[], int vec2[]);

int main()
{

    int longitud = 0;

    cout << "Ingresa la longitud para los dos vectores: ";
    cin >> longitud;

    int vector1[longitud];
    int vector2[longitud];

    cout << "Ingrese los elementos del primer vector: \n";
    elementosVectores(longitud, vector1);

    cout << "Ingrese los elementos del segundo vector: \n";
    elementosVectores(longitud, vector2);

    cout << "El prodcuto punto de los dos vectores es de: " << productoPunto(longitud, vector1, vector2) << endl;


    return 0;
}

void elementosVectores(int longitud, int vec[])
{
    int i = 0;
    while (i < longitud)
    {
        cin >> vec[i];
        i++;
    }
}

int productoPunto(int longitud, int vec1[], int vec2[])
{
    int i = 0;
    int producto = 0;
    while (i < longitud){
        producto += vec1[i] * vec2[i];
        i++;
    }

    return producto;
}