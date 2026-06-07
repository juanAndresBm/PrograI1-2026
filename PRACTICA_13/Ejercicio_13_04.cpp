// Materia: Programación I, Paralelo 4
// Autor: JUAN ANDRES BLANCO MIRANDA
// Fecha creación: 22/05/2026
// Número de ejercicio: 4

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct EmpleadoUCB {
    string nombre;
    string genero;
    double salario;
};

void leerTrabajadores(vector<EmpleadoUCB> &trabajadores, int n) {
    for (int i = 0; i < n; i++) {
        EmpleadoUCB e;
        cout << "\nTrabajador " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        getline(cin, e.nombre);
        cout << "Genero: ";
        getline(cin, e.genero);
        cout << "Salario: ";
        cin >> e.salario;
        cin.ignore();
        trabajadores.push_back(e);
    }
}

void analizarSalarios(vector<EmpleadoUCB> trabajadores) {
    if (trabajadores.empty()) return;

    EmpleadoUCB mayor = trabajadores[0];
    EmpleadoUCB menor = trabajadores[0];

    for (size_t i = 1; i < trabajadores.size(); i++) {
        if (trabajadores[i].salario > mayor.salario) {
            mayor = trabajadores[i];
        }
        if (trabajadores[i].salario < menor.salario) {
            menor = trabajadores[i];
        }
    }

    cout << "\n--- EMPLEADO CON MAYOR SALARIO ---" << endl;
    cout << "Nombre: " << mayor.nombre << " | Genero: " << mayor.genero << " | Salario: " << mayor.salario << endl;

    cout << "\n--- EMPLEADO CON MENOR SALARIO ---" << endl;
    cout << "Nombre: " << menor.nombre << " | Genero: " << menor.genero << " | Salario: " << menor.salario << endl;
}

int main() {
    system("cls");
    int n;
    cout << "Ingrese el numero de trabajadores: ";
    cin >> n;
    cin.ignore();

    vector<EmpleadoUCB> trabajadores;
    leerTrabajadores(trabajadores, n);
    analizarSalarios(trabajadores);
    return 0;
}