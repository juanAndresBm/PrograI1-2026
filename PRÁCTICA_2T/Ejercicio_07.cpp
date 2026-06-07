/*// PRÁCTICA ADICIONAL 2T 
// Materia: Programación I, Paralelo 4 
// Autor: JUAN ANDRES BLANCO MIRANDA
// Fecha creación: 20/05/2026*/



#include <iostream>
#include <cstdlib>   
#include <ctime>     
#include <vector>
#include <string>   


using namespace std;
int generarAleatorio(int inf,int sup){
    return (rand() % (sup - inf + 1)) + inf;
} 

void llenarMatriz(int matriz [5][24]){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 24; j++)
        {
            matriz[i][j]=generarAleatorio(20,40);
        }
        
    }
    
}

void verificarAlertas(int matriz[5][24],vector<string>pacientes){
    int umbral=38;
    for (int  i = 0; i < 5; i++) 
    {
        int contadorfiebre=0;
        for (int j = 0; j < 24; j++)
        {
            if (matriz[i][j]>umbral)
            {
                contadorfiebre++;
            } 
            
        } 
        if (contadorfiebre>3)
        {
            cout<<"Paciente : "<<pacientes[i]<< " supero los "<<umbral<<" rados"<<" mas de 3 veces "<<endl;  
        } 
         
           
    }  
    

}

int main(int argc, char const *argv[])
{
     srand(time(0));
    system("cls");
    vector<string>pacientes={"Ana Torroja","Juan Luna","Sergio Murillo","Liliana Espinoza","Mercedes Lima"};
    int matriz[5][24];
    llenarMatriz(matriz);
    verificarAlertas(matriz,pacientes);    

  
    return 0;
}

