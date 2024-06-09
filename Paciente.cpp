/**
 * Nombre. Rodrigo Castillo Francisco
 * Matricula: A01799191
 * Proyecto : Sistema dentista
 *
 */

#include <iostream>
using namespace std;
#include "Paciente.h"

Paciente:: Paciente()
{
    nombre = "Rodrigo";
    tratamiento = "Extraccion de muela de juicio";

}
Paciente:: Paciente(string nombre , string tratamiento)
{
    this->nombre = nombre;
    this->tratamiento = tratamiento;
}

