/*// Materia: Programación I, Paralelo 4 
// Autor: JUAN ANDRES BLANCO MIRANDA
// Ejercicio 4: MCD usando Algoritmo de Euclides
// Fecha creación: 20/05/2026*/

#include <iostream>

using namespace std;


int calcularMCD(int a, int b) {
    
    if (b == 0) {
        return a;
    }
   
    return calcularMCD(b, a % b);
}

int main() {
    system("cls");
    int num1 = 48, num2 = 18;
    
    cout << "El MCD de " << num1 << " y " << num2 << " es: " << calcularMCD(num1, num2) << endl;
    
    return 0;
}