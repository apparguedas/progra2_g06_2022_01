#include <gtest/gtest.h>
#include "./../src/envioPorServicioPostal.h"

using namespace std;

namespace
{
    TEST(EnvioPorServicioPostal_Test, Test_PrimeraClase_0_3)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioPorServicioPostal *envioPorServicioPostal = new EnvioPorServicioPostal(2, 1, 10);

        // Act - ejecute la operación
        float actual = envioPorServicioPostal->CalcularValorEnvio();
        float esperado = 3;

        delete envioPorServicioPostal;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperado, actual);
    }

    
}