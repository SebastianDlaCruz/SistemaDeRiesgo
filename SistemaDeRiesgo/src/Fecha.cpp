#include <iostream>
using namespace std;
#include "Fecha.h"

Fecha::Fecha()
{
    _dia = 0;
    _mes = 0;
    _anio = 0;
}

void Fecha ::CargarFecha(){

    cout << "INGRESE DIA:";
    cin >> _dia;
    cout << "INGRESE MES:";
    cin >> _mes;
    cout << "INGRESE ANI:";
    cin >> _anio;

}

void Fecha::MostrarFecha(){

    cout << _dia << " / " << _mes << " / "  << _anio << endl;
}
