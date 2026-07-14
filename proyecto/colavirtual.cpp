#include "colavirtual.h"
#include<iostream>

using namespace std;

void registrarCola(Alumno cola[], int &tamanoCola, Alumno nuevoAlumno) {
    cola[tamanoCola] = nuevoAlumno;
    tamanoCola++;
}

void mostrarCola(Alumno cola[], int tamanoCola){
    if (tamanoCola == 0){
        cout<<"La cola virtual esta vacia."<< endl;
        return;
    }
   	cout<<"============================================="<<endl;
    cout<<"|         ESTADO DE LA COLA VIRTUAL         |"<<endl;
   	cout<<"============================================="<<endl;
    for (int i=0; i<tamanoCola; i++) {
        cout<<i + 1<<". "<<cola[i].nombre<<" "<<cola[i].apellido 
             <<" ["<<(cola[i].esBecado ? "BECADO" : "PAGANTE")<<"] - Hora: "<<cola[i].horaEntrada<<endl;
    }
    cout<<"============================================="<<endl;
}

void ordenarCola(Alumno cola[], int tamanoCola) { 
    if (tamanoCola<=1) return;

    for (int i=0; i<tamanoCola-1; i++){
        for (int j=0; j<tamanoCola-i-1; j++){
            if (!cola[j].esBecado && cola[j+1].esBecado) {
                Alumno temp=cola[j];
                cola[j]=cola[j+1];
                cola[j+1]=temp;
            }
        }
    }
    cout<<"[SISTEMA] Cola virtual ordenada primero a los becados."<<endl;
}
