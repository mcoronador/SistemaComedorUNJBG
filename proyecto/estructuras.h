#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H

#include <string>
using namespace std;

const int TOTAL_TURNOS = 3;

struct AlumnoBecado {
    string codigo;
    string nombre;
    bool asistio[TOTAL_TURNOS];
};

struct AlumnoNoBecado {
    string codigo;
    string nombre;
    int turnoSolicitado;
    bool atendido;
};

#endif