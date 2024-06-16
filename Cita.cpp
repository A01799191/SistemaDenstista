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

Fecha Cita::getFechaCita()
{
    return fechaCita;
}

void Cita::setFechaCita(Fecha nuevaFechaCita)
{
    fechaCita = nuevaFechaCita;
}

string Cita::getHoraCita()
{
    return horaCita;
}

void Cita::setHoraCita(string nuevaHoraCita)
{
    horaCita = nuevaHoraCita;
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
