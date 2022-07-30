#include "planilla.h"
#include <iostream>

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

void Planilla::CargarEmpleadoPorPosicionDesdeStreamBinario(istream *streamEntrada, int posicionEmpleado)
{
    streamEntrada->seekg(sizeof(Empleado) * posicionEmpleado);

    Empleado *empleado = new Empleado();
    streamEntrada->read((char *)empleado, sizeof(Empleado));

    this->AgregarEmpleado(empleado);
}

void Planilla::CargarDesdeStreamBinario(istream *streamEntrada)
{
    // Calcule cantidad de registros
    streamEntrada->seekg( 0, std::ios::end );
    int cantidadBytesEnArchivo = streamEntrada->tellg();
    int cantidadEmpleados = cantidadBytesEnArchivo / sizeof(Empleado);

    // Leer cada empleado
    streamEntrada->seekg( 0, std::ios::beg ); // Empezar desde el principio del archivo
    for (int indice = 0; indice < cantidadEmpleados; indice++)
    {
        Empleado *empleado = new Empleado();
        streamEntrada->read((char *)empleado, sizeof(Empleado)); // variable para guardar y cuántos bytes leo

        this->AgregarEmpleado(empleado);
    }
    
}

ostream& operator << (ostream &o, const Planilla *planilla)
{
    o << "Planilla: " << std::endl;

    for (Empleado *empleado : planilla->empleados)
    {
        o << empleado << endl;
    }
    
    return o;
}