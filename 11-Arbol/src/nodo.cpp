#include "nodo.h"

Nodo::Nodo(int id, int valor)
{
    this->id = id;
    this->valor = valor;
}

Nodo::~Nodo() 
{

}

void Nodo::InsertarHijo(Nodo *hijo)
{
    this->hijos.push_back(hijo);
}

int Nodo::ObtenerID()
{
    return this->id;
}

int Nodo::ObtenerValor()
{
    return this->valor;
}

void Nodo::AsignePadre(Nodo *padre)
{
    
}

vector<Nodo *> Nodo::ObtenerHijos()
{
    return this->hijos;
}