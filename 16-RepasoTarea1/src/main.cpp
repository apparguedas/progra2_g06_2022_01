
#include "tipoEnvio.h"
#include "envioPorFedex.h"
#include "envioPorServicioPostal.h"
#include "rutaEnvios.h"
#include <vector>
#include <iostream>

using namespace std;

int main() {

    // Ejemplo 1
    vector<TipoEnvio *> arregloEnvios;

    EnvioPorFedex *envio1 = new EnvioPorFedex(5, 10);
    arregloEnvios.push_back(envio1);

    EnvioPorFedex *envio2 = new EnvioPorFedex(5, 10);
    arregloEnvios.push_back(envio2);

    EnvioPorServicioPostal *envio3 = new EnvioPorServicioPostal(8, 1, 25);
    arregloEnvios.push_back(envio3);


    float totalMontoEnvios = 0;

    for (TipoEnvio* envio : arregloEnvios)
    {
        totalMontoEnvios += envio->CalcularValorEnvio();
    }

    cout << "El monto total de los envíos es de " << totalMontoEnvios << endl;

    delete envio1;
    delete envio2;
    delete envio3;


    // Ejemplo 2:
    RutaEnvios *ruta = new RutaEnvios();
    ruta->AgregarEnvioARuta(envio1);
    ruta->AgregarEnvioARuta(envio2);
    ruta->AgregarEnvioARuta(envio3);

    float resultado = ruta->CalcularValorTotalEnviosEnRuta();

}