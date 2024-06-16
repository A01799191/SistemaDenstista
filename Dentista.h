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
    Dentista();
    Dentista(string nombre);
    string getNombre();
    setNombre(string nuevoNombre);
    void realizarTratamiento(Tratamiento tratamiento);
    void registrarNota(Paciente paciente, Nota nota);
};
#endif