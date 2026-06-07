// Materia: Programación I, Paralelo 4
// Autor: JUAN ANDRES BLANCO MIRANDA
// Fecha creación: 22/05/2026
// Número de ejercicio: 8

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct AtletaOlimpico {
    string nombre;
    string departamento;
    string deporte;
    int medallas;
};

struct MedalleroDepto {
    string departamento;
    int totalMedallas;
};

void registrarAtletasOlimpicos(vector<AtletaOlimpico> &atletas, int n) {
    for (int i = 0; i < n; i++) {
        AtletaOlimpico a;
        cout << "\nAtleta " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        getline(cin, a.nombre);
        cout << "Departamento (ej. La Paz, Cochabamba, Santa Cruz): ";
        getline(cin, a.departamento);
        cout << "Deporte: ";
        getline(cin, a.deporte);
        cout << "Cantidad de medallas ganadas: ";
        cin >> a.medallas;
        cin.ignore();
        atletas.push_back(a);
    }
}

void procesarMedalleroFinal(vector<AtletaOlimpico> atletas) {
    vector<MedalleroDepto> medallero;

    for (size_t i = 0; i < atletas.size(); i++) {
        bool encontrado = false;
        for (size_t j = 0; j < medallero.size(); j++) {
            if (medallero[j].departamento == atletas[i].departamento) {
                medallero[j].totalMedallas += atletas[i].medallas;
                encontrado = true;
                break;
            }
        }
        if (!encontrado) {
            MedalleroDepto nuevoDepto;
            nuevoDepto.departamento = atletas[i].departamento;
            nuevoDepto.totalMedallas = atletas[i].medallas;
            medallero.push_back(nuevoDepto);
        }
    }

    cout << "\n--- MEDALLERO FINAL POR DEPARTAMENTO ---" << endl;
    for (size_t i = 0; i < medallero.size(); i++) {
        cout << medallero[i].departamento << ": " << medallero[i].totalMedallas << " medallas" << endl;
    }
}

int main() {
    system("cls");
    int n;
    cout << "Cantidad de atletas a registrar: ";
    cin >> n;
    cin.ignore();

    vector<AtletaOlimpico> atletas;
    registrarAtletasOlimpicos(atletas, n);
    procesarMedalleroFinal(atletas);
    return 0;
}