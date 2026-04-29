//PROGRAMACION 1 
//ESTUDIANTE : JUAN ANDRES BLANCO MIRANDA
//FECHA 15/04/26


#include <iostream>
using namespace std;

void GenerarMatrizPatron(int matriz[100][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = 2 * i + j + 1;
        } 
    }
}

void ImprimirMatriz(int matriz[100][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() { 
    int n  ;
    cout<<"ingrese el tamaño de la matriz nxn ";
    cin>>n;
    int matriz[100][100];
     
    GenerarMatrizPatron(matriz, n);
    ImprimirMatriz(matriz, n);
    
    return 0;
}