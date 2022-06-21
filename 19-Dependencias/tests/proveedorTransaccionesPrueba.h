#ifndef ProveedorTransaccionesPrueba_H
#define ProveedorTransaccionesPrueba_H

#include "./../src/proveedorTransacciones.h"
#include <vector>

using namespace std;

class ProveedorTransaccionesPrueba : public ProveedorTransacciones {

    vector<Transaccion *> transacciones;

    public:
    ProveedorTransaccionesPrueba();

    virtual vector<Transaccion *> ObtenerTransaccionesDelUsuario(string usuario);

    void AgregarTransaccion(Transaccion *transaccion);

};

#endif