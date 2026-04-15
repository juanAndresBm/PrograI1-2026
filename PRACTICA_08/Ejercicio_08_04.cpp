//PROGRAMACION 1 
//ESTUDIANTE : JUAN ANDRES BLANCO MIRANDA
//FECHA 15/04/26
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

// Función para generar calificación aleatoria entre 0 y 100
int generarCalificacion() {
    return rand() % 101;  // 0 a 100 inclusive
}

// Función para determinar el rango de una calificación
string obtenerRango(int calificacion) {
    if(calificacion >= 0 && calificacion <= 59) {
        return "Reprobado";
    } else if(calificacion >= 60 && calificacion <= 79) {
        return "Regular";
    } else if(calificacion >= 80 && calificacion <= 89) {
        return "Bueno";
    } else {
        return "Excelente";
    }
}

// Función para contar estudiantes en cada rango
void contarPorRango(const vector<int> &calificaciones, 
                    int &reprobados, int &regular, int &bueno, int &excelente) {
    reprobados = 0;
    regular = 0;
    bueno = 0;
    excelente = 0;
    
    for(int i = 0; i < calificaciones.size(); i++) {
        if(calificaciones[i] >= 0 && calificaciones[i] <= 59) {
            reprobados++;
        } else if(calificaciones[i] >= 60 && calificaciones[i] <= 79) {
            regular++;
        } else if(calificaciones[i] >= 80 && calificaciones[i] <= 89) {
            bueno++;
        } else {
            excelente++;
        }
    }
}

// Función para calcular porcentaje
double calcularPorcentaje(int cantidad, int total) {
    return (double)cantidad / total * 100;
}

// Función para mostrar resultados
void mostrarResultados(const vector<int> &calificaciones, 
                       int reprobados, int regular, int bueno, int excelente) {
    int total = calificaciones.size();
    
    cout << fixed << setprecision(2);
    cout << "\n==========================================" << endl;
    cout << "       ANÁLISIS DE CALIFICACIONES" << endl;
    cout << "==========================================" << endl;
    
    // Mostrar todas las calificaciones
    cout << "\nCalificaciones generadas:" << endl;
    cout << "--------------------------" << endl;
    for(int i = 0; i < calificaciones.size(); i++) {
        cout << calificaciones[i];
        if((i + 1) % 10 == 0) {
            cout << endl;
        } else {
            cout << "  ";
        }
    }
    cout << endl;
    
    // Mostrar estadísticas por rango
    cout << "\n==========================================" << endl;
    cout << "       ESTADÍSTICAS POR RANGO" << endl;
    cout << "==========================================" << endl;
    
    cout << "\nRango 0-59   (Reprobado): " << reprobados << " estudiantes";
    cout << "  → " << calcularPorcentaje(reprobados, total) << "%" << endl;
    
    cout << "Rango 60-79  (Regular):   " << regular << " estudiantes";
    cout << "  → " << calcularPorcentaje(regular, total) << "%" << endl;
    
    cout << "Rango 80-89  (Bueno):     " << bueno << " estudiantes";
    cout << "  → " << calcularPorcentaje(bueno, total) << "%" << endl;
    
    cout << "Rango 90-100 (Excelente): " << excelente << " estudiantes";
    cout << "  → " << calcularPorcentaje(excelente, total) << "%" << endl;
    
    cout << "\n==========================================" << endl;
    cout << "TOTAL DE ESTUDIANTES: " << total << endl;
    cout << "==========================================" << endl;
}

int main() {
    srand(time(NULL));
    
    int N;
    vector<int> calificaciones;
    
    cout << "==========================================" << endl;
    cout << "   RANGO DE CALIFICACIONES DE UN CURSO" << endl;
    cout << "==========================================" << endl;
    
    cout << "\n¿Cuántos estudiantes tiene el curso? ";
    cin >> N;
    
    // Generar calificaciones aleatorias
    for(int i = 0; i < N; i++) {
        calificaciones.push_back(generarCalificacion());
    }
    
    // Contar estudiantes por rango
    int reprobados, regular, bueno, excelente;
    contarPorRango(calificaciones, reprobados, regular, bueno, excelente);
    
    // Mostrar resultados
    mostrarResultados(calificaciones, reprobados, regular, bueno, excelente);
    
    return 0;
}