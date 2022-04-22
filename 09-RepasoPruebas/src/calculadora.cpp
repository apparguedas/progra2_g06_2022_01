#include "calculadora.h"

int Calculadora::Suma(int numero1, int numero2)
{
    return numero1 + numero2;
}

int Calculadora::OperacionEspecial(int numero)
{
    int resultado = 0;

    if (numero > 5)
    {
        resultado = numero * 2;
    }
    else
    {
        resultado = numero + 4;
    }

    return resultado;
}