#ifndef ARCHIVODESISTEMADERIESGO_H
#define ARCHIVODESISTEMADERIESGO_H


class ArchivoDeSistemaDeRiesgo

{
    private:
        FILE *abrirArchivo();
    public:

    void GrabarArchivoSistemaDeRiesgo(SistemaDeRiesgo);
    void ListarArchivoSistemaDeRiesgo();
    int CantidadDeSistemas();

    SistemaDeRiesgo leer(int);

};

#endif // ARCHIVODESISTEMADERIESGO_H
