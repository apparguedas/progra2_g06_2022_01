#include "planilla.h"

Planilla::Planilla() {

}

Planilla::~Planilla() {
    for (Empleado* empleado : this->empleadosEnPlanilla)
    {
        delete empleado;
    }

    this->empleadosEnPlanilla.clear();
}

void Planilla::AgregarEmpleado(Empleado *empleado) {
    this->empleadosEnPlanilla.push_back(empleado);
}

float Planilla::ObtenerTotalPlanilla() {
    float resultado = 0;

    for (Empleado* empleado : this->empleadosEnPlanilla)
    {
        resultado += empleado->CalculoPago();
    }

    return resultado;
}