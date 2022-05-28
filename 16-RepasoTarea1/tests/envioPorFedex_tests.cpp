#include <gtest/gtest.h>
#include "./../src/envioPorFedex.h"

using namespace std;

namespace
{
    TEST(EnvioPorFedex_Test, Test_DistanciaMenor500_PesoMenor10)
    {
        /// AAA

        // Arrange - configurar el escenario
        EnvioPorFedex *envioPorFedex = new EnvioPorFedex(5, 200);

        // Act - ejecute la operación
        float actual = envioPorFedex->CalcularValorEnvio();
        float esperado = 35;

        delete envioPorFedex;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperado, actual);
    }

    
}