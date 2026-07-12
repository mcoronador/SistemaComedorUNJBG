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
    

    return 0;
}