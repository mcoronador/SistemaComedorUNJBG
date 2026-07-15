#ifndef REPORTES_H
#define REPORTES_H

#include "estructuras.h"

int cierreHorarioYSaldos(int racionesTotales, int asistentes, int &racionesSobrantes);

void atenderCola(AlumnoNoBecado cola[], int &tamanoCola, int &racionesSobrantes);

#endif