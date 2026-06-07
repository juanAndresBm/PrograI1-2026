/*// PRÁCTICA ADICIONAL 2T 
// Materia: Programación I, Paralelo 4 
// Autor: JUAN ANDRES BLANCO MIRANDA
// Fecha creación: 20/05/2026*/

#include <iostream>
#include <string>
#include <vector>


using namespace std;


vector<string>repetidos(vector<string>n1,vector<string>n2){
    vector<string>repetidos;
   
    for (int  i = 0; i < n1.size(); i++)
    {
        for ( int j  = 0; j< n2.size(); j++)
        {
            if (n1[i]==n2[j])
            {
                  
                repetidos.push_back(n1[i]);
                
                
            }
             
            
        } 
        
    }
    return repetidos;
    

}


int main()

{
    system("cls");
    int repetidoscont=0;

    vector<string>e1{"juan","pedro","lucho","maria","paco","bianchi","hugo","davo","cobra"};
    vector<string>e2{"juan","pedro","luto","percola","rico","bianchi","hugo","poto","culo"};

    system("cls");
    
    vector<string>resultado=repetidos(e1,e2);
    
    for (int i = 0; i < resultado.size(); i++)
    { 
        cout<<"el duplicado Nro "<< i+ 1<<" es : " <<resultado[i]<<endl;
    } 
    

   
     
    

   
 
    

    return 0;
}










/*for (int  i = 0; i < empresa1.size(); i++)
    {
        for ( int j  = 0; j< empresa2.size(); j++)
        {
            if (empresa1[i]==empresa2[j])
            {
                repetidos++;  
                cout<<"el repetido N"<<" "<<i+1 <<" es : " <<empresa1[i]<<endl ;
                
                
            }
             
            
        } 
        
    }
    */