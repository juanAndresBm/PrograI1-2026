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
using namespace std;


char Minuscula(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;  
    }
    return c; 
}

bool EsLetra(char c) {
    c = Minuscula(c);
    return (c >= 'a' && c <= 'z');
}


bool EsDigito(char c) {
    return (c >= '0' && c <= '9');
}


bool EsValido(char c) {
    return (EsLetra(c) || EsDigito(c));
}


string Normalizar(string texto) {
    string resultado = "";
    
    for (int i = 0; i < texto.length(); i++) {
        char c = texto[i];
        
      
        if (EsValido(c)) {
            resultado = resultado + Minuscula(c);
        }
       
    }
    
    return resultado;
}


bool EsPalindromo(string texto) {
   
    string normalizado = Normalizar(texto);
    
    
    int longitud = normalizado.length();
    
    for (int i = 0; i < longitud / 2; i++) {
        if (normalizado[i] != normalizado[longitud - 1 - i]) {
            return false;  
        } 
    }
    
    return true; 
} 

int main() {
    string texto = "Ana lleva al oso la avellana";
    
    cout << "Texto: \"" << texto << "\"" << endl;
    
    if (EsPalindromo(texto)) {
        cout << "ES PALÍNDROMO" << endl;
    } else {
        cout << "NO ES PALÍNDROMO" << endl;
    }
    
    return 0;
}