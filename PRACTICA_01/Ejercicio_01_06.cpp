// Materia: Programación I, Paralelo 4 
// Autor: juan andres blanco miranda 
// Carnet: 5553521
// Carrera del estudiante: diseño digital
// Fecha creación: 17/02/2026
/*Realice un programa que lea un valor entero y determine si se trata de un  
número par o impar.*/

#include <iostream>

using namespace std;

int main() 
{
    int num;
    cout<<"ingrese el numero : ";
    cin>>num;
    if (num%2==0)
    {
        cout<<"es par";
    }
    else  {
        cout<<"es impar";
    }
    return 0;

    

    
}
