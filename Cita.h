/**
 * Nombre. Rodrigo Castillo Francisco
 * Matricula: A01799191
 * Proyecto : Sistema dentista
 *
 */

#include <iostream>
using namespace std;
#include "Paciente.h"

class Cita
{
    private:
    Paciente paciente;
    string fecha;
    string hora;

    public:
    Cita();
    Cita(Paciente paciente, string fecha , string hora);

    Paciente getPaciente()
    {
        return paciente;
    }
    void setPaciente(Paciente paciente)
    {
        this->paciente=paciente;
    }
    string getFecha()
    {
        return fecha;
    }

    void setFecha(string fecha)
    {
        this->fecha = fecha;
    }

    string getHora()
    {
        return hora;
    }
    void setHora(string hora)
    {
        this->hora = hora;
    }

};


