#ifndef TRANSACCION_H
#define TRANSACCION_H

#include <string>

using namespace std;

/**
* @brief Clase que define los contenidos de una transacción
* @author Mauricio Ulate
*
* Esta clase implementa una transacción multimoneda.
*/
class Transaccion {

    string moneda;
    double monto;

    public:
    Transaccion(string moneda, double monto);

    string ObtenerMoneda();
    double ObtenerMonto();

};

#endif