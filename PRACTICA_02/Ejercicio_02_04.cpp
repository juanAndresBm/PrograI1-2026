// Materia: Programación I, Paralelo 4 
// Autor: juan andres blanco miranda 
// Carnet: 5553521
// Carrera del estudiante: diseño digital
// Fecha creación: 25/02/2026
/**/
#include<iostream>
using namespace std;

int main() {
    int n, suma = 0, factorial = 1;
    
    cout << "Ingresa n: ";
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        factorial = factorial * i;  
        suma = suma + factorial;    
    }
    
    cout << "La suma es: " << suma << endl;
    
    return 0;
}