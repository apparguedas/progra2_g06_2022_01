#include "planilla.h"

Planilla::Planilla()
{

}

Planilla::~Planilla()
{
    for (Empleado *empleado : this->empleados)
    {
        delete empleado;
    }
}

void Planilla::AgregarEmpleado(Empleado *nuevoEmpleado)
{
    this->empleados.push_back(nuevoEmpleado);
}

void Planilla::GuardarEnStreamBinario(ostream *streamSalida)
{
    for (Empleado *empleado : this->empleados)
    {
        streamSalida->write((char *)empleado, sizeof(Empleado));
    }
}