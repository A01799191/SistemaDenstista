#include "Recepcionista.h"

Recepcionista::Recepcionista()
{
    nombreRecepcionista = "Recepcionista de turno";
}

Recepcionista::Recepcionista(string nombre)
{
    nombreRecepcionista = nombre;
}

void Recepcionista::setNombreRecepcionista(string nuevoNombre)
{
    nombreRecepcionista = nuevoNombre;
};

void Recepcionista::agendarCita(Fecha fechaCita, string horaCita, Paciente paciente, Dentista dentista)
{
    Cita nuevaCita(fechaCita,horaCita, paciente,dentista);

    citas.push_back(nuevaCita);
    
    paciente.agregarCita(nuevaCita);

    dentista.agregarCita(nuevaCita);

}

void Recepcionista::cancelarCita(Cita cita)
{
    for (auto it = citas.begin();it != citas.end(); ++it)
    {
        if(*it == cita)
        {
            citas.erase(it);
            break;
        }
    }
}

void Recepcionista::cambiarCita(Cita cita, Fecha nuevaFecha, string nuevaHora)
{
    for (auto c: citas)
    {
        if(c==cita)
        {
            c.setFechaCita(nuevaFecha);
            c.setHoraCita(nuevaHora);
            cout<< "La cita ha sido cambiada correctamente. "<< endl;
            return;
        }
    }
    cout<<"La cita no existe. No se pudo modificar. "<<endl;
}

void Recepcionista::mostrarCitas()
{ for (const auto& c :citas)
{
    Fecha fecha = c.getFechaCita();
    string hora = c.getHoraCita();
    Paciente paciente = c.getPaciente();
    Dentista dentista = c.getDentista();

    cout<<"Fecha : "<< fecha.toString()<<", Hora: "<<hora<<endl;
    cout<<"Paciente : <<paciente.getNombre()"<<", Denstita : "<<dentista.getNombre()<<endl;

} 
}
