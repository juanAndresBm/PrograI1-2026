// Materia: Programación I, Paralelo 4
// Autor: JUAN ANDRES BLANCO MIRANDA
// Fecha creación: 13/05/2026
// Número de ejercicio: 9

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


void cifradoCesar() {
    ifstream entrada("mensaje.txt");
    if (!entrada.is_open()) {
        cout << "Error: El archivo mensaje.txt no existe." << endl;
        return;
    }

    ofstream salida("mensaje_cifrado.txt");
    char c;
    int desplazamiento = 3;


    while (entrada.get(c)) {

        if (c >= 'A' && c <= 'Z') {
            c = ((c - 'A' + desplazamiento) % 26) + 'A';
        }
        
        else if (c >= 'a' && c <= 'z') {
            c = ((c - 'a' + desplazamiento) % 26) + 'a';
        }
        
        salida.put(c);
    }

    entrada.close();
    salida.close();
    cout << "Cifrado completado. El resultado se guardo en mensaje_cifrado.txt" << endl;
}

int main() {
    system("cls");
    cifradoCesar();
    return 0;
}