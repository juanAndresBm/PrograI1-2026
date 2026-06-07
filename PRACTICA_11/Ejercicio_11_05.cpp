/*// Materia: Programación I, Paralelo 4 
// Autor: JUAN ANDRES BLANCO MIRANDA
// Ejercicio 1: Suma de dígitos de un número
// Fecha creación: 20/05/2026*/

#include <iostream>

using namespace std;


int sumaDigitos(int n) {
    
    if (n < 10) {
        return n;
    }
   
    return (n % 10) + sumaDigitos(n / 10);
}

int main() {
    system("cls");
    int numero = 1234;
    
    cout << "Numero: " << numero << endl;
    cout << "La suma de sus digitos es: " << sumaDigitos(numero) << endl;
    
    return 0;
}