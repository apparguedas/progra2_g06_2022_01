#include "calculadora.h"
#include "excepcionDivideEntreCero.h"
#include <exception>
#include "excepcionNumeroNegativo.h"

int Calculadora::Sumar(int numero1, int numero2)
{
    return 0;
}

int Calculadora::Restar(int numero1, int numero2)
{
    return 0;
}

int Calculadora::Multiplicar(int numero1, int numero2)
{
    return 0;
}

int Calculadora::Dividir(float numero1, float numero2)
{
    if (numero2 == 0)
    {
        // Escenario de excepción
        throw ExcepcionDivideEntreCero();
    }

    return numero1 / numero2;
}

int Calculadora::Fibonacci(int numero)
{
    if (numero < 0)
    {
        throw ExcepcionNumeroNegativo();
    }

    if (numero <= 1)
    {
        return 1;
    }

    return numero * Fibonacci(numero - 1);

}