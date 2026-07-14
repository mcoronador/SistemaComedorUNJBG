#include"reportes.h"
#include<iostream>

using namespace std;

int cierreHorarioYSaldos(int racionesTotales, int asistentes) {
    int racionesSobrantes=racionesTotales-asistentes;
    
    if (racionesSobrantes<0){
        racionesSobrantes=0; 
    }
    
    cout<<"========================================="<<endl;
    cout<<"|       CIERRE DE HORARIO Y SALDOS      |"<<endl;
    cout<<"========================================="<<endl;
    cout<<"Raciones programadas totales: " <<racionesTotales<<endl;
    cout<<"Alumnos que ya asistieron   : " <<asistentes<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<" Saldo de Raciones Sobrantes : "<<racionesSobrantes<<endl;
    cout<<"========================================="<<endl;
    
    return racionesSobrantes;
}

void atenderCola(Alumno cola[], int &tamanoCola, int racionesSobrantes) {
    cout <<"\nIniciando proceso de atencion masiva de raciones sobrantes...\n"<<endl;
    
    if (tamanoCola==0) {
        cout<<"No hay alumnos esperando en la cola virtual."<<endl;
        return;
    }
    
    int racionesDisponibles=racionesSobrantes;
    int atendidos=0;
    
    while (racionesDisponibles>0 && tamanoCola>0){
        cout<<"[ENTREGA] Racion entregada a: "<<cola[0].nombre<<" "<<cola[0].apellido<<endl;
        
        for (int i=0; i<tamanoCola-1; i++) {
            cola[i]=cola[i+1];
        }
        
        tamanoCola--;          
        racionesDisponibles--; 
        atendidos++;
    }
    cout<<"========================================="<<endl;
    cout<<"\n       RESUMEN DE PROCESO MASIVO       "<< endl;
    cout <<"Alumnos atendidos con saldo : "<< atendidos<<endl;
    cout <<"Alumnos restantes en cola   : "<< tamanoCola<<endl;
    cout <<"Raciones sobrantes finales  : "<< racionesDisponibles<<endl;
    cout <<"========================================"<<endl;
}