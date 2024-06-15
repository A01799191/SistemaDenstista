#ifndef FECHA_H
#define FECHA_H


class Fecha
{
    private:
    int dia;
    int mes;
    int anio;
    public:
    int getDia();
    void setDia(int nuevoDia);
    int getMes();
    void setMes(int nuevoMes);
    int getAnio();
    void setAnio(int nuevoAnio);

};
#endif