#include <iostream>
using namespace std;
#include "Cita.h"
#include "Paciente.h"

int main(int argc, char const *argv[])
{
    Paciente paciente;
    Cita cita;
    int opcion;

    do
    {
        cout << " 1. Crear paciente" << endl;
        cout << " 2. Crear cita " << endl;
        cout << " 3. Cambiar nombre del paciente" << endl;
        cout << " 4. Cambiar fecha y hora de la cita " << endl;
        cout << " 5. Salir " << endl;
        cout << "Ingrese la opcion ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
        {
            string nombre, tratamiento;
            cout << " Ingrese el nombre del paciente: ";
            cin >> nombre;
            cout << "Ingrese el tratamiento del paciente ";
            cin >> tratamiento;
            paciente = Paciente(nombre, tratamiento);
            break;
        }
        case 2:
        {
            string fecha, hora;
            cout << "Ingrese la fecha de la cita : ";
            cin >> fecha;
            cout << "Ingresa la hora de la cita : ";
            cin >> hora;
            cita = Cita(paciente, fecha, hora);
            break;
        }

        case 3:
        {
            string nombre;
            cout << " Imgrese el nuevo nombre del paciente : ";
            cin >> nombre;
            paciente.setNombre(nombre);
            break;
        }

        case 4:
        {
            string fecha, hora;
            cout << "Ingrese la nueva fecha de la cita ";
            cin >> fecha;
            cout << "Ingrese la nueva hora de la cita ";
            cin >> hora;
            cita.setFecha(fecha);
            cita.setHora(hora);
            break;
        }
        case 5:
            cout << "Que tenga un excelente día ";
            break;

        default:
            cout << "Opcion no valida. Ingrese un numero correcto. ";

            break;
        }

    } while (opcion != 5);

    return 0;
}
