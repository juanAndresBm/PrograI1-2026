// Materia: Programación I, Paralelo 4
// Autor: juan andres blanco miranda 
// Carnet: 5553521
// Fecha creación: 2/03/2026
/*6.En una guardería hay N niños de 1, 2 y 3 años:  
- Los niños de 1 año consumen 6 pañales al día 
- Los niños de 2 años consumen 3 pañales diarios 
- Los niños de 3 años consumen 2 pañales diarios 
Se desea conocer cuántos pañales por día se consumen. 
La cantidad de niños de 1, 2 y 3 años, debe ser generada en forma aleatorio y la 
suma no debe sobrepasar los N niños. 
Por ejemplo, si el usuario ingresar N = 30, el programa debe generar en forma 
aleatoria 5 niños de 1 año, 20 niños de 2 años y 3 niños de 3 años. 
De acuerdo con esto el consumo de pañales seria (5 x 6) + (18 x 3) + (3 x 2) = 90 
PAÑALES
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    int N, n1, n2, n3;
    
    srand(time(NULL)); 
    
    cout << "Total de ninios: ";
    cin >> N;
    
    n1 = rand() % (N + 1);
    n2 = rand() % (N - n1 + 1); 
    n3 = N - n1 - n2;
    
    cout << "\nNinios de 1 anio: " << n1 << " --> " << n1 * 6 << " pañales" << endl;
    cout << "Ninios de 2 anio: " << n2 << " --> " << n2 * 3 << " pañales" << endl;
    cout << "Ninios de 3 anio: " << n3 << " -->" << n3 * 2 << " pañales" << endl;
    cout << "TOTAL: " << (n1*6 + n2*3 + n3*2) << " pañales/di a" << endl;
     
    return 0;
}  