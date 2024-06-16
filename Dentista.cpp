#include <iostream>
using namespace std;
#include "Dentista.h"


Dentista::Dentista()
{
}
Dentista::Dentista(string nombre)
{
    this->nombre = nombre;
}

string Dentista::getNombre()
{
    return nombre;
}

Dentista::setNombre(string nuevoNombre)
{
    nombre = nuevoNombre;
}

void Dentista::realizarTratamiento(Tratamiento tratamiento)
{
}

void Dentista::registrarNota(Paciente paciente, Nota nota)
{
}
