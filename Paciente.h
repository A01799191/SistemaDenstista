/**
 * Proyecto Final : Sistema Dentista
 * Nombre : Rodrigo Castillo Francisco
 * Matricula : A01799191
 * Profesor : Roberto Martinez Roman
 * Fecha de creación : Jueves 13 de Junio del 2024
 */

#ifndef PACIENTE_H
#define PACIENTE_H


#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "Cita.h"
#include "Tratamiento.h"


class Paciente
{
private:
    string nombre;
    vector<Cita>citas;
    Tratamiento tratamiento;

public:
    Paciente();
    string getNombrePaaciente();
    void setNombrePaciente(string nuevoNombre);
    void anadirCita(Cita nuevaCita);
    void removerCita(Cita cita);
    Tratamiento getTratamiento();
    void setTratamiento(Tratamiento nuevoTratamiento);

};

#endif