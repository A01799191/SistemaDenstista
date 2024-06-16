#include <iostream>
#include <vector>
#include "Fecha.h"
#include "Paciente.h"
#include "Cita.h"
#include "Dentista.h"
#include "Recepcionista.h"
#include "Tratamiento.h"

using namespace std;

int main() {
    // Crear pacientes inventados
    Paciente paciente1("Rodrigo Castillo", "5533111111");
    Paciente paciente2("Pablo Castillo", "5534267723");
    Paciente paciente3("Rodolfo Salazar", "5514678356");
    Paciente paciente4("Pedro Francisco", "5598243615");
    Paciente paciente5("Jorge Estrada", "55511223311");

    // Crear tratamientos inventados
    Tratamiento tratamiento1("Limpieza de muelas", Fecha(2024, 5, 20), Fecha(2024, 5, 21), "En Curso", paciente1.getNombre());
    Tratamiento tratamiento2("Extracción de diente", Fecha(2024, 5, 22), Fecha(2024, 5, 23), "Programado", paciente2.getNombre());
    Tratamiento tratamiento3("Revisión General", Fecha(2024, 5, 24), Fecha(2024, 5, 25), "Finalizado", paciente3.getNombre());

    // Crear citas para los pacientes con dentistas
    Cita cita1(Fecha(2024, 5, 20), "9:00", &paciente1, new Dentista("Dr. Pedro"));
    Cita cita2(Fecha(2024, 5, 21), "10:00", &paciente2, new Dentista("Dra. Vanessa"));
    Cita cita3(Fecha(2024, 5, 22), "11:00", &paciente3, new Dentista("Dr. Roberto"));
    Cita cita4(Fecha(2024, 5, 23), "12:00", &paciente4, new Dentista("Dr. Arturo"));
    Cita cita5(Fecha(2024, 5, 24), "14:00", &paciente5, new Dentista("Dr. Miguel"));

    // Crear una recepcionista para manejar las citas
    Recepcionista recepcionista("Laura");

    int opcion;
    do {
        // Mostrar menú
        cout << "\n--- Menú ---\n";
        cout << "1. Agendar cita\n";
        cout << "2. Cancelar cita\n";
        cout << "3. Realizar tratamiento\n";
        cout << "4. Mostrar citas agendadas\n";
        cout << "5. Mostrar tratamientos realizados\n";
        cout << "6. Salir\n";
        cout << "Ingrese su opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                // Agendar cita
                int pacienteNum;
                cout << "Seleccione paciente (1-5): ";
                cin >> pacienteNum;

                // Validar la selección de paciente
                if (pacienteNum >= 1 && pacienteNum <= 5) {
                    Paciente* paciente;
                    switch (pacienteNum) {
                        case 1:
                            paciente = &paciente1;
                            break;
                        case 2:
                            paciente = &paciente2;
                            break;
                        case 3:
                            paciente = &paciente3;
                            break;
                        case 4:
                            paciente = &paciente4;
                            break;
                        case 5:
                            paciente = &paciente5;
                            break;
                        default:
                            break;
                    }

                    string hora;
                    cout << "Ingrese hora de la cita (HH:MM): ";
                    cin >> hora;

                    recepcionista.agendarCita(Fecha(2024, 6, 30), hora, paciente, cita1.getDentista());
                } else {
                    cout << "Selección inválida.\n";
                }
                break;
            }
            case 2:
                // Cancelar cita (pendiente de implementación)
                cout << "Función de cancelar cita no implementada.\n";
                break;
            case 3:
                // Realizar tratamiento (pendiente de implementación)
                cout << "Función de realizar tratamiento no implementada.\n";
                break;
            case 4:
                // Mostrar citas agendadas
                recepcionista.mostrarCitas();
                break;
            case 5:
                // Mostrar tratamientos realizados
                cout << "Estado del tratamiento de " << paciente1.getNombre() << ": " << tratamiento1.getEstado() << endl;
                cout << "Estado del tratamiento de " << paciente2.getNombre() << ": " << tratamiento2.getEstado() << endl;
                cout << "Estado del tratamiento de " << paciente3.getNombre() << ": " << tratamiento3.getEstado() << endl;
                break;
            case 6:
                // Salir del programa
                cout << "Saliendo del programa...\n";
                break;
            default:
                // Opción inválida
                cout << "Opción inválida. Intente de nuevo.\n";
                break;
        }
    } while (opcion != 6);

    // Liberar memoria de los objetos Dentista creados con 'new'
    delete cita1.getDentista();
    delete cita2.getDentista();
    delete cita3.getDentista();
    delete cita4.getDentista();
    delete cita5.getDentista();

    return 0;
}


