#ifndef MENU_H
#define MENU_H
class Menu
{
    protected:
        string _nombreDelItem;
        int _cantidadDeItems;
        Items *_item;
        int _opcion;
        bool _salir;
    public:
        Menu();
        void CargarItem(string);
        void MostrarItem();

        int getCantidad(){return _cantidadDeItems;}
        string getNombreDelItem(){return _nombreDelItem;}

        void setOpcion(int opcion){_opcion = opcion;}
        int getOpcion(){return _opcion;}

        void setEstado(bool salir){_salir = salir;}
        bool getEstado(){return _salir;}

};

#endif // MENU_H
