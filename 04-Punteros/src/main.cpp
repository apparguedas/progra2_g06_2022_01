#include "calculadora.h"

int main() {

    Calculadora calculadora {};
    int resultado = calculadora.Sumar(1, 2);

    Calculadora* calculadoraPuntero = new Calculadora();
    
    int resultadoPuntero = calculadoraPuntero->Sumar(1, 3);
    
    delete calculadoraPuntero;


    return 0;
}