// Materia: Programación I, Paralelo 4 
// Autor: Juan Andres Blanco Miranda 
// Carnet: 5553521
// Fecha creación: 12/04/2026

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums;
    int valor;
    
    while (nums.size() < 10) {
        cout << "Numero: ";
        cin >> valor;
        if (valor < 0) break;
        nums.push_back(valor);
    }
    
    cout << "Elementos: ";
    for (int x : nums) cout << x << " ";
    cout << endl;
    
    return 0;
}