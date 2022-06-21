#include <gtest/gtest.h>
#include "./../src/transaccion.h"

namespace
{
    TEST(Transaccion_Test, Test_ObtenerMoneda)
    {
        /// AAA

        // Arrange - configurar el escenario
        Transaccion *transaccion = new Transaccion("USD", 10500.25);

        // Act - ejecute la operación
        string actual = transaccion->ObtenerMoneda();
        string esperada = "USD";

        delete transaccion;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }

    TEST(Transaccion_Test, Test_ObtenerMonto)
    {
        /// AAA

        // Arrange - configurar el escenario
        Transaccion *transaccion = new Transaccion("USD", 10500.25);

        // Act - ejecute la operación
        double actual = transaccion->ObtenerMonto();
        double esperada = 10500.25;

        delete transaccion;

        // Assert - valide los resultados
        EXPECT_DOUBLE_EQ(esperada, actual);
    }

}