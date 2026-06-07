// Materia: Programación I, Paralelo 4
// Autor: JUAN ANDRES BLANCO MIRANDA
// Fecha creación: 13/05/2026
// Número de ejercicio: 2

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Función para contar palabras leyendo con el operador >>
void contarPalabras() {
    ifstream archivo("texto.txt");
    if (!archivo.is_open()) {
        cout << "Error: El archivo texto.txt no existe." << endl;
        return;
    }

    string palabra;
    int contador = 0;

    // El operador >> salta automáticamente espacios y saltos de línea
    while (archivo >> palabra) {
        contador++;
    }
    
    archivo.close();
    cout << "El archivo texto.txt contiene: " << contador << " palabras." << endl;
}

int main() {
    system("cls");
    contarPalabras();
    return 0;
}