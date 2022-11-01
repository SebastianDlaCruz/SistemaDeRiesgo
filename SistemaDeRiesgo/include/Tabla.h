#ifndef TABLA_H
#define TABLA_H


class Tabla
{
    private:
        char _nombre[50];
        int _columna;
        int _fila;
    public:
        Tabla();
        void GenerarTabla();
        void GeneraraColumnas();
        void GenerarFilas();
        void IncluirTecxtoDeColumna();
};

#endif // TABLA_H
