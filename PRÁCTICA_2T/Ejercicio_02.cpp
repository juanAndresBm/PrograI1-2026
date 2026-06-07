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

int generarAleatorio(int inf,int sup){
    return (rand() % (sup - inf + 1)) + inf;
} 

void llenarVector(vector<int>&numeros,int n){
    for (int i = 0; i < n; i++) 
    {
        numeros.push_back(generarAleatorio(0,255));
        if(i>0)cout<<" ";  
        cout<<numeros[i]; 
    }
     
}
vector<int>llenarxRangos(vector<int>&numeros){
    vector<int>resultado(26,0);
    for (int i = 0; i < numeros.size(); i++)
    {
        int posicion=numeros[i]/10;
        resultado[posicion]++;
    }
    return resultado;
    
}
void imprimirVector(vector<int>rangos){
    cout<<"RESULTADO : "<<endl; 
    for (int i = 0; i < rangos.size(); i++)
    {  
        cout<<"Rangos "<<i*10<<"-->"<<rangos[i]<<" Pixels"<<endl; 
    }
     
 
}

int main()
 
{
    srand(time(NULL)); 
 
    vector<int>numeros;
    vector<int>resultado; 

    cout<<"Pixels : ";
    llenarVector(numeros,15);

    resultado=llenarxRangos(numeros);
    imprimirVector(resultado);
  

    
    return 0;
}
