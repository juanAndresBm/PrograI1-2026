// Materia: Programación I, Paralelo 4
// Autor: juan andres blanco miranda 
// Carnet: 5553521
// Fecha creación: 2/03/2026
/*5. Genere N número aleatorios entre 1 y 10000, muéstrelos en pantalla y cuente 
cuantos números son primos.
*/
#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;

int main() {
    int N, num, contadorPrimos = 0;
    
    srand(time(NULL));
    
    cout << "Cuantos numeros? ";
    cin >> N;
    
    cout << "\nNumeros generados:" << endl;
    
    for(int i = 1; i <= N; i++) {
        num = rand() % 10000 + 1; 
        cout << num << " ";
        
        
        int divisores = 0;
        for(int j = 1; j <= num; j++) {
            if(num % j == 0) {
                divisores++;
            }
        }
        
        if(divisores == 2) {
            contadorPrimos++;
        }
    }
    
    cout << "\n\nCantidad de numeros primos : " << contadorPrimos << endl;
    
    return 0;
}