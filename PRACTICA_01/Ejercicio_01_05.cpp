// Materia: Programación I, Paralelo 4 
// Autor: juan andres blanco miranda 
// Carnet: 5553521
// Carrera del estudiante: diseño digital
// Fecha creación: 17/02/2026
/*Escriba un programa que lea de la entrada estándar los dos catetos de un  
triángulo rectángulo y escriba en la salida estándar su hipotenusa.  */

#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double a, b;
    
    cout << "Ingrese el primer cateto: ";
    cin >> a;
    cout << "Ingrese el segundo cateto: ";
    cin >> b;
    
    double hipotenusa = sqrt(a*a + b*b);
    
    cout << "La hipotenusa es: " << hipotenusa << endl;
    
    return 0;
}
