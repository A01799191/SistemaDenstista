#ifndef RECEPCIONISTA_H
#define RECEPCIONISTA_H

#include <iostream>
#include <vector>
#include "Cita.h"
#include "Paciente.h"
#include "Dentista.h"


class Recepcionista
{
    private:
    string nombreRecepcionista;
    vector<Cita>citas;


    public:
    Recepcionista();
    Recepcionista(string nombre);
    void setNombreRecepcionista(string nuevoNombre);
    void agendarCita(Fecha fechaCita , string horaCita , Paciente paciente, Dentista dentista);
    void cancelarCita(Cita cita);
    void cambiarCita(Cita cita, Fecha nuevaFecha, string nuevaHora);
    void mostrarCitas();


};
#endif