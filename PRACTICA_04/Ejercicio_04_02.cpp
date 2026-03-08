// Materia: Programación I, Paralelo 4
// Autor: Juan Andres Blanco Miranda
// Carnet: 5553521
// Carrera del estudiante:Diseño Digital
// Fecha creación: 07/03/2026
/*Determinación de Mayoría: Cree una función que reciba tres números enteros y 
devuelva el mayor de ellos. El programa principal debe capturar los tres valores y 
mostrar el resultado.*/

#include <iostream>
#include<ctime>
#include <cstdlib>
using namespace std;

int elmayor(int a,int b,int c);


int main() 
{

    system("cls");
    int  a,b,c; 
    cout<<"ingreseel 1er numero : "<<endl; 
    cin>>a;
    cout<<"ingreseel 2do numero : "<<endl; 
    cin>>b;
    cout<<"ingreseel 3er numero : "<<endl; 
    cin>>c;

    cout<<"el numero mayor es: "<<elmayor(a,b,c);
    
    

    
     
    return 0;
}

int elmayor(int a,int b,int c){
    int mayor=a;
    if(b>mayor)b=mayor;
    if(c>b)c=mayor;    
    return mayor;
    
}
