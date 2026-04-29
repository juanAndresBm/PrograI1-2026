//PROGRAMACION 1 
//ESTUDIANTE : JUAN ANDRES BLANCO MIRANDA
//FECHA 29/04/26

#include <iostream>
#include <string>
using namespace std;

void DividirCadena(string cadena, char delimitador) {
    string token = "";
    
    
    for (int i = 0; i < cadena.length(); i++) {
        if (cadena[i] != delimitador) {
            
            token = token + cadena[i];
        } else {
          
            cout << token << endl;
            token = "";  
        }
    }
    
    
    if (token != "") {
        cout << token << endl;
    }
} 

int main() {
    string texto = "Esto,es,una,cadena,separada,por,comas";
    char delimitador = ',';
    
    cout << "Cadena original: " << texto << endl;
    cout << "\nTokens separados por '" << delimitador << "':" << endl;
    DividirCadena(texto, delimitador);
    
    return 0;
}