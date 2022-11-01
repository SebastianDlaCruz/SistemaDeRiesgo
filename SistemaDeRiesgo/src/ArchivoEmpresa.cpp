#include <iostream>
#include "SuperUser.h"
#include "Empresa.h"
#include "ArchivoEmpresa.h"


bool ArchivoEmpresa::GrabarEmpresa(Empresa empre){

    FILE *punEmrpresa;

    punEmrpresa = fopen("./data/ArchivoEmpresa.dat","ab");

    if(punEmrpresa == nullptr) return false;

    bool respuesta = fwrite(&empre,sizeof(Empresa),1,punEmrpresa);

    fclose(punEmrpresa);

    return respuesta;
}
