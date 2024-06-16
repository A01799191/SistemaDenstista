#ifndef NOTA_H
#define NOTA_H
#include <string>
#include "Paciente.h"
#include "Fecha.h"

class Nota
{
    private:
    string contenido;
    Fecha fecha;

    public:
    Nota();
    Nota(string contenido, Fecha fecha);
    string getContenido();
    void setContenido(string nuevContenido);
    Fecha getFecha();


};
#endif
