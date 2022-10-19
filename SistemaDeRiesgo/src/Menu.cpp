#include <iostream>
#include <string>
using namespace std;
#include "Items.h"
#include "Menu.h"

Menu::Menu()
{
    _cantidadDeItems=0;
    _opcion = -1;
    _salir = true;
}

/// CARGA UN NUEVO ITEM DINAMICAMENTE
void Menu::CargarItem(string nombre){
    Items *bufferCantidad;
    bufferCantidad = new Items[_cantidadDeItems+1];
    for(int i = 0; i < _cantidadDeItems; i++){
        bufferCantidad[i] = _item[i];
    }

    bufferCantidad[_cantidadDeItems].setNombreDeItem(nombre);
    if(bufferCantidad == nullptr) delete bufferCantidad;
    _item = bufferCantidad;
    _cantidadDeItems++;

}


void Menu::MostrarItem(){

    for(int i = 0; i < _cantidadDeItems; i++){
    cout << _item[i].getNombreDeItem()<<endl;

    }
}

