/**
 * Proyecto Final : Sistema Dentista
 * Nombre : Rodrigo Castillo Francisco
 * Matricula : A01799191
 * Profesor : Roberto Martinez Roman
 * Fecha de creación : Jueves 13 de Junio del 2024
 */

#ifndef CITA_H
#define CITA_H

#include <iostream> 
using namespace std;
#include "Paciente.h"
#include "Fecha.h"

class Dentista
{
    private:
    Paciente paciente;

    public:
    Paciente nombrePaciente();
    void setNombrePaciente();
    Fecha getFecha();
    void setFecha(Fecha nuevaFecha);



};
#endif

