// Materia: Programación I, Paralelo 4 
// Autor: juan andres blanco miranda 
// Carnet: 5553521
// Carrera del estudiante: diseño digital
// Fecha creación: 17/02/2026
/*Escriba un programa que solicite una edad (un entero) e indique en la 
salida estándar si la edad introducida está en el rango [18-25]. */

#include <iostream>
using namespace std;

int main() 
{
    int edad;
    cout<<"ingrese la edad : ";
    cin>>edad;
    if (edad>=18&&edad<=25)
    {
        cout<<"esta en el rango";
    }
    else{
        cout<<"no esta en el rango";
    }
    return 0;
   

    
}
