#include "cuentaPalabras.h"
#include <iostream>
#include <sstream>

CuentaPalabras::CuentaPalabras(istream *streamEntradaNuevo) {
    this->streamEntrada = streamEntradaNuevo;
}

CuentaPalabras::~CuentaPalabras() {
    
}

int CuentaPalabras::ContarPalabras() {

    std::string linea {};
    std::string palabra {};

    int conteoPalabras {0};

    while (std::getline(*(this->streamEntrada), linea)) {
        // Mientras el getline obtenga alguna línea,
        // procesar línea

        std::istringstream stream(linea);
        while (stream >> palabra)
        {
            conteoPalabras++;
        }

    }

    return conteoPalabras;
}