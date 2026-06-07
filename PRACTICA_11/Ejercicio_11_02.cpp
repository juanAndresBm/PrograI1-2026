/*// Materia: Programación I, Paralelo 4 
// Autor: JUAN ANDRES BLANCO MIRANDA
// Ejercicio 2: Potencia de un número (a^n)
// Fecha creación: 20/05/2026*/

#include <iostream>

using namespace std;


int potencia(int base, int exponente) {
    
    if (exponente == 0) {
        return 1;
    }
    
    return base * potencia(base, exponente - 1);
}

int main() {
    system("cls");
    int b = 2, e = 3;
    
    cout << b << " elevado a la " << e << " es: " << potencia(b, e) << endl;
    
    return 0;
}