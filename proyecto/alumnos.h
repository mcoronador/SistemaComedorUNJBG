#ifndef ALUMNOS_H
#define ALUMNOS_H
 
#include "estructuras.h"
 
void registrarAlumnoBecado(AlumnoBecado alumnos[], int &cantidad, int capacidadMax);
void listarAlumnosBecados(AlumnoBecado alumnos[], int cantidad);
void buscarAlumnoBecado(AlumnoBecado alumnos[], int cantidad);
void modificarAlumnoBecado(AlumnoBecado alumnos[], int cantidad);
void eliminarAlumnoBecado(AlumnoBecado alumnos[], int &cantidad);
void ordenarAlumnosBecados(AlumnoBecado alumnos[], int cantidad);