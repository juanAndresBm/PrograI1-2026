//PROGRAMACION 1 
//ESTUDIANTE : JUAN ANDRES BLANCO MIRANDA
//FECHA 15/04/26

#include <iostream>
#include <string>
using namespace std;

string InvertirPalabras(string oracion) {
    
    string palabras[100];  
    int contadorPalabras = 0;
    string palabraActual = "";
    
   
    for (int i = 0; i < oracion.length(); i++) {
        if (oracion[i] != ' ') {
           
            palabraActual = palabraActual + oracion[i];
        } else {
            
            if (palabraActual != "") {
                palabras[contadorPalabras] = palabraActual;
                contadorPalabras++;
                palabraActual = "";  
            }
        }
    }
    
    
    if (palabraActual != "") {
        palabras[contadorPalabras] = palabraActual;
        contadorPalabras++;
    }
    
   
    string resultado = "";
    for (int i = contadorPalabras - 1; i >= 0; i--) {
        resultado = resultado + palabras[i];
        if (i > 0) {
            resultado = resultado + " ";  
        }
    }
    
    return resultado;
}

int main() {
    string oracion = "Hola mundo desde C++";
    
    cout << "Entrada: \"" << oracion << "\"" << endl;
    cout << "Salida:  \"" << InvertirPalabras(oracion) << "\"" << endl;
    
    return 0;
}