#ifndef FUNCIONESGENERALES_H_INCLUDED
#define FUNCIONESGENERALES_H_INCLUDED

#include "rlutil.h"

using namespace rlutil;

void menuDeEmpresa();
/// ===================================///


void menuDeEmpresa(){

     Menu menu;

    cout << "MENU EMPRESA" <<endl;

    menu.CargarItem("1)GRABAR EMPRESA");
    menu.CargarItem("2)MOSTRAR EMPRESA");
    menu.CargarItem("3)CARGAR PERSONAL");
    menu.CargarItem("4)MODIFICAR EMPRESA");
    menu.CargarItem("5)AGREGAR PERSONAL");
    menu.CargarItem("6)BUSCAR SISTEMA DE RIESGO");

    int opcion = 0;

        do{

        menu.MostrarItem();
        Empresa empre;
        ArchivoEmpresa arcEmpresa;
        cout << "--------------" << endl;
        cout << "INGRESE UNA OPCION:"; cin >> opcion;
         cls();

        switch(opcion){

            case 1 :
                {

                        empre.CargarEmpresa();
                    arcEmpresa.GrabarEmpresa(empre);
                }

                break;
        case 2 :
                    arcEmpresa.ListarEmpresa();
                break;

            case 3 :
                    empre.CargarPersonal();

                    if(arcEmpresa.BuscarUsuario(
                        empre.getSuperUser().getEmail(),
                        empre.getSuperUser().getContrasenia())){

                            cout << "EXITO: USUARIO VALIDO" << endl;

                        }else{

                             cout << "ERROR: USUARIO INVALIDO" << endl;
                        }


                break;

            case 4:

                arcEmpresa.ModificarArchivoEmpresa();

                break;
            case 6:
                /// ACA DEBE IR EL MENU DEL SECTOR
                break;

            case 0 :
                menu.setEstado(false);
                break;
        }

    }while(menu.getEstado());


}

#endif // FUNCIONESGENERALES_H_INCLUDED
