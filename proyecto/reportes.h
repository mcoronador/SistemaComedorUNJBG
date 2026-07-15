#ifndef REPORTES_H
#define REPORTES_H

#include "estructuras.h"

int cierreHorarioYSaldos(int racionesTotales, int asistentes);

void atenderCola(AlumnoNoBecado cola[], int &tamanoCola, int racionesSobrantes);
int contarAsistentes(AlumnoBecado alumnos[], int cantidadAlumnos, int turno);
#endif