//PROGRAMACION 1 
//ESTUDIANTE : JUAN ANDRES BLANCO MIRANDA
//FECHA 15/04/26


#include <iostream>
#include <vector>
using namespace std;

void intercambiarFilas(vector<vector<int>> &matriz, int n) {
    // Intercambiar fila 0 (primera) con fila n-1 (última)
    for(int j = 0; j < n; j++) {
        int temp = matriz[0][j];
        matriz[0][j] = matriz[n-1][j];
        matriz[n-1][j] = temp;
    }
}

void mostrarMatriz(const vector<vector<int>> &matriz, int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Ingrese el orden de la matriz (n): ";
    cin >> n;
    
    vector<vector<int>> matriz(n, vector<int>(n));
    
    cout << "Ingrese los elementos de la matriz:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }
    
    cout << "\nMatriz original:" << endl;
    mostrarMatriz(matriz, n);
    
    intercambiarFilas(matriz, n);
    
    cout << "\nMatriz después de intercambiar fila 1 con fila " << n << ":" << endl;
    mostrarMatriz(matriz, n);
    
    return 0;
}