#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

using namespace std;

class Empleado {

    int id;
    int edad;
    char nombre[12];

    public:
    Empleado(int id, int edad, string nombre);
};

#endif