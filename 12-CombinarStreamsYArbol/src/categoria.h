#ifndef CATEGORIA_H
#define CATEGORIA_H

#include <string>
#include <iostream>

using namespace std;

class Categoria {

    int id;
    string nombre;
    int idSuperCategoria;

    public:
    Categoria();
    Categoria(int idNuevo, string nombreNuevo, int idSuperCategoriaNuevo);
    ~Categoria();

    friend istream& operator >> (istream &o, Categoria *categoria);
    friend ostream& operator << (ostream &o, const Categoria *categoria);
};

#endif