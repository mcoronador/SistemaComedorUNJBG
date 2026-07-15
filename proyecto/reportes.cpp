#include"reportes.h"
#include<iostream>

using namespace std;

int cierreHorarioYSaldos(int racionesTotales, int asistentes) {
    int sobrantes=racionesTotales-asistentes;
    
    if (sobrantes<0){
        sobrantes=0; 
    }
    
    cout<<"=========================================\n"<<endl;
    cout<<"|       CIERRE DE HORARIO Y SALDOS      |\n"<<endl;
    cout<<"=========================================\n"<<endl;
    cout<<"Raciones programadas totales: "<<racionesTotales<<endl;
    cout<<"Alumnos que ya asistieron   : "<<asistentes<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<" Raciones Sobrantes : "<<sobrantes<<endl;
    cout<<"========================================="<<endl;
    
    return sobrantes;
}

void atenderCola(AlumnoNoBecado cola[], int &tamanoCola, int racionesSobrantes){
    cout <<"\nIniciando proceso de atencion masiva de raciones sobrantes...\n"<<endl;
    
    if (tamanoCola==0){
        cout<<"No hay alumnos esperando en la cola virtual."<<endl;
        return;
    }
    
 int entregadas = 0;

    while (racionesSobrantes> 0 && tamanoCola>0) {

        cout <<"Racion entregada a: "
             <<cola[0].nombre
             <<endl;

        cola[0].atendido=true;

        for (int i=0; i<tamanoCola-1; i++)
            cola[i]=cola[i+1];

        tamanoCola--;
        racionesSobrantes--;
        entregadas++;
    }

    cout<<"\nAtendidos : "<<entregadas<<endl;
    cout<<"En cola   : "<<tamanoCola<<endl;
    cout<<"Sobrantes : "<<racionesSobrantes<<endl;
}