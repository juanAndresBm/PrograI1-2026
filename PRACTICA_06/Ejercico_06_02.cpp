// Materia: Programación I, Paralelo 4 
// Autor: Juan Andres Blanco Miranda 
// Carnet: 5553521
// Fecha creación: 01/04/2026



#include <iostream>
#include <cmath>
using namespace std;

double CalcularVolumen(double radio, double altura = 10) {
    const double PI = 3.14159265358979323846;
    return PI * pow(radio, 2) * altura;
}

int main() {
    cout << "Ejercicio 2:" << endl;
    cout << "Volumen con radio=3, altura=5: " << CalcularVolumen(3, 5) << endl;
    cout << "Volumen con radio=3 (altura por defecto 10): " << CalcularVolumen(3) << endl;
    cout << endl;
    
    return 0;
}