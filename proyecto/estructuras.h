#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H

#include <iostream>
#include <string>
using namespace std;

// Estructura básica para los alumnos becados
struct AlumnoBecado {
    string codigo;
    string nombre;
    bool asistio; // 
}; 

// Estructura básica para la lista de espera (no becados)
struct AlumnoNoBecado {
    string codigo;
    string nombre;
    int numeroPrioridad; // Para el orden de llegada
};

// Estructura para controlar las raciones de cada turno
struct TurnoComida {
    string nombreTurno; // "Desayuno", "Almuerzo" o "Cena"
    int racionesPreparadas;
    int racionesEntregadas;
    int racionesSobrantes;
    bool horarioCerrado;
};

#endif