#include <iostream>
using namespace std;
#include "Fecha.h"
#include "Tratamiento.h"

Tratamiento::Tratamiento()
{
    descripcion = "";
}

Tratamiento::Tratamiento(string descripcion , Fecha FechaInicio, Fecha fechaFin)
{
    descripcion = descripcion;
    fechaInicio= fechaInicio;
    fechaFin = fechaFin;
    

}

string Tratamiento::getDescripcion()
{
    return descripcion;
}

void Tratamiento::setDescripcion(string nuevaDescripcion)
{
    descripcion = nuevaDescripcion;
}

Fecha Tratamiento::getFechaInicio()
{
    return fechaInicio;
}

void Tratamiento::setFechaInicio(Fecha nuevaFechaInicio)
{
    fechaInicio = nuevaFechaInicio;

}

Fecha Tratamiento::getFechaFin()
{
    return fechaFin;
}

void Tratamiento::setFechaFin(Fecha nuevaFechaFin)
{
    fechaFin = nuevaFechaFin;
}

string Tratamiento::getEstado()
{
    return estado;
}

void Tratamiento::setEstado(string nuevoEstado)
{
    estado = nuevoEstado;
}
