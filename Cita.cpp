/**
 * Proyecto Final : Sistema Dentista
 * Nombre : Rodrigo Castillo Francisco
 * Matricula : A01799191
 * Profesor : Roberto Martinez Roman
 * Fecha de creación : Jueves 13 de Junio del 2024
 */

#include <iostream>
using namespace std;
#include "Cita.h"

Fecha Cita::getFecha()
{
    return fecha;
}

void Cita::setFecha(Fecha nuevaFecha)
{
    fecha = nuevaFecha;
}

Hora Cita::getHora()
{
    return hora;
}

void Cita::setHora(Hora nuevaHora)
{
    hora = nuevaHora;
}

Paciente Cita::getPaciente()
{
    return paciente;
}

void Cita::setPaciente(Paciente nuevoPaciente)
{
    paciente = nuevoPaciente;
}

Dentista Cita::getDentista()
{
    return dentista;
}

void Cita::setDentista(Dentista nuevoDentista)
{
    dentista = nuevoDentista;
}
