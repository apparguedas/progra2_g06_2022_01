#ifndef SERVICIOPOSTAL_H
#define SERVICIOPOSTAL_H

#include "tipoEnvio.h"

class EnvioPorServicioPostal : public TipoEnvio {

    int peso;
    int clase; // enum
    int distancia;

    public:
    EnvioPorServicioPostal(int peso, int clase, int distancia);

    virtual float CalcularValorEnvio();
};

#endif