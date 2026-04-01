// Materia: Programación I, Paralelo 4 
// Autor: Juan Andres Blanco Miranda 
// Carnet: 5553521
// Fecha creación: 01/04/2026



#include <iostream>
using namespace std;

void IntercambiarValores(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    
    cout << "Ejercicio 1:" << endl;
    cout << "Antes del intercambio: x = " << x << ", y = " << y << endl;
    
    IntercambiarValores(x, y);
    
    cout << "Después del intercambio: x = " << x << ", y = " << y << endl;
    cout << endl;
    
    return 0;
}