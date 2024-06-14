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
#include "Hora.h"
#include "Dentista.h"

class Cita
{
    private:
    Fecha fecha;
    Hora hora;
    Paciente paciente;


    public:
    Fecha getFecha();
    void setFecha(Fecha nuevaFecha);
    Hora getHora();
    void setHora(Hora nuevaHora);
    Paciente getPaciente();
    void setPaciente(Paciente nuevoPaciente);
    Dentista getDentista();
    void setDenstista(Dentista nuevoDentista);


};
#endif

