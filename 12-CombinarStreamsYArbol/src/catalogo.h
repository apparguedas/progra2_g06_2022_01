#ifndef CATALOGO_H
#define CATALOGO_H

#include "categoria.h"
#include <vector>

using namespace std;

class Catalogo {

    vector<Categoria *> categorias;

    public:
    Catalogo();
    ~Catalogo();

    void AgregarCategoria(Categoria *nuevaCategoria);

    friend istream& operator >> (istream &o, Catalogo *catalogo);
    friend ostream& operator << (ostream &o, const Catalogo *catalogo);

};

#endif