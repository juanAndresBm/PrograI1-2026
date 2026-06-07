#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;


int generarAleatorio(int sup,int inf){
    return (rand() % (sup - inf + 1)) + inf; 
}

void llenarVector(vector<int>&numeros,int n){
    for (int i = 0; i < n; i++)
    {
        if (i<0)cout<<" ";
        cout<<numeros[i];
        
    }
    cout<<endl;
}

vector<int>llenarxrangos(vector<int>)
int main(int argc, char const *argv[])
{
    
    return 0;
}
