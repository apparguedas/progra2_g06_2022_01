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

    TEST(Test_Calculadora_Suma, Test_SumaDosNumerosFlotantes)
    {
        /// AAA

        // Arrange - configurar el escenario
        Calculadora calculadora;

        // Act - ejecute la operación
        float actual = calculadora.Suma(3.5, 5.25);
        float esperada = 8.75;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
}