#include <iostream>
#include <string.h>
using namespace std;
#include "SuperUser.h"
#include "Empresa.h"

Empresa::Empresa()
{
    _idEmpresa = 0;
    strcpy(_nombreDeLaEmpresa,"0000");
    _areaDelTrabajo = 0;
    _cantidadDePisos = 0;
}

void Empresa ::CargarEmpresa(){

    cout << "INGRESE EL ID DE LA EMPRESA:"<<endl;
    cin>> _idEmpresa;
    cout << "INGRESE NOMBRE DE LA EMPRESA:"<<endl;
    cin.ignore();
    cin.getline(_nombreDeLaEmpresa,50,'\n');
    cout << "INGRESAR CANTIDAD DE PISOS:" << endl;
    cin>>_cantidadDePisos;
    cout << "DATOS DEL ADMINISTRADOR" << endl;
   _user.CargarSuperUser();
}

void Empresa ::MostrarEmpresa(){

    cout << " *********** ID DE LA EMPRESA: *********** "<<endl;
    cout <<  _idEmpresa << endl;
    cout << "NOMBRE DE LA EMPRESA:"<<endl;
     cout  << _nombreDeLaEmpresa << endl;
    cout << "CANTIDAD DE PISOS:" << endl;
    cout << _cantidadDePisos << endl;
}
