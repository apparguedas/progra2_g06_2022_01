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

void Arbol::InsertarValor(int idNodo, int nuevoValor, int idPadre)
{
    
}

int Arbol::ObtenerValor(int idNodo)
{
    Nodo *nodoConElValor = this->indiceNodos.at(idNodo);
    return nodoConElValor->ObtenerValor();
}