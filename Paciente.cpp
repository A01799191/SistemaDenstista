
#include <iostream>
#include "Paciente.h"
#include "Tratamiento.h"
#include "Cita.h"
using namespace std;
#include <vector>


Paciente::Paciente()
{
    
}

string Paciente::getNombrePaciente()
{
    return nombre;
    
}

void Paciente::setNombrePaciente(string nuevoNombre)
{
    nombre = nuevoNombre;
}

void Paciente::anadirCita(Cita nuevaCita)
{
    citas.push_back(nuevaCita);
}

void Paciente::removerCita(Cita cita)
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
