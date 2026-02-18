// Materia: Programación I, Paralelo 4 
// Autor: juan andres blanco miranda 
// Carnet: 5553521
// Carrera del estudiante: diseño digital
// Fecha creación: 17/02/2026
/* Mostrar los meses del año, pidiéndole al usuario un número entre (1-12), y 
mostrar el mes al que corresponde.*/

#include <iostream>
using namespace std;

int main() 
{
    int mes;
    cout<<"ingrese numeros del 1 al 12 : ";
    cin>>mes;
    switch (mes)
    {
    case 1:
        cout<<"enero";
        break;
    case 2:
        cout<<"febrero";
        break;
    case 3:
        cout<<"marzo";
        break;
    case 4:
        cout<<"abril";
        break;
    case 5:
        cout<<"mayo";
        break;
    case 6:
        cout<<"junio";
        break;
    case 7:
        cout<<"julio";
        break;
    case 8:
        cout<<"agosto";
        break;
    case 9:
        cout<<"septiembre";
        break;
    case 10:
        cout<<"octubre";
        break;
    case 11:
        cout<<"noviembre";
        break;
    case 12:
        cout<<"diciembre";
        break;
    
    default:
        break;
    }
    
   
    return 0;
   

    
}
