#ifndef PROVEEDORTRANSACCIONES_H
#define PROVEEDORTRANSACCIONES_H

#include <vector>
#include "transaccion.h"
using namespace std;

/**
* @brief Abstracción del proveedor de transacciones
* @author Mauricio Ulate
*
* Esta clase abstracta define qué se debe de incluir a la hora de implementar un proveedor de transacciones.
*/
class ProveedorTransacciones {

    public:

    /**
    * Método que devuelve las transacciones del usuario
    *
    * @param usuario Nombre de usuario dueño de las transacciones
    * @return Lista de transacciones del usuario
    */
    virtual vector<Transaccion *> ObtenerTransaccionesDelUsuario(string usuario) = 0;
};

#endif