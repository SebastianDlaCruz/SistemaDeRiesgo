#ifndef FUNCIONESGENERALES_H_INCLUDED
#define FUNCIONESGENERALES_H_INCLUDED

void MenuSistemaDeRiesgo();
/// ===================================///

void MenuSistemaDeRiesgo(){

    Menu menu;
    SistemaDeRiesgo sistema;
    ArchivoDeSistemaDeRiesgo arcSistema;

    cout << "MENU DE SISTEMA DE RIESGO" <<endl;

    menu.CargarItem("1)GRABAR ARCHIVO SISTEMA DE RIESGO");
    menu.CargarItem("2)MOSTRAR EL SISTEMA DE RIESGO");
    menu.CargarItem("3)MOSTRAR ESMPRESA CON MAYOR INDICE DE RIESGO");
    menu.CargarItem("4)MODIFICAR SISTEMA DE RIEGO");



    int opcion = 0;

        do{

        menu.MostrarItem();
        cout << "--------------" << endl;
        cout << "INGRESE UNA OPCION:"; cin >> opcion;

        switch(opcion){

            case 1 :
                    sistema.CargarSistemaDeRiesgo();
                    arcSistema.GrabarArchivoSistemaDeRiesgo(sistema);
                    cout << "GRABADO CON EXITO" << endl;
                break;
            case 2 :
                    {

                    int cantidad = arcSistema.CantidadDeSistemas();

                     SistemaDeRiesgo auxSistema;

                    for(int i = 0; i < cantidad; i++){

                        auxSistema = arcSistema.leer(i);

                        auxSistema.MostrarSistemaDeRiesgo();
                    }
                        cout << "aca" << endl;
                    }

                break;

            case 0 :
                menu.setEstado(false);
                break;
        }

    }while(menu.getEstado());

}

#endif // FUNCIONESGENERALES_H_INCLUDED
