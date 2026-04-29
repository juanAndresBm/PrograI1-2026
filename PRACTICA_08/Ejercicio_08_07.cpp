//PROGRAMACION 1 
//ESTUDIANTE : JUAN ANDRES BLANCO MIRANDA
//FECHA 29/04/26

#include <iostream>
#include <string>
using namespace std;

string EliminarDigitos(string cadena) {
    string resultado = "";
    
   
    for (int i = 0; i < cadena.length(); i++) {
        
        if (cadena[i] < '0' || cadena[i] > '9') {
            
            resultado = resultado + cadena[i];
        }
         
    }
    
    return resultado;
}

int main() {
    string texto = "abc123def456";
    
    cout << "Entrada: \"" << texto << "\"" << endl;
    cout << "Salida:  \"" << EliminarDigitos(texto) << "\"" << endl;
    
    return 0;
}