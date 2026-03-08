// Materia: Programación I, Paralelo 4
// Autor: Juan Andres Blanco Miranda
// Carnet: 5553521
// Carrera del estudiante:Diseño Digital
// Fecha creación: 07/03/2026
/*Verificación de Paridad: Diseñe una función booleana que determine si un número 
entero es par. La función debe retornar true si es par y false en caso contrario. */



#include <iostream>
#include<ctime>
#include <cstdlib>
using namespace std;




bool par(int num);




int main()  
{ 

    system("cls");
    int num; 
    cout<<"INGRESE EL NUMERO "<<endl;  
    cin>>num;
    if(par(num))cout<<"ES PAR";
    else cout<<"ES IMPAR"; 
    
      
    return 0;
}
 
bool par(int num){

   
    
    
    return num%2==0; //acorta el codigo si mando una operacion para una funcion bool
}