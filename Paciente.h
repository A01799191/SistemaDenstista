#include <iostream>
using namespace std;

class Paciente
{
    private:
    string nombre;
    string tratamiento;

    public:
    Paciente();
    Paciente(string nombre, string tratamiento);

    string getNombre()
    {
        return nombre;
    }

    void setNombre(string nombre)
    {
        this->nombre=nombre;

    }

    string getTratamiiento()
    {
        return tratamiento;

    }
    void setTratamiento(string tratamiento)
    {
        this-> tratamiento = tratamiento;
    }

};