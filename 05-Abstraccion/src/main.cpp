#include "empleado.h"
#include "empleadoPorHoras.h"
#include "empleadoAsalariado.h"
#include <vector>
#include <iostream>

using namespace std;

int main() {

    vector<Empleado *> empleados;

    EmpleadoPorHoras* empleado1 = new EmpleadoPorHoras(5.33, "Juan Pérez");
    empleados.push_back(empleado1);

    EmpleadoAsalariado* empleado2 = new EmpleadoAsalariado(600500.25, "Pedro Rodríguez");
    empleados.push_back(empleado2);

    for (Empleado* empleado : empleados)
    {
        std::cout << empleado->CalculoSalario() << std::endl;
    }

    delete empleado1;
    delete empleado2;

}