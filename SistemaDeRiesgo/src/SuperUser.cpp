#include <iostream>
#include <string.h>
using namespace std;
#include "SuperUser.h"

SuperUser::SuperUser()
{
    strcpy(_email,"000");
    strcpy(_contrasenia,"000000");

}

void SuperUser::CargarSuperUser(){

    cout << "INGRESE EL EMAIL DEL SUPER USUARIO" << endl;
    cin.ignore();
    cin.getline(_email,50,'\n');
    cout << "INGRESA LA CONTRASEÑA:" << endl;
    cin.getline(_contrasenia,15,'\n');
}
