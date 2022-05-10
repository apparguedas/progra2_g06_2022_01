#ifndef NODO_H
#define NODO_H

#include <vector>

using namespace std;

class Nodo {

    int id;
    int valor;
    vector<Nodo *> hijos;
    Nodo *padre;

    public:
    Nodo(int id, int valor);
    ~Nodo();

    void InsertarHijo(Nodo *hijo);
    
    int ObtenerID();
    int ObtenerValor();

    void AsignePadre(Nodo *padre);
    vector<Nodo *> ObtenerHijos();
};

#endif