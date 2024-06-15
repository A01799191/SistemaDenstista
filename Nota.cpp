#include "Nota.h"
#include "Fecha.h"
#include <iostream>
using namespace std;

Nota::Nota()
{

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

void Nota::setFecha(Fecha nuevaFecha)
{
    fecha = nuevaFecha;
}

Paciente Nota::getPaciente()
{
    return paciente;
}

void Nota::setPaciente(Paciente nuevoPaciente)
{
    paciente = nuevoPaciente;
}
