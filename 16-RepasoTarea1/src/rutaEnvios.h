#ifndef RUTAENVIOS_H
#define RUTAENVIOS_H

#include "TipoEnvio.h"
#include <vector>

using namespace std;

class RutaEnvios {

    vector<TipoEnvio *> enviosEnRuta;

    public:
    RutaEnvios();

    void AgregarEnvioARuta(TipoEnvio *envio);
    float CalcularValorTotalEnviosEnRuta();
};

#endif