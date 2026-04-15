//PROGRAMACION 1 
//ESTUDIANTE : JUAN ANDRES BLANCO MIRANDA
//FECHA 15/04/26
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Función para verificar si un cliente ya está en la lista
bool existe(vector<string> lista, string nombre) {
    for(int i = 0; i < lista.size(); i++) {
        if(lista[i] == nombre) {
            return true;
        }
    }
    return false;
}

// Función para encontrar clientes en común (sin break)
vector<string> encontrarComunes(vector<string> a, vector<string> b) {
    vector<string> comunes;
    
    for(int i = 0; i < a.size(); i++) {
        for(int j = 0; j < b.size(); j++) {
            if(a[i] == b[j]) {
                // Verificar que no esté ya agregado
                if(!existe(comunes, a[i])) {
                    comunes.push_back(a[i]);
                }
                // En lugar de break, hacemos que j llegue al final
                j = b.size();
            }
        }
    }
    
    return comunes;
}

// Función para ingresar clientes
vector<string> ingresarClientes(string nombreEmpresa) {
    vector<string> clientes;
    int n;
    string nombre;
    
    cout << "\n¿Cuántos clientes tiene la " << nombreEmpresa << "? ";
    cin >> n;
    cin.ignore();
    
    cout << "Ingrese los nombres:" << endl;
    for(int i = 0; i < n; i++) {
        cout << "  Cliente " << i + 1 << ": ";
        getline(cin, nombre);
        clientes.push_back(nombre);
    }
    
    return clientes;
}

// Función para mostrar lista
void mostrarLista(vector<string> lista, string titulo) {
    cout << "\n" << titulo << " (" << lista.size() << " clientes):" << endl;
    for(int i = 0; i < lista.size(); i++) {
        cout << "  " << i + 1 << ". " << lista[i] << endl;
    }
}

int main() {
    cout << "==========================================" << endl;
    cout << "   CLIENTES EN COMÚN ENTRE EMPRESAS" << endl;
    cout << "==========================================" << endl;
    
    // Ingresar datos
    vector<string> empresaA = ingresarClientes("Empresa A");
    vector<string> empresaB = ingresarClientes("Empresa B");
    
    // Encontrar comunes
    vector<string> comunes = encontrarComunes(empresaA, empresaB);
    
    // Mostrar resultados
    cout << "\n==========================================" << endl;
    mostrarLista(empresaA, "EMPRESA A");
    mostrarLista(empresaB, "EMPRESA B");
    
    cout << "\n==========================================" << endl;
    cout << "        CLIENTES EN COMÚN" << endl;
    cout << "==========================================" << endl;
    
    if(comunes.empty()) {
        cout << "No hay clientes en común entre ambas empresas." << endl;
    } else {
        cout << "Total de clientes repetidos: " << comunes.size() << endl;
        cout << "\nLista de clientes que comparten:" << endl;
        for(int i = 0; i < comunes.size(); i++) {
            cout << "  " << i + 1 << ". " << comunes[i] << endl;
        }
    }
    
    return 0;
}
