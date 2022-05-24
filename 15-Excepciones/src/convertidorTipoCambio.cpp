#include "convertidorTipoCambio.h"

ConvertidorTipoCambio::ConvertidorTipoCambio(Calculadora* calculadora, float venta, float compra)
{
    this->compra = compra;
    this->venta = venta;
    this->calculadora = calculadora;
}

float ConvertidorTipoCambio::Comprar(float cantidad)
{
    return this->calculadora->Dividir(cantidad, this->venta);
}


float ConvertidorTipoCambio::Vender(float cantidad)
{
    return this->calculadora->Multiplicar(cantidad, this->compra);
}