// Materia: Programación I, Paralelo 4
// Autor: JUAN ANDRES BLANCO MIRANDA
// Fecha creación: 22/05/2026
// Número de ejercicio: 3

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Alumno {
    int cedula;
    string nombre;
    string apellido;
    int edad;
    string profesion;
    string lugar_nacimiento;
    string direccion;
    int telefono;
};

void llenarAlumnos(vector<Alumno> &alumnos, int n) {
    for (int i = 0; i < n; i++) {
        Alumno a;
        cout << "\nAlumno " << i + 1 << ":" << endl;
        cout << "Cedula: ";
        cin >> a.cedula;
        cin.ignore();
        cout << "Nombre: ";
        getline(cin, a.nombre);
        cout << "Apellido: ";
        getline(cin, a.apellido);
        cout << "Edad: ";
        cin >> a.edad;
        cin.ignore();
        cout << "Profesion: ";
        getline(cin, a.profesion);
        cout << "Lugar de nacimiento: ";
        getline(cin, a.lugar_nacimiento);
        cout << "Direccion: ";
        getline(cin, a.direccion);
        cout << "Telefono: ";
        cin >> a.telefono;
        cin.ignore();
        alumnos.push_back(a);
    }
}

void desplegarAlumnos(vector<Alumno> alumnos) {
    cout << "\n--- LISTA DE ALUMNOS REGISTRADOS ---" << endl;
    for (size_t i = 0; i < alumnos.size(); i++) {
        cout << "\nAlumno " << i + 1 << ":" << endl;
        cout << "CI: " << alumnos[i].cedula << " - " << alumnos[i].nombre << " " << alumnos[i].apellido << endl;
        cout << "Edad: " << alumnos[i].edad << " - Profesion: " << alumnos[i].profesion << endl;
        cout << "Nacio en: " << alumnos[i].lugar_nacimiento << " - Direccion: " << alumnos[i].direccion << endl;
        cout << "Telefono: " << alumnos[i].telefono << endl;
    }
}

int main() {
    system("cls");
    int n;
    cout << "Cantidad de alumnos: ";
    cin >> n;
    cin.ignore();
    
    vector<Alumno> alumnos;
    llenarAlumnos(alumnos, n);
    desplegarAlumnos(alumnos);
    return 0;
}