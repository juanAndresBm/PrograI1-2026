// Materia: Programación I, Paralelo 4 
// Autor: juan andres blanco miranda 
// Carnet: 5553521
// Carrera del estudiante: diseño digital
// Fecha creación: 25/02/2026
/*Realice un programa que lea de la entrada de números entre 0 y 100, hasta 
que se introduzca un cero.  
En ese momento el programa debe terminar y mostrar la siguiente salida: 
• Suma todos los números ingresados. 
• Suma de todos los números pares. 
• Suma de todos los números impares. 
• Suma de todos los números primos.*/
#include<iostream>
using namespace std;

int main()
{
   
    int num;
    int sumapar = 0;
    int sumaimpar = 0;
    int primos = 0;
    int sumatotal = 0;
    
    cout << "Ingrese números entre 0 y 100 (0 para terminar):" << endl;
    
    do {
        cout << "Número: ";
        cin >> num;
        
   
        if (num != 0) {
            
            
            if (num >= 0 && num <= 100) {
                
                
                sumatotal += num;
                
                if (num % 2 == 0) {
                    sumapar += num;
                } else {
                    sumaimpar += num;
                }
                
                
                int divisores = 0;
                for (int i = 1; i <= num; i++) {
                    if (num % i == 0) {
                        divisores++;
                    }
                }
                
                if (divisores == 2) {
                    primos += num;
                }
                
            } else {
                cout << "Error: Debe ser entre 0 y 100" << endl;
            }
        }
        
    } while (num != 0);  
    
   
    cout << "\n=== RESULTADOS ===" << endl;
    cout << "Total: " << sumatotal << endl;
    cout << "Pares: " << sumapar << endl;
    cout << "Impares: " << sumaimpar << endl;
    cout << "Primos: " << primos << endl;
    
    

    
    return 0;
}
