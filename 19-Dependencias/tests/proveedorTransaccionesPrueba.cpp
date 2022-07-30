#include "proveedorTransaccionesPrueba.h"

ProveedorTransaccionesPrueba::ProveedorTransaccionesPrueba()
{
    
}

vector<Transaccion *> ProveedorTransaccionesPrueba::ObtenerTransaccionesDelUsuario(string usuario)
{
    return this->transacciones;
}

void ProveedorTransaccionesPrueba::AgregarTransaccion(Transaccion *transaccion)
{
    this->transacciones.push_back(transaccion);
}