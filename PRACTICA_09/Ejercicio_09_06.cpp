//PROGRAMACION 1 
//ESTUDIANTE : JUAN ANDRES BLANCO MIRANDA
//FECHA 15/04/26
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> TransponerMatriz(vector<vector<int>>& original) {
    int filas = original.size();
    int columnas = original[0].size();
    
 
    vector<vector<int>> traspuesta(columnas, vector<int>(filas));
    
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            traspuesta[j][i] = original[i][j];
        }
    }
    
    return traspuesta;
}

void ImprimirMatriz(vector<vector<int>>& matriz, string nombre) {
    cout << "\n--- " << nombre << " (" << matriz.size() << "×" << matriz[0].size() << ") ---\n";
    for (int i = 0; i < matriz.size(); i++) {
        for (int j = 0; j < matriz[0].size(); j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
  
    vector<vector<int>> original = {
        {1, 0},
        {2, 4},
        {3, 5}
    };
    
 
    vector<vector<int>> traspuesta = TransponerMatriz(original);
    
  
    ImprimirMatriz(original, "MATRIZ ORIGINAL");
    ImprimirMatriz(traspuesta, "MATRIZ TRASPUESTA");
    
    return 0;
}