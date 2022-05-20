#include "fraccion.h"

Fraccion::Fraccion(int numerador, int denominador) {
    this->numerador = numerador;
    this->denominador = denominador;
}

Fraccion::~Fraccion() {

}

float Fraccion::ToFloat() {
    return (float)this->numerador / (float)this->denominador;
}

bool Fraccion::operator== (Fraccion &f) {
    
    bool resultado = this->ToFloat() == f.ToFloat();
    return resultado;
}

ostream& operator << (ostream &o, const Fraccion *fraccion) {

    o << fraccion->numerador << "/" << fraccion->denominador;

    return o;
}

Fraccion operator + (Fraccion &fraccion1, Fraccion &fraccion2) {

    int denominadorFinal = fraccion1.denominador * fraccion2.denominador;

    int numerador1 = (denominadorFinal / fraccion1.denominador) * fraccion1.numerador;
    int numerador2 = (denominadorFinal / fraccion2.denominador) * fraccion2.numerador;
    int numeradorFinal = numerador1 + numerador2;

    Fraccion resultado {numeradorFinal, denominadorFinal};
    return resultado;
}

Fraccion operator + (Fraccion &fraccion1, int entero) {

    int numerador = fraccion1.numerador + (entero * fraccion1.denominador);
    
    Fraccion resultado { numerador, fraccion1.denominador };
    return resultado;
}