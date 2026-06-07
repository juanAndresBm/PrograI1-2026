// Materia: Programación I, Paralelo 4
// Autor: JUAN ANDRES BLANCO MIRANDA
// Fecha creación: 13/05/2026
// Número de ejercicio: 6

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Función para filtrar y pasar ciudades que superan N grados a un nuevo archivo
void filtrarTemperaturas() {
    ifstream entrada("temperaturas.txt");
    if (!entrada.is_open()) {
        cout << "Error: El archivo temperaturas.txt no existe." << endl;
        return;
    }

    ofstream salida("altas_temperaturas.txt");
    float umbral;
    cout << "Ingrese la temperatura limite (N grados Celsius) para el filtro: ";
    cin >> umbral;

    string ciudad;
    float temp;
    int ciudadesFiltradas = 0;

    // Procesamos línea por línea
    while (entrada >> ciudad >> temp) {
        if (temp > umbral) {
            salida << ciudad << " " << temp << endl;
            ciudadesFiltradas++;
        }
    }

    entrada.close();
    salida.close();
    cout << "Filtrado completado. Se exportaron " << ciudadesFiltradas << " ciudades a altas_temperaturas.txt" << endl;
}

int main() {
    system("cls");
    filtrarTemperaturas();
    return 0;
}