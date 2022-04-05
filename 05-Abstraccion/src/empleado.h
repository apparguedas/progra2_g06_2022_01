#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

using namespace std;

class Empleado {

    // Privado

    protected:
    string nombre;
    
    public:
    virtual float CalculoSalario() = 0;
};


#endif