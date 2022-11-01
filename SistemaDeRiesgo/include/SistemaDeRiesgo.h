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
        bool CargarSistemaDeRiesgo();
        void MostrarSistemaDeRiesgo ();
        bool validarValoresDistintosDeCero(int);
        bool ValidarDeficiencia(int);
        bool ValidarExposicion(int);
        bool ValidarConsecuencia(int);
        void setProbabilidad(int);
        int getProbabilidad();
        void setNivelDeRiesgo(int);
        int getNivelDeRiesgo();
};

#endif // SITEMEDERIESGO_H
