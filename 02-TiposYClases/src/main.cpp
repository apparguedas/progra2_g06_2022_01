#include <iostream>
#include <string>
#include "calculadora.h"

int main() {

    // Definir variables
    int suma {0};
    float pi {3.14};
    
    int x[] = {1,2,3}; // Arreglo x tiene tamaño 3
    int y[5] = {1,2,3}; // Arreglo y tiene 5 campos = 1,2,3,0,0
    int z[3] = {0}; // Arreglo z de tamaño 3 todos los valores en 0

    // Modificar un valor dentro del arreglo
    y[0] = 150;

    suma += 150;
    suma = suma + 200;

    std::cout << suma;

    // Uso de hileras
    std::string hilera {"Esta es mi primer string"};

    Calculadora calculadora {};
    int resultado = calculadora.sumar(1, 2);

    return 0; 

}