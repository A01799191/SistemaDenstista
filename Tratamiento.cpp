#include <iostream>
using namespace std;
#include "Fecha.h"
#include "Tratamiento.h"

Tratamiento::Tratamiento()
{
    descripcion = "";
}

Tratamiento::Tratamiento(string descripcion , Fecha FechaInicio, Fecha fechaFin, string estado, string paciente)
{
    this-> descripcion = descripcion;
    this->fechaInicio= fechaInicio;
    this->fechaFin = fechaFin;
    this->estado=estado;
    this-> paciente = paciente;
    

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

string Tratamiento::getPaciente()
{
    return paciente;
}

bool Tratamiento::operator==(const Tratamiento otro) const
{
    return (descripcion == otro.descripcion && fechaInicio == otro.fechaInicio && fechaFin == otro.fechaFin && estado == otro. estado);
}
