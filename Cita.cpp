#include <iostream>
using namespace std;
#include "Cita.h"

Cita::Cita()
{
    paciente =Paciente();
    fecha = "";
    hora ="";

}

Cita::Cita(Paciente paciente, string fecha, string hora)
{
    this->paciente=paciente;
    this->fecha= fecha;
    this->hora=hora;

}
