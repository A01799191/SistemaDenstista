/**
 * Proyecto Final : Sistema Dentista
 * Nombre : Rodrigo Castillo Francisco
 * Matricula : A01799191
 * Profesor : Roberto Martinez Roman
 * Fecha de creación : Jueves 13 de Junio del 2024
 */

#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>
#include <vector>
#include "Cita.h"
#include "Tratamiento.h"


class Paciente
{
private:
    string nombre;
    string telefono;
    vector<Cita> citas;
    Tratamiento tratamiento;

public:
    Paciente();
    Paciente(string nombre , string telefono);
    string getNombre();
    void setNombre(string nuevoNombre);
    string getTelefono();
    void setTelefono(string nuevoTelefono);
    void agregarCita(Cita nuevaCita);
    void cancelarCita(Cita cita);
    Tratamiento getTratamiento();
    void setTratamiento(Tratamiento nuevoTratamiento);
    bool operator==(const Paciente otro) const;



};

#endif