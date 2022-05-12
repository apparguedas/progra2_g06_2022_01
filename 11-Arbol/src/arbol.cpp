#include "arbol.h"
#include "nodo.h"

Arbol::Arbol(int idNodoRaiz, int valorNodoRaiz)
{
    // Agregar nodo raíz
    this->raiz = new Nodo(idNodoRaiz, valorNodoRaiz);
    this->indiceNodos.insert( std::pair<int, Nodo *>(idNodoRaiz, this->raiz) );
}

Arbol::~Arbol()
{
    delete this->raiz;
}

void Arbol::InsertarValor(int nuevoID, int nuevoValor, int idPadre)
{
    Nodo *nuevoNodo = new Nodo(nuevoID, nuevoValor);

    // Quién es el padre?
    Nodo *nodoPadre = this->indiceNodos.at(idPadre);

    nodoPadre->InsertarHijo(nuevoNodo);
    nuevoNodo->AsignePadre(nodoPadre);

    // Agregar nuevo nodo al índice
    this->indiceNodos.insert( std::pair<int, Nodo *>(nuevoID, nuevoNodo) );
}

int Arbol::ObtenerValor(int idNodo)
{
    Nodo *nodoConElValor = this->indiceNodos.at(idNodo);
    return nodoConElValor->ObtenerValor();
}