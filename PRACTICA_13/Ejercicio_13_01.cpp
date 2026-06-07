// Materia: Programación I, Paralelo 4
// Autor: JUAN ANDRES BLANCO MIRANDA
// Fecha creación: 22/05/2026
// Número de ejercicio: 1

#include <iostream>
#include <string>

using namespace std;

struct Libro {
    string titulo;
    string autor;
    int anio_publicacion;
    bool disponible;
};

void registrarLibro(Libro &l) {
    cout << "Titulo: ";
    getline(cin, l.titulo);
    cout << "Autor: ";
    getline(cin, l.autor);
    cout << "Anio de publicacion: ";
    cin >> l.anio_publicacion;
    cout << "Disponible (1: Si, 0: No): ";
    cin >> l.disponible;
    cin.ignore();
}

void mostrarLibro(Libro l) {
    cout << "\n--- DATOS DEL LIBRO ---" << endl;
    cout << "Titulo: " << l.titulo << endl;
    cout << "Autor: " << l.autor << endl;
    cout << "Anio: " << l.anio_publicacion << endl;
    cout << "Estado: " << (l.disponible ? "Disponible" : "No disponible") << endl;
}

int main() {
    system("cls");
    Libro miLibro;
    registrarLibro(miLibro);
    mostrarLibro(miLibro);
    return 0;
}