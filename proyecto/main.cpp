#include <iostream>
#include "menu.h"
#include "estructuras.h"
#include "alumnos.h"
#include "colavirtual.h"
#include "reportes.h"

using namespace std;

const int CAPACIDAD_ALUMNOS = 100;
const int CAPACIDAD_COLA = 100;

int main() {
	

    AlumnoBecado alumnos[CAPACIDAD_ALUMNOS];
    int cantidadAlumnos = 0;
 
    AlumnoNoBecado cola[CAPACIDAD_COLA];
    int cantidadCola = 0;
    
    int racionesTotales[TOTAL_TURNOS] = {0, 0, 0};
    int racionesSobrantes=0;
 
    int opcionPrincipal;
    do {
    	
    	system("cls");
        mostrarMenuPrincipal();
        cin >> opcionPrincipal;
 
        if (opcionPrincipal == 1) {
 
            int opcionAlumnos;
 
            do {
                system("cls");
                mostrarSubmenuAlumnos();
                cin >> opcionAlumnos;
 
                switch (opcionAlumnos) {
 
                    case 1:
                        registrarAlumnoBecado(alumnos, cantidadAlumnos, CAPACIDAD_ALUMNOS);
                        system("pause");
                        break;
 
                    case 2:
                        listarAlumnosBecados(alumnos, cantidadAlumnos);
                        system("pause");
                        break;
 
                    case 3:
                        buscarAlumnoBecado(alumnos, cantidadAlumnos);
                        system("pause");
                        break;
 
                    case 4:
                        modificarAlumnoBecado(alumnos, cantidadAlumnos);
                        system("pause");
                        break;
 
                    case 5:
                        eliminarAlumnoBecado(alumnos, cantidadAlumnos);
                        system("pause");
                        break;
 
                    case 6:
                        ordenarAlumnosBecados(alumnos, cantidadAlumnos);
                        system("pause");
                        break;
 
                    case 7:
                        break;
 
                    default:
                        cout << "\nOpcion no valida.\n";
                        system("pause");
                }
 
            } while (opcionAlumnos != 7);
 
        }
    	
    	 else if (opcionPrincipal >= 2 && opcionPrincipal <= 4) {
 
            string nombreTurno;
            int turno = opcionPrincipal - 2; 
 
            switch (opcionPrincipal) {
                case 2:
                    nombreTurno = "DESAYUNO";
                    break;
                case 3:
                    nombreTurno = "ALMUERZO";
                    break;
                case 4:
                    nombreTurno = "CENA";
                    break;
            }

            int opcionSubmenu;

            do {
            	 system("cls");
                mostrarSubmenuGestion(nombreTurno);
                cin >> opcionSubmenu;
 
                switch (opcionSubmenu) {
 
                    case 1:
                        registrarAsistencia(alumnos, cantidadAlumnos, turno);
                        system("pause");
                        break;
 
                    case 2:
                        listarAsistentes(alumnos, cantidadAlumnos, turno);
                        system("pause");
                        break;
                        
                     case 3:
    					listarFaltantes(alumnos, cantidadAlumnos, turno);
    					system("pause");
    					break;

                    case 4:
				    registrarAlumnoNoBecado(
				        cola,
				        cantidadCola,
				        CAPACIDAD_COLA,
				        turno);
				    system("pause");
				    break;

                    case 5:
					    mostrarCola(cola, cantidadCola);
					    system("pause");
					    break;
                        
                        
                    case 6:
					    ordenarCola(cola, cantidadCola);
					    system("pause");
					    break;

                    case 7:
                        racionesSobrantes = cierreHorarioYSaldos(racionesTotales[turno], cantidadAlumnos);
                        system("pause");
                        break;

                    case 8:
                       	atenderCola(cola, cantidadCola, racionesSobrantes);
                        system("pause");
                        break;

                    case 9:
                        break;

                    default:
                        cout << "\nOpcion no valida.\n";
                        system("pause");
                }

            } while (opcionSubmenu != 9);

        }
        else {

            switch (opcionPrincipal) {

                case 5:
				    system("cls");
				
				    cout << "=====================================\n";
				    cout << "   CONFIGURAR RACIONES DEL DIA\n";
				    cout << "=====================================\n";
				
				    cout << "Cantidad de raciones para DESAYUNO: ";
				    cin >> racionesTotales[0];
				
				    cout << "Cantidad de raciones para ALMUERZO: ";
				    cin >> racionesTotales[1];
				
				    cout << "Cantidad de raciones para CENA: ";
				    cin >> racionesTotales[2];
				
				    cout << "\nRaciones registradas correctamente.\n";
				
				    system("pause");
				    break;

                default:
                    cout << "\nOpcion no valida.\n";
                    system("pause");
            }

        }

    } while (opcionPrincipal != 6);

       
    return 0;
}