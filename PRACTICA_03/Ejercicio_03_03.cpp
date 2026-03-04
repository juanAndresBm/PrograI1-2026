// Materia: Programación I, Paralelo 4
// Autor: juan andres blanco miranda 
// Carnet: 5553521
// Fecha creación: 2/03/2026
/*Genera un número aleatorio entre 1 y 10 y calcula su factorial.*/
#include <iostream>
#include<ctime> 
#include<cstdlib>
using namespace std;
int main()
{
    system("cls"); 
    int num;
    int factorial=1;
    srand(time(NULL)); 
    num=rand()%10+1;
    for (int  i = 1; i <=num; i++)  
    { 
        factorial*=i;
    }
    cout<<"El factorial de "<<num<<" es : "<<factorial<<endl ;  
     
    
         
   
     
     
     
    return 0;
}
    