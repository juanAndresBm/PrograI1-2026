// Materia: Programación I, Paralelo 4 
// Autor: Juan Andres Blanco Miranda 
// Carnet: 5553521
// Fecha creación: 08/03/2026
/*Un negocio de 'Cosméticos' de belleza contratará a n vendedoras para la venta de 
sus productos. Cada vendedora en promedio debe vender 10 productos en un 
mes. La cancelación de los sueldos a las vendedoras se realiza cada fin de mes 
bajo las siguientes características: - Una vendedora recibe un sueldo básico de 
acuerdo a su antigüedad y además se añade un sueldo extra por comisión de 
ventas del 10% del total vendido. - La propietaria del negocio desea conocer 
cuánto de sueldo debe cancelar a cada una de sus vendedoras y cuánto de 
comisión recibirá como extra.  */

#include <iostream>
using namespace std;

float calcularComision(int productos) {
    return productos * 10 * 0.10;  // (productos × precio) × 10%
}

float calcularSueldoTotal(float basico, float comision) {
    return basico + comision;
}

int main() {
    int n;
    cout << "Numero de vendedoras: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        int antiguedad, productos;
        float basico;
        
        cout << "\nVendedora " << i << ":" << endl;
        cout << "Antiguedad: "; cin >> antiguedad;
        cout << "Sueldo basico: "; cin >> basico;
        cout << "Productos vendidos: "; cin >> productos;
         
        float comision = calcularComision(productos);
        float total = calcularSueldoTotal(basico, comision);
        
        cout << "Comision: " << comision << " Bs" << endl;
        cout << "Sueldo total: " << total << " Bs" << endl;
    }
    
    return 0;
}