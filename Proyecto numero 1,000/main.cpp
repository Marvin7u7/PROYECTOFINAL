#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include "Cliente.h"

void Menu();

using namespace std;

int main()
{
    int opc;
    do
    {
        switch ()
        {
        case 1:
        {
            system("cls");
            Menu();
            break;
        }
        case 2:
        {
            return 0;
            break;
        }
        default:
        {
            break;
        }
        }

    }
    while(opc!=2);
    return 0;
}
void Menu(int opc)
{
    cout<<"  Nombre de Proyecto \n\n";
    cout<<"-----  MENU -----\n";
    cout<<" 1. Clientes    \n";
    cout<<" 2. Salir       \n";
    cout<<"-----------------\n\n";
    cout<<"Opcion: ";
    cin>>opc;
    fflush(stdin);
    fflush(stdout);

    // return opc;
}
