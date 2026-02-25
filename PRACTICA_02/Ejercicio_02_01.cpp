// Materia: Programación I, Paralelo 4 
// Autor: juan andres blanco miranda 
// Carnet: 5553521
// Carrera del estudiante: diseño digital
// Fecha creación: 25/02/2026
/*1. Realice un programa que solicite de la entrada un entero del 1 al  10 y 
muestre en la salida su tabla de multiplicar. */
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"ingrese el numero entero del 1 al 10 : ";
    cin>>num;
    for (int  i = 1; i <11; i++)
    {
        cout<<num<<"x"<<i<<"="<<i*num<<endl;
    }
    
    return 0;
}
