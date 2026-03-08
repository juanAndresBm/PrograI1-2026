// Materia: Programación I, Paralelo 4
// Autor: Juan Andres Blanco Miranda
// Carnet: 5553521
// Carrera del estudiante:Diseño Digital
// Fecha creación: 08/03/2026
/*Cálculo de Física (MRU): Cree una función para calcular la distancia recorrida por 
un objeto, recibiendo como parámetros la velocidad constante y el tiempo (d=v * 
t).*/



#include <iostream>
#include<ctime>
#include <cstdlib>
using namespace std;
float calculodistancia(float v,float t);



int main()  
{
    system("cls");
     
    
    float v,t; 
    cout<<"ingrese la velocidad en km: ";
    cin>>v; 
    cout<<"ingrese el tiempo en horas : ";
    cin>>t;
 
    cout<<"LA DISTANCIA ES :  "<<calculodistancia(v,t)<<" K/h";
    
      
    return 0; 
}
 
float calculodistancia(float v,float t){
    return v*t;//recuerda q esto acorta el codigo  
}