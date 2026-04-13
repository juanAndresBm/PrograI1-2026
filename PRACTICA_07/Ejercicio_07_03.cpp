// Materia: Programación I, Paralelo 4 
// Autor: Juan Andres Blanco Miranda 
// Carnet: 5553521
// Fecha creación: 12/04/2026

#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int N;
    cout << "Numero de calificaciones: ";
    cin >> N;
    
    vector<double> calif(N), desv(N);
    double suma = 0;
    
    for (int i = 0; i < N; i++) {
        cout << "Calificacion " << i + 1 << ": ";
        cin >> calif[i];
        suma += calif[i];
    }
    
    double promedio = suma / N;
    
    for (int i = 0; i < N; i++) {
        desv[i] = calif[i] - promedio;
    }
    
    double sumaCuad = 0;
    for (int i = 0; i < N; i++) {
        sumaCuad += desv[i] * desv[i];
    }
    double varianza = sumaCuad / N;
    
    cout << fixed << setprecision(2);
    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Varianza: " << varianza << endl;
    cout << "\nCalif  Desv\n";
    for (int i = 0; i < N; i++) {
        cout << calif[i] << "   " << desv[i] << endl;
    }
    
    return 0;
}