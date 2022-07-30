#include <gtest/gtest.h>
#include "./../src/consolidadorTransaccionesAColones.h"
#include "proveedorTipoCambioPrueba.h"
#include "proveedorTransaccionesPrueba.h"

namespace
{
    TEST(ConsolidadorTransacciones_Test, Test_Consolidacion)
    {
        /// AAA

        // Arrange - configurar el escenario
        ProveedorTipoCambio *proveedorTipoCambio = new ProveedorTipoCambioPrueba(200);

        ProveedorTransaccionesPrueba *proveedorTransacciones = new ProveedorTransaccionesPrueba();
        Transaccion *transaccion1 = new Transaccion("USD", 1000);
        proveedorTransacciones->AgregarTransaccion(transaccion1);

        ConsolidadorTransaccionesAColones *consolidador 
            = new ConsolidadorTransaccionesAColones(proveedorTransacciones, proveedorTipoCambio);

        // Act - ejecute la operación
        double actual = consolidador->ConsolidarTransacciones("123");
        double esperada = 200000;

        delete consolidador;

        // Assert - valide los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }


}