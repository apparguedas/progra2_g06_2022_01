#ifndef LISTA_H
#define LISTA_H

#include "nodo.h"

class Lista {

    Nodo *primerNodo;

    public:
    Lista();
    Lista(int primerValor);

    ~Lista(); // Destructor

    void AgregarValor(int nuevoValor);

};

#endif