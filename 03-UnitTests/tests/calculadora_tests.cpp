#include <gtest/gtest.h>
#include "../src/calculadora.h"

namespace
{
    TEST(Calculadora_Factorial_Test, Test_0_Retorna_1)
    {
        /// AAA

        // Arrange - configurar el escenario
        Calculadora calculadora;

        // Act - ejecute la operación
        int actual = calculadora.Factorial(0);
        int esperada = 1;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }

    TEST(Calculadora_Factorial_Test, Test_1_Retorna_1)
    {
        /// AAA

        // Arrange - configurar el escenario
        Calculadora calculadora;

        // Act - ejecute la operación
        int actual = calculadora.Factorial(1);
        int esperada = 1;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }

    TEST(Calculadora_Factorial_Test, Test_2_Retorna_2)
    {
        /// AAA

        // Arrange - configurar el escenario
        Calculadora calculadora;

        // Act - ejecute la operación
        int actual = calculadora.Factorial(2);
        int esperada = 2;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }

    TEST(Calculadora_Factorial_Test, Test_3_Retorna_6)
    {
        /// AAA

        // Arrange - configurar el escenario
        Calculadora calculadora;

        // Act - ejecute la operación
        int actual = calculadora.Factorial(3);
        int esperada = 6;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }

    TEST(Calculadora_Factorial_Test, Test_4_Retorna_24)
    {
        /// AAA

        // Arrange - configurar el escenario
        Calculadora calculadora;

        // Act - ejecute la operación
        int actual = calculadora.Factorial(4);
        int esperada = 24;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
}