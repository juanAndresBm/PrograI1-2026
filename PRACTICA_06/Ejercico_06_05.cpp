// Materia: Programación I, Paralelo 4 
// Autor: Juan Andres Blanco Miranda 
// Carnet: 5553521
// Fecha creación: 01/04/2026



#include <iostream>
using namespace std;


double calcularArea(double lado) {
    return lado * lado;
}


double calcularArea(double base, double altura) {
    return base * altura;
}


double calcularArea(float radio, float PI) {
    return PI * radio * radio;
}

int main() {
    cout << "Ejercicio 5:" << endl;
    cout << "Área del cuadrado (lado=5): " << calcularArea(5.0) << endl;
    cout << "Área del rectángulo (base=4, altura=6): " << calcularArea(4.0, 6.0) << endl;
    cout << "Área del círculo (radio=3, PI=3.1416): " << calcularArea(3.0f, 3.1416f) << endl;
    cout << endl;
    
    return 0;
}