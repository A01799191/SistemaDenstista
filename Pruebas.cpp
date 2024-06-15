
#include <iostream>
using namespace std;
#include "Paciente.h"
#include "Recepcionista.h"
#include "Dentista.h"
#include "Tratamiento.h"
#include "Cita.h"
#include "Hora.h"
#include "Fecha.h"


int main(int argc, char const *argv[])
{   

Paciente paciente1;
paciente1.setNombrePaciente("Marco Velazquez");
Paciente paciente2;
paciente2.setNombrePaciente("Ximena");

Tratamiento tratamiento1;
tratamiento1.setDescripcion("Limpieza Dental");
tratamiento1.setFechaInicio(Fecha(1,6,2024));




}


