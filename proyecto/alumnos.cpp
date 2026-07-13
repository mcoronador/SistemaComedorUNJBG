#include "alumnos.h"
#include <iostream>
 
using namespace std;
 
  
void registrarAlumnoBecado(AlumnoBecado alumnos[], int &cantidad, int capacidadMax) {
 
    cout << "\n==========================================\n";
    cout << "      REGISTRAR NUEVO ALUMNO BECADO\n";
    cout << "==========================================\n";
 
    if (cantidad >= capacidadMax) {
        cout << "\nNo se pueden registrar mas alumnos (capacidad maxima alcanzada).\n";
        return;
    }
 
    AlumnoBecado nuevo;
 
    cout << "Ingrese codigo universitario: ";
    cin >> nuevo.codigo;
 
    // Validar que el codigo no exista ya
    for (int i = 0; i < cantidad; i++) {
        if (alumnos[i].codigo == nuevo.codigo) {
            cout << "\nYa existe un alumno registrado con ese codigo.\n";
            return;
        }
    }
 
    cin.ignore();
    cout << "Ingrese nombre completo: ";
    getline(cin, nuevo.nombre);
 
    for (int t = 0; t < TOTAL_TURNOS; t++) {
        nuevo.asistio[t] = false;
    }
 
    alumnos[cantidad] = nuevo;
    cantidad++;
 
    cout << "\nAlumno becado registrado correctamente.\n";
}