// Materia: Programación I, Paralelo 4 
// Autor: Juan Andres Blanco Miranda 
// Carnet: 5553521
// Fecha creación: 01/04/2026



#include <iostream>
using namespace std;

void ModificarValores(int valor, int &referencia) {
    valor *= 2;  
    referencia += 10;  
    cout << "Dentro de la función - valor (por valor): " << valor << endl;
    cout << "Dentro de la función - referencia: " << referencia << endl;
}

int main() {
    int a = 5, b = 20;
    
    cout << "Ejercicio 3:" << endl;
    cout << "Antes de llamar: a = " << a << ", b = " << b << endl;
    
    ModificarValores(a, b);
    
    cout << "Después de llamar: a = " << a << ", b = " << b << endl;
    cout << endl;
    
    return 0;
}