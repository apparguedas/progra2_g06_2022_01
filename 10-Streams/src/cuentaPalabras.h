#ifndef CUENTA_PALABRAS_H
#define CUENTA_PALABRAS_H

#include <istream>
#include <string>

using namespace std;

class CuentaPalabras {

    istream *streamEntrada;

    public:
    // Inyección de dependencias
    CuentaPalabras(istream *streamEntradaNuevo);
    ~CuentaPalabras();

    int ContarPalabras();

};

#endif