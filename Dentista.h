#ifndef DENTISTA_H
#define DENTISTA_H

#include <iostream>
#include <string>
#include <vector>
#include "Cita.h"
#include "Nota.h"

using namespace std;

class Dentista
{
private:
    string nombre;
    vector<Cita> citas;
    vector<Nota> notas;

public:
    Dentista();
    Dentista(string nombre);
    string getNombre();
    void setNombre(string nuevoNombre);
    void realizarTratamiento(Paciente paciente , Tratamiento tratamiento);
    void registrarNota(Paciente paciente, Nota nota);
    void agregarCita(Cita nuevaCita);
};
#endif