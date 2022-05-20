#include "../lib/calculadora.h"
#include <iostream>

int main() {

    Progra2::Calculadora *calculadora = new Progra2::Calculadora();

    int total = calculadora->Sumar(1, 2);
    std::cout << "La suma da " << total << std::endl;

    return 0;
}