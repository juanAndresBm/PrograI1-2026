// Materia: Programación I, Paralelo 4
// Autor: Juan Andres Blanco Miranda
// Carnet: 5553521
// Carrera del estudiante:Diseño Digital
// Fecha creación: 07/03/2026
/*Conversión de Divisas: Escriba una función que convierta un monto dado en 
bolivianos a dólares, recibiendo como parámetros la cantidad y el tipo de cambio 
oficial y paralelo. */


#include <iostream>
#include<ctime>
#include <cstdlib>
const float DOLARPARALELO = 6.96; 
const float DOLAROFICIAL = 9.16; 
using namespace std;


float oficial(float monto);
float paralelo(float monto);




int main()  
{ 

    system("cls");
    float monto; 
    cout<<"INGRESE EL MONTO EN BOLIVIANOS: "<<endl;  
    cin>>monto;

 
    cout<<"El dolar paralelo es : "<<paralelo(monto)<<" DOLARES"<<endl;
    cout<<"El dolar oficial es : "<<oficial(monto)<<" DOLAR ES"; 
     
     

    
     
    return 0;
}
 
float oficial(float monto){
    return monto/DOLAROFICIAL; 

}
float paralelo(float monto){ 
    return monto/DOLARPARALELO;
}
