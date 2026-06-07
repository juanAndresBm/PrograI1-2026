// Materia: Programación I, Paralelo 4
// Autor: JUAN ANDRES BLANCO MIRANDA
// Fecha creación: 13/05/2026
// Número de ejercicio: 1

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


void escribirNombres() {
    ofstream archivo("nombres.txt");
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo para escribir." << endl;
        return;
    }

    int cantidad;
    string nombre;
    cout << "Cuantos nombres desea ingresar?: ";
    cin >> cantidad;
    cin.ignore(); 

    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese el nombre " << i + 1 << ": ";
        getline(cin, nombre);
        archivo << nombre << endl;
    }
    archivo.close();
    cout << "Nombres guardados con exito." << endl;
}


void leerNombres() {
    ifstream archivo("nombres.txt");
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo para leer." << endl;
        return;
    }

    string nombre;
    cout << "\n--- NOMBRES REGISTRADOS EN EL ARCHIVO ---" << endl;
    while (getline(archivo, nombre)) {
        cout << "- " << nombre << endl;
    }
    archivo.close();
}

int main() {
    system("cls");
    escribirNombres();
    leerNombres();
    return 0;
} 