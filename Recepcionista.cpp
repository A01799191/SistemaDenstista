#include "Recepcionista.h"

Recepcionista::Recepcionista()
{
}

string Recepcionista::getNombreRecepcinista()
{
    return nombreRecepcionista;
}

void Recepcionista::setNombreRecepcionista(string nuevoNombre)
{
    nombreRecepcionista = nuevoNombre;
}

void Recepcionista::agendarCita(Fecha fecha, Hora hora, Paciente paciente, Dentista dentista)
{
    Cita nuevaCita;
    nuevaCita.setFecha(fecha);
    nuevaCita.setHora(hora);
    nuevaCita.setPaciente(paciente);
    nuevaCita.setDentista(dentista);

    citas.push_back(nuevaCita);
}

void Recepcionista::registarPaciente(Paciente paciente)
{
    paciente.push_back(paciente);
}

vector<Cita> Recepcionista::buscarCitasDisponibles()
{
    vector<Cita> citasDisponibles;

    for (Cita cita : citas)
    {
        if (cita.getPaciente().getNombrePaciente() == "")
        {
            citasDisponibles.push_back(cita);
        }
    }
    return citasDisponibles;
}

void Recepcionista::cancelarCita(Cita cita)
{
}

void Recepcionista::cambiarCita(Cita cita, Fecha nuevaFecha, Hora nuevaHora)
{
}
