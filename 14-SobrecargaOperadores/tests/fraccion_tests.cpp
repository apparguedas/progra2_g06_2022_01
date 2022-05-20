#include <gtest/gtest.h>
#include "./../src/fraccion.h"
#include <sstream>
#include <string>

using namespace std;

namespace
{
    TEST(Fraccion_Test, Test_StreamSalida)
    {
        /// AAA

        // Arrange - configurar el escenario
        Fraccion *fraccion = new Fraccion(1, 2);

        // Act - ejecute la operación
        ostringstream streamSalida;
        streamSalida << fraccion;

        string actual = streamSalida.str();
        string esperada = "1/2";

        delete fraccion;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }

    TEST(Fraccion_Test, Test_Suma_Fracciones)
    {
        /// AAA

        // Arrange - configurar el escenario
        Fraccion fraccion1 {1, 3};
        Fraccion fraccion2 {1, 2};

        // Act - ejecute la operación
        Fraccion fraccionResultado = fraccion1 + fraccion2;

        ostringstream streamSalida;
        streamSalida << &fraccionResultado;

        string actual = streamSalida.str();
        string esperada = "5/6";

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }

    TEST(Fraccion_Test, Test_Suma_Fraccion_Mas_Entero)
    {
        /// AAA

        // Arrange - configurar el escenario
        Fraccion fraccion1 {1, 3};

        // Act - ejecute la operación
        Fraccion fraccionResultado = fraccion1 + 2;

        ostringstream streamSalida;
        streamSalida << &fraccionResultado;

        string actual = streamSalida.str();
        string esperada = "7/3";

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }

    TEST(Fraccion_Test, Test_Fraccion_A_Float)
    {
        /// AAA

        // Arrange - configurar el escenario
        Fraccion fraccion1 {3, 4};

        // Act - ejecute la operación
        float actual = fraccion1.ToFloat();
        float esperada = 0.75;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperada, actual);
    }

    TEST(Fraccion_Test, Test_Igualdad_Fracciones)
    {
        /// AAA

        // Arrange - configurar el escenario
        Fraccion fraccion1 {1, 2};
        Fraccion fraccion2 {2, 4};

        // Act - ejecute la operación
        bool actual = (fraccion1 == fraccion2);
        float esperada = true;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }
}