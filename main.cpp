#include <iostream>
using namespace std;
#include <vector>
#include "Fecha.h"
#include "Paciente.h"
#include "Cita.h"
#include "Dentista.h"
#include "Recepcionista.h"
#include "Tratamiento.h"

int main(int argc, char const *argv[])
{
    Paciente paciente1("Rodrigo Castillo", "5533111111");
    Paciente paciente2("Pablo Castillo", "5534267723");
    Paciente paciente3("Rodolfo Salazar", "5514678356");
    Paciente paciente4("Pedro Francisco", "5598243615");
    Paciente paciente5("Jorge Estrada", "55511223311");

    Fecha fecha1(2024,5,20);
    Fecha fecha2(2024,5,21);
    Fecha fecha3(2024,5,22);
    Fecha fecha4(2024,5,23);
    Fecha fecha5(2024,5,24);

    Tratamiento tratamiento1("Limpieza de muelas", Fecha(2024,5,20),Fecha(2024,5,21), "En Curso", "Rodrigo Castillo");
    Tratamiento tratamiento2("Extracción de diente ", Fecha(2024,5,22),Fecha(2024,5,23), "Programado", "Pablo Castillo");
    Tratamiento tratamiento3("Revision Genral", Fecha(2024,5,24),Fecha(2024,5,25), "Finalizado", "Rodolfo Salazar");

    Cita cita1(fecha1,"9:00", paciente1,Dentista("Dr. Pedro"));
    Cita cita2(fecha1,"10:00", paciente2,Dentista("Dra. Vanessa"));
    Cita cita3(fecha1,"11:00", paciente3,Dentista("Dr. Roberto"));
    Cita cita4(fecha1,"12:00", paciente4,Dentista("Dr. Arturo"));

    Recepcionista recepcionista("Laura");

    int opcion;
    do
    {
        //Mostrar menú
        cout << "1. Agendar cita\n";
        cout << "2. Cancelar cita\n";
        cout << "3. Realizar tratamiento\n";
        cout << "4. Mostrar citas agendadas\n";
        cout << "5. Mostrar tratamientos realizados\n";
        cout << "6. Salir\n";
        cout << "Ingrese su opción: ";
        cin >> opcion;

        switch (opcion)
        {
            case 1:
            {
                int pacienteNum;
                cout<<"Seleccione un paciente(1-5)";
                cin>>pacienteNum;

                if (pacienteNum<1||pacienteNum>5)
                {
                    cout<<"Seleccion inválida.\n";
                    break;
                }
                Paciente paciente=(paciente ==1)
            }
        }

    }









}
