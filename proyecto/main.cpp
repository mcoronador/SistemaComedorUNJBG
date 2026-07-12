#include <iostream>
#include "menu.h"
#include "estructuras.h"

using namespace std;

int main() {

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
                    cout << "\n===== CONTROL DE ASISTENCIA =====\n";
                    cout << "Ingrese su codigo universitario: ";
                    system("pause");
                    break;

                    case 9:
                        break;

                   
            }

        }

    

    return 0;
}