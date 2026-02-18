// Materia: Programación I, Paralelo 4 
// Autor: juan andres blanco miranda 
// Carnet: 5553521
// Carrera del estudiante: diseño digital
// Fecha creación: 17/02/2026
/*Escribe un programa que lea de la entrada estándar tres números. Después  
debe leer un cuarto número e indicar si el número coincide con alguno de 
los introducidos con anterioridad.*/

#include <iostream>
using namespace std;

int main() 
{
    int num1,num2,num3,num4;
    cout<<"ingrese el primer numero : ";
    cin>>num1;
    cout<<"ingrese el 2do numero : ";
    cin>>num2;
    cout<<"ingrese el 3er numero : ";
    cin>>num3;
    cout<<"ingrese el 3er numero : ";
    cin>>num4;
    
    if (num4==num1)
    {
        cout<<"4to numero coincide con el 1ro";
    }
    else if (num4==num2)
    {
        cout<<"4to numero coincide con el 2do";
    }
    else if (num4==num3)
    {
        cout<<"4to numero coincide con el 3ro";
    }
    else{
        cout<<"el 4to no coincide con ninguno";
    }
    
    
    return 0;
   

    
}
