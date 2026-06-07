/*// Materia: Programación I, Paralelo 4 
// Autor: JUAN ANDRES BLANCO MIRANDA
// Ejercicio 8: Conjetura de Ullman (Collatz)
// Fecha creación: 20/05/2026*/

#include <iostream>

using namespace std;


void conjeturaUllman(int n) {
    
    cout << n << " ";
    
    
    if (n == 1) {
        return;
    }
    
   
    if (n % 2 == 0) {
        
        conjeturaUllman(n / 2);
    } else {
       
        conjeturaUllman((n * 3) + 1);
    }
}

int main() {
    system("cls");
    int inicio = 26; 
    
    cout << "Secuencia de Ullman para el numero " << inicio << ":" << endl;
    conjeturaUllman(inicio);
    cout << endl;
    
    return 0;
}