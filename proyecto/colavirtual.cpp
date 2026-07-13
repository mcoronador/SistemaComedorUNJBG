#include<"colavirtual.h">
#include<iostream>
using namespace std;

void registrarcola(Alumno cola[], int &tamanoCola, Alumno nuevoAlumno){
	cola[tamanoCola]=nuevoAlumno;
	tamanoCola++;
	cout<<"Se registro al alumno de forma correcta"<<endl;
}
void mostrarCola(Alumno cola[], int tamanoCola){
	if(tamanoCola==0){
		cout<<"La cola se encuentra vacia"<<endl;
		return;
	}
	cout<<"====================================="<<endl;
	cout<<"|          Alumnos en la cola       |"<<endl;
	for(int i=0; i<tamanoCola; i++){
		cout<<i+1<<" "<<cola[i].nombre<<" "<<cola[i].apellido<<endl;
	}
}
void atenderCola(Alumno cola[], int &tamanoCola){
	if(tamanoCola==0){
		cout<<"No se encuentra ningun alumno en la cola"<<endl;	
		return;
	}	
	cout<<"Atencion al "<<cola[0].nombre<<cola[0].apellido<<endl;
	
	for(int i=0; i<tamanoCola-1; i++){
		cola[i]=cola[i+1];
	}
	tamanoCola--
	cout<<"Se actualizo la cola"<<endl;
}
