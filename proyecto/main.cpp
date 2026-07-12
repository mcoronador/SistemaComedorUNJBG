#include <iostream>
#include "menu.h"
#include "estructuras.h"
#include "alumnos.h"

using namespace std;

int main() {
	
  AlumnoBecado alumnos[] = {
    {"2026118015", "Juan Perez", false},
    {"2026118016", "Maria Quispe", false},
    {"2026118017", "Luis Condori", false},
    {"2026118018", "Ana Flores", false},
    {"2025118019", "Carlos Mamani", false}
};
   
 int cantidadAlumnos = 5;

    int opcionPrincipal;

    do {

        system("cls");
        mostrarMenuPrincipal();
        cin >> opcionPrincipal;

        if (opcionPrincipal >= 1 && opcionPrincipal <= 3) {

            string turno;

            switch (opcionPrincipal) {
                case 1:
                    turno = "DESAYUNO";
                    break;
                case 2:
                    turno = "ALMUERZO";
                    break;
                case 3:
                    turno = "CENA";
                    break;
            }

            int opcionSubmenu;

            do {
            	
            	system("cls");
                mostrarSubmenuGestion(turno);
                cin >> opcionSubmenu;

                switch (opcionSubmenu) {

                    case 1:
                        registrarAsistencia(alumnos, cantidadAlumnos);
                        system("pause");
                        break;

                    case 2:
                        listarAsistentes(alumnos, cantidadAlumnos);
                        system("pause");
                        break;
                        
                        
                     case 3:
                        cout << "\n modulo 2.\n";
                        system("pause");
                        break;

                    case 4:
                        cout << " modulo \n2.\n";
                        system("pause");
                        break;

                    case 5:
                        cout << "modulo \n2.\n";
                        system("pause");
                        break;
                        
                        
                         case 6:
                        cout << "\nModulo 3.\n";
                        system("pause");
                        break;

                    case 7:
                        cout << "\nModulo 3.\n";
                        system("pause");
                        break;

                    case 8:
                        cout << "\nModulo 3.\n";
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

                case 4:
                    cout << "\nModulo de Reportes Generales.\n";
                    system("pause");
                    break;

                case 5:
                    cout << "\nGracias por utilizar COMEDOR-SGO.\n";
                    break;

                default:
                    cout << "\nOpcion no valida.\n";
                    system("pause");
            }

        }

    } while (opcionPrincipal != 5);

    return 0;
    

    return 0;
}