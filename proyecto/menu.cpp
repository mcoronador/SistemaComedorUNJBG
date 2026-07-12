#include "menu.h"
#include <iostream>
using namespace std;
 
void mostrarMenuPrincipal() {
    cout << "===========================================================\n";
    cout << "    COMEDOR-SGO - UNJBG                                    \n";
    cout << "===========================================================\n";
    cout << " [1] Gestionar Alumnos Becados (Registrar/Buscar/Modificar/Eliminar)\n";
    cout << " [2] Gestionar TURNO: DESAYUNO\n";
    cout << " [3] Gestionar TURNO: ALMUERZO\n";
    cout << " [4] Gestionar TURNO: CENA\n";
    cout << " [5] Ver Reportes Globales y Mermas del Dia\n";
    cout << " [6] Salir del Sistema\n";
    cout << "===========================================================\n";
    cout << "Seleccione una opcion (1-6): ";
}
 
void mostrarSubmenuAlumnos() {
    cout << "===========================================================\n";
    cout << "         GESTION DE ALUMNOS BECADOS\n";
    cout << "===========================================================\n";
    cout << "    [1] Registrar nuevo alumno becado\n";
    cout << "    [2] Listar todos los alumnos becados\n";
    cout << "    [3] Buscar alumno por codigo\n";
    cout << "    [4] Modificar datos de un alumno\n";
    cout << "    [5] Eliminar alumno\n";
    cout << "    [6] Ordenar alumnos por nombre\n";
    cout << "    [7] Volver al Menu Principal\n";
    cout << "===========================================================\n";
    cout << "Seleccione una opcion (1-7): ";
}
 
void mostrarSubmenuGestion(const string& nombreTurno) {
    cout << "===========================================================\n";
    cout << "         MENU DE GESTION: [TURNO " << nombreTurno << "]\n";
    cout << "===========================================================\n";
    cout << "\n----- CONTROL DE ASISTENCIA -----\n";
    cout << "    [1] Registrar Asistencia por Codigo Universitario\n";
    cout << "    [2] Listar Alumnos Becados Asistentes\n";
    cout << "===========================================================\n";
    cout << "\n----- LISTA DE ESPERA -----\n";
    cout << "    [3] Listar Alumnos Becados Faltantes\n";
    cout << "    [4] Registrar Alumno No Becado en Lista de Espera\n";
    cout << "    [5] Listar Alumnos en la Cola Virtual\n";
    cout << "    [6] Ordenar Cola Virtual\n";
    cout << "===========================================================\n";
    cout << "\n----- PROCESAMIENTO -----\n";
    cout << "    [7] Cierre de Horario (Calcular Saldos)\n";
    cout << "    [8] Atender Cola Virtual (Asignar platos)\n";
    cout << "    [9] Volver al Menu Principal\n";
    cout << "===========================================================\n";
    cout << "Seleccione una opcion (1-9): ";
}