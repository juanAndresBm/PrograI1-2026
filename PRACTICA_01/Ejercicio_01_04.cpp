// Materia: Programación I, Paralelo 4 
// Autor: juan andres blanco miranda 
// Carnet: 5553521
// Carrera del estudiante: diseño digital
// Fecha creación: 17/02/2026
/*La calificación final de un estudiante es el promedio de tres notas: la nota  
de prácticas que cuenta un 30% del total, la nota teórica que cuenta un 
60% y la nota de participación que cuenta el 10% restante. Escriba un 
programa que lea las tres notas del alumno y escriba su nota final. */

#include <iostream>
using namespace std;

int main() 
{
    float nota1, nota2, nota3;
    
    cout << "Ingrese las tres notas (practica, teorica, participacion): " << endl;
    cout << "Nota de practicas (30%): ";
    cin >> nota1;
    cout << "Nota teorica (60%): ";
    cin >> nota2;
    cout << "Nota de participacion (10%): ";
    cin >> nota3;
    
    
    cout << "\nLa nota final es: " << (nota1 * 0.30) + (nota2 * 0.60) + (nota3 * 0.10) << endl;
    
    return 0;
}