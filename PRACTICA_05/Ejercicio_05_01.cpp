// Materia: Programación I, Paralelo 4 
// Autor: Juan Andres Blanco Miranda 
// Carnet: 5553521
// Fecha creación: 08/03/2026
/*La comercial 'La Estrella' vende n productos en un día, de los cuales factura al 
precio de cada uno con un IVA del 13%, y si el monto final se excede en 2500 Bs se 
aplica un descuento del 5%. Obtener la suma total de las ventas realizadas en el 
día y calcular el pago del IVA del 13% al servicio de Impuestos Nacionales. El 
precio de los productos debe ser generado en forma aleatoria entre 20 y 50. */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior) {
    return rand() % (LimSuperior - LimInferior + 1) + LimInferior;
}

int main() {
    srand(time(NULL));
    
    int n;
    cout << "Ingrese el numero de productos: ";
    cin >> n;
    
    float sumaVentas = 0;
    
    for (int i = 1; i <= n; i++) {
        int precio = GenerarAleatorio(20, 50);
        sumaVentas += precio;
        cout << "Producto " << i << ": " << precio << " Bs" << endl;
    }
    
    float iva = sumaVentas * 0.13; 
    float montoFinal = sumaVentas;
    
    if (montoFinal > 2500) {
        montoFinal = montoFinal * 0.95;  // 5% de descuento 
    }
    
    cout << "\nSuma total de ventas: " << sumaVentas << " Bs" << endl;  
    cout << "IVA (13%): " << iva << " Bs" << endl;
    cout << "Monto final con descuento: " << montoFinal  << " Bs" << endl;
     
    return 0;
} 