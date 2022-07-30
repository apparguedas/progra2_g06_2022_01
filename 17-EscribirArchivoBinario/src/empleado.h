#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

using namespace std;

class Empleado {

    int id; // 4
    int edad; // 4
    char nombre[12]; // 12
    

    public:
    Empleado(int id, int edad, string nombre);
    Empleado();

    friend ostream& operator << (ostream &o, const Empleado *empleado);
};

#endif