#include "rutaEnvios.h"

RutaEnvios::RutaEnvios()
{

}

void RutaEnvios::AgregarEnvioARuta(TipoEnvio *envio)
{
    this->enviosEnRuta.push_back(envio);
}

float RutaEnvios::CalcularValorTotalEnviosEnRuta()
{
    float total = 0;

    for (TipoEnvio *envio : this->enviosEnRuta)
    {
        total += envio->CalcularValorEnvio();
    }

    return total;
}