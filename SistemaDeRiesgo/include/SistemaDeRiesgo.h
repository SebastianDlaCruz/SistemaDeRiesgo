#ifndef SITEMEDERIESGO_H
#define SITEMEDERIESGO_H

class SistemaDeRiesgo
{
    private:
        int _idPuesto;
        int _idEmpresa;
        Fecha _fechaDelSiastema;
        int _deficiencia;
        int  _exposicion;
        int _probabilidad;
        int _consecuencia;
        int _riesgo;
        bool _bajoControl;
    public:

        SistemaDeRiesgo();
        void CargarSistemaDeRiesgo();
        void MostrarSistemaDeRiesgo();

        void setProbabilidad(int);
        int getProbabilidad();
        void setNivelDeRiesgo(int);
        int getNivelDeRiesgo();
};

#endif // SITEMEDERIESGO_H
