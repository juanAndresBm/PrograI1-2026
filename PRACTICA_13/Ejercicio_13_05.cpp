// Materia: Programación I, Paralelo 4
// Autor: JUAN ANDRES BLANCO MIRANDA
// Fecha creación: 22/05/2026
// Número de ejercicio: 5

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Pelicula {
    string titulo;
    string director;
    int duracion;
    int anio_estreno;
    string genero;
};

void registrarPeliculas(vector<Pelicula> &catalogo, int n) {
    for (int i = 0; i < n; i++) {
        Pelicula p;
        cout << "\nPelicula " << i + 1 << ":" << endl;
        cout << "Titulo: ";
        getline(cin, p.titulo);
        cout << "Director: ";
        getline(cin, p.director);
        cout << "Duracion (minutos): ";
        cin >> p.duracion;
        cout << "Anio de estreno: ";
        cin >> p.anio_estreno;
        cin.ignore();
        cout << "Genero: ";
        getline(cin, p.genero);
        catalogo.push_back(p);
    }
}

void buscarPorGenero(vector<Pelicula> catalogo) {
    string g;
    cout << "\nIngrese el genero a buscar: ";
    getline(cin, g);
    cout << "--- RESULTADOS POR GENERO ---" << endl;
    for (size_t i = 0; i < catalogo.size(); i++) {
        if (catalogo[i].genero == g) {
            cout << "- " << catalogo[i].titulo << " (" << catalogo[i].anio_estreno << ")" << endl;
        }
    }
}

void buscarPorDirector(vector<Pelicula> catalogo) {
    string d;
    cout << "\nIngrese el director a buscar: ";
    getline(cin, d);
    cout << "--- RESULTADOS POR DIRECTOR ---" << endl;
    for (size_t i = 0; i < catalogo.size(); i++) {
        if (catalogo[i].director == d) {
            cout << "- " << catalogo[i].titulo << " [" << catalogo[i].genero << "]" << endl;
        }
    }
}

int main() {
    system("cls");
    int n;
    cout << "Cantidad de peliculas: ";
    cin >> n;
    cin.ignore();

    vector<Pelicula> catalogo;
    registrarPeliculas(catalogo, n);
    buscarPorGenero(catalogo);
    buscarPorDirector(catalogo);
    return 0;
}