// Materia: Programación I, Paralelo 4
// Autor: JUAN ANDRES BLANCO MIRANDA
// Fecha creación: 13/05/2026
// Número de ejercicio: 4

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Función para buscar y contar coincidencias de una palabra en un archivo
void buscarTexto() {
    ifstream archivo("datos.txt");
    if (!archivo.is_open()) {
        cout << "Error: El archivo datos.txt no existe." << endl;
        return;
    }

    string palabraBuscar;
    cout << "Ingrese la palabra o frase que desea buscar: ";
    getline(cin, palabraBuscar);

    string palabraArchivo;
    int contador = 0;

    // Buscamos palabra por palabra exacta
    while (archivo >> palabraArchivo) {
        if (palabraArchivo == palabraBuscar) {
            contador++;
        }
    }

    archivo.close();
    cout << "La palabra '" << palabraBuscar << "' aparece " << contador << " veces en el archivo." << endl;
}

int main() {
    system("cls");
    buscarTexto();
    return 0;
}