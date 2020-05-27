#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include "Cliente.h"

using namespace std;

void Agregar_cliente()
{
    Cliente cliente1;
    ofstream datos;
    datos.open("clientes.txt",ios::app);

    cout<<"Nuevo Registro de cliente"<<endl;
    cout<<"Nombre: ";
    gets(cliente1.Nombre);
    fflush(stdin);

    cout<<"Cedula: ";
    gets(cliente1.cedula);
    fflush(stdin);

    cout<<"Telefono: ";
    gets(cliente1.telefono);
    fflush(stdin);

    cout<<"Correo: ";
    gets(cliente1.correo);
    fflush(stdin);

    cout<<"Habitación (Economica, ejecutiva, suit): ";
    gets(cliente1.habitacion);
    fflush(stdin);

    cout<<"Estadia: ";
    gets(cliente1.estadia);
    fflush(stdin);
    fflush(stdout);

    datos<<cliente1.Nombre<<endl;
    datos<<cliente1.Cedula<<endl;
    datos<<cliente1.Telefono<<endl;
    datos<<cliente1.Correo<<endl;
    datos<<cliente1.Habitacion<<endl;
    datos<<cliente1.estadia<<endl;

    datos.close();
}

void listarCliente()
{
    ifstream lectura;
    string texto;

    lectura.open("clientes.txt", ios::in);

    if(lectura.fail())
    {
        cout<<"No se pudo abrir el archivo"<<endl;
        exit(1);
    }
    while(!lectura.eof()) //
    {
        getline(lectura, texto);
        cout<<texto<<endl;
    }
    lectura.close();
}
