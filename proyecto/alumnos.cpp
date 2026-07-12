#include "alumnos.h"
#include <iostream>

using namespace std;

void registrarAsistencia(AlumnoBecado alumnos[], int cantidad) {

    string codigo;
    bool encontrado = false;

    cout << "\n==========================================\n";
    cout << "      REGISTRO DE ASISTENCIA\n";
    cout << "==========================================\n";

    cout << "Ingrese el codigo universitario: ";
    cin >> codigo;

    for (int i = 0; i < cantidad; i++) {

        if (alumnos[i].codigo == codigo) {

            alumnos[i].asistio = true;
            encontrado = true;

            cout << "\nAsistencia registrada correctamente.\n";
            cout << "Bienvenido(a): " << alumnos[i].nombre << endl;

            break;
        }
    }

    if (!encontrado) {
        cout << "\nAlumno no encontrado.\n";
    }
}


void listarAsistentes(AlumnoBecado alumnos[], int cantidad) {

    bool hayAsistentes = false;

    cout << "\n==========================================\n";
    cout << "      ALUMNOS BECADOS ASISTENTES\n";
    cout << "==========================================\n";

    cout << "CODIGO\t\tNOMBRE\n";
    cout << "------------------------------------------\n";

    for (int i = 0; i < cantidad; i++) {

        if (alumnos[i].asistio == true) {

            cout << alumnos[i].codigo << "\t"
                 << alumnos[i].nombre << endl;

            hayAsistentes = true;
        }

    }

    if (!hayAsistentes) {
        cout << "No hay alumnos asistentes registrados.\n";
    }

}