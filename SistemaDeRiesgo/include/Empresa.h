#ifndef EMPRESA_H
#define EMPRESA_H


class Empresa
{
    private:
        int _idEmpresa;
        char _nombreDeLaEmpresa[50];
        int  _areaDelTrabajo;
        int _cantidadDePisos;
        SuperUser  _user;

    public:
        Empresa();

            void CargarEmpresa();
            void MostrarEmpresa();
            void ModificarEmpresa();
            void CargarPersonal();

            void BuscarSistemaDSeRiesgo();

            int getIdEmpresa();
            int getNominaAlta();
            int getNominaBaja();




};

#endif // EMPRESA_H
