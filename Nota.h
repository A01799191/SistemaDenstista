#ifndef NOTA_H
#define NOTA_H
#include <string>
#include "Fecha.h"
#include"Paciente.h"

class Nota
{
    private:
    string contenido;
    Fecha fecha;
    Paciente paciente;

    public:
    Nota();
    string getContenido();
    void setContenido(string nuevContenido);
    Fecha getFecha();
    void setFecha(Fecha nuevaFecha);
    Paciente getPaciente();
    void setPaciente(Paciente nuevoPaciente);

};
#endif
