#ifndef ARCHIVO_H
#define ARCHIVO_H


class Archivo
{
    private:
        FILE *abrirArchivo(string);
    public:
        Archivo();

        bool grabarArchivo(string);
        bool listarArchivo(string);



};

#endif // ARCHIVO_H
