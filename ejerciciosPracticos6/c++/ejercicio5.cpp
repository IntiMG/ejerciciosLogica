/*Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo
Nota mínima para aprobar: 70 */

#include <iostream>

using namespace std;

int calcularAprobados(int notas[8]);

float calcularPromedio(int notas[8]);

int main() {
    int notas[8];
    float promedio;
    for (int i = 0; i < 8; i++) {
        cout << "Ingrese la nota del estudiante: ";
        cin >> notas[i];
    }

    int aprobados = calcularAprobados(notas);
    int reprobados = 8 - aprobados;

    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
  
    promedio = calcularPromedio(notas);
    cout << "Promedio general del grupo: " << promedio << endl;

    return 0;
}

int calcularAprobados(int notas[8]){
    int aprobados = 0;
    for (int i = 0; i < 8; i++) {
        if (notas[i] >= 70) {
            aprobados++;
        }
    }
    return aprobados;
}

float calcularPromedio(int notas[8]) {
    float suma = 0;
    for (int i = 0; i < 8; i++) {
        suma += notas[i];
    }
    return suma / 8;
}