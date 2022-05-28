#include "categoria.h"

Categoria::Categoria() {

}

Categoria::Categoria(int idNuevo, string nombreNuevo, int idSuperCategoriaNuevo) {
    this->id = idNuevo;
    this->nombre = nombreNuevo;
    this->idSuperCategoria = idSuperCategoriaNuevo;
}

Categoria::~Categoria() {
    
}

ostream& operator << (ostream &o, const Categoria *categoria)
{
    o << categoria->id << "," << categoria->nombre << "," << categoria->idSuperCategoria;

    return o;
}

istream& operator >> (istream &i, Categoria *categoria)
{
    i >> categoria->id >> categoria->nombre >> categoria->idSuperCategoria;
    return i;
}