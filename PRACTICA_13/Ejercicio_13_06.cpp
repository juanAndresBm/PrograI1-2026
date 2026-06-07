// Materia: Programación I, Paralelo 4
// Autor: JUAN ANDRES BLANCO MIRANDA
// Fecha creación: 22/05/2026
// Número de ejercicio: 6

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Empleado {
    string nombre;
    int id;
    double sueldo;
    int antiguedad;
};

void ingresarEmpleados(vector<Empleado> &lista, int n) {
    for (int i = 0; i < n; i++) {
        Empleado e;
        cout << "\nEmpleado " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        getline(cin, e.nombre);
        cout << "ID: ";
        cin >> e.id;
        cout << "Sueldo: ";
        cin >> e.sueldo;
        cout << "Antiguedad (anios): ";
        cin >> e.antiguedad;
        cin.ignore();
        lista.push_back(e);
    }
}

int contarSueldoMayor(vector<Empleado> lista, double filtroSueldo) {
    int contador = 0;
    for (size_t i = 0; i < lista.size(); i++) {
        if (lista[i].sueldo > filtroSueldo) {
            contador++;
        }
    }
    return contador;
}

double calcularPromedioAntiguedad(vector<Empleado> lista) {
    if (lista.empty()) return 0;
    double suma = 0;
    for (size_t i = 0; i < lista.size(); i++) {
        suma += lista[i].antiguedad;
    }
    return suma / lista.size();
}

int main() {
    system("cls");
    int n;
    cout << "Cantidad de empleados: ";
    cin >> n;
    cin.ignore();

    vector<Empleado> lista;
    ingresarEmpleados(lista, n);

    double valorSueldo;
    cout << "\nIngrese el sueldo limite para evaluar: ";
    cin >> valorSueldo;

    cout << "\nEmpleados con sueldo mayor a " << valorSueldo << ": " << contarSueldoMayor(lista, valorSueldo) << endl;
    cout << "Promedio de antiguedad del personal: " << calcularPromedioAntiguedad(lista) << " anios" << endl;
    return 0;
}