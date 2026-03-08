// Materia: Programación I, Paralelo 4
// Autor: Juan Andres Blanco Miranda
// Carnet: 5553521
// Carrera del estudiante:Diseño Digital
// Fecha creación: 07/03/2026
/*Volumen de un Cilindro: Implemente una función que reciba el radio y la altura de 
un cilindro y retorne su volumen (V=π * r * r * h). Utilice una constante para el valor 
de π. */

#include <iostream>
#include<ctime>
#include <cstdlib>
const float PI = 3.1416; 
using namespace std;


float volumen(float r,float h);





int main()  
{ 

    system("cls");
    float r,h; 
    cout<<"INGRESE EL RADIO : "<<endl; 
    cin>>r;
    cout<<"INGRESE LA ALTURA : "<<endl; 
    cin>>h;
    
   
    cout<<"el volumen es: "<<volumen(r,h);
    
     

    
     
    return 0;
}

float volumen(float r,float h){
    float volumen;
    return PI*r*r*h;
}