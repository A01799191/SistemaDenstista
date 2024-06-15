#include "Fecha.h"

Fecha::Fecha()
{
}

Fecha::Fecha(int d, int m, int a)
{
    dia=d;
    mes = m;
    anio = a;
}
int Fecha::getDia()
{
    return dia;
}

void Fecha::setDia(int nuevoDia)
{
    dia = nuevoDia;
}

int Fecha::getMes()
{
    return mes;
}

void Fecha::setMes(int nuevoMes)
{
    mes = nuevoMes;
}

int Fecha::getAnio()
{
    return anio;
}

void Fecha::setAnio(int nuevoAnio)
{
    anio = nuevoAnio;
}
