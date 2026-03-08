// Materia: Programación I, Paralelo 4
// Autor: Juan Andres Blanco Miranda
// Carnet: 5553521
// Carrera del estudiante:Diseño Digital
// Fecha creación: 07/03/2026

#include <iostream>
#include<ctime>
#include <cstdlib>
using namespace std;

float calculararea(float base,float altura);


int main()
{
    system("cls");
    float base,altura;
    cout<<"ingrese la base "<<endl;
    cin>>base;

    cout<<"ingrese la altura"<<endl;
    cin>>altura;
    calculararea(base,altura);
    cout<<"el area es : "<<calculararea(base,altura)<<endl;//aqui ya no es necesario poner int 

    
     
    return 0;
}

float calculararea(float base,float altura){
    float area=0;
    
    area=(base*altura)/2;
    return(area);//recordar lo que va devolver 

}