/*// Materia: Programación I, Paralelo 4 
// Autor: JUAN ANDRES BLANCO MIRANDA
// Ejercicio 7: Suma recursiva de cuadrados Q(n)
// Fecha creación: 20/05/2026*/

#include <iostream>

using namespace std;


int calcularQ(int n) {
    
    if (n == 1) {
        return 1;
    }
    return (n * n) + calcularQ(n - 1);
}

int main() {
    system("cls");
    int n = 4; 
    
    cout << "Para n = " << n << ", el resultado de Q(n) es: " << calcularQ(n) << endl;
    
    return 0;
}