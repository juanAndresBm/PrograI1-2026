// Materia: Programación I, Paralelo 4 
// Autor: Juan Andres Blanco Miranda 
// Carnet: 5553521
// Fecha creación: 12/04/2026

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    vector<double> voltios = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};
    
    cout << fixed << setprecision(2);
    for (int i = 0; i < voltios.size(); i++) {
        cout << voltios[i] << " ";
        if ((i + 1) % 3 == 0) cout << endl;
    }
    return 0;
}