// Materia: Programación I, Paralelo 4 
// Autor: juan andres blanco miranda 
// Carnet: 5553521
// Carrera del estudiante: diseño digital
// Fecha creación: 17/02/2026
/*Realice un programa que lea de la entrada estándar los siguientes datos de 
una persona:  
a. Edad: dato de tipo entero.   
b. Sexo: dato de tipo carácter.  
c. Altura en metros: dato de tipo real.   
d. Tras leer los datos, el programa debe mostrarlos en la salida 
estándar. 
*/

#include <iostream>
using namespace std;

int main() 

{
    int edad;
    char sexo;
    float altura;
    cout<<"ingrese la edad : ";
    cin>>edad;
    cout<<"ingrese el sexo : ";
    cin>>sexo;
    cout<<"ingrese la altura ; ";
    cin>>altura;
    cout<<"la edad es : "<<edad<<endl;
    cout<<"el sexo es : "<<sexo<<endl;
    cout<<"la altura  es : "<<altura<<endl;
    return 0;

    
}
