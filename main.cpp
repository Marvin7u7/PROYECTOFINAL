#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "Clientes.h"

void MENU();

using namespace std;

int MenuPrincipal(int);

int main()
{
     int OP;
    do
    {
        switch(MenuPrincipal(OP))
        {
        case 1: // PAGOS
        {
            system("cls");
            MENU();

            break;
        } // FIN CASE 1 PRINCIPAL

        ////////////////////////////////////////////////////////////////

        case 2: // SALIDA
        {
//            SalidaPrograma();
            return 0;
            break;
        } // FIN CASE 4 PRINCIPAL

        ////////////////////////////////////////////////////////////////

        default: // CUALQUIER OPCION FUERA DE MENU
        {
//            DEFAULT();
            break;
        } // FIN CASE DEFAULT
        }// FIN CASES PRINCIPAL

        ////////////////////////////////////////////////////////////////

    }
    while(OP!=2);
    return 0;
}

int MenuPrincipal(int opc)
{
    cout<<"  Proyecto Hotel \n\n";
    cout<<" ===== MENU =====\n";
    cout<<"| 1. Clientes    |\n";
    cout<<"| 2. Salir       |\n";
    cout<<" ----------------\n\n";
    cout<<"Opcion: ";
    cin>>opc; // Almacena opcion del menú principal
    fflush(stdin); // Limpieza de buffer entrada
    fflush(stdout); // Limpieza buffer salida

    return opc;
};

