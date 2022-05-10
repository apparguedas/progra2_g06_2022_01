#ifndef ARBOL_H
#define ARBOL_H

#include "nodo.h"
#include <map>

using namespace std;

class Arbol {
    Nodo *raiz;

    map<int, Nodo *> indiceNodos;

    public:
    Arbol(int idNodoRaiz, int valorNodoRaiz);
    ~Arbol();

    void InsertarValor(int nuevoID, int nuevoValor, int idPadre);
    int ObtenerValor(int idNodo);    
};

#endif