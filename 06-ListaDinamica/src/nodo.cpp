#include "nodo.h"

Nodo::Nodo(int valorNuevo) {
    this->valor = valorNuevo;
    this->siguiente = nullptr;
}

void Nodo::AsignarPunteroSiguiente(Nodo *punteroAlNodo) {
    this->siguiente = punteroAlNodo;
}

Nodo::~Nodo() {
    
}

Nodo* Nodo::ObtenerPunteroSiguiente() {
    return this->siguiente;
}