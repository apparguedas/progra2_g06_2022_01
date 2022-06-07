#ifndef PLANILLA_H
#define PLANILLA_H

#include <vector>
#include "empleado.h"
#include <iostream>

using namespace std;

class Planilla {

    vector<Empleado *> empleados;

    public:
    Planilla();
    ~Planilla();

    void AgregarEmpleado(Empleado *nuevoEmpleado);

    void GuardarEnStreamBinario(ostream *streamSalida);
    void CargarDesdeStreamBinario(istream *streamEntrada);
    void CargarEmpleadoPorPosicionDesdeStreamBinario(istream *streamEntrada, int posicionEmpleado);

    friend ostream& operator << (ostream &o, const Planilla *planilla);
};

#endif