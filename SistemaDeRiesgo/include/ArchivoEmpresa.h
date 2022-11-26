#ifndef ARCHIVOEMPRESA_H
#define ARCHIVOEMPRESA_H


class ArchivoEmpresa{

    private:

        FILE *abrirArchivo();

    public:
        bool GrabarEmpresa(Empresa);
        bool ListarEmpresa();
        bool ModificarArchivoEmpresa();
        bool Guardar(Empresa, int );
        Empresa Leer(int);
        int getCantidadDeEmpresa();
        bool BuscarUsuario(const char*,const char*);
        int buscarIdEmpresa(int);
};

#endif // ARCHIVOEMPRESA_H
