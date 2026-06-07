/*// Materia: Programación I, Paralelo 4 
// Autor: JUAN ANDRES BLANCO MIRANDA
// Ejercicio 6: Comparar si dos vectores son iguales
// Fecha creación: 20/05/2026*/

#include <iostream>
#include <vector>

using namespace std;


bool sonVectoresIguales(vector<int> v1, vector<int> v2, int indice) {
   
    if (indice == v1.size()) {
        return true;
    }
    
    if (v1[indice] != v2[indice]) {
        return false;
    }
   
    return sonVectoresIguales(v1, v2, indice + 1);
}

int main() {
    system("cls");
    vector<int> vec1 = {1, 2, 3, 4};
    vector<int> vec2 = {1, 2, 3, 4};
    
    
    if (vec1.size() != vec2.size()) {
        cout << "Los vectores NO son iguales (Tienen tamanios diferentes)" << endl;
    } else {
        
        if (sonVectoresIguales(vec1, vec2, 0)) {
            cout << "Los vectores SON perfectamente iguales" << endl;
        } else {
            cout << "Los vectores NO son iguales (Tienen datos diferentes)" << endl;
        }
    }
    
    return 0;
}