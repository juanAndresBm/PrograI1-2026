// Materia: Programación I, Paralelo 4
// Autor: juan andres blanco miranda 
// Carnet: 5553521
// Fecha creación: 2/03/2026
/*Simular el lanzamiento de una moneda n veces y determinar el porcentaje de
caras y el porcentaje de cruz.

*/
#include <iostream>
#include<ctime> 
#include<cstdlib>
using namespace std;
int main()
{
    system("cls");
    int cara=0;
    int cruz=0;
    int l;
    int moneda;
    srand(time(NULL));
    cout<<"ingrese la cantidad de lanzamientos :  ";
    cin>>l;
    for (int i = 1; i <= l; i++)
    { 
        moneda=rand()%2+1;
        
        if (moneda==1)
        { 
            cara++; 

        }
        else{  
            cruz++;

        }
        
    }
    cout<<"la cantidad de lanzamientos fueron "<<l<<" el porcentanje de caras son : "<<cara*100/l<<"%"<<endl;
    cout<<"y el porcentaje de cruz es de : "<<cruz*100/l<<"%"<<endl; 
    
     
     
    
    
    return 0;
}
    