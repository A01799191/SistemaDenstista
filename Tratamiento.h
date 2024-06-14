
#include <iostream>
using namespace std;
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
    string getDescripcion();
    void setDescripcion(string nuevaDescripcion);
    Fecha getFechaIninico();
    void setFechaInicio(Fecha nuevaFechaInicio);
    Fecha getFechaFin();
    void setFechaFin(Fecha nuevaFechaFin);
    string getEstado();
    void setEstado(string nuevoEstado);

    
};


