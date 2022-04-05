#include "calculadora.h"

Calculadora::Calculadora(int ultimoResultadoInicial) {
    this->ultimoResultado = ultimoResultadoInicial;
}

int Calculadora::Sumar(int numero1, int numero2) {
    this->ultimoResultado = numero1 + numero2;
    return this->ultimoResultado;
}
