//PROGRAMACION 1 
//ESTUDIANTE : JUAN ANDRES BLANCO MIRANDA
//FECHA 15/04/26


#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std;

// Función para generar matriz aleatoria
void generarMatriz(vector<vector<int>> &matriz, int N, int A, int B) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            matriz[i][j] = A + rand() % (B - A + 1);
        }
    }
}

// a) Suma de la última columna
int sumaUltimaColumna(const vector<vector<int>> &matriz, int N) {
    int suma = 0;
    for(int i = 0; i < N; i++) {
        suma += matriz[i][N-1];
    }
    return suma;
}

// b) Producto total de la última fila
long long productoUltimaFila(const vector<vector<int>> &matriz, int N) {
    long long producto = 1;
    for(int j = 0; j < N; j++) {
        producto *= matriz[N-1][j];
    }
    return producto;
}

// c) Mayor valor y su posición
void obtenerMayor(const vector<vector<int>> &matriz, int N, int &mayor, int &fila, int &columna) {
    mayor = matriz[0][0];
    fila = 0;
    columna = 0;
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(matriz[i][j] > mayor) {
                mayor = matriz[i][j];
                fila = i;
                columna = j;
            }
        }
    }
}

// d) Desviación estándar
double desviacionEstandar(const vector<vector<int>> &matriz, int N) {
    double suma = 0;
    int total = N * N;
    
    // Calcular promedio
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            suma += matriz[i][j];
        }
    }
    double promedio = suma / total;
    
    // Calcular suma de cuadrados
    double sumaCuadrados = 0;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            sumaCuadrados += pow(matriz[i][j] - promedio, 2);
        }
    }
    
    return sqrt(sumaCuadrados / total);
}

void mostrarMatriz(const vector<vector<int>> &matriz, int N) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << setw(5) << matriz[i][j];
        }
        cout << endl;
    }
}

int main() {
    srand(time(NULL));
    
    int N, A, B;
    cout << "Ingrese el orden de la matriz (N): ";
    cin >> N;
    cout << "Ingrese el valor mínimo (A): ";
    cin >> A;
    cout << "Ingrese el valor máximo (B): ";
    cin >> B;
    
    vector<vector<int>> matriz(N, vector<int>(N));
    generarMatriz(matriz, N, A, B);
    
    cout << "\nMatriz generada:" << endl;
    mostrarMatriz(matriz, N);
    
    // a) Suma última columna
    cout << "\na) Suma de la última columna: " << sumaUltimaColumna(matriz, N) << endl;
    
    // b) Producto última fila
    cout << "b) Producto de la última fila: " << productoUltimaFila(matriz, N) << endl;
    
    // c) Mayor valor y posición
    int mayor, fila, columna;
    obtenerMayor(matriz, N, mayor, fila, columna);
    cout << "c) Mayor valor: " << mayor << " en posición [" << fila << "][" << columna << "]" << endl;
    
    // d) Desviación estándar
    cout << "d) Desviación estándar: " << fixed << setprecision(4) << desviacionEstandar(matriz, N) << endl;
    
    return 0;
}