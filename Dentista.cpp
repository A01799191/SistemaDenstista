#include <iostream>
using namespace std;
#include "Cita.h"
#include "Nota.h"
#include "Tratamiento.h"
#include "Paciente.h"
#include "Dentista.h"

string Dentista::getNombreDentista()
{
    return nombreDentista;
}

void Dentista::setNombreDentista(string nuevoNombre)
{
    nombreDentista= nuevoNombre;
}

void Dentista::realizarTratamiento(Tratamiento tratamiento)
{


}

void Dentista::asignarCita(Cita cita)
{
    citas.push_back(cita);
}

vector<Nota> Dentista::consultarHistorial(Paciente paciente)
{

}

void Dentista::actualizarHistorial(Paciente paciente, Nota nuevasNotas)
{
    notas.push_back(nuevasNotas);
}
