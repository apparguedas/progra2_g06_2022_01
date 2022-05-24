#ifndef ConvertidorTipoCambio_H
#define ConvertidorTipoCambio_H

#include "calculadora.h"

class ConvertidorTipoCambio {

    float venta;
    float compra;
    Calculadora *calculadora;

    public:
    ConvertidorTipoCambio(Calculadora *calculadora, float venta, float compra);

    float Comprar(float cantidad);
    float Vender(float cantidad);

};


#endif