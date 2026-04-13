// Materia: Programación I, Paralelo 4 
// Autor: Juan Andres Blanco Miranda 
// Carnet: 5553521
// Fecha creación: 12/04/2026

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

double randomDouble(double min, double max) {
    double r = rand() / (double)RAND_MAX;
    return min + r * (max - min);
}

int randomInt(int min, int max) {
    return min + rand() % (max - min + 1);
}

char randomChar() {
    int r = rand() % 62;
    if (r < 26) return 'A' + r;
    if (r < 52) return 'a' + (r - 26);
    return '0' + (r - 52);
}

vector<double> voltajes() {
    vector<double> v;
    for (int i = 0; i < 100; i++) v.push_back(randomDouble(20.00, 220.00));
    return v;
}

vector<double> temperaturas() {
    vector<double> t;
    for (int i = 0; i < 50; i++) t.push_back(randomDouble(0.00, 100.00));
    return t;
}

vector<char> caracteres() {
    vector<char> c;
    for (int i = 0; i < 30; i++) c.push_back(randomChar());
    return c;
}

vector<int> anios() {
    vector<int> a;
    for (int i = 0; i < 100; i++) a.push_back(randomInt(1990, 2025));
    return a;
}

vector<double> velocidades() {
    vector<double> v;
    for (int i = 0; i < 32; i++) v.push_back(randomDouble(10.00, 300.00));
    return v;
}

vector<double> distancias() {
    vector<double> d;
    for (int i = 0; i < 1000; i++) d.push_back(randomDouble(1.00, 1000.00));
    return d;
}

int main() {
    srand(time(0));
    
    vector<double> v1 = voltajes();
    vector<double> v2 = temperaturas();
    vector<char> v3 = caracteres();
    vector<int> v4 = anios();
    vector<double> v5 = velocidades();
    vector<double> v6 = distancias();
    
    cout << "Primer voltaje: " << v1[0] << endl;
    cout << "Primer caracter: " << v3[0] << endl;
    return 0;
}