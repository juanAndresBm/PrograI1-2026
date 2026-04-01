// Materia: Programación I, Paralelo 4 
// Autor: Juan Andres Blanco Miranda 
// Carnet: 5553521
// Fecha creación: 01/04/2026



#include <iostream>
using namespace std;

double CalcularPrecioTotal(double precioBase, double impuesto = 13.0) {
    return precioBase + (precioBase * impuesto / 100);
}

int main() {
    cout << "Ejercicio 4:" << endl;
    cout << "Precio total (100 Bs, 13% IVA): " << CalcularPrecioTotal(100) << " Bs" << endl;
    cout << "Precio total (100 Bs, 18% impuesto): " << CalcularPrecioTotal(100, 18) << " Bs" << endl;
    cout << endl;
    
    return 0;
}