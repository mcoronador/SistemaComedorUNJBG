#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H

#include <iostream>
#include <string>
using namespace std;

// Estructura básica para los alumnos becados
struct AlumnoBecado {
    string codigo;
    string nombre;
    bool asistio; // true si ya puso su huella, false si no
}; 