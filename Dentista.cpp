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

void Dentista::setNombre(string nuevoNombre)
{
    nombre = nuevoNombre;
}

void Dentista::realizarTratamiento(Paciente paciente, Tratamiento tratamiento)
{
cout<<" Se esta realizando el tratamiento : " <<tratamiento.getDescripcion()<<" para el paciente "<< paciente.getNombre()<<endl;
}

void Dentista::registrarNota(Paciente paciente, Nota nota)
{
    notas.push_back(nota);

}

void Dentista::agregarCita(Cita nuevaCita)
{
    citas.push_back(nuevaCita);
}
