/*// PRÁCTICA ADICIONAL 2T 
// Materia: Programación I, Paralelo 4 
// Autor: JUAN ANDRES BLANCO MIRANDA
// Fecha creación: 20/05/2026*/
/*// PRÁCTICA ADICIONAL 2T 
// Materia: Programación I, Paralelo 4 
// Autor: JUAN ANDRES BLANCO MIRANDA
// Ejercicio 5: Análisis de Ventas
// Fecha creación: 20/05/2026*/

#include <iostream>
#include <cstdlib>   
#include <ctime>     
#include <string>


using namespace std;

int generarAleatorio(int inf,int sup){
    return (rand() % (sup - inf + 1)) + inf;
} 

void llenarMatriz (int alumnos[20][3]){
    for (int  i = 0; i < 20; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            alumnos[i][j]=generarAleatorio(1,100);
        } 
        
    } 
    
 
}

void imprimirMatriz(int alumnos[20][3]){
    for (int  i = 0; i < 20; i++)
    {
        for (int j = 0; j < 3; j++)
        { 
            cout<<alumnos[i][j]<<"\t";
        }
        cout<<endl;
        
    }


    
    
}
 
void promedioalumnos(int alumnos[20][3]){
    int progneral=0; 
    int mejorpro=-1;
    int indice=0;
    for (int  i = 0; i < 20; i++)
    { 
        int promedio=0;
        for (int  j = 0; j < 3; j++) 
        { 
            promedio+=alumnos[i][j];
            
             
        }  
        cout<<i+1<<". "<<promedio/3<<endl ;
        progneral+=promedio/3;  
        if (promedio/3>mejorpro)
        {
            mejorpro=promedio/3; 
            indice=i+1;
        }
        
       
    }  
    cout<<"el promedio general es :" <<progneral/20<<endl; 
    cout<<"el mejor promedio es  : "<<mejorpro<<endl; 
    cout<<"y su numero en la lista es : "<<indice<<endl;   

     
}
int main()
{ 
    system("cls");
    int alumnos[20][3]; 
    
    llenarMatriz(alumnos); 
    imprimirMatriz(alumnos);
    cout<<"PROMEDIO DE LOS ALUMNOS "<<endl;
    promedioalumnos(alumnos);
 
    return 0;
}
 