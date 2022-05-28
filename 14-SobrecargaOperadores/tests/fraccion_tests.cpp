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
        Fraccion fraccion3 {1, 3};

        // Act - ejecute la operación
        bool actual = (fraccion1 == fraccion2);
        float esperada = true;

        bool actual2 = (fraccion1 == fraccion3);
        float esperada2 = false;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
        EXPECT_EQ(esperada2, actual2);
    }

    TEST(Fraccion_Test, Test_Fracciones_Diferente)
    {
        /// AAA

        // Arrange - configurar el escenario
        Fraccion fraccion1 {1, 2};
        Fraccion fraccion2 {1, 3};
        Fraccion fraccion3 {2, 6};

        // Act - ejecute la operación
        bool actual = (fraccion1 != fraccion2);
        float esperada = true;

        bool actual2 = (fraccion2 != fraccion3);
        float esperada2 = false;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
        EXPECT_EQ(esperada2, actual2);
    }

    TEST(Fraccion_Test, Test_Fracciones_MayorIgual)
    {
        /// AAA

        // Arrange - configurar el escenario
        Fraccion fraccion1 {1, 2};
        Fraccion fraccion2 {1, 3};
        Fraccion fraccion3 {2, 6};


        // Act - ejecute la operación
        bool actual = (fraccion1 >= fraccion2);
        float esperada = true;

        bool actual2 = (fraccion2 >= fraccion3);
        float esperada2 = true;

        bool actual3 = (fraccion3 >= fraccion1);
        float esperada3 = false;


        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
        EXPECT_EQ(esperada2, actual2);
        EXPECT_EQ(esperada3, actual3);
    }

    TEST(Fraccion_Test, Test_Fracciones_Mayor)
    {
        /// AAA

        // Arrange - configurar el escenario
        Fraccion fraccion1 {1, 2};
        Fraccion fraccion2 {1, 3};
        Fraccion fraccion3 {2, 6};


        // Act - ejecute la operación
        bool actual = (fraccion1 > fraccion2);
        float esperada = true;

        bool actual2 = (fraccion2 > fraccion3);
        float esperada2 = false;

        bool actual3 = (fraccion3 >= fraccion1);
        float esperada3 = false;


        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
        EXPECT_EQ(esperada2, actual2);
        EXPECT_EQ(esperada3, actual3);
    }
    
    TEST(Fraccion_Test, Test_Fracciones_Menor)
    {
        /// AAA

        // Arrange - configurar el escenario
        Fraccion fraccion1 {1, 2};
        Fraccion fraccion2 {1, 3};
        Fraccion fraccion3 {2, 6};


        // Act - ejecute la operación
        bool actual = (fraccion1 < fraccion2);
        float esperada = false;

        bool actual2 = (fraccion2 < fraccion3);
        float esperada2 = false;

        bool actual3 = (fraccion3 < fraccion1);
        float esperada3 = true;


        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
        EXPECT_EQ(esperada2, actual2);
        EXPECT_EQ(esperada3, actual3);
    }
    
    TEST(Fraccion_Test, Test_Fracciones_MenorIgual)
    {
        /// AAA

        // Arrange - configurar el escenario
        Fraccion fraccion1 {1, 2};
        Fraccion fraccion2 {1, 3};
        Fraccion fraccion3 {2, 6};


        // Act - ejecute la operación
        bool actual = (fraccion1 <= fraccion2);
        float esperada = false;

        bool actual2 = (fraccion2 <= fraccion3);
        float esperada2 = true;

        bool actual3 = (fraccion3 <= fraccion1);
        float esperada3 = true;


        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
        EXPECT_EQ(esperada2, actual2);
        EXPECT_EQ(esperada3, actual3);
    }
    
}