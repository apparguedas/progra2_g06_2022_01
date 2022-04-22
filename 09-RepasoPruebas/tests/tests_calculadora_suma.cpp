#include <gtest/gtest.h>
#include "../src/calculadora.h"

namespace
{
    TEST(Test_Calculadora_Suma, Test_SumaDosNumerosEnteros)
    {
        /// AAA

        // Arrange - configurar el escenario
        Calculadora calculadora;

        // Act - ejecute la operación
        int actual = calculadora.Suma(1, 2);
        int esperada = 3;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
}