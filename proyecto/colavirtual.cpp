#include "colavirtual.h"
#include<iostream>

using namespace std;

void registrarCola(AlumnoNoBecado cola[], int &tamanoCola, AlumnoNoBecado nuevoAlumno) {
    cola[tamanoCola]=nuevoAlumno;
    tamanoCola++;
}

void mostrarCola(AlumnoNoBecado cola[], int tamanoCola){
    if (tamanoCola == 0){
        cout<<"La cola virtual esta vacia."<< endl;
        return;
    }
   	cout<<"============================================="<<endl;
    cout<<"|         ESTADO DE LA COLA VIRTUAL         |"<<endl;
   	cout<<"============================================="<<endl;
    for (int i=0; i<tamanoCola; i++) {
        cout<<i+1
             << ". Codigo: " << cola[i].codigo
             << " | Nombre: " << cola[i].nombre
             << " | Turno: " << cola[i].turnoSolicitado
             << " | Estado: " << (cola[i].atendido ? "Atendido" : "En espera")
             << endl;
    }
    cout<<"============================================="<<endl;
}

void ordenarCola(AlumnoNoBecado cola[], int tamanoCola) { 
 
    cout<<"[SISTEMA] Cola virtual lista.	"<<endl;
    //quizas no requiera ahora el ordenamiento, sin embargo para evitar errores de compilación....
}
