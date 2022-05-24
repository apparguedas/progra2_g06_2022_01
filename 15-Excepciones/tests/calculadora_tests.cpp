#include <gtest/gtest.h>
#include "./../src/calculadora.h"
#include <sstream>
#include <string>
#include "./../src/excepcionDivideEntreCero.h"

using namespace std;

namespace
{
    TEST(Calculadora_Test, Test_Dividir_Camino_Feliz)
    {
        /// AAA

        // Arrange - configurar el escenario
        Calculadora *calculadora = new Calculadora();

        // Act - ejecute la operación
        int actual = calculadora->Dividir(6, 3);
        int esperado = 2;

        delete calculadora;

        // Assert - valide los resultados
        EXPECT_EQ(esperado, actual);
    }

    TEST(Calculadora_Test, Test_Dividir_Dividir_Entre_0)
    {
        /// AAA

        // Arrange - configurar el escenario
        Calculadora *calculadora = new Calculadora();

        // Act - ejecute la operación
        EXPECT_THROW({
            int actual = calculadora->Dividir(6, 0);
        }, ExcepcionDivideEntreCero);

        delete calculadora;

        // Assert - valide los resultados
    }

    
}