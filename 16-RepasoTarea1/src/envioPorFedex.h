#ifndef ENVIOPORFEDEX_H
#define ENVIOPORFEDEX_H

#include "TipoEnvio.h"

class EnvioPorFedex : public TipoEnvio {

    int peso;
    int distancia;
    
    public:
    EnvioPorFedex(int peso, int distancia);

    virtual float CalcularValorEnvio(); 

};


#endif