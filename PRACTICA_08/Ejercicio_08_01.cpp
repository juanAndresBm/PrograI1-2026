//PROGRAMACION 1 
//ESTUDIANTE : JUAN ANDRES BLANCO MIRANDA
//FECHA 15/04/26
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;


int generaraleatorio(int tamaño){
    return rand()%tamaño;

}


int main()
{ 
    system("cls");
    srand(time(NULL));
    
    vector<string>nombres{"juan","pedro","luchito","sebas","maria","perra","zora","tanga","carlos","abi"};

    vector<string>apellidos{"cardenas","caceres","kewa","blanco","rocha","benitez","merced","mamani","miranda","nina"};

    vector<int>edades{54,84,7,44,12,21,65,67,98,6};

    int inombres =generaraleatorio(nombres.size());
    int iapellidos =generaraleatorio(apellidos.size());
    int iedades =generaraleatorio(edades.size()) ;

     
    cout<<"el nombre es : "<<nombres[inombres]<<endl;
    cout<<"el apellido es : "<<apellidos[iapellidos]<<endl;
    cout<<"la edad es : "<<edades[iedades]<<endl;  

 
    return 0;
}
 