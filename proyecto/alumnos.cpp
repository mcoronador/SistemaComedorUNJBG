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
 
 
void listarAlumnosBecados(AlumnoBecado alumnos[], int cantidad) {
 
    cout << "\n==========================================\n";
    cout << "      LISTA DE ALUMNOS BECADOS\n";
    cout << "==========================================\n";
 
    if (cantidad == 0) {
        cout << "No hay alumnos becados registrados.\n";
        return;
    }
 
    cout << "CODIGO\t\tNOMBRE\n";
    cout << "------------------------------------------\n";
 
    for (int i = 0; i < cantidad; i++) {
        cout << alumnos[i].codigo << "\t" << alumnos[i].nombre << endl;
    }
}
 
 
void buscarAlumnoBecado(AlumnoBecado alumnos[], int cantidad) {
 
    string codigo;
    bool encontrado = false;
 
    cout << "\n==========================================\n";
    cout << "      BUSCAR ALUMNO BECADO\n";
    cout << "==========================================\n";
 
    cout << "Ingrese el codigo a buscar: ";
    cin >> codigo;
 
    for (int i = 0; i < cantidad; i++) {
 
        if (alumnos[i].codigo == codigo) {
 
            string nombresTurno[TOTAL_TURNOS] = {"DESAYUNO", "ALMUERZO", "CENA"};
 
            cout << "\nAlumno encontrado:\n";
            cout << "Codigo: " << alumnos[i].codigo << endl;
            cout << "Nombre: " << alumnos[i].nombre << endl;
 
            for (int t = 0; t < TOTAL_TURNOS; t++) {
                cout << "Asistio a " << nombresTurno[t] << ": "
                     << (alumnos[i].asistio[t] ? "Si" : "No") << endl;
            }
 
            encontrado = true;
            break;
        }
    }
 
    if (!encontrado) {
        cout << "\nNo se encontro ningun alumno con ese codigo.\n";
    }
}
 
 
void modificarAlumnoBecado(AlumnoBecado alumnos[], int cantidad) {
 
    string codigo;
    bool encontrado = false;
 
    cout << "\n==========================================\n";
    cout << "      MODIFICAR ALUMNO BECADO\n";
    cout << "==========================================\n";
 
    cout << "Ingrese el codigo del alumno a modificar: ";
    cin >> codigo;
 
    for (int i = 0; i < cantidad; i++) {
 
        if (alumnos[i].codigo == codigo) {
 
            cout << "Nombre actual: " << alumnos[i].nombre << endl;
            cin.ignore();
            cout << "Ingrese el nuevo nombre: ";
            getline(cin, alumnos[i].nombre);
 
            cout << "\nDatos actualizados correctamente.\n";
            encontrado = true;
            break;
        }
    }
 
    if (!encontrado) {
        cout << "\nNo se encontro ningun alumno con ese codigo.\n";
    }
}
 
 
void eliminarAlumnoBecado(AlumnoBecado alumnos[], int &cantidad) {
 
    string codigo;
    bool encontrado = false;
 
    cout << "\n==========================================\n";
    cout << "      ELIMINAR ALUMNO BECADO\n";
    cout << "==========================================\n";
 
    cout << "Ingrese el codigo del alumno a eliminar: ";
    cin >> codigo;
 
    for (int i = 0; i < cantidad; i++) {
 
        if (alumnos[i].codigo == codigo) {
 
            cout << "Se eliminara a: " << alumnos[i].nombre << endl;
 
            for (int j = i; j < cantidad - 1; j++) {
                alumnos[j] = alumnos[j + 1];
            }
 
            cantidad--;
            encontrado = true;
 
            cout << "Alumno eliminado correctamente.\n";
            break;
        }
    }
 
    if (!encontrado) {
        cout << "\nNo se encontro ningun alumno con ese codigo.\n";
    }
}
 
 
void ordenarAlumnosBecados(AlumnoBecado alumnos[], int cantidad) {
 
    for (int i = 0; i < cantidad - 1; i++) {
        for (int j = 0; j < cantidad - 1 - i; j++) {
            if (alumnos[j].nombre > alumnos[j + 1].nombre) {
                AlumnoBecado temp = alumnos[j];
                alumnos[j] = alumnos[j + 1];
                alumnos[j + 1] = temp;
            }
        }
    }
 
    cout << "\nLista de alumnos becados ordenada alfabeticamente por nombre.\n";
}
 
 
// ---------- Control de asistencia por turno ----------
 
void registrarAsistencia(AlumnoBecado alumnos[], int cantidad, int turno) {
 
    string codigo;
    bool encontrado = false;
 
    cout << "\n==========================================\n";
    cout << "      REGISTRO DE ASISTENCIA\n";
    cout << "==========================================\n";
 
    cout << "Ingrese el codigo universitario: ";
    cin >> codigo;
 
    for (int i = 0; i < cantidad; i++) {
 
        if (alumnos[i].codigo == codigo) {
 
            if (alumnos[i].asistio[turno]) {
                cout << "\nEste alumno ya registro asistencia en este turno.\n";
                encontrado = true;
                break;
            }
 
            alumnos[i].asistio[turno] = true;
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
 
 
void listarAsistentes(AlumnoBecado alumnos[], int cantidad, int turno) {
 
    bool hayAsistentes = false;
 
    cout << "\n==========================================\n";
    cout << "      ALUMNOS BECADOS ASISTENTES\n";
    cout << "==========================================\n";
 
    cout << "CODIGO\t\tNOMBRE\n";
    cout << "------------------------------------------\n";
 
    for (int i = 0; i < cantidad; i++) {
 
        if (alumnos[i].asistio[turno] == true) {
 
            cout << alumnos[i].codigo << "\t"
                 << alumnos[i].nombre << endl;
 
            hayAsistentes = true;
        }
 
    }
 
    if (!hayAsistentes) {
        cout << "No hay alumnos asistentes registrados en este turno.\n";
    }
}
 
 
void listarFaltantes(AlumnoBecado alumnos[], int cantidad, int turno) {
 
    bool hayFaltantes = false;
 
    cout << "\n==========================================\n";
    cout << "      ALUMNOS BECADOS FALTANTES\n";
    cout << "==========================================\n";
 
    cout << "CODIGO\t\tNOMBRE\n";
    cout << "------------------------------------------\n";
 
    for (int i = 0; i < cantidad; i++) {
 
        if (alumnos[i].asistio[turno] == false) {
 
            cout << alumnos[i].codigo << "\t"
                 << alumnos[i].nombre << endl;
 
            hayFaltantes = true;
        }
    }
 
    if (!hayFaltantes) {
        cout << "Todos los alumnos becados asistieron en este turno.\n";
    }
}