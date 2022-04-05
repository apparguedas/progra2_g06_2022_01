#include <iostream>
#include <string>
#include "calculadora.h"


int main() {

    // Definir variables
    int suma {0};
    float pi {3.14};
    
    float arregloFloats[5] = {1};
    int x[] = {1,2,3}; // Arreglo x tiene tamaño 3
    int y[5] = {1,2,3}; // Arreglo y tiene 5 campos = 1,2,3,0,0
    int z[3] = {0}; // Arreglo z de tamaño 3 todos los valores en 0

    // Modificar un valor dentro del arreglo
    y[0] = 150;

    suma += 150;
    suma = suma + 200;

    std::cout << "La suma total es: " << suma << std::endl;
    std::cout << "Esta es otra línea" << std::endl; 

    // Uso de hileras
    std::string hilera {"Esta es mi primer string"};

    Calculadora calculadora {0};
    int resultado = calculadora.Sumar(1, 2);

    return 0; 

}