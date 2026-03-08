// Materia: Programación I, Paralelo 4
// Autor: Juan Andres Blanco Miranda
// Carnet: 5553521
// Carrera del estudiante:Diseño Digital
// Fecha creación: 07/03/2026
/*Sumatoria de Naturales: Realice una función que reciba un número entero 
positivo N y calcule la suma de todos los números desde 1 hasta N mediante un 
ciclo. */



#include <iostream>
#include<ctime>
#include <cstdlib>
using namespace std;

int sumatoria(int num);

int main()  
{
    system("cls");
    
    int num; 
    cout<<"INGRESE EL NUMERO POSITIVO "<<endl;  
    cin>>num;
    cout<<"la suma de todos los numero del 1 al "<<num<<" es : "<<sumatoria(num);
    
      
    return 0; 
}
 
int sumatoria (int num){
    int sum=0;
    for (int i = 1 ; i <=num; i++)
    {
        sum+=i;
    }
    return sum; 
}   