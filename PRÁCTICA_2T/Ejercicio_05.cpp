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

using namespace std;

int generarAleatorio(int inf,int sup){
    return (rand() % (sup - inf + 1)) + inf;
} 


void llenarmatriz (int matriz[4][7]){
    for (int  i = 0; i < 4; i++)
    {
        for (int  j = 0; j < 7; j++)
        {
            matriz[i][j]=generarAleatorio(1000,10000);
        }
        
    }
    
}
 
void imprimirMatriz(int matriz[4][7]){
    cout<<"\t"<<"\tlunes"<<"\tmartes"<<"\tmiercoles"<<"  jueves"<<" viernes"<<" sabado"<<" domingo"<<endl;
    cout<<endl;
    for (int i = 0; i < 4; i++)    
    {   
        cout<<"SUCURSAL "<<i+1<<"\t"; 
        for (int j = 0; j< 7; j++)
        { 
            cout<<matriz[i][j]<<"\t";  
        }
        cout<<endl; 
        
    }
    


}

void calcularporsucursal(int matriz [4][7]){
    cout<<"TOTAL VENTAS X SUCURSAL "<<endl;
    
    for (int i = 0; i < 4; i++) 
    {
        int suma = 0; 
        for (int j = 0; j < 7; j++) 
        {
            suma+=matriz[i][j];
        }
        cout<<"sucursal  " << i+ 1 << " vendio en total : "<<suma<<endl; 
         
        
    }
    
}
void sumarpordia(int matriz[4][7]){
    cout<<"SUMA POR DIA "<<endl;
    for (int j = 0; j < 7; j++)
    {
        int sumadia=0;
        for (int i = 0; i < 4; i++)
        {
            sumadia+=matriz[i][j]; 
        }
        cout<<"la suma de dia "<<j+1<<"es : "<<sumadia<<endl;
        
    }
    
}

int main()
{
    system("cls"); 
    int matriz[4][7];
    llenarmatriz(matriz);
    imprimirMatriz(matriz); 
    calcularporsucursal(matriz);
    sumarpordia(matriz);

     
 

    return 0;
}
