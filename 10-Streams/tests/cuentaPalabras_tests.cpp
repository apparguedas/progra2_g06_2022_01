#include <gtest/gtest.h>
#include "./../src/cuentaPalabras.h"

namespace
{
    TEST(CuentaPalabras_Test, Test_1_Linea)
    {
        /// AAA

        // Arrange - configurar el escenario
        string stringEntrada = "Esta es una línea";
        istringstream stream(stringEntrada);

        CuentaPalabras *cuentaPalabras = new CuentaPalabras(&stream);

        // Act - ejecute la operación
        int actual = cuentaPalabras->ContarPalabras();
        int esperada = 4;

        delete cuentaPalabras;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }

    TEST(CuentaPalabras_Test, Test_Varias_lineas)
    {
        /// AAA

        // Arrange - configurar el escenario
        ostringstream streamSalidaPrueba {};
        streamSalidaPrueba << "Mauricio Ulate Quiros 41" << endl;
        streamSalidaPrueba << "Alvaro Fuentes Perez 35" << endl;
        streamSalidaPrueba << "Jose Francisco Porras Gonzalez 50" << endl;
        string stringVariasLineas = streamSalidaPrueba.str();

        istringstream stream (stringVariasLineas);

        CuentaPalabras *cuentaPalabras = new CuentaPalabras(&stream);

        // Act - ejecute la operación
        int actual = cuentaPalabras->ContarPalabras();
        int esperada = 13;

        delete cuentaPalabras;

        // Assert - valide los resultados
        EXPECT_EQ(esperada, actual);
    }



}