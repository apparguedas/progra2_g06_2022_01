#include <iostream>
#include <fstream>
#include <sstream>

#include <string>

#include "cuentaPalabras.h"

using namespace std;

int main() {

    // Ejemplo 1: Streaming de consola

    /*string nombre {};
    string apellido1 {};
    string apellido2 {};
    int edad {0};


    std::cin >> nombre >> apellido1 >> apellido2 >> edad;
    std::cout << "Su nombre es " 
            << nombre 
            << " " 
            << apellido1 
            << " " 
            << apellido2 
            << endl
            << "El profe tiene " << edad << " años."
            << endl;*/

    // Ejemplo2: lectura de archivos
    /*ifstream ifs("ejemplo.txt", std::ifstream::in); // Por default abriendo como texto

    if (!ifs.is_open())
    {
        std::cerr << "Error leyendo archivo ejemplo.txt" << std::endl;
        return -1;
    }

    std::string linea {};

    while (std::getline(ifs, linea)) {
        // Mientras el getline obtenga alguna línea,
        // procesar línea
        std::cout << "Línea: " << linea << endl;
    }

    ifs.close();*/

    // Ejemplo 3: Stream de strings
    /*string nombre {};
    string apellido1 {};
    string apellido2 {};
    int edad {0};

    string stringEntrada = "Mauricio Ulate Quiros 41";
    istringstream stream(stringEntrada);
    stream >> nombre >> apellido1 >> apellido2 >> edad;

    std::cout << "Su nombre es " 
            << nombre 
            << " " 
            << apellido1 
            << " " 
            << apellido2 
            << endl
            << "El profe tiene " << edad << " años."
            << endl;*/

    ifstream ifs("ejemplo.txt", std::ifstream::in); // Por default abriendo como texto

    if (!ifs.is_open())
    {
        std::cerr << "Error leyendo archivo ejemplo.txt" << std::endl;
        return -1;
    }

    CuentaPalabras *cuentaPalabras = new CuentaPalabras(&ifs);
    std::cout << "Número de palabras: " << cuentaPalabras->ContarPalabras();
    delete cuentaPalabras;

    ifs.close();

    return 0;
}