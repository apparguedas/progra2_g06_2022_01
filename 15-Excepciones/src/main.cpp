#include "calculadora.h"
#include <iostream>
#include "excepcionNumeroNegativo.h"
#include "excepcionDivideEntreCero.h"
#include "convertidorTipoCambio.h"

int main() {

    Calculadora *calculadora = new Calculadora();
    ConvertidorTipoCambio *convertidor = new ConvertidorTipoCambio(calculadora, 0, 0);

    try
    {
        /* code */
        float cantidad = 50000;
        float resultado = convertidor->Comprar(cantidad);
        std::cout << "Resultado: " << resultado;

    }
    catch(const ExcepcionNumeroNegativo& e)
    {
        std::cerr << "Se detectó un número negativo. " << e.what() << '\n';
    }
    catch(const ExcepcionDivideEntreCero& e)
    {
        std::cerr << "Se detectó una división entre 0. " << e.what() << '\n';
    }
    catch(const std::exception& e)
    {
        // Catch all
        std::cerr << "Excepción que no conozco. " << e.what() << '\n';
    }
    

    std::cout << "El programa continuó sin problemas." << std::endl;

    delete calculadora;
    delete convertidor;


    return 0;
}