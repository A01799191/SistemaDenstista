#ifndef FECHA_H
#define FECHA_H
#include <string>
#include <sstream>
class Fecha
{
private:
    int dia; 
    int mes;
    int anio;
public:
    Fecha();
    Fecha(int dia, int mes , int anio);
    int getDia();
    int getMes();
    int getAnio();
    string toString() const;
    bool operator== (const Fecha otra)const;
};
#endif