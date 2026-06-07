// Materia: Programación I, Paralelo 4
// Autor: JUAN ANDRES BLANCO MIRANDA
// Fecha creación: 22/05/2026
// Número de ejercicio: 2

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Atleta {
    string nombre;
    string pais;
    int edad;
    int mejor_tiempo;
};

void pedirAtletas(vector<Atleta> &atletas, int n) {
    for (int i = 0; i < n; i++) {
        Atleta a;
        cout << "\nAtleta " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        getline(cin, a.nombre);
        cout << "Pais: ";
        getline(cin, a.pais);
        cout << "Edad: ";
        cin >> a.edad;
        cout << "Mejor tiempo (segundos): ";
        cin >> a.mejor_tiempo;
        cin.ignore();
        atletas.push_back(a);
    }
}

void mostrarMejorAtleta(vector<Atleta> atletas) {
    if (atletas.empty()) return;
    
    Atleta mejor = atletas[0];
    for (size_t i = 1; i < atletas.size(); i++) {
        if (atletas[i].mejor_tiempo < mejor.mejor_tiempo) {
            mejor = atletas[i];
        }
    }
    cout << "\n--- ATLETA CON MEJOR TIEMPO ---" << endl;
    cout << "Nombre: " << mejor.nombre << endl;
    cout << "Pais: " << mejor.pais << endl;
}

int main() {
    system("cls");
    int n;
    cout << "Ingrese la cantidad de atletas: ";
    cin >> n;
    cin.ignore();
    
    vector<Atleta> atletas;
    pedirAtletas(atletas, n);
    mostrarMejorAtleta(atletas);
    return 0;
}