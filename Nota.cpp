#include "Nota.h"
#include "Fecha.h"
#include <iostream>
using namespace std;

Nota::Nota()
{

}
Nota::Nota(string contenido, Fecha fecha)
{
    this->contenido = contenido;
    this->fecha = fecha;
}
string Nota::getContenido()
{
    return contenido;
}

void Nota::setContenido(string nuevoContenido)
{
    contenido = nuevoContenido;
}

Fecha Nota::getFecha()
{
    return fecha;
}
