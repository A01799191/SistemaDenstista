
#include <iostream>
#include "Paciente.h"
using namespace std;

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
    cout<<"El nombre del paciente es "<< nombre << endl;
}