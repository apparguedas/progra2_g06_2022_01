#include "empleadoAsalariado.h"

using namespace std;

EmpleadoAsalariado::EmpleadoAsalariado(float salarioMensual, string nombre)
{
    this->salarioMensual = salarioMensual;
    this->nombre = nombre;
}

float EmpleadoAsalariado::CalculoSalario()
{
    return 0;
}