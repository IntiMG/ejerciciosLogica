/*Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector. */

#include <iostream>

using namespace std;

void elementosVectores(int longitud, int vec[]);

void sumaVectores(int suma[], int longitud, int vec1[], int vec2[]);

int main()
{

    int longitud = 0;
    int i = 0;

    cout << "Ingresa la longitud para los dos vectores: ";
    cin >> longitud;

    int vector1[longitud];
    int vector2[longitud];
    int suma[longitud];

    cout << "Ingrese los elementos del primer vector: \n";
    elementosVectores(longitud, vector1);

    cout << "Ingrese los elementos del segundo vector: \n";
    elementosVectores(longitud, vector2);

    cout << "La suma de los vectores es de: ";

    sumaVectores(suma, longitud, vector1, vector2);
    
    cout << "La suma de los vectores es de: \n";

    while(i < longitud){
        cout << suma[i] << endl;
        i++;
    }

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

void sumaVectores(int suma[], int longitud, int vec1[], int vec2[]){
    int i = 0;
    while(i < longitud){
        suma[i] = vec1[i] + vec2[i];
        i++;
    }
}