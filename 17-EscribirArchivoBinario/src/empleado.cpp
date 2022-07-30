#include "empleado.h"
#include <iostream>

Empleado::Empleado(int id, int edad, string nombre)
{
    this->id = id;
    this->edad = edad;
    strcpy(this->nombre, nombre.c_str());
}

Empleado::Empleado()
{
    this->id = 0;
    this->edad = 0;
    strcpy(this->nombre, "");
}


ostream& operator << (ostream &o, const Empleado *empleado)
{
    o << "[" << empleado->id << "] - " << empleado->nombre << " " << empleado->edad;  
    return o;
}