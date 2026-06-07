/*// PRÁCTICA ADICIONAL 2T 
// Materia: Programación I, Paralelo 4 
// Autor: JUAN ANDRES BLANCO MIRANDA
// Fecha creación: 20/05/2026*/

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib> 

using namespace std;
 
bool esPalindromo(string texto){
    string limpio="";
    for (int  i = 0; i < texto.size(); i++)
    {
        char c =texto[i];
        if(c>='A'&&c<='Z')c+=32;
        if(c>='a'&&c<='z')limpio+=c;
    }
    for (int i = 0; i < limpio.size()/2; i++)
    {
        if(limpio[i]!=limpio[limpio.size()-1-i])
            return false; 

    }
    return true;
}
 


int main()
{
    system("cls");
    string texto;
    cout<<"ingrese el texto :"<<endl;
    getline(cin,texto);
    if (esPalindromo(texto)) 
    { 
        cout<<"si es ";
    }
    else{ 
        cout<<"no es  "; 
    }
 


    return 0;
}
