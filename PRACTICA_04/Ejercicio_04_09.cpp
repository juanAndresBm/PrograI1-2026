// Materia: Programación I, Paralelo 4
// Autor: Juan Andres Blanco Miranda
// Carnet: 5553521
// Carrera del estudiante:Diseño Digital
// Fecha creación: 08/03/2026
/*Promedio de Calificaciones: Implemente una función que reciba dos notas reales 
y devuelva el promedio aritmético de ambas.
*/



#include <iostream>
#include<ctime>
#include <cstdlib>
using namespace std;
int digitos(int num);

float promedio(float n2,float n1);

int main()  
{
    system("cls");
     
    
   float n1,n2;
   cout<<"ingrese la primera nota "<<endl;
   cin>>n1;
   cout<<"ingrese la 2da  nota "<<endl; 
   cin>>n2;
   cout<<"El promedio es "<<promedio(n1,n2);
      
    return 0; 
}
  
float promedio(float n2,float n1){
    return (n1+n2)/2;
}





    