#include <iostream>
#include "menu.h"
#include "estructuras.h"

using namespace std;
int main()
{
     int opcionPrincipal;

    do {

        system("cls");
        mostrarMenuPrincipal();
        cin >> opcionPrincipal;

        if (opcionPrincipal >= 1 && opcionPrincipal <= 3) {

            string turno;

            switch(opcionPrincipal){
                case 1: turno = "DESAYUNO"; break;
                case 2: turno = "ALMUERZO"; break;
                case 3: turno = "CENA"; break;
            }

            int opSub;

            do{

                system("cls");
                mostrarSubmenuGestion(turno);
                cin >> opSub;

                switch(opSub){

                    case 1:
                          cout << "\n===========================================\n";
                          cout << "      CONTROL DE ASISTENCIA - " << turno << "\n";
                          cout << "===========================================\n";
                          cout << "Ingrese su codigo universitario: ";

                           // Aquí llamar  la función que busca al alumno

                           system("pause");
                        break;

                    case 9:
                        break;

                    default:
                        cout << "\nFuncion aun no implementada.\n";
                        system("pause");
                }

            }while(opSub != 9);

        }
        else{

            switch(opcionPrincipal){

                case 4:
                    cout << "\n[Modulo de Reportes del Integrante 3 - Proximamente]\n";
                    system("pause");
                    break;

                case 5:
                    cout << "\nGracias por usar SIRECO. ¡Cierre de jornada exitoso!\n";
                    break;

                default:
                    cout << "\nOpcion no valida.\n";
                    system("pause");
            }

        }

    }while(opcionPrincipal != 5);

    return 0;
}