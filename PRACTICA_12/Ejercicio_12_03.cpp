// Materia: Programación I, Paralelo 4
// Autor: JUAN ANDRES BLANCO MIRANDA
// Fecha creación: 13/05/2026
// Número de ejercicio: 3

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Función para añadir estudiantes al archivo de texto
void registrarEstudiantes() {
    ofstream archivo("estudiantes.txt", ios::app); // ios::app permite añadir sin borrar lo anterior
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo." << endl;
        return;
    }

    int cantidad;
    string nombre;
    int edad;
    float promedio;

    cout << "Cuantos estudiantes desea registrar?: ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++) {
        cin.ignore();
        cout << "\nEstudiante " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        getline(cin, nombre);
        cout << "Edad: ";
        cin >> edad;
        cout << "Promedio: ";
        cin >> promedio;

        archivo << "Nombre: " << nombre << endl;
        archivo << "Edad: " << edad << endl;
        archivo << "Promedio: " << promedio << endl;
    }
    archivo.close();
    cout << "\nRegistros guardados correctamente." << endl;
}

// Función para leer y mostrar los bloques estructurados de los estudiantes
void mostrarEstudiantes() {
    ifstream archivo("estudiantes.txt");
    if (!archivo.is_open()) {
        cout << "Error al leer el archivo de estudiantes." << endl;
        return;
    }

    string linea;
    cout << "\n--- LISTA GENERAL DE ESTUDIANTES ---" << endl;
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }
    archivo.close();
}

int main() {
    system("cls");
    registrarEstudiantes();
    mostrarEstudiantes();
    return 0;
}