
#include <iostream>
using namespace std;
#ifndef TRATAMIENTO_H
#define TRATAMIENTO_H
#include <string>
#include "Fecha.h"

class Tratamiento
{
private:
    string descripcion;
    Fecha fechaInicio;
    Fecha fechaFin;
    string estado;
public:
    Tratamiento();
    Tratamiento(string descripcion, Fecha fechaInicio , Fecha fechaFin, string estado);
    string getDescripcion();
    void setDescripcion(string nuevaDescripcion);
    Fecha getFechaInicio();
    void setFechaInicio(Fecha nuevaFechaInicio);
    Fecha getFechaFin();
    void setFechaFin(Fecha nuevaFechaFin);
    string getEstado();
    void setEstado(string nuevoEstado);
    string getPaciente();
    bool operator==(const Tratamiento otro) const;



    
};
#endif


