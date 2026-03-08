// Materia: Programación I, Paralelo 4
// Autor: Juan Andres Blanco Miranda
// Carnet: 5553521
// Carrera del estudiante:Diseño Digital
// Fecha creación: 08/03/2026
/*Contador de Dígitos: Desarrolle una función que reciba un número entero positivo 
y devuelva la cantidad de dígitos que lo componen (utilizando divisiones 
sucesivas entre 10). */



#include <iostream>
#include<ctime>
#include <cstdlib>
using namespace std;
int digitos(int num);



int main()  
{
    system("cls");
     
    
    int num;
    cout<<"Ingrese el numero : ";
    cin>>num;
    cout<<"LA CANTIDAD DE NUMEROS ES : "<<digitos(num);
      
    return 0; 
}
  
int digitos(int num){ 
    int contador=0;


    while (num>0)
    { 
        num=num/10; 
        contador++;
        
    }
    return contador;
    

}



    