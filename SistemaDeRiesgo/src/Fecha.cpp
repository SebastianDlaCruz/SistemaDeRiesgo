#include <iostream>
using namespace std;
#include "../include/Fecha.h"

Fecha::Fecha()
{
    _dia = 0;
    _mes = 0;
    _anio = 0;
}

int Fecha::CargarFecha(){

    cout << "INGRESE DIA:";
    cin >> _dia;
    cout << "INGRESE MES:";
    cin >> _mes;
    cout << "INGRESE ANI:";
    cin >> _anio;

}
int Fecha::MostrarFecha(){

    cout << _dia << " / " << _mes << " / "  << _anio << endl;
}

int Fecha ::getDia(){return _dia;}
int Fecha ::getMes(){return _mes;}
int Fecha ::getAnio(){return _anio;}

