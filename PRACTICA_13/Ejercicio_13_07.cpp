// Materia: Programación I, Paralelo 4
// Autor: JUAN ANDRES BLANCO MIRANDA
// Fecha creación: 22/05/2026
// Número de ejercicio: 7

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Producto {
    string nombre;
    string codigo;
    double precio;
    int cantidad_en_inventario;
    string observaciones;
};

void registrarProductos(vector<Producto> &inventario, int n) {
    for (int i = 0; i < n; i++) {
        Producto p;
        cout << "\nProducto " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        getline(cin, p.nombre);
        cout << "Codigo: ";
        getline(cin, p.codigo);
        cout << "Precio: ";
        cin >> p.precio;
        cout << "Cantidad: ";
        cin >> p.cantidad_en_inventario;
        cin.ignore();
        
        if (p.cantidad_en_inventario < 5) {
            p.observaciones = "PRODUCTO CON BAJA CANTIDAD DE INVENTARIO";
        } else {
            p.observaciones = "OK";
        }
        inventario.push_back(p);
    }
}

void mostrarMasCaro(vector<Producto> inventario) {
    if (inventario.empty()) return;
    Producto caro = inventario[0];
    for (size_t i = 1; i < inventario.size(); i++) {
        if (inventario[i].precio > caro.precio) {
            caro = inventario[i];
        }
    }
    cout << "\nProducto mas caro: " << caro.nombre << " | Precio: " << caro.precio << endl;
}

void mostrarTotalInventario(vector<Producto> inventario) {
    int total = 0;
    for (size_t i = 0; i < inventario.size(); i++) {
        total += inventario[i].cantidad_en_inventario;
    }
    cout << "Cantidad total de productos en inventario: " << total << endl;
}

void mostrarReporteAlertas(vector<Producto> inventario) {
    cout << "\n--- REPORTE DE OBSERVACIONES ---" << endl;
    for (size_t i = 0; i < inventario.size(); i++) {
        if (inventario[i].cantidad_en_inventario < 5) {
            cout << "- " << inventario[i].nombre << ": " << inventario[i].observaciones << endl;
        }
    }
}

int main() {
    system("cls");
    int n;
    cout << "Cantidad de productos a registrar: ";
    cin >> n;
    cin.ignore();

    vector<Producto> inventario;
    registrarProductos(inventario, n);
    mostrarMasCaro(inventario);
    mostrarTotalInventario(inventario);
    mostrarReporteAlertas(inventario);
    return 0;
}