#ifndef ITEMS_H
#define ITEMS_H


class Items{

    private:
        string nombreDeItem;
    public:
        Items();
    /// SETS Y GETS ///

    void setNombreDeItem(string nombre){nombreDeItem = nombre;}
    string getNombreDeItem(){return nombreDeItem;}
};

#endif // ITEMS_H
