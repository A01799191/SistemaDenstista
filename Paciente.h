/**
 * Proyecto Final : Sistema Dentista
 * Nombre : Rodrigo Castillo Francisco
 * Matricula : A01799191
 * Profesor : Roberto Martinez Roman
 * Fecha de creación : Jueves 13 de Junio del 2024
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;
// #include 

class Paciente
{
private:
    string nombre;
    // vector<Cita>citas;
    // Tratamiento tratamiento

public:
    Paciente();
    string getNombrePaaciente();
    void setNombrePaciente(string nuevoNombre);
    void imprimirNombre();
};