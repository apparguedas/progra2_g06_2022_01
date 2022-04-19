#ifndef PLANILLA_H
#define PLANILLA_H

#include "empleado.h"
#include <vector>

using namespace std;

class Planilla {

    vector<Empleado *> empleadosEnPlanilla;

    public:
    Planilla();
    ~Planilla();

    void AgregarEmpleado(Empleado *empleado);
    float ObtenerTotalPlanilla();

};

#endif