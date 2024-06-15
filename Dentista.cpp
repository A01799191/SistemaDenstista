#include <iostream>
using namespace std;
#include "Cita.h"
#include "Nota.h"
#include "Tratamiento.h"
#include "Paciente.h"
#include "Dentista.h"

string Dentista::getNombreDentista()
{
    return nombreDentista;
}

void Dentista::setNombreDentista(string nuevoNombre)
{
    nombreDentista = nuevoNombre;
}

void Dentista::realizarTratamiento(Tratamiento tratamiento)
{
    tratamiento.setEstado("En progreso");
}

void Dentista::asignarCita(Cita cita)
{
    citas.push_back(cita);
}

vector<Nota> Dentista::consultarHistorial(Paciente paciente)
{
        vector<Nota>historial;

    for (Nota nota : notas)
    {
        if (nota.getPaciente() == paciente)
        {
            historial.push_back(nota);
        }
    }
    return historial;
}


void Dentista::actualizarHistorial(Paciente paciente, Nota nuevasNotas)
{
    notas.push_back(nuevasNotas);
}
