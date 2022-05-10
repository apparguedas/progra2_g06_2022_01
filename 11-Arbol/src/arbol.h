#ifndef ARBOL_H
#define ARBOL_H

#include "nodo.h"

class Arbol {
    Nodo *raiz;

    public:
    Arbol(int idNodoRaiz, int valorNodoRaiz);
    ~Arbol();

    void InsertarValor(int idNodo, int nuevoValor, int idPadre);
    int ObtenerValor(int idNodo);    
};

#endif