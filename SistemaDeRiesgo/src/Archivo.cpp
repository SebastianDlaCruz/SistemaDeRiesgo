#include <iostream>
using namespace std;
#include "Archivo.h"

FILE *Archivo::abrirArchivo(string nombreDelArchivo){

    FILE * puntArchivi;

    puntArchivi = fopen("algo.dat","rb");

    if(puntArchivi == nullptr) exit(1152);

    return puntArchivi;
}

