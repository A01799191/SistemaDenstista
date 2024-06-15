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
    string nombreDentista;
    vector<Cita> citas;
    vector<Nota> notas;

public:
    string getNombreDentista();
    void setNombreDentista(string nuevoNombre);
    void realizarTratamiento(Tratamiento tratamiento);
    void asignarCita(Cita cita);
    vector<Nota> consultarHistorial(Paciente paciente);
    void actualizarHistorial(Paciente paciente, Nota nuevasNotas);
};
#endif