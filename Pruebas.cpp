
#include <iostream>
using namespace std;
#include <Paciente.h>

int main(int argc, char const *argv[])
{   
    Paciente paciente;
    paciente.setNombrePaciente("Juan");
    paciente.imprimirNombre();

    return 0;
}


