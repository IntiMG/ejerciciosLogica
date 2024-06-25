#include <iostream>
#include <string.h>
#include <fstream>
#include <cstdlib>
#include "variables.h"

using namespace std;

CITY cities[MAX_REG];
int pos = 0;

// Funciones

void addCity(CITY *city);
CITY findCity(int id);
int findPos(int id);
void updateCity(CITY *city, int id);
void destroyCity(int id);
void mostrarTodo();
void editar();
void eliminar();
void buscar();
void showData(CITY &city);
int menu();
void principal();
void pedirDatos();


// Manejo de archivos
int loadCities();
void writeFile(const CITY &city);

void addCity(CITY *city)
{
    cities[pos] = *city;
    pos++;
}

CITY findCity(int id)
{
    CITY city;
    for (int i = 0; i < pos; i++)
    {
        if (cities[i].id == id)
        {
            return cities[i];
        }
    }
    return city;
}

int findPos(int id)
{
    for (int i = 0; i < pos; i++)
    {
        if (cities[i].id == id) return i;
    }
    return -1;
}

void updateCity(CITY *city, int id){
    int pos = findPos(id);
    strcpy(cities[pos].name, city->name);
    strcpy(cities[pos].description, city->description);
}

void destroyCity(int id){
    int position = findPos(id);
    for(int i = position; i < pos-1; i++){
        cities[i] = cities[i+1];
    }
    CITY c;
    cities[pos -1]= c;
    pos--;
}

int menu(){
    int op;
    cout << "Menu\n";
    cout << "1. Agregar \n";
    cout << "2. Editar \n";
    cout << "3. Eliminar \n";
    cout << "4. Mostrar todos \n";
    cout << "5. Buscar \n";
    cout << "6. Salir \n";
    cout << "Opcion: ";
    cin >> op;
    return op;
}

void principal(){
    int op;
    pos = loadCities();
    do{
        system("cls || clear");
        op = menu();
        
        switch(op){
            case 1:
                pedirDatos();
                system("Pause");
                break;
            case 2:
                editar();
                system("Pause");
                break;
            case 3:
                eliminar();
                system("Pause");
                break;
            case 4:
                mostrarTodo();
                system("Pause");
                break;
            case 5:
                buscar();
                system("Pause");
                break;
            case 6:
                cout << "Adios...\n";
                system("Pause");
                break;
            default:
                cout << "Deberías leer más";
                break;
        }

    }while(op != 6);
}

void pedirDatos(){
    CITY city;
    cout << "Datos de la Ciudad" << endl;
    cout << "ID: ";
    cin >> city.id;

    if(findPos(city.id) != -1){
        cout << "Registro ya existente..." << endl;
        return;
    }
    cout << "Nombre: ";
    scanf(" %[^\n]", city.name);
    cout << "Descripcion: ";
    scanf(" %[^\n]", city.description);
    addCity(&city);
    writeFile(city);
}

void mostrarTodo(){
    cout << "\nMostrando Registros\n";
    for(int i=0; i<pos; i++){
        showData(cities[i]);
    }
}

void editar(){
    CITY city;
    int position = 0;
    int id;
    cout << "ID: ";
    cin >> id;
    if(findPos(id) == -1){
        cout << "Registro no existe..." << endl;
        return;
    }
    city = findCity(id);
    cout << "Nombre: ";
    scanf(" %[^\n]", city.name);
    cout << "Descripcion: ";
    scanf(" %[^\n]", city.description);
    updateCity(&city, id);
    cout << "Registro actualizado...\n";
}

void eliminar(){
    CITY city;
    int id = 0;
    if(pos == 0){
        cout << "No hay nada que eliminar" << endl;
        return;
    }
    cout << "ID de la ciudad a eliminar: ";
    cin >> id;

    if(findPos(id) == -1){
        cout << "Registro no existe..." << endl;
        return;
    }

    destroyCity(id);
    ofstream archivo;

    archivo.open("cities.txt", ios::app);

    if(archivo.fail()){
        cout << "No se puede abrir el archivo" << endl;
        exit(1);
    }

    for(int i = 0; i < pos; i++){
        archivo << city.id << endl;
        archivo << city.name << endl;
        archivo << city.description << endl;
    }

    cout << "Ciudad eliminada.\n";
}

void buscar(){
    int id;
    cout << "ID de la ciudad a buscar: ";
    cin >> id;
    CITY city = findCity(id);
    int x = findPos(id);

    if(findPos(id) == -1){
        cout << "Registro no exitse..." << endl;
        return;
    }

    cout << "Ciudad encontrada..." << endl;
    cout << "Ciudad #" << x+1 << ": " << endl;
    showData(city);
}

void showData(CITY &city){
    cout << "ID de la ciudad: " << city.id << endl;
    cout << "Nombre de la ciudad: " << city.name << endl;
    cout << "Descripcion de la ciudad: " << city.description << endl;
    cout << "\n**********************************************\n";
}

int loadCities(){
    ifstream archivo("cities.txt");
    if(archivo.fail()){
        return 0;
    }
    int i = 0;
    while(archivo >> cities[i].id){
        archivo.ignore();
        archivo.getline(cities[i].name, 30);
        archivo.getline(cities[i].description, 100);
        i++;
    }
    archivo.close();
    return i;
}




void writeFile(const CITY &city){
    ofstream archivo;

    archivo.open("cities.txt", ios::app);

    if(archivo.fail()){
        cout << "No se puede abrir el archivo" << endl;
        exit(1);
    }

    archivo << city.id << endl;
    archivo << city.name << endl;
    archivo << city.description << endl;
    archivo.close();
}