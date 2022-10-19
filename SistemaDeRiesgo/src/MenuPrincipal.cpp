#include <iostream>
#include <string>
using namespace std;
#include "Items.h"
#include "Menu.h"
#include "Fecha.h"
#include "MenuPrincipal.h"
#include "SistemaDeRiesgo.h"
#include "ArchivoDeSistemaDeRiesgo.h"
#include "../funcionesGenerales.h"

void MenuPrincipal::MenuDeInicio(){

    int opcion = 0;

    _menu.CargarItem("1)REGISTROS DE RIESGO");
    _menu.CargarItem("2)EMPRESA");
    _menu.CargarItem("3)PUESTO DE TRABAJO");
    _menu.CargarItem("4)INFORMACION DE ANALISIS DE RIESGO");

    do{

        _menu.MostrarItem();
        cout << "--------------" << endl;
        cout << "INGRESE UNA OPCION:"; cin >> opcion;

        switch(opcion){

            case 1 :
                    MenuSistemaDeRiesgo();
                break;

            case 2:
                    MenuSistemaDeRiesgo();
                break;
            case 0 :
                _menu.setEstado(false);
                break;
        }

    }while(_menu.getEstado());
}
