#ifndef FRACCION_H
#define FRACCION_H

#include <iostream>

using namespace std;

class Fraccion {

    int numerador;
    int denominador;

    public:
    Fraccion(int numerador, int denominador);
    ~Fraccion();

    float ToFloat();

    // Operadores miembro
    bool operator == (Fraccion &f); // Comparación

    bool operator != (Fraccion &f); // Comparación
    bool operator >= (Fraccion &f); // Comparación
    bool operator > (Fraccion &f); // Comparación
    bool operator < (Fraccion &f); // Comparación
    bool operator <= (Fraccion &f); // Comparación

    // Operadores no miembro
    friend Fraccion operator + (Fraccion &fraccion1, Fraccion &fraccion2); // Suma
    friend Fraccion operator + (Fraccion &fraccion1, int entero); // Suma

    friend ostream& operator << (ostream &o, const Fraccion *fraccion);
};

#endif