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
   	cout<<"=============================================<<endl;
    for (int i=0; i<tamanoCola; i++) {
        cout<<i + 1<<". "<<cola[i].nombre
            <<endl;
    }
    cout<<"============================================="<<endl;
}

void ordenarCola(AlumnoNoBecado cola[], int tamanoCola) { 
 
    cout<<"[SISTEMA] Cola virtual lista.	"<<endl;
}
