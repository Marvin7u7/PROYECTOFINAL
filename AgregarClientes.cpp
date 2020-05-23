#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include "Clientes.h"

using namespace std;

void agregarCliente()
{
    Cliente cliente1;
    ofstream datos;
    datos.open("clientes.txt",ios::app); //Abre el archivo en modo de edición

    cout<<"Nuevo Registro de cliente"<<endl;
    cout<<"Cedula: ";
    gets(cliente1.Cedula);
    fflush(stdin);

    cout<<"Nombre: ";
    gets(cliente1.Nombre);
    fflush(stdin);

    cout<<"Telefono: ";
    gets(cliente1.Telefono);
    fflush(stdin);

    cout<<"Direccion: ";
    gets(cliente1.Direccion);
    fflush(stdin);

    cout<<"Correo: ";
    gets(cliente1.Correo);
    fflush(stdin);

    fflush(stdout);

    datos<<cliente1.Cedula<<endl;
    datos<<cliente1.Nombre<<endl;
    datos<<cliente1.Telefono<<endl;
    datos<<cliente1.Direccion<<endl;
    datos<<cliente1.Correo<<endl;

    datos.close();
}

void listarCliente()
{
    // 1 - Abrir el archivo
    // 2 - Leer el archivo
    // 3 - Mostrar el contenido del archivo

    ifstream lectura;
    string texto; //aqui es donde guardaré todo el contenido del archivo

    lectura.open("clientes.txt", ios::in); //Abrimos el archivo en modo Lectura

    if(lectura.fail()) // Si falla la apertura del archivo
    {
        cout<<"No se pudo abrir el archivo"<<endl;
        exit(1);
    }

    while(!lectura.eof()) //eof -> End of File ... Mientras no sea el final del archivo
    {
        getline(lectura, texto);
        cout<<texto<<endl;
    }

    lectura.close();

}
