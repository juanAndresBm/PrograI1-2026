// Materia: Programación I, Paralelo 4 
// Autor: Juan Andres Blanco Miranda 
// Carnet: 5553521
// Fecha creación: 08/03/2026
/*Realizar un programa que reciba las horas trabajadas de un trabajador, la tarifa por 
hora y una bonificación si trabaja mas de 8 horas , solamente a las horas extra. 
Debe dar como resultado.  
a. Salario del trabajador  
b. Salario bonificación si es que tuviera.*/

#include <iostream>
using namespace std; 

float calcularSalarioNormal(int horas, float tarifa) {
    return horas * tarifa;
}

float calcularBonificacion(int horas, float tarifa) {
    if (horas <= 8) return 0;
    int horasExtra = horas - 8;
    return horasExtra * tarifa * 0.50;  // 50% extra sobre horas adicionales
}

float calcularSalarioTotal(float normal, float bonificacion) {
    return normal + bonificacion;
}

int main() {
    int horas;
    float tarifa;
    
    cout << "Horas trabajadas: ";
    cin >> horas;
    cout << "Tarifa por hora: ";
    cin >> tarifa;
    
    float normal = calcularSalarioNormal(horas, tarifa);
    float bonificacion = calcularBonificacion(horas, tarifa);
    float total = calcularSalarioTotal(normal, bonificacion);
    
    cout << "\nSalario normal: " << normal << " Bs" << endl;
    
    if (bonificacion > 0) {
        cout << "Bonificacion (horas extra): " << bonificacion << " Bs" << endl;
    }
    
    cout << "Salario total: " << total << " Bs" << endl;
    
    return 0;
}