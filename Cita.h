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
#include "Fecha.h"
class Paciente;
class Dentista;

class Cita
{
    private:
    Fecha fechaCita;
    string horaCita;
    Paciente* paciente;
    Dentista* dentista;


    public:
    Cita();
    Cita(Fecha fechaCita,string horaCita, Paciente* paciente, Dentista* dentista);
    Fecha getFechaCita() const;
    void setFechaCita(Fecha nuevaFechaCita);
    string getHoraCita() const;
    void setHoraCita(string nuevaHoraCita);
    Paciente* getPaciente() const;
    void setPaciente(Paciente* nuevoPaciente);
    Dentista* getDentista() const;
    void setDentista(Dentista* nuevoDentista);
    bool operator==(const Cita otra) const;


};
#endif

