//PROGRAMACION 1 
//ESTUDIANTE : JUAN ANDRES BLANCO MIRANDA
//FECHA 15/04/26

#include <iostream>
#include <vector>
using namespace std;

const int FILAS = 4;
const int COLUMNAS = 4;

// Inicializar la matriz constante
void inicializarMatriz(char matriz[FILAS][COLUMNAS]) {
    char temporal[FILAS][COLUMNAS] = {
        {'x', 'o', 'x', 'o'},
        {'o', 'o', 'o', 'o'},
        {'o', 'o', 'x', 'o'},
        {'o', 'o', 'o', 'o'}
    };
    
    for(int i = 0; i < FILAS; i++) {
        for(int j = 0; j < COLUMNAS; j++) {
            matriz[i][j] = temporal[i][j];
        }
    }
}

// a) Mostrar la matriz
void mostrarMatriz(char matriz[FILAS][COLUMNAS]) {
    cout << "\nMapa del complejo:" << endl;
    cout << "  ";
    for(int j = 0; j < COLUMNAS; j++) {
        cout << " " << j << " ";
    }
    cout << endl;
    
    for(int i = 0; i < FILAS; i++) {
        cout << i << " ";
        for(int j = 0; j < COLUMNAS; j++) {
            cout << " " << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// b) Filas y columnas sin muertos
void contarFilasColumnasSeguras(char matriz[FILAS][COLUMNAS], int &filasSeguras, int &columnasSeguras) {
    filasSeguras = 0;
    columnasSeguras = 0;
    
    // Contar filas sin 'x'
    for(int i = 0; i < FILAS; i++) {
        bool tieneMuerto = false;
        for(int j = 0; j < COLUMNAS; j++) {
            if(matriz[i][j] == 'x') {
                tieneMuerto = true;
                break;
            }
        }
        if(!tieneMuerto) {
            filasSeguras++;
        }
    }
    
    // Contar columnas sin 'x'
    for(int j = 0; j < COLUMNAS; j++) {
        bool tieneMuerto = false;
        for(int i = 0; i < FILAS; i++) {
            if(matriz[i][j] == 'x') {
                tieneMuerto = true;
                break;
            }
        }
        if(!tieneMuerto) {
            columnasSeguras++;
        }
    }
}

// c) Coordenadas de los muertos (vectores paralelos)
void obtenerCoordenadasMuertos(char matriz[FILAS][COLUMNAS], vector<int> &filasMuertos, vector<int> &columnasMuertos) {
    for(int i = 0; i < FILAS; i++) {
        for(int j = 0; j < COLUMNAS; j++) {
            if(matriz[i][j] == 'x') {
                filasMuertos.push_back(i);
                columnasMuertos.push_back(j);
            }
        }
    }
}

// d) Cantidad de muertos
int cantidadMuertos(char matriz[FILAS][COLUMNAS]) {
    int contador = 0;
    for(int i = 0; i < FILAS; i++) {
        for(int j = 0; j < COLUMNAS; j++) {
            if(matriz[i][j] == 'x') {
                contador++;
            }
        }
    }
    return contador;
}

int main() {
    char matriz[FILAS][COLUMNAS];
    inicializarMatriz(matriz);
    
    // a) Mostrar matriz
    mostrarMatriz(matriz);
    
    // b) Filas y columnas seguras
    int filasSeguras, columnasSeguras;
    contarFilasColumnasSeguras(matriz, filasSeguras, columnasSeguras);
    cout << "b) Filas sin muertos: " << filasSeguras << endl;
    cout << "   Columnas sin muertos: " << columnasSeguras << endl;
    
    // c) Coordenadas de muertos (vectores paralelos)
    vector<int> filasMuertos, columnasMuertos;
    obtenerCoordenadasMuertos(matriz, filasMuertos, columnasMuertos);
    cout << "\nc) Coordenadas de los muertos vivientes:" << endl;
    for(int i = 0; i < filasMuertos.size(); i++) {
        cout << "   Muerto " << i + 1 << ": [" << filasMuertos[i] << "][" << columnasMuertos[i] << "]" << endl;
    }
    
    // d) Cantidad de muertos
    cout << "\nd) Total de muertos vivientes: " << cantidadMuertos(matriz) << endl;
    
    // e) Verificar si hay 2 o más muertos en la primera columna
    int muertosPrimeraColumna = 0;
    for(int i = 0; i < FILAS; i++) {
        if(matriz[i][0] == 'x') {
            muertosPrimeraColumna++;
        }
    }
    
    cout << "\ne) ";
    if(muertosPrimeraColumna >= 2) {
        cout << "NO ES POSIBLE ENTRAR AL COMPLEJO" << endl;
    } else {
        cout << "ES POSIBLE ENTRAR AL COMPLEJO" << endl;
    }
    
    return 0;
}