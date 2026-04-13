// Materia: Programación I, Paralelo 4 
// Autor: Juan Andres Blanco Miranda 
// Carnet: 5553521
// Fecha creación: 12/04/2026

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v1(5), v2(5), v3(5);
    
    cout << "Vector1:\n";
    for (int i = 0; i < 5; i++) cin >> v1[i];
    
    cout << "Vector2:\n";
    for (int i = 0; i < 5; i++) cin >> v2[i];
    
    for (int i = 0; i < 5; i++) v3[i] = v1[i] + v2[i];
    
    cout << "Suma: ";
    for (int i = 0; i < 5; i++) cout << v3[i] << " ";
    cout << endl;
    
    return 0;
}