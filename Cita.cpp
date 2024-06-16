#include "Cita.h"

Cita::Cita()
{
}

Cita::Cita(Fecha fechaCita, string horaCita, Paciente paciente, Dentista dentista)
{
    this->fechaCita = fechaCita;
    this->horaCita = horaCita;
    this->paciente = paciente;
    this->dentista = dentista;
}

Fecha Cita::getFechaCita()const
{
    return fechaCita;
}

void Cita::setFechaCita(Fecha nuevaFechaCita)
{
    fechaCita = nuevaFechaCita;
}

string Cita::getHoraCita()const
{
    return horaCita;
}

void Cita::setHoraCita(string nuevaHoraCita)
{
    horaCita = nuevaHoraCita;
}

Paciente Cita::getPaciente()const
{
    return paciente;
}

void Cita::setPaciente(Paciente nuevoPaciente)
{
    paciente = nuevoPaciente;
}

Dentista Cita::getDentista()const
{
    return dentista;
}

void Cita::setDentista(Dentista nuevoDentista)
{
    dentista = nuevoDentista;
}

bool Cita::operator==(const Cita otra) const
{
    return (fechaCita == otra.fechaCita &&
            horaCita == otra.horaCita &&
            paciente == otra.paciente &&
            dentista == otra.dentista);
}
