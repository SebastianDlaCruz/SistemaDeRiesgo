#include <iostream>
#include <string.h>
using namespace std;
#include "SuperUser.h"
#include "Empresa.h"
#include "ArchivoEmpresa.h"


int ArchivoEmpresa::getCantidadDeEmpresa(){

    FILE *punArchi;

    int cantidad = 0;

    punArchi = abrirArchivo();

    fseek(punArchi,0,SEEK_END);
    cantidad = ftell(punArchi) / sizeof(Empresa);
    fclose(punArchi);
    return cantidad;
}

Empresa ArchivoEmpresa::Leer(int cantidad){

    Empresa empre;

    FILE *punArchi;

    punArchi = fopen("./data/ArchivoEmpresa.dat","rb");

    if(punArchi == nullptr) return empre;

    fseek(punArchi,sizeof(Empresa)*cantidad,SEEK_SET);

    fread(&empre,sizeof(Empresa),1,punArchi);

    fclose(punArchi);

    return empre;

}

FILE *ArchivoEmpresa::abrirArchivo(){

    FILE *pFile;

    pFile =  fopen("./data/ArchivoEmpresa.dat","rb");

    if(pFile == NULL){

        cout << "ERROR AL ABRIR EL ARCHIVO" << endl;

        exit(1550);
    }

    return pFile;
}

bool ArchivoEmpresa::GrabarEmpresa(Empresa empre){

    FILE *punEmrpresa;

    punEmrpresa = fopen("./data/ArchivoEmpresa.dat","ab");

    if(punEmrpresa == nullptr) return false;

    bool respuesta = fwrite(&empre,sizeof(Empresa),1,punEmrpresa);

    fclose(punEmrpresa);

    return respuesta;
}

bool ArchivoEmpresa::ListarEmpresa(){

    int CantidadDeEmpresas = getCantidadDeEmpresa();


    for(int i = 0; i < CantidadDeEmpresas;i++){

        Empresa empre = Leer(i);

        empre.MostrarEmpresa();
        cout << "---------------------" <<endl;
    }

    return true;
}

bool ArchivoEmpresa::BuscarUsuario(const char *email,const char *contra){

    int cantidad = getCantidadDeEmpresa();

    for(int i; i < cantidad ; i++){

        Empresa empre = Leer(i);

        if(
           strcmp(empre.getSuperUser().getEmail() , email) == 0
           && strcmp(empre.getSuperUser().getContrasenia(), contra) == 0

           ){

                return true;
           }

    }

    return false;
}


int ArchivoEmpresa::buscarIdEmpresa(int id){

    int i = 0;

    Empresa empre;

    FILE *pFile = abrirArchivo();

    while(fread(&empre,sizeof(Empresa),1,pFile)){

        if(empre.getIdEmpresa() == id ){

            fclose(pFile);
            return i;
        }

        i++;
    }

    fclose(pFile);
    return -1;
}

bool ArchivoEmpresa::Guardar(Empresa empre, int posicion){

    FILE *pFile;
    pFile =  fopen("./data/ArchivoEmpresa.dat","rb+");

    if(pFile == nullptr){

        cout << "NO SE PUDO ABRIR EL ARCHIVO" << endl;
        exit(1550);
    }

    fseek(pFile,posicion* sizeof(Empresa),SEEK_SET);
    fwrite(&empre,sizeof(Empresa),1,pFile);
    fclose(pFile);

    return true;
}

bool ArchivoEmpresa::ModificarArchivoEmpresa(){

    int idEmpresa = 0, posicion = 0;

    cout << "INGRESE EL ID DE LA EMPRESA :" << endl;
    cin >> idEmpresa;

    posicion = buscarIdEmpresa(idEmpresa);

    if(posicion != -1){

        Empresa empre = Leer(posicion);

        cout << "-----------------------" << endl;
        empre.MostrarEmpresa();
        cout << "-----------------------" << endl;
        empre.Modificar();

        if(Guardar(empre,posicion)){

            cout << "MODIFICADO CORRECTAMENTE" << endl;
        }else {

            cout << "NO SE ENCUENTRA ESA EMPRESA..." << endl;
        }
    }

}
