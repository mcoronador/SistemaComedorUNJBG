#include "colavirtual.h"
#include <iostream>

using namespace std;

void registrarCola(AlumnoNoBecado cola[], int &tamanoCola, AlumnoNoBecado nuevoAlumno)
{
    cola[tamanoCola] = nuevoAlumno;
    tamanoCola++;
}

void mostrarCola(AlumnoNoBecado cola[], int tamanoCola)
{
    if (tamanoCola == 0)
    {
        cout << "La cola virtual esta vacia." << endl;
        return;
    }

    cout << "=============================================" << endl;
    cout << "|         ESTADO DE LA COLA VIRTUAL         |" << endl;
    cout << "=============================================" << endl;

    for (int i = 0; i < tamanoCola; i++)
    {
        cout << i + 1
             << ". Codigo: " << cola[i].codigo
             << " | Nombre: " << cola[i].nombre
             << " | Turno: " << cola[i].turnoSolicitado
             << " | Estado: " << (cola[i].atendido ? "Atendido" : "En espera")
             << endl;
    }

    cout << "=============================================" << endl;
}

void registrarAlumnoNoBecado(
    AlumnoNoBecado cola[],
    int &tamanoCola,
    int capacidadMax,
    int turno)
{
    if (tamanoCola >= capacidadMax)
    {
        cout << "\nLa cola virtual esta llena.\n";
        return;
    }

    AlumnoNoBecado nuevo;

    cout << "\n====================================\n";
    cout << " REGISTRAR ALUMNO NO BECADO\n";
    cout << "====================================\n";

    cout << "Ingrese codigo universitario: ";
    cin >> nuevo.codigo;

    for(int i=0;i<tamanoCola;i++)
    {
        if(cola[i].codigo == nuevo.codigo)
        {
            cout << "\nEste alumno ya esta registrado en la cola.\n";
            return;
        }
    }

    cin.ignore();

    cout << "Ingrese nombre completo: ";
    getline(cin,nuevo.nombre);

    nuevo.turnoSolicitado = turno;
    nuevo.atendido = false;

    registrarCola(cola,tamanoCola,nuevo);

    cout << "\nAlumno agregado correctamente a la cola virtual.\n";
}

void ordenarCola(AlumnoNoBecado cola[], int tamanoCola)
{
    // No se requiere ordenamiento por ahora.
}
