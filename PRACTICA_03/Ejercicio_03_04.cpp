// Materia: Programación I, Paralelo 4
// Autor: juan andres blanco miranda 
// Carnet: 5553521
// Fecha creación: 2/03/2026
/*Genere N números aleatorios entre 1 y 1000 y realice los siguientes cálculos:
a. Sumatoria de todos los números
b. Promedio
c. Mayor valor generado
d. Menor valor generado
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    system("cls");
    int N, num, suma = 0, mayor, menor;
    srand(time(NULL));
    
    
    cout << "Cuantos numeros? ";
    cin >> N;
    
    
    num = rand() % 1000 + 1;
    suma = num;
    mayor = num;
    menor = num;
    
    
    for (int i = 2; i <= N; i++) {
        num = rand() % 1000 + 1;
        suma += num;
        
        if (num > mayor) mayor = num;
        if (num < menor) menor = num;
    }
    
    cout << "\nSuma: " << suma << endl;
    cout << "Promedio: " << (double)suma / N << endl;
    cout << "Mayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;
    
    return 0;
}