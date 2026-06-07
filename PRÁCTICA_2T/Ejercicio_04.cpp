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

int GenerarAleatorio(int inf ,int sup){
     return (rand() % (sup - inf + 1)) + inf;
}

void llenarMatriz(int matriz[100][100],int filas, int columnas ){
    for (int  i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j]=GenerarAleatorio(50,200);
        } 
        
    } 
   
    

} 
void imprimirMatriz(int matriz[100][100],int filas,int columnas) {
    for (int  i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        { 
            cout<<matriz[i][j]<<"\t";     
         
        } 
        cout<<endl;
        
    }
    
    

}

int sumarPrimeraColumna (int matriz[100][100],int filas){
    int suma=0;
    for (int i = 0; i < filas; i++)
    {
        suma+=matriz[i][0]; 
    } 
    return suma;
    
}

int menorubi(int matriz[100][100],int filas, int  columnas,int &filamenor,int &colmenor){
    int menor=matriz[0][0];
    filamenor=0; 
    colmenor=0; 
    for (int i = 0; i < filas; i++)  
    {
        for (int j = 0; j < columnas; j++) 
        {
            if ( matriz[i][j]<menor) 
            {
                 
                menor=matriz[i][j];
                filamenor=i;
                colmenor=j;
            }
            
        }
        
    }
    return menor;

}
int productoTotal (int matriz[100][100],int columnas){
    int producto=1;
    for (int i = 0; i < columnas; i++)
    {
        producto*=matriz[0][i];
    }
    return producto;
    

}


int main()
{
    system("cls");
    int filas, columnas;
    int filamenor,colmenor;
    cout<<"ingrese el nro de filas :" <<endl;
    cin>>filas;
    cout<<"ingrese el nro de columnas :" <<endl; 
    cin>>columnas;
    int matriz[100][100]; 
    llenarMatriz(matriz, filas, columnas); 
    imprimirMatriz(matriz,filas,columnas);     
    int sumaprimera = sumarPrimeraColumna(matriz,filas); 
    cout<<"la suma de la primera columna es : "<<sumaprimera<<endl;
    int producto =productoTotal(matriz,columnas);  
    cout<<"el producto total de la primera fila es : "<<producto<<endl; 
    int menor = menorubi(matriz,filas,columnas,filamenor,colmenor);
    cout<<"el menor es : "<<menor<<" la fila es : ""["<<filamenor<<"]"<< " y la columna es : "<<"["<<colmenor<<"]";
   
     
    return 0;  
}
 