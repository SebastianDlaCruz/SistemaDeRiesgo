#ifndef PERSONAL_H_INCLUDED
#define PERSONAL_H_INCLUDED
class Personal{
    private:
int IDpuestoDetrabajo;
int NLegajoPersona;
char nombre[50];
char apellido[50];
int edad;
char email[50];
int tel;
int categoria;
int gerencia;
Fecha fecha_ingreso;
Fecha fecha_egreso;
bool personalEventual;
    public:
void cargarPersonal();
int leerDeDisco(int pos);
int grabarEnDisco();
 int MostrarTodos();
 int getCantidad();
};


#endif // PERSONAL_H_INCLUDED
