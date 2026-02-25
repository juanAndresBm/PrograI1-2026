// Materia: Programación I, Paralelo 4 
// Autor: juan andres blanco miranda 
// Carnet: 5553521
// Carrera del estudiante: diseño digital
// Fecha creación: 25/02/2026
/**/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    int secreto, num, intentos = 0;
   
    srand(time(0));
    secreto = rand() % 100 + 1;
    
    cout << "Adivina el número (1-100):" << endl;
    
    do {
        cout << "Intento " << ++intentos << ": ";
        cin >> num;
        
        if (num < secreto)
            cout << "Mayor" << endl;
        else if (num > secreto)
            cout << "Menor" << endl;
            
    } while (num != secreto);
    
    cout << "\n¡Correcto! Lo adivinaste en " << intentos << " intentos" << endl;
    
    return 0;
}