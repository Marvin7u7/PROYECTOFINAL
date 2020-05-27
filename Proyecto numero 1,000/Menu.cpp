#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include "Cliente.h"

void Menu(int);
void Cliente ();
void Agregar_cliente ();
void Datos_Hotel ();

using namespace std;

void Menu;
{
    system("cls");
    int opc;
    cout<<"-----Bienvenido al hotel Rise & Shine-----"<<endl;
    cout<<" 1 - Agregar cliente \n"
    cout<<" 2 - Datos del cliente \n";
    cout<<" 3 - Datos de hotel \n";
    cout<<" 4 - Salir \n";
    cout<<"------------------------------------------"<<endl;
    cout<<" Opcion: ";
    cin>> opc;
    fflush(stdin);
    fflush(stdout);

    switch(opc);
    {
    case 1:

        Agregar_cliente();
        break;

    case 2:
        system("cls");
        cout"-----Listado del cliente-----"<<endl;
        Cliente();
        break;

    case 3:
        system("cls");
        Datos_Hotel();
        break;

    case 4:
        system("cls");
        Menu();
        break;

    }

}
