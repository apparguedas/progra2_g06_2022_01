#include "empleado.h"

Empleado::Empleado(int id, int edad, string nombre)
{
    this->id = id;
    this->edad = edad;
    strcpy(this->nombre, nombre.c_str());
}