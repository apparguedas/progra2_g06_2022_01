#ifndef consolidadorTransaccionesAColones_H
#define consolidadorTransaccionesAColones_H

#include <string>
#include "proveedorTransacciones.h"
#include "proveedorTipoCambio.h"

using namespace std;

/**
* @brief Consolidador de transacciones a colones
* @author Mauricio Ulate
*
* Esta clase implementa un procesador de transacciones 
* que obtiene de un proveedor las transacciones de un usuario, 
* las consolida todas en colones y devuelve la suma del monto 
* de todas las transacciones.
*/
class ConsolidadorTransaccionesAColones {

    ProveedorTransacciones *proveedorTransacciones;
    ProveedorTipoCambio *proveedorTipoCambio;

    public:
    /**
    * Constructor del consolidador de transacciones a colones
    *
    * @param proveedorTransacciones Instancia de la implementación de una clase que implemente el ProveedorTransacciones
    * @param proveedorTipoCambio Instancia de la implementación de una clase que implemente el ProveedorTipoCambio
    */
    ConsolidadorTransaccionesAColones(ProveedorTransacciones *proveedorTransacciones, ProveedorTipoCambio *proveedorTipoCambio);

    /**
    * Método que consolida el monto de las transacciones de un usuario hacia colones
    *
    * @param usuario Nombre de usuario dueño de las transacciones
    * @return Suma total de las transacciones del usuario
    */
    double ConsolidarTransacciones(string usuario);

};

#endif