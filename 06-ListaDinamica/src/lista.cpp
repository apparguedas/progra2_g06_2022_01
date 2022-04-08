#include "lista.h"

Lista::Lista() {
    this->primerNodo = nullptr;
}

Lista::Lista(int primerValor) {
    this->primerNodo = new Nodo(primerValor);
}

Lista::~Lista() {

    if (this->primerNodo == nullptr)
    {
        // La lista está vacía
        return;
    }

    Nodo *nodoActual = this->primerNodo;
    while (nodoActual != nullptr)
    {
        Nodo *nodoSiguiente = nodoActual->ObtenerPunteroSiguiente();
        
        delete nodoActual;
        nodoActual = nodoSiguiente;
    }

}


void Lista::AgregarValor(int nuevoValor) {
    
    Nodo *nuevoNodo = new Nodo(nuevoValor);

    // Verificar si la lista está vacía
    if (this->primerNodo == nullptr) {

        this->primerNodo = nuevoNodo;
        return;
    }

    // Recorrer la lista hasta esté el nodo donde el puntero siguiente sea nulo
    Nodo *nodoActual = this->primerNodo;

    while (nodoActual->ObtenerPunteroSiguiente() != nullptr)
    {
        nodoActual = nodoActual->ObtenerPunteroSiguiente();
    }

    // Estamos al final de la lista
    nodoActual->AsignarPunteroSiguiente(nuevoNodo);

}

