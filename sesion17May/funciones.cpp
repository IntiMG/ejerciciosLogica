#include <iostream>
#include "variables.h"
using namespace std;

int menu();
void start();
void addGrade();
void showGrades();
void showHighestGrade();
void showLowestGrade();
float showAverage();

int menu()
{
    int option;
    system("cls || clear");
    cout << "1. Ingresar notas" << endl;
    cout << "2. Mostrar notas" << endl;
    cout << "3. Nota mas alta" << endl;
    cout << "4. Nota mas baja" << endl;
    cout << "5. Promedio" << endl;
    cout << "6. Salir" << endl;
    cout << "Ingrese una opcion: ";
    cin >> option;
    return option;
}

void start()
{
    int option;
    while (option != 6)
    {
        option = menu();
        switch (option)
        {
        case 1:
            cout << "Ingresar notas" << endl;
            addGrade();
            system("pause");
            break;
        case 2:
            showGrades();
            break;
        case 3:
            showHighestGrade();
            system("pause");
            break;
        case 4:
            showLowestGrade();
            system("pause");
            break;
        case 5:
            showAverage();
            system("pause");
            break;
        case 6:
            cout << "Salir" << endl;
            system("pause");
            break;
        default:
            cout << "Opcion no valida" << endl;
            system("pause");
            break;
        }
    }
}

void addGrade()
{
    if (position < MAX)
    {
        cout << "Ingrese la nota: ";
        cin >> grades[position];
        position++;
    }
    else
    {
        cout << "No hay espacio para mas notas" << endl;
    }
}

void showGrades()
{
    cout << "Mostrar notas" << endl;
    for (int i = 0; i < position; i++)
    {
        cout << "Nota " << i + 1 << ": " << grades[i] << endl;
    }
    system("pause");
}

void showHighestGrade()
{
    int highest = grades[0];
    for (int i = 0; i < position; i++)
    {
        if (grades[i] > highest)
        {
            highest = grades[i];
        }
    }
    cout << "La nota mas alta es: " << highest << endl;
}

void showLowestGrade()
{
    int lowest = grades[0];
    for (int i = 0; i < position; i++)
    {
        if (grades[i] < lowest)
        {
            lowest = grades[i];
        }
    }
    cout << "La nota mas baja es: " << lowest << endl;
}

float showAverage(){
    float promedio = 0, suma = 0;
    for(int i = 0; i < position; i++){
        suma += grades[i];
    }
    promedio = suma / position;
    cout << "El promedio de las notas es de: " << promedio << endl;
    return promedio;
}