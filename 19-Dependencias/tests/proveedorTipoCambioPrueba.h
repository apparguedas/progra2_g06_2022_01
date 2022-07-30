#ifndef ProveedorTipoCambioPrueba_H
#define ProveedorTipoCambioPrueba_H

#include "./../src/proveedorTipoCambio.h"

class ProveedorTipoCambioPrueba : public ProveedorTipoCambio {

    double tipoCambioPrueba;

    public:
    ProveedorTipoCambioPrueba(double tipoCambioPrueba);

    virtual double ObtenerTipoDeCambioAColones(string moneda);
};

#endif