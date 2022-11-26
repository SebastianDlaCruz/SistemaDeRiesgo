#include <iostream>
using namespace std;
#include "Fecha.h"
#include "SistemaDeRiesgo.h"
#include "ArchivoDeSistemaDeRiesgo.h"

void ArchivoDeSistemaDeRiesgo::GrabarArchivoSistemaDeRiesgo(SistemaDeRiesgo sistema){

    FILE *punRiesgo;

    punRiesgo = fopen("./data/SistemaDeRiesgo.dat","ab");

    if(punRiesgo == nullptr) exit(1550);

    fwrite(&sistema,sizeof(SistemaDeRiesgo),1,punRiesgo);

    fclose(punRiesgo);
}

int ArchivoDeSistemaDeRiesgo::CantidadDeSistemas(){

    FILE* punSistema = abrirArchivo();

    int cantidad = 0;

    fseek(punSistema,0,SEEK_END);

    cantidad = ftell(punSistema)/sizeof(SistemaDeRiesgo);

    fclose(punSistema);

    return cantidad;
}


SistemaDeRiesgo ArchivoDeSistemaDeRiesgo :: leer(int cantidad){

    SistemaDeRiesgo sistema;

    FILE* punSistema = abrirArchivo();

    fseek(punSistema,cantidad*sizeof(SistemaDeRiesgo),SEEK_SET);

    fread(&sistema,sizeof(SistemaDeRiesgo),1,punSistema );

    fclose(punSistema);

    return sistema;
}

void ArchivoDeSistemaDeRiesgo ::ListarArchivoSistemaDeRiesgo(){

    int cantidad = CantidadDeSistemas();

    for(int i = 0; i < cantidad; i++){

      SistemaDeRiesgo sistema = leer(i);

        sistema.MostrarSistemaDeRiesgo();

        cout << "A" << endl;
    }

}



FILE* ArchivoDeSistemaDeRiesgo::abrirArchivo(){

   FILE *punRiesgo;

    punRiesgo = fopen("./data/SistemaDeRiesgo.dat","rb");

    if(punRiesgo == nullptr) cout << "ERROR" << endl;

    return punRiesgo;
}

