#ifndef PUESTODETRABAJO_H_INCLUDED
#define PUESTODETRABAJO_H_INCLUDED

class PuestoDeTrabajo{
private:
   int idPuestoDeTrabajo;
   int idSector;
   char puesto[50];
public:

    int leerDeDisco(int pos);
    int grabarEnDisco();
    void cargarPuestoDeTrabajo();
     int MostrarTodos();
};




#endif // PUESTODETRABAJO_H_INCLUDED
