#include "consolidadorTransaccionesAColones.h"
#include "transaccion.h"
#include <vector>

using namespace std;

ConsolidadorTransaccionesAColones::ConsolidadorTransaccionesAColones(ProveedorTransacciones *proveedorTransacciones, ProveedorTipoCambio *proveedorTipoCambio)
{
    this->proveedorTransacciones = proveedorTransacciones;
    this->proveedorTipoCambio = proveedorTipoCambio;
}

double ConsolidadorTransaccionesAColones::ConsolidarTransacciones(string usuario)
{
    vector<Transaccion *> listaTransaccionesUsuario = proveedorTransacciones->ObtenerTransaccionesDelUsuario(usuario);

    double total = 0;

    for (Transaccion *transaccion : listaTransaccionesUsuario)
    {
        string monedaTransaccion = transaccion->ObtenerMoneda();
        double montoOriginal = transaccion->ObtenerMonto();

        double tipoCambio = proveedorTipoCambio->ObtenerTipoDeCambioAColones(monedaTransaccion);
        double montoTransaccionEnColones = montoOriginal * tipoCambio;

        total += montoTransaccionEnColones;
    }

    return total;
}