#include "proveedorTipoCambioPrueba.h"

ProveedorTipoCambioPrueba::ProveedorTipoCambioPrueba(double tipoCambioPrueba)
{
    this->tipoCambioPrueba = tipoCambioPrueba;
}

double ProveedorTipoCambioPrueba::ObtenerTipoDeCambioAColones(string moneda) 
{
    return this->tipoCambioPrueba;
}