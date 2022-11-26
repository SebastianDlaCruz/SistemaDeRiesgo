#ifndef EMPRESA_H
#define EMPRESA_H


class Empresa
{
    private:
        int _idEmpresa;
        char _nombreDeLaEmpresa[50];
        char _areaDelTrabajo[20];
        int _cantidadDePisos;
        SuperUser  _user;

    public:
        Empresa();

            void CargarEmpresa();
            void MostrarEmpresa();
            void ModificarEmpresa();
            void CargarPersonal();
            void Modificar();
            void BuscarSistemaDSeRiesgo();

            int getIdEmpresa();

            SuperUser getUser();

            SuperUser getSuperUser();

};

#endif // EMPRESA_H
