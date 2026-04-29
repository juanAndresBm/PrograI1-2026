//PROGRAMACION 1 
//ESTUDIANTE : JUAN ANDRES BLANCO MIRANDA
//FECHA 29/04/26

#//PROGRAMACION 1 
//ESTUDIANTE : JUAN ANDRES BLANCO MIRANDA
//FECHA 29/04/26
#include <iostream>
#include <vector>
#include <iostream>
#include <string>


#include <iostream>
#include <string>
using namespace std;
 

char Mayuscula(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32;  
    }
    return c;
}


char Minuscula(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;  
    }
    return c;
} 


string CapitalizarPalabras(string texto) {
    if (texto.length() == 0) {
        return texto;  
    }
    
    string resultado = "";
    bool nuevaPalabra = true;  
    
    for (int i = 0; i < texto.length(); i++) {
        char c = texto[i];
        
        if (c == ' ') {
           
            resultado = resultado + c;
            nuevaPalabra = true;  
        } else {
            if (nuevaPalabra) {
                
                resultado = resultado + Mayuscula(c);
                nuevaPalabra = false;
            } else {
                
                resultado = resultado + Minuscula(c);
            }
        }
    }
    
    return resultado;
}

int main() {
    string texto = "hola mundo desde c++";
    
    cout << "Original:  \"" << texto << "\"" << endl;
    cout << "Modificado: \"" << CapitalizarPalabras(texto) << "\"" << endl;
    
    return 0;
}

