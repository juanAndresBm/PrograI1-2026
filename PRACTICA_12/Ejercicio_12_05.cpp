// Materia: Programación I, Paralelo 4
// Autor: JUAN ANDRES BLANCO MIRANDA
// Fecha creación: 13/05/2026
// Número de ejercicio: 5

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

// Para actualizar, leemos el archivo entero, cambiamos el dato en memoria y reescribimos el archivo
void actualizarPrecio() {
    ifstream archivoLectura("productos.txt");
    if (!archivoLectura.is_open()) {
        cout << "Error: El archivo productos.txt no existe." << endl;
        return;
    }

    string productoBuscar;
    float nuevoPrecio;
    cout << "Ingrese el nombre del producto a actualizar: ";
    cin >> productoBuscar;
    cout << "Ingrese el nuevo precio: ";
    cin >> nuevoPrecio;

    vector<string> nombres;
    vector<float> precios;
    string prod;
    float prec;
    bool encontrado = false;

    // Guardamos temporalmente todo lo que está en el archivo actual
    while (archivoLectura >> prod >> prec) {
        if (prod == productoBuscar) {
            prec = nuevoPrecio;
            encontrado = true;
        }
        nombres.push_back(prod);
        precios.push_back(prec);
    }
    archivoLectura.close();

    if (!encontrado) {
        cout << "El producto '" << productoBuscar << "' no existe." << endl;
        return;
    }

    // Sobrescribimos el archivo con los datos modificados
    ofstream archivoEscritura("productos.txt");
    for (size_t i = 0; i < nombres.size(); i++) {
        archivoEscritura << nombres[i] << " " << precios[i] << endl;
    }
    archivoEscritura.close();
    cout << "Precio actualizado con éxito." << endl;
}

int main() {
    system("cls");
    actualizarPrecio();
    return 0;
}