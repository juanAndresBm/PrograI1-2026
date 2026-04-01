// Materia: Programación I, Paralelo 4 
// Autor: Juan Andres Blanco Miranda 
// Carnet: 5553521
// Fecha creación: 01/04/2026



#include <iostream>
#include <vector>
using namespace std;

void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos) {
    horas = totalSegundos / 3600;
    totalSegundos %= 3600;
    minutos = totalSegundos / 60;
    segundos = totalSegundos % 60;
}

int main() {
    vector<int> tiempos = {3665, 86400, 5000, 12345};  
    int horas, minutos, segundos;
    
    cout << "Ejercicio 6:" << endl;
    
    for(int i = 0; i < tiempos.size(); i++) {
        calcularTiempo(tiempos[i], horas, minutos, segundos);
        cout << tiempos[i] << " segundos = ";
        cout << horas << "h " << minutos << "m " << segundos << "s" << endl;
    }
    cout << endl;
    
    return 0;
}