// Materia: Programación I, Paralelo 4
// Autor: juan andres blanco miranda 
// Carnet: 5553521
// Fecha creación: 2/03/2026
/*1. Simular el lanzamiento de un dado n veces y determinar la frecuencia de
repetición de las caras pares.
*/
#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    int pares=0;
    int dado,l;
    srand(time(NULL));
    cout<<"ingrese la cantidad de lanzamientos :  ";
    cin>>l;
    for (int i = 1; i <= l; i++)
    {
        dado=rand()%6+1;
        
        if (dado%2==0)
        {
            pares++;
        }
        
    }
    cout<<"la cantidad de lanzamientos fueron "<<l<<" y las caras pares son : "<<pares<<endl;
    
    
     
    
    
    return 0;
}
    