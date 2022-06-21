#include "transaccion.h"

Transaccion::Transaccion(string moneda, double monto)
{
    this->moneda = moneda;
    this->monto = monto;
}

string Transaccion::ObtenerMoneda()
{
    return this->moneda;
}

double Transaccion::ObtenerMonto()
{
    return this->monto;
}