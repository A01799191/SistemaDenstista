#include "Recepcionista.h"

Recepcionista::Recepcionista()
{
    nombreRecepcionista = "Recepcionista de turno";
}

Recepcionista::Recepcionista(string nombre)
{
    nombreRecepcionista = nombre;
}

void Recepcionista::setNombreRecepcionista(string nuevoNombre)
{
    nombreRecepcionista = nuevoNombre;
};

void Recepcionista::agendarCita(Fecha fechaCita, string horaCita, Paciente paciente, Dentista dentista)
{
    Cita nuevaCita(fechaCita,horaCita, paciente,dentista);

    citas.push_back(nuevaCita);
    
    paciente.agregarCita(nuevaCita);

    dentista.agregarCita(nuevaCita);

}

void Recepcionista::cancelarCita(Cita cita)
{
    for (auto it = citas.begin();it != citas.end(); ++it)
    {
        if(*it == cita)
        {
            citas.erase(it);
            break;
        }
    }
}

void Recepcionista::cambiarCita(Cita cita, Fecha nuevaFecha, string nuevaHora)
{
}

void Recepcionista::mostrarCitas()
{
}
