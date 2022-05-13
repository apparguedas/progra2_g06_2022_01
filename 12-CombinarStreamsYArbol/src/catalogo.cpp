#include "catalogo.h"
#include <iostream>
#include <sstream>
#include <string>

Catalogo::Catalogo() {

}

Catalogo::~Catalogo() {
    for (Categoria *categoria : this->categorias)
    {
        delete categoria;
    }
}

void Catalogo::AgregarCategoria(Categoria *nuevaCategoria) {
    this->categorias.push_back(nuevaCategoria);
}

ostream& operator << (ostream &o, const Catalogo *catalogo)
{
    for (Categoria *categoria : catalogo->categorias)
    {
        o << categoria << endl;
    }

    return o;
}

istream& operator >> (istream &i, Catalogo *catalogo)
{
    
    string linea;

    while (std::getline(i, linea)) {
        // Mientras el getline obtenga alguna línea,
        // procesar línea

        std::istringstream streamLinea(linea);

        Categoria *nuevaCategoria = new Categoria();
        streamLinea >> nuevaCategoria;

        catalogo->AgregarCategoria(nuevaCategoria);
    }

    return i;
}