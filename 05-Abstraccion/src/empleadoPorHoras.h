#ifndef EMPLEADOPORHORAS_H
#define EMPLEADOPORHORAS_H

#include "empleado.h"

using namespace std;

class EmpleadoPorHoras : public Empleado {

    float costoPorHoras;

    public:
    EmpleadoPorHoras(float costoPorHoras, string nombre);

    virtual float CalculoSalario(); 

};

#endif