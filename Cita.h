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
#include "Dentista.h"

class Cita
{
    private:
    Fecha fechaCita;
    string horaCita;
    Paciente paciente;
    Dentista dentista;


    public:
    Cita();
    Cita(Fecha fechaCita,string horaCita, Paciente paciente, Dentista dentista);
    Fecha getFechaCita();
    void setFechaCita(Fecha nuevaFechaCita);
    string getHoraCita();
    void setHoraCita(string nuevaHoraCita);
    Paciente getPaciente();
    void setPaciente(Paciente nuevoPaciente);
    Dentista getDentista();
    void setDentista(Dentista nuevoDentista);


};
#endif

