#include "Fecha.h"
#include <string>
#include <iostream>
using namespace std;

Fecha::Fecha()
{
    dia = 1 ;
    mes = 1;
    anio = 2000;
}

Fecha::Fecha(int dia, int mes, int anio)
{
    this->dia = dia;
    this->mes = mes;
    this-> anio = anio;
}

int Fecha::getDia()
{
    return dia ;
}

int Fecha::getMes()
{
    return mes;
}

int Fecha::getAnio()
{
    return anio;
}

string Fecha::toString() const
{
    stringstream ss;
    ss<<dia<<"/"<<mes<<"/"<<anio;
    return ss.str();
}

bool Fecha::operator==(const Fecha otra)const
{
    return (dia == otra.dia && mes == otra.mes && anio== otra.anio);
}

