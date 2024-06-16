#include "Paciente.h"

Paciente::Paciente()
{
}

Paciente::Paciente(string nombre, string telefono)
{
    this->nombre = nombre;
    this->telefono = telefono;
}

string Paciente::getNombre()
{
    return nombre;
}

void Paciente::setNombre(string nuevoNombre)
{
    nombre = nuevoNombre;
}

string Paciente::getTelefono()
{
    return telefono;
}

void Paciente::setTelefono(string nuevoTelefono)
{
    telefono = nuevoTelefono;
}

void Paciente::agregarCita(Cita nuevaCita)
{
    citas.push_back(nuevaCita);
}

void Paciente::cancelarCita(Cita cita)
{

}

Tratamiento Paciente::getTratamiento()
{
    return tratamiento;
}

void Paciente::setTratamiento(Tratamiento nuevoTratamiento)
{
    tratamiento = nuevoTratamiento;
}

bool Paciente::operator==(const Paciente otro) const
{
    return (nombre == otro.nombre && telefono == otro.telefono && citas == otro.citas && tratamiento == otro.tratamiento);
}
