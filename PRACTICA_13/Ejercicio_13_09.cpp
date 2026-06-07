// Materia: Programación I, Paralelo 4
// Autor: JUAN ANDRES BLANCO MIRANDA
// Fecha creación: 22/05/2026
// Número de ejercicio: 9

#include <iostream>
#include <vector>

using namespace std;

struct AlumnoNotas {
    double t1, t2, t3, t4;
    double ef;
    double nf;
};

void capturarNotas(vector<AlumnoNotas> &curso, int n) {
    for (int i = 0; i < n; i++) {
        AlumnoNotas a;
        cout << "\nNotas Alumno " << i + 1 << ":" << endl;
        cout << "T1: "; cin >> a.t1;
        cout << "T2: "; cin >> a.t2;
        cout << "T3: "; cin >> a.t3;
        cout << "T4: "; cin >> a.t4;
        cout << "EF: "; cin >> a.ef;
        
        double np = (a.t1 + a.t2 + a.t3 + a.t4) / 4.0;
        a.nf = (0.7 * np) + (0.3 * a.ef);
        curso.push_back(a);
    }
}

void emitirReporteNotas(vector<AlumnoNotas> curso) {
    if (curso.empty()) return;

    double sumaNf = 0;
    double maximaNf = curso[0].nf;
    double minimaNf = curso[0].nf;

    cout << "\n--- NOTAS FINALES CALCULADAS ---" << endl;
    for (size_t i = 0; i < curso.size(); i++) {
        cout << "Alumno " << i + 1 << " -> Nota Final: " << curso[i].nf << endl;
        sumaNf += curso[i].nf;
        
        if (curso[i].nf > maximaNf) maximaNf = curso[i].nf;
        if (curso[i].nf < minimaNf) minimaNf = curso[i].nf;
    }

    cout << "\n--- ESTADISTICAS DEL CURSO ---" << endl;
    cout << "Promedio general de notas finales: " << sumaNf / curso.size() << endl;
    cout << "Nota maxima del curso: " << maximaNf << endl;
    cout << "Nota minima del curso: " << minimaNf << endl;
}

int main() {
    system("cls");
    int n;
    cout << "Ingrese el numero de alumnos del curso: ";
    cin >> n;

    vector<AlumnoNotas> curso;
    capturarNotas(curso, n);
    emitirReporteNotas(curso);
    return 0;
}