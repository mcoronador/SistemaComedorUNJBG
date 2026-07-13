#include "reportes.h"
#include<iostream>

using namespace std;

void reporteRaciones(int racionesTotales, int racionesEntregadas){
	int sobrantes=racionesTotales-racionesEntregadas;
	cout<<"============================================="<<endl;
	cout<<"|          Reporte de raciones              |"<<endl;
	cout<<"============================================="<<endl;
	cout<<"Raciones cocinadas: "<<racionesTotales<<endl;
	cout<<"Raciones servidas: "<<racionesEntregadas<<endl;
	cout<<"Raciones sobrantes: "<<sobrantes<<endl;
	cout<<"============================================="<<endl
}
void reporteAsistencia(Alumno cola[], int tamanoCola){
	int becados=0;
	int nobecados=0;
	for(int i=0; i<tamanoCola; i++){
		if(cola[i].esBecado){
			becados++;
		}
		else{
			nobecados++;
		}
	}
	cout<<"============================================="<<endl;
	cout<<"|              Alumnos en cola              |"<<endl;
	cout<<"============================================="<<endl;
	cout<<"Alumnos becados esperando: "<<becados<<endl;
	cout<<"Alumnos no becados esperando: "<<nobecados<<endl;
	cout<<"============================================="<<endl;
}
void reporteCola(int tamanoCola){
	cout<<"============================================="<<endl;
	cout<<"|            Estado de la cola              |"<<endl;
	cout<<"============================================="<<endl;
	cout<<"Alumnos en espera: "<<tamanoCola<<endl;
	cout<<"============================================="<<endl;
}