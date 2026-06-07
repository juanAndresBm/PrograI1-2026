// Materia: Programación I, Paralelo 4
// Autor: JUAN ANDRES BLANCO MIRANDA
// Fecha creación: 13/05/2026
// Número de ejercicio: 8

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;


void procesarDocumento() {
    ifstream archivo("documento.txt");
    if (!archivo.is_open()) {
        cout << "Error: El archivo documento.txt no existe." << endl;
        return;
    }

    string linea;
    int totalLineas = 0;
    int totalPalabras = 0;
    int totalCaracteres = 0;

    
    while (getline(archivo, linea)) {
        totalLineas++;
        totalCaracteres += linea.length(); 

        
        stringstream ss(linea);
        string palabra;
        while (ss >> palabra) {
            totalPalabras++;
        }
    }

    archivo.close();

    cout << "--- METADATA DEL DOCUMENTO ---" << endl;
    cout << "Total de Lineas: " << totalLineas << endl;
    cout << "Total de Palabras: " << totalPalabras << endl;
    cout << "Total de Caracteres: " << totalCaracteres << endl;
}

int main() {
    system("cls");
    procesarDocumento();
    return 0;
}