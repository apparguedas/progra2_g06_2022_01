#include <gtest/gtest.h>
#include "./../src/calculadora.h"

namespace
{
    TEST(Calculadora_Test, Test_Suma)
    {
        /// AAA

        // Arrange - configurar el escenario
        Progra2::Calculadora *calculadora = new Progra2::Calculadora();

        // Act - ejecute la operación
        int actual = calculadora->Sumar(1, 2);
        int esperada = 3;

        delete calculadora;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }


}