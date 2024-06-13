#include "Paciente.h"

Paciente::Paciente()
{
    nombre = "Pepe";

}

void Paciente::setNombrePaciente(string nuevoNombre)
{
    this-> nombre = nuevoNombre;
}

void Paciente:: imprimirNombre()
{
    cout<<"El nombre del paciente es "<< nombre<< endl;
}