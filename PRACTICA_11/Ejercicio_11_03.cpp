/*// Materia: Programación I, Paralelo 4 
// Autor: JUAN ANDRES BLANCO MIRANDA
// Ejercicio 3: Enesimo numero de Fibonacci
// Fecha creación: 20/05/2026*/

#include <iostream>

using namespace std;


int fibonacci(int n) {
    
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    system("cls");
    int posicion = 6; 
    
    cout << "El numero en la posicion " << posicion << " de Fibonacci es: " << fibonacci(posicion) << endl;
    
    return 0;
}