// Materia: Programación I, Paralelo 4 
// Autor: Juan Andres Blanco Miranda 
// Carnet: 5553521
// Fecha creación: 12/04/2026

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cout << "Dimension: ";
    cin >> N;
    
    vector<double> v1(N), v2(N), res(N);
    
    cout << "Vector 1:\n";
    for (int i = 0; i < N; i++) cin >> v1[i];
    
    cout << "Vector 2:\n";
    for (int i = 0; i < N; i++) cin >> v2[i];
    
    for (int i = 0; i < N; i++) res[i] = v1[i] * v2[i];
    
    cout << "Resultado: ";
    for (int i = 0; i < N; i++) cout << res[i] << " ";
    cout << endl;
    
    return 0;
}