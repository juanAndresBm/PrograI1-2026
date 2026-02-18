// Materia: Programación I, Paralelo 4 
// Autor: juan andres blanco miranda 
// Carnet: 5553521
// Carrera del estudiante: diseño digital
// Fecha creación: 17/02/2026
//Escribir un programa que de la entrada estándar el precio de un producto y 
//muestre en la salida estándar el precio del producto al aplicarle el IVA 
//(IVA=13%)


#include <iostream>
using namespace std;

int main ()
{
    double precio;
    cout<<"ingrese el precio del producto : ";
    cin>>precio;
    double iva=precio*0.13;
    double total=iva+precio;
    cout<<"el precio total con el iva es de : "<<total<<endl;
    return 0;


}