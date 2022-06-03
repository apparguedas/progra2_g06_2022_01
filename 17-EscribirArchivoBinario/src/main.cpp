#include "empleado.h"
#include "planilla.h"

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {

    Empleado *empleado1 = new Empleado(1, 20, "Maria");
    Empleado *empleado2 = new Empleado(2, 25, "Juan");
    Empleado *empleado3 = new Empleado(3, 22, "Pedro");
    Empleado *empleado4 = new Empleado(4, 2022, "Cristo");

    Planilla *planilla = new Planilla();
    planilla->AgregarEmpleado(empleado1);
    planilla->AgregarEmpleado(empleado2);
    planilla->AgregarEmpleado(empleado3);
    planilla->AgregarEmpleado(empleado4);

    ofstream archivoSalida;
    archivoSalida.open("planilla.dat", ios::out|ios::binary);

    if (!archivoSalida.is_open())
    {
        cerr << "No se pudo abrir archivo libros.dat para escribir los datos";
        return -1;
    }

    planilla->GuardarEnStreamBinario(&archivoSalida);

    archivoSalida.close();

    delete planilla;
}