#ifndef CALCULADORA_H
#define CALCULADORA_H

/**
* @file
* @author Mauricio Ulate <mulate@gmail.com>
* @version 1.0
*
* @section LICENSE
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License as
* published by the Free Software Foundation; either version 2 of
* the License, or (at your option) any later version.
*
* @section DESCRIPTION
*
* Este archivo contiene la definición de una calculadora
*/

namespace Progra2
{

   /**
    * @brief Una clase calculadora
    * @author Mauricio Ulate
    *
    * Esta clase implementa una calculadora que suma dos números.
    */
    class Calculadora {

        public:

        /**
        * Función que suma dos números
        *
        * @param numero1 Primer número a sumar
        * @param numero2 Segundo número a sumar
        * @return Un entero con la suma de numero1 y numero2
        */
        int Sumar(int numero1, int numero2);

    };
}

#endif