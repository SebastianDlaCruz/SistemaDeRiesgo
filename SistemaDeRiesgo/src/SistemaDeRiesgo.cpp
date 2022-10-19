#include <iostream>
using namespace std;
#include "Fecha.h"
#include "SistemaDeRiesgo.h"

SistemaDeRiesgo::SistemaDeRiesgo(){

    _idPuesto = 0;
    _idEmpresa = 0;
    _deficiencia = 0;
    _exposicion = 0;
    _probabilidad = 0;
    _consecuencia = 0;
    _riesgo = 0;
    _bajoControl = 0;
}


void SistemaDeRiesgo::CargarSistemaDeRiesgo(){

    cout << "***INGRESE LOS DATOS DEL SISTEMA DE RIESGO***" << endl;
    cout << endl;
    cout << "INGRESE ID PUESTO:" << endl;
    cin >> _idPuesto ;
    cout << "INGRESE ID EMPRESA:" << endl;
    cin >> _idEmpresa;
    cout << "INGRESE FECHA:" << endl;
     _fechaDelSiastema.CargarFecha();
    cout << "INGRESE DEFICIENCIA (1,2,6,10):" << endl;
    cin >> _deficiencia;
    cout << "INGRESE EXPOSICION (1 AL 4):" << endl;
    cin >> _exposicion;
    setProbabilidad(_deficiencia * _exposicion);
    cout << "INGRESE  CONSECUENCIA (100,60,25,10):" << endl;
    cin >> _consecuencia;
    setNivelDeRiesgo(_consecuencia * _probabilidad);
}

void SistemaDeRiesgo ::MostrarSistemaDeRiesgo(){

    cout << "***DATOS DEL SISTEMA DE RIESGO***" << endl;
    cout << endl;
    cout << "ID PUESTO:" << endl;
    cout <<_idPuesto << endl;
    cout << "ID EMPRESA:" << endl;
    cout << _idEmpresa << endl;
    cout << "FECHA:" << endl;
     _fechaDelSiastema.MostrarFecha();
    cout << "DEFICIENCIA (1,2,6,10):" << endl;
    cout <<_deficiencia << endl;
    cout << "EXPOSICION (1 AL 4):" << endl;
    cout << _exposicion << endl;
    cout << "PROBABILIDAD:" << endl;
    cout << _probabilidad << endl;
    cout << "CONSECUENCIA (100,60,25,10):" << endl;
    cout << _consecuencia << endl;
    cout << "NIVEL DE RIEGO:" << endl;
    cout << _riesgo << endl;
};

void SistemaDeRiesgo:: setProbabilidad(int probabilidad){

        _probabilidad = probabilidad;
};

int SistemaDeRiesgo:: getProbabilidad(){

    return _probabilidad;
}

void SistemaDeRiesgo :: setNivelDeRiesgo(int nivelDeRiesgo ){
    _riesgo = nivelDeRiesgo;
}

int SistemaDeRiesgo:: getNivelDeRiesgo(){

    return _riesgo;
}
