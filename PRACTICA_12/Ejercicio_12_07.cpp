// Materia: Programación I, Paralelo 4
// Autor: JUAN ANDRES BLANCO MIRANDA
// Fecha creación: 13/05/2026
// Número de ejercicio: 7

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

// Función que lee strings por línea entera para procesar múltiples notas indefinidas
void calcularPromedios() {
    ifstream entrada("calificaciones.txt");
    if (!entrada.is_open()) {
        cout << "Error: El archivo calificaciones.txt no existe." << endl;
        return;
    }

    ofstream salida("promedios.txt");
    string linea;

    // Leemos fila por fila completa usando stringstream para no amarrarnos a un número fijo de notas
    while (getline(entrada, linea)) {
        if(linea.empty()) continue;
        
        stringstream ss(linea);
        string nombre;
        ss >> nombre; // El primer elemento siempre es el nombre

        float nota;
        float suma = 0;
        int contadorNotas = 0;

        // Sumamos todas las notas dinámicas que tenga la fila
        while (ss >> nota) {
            suma += nota;
            contadorNotas++;
        }

        float promedio = (contadorNotas > 0) ? (suma / contadorNotas) : 0;
        salida << nombre << " " << promedio << endl;
    }

    entrada.close();
    salida.close();
    cout << "Los promedios se calcularon y guardaron en promedios.txt con exito." << endl;
}

int main() {
    system("cls");
    calcularPromedios();
    return 0;
}