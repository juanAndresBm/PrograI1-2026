// Materia: Programación I, Paralelo 4 
// Autor: Juan Andres Blanco Miranda 
// Carnet: 5553521
// Fecha creación: 01/04/2026



#include <iostream>
#include <vector>
using namespace std;

void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota) {
    sumaTotal += nuevaNota;
    cantidadNotas++;
}

int main() {
    vector<double> notas = {85.5, 92.0, 78.5, 88.0, 95.5, 100.0};  
    double sumaTotal = 0;
    int cantidadNotas = 0;
    
    cout << "Ejercicio 7:" << endl;
    cout << "Notas ingresadas: ";
    
    for(int i = 0; i < notas.size(); i++) {
        agregarNota(sumaTotal, cantidadNotas, notas[i]);
        cout << notas[i];
        if(i < notas.size() - 1) cout << ", ";
    }
    
    cout << "\nCantidad de notas: " << cantidadNotas << endl;
    cout << "Suma total: " << sumaTotal << endl;
    cout << "Promedio: " << (sumaTotal / cantidadNotas) << endl;
    
    return 0;
}