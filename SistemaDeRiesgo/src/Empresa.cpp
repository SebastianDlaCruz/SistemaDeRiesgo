#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
#include "SuperUser.h"
#include "Empresa.h"

Empresa::Empresa()
{
    _idEmpresa = 0;
    strcpy(_nombreDeLaEmpresa,"0000");
    strcpy(_areaDelTrabajo,"0000");
    _cantidadDePisos = 0;
}

void Empresa ::CargarEmpresa(){

    cout << "INGRESE EL ID DE LA EMPRESA:"<<endl;
    cin>> _idEmpresa;
    cout << "INGRESE NOMBRE DE LA EMPRESA:"<<endl;
    cin.ignore();
    cin.getline(_nombreDeLaEmpresa,50,'\n');
    cout << "INGRESE EL AREA DE TRABAJO:"<<endl;
    cin.getline(_areaDelTrabajo,20,'\n');
    cout << "INGRESAR CANTIDAD DE PISOS:" << endl;
    cin >>  _cantidadDePisos;
    cout << "DATOS DEL ADMINISTRADOR" << endl;
   _user.CargarSuperUser();
}

void Empresa ::MostrarEmpresa(){

    cout << "ID DE LA EMPRESA: "<<endl;
    cout <<  _idEmpresa << endl;
    cout << "NOMBRE DE LA EMPRESA:"<<endl;
     cout  << _nombreDeLaEmpresa << endl;
    cout << "AREA DE TRABAJO" << endl;
    cout << _areaDelTrabajo << endl;
    cout << "CANTIDAD DE PISOS:" << endl;
    cout << _cantidadDePisos << endl;
}

void Empresa::CargarPersonal(){

    cout << "**** ANTES DE CARGAR UN PERSONAL INGRESE " << endl;
    cout << "EMAIL DEL SUPER ADMIN" << endl;
    cout << "CONTRASEÑA DEL ADMIN" << endl;

    char email[40],contrasenia[16];

    cin.ignore();
    cout << "EMAL:"; cin.getline(email,40,'\n');
    _user.setEmail(email);
    cout << "CONTRASEÑIA:"; cin.getline(contrasenia,16,'\n');
    _user.setContrasenia(contrasenia);
}


SuperUser Empresa::getSuperUser(){

    return _user;
}

void Empresa ::Modificar(){

    cout << "Que DATO DE LA EMPRESA QUERES MODIFICAR:" << endl;

    cout << "1) NOMBRE DE LA EMPRESA" <<endl;
    cout << "2) AREA DE TRABAJO" <<endl;
    cout << "3) CANTIDAD DE PISOS" <<endl;
    int opcion = 0;
    cin >> opcion;
    switch(opcion){

        case 1:
               cout << "NUEVO NOMBRE DE LA EMPRESA" <<endl;
               cin.ignore();
               cin.getline(_nombreDeLaEmpresa,50,'\n');
            break;

        case 2:
               cout << "NUEVO NOMBRE DEL AREA" <<endl;
               cin.ignore();
               cin.getline(_areaDelTrabajo,20,'\n');
            break;
        case 3:
               cout << "NUEVA CANTIDAD DE PISOS" <<endl;
               cin >> _cantidadDePisos;
               cin.getline(_areaDelTrabajo,20,'\n');
            break;

    }
}

int Empresa::getIdEmpresa(){

    return _idEmpresa;
}
