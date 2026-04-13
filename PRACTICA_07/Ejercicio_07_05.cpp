// Materia: Programación I, Paralelo 4 
// Autor: Juan Andres Blanco Miranda 
// Carnet: 5553521
// Fecha creación: 12/04/2026

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cout << "Dimension: ";
    cin >> N;
    
    vector<int> v1(N), v2(N), comb;
    
    cout << "Vector 1:\n";
    for (int i = 0; i < N; i++) cin >> v1[i];
    
    cout << "Vector 2:\n";
    for (int i = 0; i < N; i++) cin >> v2[i];
    
    comb.insert(comb.end(), v1.begin(), v1.end());
    comb.insert(comb.end(), v2.begin(), v2.end());
    
    cout << "Combinado: ";
    for (int x : comb) cout << x << " ";
    cout << endl;
    
    return 0;
}