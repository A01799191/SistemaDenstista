#ifndef RECEPCIONISTA_H
#define RECEPCIONISTA_H

#include <iostream>
#include<string>
#include <vector>
#include "Cita.h"

using namespace std;

class Recepcionista
{
    private:
    string nombreRecepcionista;
    vector<Cita>citas;


    public:
    Recepcionista();
    string getNombreRecepcinista();
    void setNombreRecepcionista(string nuevoNombre);
    void agendarCita(Fecha fecha , Hora hora, Paciente paciente, Dentista dentista);
    void registarPaciente(Paciente paciente);
    vector<Cita>buscarCitasDisponibles();
    void cancelarCita(Cita cita);
    void cambiarCita(Cita cita, Fecha nuevaFecha, Hora nuevaHora);

};
#endif