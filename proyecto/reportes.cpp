#include"reportes.h"
#include<iostream>

using namespace std;

int cierreHorarioYSaldos(int racionesTotales, int asistentes, int &racionesSobrantes){
    
    if(racionesSobrantes==0){
        racionesSobrantes=racionesTotales-asistentes;
        if(racionesSobrantes<0){
            racionesSobrantes=0;
        }
    }
    
    cout<<"========================================="<<endl;
    cout<<"|       CIERRE DE HORARIO Y SALDOS      |"<<endl;
    cout<<"========================================="<<endl;
    cout<<"Raciones programadas totales: "<<racionesTotales<<endl;
    cout<<"Alumnos que ya asistieron   : "<<asistentes<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<" Raciones Sobrantes : "<<racionesSobrantes<<endl;
    cout<<"========================================="<<endl;
    
    return racionesSobrantes;
}

void atenderCola(AlumnoNoBecado cola[], int &tamanoCola, int &racionesSobrantes){
    cout <<"\nIniciando proceso de atencion a la cola....."<<endl;
    
    if (tamanoCola==0){
        cout<<"No hay alumnos esperando en la cola virtual."<<endl;
        return;
    }
    int atendidos = 0;

    while (racionesSobrantes>0 && tamanoCola>0) {

        cout <<"Racion entregada a: "
             <<cola[0].nombre
             <<"("<<cola[0].codigo<<")"<<endl;

        cola[0].atendido=true;

        for (int i=0; i<tamanoCola-1; i++)
            cola[i]=cola[i+1];

        tamanoCola--;
        racionesSobrantes--;
        atendidos++;
    }
    cout<<"========================================="<<endl;
    cout<<"\nAlumnos atendidos : "<<atendidos<<endl;
    cout<<"En cola   : "<<tamanoCola<<endl;
    cout<<"Raciones sobrantes : "<<racionesSobrantes<<endl;
    cout<<"========================================="<<endl;
}