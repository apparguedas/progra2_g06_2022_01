#include "empleado.h"
#include "empleadoPorHoras.h"
#include "empleadoAsalariado.h"
#include <iostream>
#include "planilla.h"

using namespace std;

int main() {

    Planilla *planilla = new Planilla();    

    EmpleadoPorHoras* empleado1 = new EmpleadoPorHoras(5.33, 160, "Juan Pérez");
    planilla->AgregarEmpleado(empleado1);

    EmpleadoAsalariado* empleado2 = new EmpleadoAsalariado(600500.25, "Pedro Rodríguez");
    planilla->AgregarEmpleado(empleado2);

    float total = planilla->ObtenerTotalPlanilla();

    cout << "Total de planilla: " << total << endl;

    delete planilla;

}