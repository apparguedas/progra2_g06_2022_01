#include "calculadora.h"

int Calculadora::Sumar(int numero1, int numero2) {
    return numero1 + numero2;
}

int Calculadora::Factorial(int numero) {

    if (numero > 1)
    {
        return numero * Factorial(numero - 1);
    }

    return 1;
}