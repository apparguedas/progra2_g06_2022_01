#ifndef proveedorTipoCambio_H
#define proveedorTipoCambio_H

#include <string>

using namespace std;

/**
* @brief Abstracción del proveedor de tipo de cambio a colones
* @author Mauricio Ulate
*
* Esta clase abstracta define qué se debe de incluir a la hora de implementar un proveedor de tipo de cambio a colones.
*/
class ProveedorTipoCambio {

    public:

    /**
    * Método que devuelve el tipo de cambio actual para una moneda hacia colones
    *
    * @param moneda Moneda de referencia para el tipo de cambio
    * @return El tipo de cambio para convertir un monto a colones
    */
    virtual double ObtenerTipoDeCambioAColones(string moneda) = 0;
};

#endif 