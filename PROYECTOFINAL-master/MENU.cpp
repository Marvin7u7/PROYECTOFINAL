#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "Clientes.h"

void MenuPrincipal(int);
void agregarCliente();
void listarCliente();

using namespace std;

void MENU()
{

    system("cls");
    int opc;
    cout<<"   Bienvenido al Hotel Rise and Shine     \n\n";
    cout<<" ===== MENU =====       \n";
    cout<<" 1. Agregar Cliente    \n";
    cout<<" 2. Listar Clientes    \n";
    cout<<" 3. Salir              \n";
    cout<<" ----------------\n\n";
    cout<<"Opcion: ";
    cin>>opc; // Almacena opcion del menú principal
    fflush(stdin); // Limpieza de buffer entrada
    fflush(stdout); // Limpieza buffer salida

    switch(opc)
    {

    case 1:

       agregarCliente();
        break;

    case 2:
        system("cls");
        cout<<"************ LIstas de usuarios  ************"<<endl<<endl;
        listarCliente();
        break;

    case 3:
        system("cls");
        MenuPrincipal(opc);
        break;
    }
}
